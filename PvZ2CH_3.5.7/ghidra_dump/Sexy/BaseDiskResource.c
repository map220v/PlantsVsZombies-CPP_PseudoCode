// Class: Sexy::BaseDiskResource


/* Sexy::BaseDiskResource::~BaseDiskResource() */

void __thiscall Sexy::BaseDiskResource::~BaseDiskResource(BaseDiskResource *this)

{
  *(undefined ***)this = &PTR__BaseDiskResource_06a37400;
  BaseTaskResource::~BaseTaskResource((BaseTaskResource *)this);
  return;
}


/* Sexy::BaseDiskResource::~BaseDiskResource() */

void __thiscall Sexy::BaseDiskResource::~BaseDiskResource(BaseDiskResource *this)

{
  ~BaseDiskResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseDiskResource::BaseDiskResource() */

void __thiscall Sexy::BaseDiskResource::BaseDiskResource(BaseDiskResource *this)

{
  BaseTaskResource::BaseTaskResource((BaseTaskResource *)this,0);
  *(undefined ***)this = &PTR__BaseDiskResource_06a37400;
  return;
}

