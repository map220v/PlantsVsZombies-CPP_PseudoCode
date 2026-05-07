// Class: PresentTypeDropEmpty


/* PresentTypeDropEmpty::~PresentTypeDropEmpty() */

void __thiscall PresentTypeDropEmpty::~PresentTypeDropEmpty(PresentTypeDropEmpty *this)

{
  *(undefined ***)this = &PTR_GetClass_068338a0;
  PresentType::~PresentType((PresentType *)this);
  return;
}


/* PresentTypeDropEmpty::~PresentTypeDropEmpty() */

void __thiscall PresentTypeDropEmpty::~PresentTypeDropEmpty(PresentTypeDropEmpty *this)

{
  ~PresentTypeDropEmpty(this);
  AK::FreeHook(this);
  return;
}


/* PresentTypeDropEmpty::PresentTypeDropEmpty() */

void __thiscall PresentTypeDropEmpty::PresentTypeDropEmpty(PresentTypeDropEmpty *this)

{
  PresentType::PresentType((PresentType *)this);
  *(undefined ***)this = &PTR_GetClass_068338a0;
  return;
}


/* PresentTypeDropEmpty::StaticNew() */

PresentTypeDropEmpty * PresentTypeDropEmpty::StaticNew(void)

{
  PresentTypeDropEmpty *this;
  
  this = ::operator_new(0x30);
  PresentTypeDropEmpty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTypeDropEmpty::StaticClassInit() */

void PresentTypeDropEmpty::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresentTypeDropEmpty");
    (*pcVar2)(plVar1,asStack_10,FUN_0431ee84,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTypeDropEmpty::StaticGetClass() */

long * PresentTypeDropEmpty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PresentTypeDropEmpty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeDropEmpty::GetClass() const */

long * PresentTypeDropEmpty::GetClass(void)

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
  (*pcVar3)(plVar1,"PresentTypeDropEmpty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeDropEmpty::AwardPresent() const */

void PresentTypeDropEmpty::AwardPresent(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::AddCoins(this_00,1000);
  return;
}

