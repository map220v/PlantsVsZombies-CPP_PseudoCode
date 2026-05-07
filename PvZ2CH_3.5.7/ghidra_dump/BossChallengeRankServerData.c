// Class: BossChallengeRankServerData


/* BossChallengeRankServerData::~BossChallengeRankServerData() */

void __thiscall
BossChallengeRankServerData::~BossChallengeRankServerData(BossChallengeRankServerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06976e10;
  nop();
  return;
}


/* BossChallengeRankServerData::~BossChallengeRankServerData() */

void __thiscall
BossChallengeRankServerData::~BossChallengeRankServerData(BossChallengeRankServerData *this)

{
  ~BossChallengeRankServerData(this);
  AK::FreeHook(this);
  return;
}


/* BossChallengeRankServerData::BossChallengeRankServerData() */

void __thiscall
BossChallengeRankServerData::BossChallengeRankServerData(BossChallengeRankServerData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06976e10;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* BossChallengeRankServerData::StaticNew() */

BossChallengeRankServerData * BossChallengeRankServerData::StaticNew(void)

{
  BossChallengeRankServerData *this;
  
  this = ::operator_new(0x20);
  BossChallengeRankServerData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeRankServerData::StaticClassInit() */

void BossChallengeRankServerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossChallengeRankServerData");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb4918,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeRankServerData::StaticGetClass() */

long * BossChallengeRankServerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeRankServerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeRankServerData::GetClass() const */

long * BossChallengeRankServerData::GetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeRankServerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeRankServerData::BossChallengeRankServerData(BossChallengeRankServerData const&) */

void __thiscall
BossChallengeRankServerData::BossChallengeRankServerData
          (BossChallengeRankServerData *this,BossChallengeRankServerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined ***)this = &PTR_GetClass_06976e10;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar5;
  return;
}

