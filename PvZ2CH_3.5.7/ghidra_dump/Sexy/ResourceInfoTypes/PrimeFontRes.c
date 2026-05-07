// Class: Sexy::ResourceInfoTypes::PrimeFontRes


/* Sexy::ResourceInfoTypes::PrimeFontRes::~PrimeFontRes() */

void __thiscall Sexy::ResourceInfoTypes::PrimeFontRes::~PrimeFontRes(PrimeFontRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fea0;
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::PrimeFontRes::~PrimeFontRes() */

void __thiscall Sexy::ResourceInfoTypes::PrimeFontRes::~PrimeFontRes(PrimeFontRes *this)

{
  ~PrimeFontRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::PrimeFontRes::PrimeFontRes() */

void __thiscall Sexy::ResourceInfoTypes::PrimeFontRes::PrimeFontRes(PrimeFontRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a2fea0;
  return;
}


/* Sexy::ResourceInfoTypes::PrimeFontRes::StaticNew() */

PrimeFontRes * Sexy::ResourceInfoTypes::PrimeFontRes::StaticNew(void)

{
  PrimeFontRes *this;
  
  this = ::operator_new(0x68);
  PrimeFontRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PrimeFontRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::PrimeFontRes::DoLoad(PrimeFontRes *this)

{
  PrimeFont *this_00;
  PrimeFont *extraout_x1;
  undefined8 uVar1;
  AutoCrit aAStack_20 [8];
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  this_00 = ::operator_new(0x90);
  PrimeFont::PrimeFont(this_00,extraout_x1);
  PrimeFont::LoadResourceFile(this_00,*(char **)(this + 0x40));
  uVar1 = *(undefined8 *)(this + 8);
  ResourceInfo::GetRtId();
  ResourceManager::RegisterResourceInternal(aRStack_10,uVar1,0,this_00,aRStack_18,1);
  RtId::operator=((RtId *)(this + 0x20),aRStack_10);
  RtId::~RtId(aRStack_10);
  RtId::~RtId(aRStack_18);
  (**(code **)(*(long *)this + 0x48))(this);
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::ResourceInfoTypes::PrimeFontRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::PrimeFontRes::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceInfoClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ResourceInfo::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoTypes::PrimeFontRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::PrimeFontRes::GetClass() const */

long * Sexy::ResourceInfoTypes::PrimeFontRes::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceInfoClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ResourceInfo::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoTypes::PrimeFontRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PrimeFontRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::PrimeFontRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = PrimeFont::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"PrimeFont");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

