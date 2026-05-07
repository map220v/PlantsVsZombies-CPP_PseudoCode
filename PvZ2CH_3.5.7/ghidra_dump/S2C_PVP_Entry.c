// Class: S2C_PVP_Entry


/* S2C_PVP_Entry::S2C_PVP_Entry() */

void __thiscall S2C_PVP_Entry::S2C_PVP_Entry(S2C_PVP_Entry *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660bbc0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Entry_0660bc28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x1e;
  *(undefined4 *)(this + 0x20) = 0x1e;
  *(undefined4 *)(this + 0x24) = 0x3c;
  return;
}


/* S2C_PVP_Entry::~S2C_PVP_Entry() */

void __thiscall S2C_PVP_Entry::~S2C_PVP_Entry(S2C_PVP_Entry *this)

{
  *(undefined ***)this = &PTR_GetClass_0660bbc0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_Entry_0660bc28;
  std::vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>>::~vector
            ((vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>> *)
             (this + 0x40));
  std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>::~vector
            ((vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_Entry::~S2C_PVP_Entry() */

void __thiscall S2C_PVP_Entry::~S2C_PVP_Entry(S2C_PVP_Entry *this)

{
  ~S2C_PVP_Entry(this + -8);
  return;
}


/* S2C_PVP_Entry::~S2C_PVP_Entry() */

void __thiscall S2C_PVP_Entry::~S2C_PVP_Entry(S2C_PVP_Entry *this)

{
  ~S2C_PVP_Entry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_Entry::~S2C_PVP_Entry() */

void __thiscall S2C_PVP_Entry::~S2C_PVP_Entry(S2C_PVP_Entry *this)

{
  ~S2C_PVP_Entry(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_Entry::StaticClassInit() */

void S2C_PVP_Entry::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_LeagueInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03200ad8,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_GardenRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_032008ac,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_Entry");
    (*pcVar3)(plVar2,asStack_10,FUN_032341d0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_Entry::StaticGetClass() */

long * S2C_PVP_Entry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Entry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Entry::GetClass() const */

long * S2C_PVP_Entry::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_Entry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_Entry::StaticNew() */

S2C_PVP_Entry * S2C_PVP_Entry::StaticNew(void)

{
  S2C_PVP_Entry *this;
  
  this = ::operator_new(0x58);
  S2C_PVP_Entry(this);
  return this;
}

