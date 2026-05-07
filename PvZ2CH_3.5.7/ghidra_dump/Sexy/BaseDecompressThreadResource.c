// Class: Sexy::BaseDecompressThreadResource


/* Sexy::BaseDecompressThreadResource::~BaseDecompressThreadResource() */

void __thiscall
Sexy::BaseDecompressThreadResource::~BaseDecompressThreadResource
          (BaseDecompressThreadResource *this)

{
  *(undefined ***)this = &PTR__BaseDecompressThreadResource_06a37460;
  BaseTaskResource::~BaseTaskResource((BaseTaskResource *)this);
  return;
}


/* Sexy::BaseDecompressThreadResource::~BaseDecompressThreadResource() */

void __thiscall
Sexy::BaseDecompressThreadResource::~BaseDecompressThreadResource
          (BaseDecompressThreadResource *this)

{
  ~BaseDecompressThreadResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseDecompressThreadResource::BaseDecompressThreadResource() */

void __thiscall
Sexy::BaseDecompressThreadResource::BaseDecompressThreadResource(BaseDecompressThreadResource *this)

{
  BaseTaskResource::BaseTaskResource((BaseTaskResource *)this,1);
  *(undefined ***)this = &PTR__BaseDecompressThreadResource_06a37460;
  return;
}

