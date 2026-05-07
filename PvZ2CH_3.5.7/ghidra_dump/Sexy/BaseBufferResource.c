// Class: Sexy::BaseBufferResource


/* Sexy::BaseBufferResource::GetPtr() */

undefined8 __thiscall Sexy::BaseBufferResource::GetPtr(BaseBufferResource *this)

{
  return *(undefined8 *)(this + 0x18);
}


/* Sexy::BaseBufferResource::GetSize() */

undefined4 __thiscall Sexy::BaseBufferResource::GetSize(BaseBufferResource *this)

{
  return *(undefined4 *)(this + 0x20);
}


/* Sexy::BaseBufferResource::~BaseBufferResource() */

void __thiscall Sexy::BaseBufferResource::~BaseBufferResource(BaseBufferResource *this)

{
  *(undefined ***)this = &PTR__BaseBufferResource_06a373a0;
  if (*(ColourFit **)(this + 0x18) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x18));
  }
  BaseTaskResource::~BaseTaskResource((BaseTaskResource *)this);
  return;
}


/* Sexy::BaseBufferResource::~BaseBufferResource() */

void __thiscall Sexy::BaseBufferResource::~BaseBufferResource(BaseBufferResource *this)

{
  ~BaseBufferResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseBufferResource::BaseBufferResource(unsigned int) */

void __thiscall Sexy::BaseBufferResource::BaseBufferResource(BaseBufferResource *this,uint param_1)

{
  void *pvVar1;
  
  BaseTaskResource::BaseTaskResource((BaseTaskResource *)this,2);
  *(uint *)(this + 0x20) = param_1;
  *(undefined ***)this = &PTR__BaseBufferResource_06a373a0;
  pvVar1 = operator_new__((ulong)param_1);
  *(void **)(this + 0x18) = pvVar1;
  return;
}

