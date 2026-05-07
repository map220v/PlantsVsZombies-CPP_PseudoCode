// Class: PresentTypeKey


/* PresentTypeKey::~PresentTypeKey() */

void __thiscall PresentTypeKey::~PresentTypeKey(PresentTypeKey *this)

{
  *(undefined ***)this = &PTR_GetClass_06833720;
  std::string::~string((string *)(this + 0x30));
  PresentType::~PresentType((PresentType *)this);
  return;
}


/* PresentTypeKey::~PresentTypeKey() */

void __thiscall PresentTypeKey::~PresentTypeKey(PresentTypeKey *this)

{
  ~PresentTypeKey(this);
  AK::FreeHook(this);
  return;
}


/* PresentTypeKey::PresentTypeKey() */

void __thiscall PresentTypeKey::PresentTypeKey(PresentTypeKey *this)

{
  PresentType::PresentType((PresentType *)this);
  *(undefined ***)this = &PTR_GetClass_06833720;
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 0x38) = 1;
  return;
}


/* PresentTypeKey::StaticNew() */

PresentTypeKey * PresentTypeKey::StaticNew(void)

{
  PresentTypeKey *this;
  
  this = ::operator_new(0x40);
  PresentTypeKey(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTypeKey::StaticClassInit() */

void PresentTypeKey::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PresentTypeKey");
    (*pcVar2)(plVar1,asStack_10,FUN_0431e354,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTypeKey::StaticGetClass() */

long * PresentTypeKey::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PresentType::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTypeKey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeKey::GetClass() const */

long * PresentTypeKey::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PresentType::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTypeKey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeKey::AwardPresent() const */

void __thiscall PresentTypeKey::AwardPresent(PresentTypeKey *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::AddKeys(this_01,(string *)(this + 0x30),*(int *)(this + 0x38));
  return;
}

