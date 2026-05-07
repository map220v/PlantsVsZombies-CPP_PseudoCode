// Class: Sexy::BaseTaskResource


/* Sexy::BaseTaskResource::GetType() */

undefined4 __thiscall Sexy::BaseTaskResource::GetType(BaseTaskResource *this)

{
  return *(undefined4 *)(this + 0xc);
}


/* Sexy::BaseTaskResource::IsLocked() */

bool __thiscall Sexy::BaseTaskResource::IsLocked(BaseTaskResource *this)

{
  return 0 < *(int *)(this + 8);
}


/* Sexy::BaseTaskResource::Lock() */

undefined8 __thiscall Sexy::BaseTaskResource::Lock(BaseTaskResource *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}


/* Sexy::BaseTaskResource::Unlock() */

undefined8 __thiscall Sexy::BaseTaskResource::Unlock(BaseTaskResource *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  return 1;
}


/* Sexy::BaseTaskResource::GetName() */

void __thiscall Sexy::BaseTaskResource::GetName(BaseTaskResource *this)

{
  FUN_0547429c(this + 0x10);
  return;
}


/* Sexy::BaseTaskResource::~BaseTaskResource() */

void __thiscall Sexy::BaseTaskResource::~BaseTaskResource(BaseTaskResource *this)

{
  *(undefined ***)this = &PTR__BaseTaskResource_06a37340;
  std::string::~string((string *)(this + 0x10));
  return;
}


/* Sexy::BaseTaskResource::~BaseTaskResource() */

void __thiscall Sexy::BaseTaskResource::~BaseTaskResource(BaseTaskResource *this)

{
  ~BaseTaskResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseTaskResource::BaseTaskResource(Sexy::IResStreamsDriver::TaskResourceType) */

void __thiscall Sexy::BaseTaskResource::BaseTaskResource(BaseTaskResource *this,undefined4 param_2)

{
  IResStreamsDriver::TaskResource::TaskResource((TaskResource *)this);
  *(undefined ***)this = &PTR__BaseTaskResource_06a37340;
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = param_2;
  return;
}

