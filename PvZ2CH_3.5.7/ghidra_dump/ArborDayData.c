// Class: ArborDayData


/* ArborDayData::ArborDayData() */

void __thiscall ArborDayData::ArborDayData(ArborDayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06700180;
  *(undefined ***)(this + 8) = &PTR__ArborDayData_067001e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* ArborDayData::~ArborDayData() */

void __thiscall ArborDayData::~ArborDayData(ArborDayData *this)

{
  *(undefined ***)this = &PTR_GetClass_06700180;
  *(undefined ***)(this + 8) = &PTR__ArborDayData_067001e8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf0));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0xd8));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0xa8));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x90));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::~vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0x70));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::~vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0x58));
  std::vector<ArborPresentData,std::allocator<ArborPresentData>>::~vector
            ((vector<ArborPresentData,std::allocator<ArborPresentData>> *)(this + 0x40));
  std::vector<ArborDayBonus,std::allocator<ArborDayBonus>>::~vector
            ((vector<ArborDayBonus,std::allocator<ArborDayBonus>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ArborDayData::~ArborDayData() */

void __thiscall ArborDayData::~ArborDayData(ArborDayData *this)

{
  ~ArborDayData(this + -8);
  return;
}


/* ArborDayData::~ArborDayData() */

void __thiscall ArborDayData::~ArborDayData(ArborDayData *this)

{
  ~ArborDayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArborDayData::~ArborDayData() */

void __thiscall ArborDayData::~ArborDayData(ArborDayData *this)

{
  ~ArborDayData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayData::StaticClassInit() */

void ArborDayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArborDayBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_03a20818,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArborPresentData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a26a20,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArborDayData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a26f0c,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArborDayData::StaticGetClass() */

long * ArborDayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArborDayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArborDayData::GetClass() const */

long * ArborDayData::GetClass(void)

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
  (*pcVar3)(plVar1,"ArborDayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArborDayData::StaticNew() */

ArborDayData * ArborDayData::StaticNew(void)

{
  ArborDayData *this;
  
  this = ::operator_new(0x108);
  ArborDayData(this);
  return this;
}


/* ArborDayData::ArborDayData(ArborDayData const&) */

void __thiscall ArborDayData::ArborDayData(ArborDayData *this,ArborDayData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)this = &PTR_GetClass_06700180;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x24) = uVar5;
  *(undefined ***)(this + 8) = &PTR__ArborDayData_067001e8;
  std::vector<ArborDayBonus,std::allocator<ArborDayBonus>>::vector
            ((vector<ArborDayBonus,std::allocator<ArborDayBonus>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  std::vector<ArborPresentData,std::allocator<ArborPresentData>>::vector
            ((vector<ArborPresentData,std::allocator<ArborPresentData>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0x70),
             (vector *)(param_1 + 0x70));
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0xa8),(map *)(param_1 + 0xa8));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0xd8),(vector *)(param_1 + 0xd8));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0xf0),(vector *)(param_1 + 0xf0));
  return;
}

