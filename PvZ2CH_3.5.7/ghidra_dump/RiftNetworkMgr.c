// Class: RiftNetworkMgr


/* RiftNetworkMgr::GetLeaderboardInfo() */

RiftNetworkMgr * __thiscall RiftNetworkMgr::GetLeaderboardInfo(RiftNetworkMgr *this)

{
  return this + 0x228;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::getEndPlayList(RiftPostEndPlay) */

void RiftNetworkMgr::getEndPlayList(string *param_1,undefined8 param_2,uint *param_3)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  std::string::string(asStack_18,"");
  nop();
  FUN_05475ad8(param_1,&DAT_05593310);
  Sexy::StrFormat("\"t\":\"%d\",\"l\":\"%d\",\"g\":\"%d\",\"s\":\"%d\",\"r\":\"%d\",\"b\":\"%f\"",
                  asStack_10,(double)(float)param_3[6],(ulong)*param_3,(ulong)(param_3[1] + 1),
                  (ulong)param_3[2],(ulong)param_3[3],(ulong)param_3[4]);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  thunk_FUN_054757c0(param_1,asStack_18);
  FUN_05475ad8(param_1,&DAT_05593340);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* RiftNetworkMgr::AddFuel(int) */

void __thiscall RiftNetworkMgr::AddFuel(RiftNetworkMgr *this,int param_1)

{
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + param_1;
  return;
}


/* RiftNetworkMgr::HasPromoted() */

bool __thiscall RiftNetworkMgr::HasPromoted(RiftNetworkMgr *this)

{
  return 0 < *(int *)(this + 0x2fc) - *(int *)(this + 0x300);
}


/* RiftNetworkMgr::GetPromotedReward() */

undefined4 __thiscall RiftNetworkMgr::GetPromotedReward(RiftNetworkMgr *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(this + 0x2fc);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = (undefined4 *)FUN_036ebff4(*(undefined8 *)(this + 0x120),(long)iVar1);
  return *puVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::GetChallengeChooseDialogResourceName() */

void RiftNetworkMgr::GetChallengeChooseDialogResourceName(void)

{
  bool bVar1;
  long in_x0;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator!=((string *)(in_x0 + 0x178),"");
  if (bVar1) {
    Sexy::StringToUpper((Sexy *)(in_x0 + 0x178),asStack_10);
    std::operator+("IMAGE_UI_HUD_WORLDMAP_PENNY_ICON_",asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    std::string::string(in_x8,"IMAGE_UI_HUD_WORLDMAP_PENNY_ICON");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Removing unreachable block (ram,0x036edff4) */
/* WARNING: Removing unreachable block (ram,0x036ee110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::GetZombossResourceName(int, bool) */

void RiftNetworkMgr::GetZombossResourceName(int param_1,bool param_2)

{
  bool bVar1;
  string *extraout_x1;
  char in_w2;
  string *__n;
  string *in_x8;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(in_x8,"");
  nop();
  if (in_w2 == '\0') {
    if (param_2) {
      if (param_2) {
        std::string::append(in_x8,"IMAGE_UI_PENNY_PURSUITS_DIFFICULTY_SELECTION_MEDIUMMODE_BOSS",
                            (size_t)__n);
      }
    }
    else {
      std::string::append(in_x8,"IMAGE_UI_PENNY_PURSUITS_DIFFICULTY_SELECTION_EASYMODE_BOSS",
                          (size_t)__n);
    }
  }
  else if (param_2) {
    if (param_2) {
      std::string::append(in_x8,"IMAGE_UI_PENNY_PURSUITS_DIFFICULTY_SELECTION_MEDIUMMODESELECT_BOSS"
                          ,(size_t)__n);
    }
  }
  else {
    std::string::append(in_x8,"IMAGE_UI_PENNY_PURSUITS_DIFFICULTY_SELECTION_EASYMODESELECT_BOSS",
                        (size_t)__n);
  }
  bVar1 = std::operator!=((string *)((ulong)(uint)param_1 + 0x178),"");
  if (bVar1) {
    std::operator+(in_x8,"_");
    Sexy::StringToUpper((Sexy *)((ulong)(uint)param_1 + 0x178),extraout_x1);
    std::operator+(asStack_20,asStack_18);
    FUN_05474278();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftNetworkMgr::RiftNetworkMgr() */

void __thiscall RiftNetworkMgr::RiftNetworkMgr(RiftNetworkMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<RiftNetworkMgr>::LazySingleton((LazySingleton<RiftNetworkMgr> *)this);
  *(undefined ***)this = &PTR__RiftNetworkMgr_066866d0;
  NetworkMainEntryInfo::NetworkMainEntryInfo((NetworkMainEntryInfo *)(this + 0x10));
  NetworkEndOfPlay::NetworkEndOfPlay((NetworkEndOfPlay *)(this + 0x180));
  NetworkPlay::NetworkPlay((NetworkPlay *)(this + 0x208));
  NetworkLeaderboardInfo::NetworkLeaderboardInfo((NetworkLeaderboardInfo *)(this + 0x228));
  RiftLeaderboardData::RiftLeaderboardData((RiftLeaderboardData *)(this + 0x2a8));
  RiftAPIResponseLeagueChange::RiftAPIResponseLeagueChange
            ((RiftAPIResponseLeagueChange *)(this + 0x2f8));
  EndLevelData::EndLevelData((EndLevelData *)(this + 800));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x330));
  this[8] = (RiftNetworkMgr)0x0;
  *(undefined4 *)(this + 0x32c) = 0x3f800000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RiftNetworkMgr,void(RiftNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* RiftNetworkMgr::~RiftNetworkMgr() */

void __thiscall RiftNetworkMgr::~RiftNetworkMgr(RiftNetworkMgr *this)

{
  *(undefined ***)this = &PTR__RiftNetworkMgr_066866d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x330));
  RiftAPIResponseLeagueChange::~RiftAPIResponseLeagueChange
            ((RiftAPIResponseLeagueChange *)(this + 0x2f8));
  RiftLeaderboardData::~RiftLeaderboardData((RiftLeaderboardData *)(this + 0x2a8));
  NetworkLeaderboardInfo::~NetworkLeaderboardInfo((NetworkLeaderboardInfo *)(this + 0x228));
  NetworkPlay::~NetworkPlay((NetworkPlay *)(this + 0x208));
  NetworkEndOfPlay::~NetworkEndOfPlay((NetworkEndOfPlay *)(this + 0x180));
  NetworkMainEntryInfo::~NetworkMainEntryInfo((NetworkMainEntryInfo *)(this + 0x10));
  Sexy::LazySingleton<RiftNetworkMgr>::~LazySingleton((LazySingleton<RiftNetworkMgr> *)this);
  return;
}


/* RiftNetworkMgr::~RiftNetworkMgr() */

void __thiscall RiftNetworkMgr::~RiftNetworkMgr(RiftNetworkMgr *this)

{
  ~RiftNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::ApplyLeaderboardInfo(NetworkLeaderboardInfo&) */

void __thiscall
RiftNetworkMgr::ApplyLeaderboardInfo(RiftNetworkMgr *this,NetworkLeaderboardInfo *param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  vector<RiftPlayerData,std::allocator<RiftPlayerData>> *this_00;
  ProfileMgr *this_01;
  long lVar5;
  RiftPlayerData *pRVar6;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)
            PVPManager::GetPreGardenRankInfoList((PVPManager *)this);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar5 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar5 == 0) {
    FUN_05478178(auStack_20,L"-invalid-",&local_10);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  lVar5 = DSingleton<UserInfo>::getInstance();
  uVar4 = FUN_036ebd38(*(undefined4 *)(lVar5 + 0x24));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this_00 + 0x24) = uVar4;
  *(undefined4 *)(this_00 + 0x30) = uVar1;
  thunk_FUN_05477b9c(this_00 + 0x28,auStack_20);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(this_00 + 0x4c) = iVar2 + -1;
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x20));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x20));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3) {
    pRVar6 = (RiftPlayerData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::push_back(this_00,pRVar6);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::RequestLeaderboard() */

void __thiscall RiftNetworkMgr::RequestLeaderboard(RiftNetworkMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1912];
  string asStack_570 [1384];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_036ecf20(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_570,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* RiftNetworkMgr::SetLeagueChangeEvent(RiftAPIResponseLeagueChange&) */

void __thiscall
RiftNetworkMgr::SetLeagueChangeEvent(RiftNetworkMgr *this,RiftAPIResponseLeagueChange *param_1)

{
  RiftAPIResponseLeagueChange::operator=((RiftAPIResponseLeagueChange *)(this + 0x2f8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::RequestGetMainEntry() */

void __thiscall RiftNetworkMgr::RequestGetMainEntry(RiftNetworkMgr *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (RiftNetworkMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05751960,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[8] = (RiftNetworkMgr)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::RequestPostEndPlay(RiftPostEndPlay) */

void __thiscall RiftNetworkMgr::RequestPostEndPlay(RiftNetworkMgr *this,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  string *this_00;
  GachaConfig *this_01;
  undefined8 uVar4;
  DNetwork *this_02;
  char *__s;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined4 local_d58;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1896];
  string asStack_580 [1400];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"fr");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d70 = *param_2;
  uStack_d68 = param_2[1];
  local_d60 = param_2[2];
  local_d58 = *(undefined4 *)(param_2 + 3);
  getEndPlayList(asStack_ce8,this,&local_d70);
  FUN_05474278(uVar3,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_ce8,"g");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  if (*(char *)((long)param_2 + 0x14) == '\0') {
    __s = "0";
  }
  else {
    __s = "1";
  }
  std::string::append(this_00,__s,0x5594000);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"on");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  this_01 = (GachaConfig *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar4 = GachaConfig::GetGachaPlantRewardList(this_01);
  thunk_FUN_05475e00(uVar3,uVar4);
  std::string::~string(asStack_ce8);
  nop();
  uVar3 = ProfileUtils::Profile();
  cVar1 = PlayerInfo::IsCheatingCheckFlag(uVar3,2);
  if (cVar1 != '\0') {
    std::string::string(asStack_d40,"pr");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    bVar2 = (bool)ProfileUtils::Profile();
    PlayerInfo::CreateCheatingCheckJson(bVar2);
    FUN_05474278(uVar3,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
  }
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_036ecf7c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_580,(map *)amStack_d18,10.0,(function *)afStack_d38,true,true,
             asStack_d40,5);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* RiftNetworkMgr::RequestPlay(bool) */

void __thiscall RiftNetworkMgr::RequestPlay(RiftNetworkMgr *this,bool param_1)

{
  string *this_00;
  DNetwork *this_01;
  char *__s;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1904];
  string asStack_578 [1392];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  if (param_1) {
    __s = "2";
  }
  else {
    __s = "0";
  }
  std::string::append(this_00,__s,0x5594000);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_036ecfd8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_578,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* RiftNetworkMgr::initTestData() */

void __thiscall RiftNetworkMgr::initTestData(RiftNetworkMgr *this)

{
  int iVar1;
  PennyPerkMgr *this_00;
  int local_198 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_190 [24];
  NetworkMainEntryInfo aNStack_178 [8];
  undefined4 local_170;
  undefined4 local_16c;
  string asStack_150 [8];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  vector<RiftPerkData,std::allocator<RiftPerkData>> avStack_c0 [28];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 0;
  NetworkMainEntryInfo::NetworkMainEntryInfo(aNStack_178);
  local_16c = 0;
  local_170 = 0x32;
  std::string::append(asStack_150,"rift1b",0x32);
  local_148 = 9999999;
  local_140 = 0x3e9;
  local_13c = 0x1e;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_190);
  do {
    iVar1 = iVar1 + 1;
    Sexy::FlagsMod::FlagsMod((FlagsMod *)local_198);
    local_198[1] = 1;
    local_198[0] = iVar1;
    std::vector<RiftPerkData,std::allocator<RiftPerkData>>::push_back
              ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)avStack_190,
               (RiftPerkData *)local_198);
  } while (iVar1 != 6);
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::operator=
            (avStack_c0,(vector *)avStack_190);
  this_00 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::SyncPerkList(this_00,(vector *)avStack_c0);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::SyncTheme(iVar1);
  local_a0 = 1;
  local_a4 = 50000;
  local_9c = 2;
  NetworkMainEntryInfo::operator=((NetworkMainEntryInfo *)(this + 0x10),aNStack_178);
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::RiftNetworkResponseReceived,1,2);
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::~vector
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)avStack_190);
  NetworkMainEntryInfo::~NetworkMainEntryInfo(aNStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::initLeaderboardTestData() */

void __thiscall RiftNetworkMgr::initLeaderboardTestData(RiftNetworkMgr *this)

{
  int iVar1;
  ProfileMgr *pPVar2;
  int iVar3;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1b0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_198 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_180 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_168 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_150 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_138 [24];
  undefined4 local_120;
  undefined4 local_11c;
  vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> avStack_118 [24];
  RiftPlayerData aRStack_100 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [8];
  undefined4 local_e8;
  RiftPlayerData aRStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8 [2];
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  NetworkLeaderboardInfo aNStack_88 [20];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  vector<RiftPlayerData,std::allocator<RiftPlayerData>> avStack_68 [24];
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  avStack_50 [24];
  vector<int,std::allocator<int>> avStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NetworkLeaderboardInfo::NetworkLeaderboardInfo(aNStack_88);
  local_70 = 1;
  local_74 = 50000;
  local_6c = 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1b0);
  RiftPlayerData::RiftPlayerData(aRStack_100);
  local_f8 = 0;
  local_f4 = 0x61a9;
  local_e8 = 120000;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar2);
  PlayerInfo::AM_GetName();
  FUN_054766c8(auStack_f0,(RiftPlayerData *)&local_b0);
  FUN_05476c50((RiftPlayerData *)&local_b0);
  RiftPlayerData::RiftPlayerData(aRStack_d8);
  local_c0 = 50000;
  local_cc = 0x61a9;
  local_d0 = 1;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar2);
  PlayerInfo::AM_GetName();
  FUN_054766c8(auStack_c8,(RiftPlayerData *)&local_b0);
  FUN_05476c50((RiftPlayerData *)&local_b0);
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::push_back
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)avStack_1b0,aRStack_100);
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::push_back
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)avStack_1b0,aRStack_d8);
  iVar3 = 2;
  do {
    RiftPlayerData::RiftPlayerData((RiftPlayerData *)&local_b0);
    local_a8[1] = 0x61a9;
    iVar1 = iVar3 + 1;
    local_98 = 50000;
    local_a8[0] = iVar3;
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar2);
    PlayerInfo::AM_GetName();
    FUN_054766c8(auStack_a0,(JoustLeaderboardRewardInfo *)&local_120);
    FUN_05476c50((JoustLeaderboardRewardInfo *)&local_120);
    std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::push_back
              ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)avStack_1b0,
               (RiftPlayerData *)&local_b0);
    RiftPlayerData::~RiftPlayerData((RiftPlayerData *)&local_b0);
    iVar3 = iVar1;
  } while (iVar1 != 0x11);
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::operator=
            (avStack_68,(vector *)avStack_1b0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_198);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_180);
  JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo((JoustLeaderboardRewardInfo *)&local_120);
  local_11c = 5;
  local_120 = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_168);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_1d0);
  local_1cc = 2;
  local_1d0 = 0x59fb;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_1c8);
  local_1c8 = 0x55f8;
  local_1c4 = 5;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::push_back
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)avStack_168,
             (RiftBonusInfo *)&local_1d0);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::push_back
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)avStack_168,
             (RiftBonusInfo *)&local_1c8);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            (avStack_118,(vector *)avStack_168);
  std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>::push_back
            ((vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>> *)
             avStack_180,(RiftLeaderboardRewardInfo *)&local_120);
  JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo((JoustLeaderboardRewardInfo *)&local_b0);
  local_b0 = 6;
  local_ac = 99;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_150);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_1c0);
  local_1bc = 2;
  local_1c0 = 0x59e3;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_1b8);
  local_1b8 = 0x5609;
  local_1b4 = 5;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::push_back
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)avStack_168,
             (RiftBonusInfo *)&local_1c0);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::push_back
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)avStack_168,
             (RiftBonusInfo *)&local_1b8);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)local_a8,(vector *)avStack_150);
  std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>::push_back
            ((vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>> *)
             avStack_180,(RiftLeaderboardRewardInfo *)&local_b0);
  std::
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  ::push_back((vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
               *)avStack_198,(vector *)avStack_180);
  std::
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  ::operator=(avStack_50,(vector *)avStack_198);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_138);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  local_1d4 = 0x61a9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_138,&local_1d4);
  std::vector<int,std::allocator<int>>::operator=(avStack_38,(vector *)avStack_138);
  NetworkLeaderboardInfo::operator=((NetworkLeaderboardInfo *)(this + 0x228),aNStack_88);
  ApplyLeaderboardInfo(this,(NetworkLeaderboardInfo *)(this + 0x228));
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::RiftNetworkResponseReceived,2,2);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_138);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)avStack_150);
  RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)&local_b0);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)avStack_168);
  RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)&local_120);
  std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>::~vector
            ((vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>> *)
             avStack_180);
  std::
  vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
  ::~vector((vector<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>,std::allocator<std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>>>
             *)avStack_198);
  RiftPlayerData::~RiftPlayerData(aRStack_d8);
  RiftPlayerData::~RiftPlayerData(aRStack_100);
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::~vector
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)avStack_1b0);
  NetworkLeaderboardInfo::~NetworkLeaderboardInfo(aNStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::syncMainEntryInfo() */

void __thiscall RiftNetworkMgr::syncMainEntryInfo(RiftNetworkMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PennyPerkMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *pPVar3;
  int iVar4;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  wstring awStack_248 [8];
  wstring awStack_240 [24];
  Delegate0 aDStack_228 [48];
  ActiveItem aAStack_1f8 [24];
  char local_1e0;
  NetworkMainEntryInfo aNStack_178 [184];
  vector avStack_c0 [40];
  RiftAPIResponseLeagueChange aRStack_98 [128];
  int local_18;
  char local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 4;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_1e0 != '\0') {
    NetworkMainEntryInfo::NetworkMainEntryInfo(aNStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aNStack_178);
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_248,&DAT_056f11a8,auStack_258);
      FUN_05478178(awStack_240,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_250);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_248,awStack_240);
      FUN_05476c50(awStack_240);
      nop();
      FUN_05476c50(awStack_248);
      nop();
      FUN_05478178(awStack_248,L"[BUTTON_OK]",auStack_250);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_228,awStack_240);
      PVZ2UIDialog::AddButton(pPVar3,awStack_248,aDStack_228,1);
      FUN_05476c50(awStack_248);
      nop();
    }
    else {
      this_01 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
      PennyPerkMgr::SyncPerkList(this_01,avStack_c0);
      iVar2 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
      RiftThemeMgr::SyncTheme(iVar2);
      SetLeagueChangeEvent(this,aRStack_98);
      NetworkMainEntryInfo::operator=((NetworkMainEntryInfo *)(this + 0x10),aNStack_178);
      this_02 = (PlayerInfo *)ProfileUtils::Profile();
      if (this_02 != (PlayerInfo *)0x0) {
        PlayerInfo::SetRiftZombossAttemptCount(this_02,local_18);
      }
      iVar4 = 2;
      PlayerInfo::SetCheatingCheckFlag(this_02,2,local_14 != '\0');
    }
    NetworkMainEntryInfo::~NetworkMainEntryInfo(aNStack_178);
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::RiftNetworkResponseReceived,1,iVar4);
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
RiftNetworkMgr::onNotifyRefreshActivityList(RiftNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[8] != (RiftNetworkMgr)0x0)) {
    local_1c = 0x2a30;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      NetworkHelper::MakeServerPlantBanList(0x2a30,this + 0x330);
      syncMainEntryInfo(this);
      this[8] = (RiftNetworkMgr)0x0;
      LocalProfileSaveData::UpdatePennyTipsTime();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftNetworkMgr::GetServerPlantBanList() const */

RiftNetworkMgr * __thiscall RiftNetworkMgr::GetServerPlantBanList(RiftNetworkMgr *this)

{
  return this + 0x330;
}

