// Class: PresentTypeDropGold


/* PresentTypeDropGold::~PresentTypeDropGold() */

void __thiscall PresentTypeDropGold::~PresentTypeDropGold(PresentTypeDropGold *this)

{
  *(undefined ***)this = &PTR_GetClass_06833840;
  PresentType::~PresentType((PresentType *)this);
  return;
}


/* PresentTypeDropGold::~PresentTypeDropGold() */

void __thiscall PresentTypeDropGold::~PresentTypeDropGold(PresentTypeDropGold *this)

{
  ~PresentTypeDropGold(this);
  AK::FreeHook(this);
  return;
}


/* PresentTypeDropGold::PresentTypeDropGold() */

void __thiscall PresentTypeDropGold::PresentTypeDropGold(PresentTypeDropGold *this)

{
  PresentType::PresentType((PresentType *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_06833840;
  return;
}


/* PresentTypeDropGold::StaticNew() */

PresentTypeDropGold * PresentTypeDropGold::StaticNew(void)

{
  PresentTypeDropGold *this;
  
  this = ::operator_new(0x30);
  PresentTypeDropGold(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTypeDropGold::StaticClassInit() */

void PresentTypeDropGold::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresentTypeDropGold");
    (*pcVar2)(plVar1,asStack_10,FUN_0431ebf0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTypeDropGold::StaticGetClass() */

long * PresentTypeDropGold::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PresentTypeDropGold",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeDropGold::GetClass() const */

long * PresentTypeDropGold::GetClass(void)

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
  (*pcVar3)(plVar1,"PresentTypeDropGold",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeDropGold::AwardPresent() const */

void __thiscall PresentTypeDropGold::AwardPresent(PresentTypeDropGold *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::AddCoins(this_01,*(int *)(this + 0x2c));
  return;
}

