// Class: CustomLevelLeaderBoardNetworkData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelLeaderBoardNetworkData::StaticClassInit() */

void CustomLevelLeaderBoardNetworkData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelLeaderBoardBaseData");
    (*pcVar3)(plVar2,asStack_10,FUN_035e5d54,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomLevelLeaderBoardNetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_035ea950,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelLeaderBoardNetworkData::StaticGetClass() */

long * CustomLevelLeaderBoardNetworkData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelLeaderBoardNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelLeaderBoardNetworkData::GetClass() const */

long * CustomLevelLeaderBoardNetworkData::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelLeaderBoardNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelLeaderBoardNetworkData::CustomLevelLeaderBoardNetworkData() */

void __thiscall
CustomLevelLeaderBoardNetworkData::CustomLevelLeaderBoardNetworkData
          (CustomLevelLeaderBoardNetworkData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06661470;
  *(undefined ***)(this + 8) = &PTR__CustomLevelLeaderBoardNetworkData_066614d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* CustomLevelLeaderBoardNetworkData::StaticNew() */

CustomLevelLeaderBoardNetworkData * CustomLevelLeaderBoardNetworkData::StaticNew(void)

{
  CustomLevelLeaderBoardNetworkData *this;
  
  this = ::operator_new(0x38);
  CustomLevelLeaderBoardNetworkData(this);
  return this;
}


/* CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData() */

void __thiscall
CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData
          (CustomLevelLeaderBoardNetworkData *this)

{
  *(undefined ***)this = &PTR_GetClass_06661470;
  *(undefined ***)(this + 8) = &PTR__CustomLevelLeaderBoardNetworkData_066614d8;
  std::vector<CustomLevelLeaderBoardBaseData,std::allocator<CustomLevelLeaderBoardBaseData>>::
  ~vector((vector<CustomLevelLeaderBoardBaseData,std::allocator<CustomLevelLeaderBoardBaseData>> *)
          (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData() */

void __thiscall
CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData
          (CustomLevelLeaderBoardNetworkData *this)

{
  ~CustomLevelLeaderBoardNetworkData(this + -8);
  return;
}


/* CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData() */

void __thiscall
CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData
          (CustomLevelLeaderBoardNetworkData *this)

{
  ~CustomLevelLeaderBoardNetworkData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData() */

void __thiscall
CustomLevelLeaderBoardNetworkData::~CustomLevelLeaderBoardNetworkData
          (CustomLevelLeaderBoardNetworkData *this)

{
  ~CustomLevelLeaderBoardNetworkData(this + -8);
  return;
}

