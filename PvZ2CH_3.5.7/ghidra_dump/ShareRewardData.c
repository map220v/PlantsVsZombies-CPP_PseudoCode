// Class: ShareRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareRewardData::StaticClassInit() */

void ShareRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShareRewardBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_033b76a0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ShareRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_033b8c70,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShareRewardData::StaticGetClass() */

long * ShareRewardData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"ShareRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShareRewardData::GetClass() const */

long * ShareRewardData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"ShareRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShareRewardData::ShareRewardData() */

void __thiscall ShareRewardData::ShareRewardData(ShareRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06615a40;
  *(undefined ***)(this + 8) = &PTR__ShareRewardData_06615aa8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ShareRewardData::StaticNew() */

ShareRewardData * ShareRewardData::StaticNew(void)

{
  ShareRewardData *this;
  
  this = ::operator_new(0x38);
  ShareRewardData(this);
  return this;
}


/* ShareRewardData::~ShareRewardData() */

void __thiscall ShareRewardData::~ShareRewardData(ShareRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_06615a40;
  *(undefined ***)(this + 8) = &PTR__ShareRewardData_06615aa8;
  std::vector<ShareRewardBonusInfo,std::allocator<ShareRewardBonusInfo>>::~vector
            ((vector<ShareRewardBonusInfo,std::allocator<ShareRewardBonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ShareRewardData::~ShareRewardData() */

void __thiscall ShareRewardData::~ShareRewardData(ShareRewardData *this)

{
  ~ShareRewardData(this + -8);
  return;
}


/* ShareRewardData::~ShareRewardData() */

void __thiscall ShareRewardData::~ShareRewardData(ShareRewardData *this)

{
  ~ShareRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShareRewardData::~ShareRewardData() */

void __thiscall ShareRewardData::~ShareRewardData(ShareRewardData *this)

{
  ~ShareRewardData(this + -8);
  return;
}

