
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile  
#include <ffi.h>
#include <spin.h>

namespace spin {
namespace ffi {

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

typedef void (*callback)();


void ffi_prep_cifSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();

  Local<Context> context = isolate->GetCurrentContext();
  ffi_cif* v0 = reinterpret_cast<ffi_cif*>((uint64_t)args[0]->NumberValue(context).ToChecked());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  ffi_type* v3 = reinterpret_cast<ffi_type*>((uint64_t)args[3]->NumberValue(context).ToChecked());
  ffi_type** v4 = reinterpret_cast<ffi_type**>((uint64_t)args[4]->NumberValue(context).ToChecked());
  int32_t rc = ffi_prep_cif(v0, (ffi_abi)v1, v2, v3, v4);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t ffi_prep_cifFast(void* p, void* p0, uint32_t p1, uint32_t p2, void* p3, void* p4) {
  ffi_cif* v0 = reinterpret_cast<ffi_cif*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  ffi_type* v3 = reinterpret_cast<ffi_type*>(p3);
  ffi_type** v4 = reinterpret_cast<ffi_type**>(p4);
  return ffi_prep_cif(v0, (ffi_abi)v1, v2, v3, v4);
}
void ffi_callSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();

  Local<Context> context = isolate->GetCurrentContext();
  ffi_cif* v0 = reinterpret_cast<ffi_cif*>((uint64_t)args[0]->NumberValue(context).ToChecked());
  callback v1 = reinterpret_cast<callback>((uint64_t)args[1]->NumberValue(context).ToChecked());
  void* v2 = reinterpret_cast<void*>((uint64_t)args[2]->NumberValue(context).ToChecked());
  void** v3 = reinterpret_cast<void**>((uint64_t)args[3]->NumberValue(context).ToChecked());
  ffi_call(v0, v1, v2, v3);
}

void ffi_callFast(void* p, void* p0, void* p1, void* p2, void* p3, struct FastApiTypedArray* const p_ret) {
  ffi_cif* v0 = reinterpret_cast<ffi_cif*>(p0);
  callback v1 = reinterpret_cast<callback>(p1);
  void* v2 = reinterpret_cast<void*>(p2);
  void** v3 = reinterpret_cast<void**>(p3);
  ffi_call(v0, v1, v2, v3);
}

void Init(Isolate* isolate, Local<ObjectTemplate> target) {
  Local<ObjectTemplate> module = ObjectTemplate::New(isolate);

  v8::CTypeInfo* cargsffi_prep_cif = (v8::CTypeInfo*)calloc(6, sizeof(v8::CTypeInfo));
  cargsffi_prep_cif[0] = v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value);
  cargsffi_prep_cif[1] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsffi_prep_cif[2] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32);
  cargsffi_prep_cif[3] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32);
  cargsffi_prep_cif[4] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsffi_prep_cif[5] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  v8::CTypeInfo* rcffi_prep_cif = new v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
  v8::CFunctionInfo* infoffi_prep_cif = new v8::CFunctionInfo(*rcffi_prep_cif, 6, cargsffi_prep_cif);
  v8::CFunction* pFffi_prep_cif = new v8::CFunction((const void*)&ffi_prep_cifFast, infoffi_prep_cif);
  SET_FAST_METHOD(isolate, module, "ffi_prep_cif", pFffi_prep_cif, ffi_prep_cifSlow);
  v8::CTypeInfo* cargsffi_call = (v8::CTypeInfo*)calloc(6, sizeof(v8::CTypeInfo));
  cargsffi_call[0] = v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value);
  cargsffi_call[1] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsffi_call[2] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsffi_call[3] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsffi_call[4] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint64);
  cargsffi_call[5] = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone);
  v8::CTypeInfo* rcffi_call = new v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
  v8::CFunctionInfo* infoffi_call = new v8::CFunctionInfo(*rcffi_call, 6, cargsffi_call);
  v8::CFunction* pFffi_call = new v8::CFunction((const void*)&ffi_callFast, infoffi_call);
  SET_FAST_METHOD(isolate, module, "ffi_call", pFffi_call, ffi_callSlow);

  SET_MODULE(isolate, target, "ffi", module);
}
} // namespace ffi
} // namespace spin

extern "C" {
  void* _register_ffi() {
    return (void*)spin::ffi::Init;
  }
}
