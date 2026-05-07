// Class: Sexy::BaseGPUResource


/* Sexy::BaseGPUResource::~BaseGPUResource() */

void __thiscall Sexy::BaseGPUResource::~BaseGPUResource(BaseGPUResource *this)

{
  *(undefined ***)this = &PTR__BaseGPUResource_06a374c0;
  BaseTaskResource::~BaseTaskResource((BaseTaskResource *)this);
  return;
}


/* Sexy::BaseGPUResource::~BaseGPUResource() */

void __thiscall Sexy::BaseGPUResource::~BaseGPUResource(BaseGPUResource *this)

{
  ~BaseGPUResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseGPUResource::BaseGPUResource() */

void __thiscall Sexy::BaseGPUResource::BaseGPUResource(BaseGPUResource *this)

{
  BaseTaskResource::BaseTaskResource((BaseTaskResource *)this,3);
  *(undefined ***)this = &PTR__BaseGPUResource_06a374c0;
  return;
}

