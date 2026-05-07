// Class: Sexy::ResourceInfoTypes::PIEffectRes


/* Sexy::ResourceInfoTypes::PIEffectRes::~PIEffectRes() */

void __thiscall Sexy::ResourceInfoTypes::PIEffectRes::~PIEffectRes(PIEffectRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2ffa0;
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::PIEffectRes::~PIEffectRes() */

void __thiscall Sexy::ResourceInfoTypes::PIEffectRes::~PIEffectRes(PIEffectRes *this)

{
  ~PIEffectRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::PIEffectRes::PIEffectRes() */

void __thiscall Sexy::ResourceInfoTypes::PIEffectRes::PIEffectRes(PIEffectRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a2ffa0;
  return;
}


/* Sexy::ResourceInfoTypes::PIEffectRes::StaticNew() */

PIEffectRes * Sexy::ResourceInfoTypes::PIEffectRes::StaticNew(void)

{
  PIEffectRes *this;
  
  this = ::operator_new(0x68);
  PIEffectRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PIEffectRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::PIEffectRes::DoLoad(PIEffectRes *this)

{
  char cVar1;
  PIEffect *this_00;
  ResourceManager *this_01;
  undefined8 uVar2;
  AutoCrit aAStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_28,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  this_00 = ::operator_new(0x15c0);
  PIEffect::PIEffect(this_00);
  std::string::string(asStack_10,*(char **)(this + 0x40));
  PIEffect::LoadEffect(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = FUN_0547419c(this_00 + 0x14d8);
  if (cVar1 == '\0') {
    this_01 = *(ResourceManager **)(this + 8);
    FUN_031f5e7c(asStack_20,"PIEffect loading error: ",this_00 + 0x14d8);
    std::operator+(asStack_20," on file ");
    std::operator+(asStack_18,*(char **)(this + 0x40));
    ResourceManager::Fail(this_01,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
  }
  else {
    uVar2 = *(undefined8 *)(this + 8);
    ResourceInfo::GetRtId();
    ResourceManager::RegisterResourceInternal(asStack_10,uVar2,0,this_00,asStack_18,1);
    RtId::operator=((RtId *)(this + 0x20),(RtId *)asStack_10);
    RtId::~RtId((RtId *)asStack_10);
    RtId::~RtId((RtId *)asStack_18);
  }
  AutoCrit::~AutoCrit(aAStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::ResourceInfoTypes::PIEffectRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::PIEffectRes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::PIEffectRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::PIEffectRes::GetClass() const */

long * Sexy::ResourceInfoTypes::PIEffectRes::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceInfoTypes::PIEffectRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::PIEffectRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::PIEffectRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = PIEffect::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"PIEffect");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

