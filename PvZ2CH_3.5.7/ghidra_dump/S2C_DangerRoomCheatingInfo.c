// Class: S2C_DangerRoomCheatingInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomCheatingInfo::StaticClassInit() */

void S2C_DangerRoomCheatingInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"TinyCheatPlantInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_032029dc,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_DangerRoomCheatingInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03239ee8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomCheatingInfo::StaticGetClass() */

long * S2C_DangerRoomCheatingInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomCheatingInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomCheatingInfo::GetClass() const */

long * S2C_DangerRoomCheatingInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomCheatingInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomCheatingInfo::S2C_DangerRoomCheatingInfo() */

void __thiscall
S2C_DangerRoomCheatingInfo::S2C_DangerRoomCheatingInfo(S2C_DangerRoomCheatingInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660dd80;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomCheatingInfo_0660dde8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_DangerRoomCheatingInfo::StaticNew() */

S2C_DangerRoomCheatingInfo * S2C_DangerRoomCheatingInfo::StaticNew(void)

{
  S2C_DangerRoomCheatingInfo *this;
  
  this = ::operator_new(0x30);
  S2C_DangerRoomCheatingInfo(this);
  return this;
}


/* S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo() */

void __thiscall
S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo(S2C_DangerRoomCheatingInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660dd80;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomCheatingInfo_0660dde8;
  std::vector<TinyCheatPlantInfo,std::allocator<TinyCheatPlantInfo>>::~vector
            ((vector<TinyCheatPlantInfo,std::allocator<TinyCheatPlantInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo() */

void __thiscall
S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo(S2C_DangerRoomCheatingInfo *this)

{
  ~S2C_DangerRoomCheatingInfo(this + -8);
  return;
}


/* S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo() */

void __thiscall
S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo(S2C_DangerRoomCheatingInfo *this)

{
  ~S2C_DangerRoomCheatingInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo() */

void __thiscall
S2C_DangerRoomCheatingInfo::~S2C_DangerRoomCheatingInfo(S2C_DangerRoomCheatingInfo *this)

{
  ~S2C_DangerRoomCheatingInfo(this + -8);
  return;
}

