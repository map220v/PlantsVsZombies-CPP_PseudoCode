// Class: S2C_PvPRankInfo


/* S2C_PvPRankInfo::S2C_PvPRankInfo() */

void __thiscall S2C_PvPRankInfo::S2C_PvPRankInfo(S2C_PvPRankInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660b980;
  *(undefined ***)(this + 8) = &PTR__S2C_PvPRankInfo_0660b9e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo((S2C_PVP_PreGardenRankInfo *)(this + 0x50));
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* S2C_PvPRankInfo::~S2C_PvPRankInfo() */

void __thiscall S2C_PvPRankInfo::~S2C_PvPRankInfo(S2C_PvPRankInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b980;
  *(undefined ***)(this + 8) = &PTR__S2C_PvPRankInfo_0660b9e8;
  std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)(this + 0x50));
  std::vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>>::~vector
            ((vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>> *)
             (this + 0x38));
  std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::~vector
            ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PvPRankInfo::~S2C_PvPRankInfo() */

void __thiscall S2C_PvPRankInfo::~S2C_PvPRankInfo(S2C_PvPRankInfo *this)

{
  ~S2C_PvPRankInfo(this + -8);
  return;
}


/* S2C_PvPRankInfo::~S2C_PvPRankInfo() */

void __thiscall S2C_PvPRankInfo::~S2C_PvPRankInfo(S2C_PvPRankInfo *this)

{
  ~S2C_PvPRankInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PvPRankInfo::~S2C_PvPRankInfo() */

void __thiscall S2C_PvPRankInfo::~S2C_PvPRankInfo(S2C_PvPRankInfo *this)

{
  ~S2C_PvPRankInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PvPRankInfo::StaticClassInit() */

void S2C_PvPRankInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_RankInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0320610c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_PreGardenRankInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03205ed8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PvPRankInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03233c08,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PvPRankInfo::StaticGetClass() */

long * S2C_PvPRankInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PvPRankInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PvPRankInfo::GetClass() const */

long * S2C_PvPRankInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PvPRankInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PvPRankInfo::StaticNew() */

S2C_PvPRankInfo * S2C_PvPRankInfo::StaticNew(void)

{
  S2C_PvPRankInfo *this;
  
  this = ::operator_new(0x78);
  S2C_PvPRankInfo(this);
  return this;
}

