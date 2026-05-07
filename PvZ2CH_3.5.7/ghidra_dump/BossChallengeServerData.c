// Class: BossChallengeServerData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeServerData::StaticClassInit() */

void BossChallengeServerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossChallengeServerData");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb5f44,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeServerData::StaticGetClass() */

long * BossChallengeServerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeServerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeServerData::GetClass() const */

long * BossChallengeServerData::GetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeServerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeServerData::BossChallengeServerData() */

void __thiscall BossChallengeServerData::BossChallengeServerData(BossChallengeServerData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR_GetClass_06976e70;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* BossChallengeServerData::StaticNew() */

BossChallengeServerData * BossChallengeServerData::StaticNew(void)

{
  BossChallengeServerData *this;
  
  this = ::operator_new(0x50);
  BossChallengeServerData(this);
  return this;
}


/* BossChallengeServerData::~BossChallengeServerData() */

void __thiscall BossChallengeServerData::~BossChallengeServerData(BossChallengeServerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06976e70;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<BossChallengeRankServerData,std::allocator<BossChallengeRankServerData>>::~vector
            ((vector<BossChallengeRankServerData,std::allocator<BossChallengeRankServerData>> *)
             (this + 0x20));
  nop();
  return;
}


/* BossChallengeServerData::~BossChallengeServerData() */

void __thiscall BossChallengeServerData::~BossChallengeServerData(BossChallengeServerData *this)

{
  ~BossChallengeServerData(this);
  AK::FreeHook(this);
  return;
}

