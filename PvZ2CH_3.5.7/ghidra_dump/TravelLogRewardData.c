// Class: TravelLogRewardData


/* TravelLogRewardData::TravelLogRewardData() */

void __thiscall TravelLogRewardData::TravelLogRewardData(TravelLogRewardData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066f59d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* TravelLogRewardData::~TravelLogRewardData() */

void __thiscall TravelLogRewardData::~TravelLogRewardData(TravelLogRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f59d0;
  std::vector<TLServerReward,std::allocator<TLServerReward>>::~vector
            ((vector<TLServerReward,std::allocator<TLServerReward>> *)(this + 8));
  nop();
  return;
}


/* TravelLogRewardData::~TravelLogRewardData() */

void __thiscall TravelLogRewardData::~TravelLogRewardData(TravelLogRewardData *this)

{
  ~TravelLogRewardData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogRewardData::StaticClassInit() */

void TravelLogRewardData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TLServerReward");
    (*pcVar3)(plVar2,asStack_10,FUN_039e2c18,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TravelLogRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_039e6ca8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogRewardData::StaticGetClass() */

long * TravelLogRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogRewardData::GetClass() const */

long * TravelLogRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogRewardData::StaticNew() */

TravelLogRewardData * TravelLogRewardData::StaticNew(void)

{
  TravelLogRewardData *this;
  
  this = ::operator_new(0x20);
  TravelLogRewardData(this);
  return this;
}

