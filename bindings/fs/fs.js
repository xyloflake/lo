const api = {
  close: {
    parameters: ['i32'],
    result: 'i32'
  },
  open: {
    parameters: ['string', 'i32', 'i32'],
    pointers: ['const char*'],
    result: 'i32'
  },
  read: {
    parameters: ['i32', 'buffer', 'i32'],
    result: 'i32'
  },
  pread: {
    parameters: ['i32', 'buffer', 'i32', 'u32'],
    result: 'i32'
  },
  lseek: {
    parameters: ['i32', 'u32', 'i32'],
    result: 'u32'
  },
  write_string: {
    parameters: ['i32', 'string', 'i32'],
    pointers: [, 'const char*'],
    override: [, , { param: 1, fastfield: '->length', slowfield: '.length()' }],
    result: 'i32',
    name: 'write'
  },
  write: {
    parameters: ['i32', 'buffer', 'i32'],
    result: 'i32'
  },
  fstat: {
    parameters: ['i32', 'buffer'],
    pointers: [, 'struct stat *'],
    result: 'i32'
  },
  readdir: {
    parameters: ['pointer'],
    result: 'pointer',
    pointers: ['DIR*'],
    rpointer: 'dirent*'
  },
  opendir: {
    parameters: ['string'],
    result: 'pointer',
    pointers: ['const char*'],
    rpointer: 'DIR*'
  },
  closedir: {
    parameters: ['pointer'],
    pointers: ['DIR*'],
    result: 'i32'
  },
  fcntl: {
    parameters: ['i32', 'i32', 'i32'],
    result: 'i32'
  },
  sendfile: {
    parameters: ['i32', 'i32', 'pointer', 'u32'],
    pointers: [, , 'off_t*'],
    result: 'u32'
  }
}

const constants = {
  S_IFBLK: 'i32', S_IFCHR: 'i32', S_IFIFO: 'i32', 
  S_IRUSR: 'i32', S_IWUSR: 'i32', S_IRGRP: 'i32', S_IWGRP: 'i32',
  S_IROTH: 'i32', S_IWOTH: 'i32'
}
const includes = ['unistd.h', 'sys/stat.h', 'fcntl.h', 'dirent.h', 'sys/sendfile.h']
const name = 'fs'

export { api, includes, name, constants }
