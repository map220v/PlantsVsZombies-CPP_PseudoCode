// Class: ICloudRequestSTDCallbackFunction


/* ICloudRequestSTDCallbackFunction::~ICloudRequestSTDCallbackFunction() */

void __thiscall
ICloudRequestSTDCallbackFunction::~ICloudRequestSTDCallbackFunction
          (ICloudRequestSTDCallbackFunction *this)

{
  *(undefined ***)this = &PTR__ICloudRequestSTDCallbackFunction_06612b80;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x10));
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestSTDCallbackFunction::~ICloudRequestSTDCallbackFunction() */

void __thiscall
ICloudRequestSTDCallbackFunction::~ICloudRequestSTDCallbackFunction
          (ICloudRequestSTDCallbackFunction *this)

{
  ~ICloudRequestSTDCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestSTDCallbackFunction::process(bool) */

void __thiscall
ICloudRequestSTDCallbackFunction::process(ICloudRequestSTDCallbackFunction *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
  if (!bVar1) {
    return;
  }
  std::function<void(bool)>::operator()((function<void(bool)> *)(this + 0x10),param_1);
  return;
}


/* ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(std::function<void (bool)>
   const&) */

void __thiscall
ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction
          (ICloudRequestSTDCallbackFunction *this,function *param_1)

{
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  *(undefined ***)this = &PTR__ICloudRequestSTDCallbackFunction_06612b80;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x10));
  std::function<void(bool)>::operator=((function<void(bool)> *)(this + 0x10),param_1);
  return;
}

