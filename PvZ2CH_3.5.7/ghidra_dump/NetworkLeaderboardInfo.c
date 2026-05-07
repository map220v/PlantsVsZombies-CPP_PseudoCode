// Class: NetworkLeaderboardInfo


/* NetworkLeaderboardInfo::NetworkLeaderboardInfo(NetworkLeaderboardInfo const&) */

void __thiscall
NetworkLeaderboardInfo::NetworkLeaderboardInfo
          (NetworkLeaderboardInfo *this,NetworkLeaderboardInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_06686640;
  *(undefined ***)(this + 8) = &PTR__NetworkLeaderboardInfo_066866a8;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::vector
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  std::
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  ::vector((vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
            *)(this + 0x38),(vector *)(param_1 + 0x38));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<LegendReward,std::allocator<LegendReward>>::vector
            ((vector<LegendReward,std::allocator<LegendReward>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  return;
}


/* NetworkLeaderboardInfo::~NetworkLeaderboardInfo() */

void __thiscall NetworkLeaderboardInfo::~NetworkLeaderboardInfo(NetworkLeaderboardInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06686640;
  *(undefined ***)(this + 8) = &PTR__NetworkLeaderboardInfo_066866a8;
  std::vector<LegendReward,std::allocator<LegendReward>>::~vector
            ((vector<LegendReward,std::allocator<LegendReward>> *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  ::~vector((vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
             *)(this + 0x38));
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::~vector
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkLeaderboardInfo::~NetworkLeaderboardInfo() */

void __thiscall NetworkLeaderboardInfo::~NetworkLeaderboardInfo(NetworkLeaderboardInfo *this)

{
  ~NetworkLeaderboardInfo(this + -8);
  return;
}


/* NetworkLeaderboardInfo::~NetworkLeaderboardInfo() */

void __thiscall NetworkLeaderboardInfo::~NetworkLeaderboardInfo(NetworkLeaderboardInfo *this)

{
  ~NetworkLeaderboardInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkLeaderboardInfo::~NetworkLeaderboardInfo() */

void __thiscall NetworkLeaderboardInfo::~NetworkLeaderboardInfo(NetworkLeaderboardInfo *this)

{
  ~NetworkLeaderboardInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkLeaderboardInfo::StaticClassInit() */

void NetworkLeaderboardInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"LegendReward");
    (*pcVar3)(plVar2,asStack_10,FUN_036f0c7c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkLeaderboardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_036f1f84,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkLeaderboardInfo::StaticGetClass() */

long * NetworkLeaderboardInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkLeaderboardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkLeaderboardInfo::GetClass() const */

long * NetworkLeaderboardInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkLeaderboardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkLeaderboardInfo::NetworkLeaderboardInfo() */

void __thiscall NetworkLeaderboardInfo::NetworkLeaderboardInfo(NetworkLeaderboardInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06686640;
  *(undefined ***)(this + 8) = &PTR__NetworkLeaderboardInfo_066866a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* NetworkLeaderboardInfo::StaticNew() */

NetworkLeaderboardInfo * NetworkLeaderboardInfo::StaticNew(void)

{
  NetworkLeaderboardInfo *this;
  
  this = ::operator_new(0x80);
  NetworkLeaderboardInfo(this);
  return this;
}


/* NetworkLeaderboardInfo::TEMPNAMEPLACEHOLDERVALUE(NetworkLeaderboardInfo const&) */

NetworkLeaderboardInfo * __thiscall
NetworkLeaderboardInfo::operator=(NetworkLeaderboardInfo *this,NetworkLeaderboardInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::operator=
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  std::
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  ::operator=((vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
               *)(this + 0x38),(vector *)(param_1 + 0x38));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<LegendReward,std::allocator<LegendReward>>::operator=
            ((vector<LegendReward,std::allocator<LegendReward>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  return this;
}

