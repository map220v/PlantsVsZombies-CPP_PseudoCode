// Class: S2C_PVP_PVPMapInfo


/* S2C_PVP_PVPMapInfo::S2C_PVP_PVPMapInfo() */

void __thiscall S2C_PVP_PVPMapInfo::S2C_PVP_PVPMapInfo(S2C_PVP_PVPMapInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b8f0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_PVPMapInfo_0660b958;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  S2C_PVP_BigMapMainInfo::S2C_PVP_BigMapMainInfo((S2C_PVP_BigMapMainInfo *)(this + 0x60));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  return;
}


/* S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo() */

void __thiscall S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo(S2C_PVP_PVPMapInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b8f0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_PVPMapInfo_0660b958;
  std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::~vector
            ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)(this + 0x48));
  std::vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>>::~vector
            ((vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>> *)(this + 0x30));
  std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::~vector
            ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo() */

void __thiscall S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo(S2C_PVP_PVPMapInfo *this)

{
  ~S2C_PVP_PVPMapInfo(this + -8);
  return;
}


/* S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo() */

void __thiscall S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo(S2C_PVP_PVPMapInfo *this)

{
  ~S2C_PVP_PVPMapInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo() */

void __thiscall S2C_PVP_PVPMapInfo::~S2C_PVP_PVPMapInfo(S2C_PVP_PVPMapInfo *this)

{
  ~S2C_PVP_PVPMapInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_PVPMapInfo::StaticClassInit() */

void S2C_PVP_PVPMapInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_BigMapMainInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03200464,0x24,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_PVPMapInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03233244,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_PVPMapInfo::StaticGetClass() */

long * S2C_PVP_PVPMapInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_PVPMapInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_PVPMapInfo::GetClass() const */

long * S2C_PVP_PVPMapInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_PVPMapInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_PVPMapInfo::StaticNew() */

S2C_PVP_PVPMapInfo * S2C_PVP_PVPMapInfo::StaticNew(void)

{
  S2C_PVP_PVPMapInfo *this;
  
  this = ::operator_new(0x88);
  S2C_PVP_PVPMapInfo(this);
  return this;
}

