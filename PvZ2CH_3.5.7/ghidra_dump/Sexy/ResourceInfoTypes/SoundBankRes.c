// Class: Sexy::ResourceInfoTypes::SoundBankRes


/* Sexy::ResourceInfoTypes::SoundBankRes::~SoundBankRes() */

void __thiscall Sexy::ResourceInfoTypes::SoundBankRes::~SoundBankRes(SoundBankRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fda0;
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::SoundBankRes::~SoundBankRes() */

void __thiscall Sexy::ResourceInfoTypes::SoundBankRes::~SoundBankRes(SoundBankRes *this)

{
  ~SoundBankRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::SoundBankRes::SoundBankRes() */

void __thiscall Sexy::ResourceInfoTypes::SoundBankRes::SoundBankRes(SoundBankRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a2fda0;
  return;
}


/* Sexy::ResourceInfoTypes::SoundBankRes::StaticNew() */

SoundBankRes * Sexy::ResourceInfoTypes::SoundBankRes::StaticNew(void)

{
  SoundBankRes *this;
  
  this = ::operator_new(0x68);
  SoundBankRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::SoundBankRes::DoLoadInternal(bool) */

void __thiscall
Sexy::ResourceInfoTypes::SoundBankRes::DoLoadInternal(SoundBankRes *this,bool param_1)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  ResourceManager *this_00;
  undefined8 uVar4;
  AutoCrit aAStack_20 [8];
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  plVar3 = (long *)SoundBank::Create();
  if (plVar3 != (long *)0x0) {
    if (param_1) {
      cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(this + 0x40));
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0x50))();
    }
    if (cVar1 != '\0') {
      uVar4 = *(undefined8 *)(this + 8);
      uVar2 = 1;
      ResourceInfo::GetRtId();
      ResourceManager::RegisterResourceInternal(aRStack_10,uVar4,0,plVar3,aRStack_18,1);
      RtId::operator=((RtId *)(this + 0x20),aRStack_10);
      RtId::~RtId(aRStack_10);
      RtId::~RtId(aRStack_18);
      (**(code **)(*(long *)this + 0x48))(this);
      goto LAB_051968d4;
    }
  }
  this_00 = *(ResourceManager **)(this + 8);
  StrFormat("Failed to load sound bank: %s",(string *)aRStack_10,*(undefined8 *)(this + 0x40));
  uVar2 = ResourceManager::Fail(this_00,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
LAB_051968d4:
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* Sexy::ResourceInfoTypes::SoundBankRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::SoundBankRes::DoLoad(SoundBankRes *this)

{
  DoLoadInternal(this,true);
  return;
}


/* Sexy::ResourceInfoTypes::SoundBankRes::DoPrepare() */

void __thiscall Sexy::ResourceInfoTypes::SoundBankRes::DoPrepare(SoundBankRes *this)

{
  DoLoadInternal(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::SoundBankRes::IsResourceValid() */

void Sexy::ResourceInfoTypes::SoundBankRes::IsResourceValid(void)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FontRes::GetFont();
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* Sexy::ResourceInfoTypes::SoundBankRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::SoundBankRes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::SoundBankRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::SoundBankRes::GetClass() const */

long * Sexy::ResourceInfoTypes::SoundBankRes::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::SoundBankRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::SoundBankRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::SoundBankRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = SoundBank::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"SoundBank");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

