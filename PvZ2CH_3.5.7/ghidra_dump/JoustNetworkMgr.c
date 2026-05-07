// Class: JoustNetworkMgr


/* JoustNetworkMgr::CancelCurrentRequest() */

void __thiscall JoustNetworkMgr::CancelCurrentRequest(JoustNetworkMgr *this)

{
  NetworkServiceManager *this_00;
  
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  Sexy::NetworkServiceManager::CancelRequest(this_00,*(int *)(this + 0xdc));
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  return;
}


/* JoustNetworkMgr::getPCPID() */

undefined8 JoustNetworkMgr::getPCPID(void)

{
  JoustUtils *in_x0;
  undefined8 in_x8;
  
  JoustUtils::PlayerGetPCPID(in_x0);
  return in_x8;
}


/* JoustNetworkMgr::sendRequest(Sexy::StructuredData&, JoustAPIContext) */

void __thiscall
JoustNetworkMgr::sendRequest(JoustNetworkMgr *this,StructuredData *param_1,int param_3)

{
  undefined4 uVar1;
  NetworkServiceManager *this_00;
  
  *(int *)(this + 0xd8) = param_3;
  *(undefined4 *)(this + 0xe0) = 1;
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  uVar1 = Sexy::NetworkServiceManager::MakeRequest
                    (this_00,param_1,(NetworkServiceListener *)this,(void *)(long)param_3);
  *(undefined4 *)(this + 0xdc) = uVar1;
  return;
}


/* JoustNetworkMgr::GetResponseStatus(JoustAPIContext) */

undefined4 __thiscall JoustNetworkMgr::GetResponseStatus(JoustNetworkMgr *this,int param_2)

{
  if (*(int *)(this + 0xd8) != param_2) {
    return 0;
  }
  return *(undefined4 *)(this + 0xe0);
}


/* JoustNetworkMgr::GetLeagueCount() */

void __thiscall JoustNetworkMgr::GetLeagueCount(JoustNetworkMgr *this)

