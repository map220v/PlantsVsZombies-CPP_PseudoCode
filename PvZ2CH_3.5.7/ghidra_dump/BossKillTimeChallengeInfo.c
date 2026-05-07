// Class: BossKillTimeChallengeInfo


/* BossKillTimeChallengeInfo::~BossKillTimeChallengeInfo() */

void __thiscall
BossKillTimeChallengeInfo::~BossKillTimeChallengeInfo(BossKillTimeChallengeInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06611bd0;
  std::string::~string((string *)(this + 0x18));
  nop();
  return;
}


/* BossKillTimeChallengeInfo::~BossKillTimeChallengeInfo() */

void __thiscall
BossKillTimeChallengeInfo::~BossKillTimeChallengeInfo(BossKillTimeChallengeInfo *this)

{
  ~BossKillTimeChallengeInfo(this);
  AK::FreeHook(this);
  return;
}


/* BossKillTimeChallengeInfo::BossKillTimeChallengeInfo() */

void __thiscall
BossKillTimeChallengeInfo::BossKillTimeChallengeInfo(BossKillTimeChallengeInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06611bd0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Set8BytesTo0(this + 0x18);
  return;
}


/* BossKillTimeChallengeInfo::StaticNew() */

BossKillTimeChallengeInfo * BossKillTimeChallengeInfo::StaticNew(void)

{
  BossKillTimeChallengeInfo *this;
  
  this = ::operator_new(0x20);
  BossKillTimeChallengeInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeInfo::StaticClassInit() */

void BossKillTimeChallengeInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossKillTimeChallengeInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03344878,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeInfo::StaticGetClass() */

long * BossKillTimeChallengeInfo::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"BossKillTimeChallengeInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossKillTimeChallengeInfo::GetClass() const */

long * BossKillTimeChallengeInfo::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"BossKillTimeChallengeInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossKillTimeChallengeInfo::BossKillTimeChallengeInfo(BossKillTimeChallengeInfo const&) */

void __thiscall
BossKillTimeChallengeInfo::BossKillTimeChallengeInfo
          (BossKillTimeChallengeInfo *this,BossKillTimeChallengeInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined ***)this = &PTR_GetClass_06611bd0;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* BossKillTimeChallengeInfo::BossKillTimeChallengeInfo(BossKillTimeChallengeInfo&&) */

void __thiscall
BossKillTimeChallengeInfo::BossKillTimeChallengeInfo
          (BossKillTimeChallengeInfo *this,BossKillTimeChallengeInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined ***)this = &PTR_GetClass_06611bd0;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}


/* BossKillTimeChallengeInfo::TEMPNAMEPLACEHOLDERVALUE(BossKillTimeChallengeInfo const&) */

BossKillTimeChallengeInfo * __thiscall
BossKillTimeChallengeInfo::operator=
          (BossKillTimeChallengeInfo *this,BossKillTimeChallengeInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar3;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}

