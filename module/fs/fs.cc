
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile  
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/sendfile.h>
#include <spin.h>

namespace spin {
namespace fs {

using v8::String;
using v8::FunctionCallbackInfo;
using v8::Array;
using v8::Local;
using v8::ObjectTemplate;
using v8::Isolate;
using v8::Value;
using v8::Uint32Array;
using v8::ArrayBuffer;
using v8::Context;
using v8::Integer;
using v8::Function;
using v8::NewStringType;
using v8::Object;
using v8::BackingStore;
using v8::TryCatch;
using v8::ScriptCompiler;
using v8::Module;
using v8::FixedArray;
using v8::ScriptOrigin;
using v8::SharedArrayBuffer;
using v8::MaybeLocal;
using v8::HandleScope;
using v8::Promise;
using v8::Number;
using v8::StackTrace;
using v8::Message;
using v8::StackFrame;
using v8::Maybe;
using v8::FunctionTemplate;
using v8::FunctionCallback;
using v8::PromiseRejectMessage;
using v8::CFunction;
using v8::Global;
using v8::Exception;
using v8::CTypeInfo;
using v8::PropertyAttribute;
using v8::Signature;
using v8::ConstructorBehavior;
using v8::SideEffectType;
using v8::kPromiseRejectAfterResolved;
using v8::kPromiseResolveAfterResolved;
using v8::kPromiseHandlerAddedAfterReject;
using v8::Data;
using v8::PrimitiveArray;
using v8::TypedArray;
using v8::Uint8Array;
using v8::Boolean;
using v8::ModuleRequest;
using v8::CFunctionInfo;
using v8::OOMDetails;
using v8::V8;



int32_t closeFast(void* p, int32_t p0);
v8::CTypeInfo cargsclose[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rcclose = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoclose = v8::CFunctionInfo(rcclose, 2, cargsclose);
v8::CFunction pFclose = v8::CFunction((const void*)&closeFast, &infoclose);

int32_t openFast(void* p, struct FastOneByteString* const p0, int32_t p1, int32_t p2);
v8::CTypeInfo cargsopen[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rcopen = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoopen = v8::CFunctionInfo(rcopen, 4, cargsopen);
v8::CFunction pFopen = v8::CFunction((const void*)&openFast, &infoopen);

int32_t readFast(void* p, int32_t p0, struct FastApiTypedArray* const p1, int32_t p2);
v8::CTypeInfo cargsread[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint8, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rcread = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo inforead = v8::CFunctionInfo(rcread, 4, cargsread);
v8::CFunction pFread = v8::CFunction((const void*)&readFast, &inforead);

int32_t preadFast(void* p, int32_t p0, struct FastApiTypedArray* const p1, int32_t p2, uint32_t p3);
v8::CTypeInfo cargspread[5] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint8, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rcpread = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infopread = v8::CFunctionInfo(rcpread, 5, cargspread);
v8::CFunction pFpread = v8::CFunction((const void*)&preadFast, &infopread);

uint32_t lseekFast(void* p, int32_t p0, uint32_t p1, int32_t p2);
v8::CTypeInfo cargslseek[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rclseek = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32);
v8::CFunctionInfo infolseek = v8::CFunctionInfo(rclseek, 4, cargslseek);
v8::CFunction pFlseek = v8::CFunction((const void*)&lseekFast, &infolseek);

int32_t write_stringFast(void* p, int32_t p0, struct FastOneByteString* const p1);
v8::CTypeInfo cargswrite_string[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rcwrite_string = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infowrite_string = v8::CFunctionInfo(rcwrite_string, 4, cargswrite_string);
v8::CFunction pFwrite_string = v8::CFunction((const void*)&write_stringFast, &infowrite_string);

int32_t writeFast(void* p, int32_t p0, struct FastApiTypedArray* const p1, int32_t p2);
v8::CTypeInfo cargswrite[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint8, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rcwrite = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infowrite = v8::CFunctionInfo(rcwrite, 4, cargswrite);
v8::CFunction pFwrite = v8::CFunction((const void*)&writeFast, &infowrite);

int32_t fstatFast(void* p, int32_t p0, struct FastApiTypedArray* const p1);
v8::CTypeInfo cargsfstat[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint8, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
};
v8::CTypeInfo rcfstat = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infofstat = v8::CFunctionInfo(rcfstat, 3, cargsfstat);
v8::CFunction pFfstat = v8::CFunction((const void*)&fstatFast, &infofstat);

void readdirFast(void* p, void* p0, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargsreaddir[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rcreaddir = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo inforeaddir = v8::CFunctionInfo(rcreaddir, 3, cargsreaddir);
v8::CFunction pFreaddir = v8::CFunction((const void*)&readdirFast, &inforeaddir);

void opendirFast(void* p, struct FastOneByteString* const p0, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargsopendir[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rcopendir = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infoopendir = v8::CFunctionInfo(rcopendir, 3, cargsopendir);
v8::CFunction pFopendir = v8::CFunction((const void*)&opendirFast, &infoopendir);

int32_t closedirFast(void* p, void* p0);
v8::CTypeInfo cargsclosedir[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcclosedir = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoclosedir = v8::CFunctionInfo(rcclosedir, 2, cargsclosedir);
v8::CFunction pFclosedir = v8::CFunction((const void*)&closedirFast, &infoclosedir);

int32_t fcntlFast(void* p, int32_t p0, int32_t p1, int32_t p2);
v8::CTypeInfo cargsfcntl[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
};
v8::CTypeInfo rcfcntl = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infofcntl = v8::CFunctionInfo(rcfcntl, 4, cargsfcntl);
v8::CFunction pFfcntl = v8::CFunction((const void*)&fcntlFast, &infofcntl);

uint32_t sendfileFast(void* p, int32_t p0, int32_t p1, void* p2, uint32_t p3);
v8::CTypeInfo cargssendfile[5] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kInt32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rcsendfile = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32);
v8::CFunctionInfo infosendfile = v8::CFunctionInfo(rcsendfile, 5, cargssendfile);
v8::CFunction pFsendfile = v8::CFunction((const void*)&sendfileFast, &infosendfile);



void closeSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  int32_t rc = close(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t closeFast(void* p, int32_t p0) {
  int32_t v0 = p0;
  return close(v0);
}
void openSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  String::Utf8Value v0(isolate, args[0]);
  int32_t v1 = Local<Integer>::Cast(args[1])->Value();
  int32_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = open(*v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t openFast(void* p, struct FastOneByteString* const p0, int32_t p1, int32_t p2) {
  struct FastOneByteString* const v0 = p0;
  int32_t v1 = p1;
  int32_t v2 = p2;
  return open(v0->data, v1, v2);
}
void readSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  Local<Uint8Array> u81 = args[1].As<Uint8Array>();
  uint8_t* ptr1 = (uint8_t*)u81->Buffer()->Data() + u81->ByteOffset();
  void* v1 = reinterpret_cast<void*>(ptr1);
  int32_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = read(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t readFast(void* p, int32_t p0, struct FastApiTypedArray* const p1, int32_t p2) {
  int32_t v0 = p0;
  void* v1 = reinterpret_cast<void*>(p1->data);
  int32_t v2 = p2;
  return read(v0, v1, v2);
}
void preadSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  Local<Uint8Array> u81 = args[1].As<Uint8Array>();
  uint8_t* ptr1 = (uint8_t*)u81->Buffer()->Data() + u81->ByteOffset();
  void* v1 = reinterpret_cast<void*>(ptr1);
  int32_t v2 = Local<Integer>::Cast(args[2])->Value();
  uint32_t v3 = Local<Integer>::Cast(args[3])->Value();
  int32_t rc = pread(v0, v1, v2, v3);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t preadFast(void* p, int32_t p0, struct FastApiTypedArray* const p1, int32_t p2, uint32_t p3) {
  int32_t v0 = p0;
  void* v1 = reinterpret_cast<void*>(p1->data);
  int32_t v2 = p2;
  uint32_t v3 = p3;
  return pread(v0, v1, v2, v3);
}
void lseekSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  int32_t v2 = Local<Integer>::Cast(args[2])->Value();
  uint32_t rc = lseek(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

uint32_t lseekFast(void* p, int32_t p0, uint32_t p1, int32_t p2) {
  int32_t v0 = p0;
  uint32_t v1 = p1;
  int32_t v2 = p2;
  return lseek(v0, v1, v2);
}
void write_stringSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  String::Utf8Value v1(isolate, args[1]);
  int32_t v2 = v1.length();
  int32_t rc = write(v0, *v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t write_stringFast(void* p, int32_t p0, struct FastOneByteString* const p1) {
  int32_t v0 = p0;
  struct FastOneByteString* const v1 = p1;
  int32_t v2 = p1->length;
  return write(v0, v1->data, v2);
}
void writeSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  Local<Uint8Array> u81 = args[1].As<Uint8Array>();
  uint8_t* ptr1 = (uint8_t*)u81->Buffer()->Data() + u81->ByteOffset();
  void* v1 = reinterpret_cast<void*>(ptr1);
  int32_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = write(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t writeFast(void* p, int32_t p0, struct FastApiTypedArray* const p1, int32_t p2) {
  int32_t v0 = p0;
  void* v1 = reinterpret_cast<void*>(p1->data);
  int32_t v2 = p2;
  return write(v0, v1, v2);
}
void fstatSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  Local<Uint8Array> u81 = args[1].As<Uint8Array>();
  uint8_t* ptr1 = (uint8_t*)u81->Buffer()->Data() + u81->ByteOffset();
  struct stat * v1 = reinterpret_cast<struct stat *>(ptr1);
  int32_t rc = fstat(v0, v1);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t fstatFast(void* p, int32_t p0, struct FastApiTypedArray* const p1) {
  int32_t v0 = p0;
  struct stat * v1 = reinterpret_cast<struct stat *>(p1->data);
  return fstat(v0, v1);
}
void readdirSlow(const FunctionCallbackInfo<Value> &args) {
  DIR* v0 = reinterpret_cast<DIR*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  dirent* rc = readdir(v0);
  Local<ArrayBuffer> ab = args[1].As<Uint32Array>()->Buffer();
  ((dirent**)ab->Data())[0] = rc;
}

void readdirFast(void* p, void* p0, struct FastApiTypedArray* const p_ret) {
  DIR* v0 = reinterpret_cast<DIR*>(p0);
  dirent* r = readdir(v0);
  ((dirent**)p_ret->data)[0] = r;

}
void opendirSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  String::Utf8Value v0(isolate, args[0]);
  DIR* rc = opendir(*v0);
  Local<ArrayBuffer> ab = args[1].As<Uint32Array>()->Buffer();
  ((DIR**)ab->Data())[0] = rc;
}

void opendirFast(void* p, struct FastOneByteString* const p0, struct FastApiTypedArray* const p_ret) {
  struct FastOneByteString* const v0 = p0;
  DIR* r = opendir(v0->data);
  ((DIR**)p_ret->data)[0] = r;

}
void closedirSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  DIR* v0 = reinterpret_cast<DIR*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  int32_t rc = closedir(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t closedirFast(void* p, void* p0) {
  DIR* v0 = reinterpret_cast<DIR*>(p0);
  return closedir(v0);
}
void fcntlSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  int32_t v1 = Local<Integer>::Cast(args[1])->Value();
  int32_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = fcntl(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t fcntlFast(void* p, int32_t p0, int32_t p1, int32_t p2) {
  int32_t v0 = p0;
  int32_t v1 = p1;
  int32_t v2 = p2;
  return fcntl(v0, v1, v2);
}
void sendfileSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  int32_t v0 = Local<Integer>::Cast(args[0])->Value();
  int32_t v1 = Local<Integer>::Cast(args[1])->Value();
  off_t* v2 = reinterpret_cast<off_t*>((uint64_t)Local<Integer>::Cast(args[2])->Value());
  uint32_t v3 = Local<Integer>::Cast(args[3])->Value();
  uint32_t rc = sendfile(v0, v1, v2, v3);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

uint32_t sendfileFast(void* p, int32_t p0, int32_t p1, void* p2, uint32_t p3) {
  int32_t v0 = p0;
  int32_t v1 = p1;
  off_t* v2 = reinterpret_cast<off_t*>(p2);
  uint32_t v3 = p3;
  return sendfile(v0, v1, v2, v3);
}

void Init(Isolate* isolate, Local<ObjectTemplate> target) {
  Local<ObjectTemplate> module = ObjectTemplate::New(isolate);
  SET_FAST_METHOD(isolate, module, "close", &pFclose, closeSlow);
  SET_FAST_METHOD(isolate, module, "open", &pFopen, openSlow);
  SET_FAST_METHOD(isolate, module, "read", &pFread, readSlow);
  SET_FAST_METHOD(isolate, module, "pread", &pFpread, preadSlow);
  SET_FAST_METHOD(isolate, module, "lseek", &pFlseek, lseekSlow);
  SET_FAST_METHOD(isolate, module, "write_string", &pFwrite_string, write_stringSlow);
  SET_FAST_METHOD(isolate, module, "write", &pFwrite, writeSlow);
  SET_FAST_METHOD(isolate, module, "fstat", &pFfstat, fstatSlow);
  SET_FAST_METHOD(isolate, module, "readdir", &pFreaddir, readdirSlow);
  SET_FAST_METHOD(isolate, module, "opendir", &pFopendir, opendirSlow);
  SET_FAST_METHOD(isolate, module, "closedir", &pFclosedir, closedirSlow);
  SET_FAST_METHOD(isolate, module, "fcntl", &pFfcntl, fcntlSlow);
  SET_FAST_METHOD(isolate, module, "sendfile", &pFsendfile, sendfileSlow);

  SET_VALUE(isolate, module, "S_IFBLK", Integer::New(isolate, S_IFBLK));
  SET_VALUE(isolate, module, "S_IFCHR", Integer::New(isolate, S_IFCHR));
  SET_VALUE(isolate, module, "S_IFIFO", Integer::New(isolate, S_IFIFO));
  SET_VALUE(isolate, module, "S_IRUSR", Integer::New(isolate, S_IRUSR));
  SET_VALUE(isolate, module, "S_IWUSR", Integer::New(isolate, S_IWUSR));
  SET_VALUE(isolate, module, "S_IRGRP", Integer::New(isolate, S_IRGRP));
  SET_VALUE(isolate, module, "S_IWGRP", Integer::New(isolate, S_IWGRP));
  SET_VALUE(isolate, module, "S_IROTH", Integer::New(isolate, S_IROTH));
  SET_VALUE(isolate, module, "S_IWOTH", Integer::New(isolate, S_IWOTH));

  SET_MODULE(isolate, target, "fs", module);
}
} // namespace fs
} // namespace spin

extern "C" {
  void* _register_fs() {
    return (void*)spin::fs::Init;
  }
}