{
  FUN_0387d794(*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xa0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::filterResponseForErrors(Sexy::StructuredData const*) */

void __thiscall
JoustNetworkMgr::filterResponseForErrors(JoustNetworkMgr *this,StructuredData *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  uVar2 = 2;
  local_8 = ___stack_chk_guard;
  __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.ErrorCode","");
  std::string::string(asStack_10,__s);
  nop();
  bVar1 = std::operator!=(asStack_10,"");
  if (bVar1) {
    uVar2 = 8;
    bVar1 = std::operator==(asStack_10,"INVALID_PLAYER_ID");
    if (!bVar1) {
      uVar2 = 5;
      bVar1 = std::operator==(asStack_10,"INVALID_MATCH_ID");
      if (!bVar1) {
        uVar2 = 7;
        bVar1 = std::operator==(asStack_10,"NOT_REGISTERED_FOR_TOURNAMENT");
        if (!bVar1) {
          bVar1 = std::operator==(asStack_10,"TOURNAMENT_EXPIRED");
          uVar2 = 6;
          if (!bVar1) {
            uVar2 = 4;
          }
        }
      }
    }
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::applySuccessfulEmptyResponse(JoustAPIContext) */

void __thiscall
JoustNetworkMgr::applySuccessfulEmptyResponse(JoustNetworkMgr *this,undefined4 param_2)

{
  bool bVar1;
  JoustAPIResponse aJStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustAPIResponse::JoustAPIResponse(aJStack_18);
  local_10 = param_2;
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe8));
  if (bVar1) {
    std::function<void(JoustAPIResponse*)>::operator()
              ((function<void(JoustAPIResponse*)> *)(this + 0xe8),aJStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::buildURL(std::string const&) */

void JoustNetworkMgr::buildURL(string *param_1)

{
  string *in_x1;
  string asStack_10 [8];
  JoustUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::GetAPICurrentBaseURL(___stack_chk_guard);
  std::operator+(asStack_10,in_x1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustNetworkMgr::CheckCurrentDashboardInfo() */

undefined8 __thiscall JoustNetworkMgr::CheckCurrentDashboardInfo(JoustNetworkMgr *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x29d0,true,0);
  this[0x128] = (JoustNetworkMgr)0x1;
  return 1;
}


/* JoustNetworkMgr::JoustNetworkMgr() */

void __thiscall JoustNetworkMgr::JoustNetworkMgr(JoustNetworkMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  Sexy::LazySingleton<JoustNetworkMgr>::LazySingleton((LazySingleton<JoustNetworkMgr> *)(this + 8));
  *(undefined ***)this = &PTR_ToString_066ae670;
  *(undefined ***)(this + 8) = &PTR__JoustNetworkMgr_066ae6d8;
  JoustAPIResponseDashboard::JoustAPIResponseDashboard((JoustAPIResponseDashboard *)(this + 0x10));
  this[0xd0] = (JoustNetworkMgr)0x0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0x128] = (JoustNetworkMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<JoustNetworkMgr,void(JoustNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* JoustNetworkMgr::doFailedResponseCallback(JoustAPIContext, JoustAPIResponseStatus) */

void JoustNetworkMgr::doFailedResponseCallback(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(param_1 + 0x108));
  if (bVar1) {
    std::function<void()>::operator()((function<void()> *)(param_1 + 0x108));
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::JoustNetworkResponseReceived,param_2,
             *(int *)(param_1 + 0xe0));
  return;
}


/* JoustNetworkMgr::applySuccessfulResponse(JoustAPIContext, Sexy::StructuredData const*) */

void __thiscall
JoustNetworkMgr::applySuccessfulResponse(JoustNetworkMgr *this,int param_2,StructuredData *param_3)

{
  int iVar1;
  
  iVar1 = filterResponseForErrors(this,param_3);
  *(int *)(this + 0xe0) = iVar1;
  if (iVar1 != 2) {
    doFailedResponseCallback(this,param_2,iVar1);
    return;
  }
  if ((param_2 == 1) || (param_2 == 5)) {
    applySuccessfulEmptyResponse(this,param_2);
    iVar1 = *(int *)(this + 0xe0);
  }
  else {
    iVar1 = 2;
    if (param_2 == 0) {
      doFailedResponseCallback(this,0,4);
      return;
    }
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::JoustNetworkResponseReceived,param_2,iVar1);
  return;
}


/* JoustNetworkMgr::handleDownloadError(JoustAPIContext, int) */

void JoustNetworkMgr::handleDownloadError(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 3;
  *(undefined4 *)(param_1 + 0xe0) = 3;
  bVar1 = std::function::operator_cast_to_bool((function *)(param_1 + 0x108));
  if (bVar1) {
    std::function<void()>::operator()((function<void()> *)(param_1 + 0x108));
    iVar2 = *(int *)(param_1 + 0xe0);
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::JoustNetworkResponseReceived,param_2,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::parseRewardStructure(Sexy::StructuredData::Value const*) */

void JoustNetworkMgr::parseRewardStructure(Value *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  PlantWarsNetworkMgr *this;
  TRefNamedSymbolCollection<Reflection::REnum> *this_00;
  ZombieType *this_01;
  char *pcVar3;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  Value *in_x1;
  undefined1 *__n;
  LevelOfTheDay_RewardItemType *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantWarsNetworkMgr *)Reflection::CRefSymbolDb::GetManualReflection();
  this_00 = (TRefNamedSymbolCollection<Reflection::REnum> *)
            PlantWarsNetworkMgr::GetEndPlayData(this);
  std::string::string(asStack_10,"AwardType");
  this_01 = (ZombieType *)
            Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetNamed
                      (this_00,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(in_x8);
  pcVar3 = (char *)Sexy::StructuredData::Value::StringForPath(in_x1,".Award","");
  std::string::string(asStack_10,pcVar3);
  nop();
  bVar1 = std::operator!=(asStack_10,"");
  if (bVar1) {
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              ZombieType::GetAudioGroups(this_01);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,asStack_10);
    uVar2 = FUN_0387d3ac(*(undefined4 *)(lVar4 + 0x68));
    *(undefined4 *)(in_x8 + 0x10) = uVar2;
  }
  __n = &DAT_055923fe;
  pcVar3 = (char *)Sexy::StructuredData::Value::StringForPath(in_x1,".AwardParam","");
  std::string::append((string *)(in_x8 + 0x18),pcVar3,(size_t)__n);
  uVar2 = Sexy::StructuredData::Value::IntegerForPath(in_x1,".AwardQuantity",0);
  *(undefined4 *)(in_x8 + 0x28) = uVar2;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::RequestPostMatch() */

void __thiscall JoustNetworkMgr::RequestPostMatch(JoustNetworkMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1488];
  string asStack_718 [1808];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_0387e258(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_718,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::initRequestData(Sexy::StructuredData&, std::string const&, bool) */

void __thiscall
JoustNetworkMgr::initRequestData
          (JoustNetworkMgr *this,StructuredData *param_1,string *param_2,bool param_3)

{
  Version *this_00;
  string asStack_f8 [8];
  string asStack_f0 [16];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3) {
    Sexy::StructuredData::AddString(param_1,"method","POST");
  }
  else {
    Sexy::StructuredData::AddString(param_1,"method","GET");
  }
  if (this[0xd0] != (JoustNetworkMgr)0x0) {
    Sexy::StructuredData::AddInteger(param_1,"timeout",(long)*(int *)(this + 0xd4));
  }
  buildURL((string *)this);
  Sexy::StructuredData::AddString(param_1,"url",asStack_f0);
  std::string::~string(asStack_f0);
  Version::App(this_00);
  FUN_0387d464(asStack_f8,local_e0,local_dc,local_d8);
  Sexy::StructuredData::AddString(param_1,"clientVersion",asStack_f8);
  std::string::~string(asStack_f8);
  PVZVersion::~PVZVersion((PVZVersion *)asStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustNetworkMgr::~JoustNetworkMgr() */

void __thiscall JoustNetworkMgr::~JoustNetworkMgr(JoustNetworkMgr *this)

{
  *(undefined ***)(this + 8) = &PTR__JoustNetworkMgr_066ae6d8;
  *(undefined ***)this = &PTR_ToString_066ae670;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x130));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x108));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe8));
  JoustAPIResponseDashboard::~JoustAPIResponseDashboard((JoustAPIResponseDashboard *)(this + 0x10));
  Sexy::LazySingleton<JoustNetworkMgr>::~LazySingleton((LazySingleton<JoustNetworkMgr> *)(this + 8))
  ;
  return;
}


/* non-virtual thunk to JoustNetworkMgr::~JoustNetworkMgr() */

void __thiscall JoustNetworkMgr::~JoustNetworkMgr(JoustNetworkMgr *this)

{
  ~JoustNetworkMgr(this + -8);
  return;
}


/* JoustNetworkMgr::~JoustNetworkMgr() */

void __thiscall JoustNetworkMgr::~JoustNetworkMgr(JoustNetworkMgr *this)

{
  ~JoustNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to JoustNetworkMgr::~JoustNetworkMgr() */

void __thiscall JoustNetworkMgr::~JoustNetworkMgr(JoustNetworkMgr *this)

{
  ~JoustNetworkMgr(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::applySuccessfulDashboardResponse(NetworkDashboardInfo const&) */

void __thiscall
JoustNetworkMgr::applySuccessfulDashboardResponse
          (JoustNetworkMgr *this,NetworkDashboardInfo *param_1)

{
  bool bVar1;
  long lVar2;
  JoustAPIResponseDashboard aJStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  long local_90;
  undefined8 local_88;
  vector<JoustPlayerData,std::allocator<JoustPlayerData>> avStack_80 [24];
  NetworkDashboardInfo local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> avStack_58 [24];
  vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
  avStack_40 [24];
  vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> avStack_28 [24];
  NetworkDashboardInfo local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustAPIResponseDashboard::JoustAPIResponseDashboard(aJStack_c8);
  local_5c = *(undefined4 *)(param_1 + 0x54);
  local_64 = *(int *)(param_1 + 0x4c) + -1;
  local_68 = param_1[0x48];
  local_60 = *(int *)(param_1 + 0x50) + -1;
  local_c0 = 2;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::clear(avStack_58);
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::operator=
            (avStack_58,(vector *)(param_1 + 0x58));
  local_b0 = *(undefined4 *)(param_1 + 8);
  local_ac = *(undefined4 *)(param_1 + 0xc);
  local_98 = *(int *)(param_1 + 0x18) + -1;
  lVar2 = DSingleton<UserInfo>::getInstance();
  local_a4 = FUN_0387d4a4(*(undefined4 *)(lVar2 + 0x24));
  local_a0 = *(int *)(param_1 + 0x10);
  local_9c = *(undefined4 *)(param_1 + 0x14);
  local_88 = *(undefined8 *)(param_1 + 0x28);
  local_90 = (long)local_a0;
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::operator=
            (avStack_80,(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
  ::operator=(avStack_40,(vector *)(param_1 + 0x70));
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::operator=
            (avStack_28,(vector *)(param_1 + 0x88));
  local_10 = param_1[0xa0];
  JoustAPIResponseDashboard::operator=((JoustAPIResponseDashboard *)(this + 0x10),aJStack_c8);
  JoustUtils::ApplyAPIResponseDashboard(aJStack_c8);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe8));
  if (bVar1) {
    std::function<void(JoustAPIResponse*)>::operator()
              ((function<void(JoustAPIResponse*)> *)(this + 0xe8),(JoustAPIResponse *)aJStack_c8);
  }
  JoustAPIResponseDashboard::~JoustAPIResponseDashboard(aJStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::applySuccessfulMatchCompleteResponse(NetworkCompletePostMatch const&) */

void __thiscall
JoustNetworkMgr::applySuccessfulMatchCompleteResponse
          (JoustNetworkMgr *this,NetworkCompletePostMatch *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  LevelOfTheDay_RewardItemType aLStack_b8 [16];
  undefined4 local_a8;
  undefined4 local_90;
  undefined4 local_80;
  JoustAPIResponseMatchComplete aJStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustAPIResponseMatchComplete::JoustAPIResponseMatchComplete(aJStack_78);
  local_6c = *(undefined4 *)(param_1 + 0x30);
  local_70 = 4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_0387d764(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar5 <= uVar6) break;
    LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_b8);
    piVar2 = (int *)FUN_0387d78c(*(undefined8 *)(param_1 + 0x18),uVar6);
    uVar3 = JoustUtils::GetAwardInfoByActId(*piVar2);
    local_a8 = (undefined4)uVar3;
    lVar4 = FUN_0387d78c(*(undefined8 *)(param_1 + 0x18),uVar6);
    local_90 = *(undefined4 *)(lVar4 + 4);
    local_80 = (undefined4)((ulong)uVar3 >> 0x20);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
              avStack_d0,aLStack_b8);
    LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_b8);
    uVar6 = uVar6 + 1;
  }
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::operator=
            (avStack_68,(vector *)avStack_d0);
  JoustUtils::ApplyAPIMatchCompleteResponse(aJStack_78);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe8));
  if (bVar1) {
    std::function<void(JoustAPIResponse*)>::operator()
              ((function<void(JoustAPIResponse*)> *)(this + 0xe8),(JoustAPIResponse *)aJStack_78);
  }
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             avStack_d0);
  JoustAPIResponseMatchComplete::~JoustAPIResponseMatchComplete(aJStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::SyncDashboardInfo() */

void __thiscall JoustNetworkMgr::SyncDashboardInfo(JoustNetworkMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  ZMatchShopMgr *this_01;
  PresentOpeningScreen *this_02;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  wstring awStack_180 [8];
  wstring awStack_178 [24];
  Delegate0 aDStack_160 [48];
  ActiveItem aAStack_130 [24];
  char local_118;
  NetworkDashboardInfo aNStack_b0 [28];
  int local_94;
  char local_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_118 == '\0') {
    iVar5 = 4;
  }
  else {
    NetworkDashboardInfo::NetworkDashboardInfo(aNStack_b0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_130,(RtObject *)aNStack_b0);
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      iVar5 = 4;
      FUN_05478178(awStack_180,&DAT_056f11a8,auStack_190);
      FUN_05478178(awStack_178,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_188);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_180,awStack_178);
      FUN_05476c50(awStack_178);
      nop();
      FUN_05476c50(awStack_180);
      nop();
      FUN_05478178(awStack_180,L"[BUTTON_OK]",auStack_188);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_160,awStack_178);
      PVZ2UIDialog::AddButton(pPVar3,awStack_180,aDStack_160,1);
      FUN_05476c50(awStack_180);
      nop();
    }
    else {
      iVar5 = 2;
      applySuccessfulDashboardResponse(this,aNStack_b0);
      this_01 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      iVar2 = ZMatchShopMgr::getMatchTicket(this_01);
      this_02 = (PresentOpeningScreen *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      PresentOpeningScreen::SetMaxVisiblePresents(this_02,local_94);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::ZmatchTicketAdd,local_94 - iVar2);
      uVar4 = ProfileUtils::Profile();
      PlayerInfo::SetCheatingCheckFlag(uVar4,4,local_f != '\0');
    }
    NetworkDashboardInfo::~NetworkDashboardInfo(aNStack_b0);
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::JoustNetworkResponseReceived,2,iVar5);
  ActiveItem::~ActiveItem(aAStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
JoustNetworkMgr::onNotifyRefreshActivityList(JoustNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x128] != (JoustNetworkMgr)0x0)) {
    local_1c = 0x29d0;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      NetworkHelper::MakeServerPlantBanList(0x29d0,this + 0x130);
      SyncDashboardInfo(this);
      this[0x128] = (JoustNetworkMgr)0x0;
      LocalProfileSaveData::UpdateBattleZTipsTime();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::Send_GetDashboard() */

void __thiscall JoustNetworkMgr::Send_GetDashboard(JoustNetworkMgr *this)

{
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  std::string::string(asStack_88,"dashboard");
  initRequestData(this,aSStack_80,asStack_88,false);
  std::string::~string(asStack_88);
  nop();
  Sexy::StructuredData::BeginObject(aSStack_80,"params");
  getPCPID();
  Sexy::StructuredData::AddString(aSStack_80,"playerId",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  sendRequest(this,aSStack_80,2);
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::Send_PostAvatar(std::wstring const&, int, std::function<void
   (JoustAPIResponse*)>, std::function<void ()>) */

void __thiscall
JoustNetworkMgr::Send_PostAvatar
          (JoustNetworkMgr *this,undefined8 param_2_00,int param_2,function *param_4,
          function *param_5)

{
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(JoustAPIResponse*)>::operator=
            ((function<void(JoustAPIResponse*)> *)(this + 0xe8),param_4);
  std::function<void()>::operator=((function<void()> *)(this + 0x108),param_5);
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  std::string::string(asStack_88,"avatar");
  initRequestData(this,aSStack_80,asStack_88,true);
  std::string::~string(asStack_88);
  nop();
  Sexy::StructuredData::BeginObject(aSStack_80,"postData");
  getPCPID();
  Sexy::StructuredData::AddString(aSStack_80,"playerId",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::AddInteger(aSStack_80,"icon",(long)param_2);
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  sendRequest(this,aSStack_80,1);
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::Send_PostCreateOrUpdateMatch(std::string const&, std::function<void
   (JoustAPIResponse*)>, std::function<void ()>) */

void __thiscall
JoustNetworkMgr::Send_PostCreateOrUpdateMatch
          (JoustNetworkMgr *this,string *param_1,function *param_3,function *param_4)

{
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(JoustAPIResponse*)>::operator=
            ((function<void(JoustAPIResponse*)> *)(this + 0xe8),param_3);
  std::function<void()>::operator=((function<void()> *)(this + 0x108),param_4);
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  std::string::string(asStack_88,"match");
  initRequestData(this,aSStack_80,asStack_88,true);
  std::string::~string(asStack_88);
  nop();
  Sexy::StructuredData::BeginObject(aSStack_80,"postData");
  getPCPID();
  Sexy::StructuredData::AddString(aSStack_80,"playerId",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::AddString(aSStack_80,"matchId",param_1);
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  sendRequest(this,aSStack_80,3);
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::Send_PostCompleteMatch(JoustAPIPostCompleteMatch&, std::function<void
   (JoustAPIResponse*)>, std::function<void ()>) */

void __thiscall
JoustNetworkMgr::Send_PostCompleteMatch
          (JoustNetworkMgr *this,long param_1,function *param_3,function *param_4)

{
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(JoustAPIResponse*)>::operator=
            ((function<void(JoustAPIResponse*)> *)(this + 0xe8),param_3);
  std::function<void()>::operator=((function<void()> *)(this + 0x108),param_4);
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  std::string::string(asStack_88,"completeMatch");
  initRequestData(this,aSStack_80,asStack_88,true);
  std::string::~string(asStack_88);
  nop();
  Sexy::StructuredData::BeginObject(aSStack_80,"postData");
  Sexy::StructuredData::AddString(aSStack_80,"matchId",(string *)(param_1 + 8));
  Sexy::StructuredData::AddString(aSStack_80,"opponentId",(string *)(param_1 + 0x10));
  Sexy::StructuredData::AddNumber(aSStack_80,"winRatio",(double)*(int *)(param_1 + 0x18));
  Sexy::StructuredData::BeginObject(aSStack_80,"r");
  getPCPID();
  Sexy::StructuredData::AddString(aSStack_80,"playerId",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::AddString(aSStack_80,"levelSeed",(string *)(param_1 + 0x20));
  Sexy::StructuredData::AddInteger(aSStack_80,"league",(long)*(int *)(param_1 + 0x28));
  Sexy::StructuredData::AddInteger(aSStack_80,"score",(long)*(int *)(param_1 + 0x2c));
  Sexy::Buffer::ToWebString();
  Sexy::StructuredData::AddString(aSStack_80,"replay",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  sendRequest(this,aSStack_80,4);
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::Send_PostRegisterForTournament(std::function<void (JoustAPIResponse*)>,
   std::function<void ()>) */

void __thiscall
JoustNetworkMgr::Send_PostRegisterForTournament
          (JoustNetworkMgr *this,function *param_2,function *param_3)

{
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(JoustAPIResponse*)>::operator=
            ((function<void(JoustAPIResponse*)> *)(this + 0xe8),param_2);
  std::function<void()>::operator=((function<void()> *)(this + 0x108),param_3);
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  std::string::string(asStack_88,"registerForTournament");
  initRequestData(this,aSStack_80,asStack_88,true);
  std::string::~string(asStack_88);
  nop();
  Sexy::StructuredData::BeginObject(aSStack_80,"postData");
  getPCPID();
  Sexy::StructuredData::AddString(aSStack_80,"playerId",asStack_88);
  std::string::~string(asStack_88);
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  sendRequest(this,aSStack_80,5);
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::applySuccessfulMatchResponse(NetworkPostMatch const&) */

void __thiscall
JoustNetworkMgr::applySuccessfulMatchResponse(JoustNetworkMgr *this,NetworkPostMatch *param_1)

{
  bool bVar1;
  string *psVar2;
  string asStack_88 [8];
  string asStack_80 [8];
  JoustAPIResponseMatch aJStack_78 [8];
  undefined4 local_70;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  AuthMgr::SetToken(psVar2);
  JoustAPIResponseMatch::JoustAPIResponseMatch(aJStack_78);
  local_70 = 3;
  thunk_FUN_05477b9c(auStack_48,param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  local_3c = *(undefined4 *)(param_1 + 0x24);
  FUN_05475d88(asStack_88,param_1 + 0x28);
  base64_decode_url_safe(asStack_88);
  Sexy::Buffer::FromWebString(aBStack_38,asStack_80);
  JoustUtils::ApplyAPIMatchResponse(aJStack_78);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe8));
  if (bVar1) {
    std::function<void(JoustAPIResponse*)>::operator()
              ((function<void(JoustAPIResponse*)> *)(this + 0xe8),(JoustAPIResponse *)aJStack_78);
  }
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  JoustAPIResponseMatch::~JoustAPIResponseMatch(aJStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustNetworkMgr::RequestPostCompleteMatch(JoustAPIPostCompleteMatch&) */

void __thiscall
JoustNetworkMgr::RequestPostCompleteMatch(JoustNetworkMgr *this,JoustAPIPostCompleteMatch *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  string *psVar4;
  char *pcVar5;
  uchar *puVar6;
  undefined8 uVar7;
  DNetwork *this_00;
  string *psVar8;
  string asStack_d50 [8];
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1496];
  string asStack_710 [1800];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar8 = asStack_d48;
  std::string::string(asStack_d40,"s");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(param_1 + 0x18));
  pcVar5 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar4,pcVar5,(size_t)psVar8);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar8 = asStack_d48;
  std::string::string(asStack_d40,"cp");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(param_1 + 0x60));
  pcVar5 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar4,pcVar5,(size_t)psVar8);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar8 = asStack_d48;
  std::string::string(asStack_d40,"lfs");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(param_1 + 0x2c));
  pcVar5 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar4,pcVar5,(size_t)psVar8);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  Sexy::Buffer::ToWebString();
  puVar6 = (uchar *)FUN_0547429c(asStack_d50);
  uVar3 = FUN_05474178(asStack_d50);
  base64_url_safe(puVar6,uVar3);
  std::string::string((string *)aDStack_ce8,"r");
  uVar7 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)aDStack_ce8);
  thunk_FUN_05475e00(uVar7,asStack_d48);
  std::string::~string((string *)aDStack_ce8);
  nop();
  uVar7 = ProfileUtils::Profile();
  cVar1 = PlayerInfo::IsCheatingCheckFlag(uVar7,4);
  if (cVar1 != '\0') {
    std::string::string(asStack_d40,"pr");
    uVar7 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    bVar2 = (bool)ProfileUtils::Profile();
    PlayerInfo::CreateCheatingCheckJson(bVar2);
    FUN_05474278(uVar7,aDStack_ce8);
    std::string::~string((string *)aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
  }
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_0387e2b4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_710,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,5);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::string::~string(asStack_d48);
  std::string::~string(asStack_d50);
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


/* JoustNetworkMgr::GetServerPlantBanList() const */

JoustNetworkMgr * __thiscall JoustNetworkMgr::GetServerPlantBanList(JoustNetworkMgr *this)

{
  return this + 0x130;
}

