// Class: S2C_PVP_MapInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_MapInfo::StaticClassInit() */

void S2C_PVP_MapInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_ZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_032002a4,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_MapInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03232ffc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_MapInfo::StaticGetClass() */

long * S2C_PVP_MapInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_MapInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_MapInfo::GetClass() const */

long * S2C_PVP_MapInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_MapInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_MapInfo::S2C_PVP_MapInfo() */

void __thiscall S2C_PVP_MapInfo::S2C_PVP_MapInfo(S2C_PVP_MapInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b860;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_MapInfo_0660b8c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* S2C_PVP_MapInfo::StaticNew() */

S2C_PVP_MapInfo * S2C_PVP_MapInfo::StaticNew(void)

{
  S2C_PVP_MapInfo *this;
  
  this = ::operator_new(0x48);
  S2C_PVP_MapInfo(this);
  return this;
}


/* S2C_PVP_MapInfo::~S2C_PVP_MapInfo() */

void __thiscall S2C_PVP_MapInfo::~S2C_PVP_MapInfo(S2C_PVP_MapInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b860;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_MapInfo_0660b8c8;
  std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::~vector
            ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)(this + 0x30));
  std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::~vector
            ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_MapInfo::~S2C_PVP_MapInfo() */

void __thiscall S2C_PVP_MapInfo::~S2C_PVP_MapInfo(S2C_PVP_MapInfo *this)

{
  ~S2C_PVP_MapInfo(this + -8);
  return;
}


/* S2C_PVP_MapInfo::~S2C_PVP_MapInfo() */

void __thiscall S2C_PVP_MapInfo::~S2C_PVP_MapInfo(S2C_PVP_MapInfo *this)

{
  ~S2C_PVP_MapInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_MapInfo::~S2C_PVP_MapInfo() */

void __thiscall S2C_PVP_MapInfo::~S2C_PVP_MapInfo(S2C_PVP_MapInfo *this)

{
  ~S2C_PVP_MapInfo(this + -8);
  return;
}

