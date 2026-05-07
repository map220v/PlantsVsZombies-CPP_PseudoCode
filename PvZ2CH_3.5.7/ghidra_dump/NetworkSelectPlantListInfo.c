// Class: NetworkSelectPlantListInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkSelectPlantListInfo::StaticClassInit() */

void NetworkSelectPlantListInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkSelectPlantListInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04a83438,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkSelectPlantListInfo::StaticGetClass() */

long * NetworkSelectPlantListInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSelectPlantListInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSelectPlantListInfo::GetClass() const */

long * NetworkSelectPlantListInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSelectPlantListInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSelectPlantListInfo::NetworkSelectPlantListInfo() */

void __thiscall
NetworkSelectPlantListInfo::NetworkSelectPlantListInfo(NetworkSelectPlantListInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0693ec30;
  *(undefined ***)(this + 8) = &PTR__NetworkSelectPlantListInfo_0693ec98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkSelectPlantListInfo::StaticNew() */

NetworkSelectPlantListInfo * NetworkSelectPlantListInfo::StaticNew(void)

{
  NetworkSelectPlantListInfo *this;
  
  this = ::operator_new(0x30);
  NetworkSelectPlantListInfo(this);
  return this;
}


/* NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo() */

void __thiscall
NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo(NetworkSelectPlantListInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0693ec30;
  *(undefined ***)(this + 8) = &PTR__NetworkSelectPlantListInfo_0693ec98;
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x18))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo() */

void __thiscall
NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo(NetworkSelectPlantListInfo *this)

{
  ~NetworkSelectPlantListInfo(this + -8);
  return;
}


/* NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo() */

void __thiscall
NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo(NetworkSelectPlantListInfo *this)

{
  ~NetworkSelectPlantListInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo() */

void __thiscall
NetworkSelectPlantListInfo::~NetworkSelectPlantListInfo(NetworkSelectPlantListInfo *this)

{
  ~NetworkSelectPlantListInfo(this + -8);
  return;
}

