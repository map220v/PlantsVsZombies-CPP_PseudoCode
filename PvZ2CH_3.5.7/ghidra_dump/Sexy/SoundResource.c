// Class: Sexy::SoundResource


/* Sexy::SoundResource::~SoundResource() */

void __thiscall Sexy::SoundResource::~SoundResource(SoundResource *this)

{
  *(undefined ***)this = &PTR_GetClass_06a301d0;
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::SoundResource::~SoundResource() */

void __thiscall Sexy::SoundResource::~SoundResource(SoundResource *this)

{
  ~SoundResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::SoundResource::SoundResource() */

void __thiscall Sexy::SoundResource::SoundResource(SoundResource *this)

{
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06a301d0;
  return;
}


/* Sexy::SoundResource::StaticNew() */

SoundResource * Sexy::SoundResource::StaticNew(void)

{
  SoundResource *this;
  
  this = ::operator_new(0x20);
  SoundResource(this);
  return this;
}


/* Sexy::SoundResource::StaticGetClass() */

long * Sexy::SoundResource::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"SoundResource",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::SoundResource::GetClass() const */

long * Sexy::SoundResource::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"SoundResource",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::SoundResource::StaticClassInit() */

void Sexy::SoundResource::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::SoundRes::StaticGetClass();
  FUN_051a4790(lVar1 + 0x48,uVar2);
  return;
}

