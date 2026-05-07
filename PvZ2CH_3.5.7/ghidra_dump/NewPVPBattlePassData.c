// Class: NewPVPBattlePassData


/* NewPVPBattlePassData::NewPVPBattlePassData() */

void __thiscall NewPVPBattlePassData::NewPVPBattlePassData(NewPVPBattlePassData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_06654070;
  *(undefined ***)(this + 8) = &PTR__NewPVPBattlePassData_066540d8;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (NewPVPBattlePassData)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  *(undefined4 *)(this + 0xc0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  BattleOrderRankData::BattleOrderRankData((BattleOrderRankData *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  BattleOrderRankData::BattleOrderRankData((BattleOrderRankData *)(this + 0x1c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  return;
}


/* NewPVPBattlePassData::~NewPVPBattlePassData() */

void __thiscall NewPVPBattlePassData::~NewPVPBattlePassData(NewPVPBattlePassData *this)

{
  *(undefined ***)this = &PTR_GetClass_06654070;
  *(undefined ***)(this + 8) = &PTR__NewPVPBattlePassData_066540d8;
  std::
  vector<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>,std::allocator<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>>>
  ::~vector((vector<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>,std::allocator<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>>>
             *)(this + 0x1e0));
  PakRecord::~PakRecord((PakRecord *)(this + 0x1c0));
  std::
  vector<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>,std::allocator<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>>>
  ::~vector((vector<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>,std::allocator<std::vector<NewPVPBattlePassRankData,std::allocator<NewPVPBattlePassRankData>>>>
             *)(this + 0x1a0));
  PakRecord::~PakRecord((PakRecord *)(this + 0x180));
  std::
  vector<std::map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>,std::allocator<std::map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>>>
  ::~vector((vector<std::map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>,std::allocator<std::map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>>>
             *)(this + 0x158));
  std::
  vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
  ::~vector((vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
             *)(this + 0x140));
  std::
  map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
  ::~map((map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
          *)(this + 0x110));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0xe0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 200));
  std::vector<NewPVPBattlePassPrivilegeAward,std::allocator<NewPVPBattlePassPrivilegeAward>>::
  ~vector((vector<NewPVPBattlePassPrivilegeAward,std::allocator<NewPVPBattlePassPrivilegeAward>> *)
          (this + 0xa8));
  std::vector<NewPVPBattlePassAward,std::allocator<NewPVPBattlePassAward>>::~vector
            ((vector<NewPVPBattlePassAward,std::allocator<NewPVPBattlePassAward>> *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::
  vector<std::vector<NewPVPBattlePassBundle,std::allocator<NewPVPBattlePassBundle>>,std::allocator<std::vector<NewPVPBattlePassBundle,std::allocator<NewPVPBattlePassBundle>>>>
  ::~vector((vector<std::vector<NewPVPBattlePassBundle,std::allocator<NewPVPBattlePassBundle>>,std::allocator<std::vector<NewPVPBattlePassBundle,std::allocator<NewPVPBattlePassBundle>>>>
             *)(this + 0x60));
  std::vector<NewPVPBattlePassAward,std::allocator<NewPVPBattlePassAward>>::~vector
            ((vector<NewPVPBattlePassAward,std::allocator<NewPVPBattlePassAward>> *)(this + 0x48));
  std::vector<NewPVPBattlePassAward,std::allocator<NewPVPBattlePassAward>>::~vector
            ((vector<NewPVPBattlePassAward,std::allocator<NewPVPBattlePassAward>> *)(this + 0x30));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPBattlePassData::~NewPVPBattlePassData() */

void __thiscall NewPVPBattlePassData::~NewPVPBattlePassData(NewPVPBattlePassData *this)

{
  ~NewPVPBattlePassData(this + -8);
  return;
}


/* NewPVPBattlePassData::~NewPVPBattlePassData() */

void __thiscall NewPVPBattlePassData::~NewPVPBattlePassData(NewPVPBattlePassData *this)

{
  ~NewPVPBattlePassData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPBattlePassData::~NewPVPBattlePassData() */

void __thiscall NewPVPBattlePassData::~NewPVPBattlePassData(NewPVPBattlePassData *this)

{
  ~NewPVPBattlePassData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassData::StaticClassInit() */

void NewPVPBattlePassData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPBattlePassAward");
    (*pcVar3)(plVar2,asStack_10,FUN_035410c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPBattlePassRankData");
    (*pcVar3)(plVar2,asStack_10,FUN_03539cdc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPBattlePassBundle");
    (*pcVar3)(plVar2,asStack_10,FUN_03539754,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPBattlePassPrivilegeAward");
    (*pcVar3)(plVar2,asStack_10,FUN_03539600,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPTaskDataInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03539834,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPBattlePassData");
    (*pcVar3)(plVar2,asStack_10,FUN_03542b54,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPBattlePassData::StaticGetClass() */

long * NewPVPBattlePassData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPBattlePassData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassData::GetClass() const */

long * NewPVPBattlePassData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPBattlePassData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassData::StaticNew() */

NewPVPBattlePassData * NewPVPBattlePassData::StaticNew(void)

{
  NewPVPBattlePassData *this;
  
  this = ::operator_new(0x1f8);
  NewPVPBattlePassData(this);
  return this;
}

