// Class: S2C_PVP_PlayerInfos


/* S2C_PVP_PlayerInfos::S2C_PVP_PlayerInfos() */

void __thiscall S2C_PVP_PlayerInfos::S2C_PVP_PlayerInfos(S2C_PVP_PlayerInfos *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_0660bc50;
  *(undefined ***)this = &PTR_GetClass_0660bc50;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_PlayerInfos_0660bcb8;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  S2C_PVP_DefenderInfo::S2C_PVP_DefenderInfo((S2C_PVP_DefenderInfo *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  std::string::append((string *)(this + 0x20),"",(size_t)__n);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}


/* S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos() */

void __thiscall S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos(S2C_PVP_PlayerInfos *this)

{
  *(undefined ***)this = &PTR_GetClass_0660bc50;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_PlayerInfos_0660bcb8;
  std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::~vector
            ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)(this + 0x40));
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos() */

void __thiscall S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos(S2C_PVP_PlayerInfos *this)

{
  ~S2C_PVP_PlayerInfos(this + -8);
  return;
}


/* S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos() */

void __thiscall S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos(S2C_PVP_PlayerInfos *this)

{
  ~S2C_PVP_PlayerInfos(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos() */

void __thiscall S2C_PVP_PlayerInfos::~S2C_PVP_PlayerInfos(S2C_PVP_PlayerInfos *this)

{
  ~S2C_PVP_PlayerInfos(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_PlayerInfos::StaticClassInit() */

void S2C_PVP_PlayerInfos::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_DefenderInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03206418,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_PlayerInfos");
    (*pcVar3)(plVar2,asStack_10,FUN_032337c0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_PlayerInfos::StaticGetClass() */

long * S2C_PVP_PlayerInfos::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_PlayerInfos",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_PlayerInfos::GetClass() const */

long * S2C_PVP_PlayerInfos::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_PlayerInfos",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_PlayerInfos::StaticNew() */

S2C_PVP_PlayerInfos * S2C_PVP_PlayerInfos::StaticNew(void)

{
  S2C_PVP_PlayerInfos *this;
  
  this = ::operator_new(0x60);
  S2C_PVP_PlayerInfos(this);
  return this;
}

