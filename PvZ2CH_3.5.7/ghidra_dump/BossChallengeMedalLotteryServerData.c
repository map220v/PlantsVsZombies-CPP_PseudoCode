// Class: BossChallengeMedalLotteryServerData


/* BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData() */

void __thiscall
BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData
          (BossChallengeMedalLotteryServerData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR_GetClass_06976ed0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData() */

void __thiscall
BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData
          (BossChallengeMedalLotteryServerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06976ed0;
  std::vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>>::~vector
            ((vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>> *)(this + 0x30));
  std::vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>>::~vector
            ((vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>> *)(this + 0x18));
  nop();
  return;
}


/* BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData() */

void __thiscall
BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData
          (BossChallengeMedalLotteryServerData *this)

{
  ~BossChallengeMedalLotteryServerData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeMedalLotteryServerData::StaticClassInit() */

void BossChallengeMedalLotteryServerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossChallengeMedalLotteryServerData");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb62e4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeMedalLotteryServerData::StaticGetClass() */

long * BossChallengeMedalLotteryServerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeMedalLotteryServerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeMedalLotteryServerData::GetClass() const */

long * BossChallengeMedalLotteryServerData::GetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeMedalLotteryServerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeMedalLotteryServerData::StaticNew() */

BossChallengeMedalLotteryServerData * BossChallengeMedalLotteryServerData::StaticNew(void)

{
  BossChallengeMedalLotteryServerData *this;
  
  this = ::operator_new(0x48);
  BossChallengeMedalLotteryServerData(this);
  return this;
}

