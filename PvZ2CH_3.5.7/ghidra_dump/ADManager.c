// Class: ADManager


/* ADManager::HasADReward() */

bool __thiscall ADManager::HasADReward(ADManager *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  return iVar1 - 9U < 2 || (iVar1 - 5U < 3 || (iVar1 == 0x20 || iVar1 == 0xe));
}


/* ADManager::isCustomLevelAD(ADType) */

bool __thiscall ADManager::isCustomLevelAD(undefined8 param_1,int param_2)

{
  return param_2 - 0xbU < 3;
}


/* ADManager::~ADManager() */

void __thiscall ADManager::~ADManager(ADManager *this)

{
  *(undefined ***)this = &PTR__ADManager_066152d0;
  std::
  map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>::
  ~map((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
        *)(this + 0x10));
  Sexy::LazySingleton<ADManager>::~LazySingleton((LazySingleton<ADManager> *)this);
  return;
}


/* ADManager::~ADManager() */

void __thiscall ADManager::~ADManager(ADManager *this)

{
  ~ADManager(this);
  AK::FreeHook(this);
  return;
}


/* ADManager::ADManager() */

void __thiscall ADManager::ADManager(ADManager *this)

{
  Sexy::LazySingleton<ADManager>::LazySingleton((LazySingleton<ADManager> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ADManager_066152d0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::ServerIdToLocalId(int) */

void __thiscall ADManager::ServerIdToLocalId(ADManager *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::map<ADType,int,std::less<ADType>,std::allocator<std::pair<ADType_const,int>>>::
             begin((map<ADType,int,std::less<ADType>,std::allocator<std::pair<ADType_const,int>>> *)
                   &DAT_06a9cdf8);
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06a9cdf8);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) {
LAB_033ad71c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    puVar3 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (puVar3[1] == param_1) {
      uVar2 = *puVar3;
      goto LAB_033ad71c;
    }
    FUN_033ac360((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::GetLeftADWatchCount(ADType) */

void __thiscall ADManager::GetLeftADWatchCount(ADManager *this,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
             ::find((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
                     *)(this + 0x10),(ADType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  iVar3 = 0;
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    iVar3 = *(int *)(lVar2 + 8) - *(int *)(lVar2 + 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::GetADWatchCount(ADType) */

void __thiscall ADManager::GetADWatchCount(ADManager *this,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
             ::find((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
                     *)(this + 0x10),(ADType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined4 *)(lVar2 + 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::InitDefaultADMaps() */

void __thiscall ADManager::InitDefaultADMaps(ADManager *this)

{
  undefined1 auVar1 [12];
  undefined4 local_24;
  UnchartedModePlantNumData aUStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_24 = 0xe;
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_20,0,3);
  auVar1 = std::make_pair<ADType,ADServerInfo>((ADType *)&local_24,(ADServerInfo *)aUStack_20);
  local_10 = auVar1._8_4_;
  local_18 = auVar1._0_4_;
  local_14 = auVar1._4_4_;
  std::
  map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>::
  insert<std::pair<ADType,ADServerInfo>,void>
            ((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
              *)(this + 0x10),(pair *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::InitADMaps(std::vector<S2C_AdInfo, std::allocator<S2C_AdInfo> > const&) */

void __thiscall ADManager::InitADMaps(ADManager *this,vector *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 auVar3 [12];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  UnchartedModePlantNumData aUStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>::
  clear((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
         *)(this + 0x10));
  local_30 = FUN_033acd98(*(undefined8 *)param_1);
  local_28 = FUN_033acde8(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_34 = ServerIdToLocalId(this,*piVar2);
    UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_20,piVar2[1],piVar2[2]);
    auVar3 = std::make_pair<ADType,ADServerInfo>((ADType *)&local_34,(ADServerInfo *)aUStack_20);
    local_10 = auVar3._8_4_;
    local_18 = auVar3._0_4_;
    local_14 = auVar3._4_4_;
    std::
    map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
    ::insert<std::pair<ADType,ADServerInfo>,void>
              ((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
                *)(this + 0x10),(pair *)&local_18);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
  InitDefaultADMaps(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ADManager::LocalIdToServerId(ADType) */

undefined4 __thiscall ADManager::LocalIdToServerId(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::map<ADType,int,std::less<ADType>,std::allocator<std::pair<ADType_const,int>>>::
           operator[]((map<ADType,int,std::less<ADType>,std::allocator<std::pair<ADType_const,int>>>
                       *)&DAT_06a9cdf8,(ADType *)&local_4);
  return *puVar1;
}


/* ADManager::SetADWatchCount(ADType, int) */

void __thiscall ADManager::SetADWatchCount(ADManager *this,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::
           map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
           ::operator[]((map<ADType,ADServerInfo,std::less<ADType>,std::allocator<std::pair<ADType_const,ADServerInfo>>>
                         *)(this + 0x10),(ADType *)&local_4);
  *puVar1 = param_3;
  return;
}


/* ADManager::RequestLocalReward() */

void __thiscall ADManager::RequestLocalReward(ADManager *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0xe) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SunAdd,500);
    LawnApp::KillCoinStore(gLawnApp);
    iVar1 = GetADWatchCount(this,0xe);
    SetADWatchCount(this,0xe,iVar1 + 1);
    iVar1 = *(int *)(this + 8);
  }
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::NotifyADWatchFinish,iVar1);
  return;
}


/* ADManager::ToViewPositionType(ADType) */

undefined4 __thiscall ADManager::ToViewPositionType(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::
           map<ADType,ViewPositionType,std::less<ADType>,std::allocator<std::pair<ADType_const,ViewPositionType>>>
           ::operator[]((map<ADType,ViewPositionType,std::less<ADType>,std::allocator<std::pair<ADType_const,ViewPositionType>>>
                         *)&DAT_06a9cd40,(ADType *)&local_4);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::CanWatchAD(ADType) */

void __thiscall ADManager::CanWatchAD(ADManager *this,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  code *pcVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Util::GetPackageName((Util *)this);
  if (((param_2 == 0x13) || (cVar1 = LawnApp::IsAdChannel(gLawnApp,3), cVar1 == '\0')) ||
     (iVar3 = GetLeftADWatchCount(this,param_2), iVar3 < 1)) {
    uVar2 = 0;
  }
  else {
    plVar5 = (long *)EASquared::Instance();
    pcVar6 = *(code **)(*plVar5 + 0xb8);
    uVar4 = ToViewPositionType(this,param_2);
    uVar2 = (*pcVar6)(plVar5,uVar4);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ADManager::CanWatchAD(std::string const&) */

void __thiscall ADManager::CanWatchAD(ADManager *this,string *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::
           map<std::string,ADType,std::less<std::string>,std::allocator<std::pair<std::string_const,ADType>>>
           ::operator[]((map<std::string,ADType,std::less<std::string>,std::allocator<std::pair<std::string_const,ADType>>>
                         *)&DAT_06a9ccd0,param_1);
  CanWatchAD(this,*puVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::RequestReward() */

void __thiscall ADManager::RequestReward(ADManager *this)

{
  int iVar1;
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2600];
  string asStack_2c0 [696];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  iVar1 = LocalIdToServerId(this,*(undefined4 *)(this + 8));
  DString::DString(aDStack_ce8,iVar1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_033ac7ac(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_2c0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ADManager::TryRequestReward() */

void __thiscall ADManager::TryRequestReward(ADManager *this)

{
  char cVar1;
  
  cVar1 = MapEventItem::isPlantWars((MapEventItem *)this,*(undefined4 *)(this + 8));
  if (cVar1 == '\0') {
    RequestReward(this);
    return;
  }
  RequestLocalReward(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::onADFinished(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall ADManager::onADFinished(ADManager *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  TGALogMgr *pTVar4;
  size_t __n;
  DString aDStack_40 [16];
  TGANFSLinkageData aTStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isCustomLevelAD(this,*(undefined4 *)(this + 8));
  __n = 0x33b1524;
  switch(param_2) {
  case 0:
    if (cVar1 != '\0') {
      TGANFSLinkageData::TGANFSLinkageData(aTStack_30);
      std::string::append((string *)aTStack_30,"4",__n);
      iVar2 = CustomLevelUtils::GetLevelDetailsLevelID();
      DString::DString(aDStack_40,iVar2);
      pcVar3 = (char *)DString::c_str(aDStack_40);
      std::string::append(asStack_28,pcVar3,__n);
      DString::~DString(aDStack_40);
      iVar2 = ToViewPositionType(this,*(undefined4 *)(this + 8));
      DString::DString(aDStack_40,iVar2);
      pcVar3 = (char *)DString::c_str(aDStack_40);
      std::string::append(asStack_20,pcVar3,__n);
      DString::~DString(aDStack_40);
      std::string::append(asStack_18,"media",__n);
      iVar2 = CustomLevelUtils::GetLevelDetailsAuthorID();
      DString::DString(aDStack_40,iVar2);
      pcVar3 = (char *)DString::c_str(aDStack_40);
      std::string::append(asStack_10,pcVar3,__n);
      DString::~DString(aDStack_40);
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCustomLevelAD(pTVar4,(TGACustomLevelADData *)aTStack_30);
      TGANFSLinkageData::~TGANFSLinkageData(aTStack_30);
    }
    cVar1 = HasADReward(this);
    if (cVar1 == '\0') {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::NotifyADWatchFinish,*(int *)(this + 8));
    }
    else {
      TryRequestReward(this);
    }
    goto switchD_033b1520_default;
  case 1:
    if (cVar1 == '\0') goto switchD_033b1520_default;
    TGANFSLinkageData::TGANFSLinkageData(aTStack_30);
    pcVar3 = "2";
    break;
  case 2:
    if (cVar1 == '\0') goto switchD_033b1520_default;
    TGANFSLinkageData::TGANFSLinkageData(aTStack_30);
    pcVar3 = "3";
    break;
  case 3:
    if (cVar1 == '\0') goto switchD_033b1520_default;
    TGANFSLinkageData::TGANFSLinkageData(aTStack_30);
    pcVar3 = "5";
    break;
  case 4:
    if (cVar1 == '\0') goto switchD_033b1520_default;
    TGANFSLinkageData::TGANFSLinkageData(aTStack_30);
    pcVar3 = "6";
    break;
  default:
    goto switchD_033b1520_default;
  }
  std::string::append((string *)aTStack_30,pcVar3,__n);
  iVar2 = CustomLevelUtils::GetLevelDetailsLevelID();
  DString::DString(aDStack_40,iVar2);
  pcVar3 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_28,pcVar3,__n);
  DString::~DString(aDStack_40);
  iVar2 = ToViewPositionType(this,*(undefined4 *)(this + 8));
  DString::DString(aDStack_40,iVar2);
  pcVar3 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_20,pcVar3,__n);
  DString::~DString(aDStack_40);
  std::string::append(asStack_18,"media",__n);
  iVar2 = CustomLevelUtils::GetLevelDetailsAuthorID();
  DString::DString(aDStack_40,iVar2);
  pcVar3 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_10,pcVar3,__n);
  DString::~DString(aDStack_40);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevelAD(pTVar4,(TGACustomLevelADData *)aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_30);
switchD_033b1520_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADManager::ShowAD(ADType) */

void __thiscall ADManager::ShowAD(ADManager *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  TGALogMgr *this_00;
  long *plVar5;
  size_t __n;
  code *pcVar6;
  DString aDStack_70 [16];
  TGANFSLinkageData aTStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  cVar1 = isCustomLevelAD();
  if (cVar1 != '\0') {
    TGANFSLinkageData::TGANFSLinkageData(aTStack_60);
    std::string::append((string *)aTStack_60,"1",__n);
    iVar2 = CustomLevelUtils::GetLevelDetailsLevelID();
    DString::DString(aDStack_70,iVar2);
    pcVar4 = (char *)DString::c_str(aDStack_70);
    std::string::append(asStack_58,pcVar4,__n);
    DString::~DString(aDStack_70);
    iVar2 = ToViewPositionType(this,param_2);
    DString::DString(aDStack_70,iVar2);
    pcVar4 = (char *)DString::c_str(aDStack_70);
    std::string::append(asStack_50,pcVar4,__n);
    DString::~DString(aDStack_70);
    std::string::append(asStack_48,"media",__n);
    iVar2 = CustomLevelUtils::GetLevelDetailsAuthorID();
    DString::DString(aDStack_70,iVar2);
    pcVar4 = (char *)DString::c_str(aDStack_70);
    std::string::append(asStack_40,pcVar4,__n);
    DString::~DString(aDStack_70);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevelAD(this_00,(TGACustomLevelADData *)aTStack_60);
    TGANFSLinkageData::~TGANFSLinkageData(aTStack_60);
  }
  FUN_033ac1e8(this + 8,param_2);
  plVar5 = (long *)EASquared::Instance();
  pcVar6 = *(code **)(*plVar5 + 0x28);
  std::string::string((string *)aDStack_70,"EA2World");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
  Delegate1<ADManager,void(ADManager::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
            (aDStack_38,aTStack_60);
  uVar3 = ToViewPositionType(this,param_2);
  (*pcVar6)(plVar5,aDStack_70,aDStack_38,1,3,uVar3);
  std::string::~string((string *)aDStack_70);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

