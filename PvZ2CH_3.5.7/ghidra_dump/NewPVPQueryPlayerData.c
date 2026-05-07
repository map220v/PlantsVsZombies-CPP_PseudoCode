// Class: NewPVPQueryPlayerData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPQueryPlayerData::StaticClassInit() */

void NewPVPQueryPlayerData::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"NewPVPQueryPlayerData");
    (*pcVar2)(plVar1,asStack_10,FUN_034dd3ec,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPQueryPlayerData::StaticGetClass() */

long * NewPVPQueryPlayerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPQueryPlayerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPQueryPlayerData::GetClass() const */

long * NewPVPQueryPlayerData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPQueryPlayerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPQueryPlayerData::NewPVPQueryPlayerData() */

void __thiscall NewPVPQueryPlayerData::NewPVPQueryPlayerData(NewPVPQueryPlayerData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647e50;
  *(undefined ***)(this + 8) = &PTR__NewPVPQueryPlayerData_06647eb8;
  Set8BytesTo0(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* NewPVPQueryPlayerData::StaticNew() */

NewPVPQueryPlayerData * NewPVPQueryPlayerData::StaticNew(void)

{
  NewPVPQueryPlayerData *this;
  
  this = ::operator_new(0x40);
  NewPVPQueryPlayerData(this);
  return this;
}


/* NewPVPQueryPlayerData::~NewPVPQueryPlayerData() */

void __thiscall NewPVPQueryPlayerData::~NewPVPQueryPlayerData(NewPVPQueryPlayerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06647e50;
  *(undefined ***)(this + 8) = &PTR__NewPVPQueryPlayerData_06647eb8;
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::~vector
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)(this + 0x20))
  ;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPQueryPlayerData::~NewPVPQueryPlayerData() */

void __thiscall NewPVPQueryPlayerData::~NewPVPQueryPlayerData(NewPVPQueryPlayerData *this)

{
  ~NewPVPQueryPlayerData(this + -8);
  return;
}


/* NewPVPQueryPlayerData::~NewPVPQueryPlayerData() */

void __thiscall NewPVPQueryPlayerData::~NewPVPQueryPlayerData(NewPVPQueryPlayerData *this)

{
  ~NewPVPQueryPlayerData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPQueryPlayerData::~NewPVPQueryPlayerData() */

void __thiscall NewPVPQueryPlayerData::~NewPVPQueryPlayerData(NewPVPQueryPlayerData *this)

{
  ~NewPVPQueryPlayerData(this + -8);
  return;
}


/* NewPVPQueryPlayerData::NewPVPQueryPlayerData(NewPVPQueryPlayerData const&) */

void __thiscall
NewPVPQueryPlayerData::NewPVPQueryPlayerData
          (NewPVPQueryPlayerData *this,NewPVPQueryPlayerData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_06647e50;
  *(undefined ***)(this + 8) = &PTR__NewPVPQueryPlayerData_06647eb8;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::vector
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* NewPVPQueryPlayerData::TEMPNAMEPLACEHOLDERVALUE(NewPVPQueryPlayerData const&) */

NewPVPQueryPlayerData * __thiscall
NewPVPQueryPlayerData::operator=(NewPVPQueryPlayerData *this,NewPVPQueryPlayerData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::operator=
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

