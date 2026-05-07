// Class: NetworkEndOfPlay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkEndOfPlay::StaticClassInit() */

void NetworkEndOfPlay::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkEndOfPlay");
    (*pcVar2)(plVar1,asStack_10,FUN_036f0800,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkEndOfPlay::StaticGetClass() */

long * NetworkEndOfPlay::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkEndOfPlay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkEndOfPlay::GetClass() const */

long * NetworkEndOfPlay::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkEndOfPlay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkEndOfPlay::NetworkEndOfPlay() */

void __thiscall NetworkEndOfPlay::NetworkEndOfPlay(NetworkEndOfPlay *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06686520;
  *(undefined ***)(this + 8) = &PTR__NetworkEndOfPlay_06686588;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* NetworkEndOfPlay::StaticNew() */

NetworkEndOfPlay * NetworkEndOfPlay::StaticNew(void)

{
  NetworkEndOfPlay *this;
  
  this = ::operator_new(0x88);
  NetworkEndOfPlay(this);
  return this;
}


/* NetworkEndOfPlay::~NetworkEndOfPlay() */

void __thiscall NetworkEndOfPlay::~NetworkEndOfPlay(NetworkEndOfPlay *this)

{
  *(undefined ***)this = &PTR_GetClass_06686520;
  *(undefined ***)(this + 8) = &PTR__NetworkEndOfPlay_06686588;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x60));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x48));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x30));
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::~vector
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkEndOfPlay::~NetworkEndOfPlay() */

void __thiscall NetworkEndOfPlay::~NetworkEndOfPlay(NetworkEndOfPlay *this)

{
  ~NetworkEndOfPlay(this + -8);
  return;
}


/* NetworkEndOfPlay::~NetworkEndOfPlay() */

void __thiscall NetworkEndOfPlay::~NetworkEndOfPlay(NetworkEndOfPlay *this)

{
  ~NetworkEndOfPlay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkEndOfPlay::~NetworkEndOfPlay() */

void __thiscall NetworkEndOfPlay::~NetworkEndOfPlay(NetworkEndOfPlay *this)

{
  ~NetworkEndOfPlay(this + -8);
  return;
}


/* NetworkEndOfPlay::TEMPNAMEPLACEHOLDERVALUE(NetworkEndOfPlay const&) */

NetworkEndOfPlay * __thiscall
NetworkEndOfPlay::operator=(NetworkEndOfPlay *this,NetworkEndOfPlay *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::operator=
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  return this;
}

