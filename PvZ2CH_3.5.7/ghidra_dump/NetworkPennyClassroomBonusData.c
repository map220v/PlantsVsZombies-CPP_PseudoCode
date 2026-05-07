// Class: NetworkPennyClassroomBonusData


/* NetworkPennyClassroomBonusData::NetworkPennyClassroomBonusData() */

void __thiscall
NetworkPennyClassroomBonusData::NetworkPennyClassroomBonusData(NetworkPennyClassroomBonusData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069ccba0;
  *(undefined ***)(this + 8) = &PTR__NetworkPennyClassroomBonusData_069ccc08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData() */

void __thiscall
NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData
          (NetworkPennyClassroomBonusData *this)

{
  *(undefined ***)this = &PTR_GetClass_069ccba0;
  *(undefined ***)(this + 8) = &PTR__NetworkPennyClassroomBonusData_069ccc08;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData() */

void __thiscall
NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData
          (NetworkPennyClassroomBonusData *this)

{
  ~NetworkPennyClassroomBonusData(this + -8);
  return;
}


/* NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData() */

void __thiscall
NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData
          (NetworkPennyClassroomBonusData *this)

{
  ~NetworkPennyClassroomBonusData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData() */

void __thiscall
NetworkPennyClassroomBonusData::~NetworkPennyClassroomBonusData
          (NetworkPennyClassroomBonusData *this)

{
  ~NetworkPennyClassroomBonusData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkPennyClassroomBonusData::StaticClassInit() */

void NetworkPennyClassroomBonusData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkPennyClassroomBonusData");
    (*pcVar2)(plVar1,asStack_10,FUN_04dec4b0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkPennyClassroomBonusData::StaticGetClass() */

long * NetworkPennyClassroomBonusData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPennyClassroomBonusData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPennyClassroomBonusData::GetClass() const */

long * NetworkPennyClassroomBonusData::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPennyClassroomBonusData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPennyClassroomBonusData::StaticNew() */

NetworkPennyClassroomBonusData * NetworkPennyClassroomBonusData::StaticNew(void)

{
  NetworkPennyClassroomBonusData *this;
  
  this = ::operator_new(0x30);
  NetworkPennyClassroomBonusData(this);
  return this;
}

