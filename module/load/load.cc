
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile  
#include <dlfcn.h>
#include <spin.h>

namespace spin {
namespace load {

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



void dlopenSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();

  Local<Context> context = isolate->GetCurrentContext();
  const char* v0 = reinterpret_cast<const char*>((uint64_t)args[0]->NumberValue(context).ToChecked());
  int32_t v1 = Local<Integer>::Cast(args[1])->Value();
  void* rc = dlopen(v0, v1);
  Local<ArrayBuffer> ab = args[2].As<Uint32Array>()->Buffer();
  ((void**)ab->Data())[0] = rc;
}

void dlopenFast(void* p, void* p0, int32_t p1, struct FastApiTypedArray* const p_ret) {
  const char* v0 = reinterpret_cast<const char*>(p0);
  int32_t v1 = p1;
  void* r = dlopen(v0, v1);
  ((void**)p_ret->data)[0] = r;

}
void dlsymSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();

  Local<Context> context = isolate->GetCurrentContext();
  void* v0 = reinterpret_cast<void*>((uint64_t)args[0]->NumberValue(context).ToChecked());
  const char* v1 = reinterpret_cast<const char*>((uint64_t)args[1]->NumberValue(context).ToChecked());
  void* rc = dlsym(v0, v1);
  Local<ArrayBuffer> ab = args[2].As<Uint32Array>()->Buffer();
  ((void**)ab->Data())[0] = rc;
}

void dlsymFast(void* p, void* p0, void* p1, struct FastApiTypedArray* const p_ret) {
  void* v0 = reinterpret_cast<void*>(p0);
  const char* v1 = reinterpret_cast<const char*>(p1);
  void* r = dlsym(v0, v1);
  ((void**)p_ret->data)[0] = r;

}
void dlcloseSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();

  Local<Context> context = isolate->GetCurrentContext();
  void* v0 = reinterpret_cast<void*>((uint64_t)args[0]->NumberValue(context).ToChecked());
  int32_t rc = dlclose(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t dlcloseFast(void* p, void* p0) {
  void* v0 = reinterpret_cast<void*>(p0);
  return dlclose(v0);
}

void Init(Isolate* isolate, Local<ObjectTemplate> target) {
  Local<ObjectTemplate> module = ObjectTemplate::New(isolate);
  v8::CTypeInfo* cargsdlopen = (v8::CTypeInfo*)calloc(4, sizeof(v8::CTypeInfo));
  cargsdlopen[0] = v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value);
  cargsdlopen[1] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsdlopen[2] = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
  cargsdlopen[3] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone);
  v8::CTypeInfo* rcdlopen = new v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
  v8::CFunctionInfo* infodlopen = new v8::CFunctionInfo(*rcdlopen, 4, cargsdlopen);
  v8::CFunction* pFdlopen = new v8::CFunction((const void*)&dlopenFast, infodlopen);
  SET_FAST_METHOD(isolate, module, "dlopen", pFdlopen, dlopenSlow);
  v8::CTypeInfo* cargsdlsym = (v8::CTypeInfo*)calloc(4, sizeof(v8::CTypeInfo));
  cargsdlsym[0] = v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value);
  cargsdlsym[1] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsdlsym[2] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsdlsym[3] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone);
  v8::CTypeInfo* rcdlsym = new v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
  v8::CFunctionInfo* infodlsym = new v8::CFunctionInfo(*rcdlsym, 4, cargsdlsym);
  v8::CFunction* pFdlsym = new v8::CFunction((const void*)&dlsymFast, infodlsym);
  SET_FAST_METHOD(isolate, module, "dlsym", pFdlsym, dlsymSlow);

  v8::CTypeInfo* cargsdlclose = (v8::CTypeInfo*)calloc(2, sizeof(v8::CTypeInfo));
  cargsdlclose[0] = v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value);
  cargsdlclose[1] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  v8::CTypeInfo* rcdlclose = new v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
  v8::CFunctionInfo* infodlclose = new v8::CFunctionInfo(*rcdlclose, 2, cargsdlclose);
  v8::CFunction* pFdlclose = new v8::CFunction((const void*)&dlcloseFast, infodlclose);
  SET_FAST_METHOD(isolate, module, "dlclose", pFdlclose, dlcloseSlow);

  SET_MODULE(isolate, target, "load", module);
}
} // namespace load
} // namespace spin

extern "C" {
  void* _register_load() {
    return (void*)spin::load::Init;
  }
}
