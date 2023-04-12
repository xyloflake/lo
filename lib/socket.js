import { Loop } from 'lib/loop.js'
import { net } from 'lib/net.js'
import { system } from 'lib/system.js'

const { SystemError } = system
const { AF_INET, SOCK_STREAM, SOCK_NONBLOCK, MSG_NOSIGNAL } = net.constants
const { EINPROGRESS, EAGAIN } = system.constants
const { Readable, Writable, EdgeTriggered } = Loop

class Socket {
  fd = 0
  offset = 0
  flags = Writable | EdgeTriggered
  sockaddr = undefined
  loop = undefined

  constructor (loop) {
    this.loop = loop
  }

  async connect (port = 3000, address = '127.0.0.1') {
    if (!this.sockaddr) this.sockaddr = net.types.sockaddr_in(address, port)
    const fd = net.socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0)
    if (fd < 0) throw new SystemError('net.socket')
    const rc = net.connect(fd, this.sockaddr.address, 16)
    if (rc < 0 && system.errno !== EINPROGRESS) throw new SystemError('net.connect')
    this.fd = fd
    await this.connected()
  }

  async send (buf, len = buf.size) {
    const { fd, offset } = this
    const towrite = len - offset
    system.errno = 0
    const written = net.send(fd, buf.ptr + offset, towrite, MSG_NOSIGNAL)
    if (written === towrite) {
      this.offset = 0
      return written
    }
    if (written === -1) {
      if (system.errno === EAGAIN) {
        await this.writable()
        return this.send()
      }
      this.close()
      throw new SystemError('net.send')
    }
    this.offset += written
    await this.writable()
    return this.send()
  }

  async recv (buf) {
    const { fd } = this
    const bytes = net.recv(fd, buf.ptr, buf.size, 0)
    if (bytes > 0) return bytes
    if (bytes === -1) {
      if (system.errno === EAGAIN) {
        await this.readable()
        return this.recv(buf)
      }
    }
    this.close()
    throw new SystemError('net.send')
  }

  connected () {
    const { loop, fd } = this
    this.flags = Writable | EdgeTriggered
    return new Promise((resolve, reject) => {
      const rc = loop.add(fd, () => resolve(), this.flags)
      if (rc === -1) reject(new SystemError('loop.add'))
    })
  }

  writable () {
    if (this.flags & Writable === Writable) return Promise.resolve(true)
    const { loop, fd } = this
    return new Promise((resolve, reject) => {
      const rc = loop.modify(fd, Writable | EdgeTriggered, () => resolve(true))
      if (rc === -1) reject(new SystemError('loop.modify'))
      this.flags = Writable | EdgeTriggered
    })
  }

  readable () {
    if (this.flags & Readable === Readable) return Promise.resolve(true)
    const { loop, fd } = this
    return new Promise((resolve, reject) => {
      const rc = loop.modify(fd, Readable, () => resolve(true))
      if (rc === -1) reject(new SystemError('loop.modify'))
      this.flags = Readable
    })
  }

  close () {
    return net.close(this.fd)
  }
}

export { Socket }