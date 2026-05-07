// Class: Sexy::SoundBank


/* Sexy::SoundBank::Create() */

SoundBank * Sexy::SoundBank::Create(void)

{
  bool bVar1;
  RtClass *this;
  RtObject *this_00;
  SoundBank *pSVar2;
  
  this = (RtClass *)RtClass::StaticGetClassNamed("WwiseSoundBank");
  if ((this != (RtClass *)0x0) && (bVar1 = RtClass::IsDerivedFrom<Sexy::SoundBank>(this), bVar1)) {
    this_00 = (RtObject *)FUN_051e0e7c(*(undefined8 *)(this + 0x18));
    pSVar2 = RtObject::Cast<Sexy::SoundBank>(this_00);
    return pSVar2;
  }
  return (SoundBank *)0x0;
}


/* Sexy::SoundBank::StaticNew() */

undefined8 Sexy::SoundBank::StaticNew(void)

{
  return 0;
}


/* Sexy::SoundBank::SoundBank() */

void __thiscall Sexy::SoundBank::SoundBank(SoundBank *this)

{
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a34480;
  return;
}


/* Sexy::SoundBank::~SoundBank() */

void __thiscall Sexy::SoundBank::~SoundBank(SoundBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06a34480;
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::SoundBank::~SoundBank() */

void __thiscall Sexy::SoundBank::~SoundBank(SoundBank *this)

{
  ~SoundBank(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::SoundBank::StaticGetClass() */

long * Sexy::SoundBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoundBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::SoundBank::GetClass() const */

long * Sexy::SoundBank::GetClass(void)

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
  (*pcVar3)(plVar1,"SoundBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::SoundBank::StaticClassInit() */

void Sexy::SoundBank::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::SoundBankRes::StaticGetClass();
  FUN_052f1a20(lVar1 + 0x48,uVar2);
  return;
}

