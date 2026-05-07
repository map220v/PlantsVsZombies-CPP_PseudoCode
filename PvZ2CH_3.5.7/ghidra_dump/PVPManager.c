// Class: PVPManager


/* PVPManager::GetPVPMapMainData() */

PVPManager * __thiscall PVPManager::GetPVPMapMainData(PVPManager *this)

{
  return this + 0x1d0;
}


/* PVPManager::SetCurrentDefenderInfo(DefenderInfo) */

void __thiscall PVPManager::SetCurrentDefenderInfo(PVPManager *this,DefenderInfo *param_2)

{
  DefenderInfo::operator=((DefenderInfo *)(this + 0x150),param_2);
  return;
}


/* PVPManager::SetChangedCurrency(PVPCurrencyData const&) */

void __thiscall PVPManager::SetChangedCurrency(PVPManager *this,PVPCurrencyData *param_1)

{
  *(undefined8 *)(this + 0x144) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(param_1 + 8);
  return;
}


/* PVPManager::SetRankMonthReward(PvPRankMonthReward const&) */

void __thiscall PVPManager::SetRankMonthReward(PVPManager *this,PvPRankMonthReward *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x2e0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x2e8) = uVar1;
  *(undefined4 *)(this + 0x2f0) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* PVPManager::ClearZombieDatas() */

void __thiscall PVPManager::ClearZombieDatas(PVPManager *this)

{
  std::
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  ::clear((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
           *)(this + 0x30));
  return;
}


/* PVPManager::GetPVPMapDataList() */

PVPManager * __thiscall PVPManager::GetPVPMapDataList(PVPManager *this)

{
  return this + 0x188;
}


/* PVPManager::GetPreGardenRankInfoList() */

PVPManager * __thiscall PVPManager::GetPreGardenRankInfoList(PVPManager *this)

{
  return this + 0x2a8;
}


/* PVPManager::GetLogArenaID() */

PVPManager * __thiscall PVPManager::GetLogArenaID(PVPManager *this)

{
  return this + 0x210;
}


/* PVPManager::GetSkillDatas() const */

PVPManager * __thiscall PVPManager::GetSkillDatas(PVPManager *this)

{
  return this + 0x60;
}


/* PVPManager::GetCurrentEditLevelName() */

undefined8 PVPManager::GetCurrentEditLevelName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PVPManager::GetCurrentLevelName() */

undefined8 PVPManager::GetCurrentLevelName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PVPManager::GetEvilDavidMaxChallengingTimes() const */

undefined4 __thiscall PVPManager::GetEvilDavidMaxChallengingTimes(PVPManager *this)

{
  return *(undefined4 *)(this + 500);
}


/* PVPManager::GetOldNameStatus() */

NameEffectStruct * PVPManager::GetOldNameStatus(void)

{
  long in_x0;
  NameEffectStruct *in_x8;
  
  NameEffectStruct::NameEffectStruct(in_x8,(NameEffectStruct *)(in_x0 + 0x330));
  return in_x8;
}


/* PVPManager::SetOldNameStatus(NameEffectStruct) */

void __thiscall PVPManager::SetOldNameStatus(PVPManager *this,NameEffectStruct *param_2)

{
  NameEffectStruct::operator=((NameEffectStruct *)(this + 0x330),param_2);
  return;
}


/* PVPManager::GetCurrentDefenderInfo() */

DefenderInfo * PVPManager::GetCurrentDefenderInfo(void)

{
  long in_x0;
  DefenderInfo *in_x8;
  
  DefenderInfo::DefenderInfo(in_x8,(DefenderInfo *)(in_x0 + 0x150));
  return in_x8;
}


/* PVPManager::GetChangedCurrency() const */

PVPManager * __thiscall PVPManager::GetChangedCurrency(PVPManager *this)

{
  return this + 0x144;
}


/* PVPManager::OnCloseDialog() */

void PVPManager::OnCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PVPManager::OnNetworkErrorCloseDialog() */

void __thiscall PVPManager::OnNetworkErrorCloseDialog(PVPManager *this)

{
  FUN_04ac945c(this + 0x220);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PVPManager::Login() */

void __thiscall PVPManager::Login(PVPManager *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *pIVar1;
  
  pIVar1 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPTrainingInfos(pIVar1);
  pIVar1 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPEntry(pIVar1);
  this_00 = gNetworkMgr;
  if (this[0x20] == (PVPManager)0x0) {
    return;
  }
  this[0x20] = (PVPManager)0x0;
  pIVar1 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestPVPLabEnter(pIVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetProductVersion() */

void __thiscall PVPManager::GetProductVersion(PVPManager *this)

{
  long lVar1;
  char cVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_0547419c(gLawnApp + 0x3d0);
  if (cVar2 == '\0') {
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"9.9.9");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::SetPVPCoin(int) */

void __thiscall PVPManager::SetPVPCoin(PVPManager *this,int param_1)

{
  if (*(int *)(this + 8) != param_1) {
    *(int *)(this + 8) = param_1;
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* PVPManager::SetPVPMedal(int) */

void __thiscall PVPManager::SetPVPMedal(PVPManager *this,int param_1)

{
  if (*(int *)(this + 0xc) != param_1) {
    *(int *)(this + 0xc) = param_1;
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* PVPManager::SetPVPCup(int) */

void __thiscall PVPManager::SetPVPCup(PVPManager *this,int param_1)

{
  if (*(int *)(this + 0x10) != param_1) {
    *(int *)(this + 0x10) = param_1;
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* PVPManager::SetGemToday(int) */

void __thiscall PVPManager::SetGemToday(PVPManager *this,int param_1)

{
  *(int *)(this + 0x14) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::RequestSavePlayerProfile(int, int) */

void __thiscall PVPManager::RequestSavePlayerProfile(PVPManager *this,int param_1,int param_2)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPacketJsonConverter::SerializeObj();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestPVPPlantInfos(this_01,asStack_10,param_1,param_2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::RequestChangePlayer(int) */

void __thiscall PVPManager::RequestChangePlayer(PVPManager *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestChangePlayer(this_01,param_1);
  return;
}


/* PVPManager::RequestGetPlayerProfile(int, int, unsigned long) */

void PVPManager::RequestGetPlayerProfile(int param_1,int param_2,ulong param_3)

{
  int iVar1;
  NetworkMgr *this;
  ulong uVar2;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  iVar1 = NetworkMgr::GetNewNetWorkProcess(this);
  uVar2 = FUN_04ac8c90(*(undefined4 *)((ulong)(uint)param_1 + 0x178));
  FUN_04ac8c9c(*(undefined8 *)((ulong)(uint)param_1 + 0x180));
  INetworkMsgProcess::RequestGetPVPPlantInfos(iVar1,param_2,(int)param_3,uVar2 & 0xffffffff);
  return;
}


/* PVPManager::RequestGetEditPlant(int, int, int) */

void __thiscall
PVPManager::RequestGetEditPlant(PVPManager *this,int param_1,int param_2,int param_3)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestEditPlant(this_01,param_1,param_2,param_3);
  return;
}


/* PVPManager::SendPVP_Ping(int) */

void __thiscall PVPManager::SendPVP_Ping(PVPManager *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  iVar1 = FUN_04ac8c88(*(undefined4 *)(this + 0x158));
  iVar2 = FUN_04ac8c8c(*(undefined4 *)(this + 0x168));
  iVar3 = FUN_04ac8c84(*(undefined4 *)(this + 0x128));
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::SendPVP_Ping(this_01,iVar1,iVar2,iVar3,param_1);
  return;
}


/* PVPManager::RequestBuyPvpCoin(int) */

void __thiscall PVPManager::RequestBuyPvpCoin(PVPManager *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestBuyPvpCoin(this_01,param_1);
  return;
}


/* PVPManager::IsInPVPMap() */

bool __thiscall PVPManager::IsInPVPMap(PVPManager *this)

{
  return *(int *)(this + 0x1c) != 0;
}


/* PVPManager::GetHomeLevel() */

void __thiscall PVPManager::GetHomeLevel(PVPManager *this)

{
  PVPLabData::GetLabItemLevel((PVPLabData *)(this + 0x90),1);
  return;
}


/* PVPManager::RequestRankList(int) */

void __thiscall PVPManager::RequestRankList(PVPManager *this,int param_1)

{
  int iVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  if (param_1 == 1) {
    iVar1 = FUN_04ac8ce0(*(undefined8 *)(this + 600),*(undefined8 *)(this + 0x260));
  }
  else {
    iVar1 = FUN_04ac8ce0(*(undefined8 *)(this + 0x230),*(undefined8 *)(this + 0x238));
  }
  if (99 < iVar1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestPVPRank(this_01,param_1,iVar1,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetPVPProfileId() */

void PVPManager::GetPVPProfileId(void)

{
  int iVar1;
  NetworkMgr *this;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_14 = 0;
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  Sexy::StringToInt(asStack_10,&local_14);
  iVar1 = local_14;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* PVPManager::GetRankList(int) */

PVPManager * __thiscall PVPManager::GetRankList(PVPManager *this,int param_1)

{
  PVPManager *pPVar1;
  
  pPVar1 = this + 0x230;
  if (param_1 == 1) {
    pPVar1 = this + 600;
  }
  return pPVar1;
}


/* PVPManager::GetRankMaxCount(int) */

undefined4 __thiscall PVPManager::GetRankMaxCount(PVPManager *this,int param_1)

{
  if (param_1 != 1) {
    return *(undefined4 *)(this + 0x248);
  }
  return *(undefined4 *)(this + 0x270);
}


/* PVPManager::RequestOtherUserZbList(long) */

void __thiscall PVPManager::RequestOtherUserZbList(PVPManager *this,long param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestOthersZbList(this_01,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::ResetPlayerData() */

void __thiscall PVPManager::ResetPlayerData(PVPManager *this)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_18 = 0;
  uStack_14 = 0;
  local_8 = ___stack_chk_guard;
  local_10 = 0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
  uVar1 = CONCAT44(uStack_14,local_18);
  local_18 = 0;
  uStack_14 = 0;
  *(undefined8 *)(this + 300) = uVar1;
  *(undefined4 *)(this + 0x134) = local_10;
  local_10 = 0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
  *(ulong *)(this + 0x138) = CONCAT44(uStack_14,local_18);
  *(undefined4 *)(this + 0x140) = local_10;
  local_18 = 0;
  uStack_14 = 0;
  local_10 = 0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
  bVar2 = local_8 == ___stack_chk_guard;
  *(ulong *)(this + 0x144) = CONCAT44(uStack_14,local_18);
  *(undefined4 *)(this + 0x14c) = local_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::SetEvilDavidMaxChallengingTimes(int) */

void __thiscall PVPManager::SetEvilDavidMaxChallengingTimes(PVPManager *this,int param_1)

{
  *(int *)(this + 500) = param_1;
  return;
}


/* PVPManager::TimeToGem(int) */

int __thiscall PVPManager::TimeToGem(PVPManager *this,int param_1)

{
  double dVar1;
  
  dVar1 = pow((double)((float)param_1 * 3.4722223e-05),0.699999988079071);
  return (int)(dVar1 * 50.0 + 1.0);
}


/* PVPManager::GetPVPCoinMax() */

undefined4 __thiscall PVPManager::GetPVPCoinMax(PVPManager *this)

{
  int iVar1;
  PVPLabData *pPVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  pPVar2 = (PVPLabData *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
  iVar1 = PVPLabData::GetLabItemLevel(pPVar2,1);
  lVar4 = *(long *)(this + 0x3f8);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
    uVar3 = FUN_04ac8cec(uVar5,*(undefined8 *)(lVar4 + 0x10));
    if ((ulong)(long)iVar1 <= uVar3) {
      lVar4 = FUN_04ac8d00(uVar5,(long)(iVar1 + -1));
      return *(undefined4 *)(lVar4 + 8);
    }
  }
  return 999999;
}


/* PVPManager::GetPVPMedalMax() */

undefined4 __thiscall PVPManager::GetPVPMedalMax(PVPManager *this)

{
  int iVar1;
  PVPLabData *pPVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  pPVar2 = (PVPLabData *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
  iVar1 = PVPLabData::GetLabItemLevel(pPVar2,1);
  lVar4 = *(long *)(this + 0x3f8);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
    uVar3 = FUN_04ac8cec(uVar5,*(undefined8 *)(lVar4 + 0x10));
    if ((ulong)(long)iVar1 <= uVar3) {
      lVar4 = FUN_04ac8d00(uVar5,(long)(iVar1 + -1));
      return *(undefined4 *)(lVar4 + 0xc);
    }
  }
  return 9999;
}


/* PVPManager::GetPVPSunMax() */

undefined4 __thiscall PVPManager::GetPVPSunMax(PVPManager *this)

{
  int iVar1;
  PVPLabData *pPVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  
  pPVar2 = (PVPLabData *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
  iVar1 = PVPLabData::GetLabItemLevel(pPVar2,2);
  lVar5 = *(long *)(this + 0x3f8);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if ((lVar5 != 0) &&
     (uVar3 = FUN_04ac8cec(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10)),
     (ulong)(long)iVar1 <= uVar3)) {
    puVar4 = (undefined4 *)FUN_04ac8d0c(*(undefined8 *)(lVar5 + 0x20),(long)(iVar1 + -1));
    return *puVar4;
  }
  return 99999;
}


/* PVPManager::IsInPlaybackMode() */

void PVPManager::IsInPlaybackMode(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  FUN_04ac8ca0(*(undefined4 *)(lVar1 + 0x40));
  return;
}


/* PVPManager::EndArenaBattle(bool) */

void __thiscall PVPManager::EndArenaBattle(PVPManager *this,bool param_1)

{
  char cVar1;
  int iVar2;
  PlaybackManager *this_00;
  LawnApp *this_01;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
    iVar2 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
    if (param_1) {
      Board::Quit(*(Board **)(gLawnApp + 0x9f0));
      cVar1 = FUN_04ac8c94(this[0x220]);
      this_01 = gLawnApp;
    }
    else {
      if (iVar2 - 1U < 2) {
        Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
      }
      cVar1 = FUN_04ac8c94(this[0x220]);
      this_01 = gLawnApp;
    }
    gLawnApp = this_01;
    if (cVar1 == '\0') {
      cVar1 = LawnApp::IsPauseMenuOpen(this_01);
    }
    else {
      FUN_04ac945c(this + 0x220);
      this_01 = gLawnApp;
      cVar1 = LawnApp::IsPauseMenuOpen(gLawnApp);
    }
    if (cVar1 != '\0') {
      LawnApp::KillNewOptionsDialog(this_01);
      this_01 = gLawnApp;
    }
    LawnApp::KillArenaEndingUI(this_01);
    LawnApp::KillPVZ2Dialog(gLawnApp);
    this_00 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    PlaybackManager::EndPlayback(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetLevelIconString(int) */

void __thiscall PVPManager::GetLevelIconString(PVPManager *this,int param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b80cd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b80cd8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b80dd8,"IMAGE_UI_GENERIC_");
    __cxa_guard_release(&DAT_06b80cd8);
    __cxa_atexit(std::string::~string,&DAT_06b80dd8,&DAT_06a88000);
    nop();
  }
  switch((int)this) {
  case 1:
    std::operator+((string *)&DAT_06b80dd8,"ICON_FRAME_GREEN");
    break;
  case 2:
    std::operator+((string *)&DAT_06b80dd8,"ICON_FRAME_BLUE");
    break;
  case 3:
    std::operator+((string *)&DAT_06b80dd8,"ICON_FRAME_PURPLE");
    break;
  case 4:
    std::operator+((string *)&DAT_06b80dd8,"ICON_FRAME_ORANGE");
    break;
  default:
    std::operator+((string *)&DAT_06b80dd8,"ICON_FRAME_WHITE");
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVPManager::IsInBattle() */

char PVPManager::IsInBattle(void)

{
  long lVar1;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x114) != '\0') {
      return *(char *)(lVar1 + 0x114);
    }
    return *(char *)(lVar1 + 0x115);
  }
  return '\0';
}


/* PVPManager::IsActivated() */

bool PVPManager::IsActivated(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  if ((pPVar4 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar4,0x28), cVar1 != '\0')) {
    return (bool)cVar1;
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  iVar2 = ProfileUtils::CompletedLevelCount(pPVar4);
  return 0x10 < iVar2;
}


/* PVPManager::SetAchievementTrain(int, int) */

void __thiscall PVPManager::SetAchievementTrain(PVPManager *this,int param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (0 < param_1) {
    lVar2 = PlayerInfo::GetDailyAchievementRecord(this_01,0x27e2);
    if (lVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x24);
    }
    PlayerInfo::AddDailyAchievementRecord(this_01,0x27e2,param_1 - iVar1);
  }
  if (0 < param_2) {
    lVar2 = PlayerInfo::GetDailyAchievementRecord(this_01,0x27e4);
    if (lVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x24);
    }
    PlayerInfo::AddDailyAchievementRecord(this_01,0x27e4,param_2 - iVar1);
    return;
  }
  return;
}


/* PVPManager::SetAchievementMoney(int, int, int, bool) */

void __thiscall
PVPManager::SetAchievementMoney(PVPManager *this,int param_1,int param_2,int param_3,bool param_4)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((0 < param_1) && (0 < param_1 - *(int *)(this + 8))) {
    PlayerInfo::AddDailyAchievementRecord(this_01,0x27e7,param_1 - *(int *)(this + 8));
  }
  if ((0 < param_2) && (0 < param_2 - *(int *)(this + 0xc))) {
    PlayerInfo::AddDailyAchievementRecord(this_01,0x27e6,param_2 - *(int *)(this + 0xc));
  }
  if ((0 < param_3) && (0 < param_3 - *(int *)(this + 0x10))) {
    PlayerInfo::AddDailyAchievementRecord(this_01,0x27e5,param_3 - *(int *)(this + 0x10));
  }
  if (!param_4) {
    return;
  }
  PlayerInfo::AddDailyAchievementRecord(this_01,0x27e3,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::CreateLogArenaID() */

void __thiscall PVPManager::CreateLogArenaID(PVPManager *this)

{
  undefined4 uVar1;
  long lVar2;
  ProfileMgr *this_00;
  string asStack_1f8 [8];
  string asStack_1f0 [8];
  MD5 aMStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  if (lVar2 == 0) {
    time((time_t *)0x0);
  }
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1f0,"");
  FUN_05462980(auStack_178,asStack_1f0);
  std::string::~string(asStack_1f0);
  nop();
  thunk_FUN_05460424(auStack_168,lVar2);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = FUN_04ac8c70(*(undefined4 *)(lVar2 + 0x604));
  FUN_0546065c(auStack_168,uVar1);
  FUN_05462824(asStack_1f8,auStack_178);
  MD5::MD5(aMStack_1e8,asStack_1f8);
  MD5::toString();
  FUN_05474278(this + 0x210,asStack_1f0);
  std::string::~string(asStack_1f0);
  std::string::~string(asStack_1f8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this + 0x210);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetTargetPlantLevel(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PVPManager::GetTargetPlantLevel(PVPManager *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  PlantNameMapperServerID *this_00;
  int iVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  iVar4 = 1;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,*piVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if ((cVar1 != '\0') &&
       (cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_10,param_2), cVar1 != '\0')
       ) {
      iVar4 = piVar3[1];
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetTargetPlantAvatar(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PVPManager::GetTargetPlantAvatar(PVPManager *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  PlantNameMapperServerID *this_00;
  undefined4 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,*piVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (((cVar1 != '\0') &&
        (cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_10,param_2), cVar1 != '\0'
        )) && (piVar3[2] == 1)) {
      uVar4 = 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetTargetPlantAccessory(int) */

void PVPManager::GetTargetPlantAccessory(int param_1)

{
  bool bVar1;
  int *piVar2;
  int in_w1;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)(uint)param_1 + 0xf8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)((ulong)(uint)param_1 + 0xf8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == in_w1) {
      thunk_FUN_05475e00();
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetTargetPlantAwakenDamage(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PVPManager::GetTargetPlantAwakenDamage(PVPManager *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  PlantNameMapperServerID *this_00;
  PlantType *this_01;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0x3f800000;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,*piVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if ((cVar2 != '\0') &&
       (cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)aRStack_10,(RtWeakPtrBase *)param_2), cVar2 != '\0')) {
      this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      lVar4 = PlantType::GetProps(this_01);
      uVar5 = *(undefined4 *)(lVar4 + 0x2a0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetPVPMapPVPData(int, int) const */

void __thiscall PVPManager::GetPVPMapPVPData(PVPManager *this,int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04acaeb8(*(undefined8 *)(this + 0x1b8));
  local_10 = FUN_04acaf08(*(undefined8 *)(this + 0x1c0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar2 + 0x20) == param_1) && (*(int *)(lVar2 + 0x24) == param_2))
    goto LAB_04acafec;
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  lVar2 = 0;
LAB_04acafec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetPVPMapData(int, int) */

void PVPManager::GetPVPMapData(int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  S2C_PVP_BigMapInfo *pSVar3;
  int in_w2;
  S2C_PVP_BigMapInfo *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_PVP_BigMapInfo::S2C_PVP_BigMapInfo(in_x8);
  *(undefined8 *)in_x8 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)(uint)param_1 + 0x188));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)(uint)param_1 + 0x188));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar2 + 0x34) == param_2) && (*(int *)(lVar2 + 0x38) == in_w2)) {
      pSVar3 = (S2C_PVP_BigMapInfo *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      S2C_PVP_BigMapInfo::operator=(in_x8,pSVar3);
    }
    FUN_04acb018((__normal_iterator *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::onNetworkError(int) */

void PVPManager::onNetworkError(int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  PVPManager *this;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  MetricsCollector *this_00;
  code *pcVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = (PVPManager *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if ((lVar3 == 0) && (cVar2 = IsInPVPMap(this), pLVar1 = gLawnApp, cVar2 != '\0')) {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    if (pPVar4 != (PVZ2UIDialog *)0x0) {
      cVar2 = FUN_04ac8c94(this[0x220]);
      if (cVar2 == '\0') {
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        pcVar5 = OnCloseDialog;
      }
      else {
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        pcVar5 = OnNetworkErrorCloseDialog;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,pcVar5);
      Sexy::Delegate0::Delegate0<PVPManager,void(PVPManager::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
      pLVar1 = gLawnApp;
      this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      lVar3 = LawnApp::GetRealServerTime(pLVar1);
      MetricsCollector::LogPvpNetError(this_00,lVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::onEditPlayerPlant(bool, int) */

void __thiscall PVPManager::onEditPlayerPlant(PVPManager *this,bool param_1,int param_2)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  char *__s;
  int iVar3;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    cVar1 = FUN_04ac8c98(this[0x221]);
    if (cVar1 == '\0') {
      cVar1 = IsInBattle();
    }
    else {
      MessageRouter::Post((_func_void *)gMessageRouter);
      cVar1 = IsInBattle();
    }
    if (cVar1 == '\0') {
      *(undefined4 *)(gLawnApp + 0x2a0c) = 0;
      GetCurrentEditLevelName();
      GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b80dc8,(string *)awStack_50,0xffffffff,1,1,0);
      std::string::~string((string *)awStack_50);
    }
  }
  else {
    switch(param_2) {
    case 0x627a:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_PVPCOIN_NOT_ENOUCH]";
      break;
    default:
      iVar3 = 0x6ae03e0;
      FUN_05478178(awStack_50,L"[PVP_ERROR_DIALOG_TITLE]",auStack_68);
      std::string::string(asStack_60,"[PVP_ERROR_DIALOG_MSG]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_60,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_2,
                 iVar3);
      pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_58);
      FUN_05476c50(awStack_58);
      std::string::~string(asStack_60);
      nop();
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",asStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnCloseDialog);
      Sexy::Delegate0::Delegate0<PVPManager,void(PVPManager::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
      goto LAB_04acb434;
    case 0x627d:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_NO_OPP]";
      break;
    case 0x6280:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_OCCUPY_IS_FIGHTING]";
      break;
    case 0x6282:
      std::string::string((string *)awStack_58,"[REVIVE_TIP]");
      __s = "[PVP_ERROR_IS_ATTACKED]";
    }
    std::string::string((string *)awStack_50,__s);
    LawnApp::ShowMessageDialogNoCallback(this_00,(string *)awStack_58,(string *)awStack_50);
    std::string::~string((string *)awStack_50);
    nop();
    std::string::~string((string *)awStack_58);
    nop();
  }
LAB_04acb434:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::onGetPVPPlayerInfo(bool, int) */

void __thiscall PVPManager::onGetPVPPlayerInfo(PVPManager *this,bool param_1,int param_2)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  char *__s;
  int iVar2;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this[0x400] = (PVPManager)0x1;
    goto LAB_04acb8c0;
  }
  switch(param_2) {
  case 0x627a:
    LawnApp::ShowPvpCoinBuyConfirm(gLawnApp);
    goto LAB_04acb8c0;
  default:
    iVar2 = 0x6ae03e0;
    FUN_05478178(awStack_50,L"[PVP_ERROR_DIALOG_TITLE]",auStack_68);
    std::string::string(asStack_60,"[PVP_ERROR_DIALOG_MSG]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_60,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_2,
               iVar2);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_58);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    nop();
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",asStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PVPManager,void(PVPManager::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    goto LAB_04acb8c0;
  case 0x627d:
    std::string::string((string *)awStack_58,"[REVIVE_TIP]");
    __s = "[PVP_ERROR_NO_OPP]";
    break;
  case 0x6280:
    std::string::string((string *)awStack_58,"[REVIVE_TIP]");
    __s = "[PVP_ERROR_OCCUPY_IS_FIGHTING]";
    break;
  case 0x6282:
    std::string::string((string *)awStack_58,"[REVIVE_TIP]");
    __s = "[PVP_ERROR_IS_ATTACKED]";
  }
  std::string::string((string *)awStack_50,__s);
  LawnApp::ShowMessageDialogNoCallback(this_00,(string *)awStack_58,(string *)awStack_50);
  std::string::~string((string *)awStack_50);
  nop();
  std::string::~string((string *)awStack_58);
  nop();
LAB_04acb8c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::onApplyData(int) */

void __thiscall PVPManager::onApplyData(PVPManager *this,int param_1)

{
  LawnApp *this_00;
  long lVar1;
  PVZ2UIDialog *pPVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  lVar1 = LawnApp::GetPVZ2Dialog(gLawnApp);
  iVar3 = (int)lVar4;
  if (lVar1 == 0) {
    FUN_05478178(awStack_50,L"[PVP_DATA_ERROR_DIALOG_TITLE]",auStack_68);
    std::string::string(asStack_60,"[PVP_DATA_ERROR_DIALOG_MSG]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_60,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_1,
               iVar3);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_58);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    nop();
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",asStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PVPManager,void(PVPManager::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::IsLoadServerPlantData() */

undefined4 __thiscall PVPManager::IsLoadServerPlantData(PVPManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if ((lVar4 != 0) &&
       (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar4 + 0x114) != '\0')) {
      return 1;
    }
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (lVar4 = FUN_04acc210(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar4 != 0)) {
      iVar2 = FUN_04ac8c84(*(undefined4 *)(this + 0x128));
      uVar3 = 2;
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          uVar3 = 3;
        }
        else {
          cVar1 = FUN_04ac8c98(this[0x221]);
          uVar3 = 3;
          if (cVar1 == '\0') {
            uVar3 = 0;
          }
        }
      }
      return uVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::InitUpgradeConfig() */

void __thiscall PVPManager::InitUpgradeConfig(PVPManager *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  PVPUpgradeData *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,99);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pPVar3 = Sexy::RtObject::Cast<PVPUpgradeData>(this_00);
      if (pPVar3 != (PVPUpgradeData *)0x0) {
        *(PVPUpgradeData **)(this + 0x3f8) = pPVar3;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::ClearSkillDatas() */

void __thiscall PVPManager::ClearSkillDatas(PVPManager *this)

{
  std::
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  ::clear((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
           *)(this + 0x60));
  return;
}


/* PVPManager::ClearRankList() */

void __thiscall PVPManager::ClearRankList(PVPManager *this)

{
  std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::clear
            ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 600));
  std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::clear
            ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 0x230));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::IsEvilDavidBattle() */

void __thiscall PVPManager::IsEvilDavidBattle(PVPManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04acd8a4(uVar3,uVar4,this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  bVar1 = false;
  if (bVar2) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = *(int *)(lVar5 + 0x28) == 4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetAttackCost() */

void __thiscall PVPManager::GetAttackCost(PVPManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x180) == 0) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x1b8);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    local_20 = FUN_04acdb68(uVar4,uVar5,this);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (bVar2) {
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      uVar3 = *(undefined4 *)(lVar6 + 0x3c);
    }
    else {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x188);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      local_18 = FUN_04acd3c0(uVar4,uVar5,this);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      uVar3 = 0;
      if (bVar2) {
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        uVar3 = *(undefined4 *)(lVar6 + 0x3c);
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PVPManager::GetPlayerData() */

PlayerPlantData * PVPManager::GetPlayerData(void)

{
  long in_x0;
  PlayerPlantData *in_x8;
  
  PlayerPlantData::PlayerPlantData(in_x8,(PlayerPlantData *)(in_x0 + 0xd8));
  return in_x8;
}


/* PVPManager::SetPlayerPlantInfo(std::vector<ArenaPlantInfoData, std::allocator<ArenaPlantInfoData>
   > const&) */

void __thiscall PVPManager::SetPlayerPlantInfo(PVPManager *this,vector *param_1)

{
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::operator=
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)(this + 0xf8),param_1)
  ;
  return;
}


/* PVPManager::SetPlayerPlantPositionInfo(std::vector<ArenaPlantPositionData,
   std::allocator<ArenaPlantPositionData> > const&) */

void __thiscall PVPManager::SetPlayerPlantPositionInfo(PVPManager *this,vector *param_1)

{
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::operator=
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)(this + 0xe0),
             param_1);
  return;
}


/* PVPManager::SetPlayerData(PlayerPlantData const&) */

byte __thiscall PVPManager::SetPlayerData(PVPManager *this,PlayerPlantData *param_1)

{
  byte bVar1;
  int iVar2;
  
  PlayerPlantData::operator=((PlayerPlantData *)(this + 0xd8),param_1);
  iVar2 = FUN_04ac8c84(*(undefined4 *)(this + 0x128));
  if (iVar2 == 1) {
    bVar1 = FUN_0547419c(this + 0x118);
    return bVar1 ^ 1;
  }
  if (iVar2 != 2) {
    return 1;
  }
  bVar1 = FUN_0547419c(this + 0x120);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetTargetZombieAwakenScaledLevel(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall
PVPManager::GetTargetZombieAwakenScaledLevel
          (PVPManager *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  ZombieType *this_00;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0x3f800000;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             ::begin((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                      *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x30));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18), bVar1
        ) {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if ((cVar2 != '\0') &&
       (cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)aRStack_10,(RtWeakPtrBase *)param_2), cVar2 != '\0')) {
      this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      lVar4 = ZombieType::GetProps(this_00);
      uVar5 = *(undefined4 *)(lVar4 + 0x1bc);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetZombieData(std::string const&) */

void __thiscall PVPManager::GetZombieData(PVPManager *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             ::find((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                     *)(this + 0x30),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x30));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetSkillData(std::string const&) */

void __thiscall PVPManager::GetSkillData(PVPManager *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             ::find((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                     *)(this + 0x60),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x60));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::AddZombieData(PVPZombieData const&) */

void __thiscall PVPManager::AddZombieData(PVPManager *this,PVPZombieData *param_1)

{
  char cVar1;
  undefined8 uVar2;
  string *psVar3;
  PVPZombieData *pPVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      pPVar4 = (PVPZombieData *)GetZombieData(this,(string *)param_1);
      if (pPVar4 == (PVPZombieData *)0x0) {
        pPVar4 = (PVPZombieData *)
                 std::
                 map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                 ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                               *)(this + 0x30),(string *)param_1);
        PVPZombieData::operator=(pPVar4,param_1);
      }
      else {
        PVPZombieData::operator=(pPVar4,param_1);
      }
      uVar2 = std::
              map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
              ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                            *)(this + 0x30),(string *)param_1);
      goto LAB_04ad2d3c;
    }
  }
  uVar2 = 0;
LAB_04ad2d3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PVPManager::AddSkillData(PVPZombieData const&) */

undefined8 __thiscall PVPManager::AddSkillData(PVPManager *this,PVPZombieData *param_1)

{
  char cVar1;
  PVPZombieData *pPVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  pPVar2 = (PVPZombieData *)GetSkillData(this,(string *)param_1);
  if (pPVar2 != (PVPZombieData *)0x0) {
    PVPZombieData::operator=(pPVar2,param_1);
    uVar3 = std::
            map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
            ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                          *)(this + 0x60),(string *)param_1);
    return uVar3;
  }
  pPVar2 = (PVPZombieData *)
           std::
           map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
           ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                         *)(this + 0x60),(string *)param_1);
  PVPZombieData::operator=(pPVar2,param_1);
  uVar3 = std::
          map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
          ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                        *)(this + 0x60),(string *)param_1);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::RefreshBattleDataFrom(PlaybackData*) */

void __thiscall PVPManager::RefreshBattleDataFrom(PVPManager *this,PlaybackData *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  PVPZombieData *pPVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  DefenderInfo aDStack_28 [8];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlaybackData *)0x0) {
    SetPlayerData(this,(PlayerPlantData *)(param_1 + 0x30));
    FUN_04ac8c7c(this + 0x128,*(undefined4 *)(param_1 + 0xf4));
    FUN_04ac9464(this + 0x174);
    DefenderInfo::DefenderInfo(aDStack_28,(DefenderInfo *)(param_1 + 0x80));
    SetCurrentDefenderInfo(this,aDStack_28);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)aDStack_28);
    TrainingCamp::ClearTrainingDatas(*(TrainingCamp **)(this + 0x28));
    ClearZombieDatas(this);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x98));
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x98));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      TrainingData::TrainingData((TrainingData *)aDStack_28);
      thunk_FUN_05475e00(aDStack_28,psVar3);
      local_20 = *(undefined4 *)(psVar3 + 8);
      cVar2 = TrainingData::IsValid();
      if ((cVar2 != '\0') &&
         (cVar2 = TrainingData::IsEmpty((TrainingData *)aDStack_28), cVar2 == '\0')) {
        TrainingCamp::AddTrainingData(*(TrainingCamp **)(this + 0x28),(TrainingData *)aDStack_28);
        PVPZombieData::PVPZombieData((PVPZombieData *)&local_40);
        thunk_FUN_05475e00((PVPZombieData *)&local_40,psVar3);
        local_38 = *(undefined4 *)(psVar3 + 0xc);
        pPVar4 = (PVPZombieData *)
                 std::
                 map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                 ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                               *)(this + 0x30),psVar3);
        PVPZombieData::operator=(pPVar4,(PVPZombieData *)&local_40);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_40);
      }
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aDStack_28);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
    }
    ClearSkillDatas(this);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0xb0));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0xb0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      cVar2 = FUN_0547419c();
      if (cVar2 == '\0') {
        PVPZombieData::PVPZombieData((PVPZombieData *)aDStack_28);
        thunk_FUN_05475e00(aDStack_28,psVar3);
        local_20 = *(undefined4 *)(psVar3 + 0xc);
        pPVar4 = (PVPZombieData *)
                 std::
                 map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                 ::operator[]((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                               *)(this + 0x60),psVar3);
        PVPZombieData::operator=(pPVar4,(PVPZombieData *)aDStack_28);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aDStack_28);
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::StartBattleReplay(unsigned long) */

void __thiscall PVPManager::StartBattleReplay(PVPManager *this,ulong param_1)

{
  char cVar1;
  PlaybackManager *pPVar2;
  long lVar3;
  PlaybackData *pPVar4;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if ((this_00 != (Board *)0x0) && (cVar1 = Board::IsPlaying(this_00), cVar1 != '\0')) {
    Board::EndLevel(this_00);
    *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x880) = 8;
  }
  pPVar2 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::SetCurrentData(pPVar2,param_1);
  lVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  FUN_04ac9450(lVar3 + 0x40);
  pPVar2 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  pPVar4 = (PlaybackData *)PlaybackManager::GetPlayback(pPVar2,param_1);
  RefreshBattleDataFrom(this,pPVar4);
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b80dc8,pPVar4 + 0x70,0xffffffff,1,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::Initialise() */

void __thiscall PVPManager::Initialise(PVPManager *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ObjectTypeDirectory<TrainingType> *pOVar4;
  long lVar5;
  TrainingCamp *this_00;
  INetworkMsgProcess *this_01;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x21] == (PVPManager)0x0) {
    this[0x21] = (PVPManager)0x1;
    pOVar4 = (ObjectTypeDirectory<TrainingType> *)
             Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    iVar1 = ObjectTypeDirectory<TrainingType>::GetCount(pOVar4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pOVar4 = (ObjectTypeDirectory<TrainingType> *)
             Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    uVar2 = ObjectTypeDirectory<TrainingType>::GetCount(pOVar4);
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        uVar3 = Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
        ObjectTypeDirectory<TrainingType>::GetTypeFromIndex(uVar3);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        if (*(uint *)(lVar5 + 0x30) < uVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          goto LAB_04ad3544;
        }
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        *(int *)(lVar5 + 0x30) = iVar6;
        iVar6 = iVar6 + 1;
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_30);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        std::vector<std::string,std::allocator<std::string>>::insert
                  ((vector<std::string,std::allocator<std::string>> *)avStack_20,local_28,lVar5 + 8)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      } while (iVar1 != iVar6);
    }
    pOVar4 = (ObjectTypeDirectory<TrainingType> *)
             Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    ObjectTypeDirectory<TrainingType>::SortTypes(pOVar4,(vector *)avStack_20);
LAB_04ad3544:
    this_00 = ::operator_new(0x30);
    TrainingCamp::TrainingCamp(this_00);
    *(TrainingCamp **)(this + 0x28) = this_00;
    PVPShopConfigData::initData((PVPShopConfigData *)(this + 0x348));
    InitUpgradeConfig(this);
    *(undefined4 *)(this + 0x24c) = 0;
    *(undefined4 *)(this + 0x248) = 100;
    *(undefined4 *)(this + 0x270) = 100;
    *(undefined4 *)(this + 0x250) = 0;
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPEntry(this_01);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetZombieDatas(std::vector<PVPZombieData, std::allocator<PVPZombieData> >&) */

void __thiscall PVPManager::GetZombieDatas(PVPManager *this,vector *param_1)

{
  bool bVar1;
  pair *ppVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  pair<std::string,PVPZombieData> apStack_28 [8];
  PVPZombieData aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PVPZombieData,std::allocator<PVPZombieData>>::clear
            ((vector<PVPZombieData,std::allocator<PVPZombieData>> *)param_1);
  local_38 = std::
             map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             ::begin((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                      *)(this + 0x30));
  local_30 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x30));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)&local_30), bVar1
        ) {
    ppVar2 = (pair *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
    std::pair<std::string,PVPZombieData>::pair<std::string_const,PVPZombieData,void>
              (apStack_28,ppVar2);
    std::vector<PVPZombieData,std::allocator<PVPZombieData>>::push_back
              ((vector<PVPZombieData,std::allocator<PVPZombieData>> *)param_1,aPStack_20);
    std::pair<std::string,PVPZombieData>::~pair(apStack_28);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  FUN_04ad29c8(uVar3,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::AddPVPMapPVPData(S2C_PVP_BigMapPVPInfo&) */

void __thiscall PVPManager::AddPVPMapPVPData(PVPManager *this,S2C_PVP_BigMapPVPInfo *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>>::push_back
                ((vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>> *)this_00,
                 param_1);
LAB_04ad3a7c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar2 + 0x20) == *(int *)(param_1 + 0x20)) &&
       (*(int *)(lVar2 + 0x24) == *(int *)(param_1 + 0x24))) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>>::erase
                           ((vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>> *)
                            this_00,local_10);
      std::vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>>::push_back
                ((vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>> *)this_00,
                 param_1);
      goto LAB_04ad3a7c;
    }
    FUN_04acae08((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::AddPVPMapData(S2C_PVP_BigMapInfo&) */

void __thiscall PVPManager::AddPVPMapData(PVPManager *this,S2C_PVP_BigMapInfo *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x188);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::push_back
                ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)this_00,param_1);
LAB_04ad3cb4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(lVar2 + 0x34) == *(int *)(param_1 + 0x34)) &&
       (*(int *)(lVar2 + 0x38) == *(int *)(param_1 + 0x38))) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::erase
                           ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)this_00
                            ,local_10);
      std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::push_back
                ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)this_00,param_1);
      goto LAB_04ad3cb4;
    }
    FUN_04acb018((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::AddPVPMapZoneData(PVPZoneServerData&) */

void __thiscall PVPManager::AddPVPMapZoneData(PVPManager *this,PVPZoneServerData *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::vector<PVPZoneServerData,std::allocator<PVPZoneServerData>>::push_back
                ((vector<PVPZoneServerData,std::allocator<PVPZoneServerData>> *)this_00,param_1);
LAB_04ad3f28:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == *(int *)param_1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<PVPZoneServerData,std::allocator<PVPZoneServerData>>::erase
                           ((vector<PVPZoneServerData,std::allocator<PVPZoneServerData>> *)this_00,
                            local_10);
      std::vector<PVPZoneServerData,std::allocator<PVPZoneServerData>>::push_back
                ((vector<PVPZoneServerData,std::allocator<PVPZoneServerData>> *)this_00,param_1);
      goto LAB_04ad3f28;
    }
    FUN_04acb16c((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::Reset() */

void __thiscall PVPManager::Reset(PVPManager *this)

{
  undefined4 uVar1;
  PVPLabData aPStack_48 [64];
  long local_8;
  
  this[0x21] = (PVPManager)0x0;
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  std::
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  ::clear((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
           *)(this + 0x30));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x208) = 0x1e;
  *(undefined4 *)(this + 0x20c) = 0x1e;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (PVPManager)0x0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x328] = (PVPManager)0x0;
  this[0x221] = (PVPManager)0x0;
  *(undefined4 *)(this + 0x228) = 0x42700000;
  PVPShopConfigData::clear((PVPShopConfigData *)(this + 0x348));
  PVPLabData::PVPLabData(aPStack_48);
  PVPLabData::operator=((PVPLabData *)(this + 0x90),aPStack_48);
  PVPLabData::~PVPLabData(aPStack_48);
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x3f8) = 0;
  this[0x176] = (PVPManager)0x0;
  this[0x177] = (PVPManager)0x0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (PVPManager)0x1;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0xd0) = uVar1;
  *(undefined4 *)(this + 0xd4) = uVar1;
  this[0x400] = (PVPManager)0x0;
  BoardDlg::s_NeedShow = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::PVPManager() */

void __thiscall PVPManager::PVPManager(PVPManager *this)

{
  undefined *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PVPManager>::LazySingleton((LazySingleton<PVPManager> *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__PVPManager_06949460;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x30));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x60));
  PVPLabData::PVPLabData((PVPLabData *)(this + 0x90));
  PlayerPlantData::PlayerPlantData((PlayerPlantData *)(this + 0xd8));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 300));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x138));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x144));
  DefenderInfo::DefenderInfo((DefenderInfo *)(this + 0x150));
  *(undefined8 *)(this + 0x180) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  S2C_PVP_BigMapMainInfo::S2C_PVP_BigMapMainInfo((S2C_PVP_BigMapMainInfo *)(this + 0x1d0));
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0xffffffff;
  *(undefined4 *)(this + 0x1fc) = 0xffffffff;
  Set8BytesTo0(this + 0x210);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 600));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x278));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x290));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2a8));
  S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo((S2C_PVP_PreGardenRankInfo *)(this + 0x2c0));
  PvPRankMonthReward::PvPRankMonthReward((PvPRankMonthReward *)(this + 0x2e0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2f8));
  NameEffectStruct::NameEffectStruct((NameEffectStruct *)(this + 0x330));
  PVPShopConfigData::PVPShopConfigData((PVPShopConfigData *)(this + 0x348));
  this[0x401] = (PVPManager)0x0;
  Reset(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEditPlayerPlant);
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_70 = local_50;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<PVPManager,void(PVPManager::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::EditPlayerPlant,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetPVPPlayerInfo);
  local_70 = local_38;
  local_80 = local_48;
  uStack_78 = uStack_40;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<PVPManager,void(PVPManager::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::GetPVPPlayerInfo,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_a0 = local_30;
  uStack_98 = uStack_28;
  local_90 = local_20;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<PVPManager,void(PVPManager::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onApplyData);
  local_90 = local_8;
  local_a0 = local_18;
  uStack_98 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<PVPManager,void(PVPManager::*)(int)>>
            ((MessageRouter *)puVar1,Message::ApplyData,&local_a0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::onDoChangePlayer() */

void PVPManager::onDoChangePlayer(void)

{
  char cVar1;
  Board *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  GetCurrentLevelName();
  this = *(Board **)(gLawnApp + 0x9f0);
  if ((this != (Board *)0x0) && (cVar1 = Board::IsPlaying(this), cVar1 != '\0')) {
    Board::EndLevel(this);
    *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x880) = 8;
  }
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b80dc8,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::Update() */

void __thiscall PVPManager::Update(PVPManager *this)

{
  char cVar1;
  
  cVar1 = IsInPVPMap(this);
  if (cVar1 != '\0') {
    if (this[0x400] != (PVPManager)0x0) {
      this[0x400] = (PVPManager)0x0;
      onDoChangePlayer();
      return;
    }
    if ((*(TrainingCamp **)(this + 0x28) != (TrainingCamp *)0x0) &&
       (*(long *)(gLawnApp + 0x9f0) == 0)) {
      TrainingCamp::Update(*(TrainingCamp **)(this + 0x28));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::AddRankInfo(S2C_PvPRankInfo&) */

void __thiscall PVPManager::AddRankInfo(PVPManager *this,S2C_PvPRankInfo *param_1)

{
  vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x14) == 1) {
    *(undefined4 *)(this + 0x270) = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = FUN_04ac8ce0(*(undefined8 *)(this + 600),*(undefined8 *)(this + 0x260));
    if (uVar3 <= (ulong)(long)*(int *)(param_1 + 0x18)) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 600));
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0x20));
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(param_1 + 0x20));
      std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::
      insert<__gnu_cxx::__normal_iterator<S2C_PVP_RankInfo*,std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>>,void>
                ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 600),local_10,
                 uVar4,uVar5);
    }
    this_00 = (vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>> *)
              (this + 0x2a8);
    std::vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>>::clear(this_00)
    ;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(param_1 + 0x38));
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_1 + 0x38));
    std::vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>>::
    insert<__gnu_cxx::__normal_iterator<S2C_PVP_PreGardenRankInfo*,std::vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>>>,void>
              (this_00,local_10,uVar4,uVar5);
    S2C_PVP_RankInfo::operator=
              ((S2C_PVP_RankInfo *)(this + 0x2c0),(S2C_PVP_RankInfo *)(param_1 + 0x50));
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(this + 0x248) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x24c) = uVar1;
    *(undefined4 *)(this + 0x250) = uVar2;
    uVar3 = FUN_04ac8ce0(*(undefined8 *)(this + 0x230),*(undefined8 *)(this + 0x238));
    if (uVar3 <= (ulong)(long)*(int *)(param_1 + 0x18)) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x230));
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0x20));
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(param_1 + 0x20));
      std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::
      insert<__gnu_cxx::__normal_iterator<S2C_PVP_RankInfo*,std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>>,void>
                ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 0x230),
                 local_10,uVar4,uVar5);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::SetConfigData(S2C_PVP_Entry const&) */

void __thiscall PVPManager::SetConfigData(PVPManager *this,S2C_PVP_Entry *param_1)

{
  vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>> *this_00;
  vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>> *this_01;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>> *)(this + 0x278);
  this_01 = (vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>> *)
            (this + 0x290);
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x228) = (float)*(int *)(param_1 + 0x24);
  std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar1 = FUN_04aca7a0(*(undefined8 *)(param_1 + 0x28));
  uVar2 = FUN_04aca7f0(*(undefined8 *)(param_1 + 0x30));
  std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>::
  insert<__gnu_cxx::__normal_iterator<S2C_PVP_LeagueInfo_const*,std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>>,void>
            (this_00,local_10,uVar1,uVar2);
  std::vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>>::clear(this_01);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_01);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar1 = FUN_04aca890(*(undefined8 *)(param_1 + 0x40));
  uVar2 = FUN_04aca8e0(*(undefined8 *)(param_1 + 0x48));
  std::vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>>::
  insert<__gnu_cxx::__normal_iterator<S2C_PVP_GardenRewardInfo_const*,std::vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>>>,void>
            (this_01,local_10,uVar1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::AddOtherUserZbList(long, std::vector<S2C_PVP_ZombieInfo,
   std::allocator<S2C_PVP_ZombieInfo> > const&) */

void __thiscall PVPManager::AddOtherUserZbList(PVPManager *this,long param_1,vector *param_2)

{
  map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *this_01;
  long lVar4;
  long local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
             *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  local_48[0] = param_1;
  local_38 = std::
             map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
             ::find(this_00,local_48);
  local_20[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)local_20);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
    std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::clear
              ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)(lVar4 + 8));
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar4 + 8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_20,(__normal_iterator *)&local_28);
    uVar2 = FUN_04acbb84(*(undefined8 *)param_2);
    uVar3 = FUN_04acbbd4(*(undefined8 *)(param_2 + 8));
    std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::
    insert<__gnu_cxx::__normal_iterator<S2C_PVP_ZombieInfo_const*,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>,void>
              ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)(lVar4 + 8),
               local_20[0],uVar2,uVar3);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_28,(__normal_iterator *)&local_30);
    uVar2 = FUN_04acbb84(*(undefined8 *)param_2);
    uVar3 = FUN_04acbbd4(*(undefined8 *)(param_2 + 8));
    std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::
    insert<__gnu_cxx::__normal_iterator<S2C_PVP_ZombieInfo_const*,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>,void>
              ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)local_20,local_28,
               uVar2,uVar3);
    this_01 = (vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)
              std::
              map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
              ::operator[](this_00,local_48);
    std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::operator=
              (this_01,(vector *)local_20);
    std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::~vector
              ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)local_20);
  }
  MessageRouter::Broadcast<long,long>
            ((MessageRouter *)gMessageRouter,Message::NotifyAddOtherUserZbList,local_48[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::GetOtherUserZbList(long, std::vector<S2C_PVP_ZombieInfo,
   std::allocator<S2C_PVP_ZombieInfo> >&) */

void __thiscall PVPManager::GetOtherUserZbList(PVPManager *this,long param_1,vector *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_20 = std::
             map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
             ::find((map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
                     *)(this + 0x2f8),&local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x2f8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar2 + 8));
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar2 + 8));
    std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::
    insert<__gnu_cxx::__normal_iterator<S2C_PVP_ZombieInfo*,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>,void>
              ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)param_2,local_10,
               uVar3,uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::SetPlayerData(std::string const&) */

void __thiscall PVPManager::SetPlayerData(PVPManager *this,string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  PlayerPlantData aPStack_58 [80];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    PlayerPlantData::PlayerPlantData(aPStack_58);
    PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aPStack_58,param_1);
    uVar2 = SetPlayerData(this,aPStack_58);
    PlayerPlantData::~PlayerPlantData(aPStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::RefreshBattleDataTo(PlaybackData*) */

void __thiscall PVPManager::RefreshBattleDataTo(PVPManager *this,PlaybackData *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlaybackData *)0x0) {
    GetPlayerData();
    PlayerPlantData::operator=((PlayerPlantData *)(param_1 + 0x30),(PlayerPlantData *)&local_58);
    PlayerPlantData::~PlayerPlantData((PlayerPlantData *)&local_58);
    GetCurrentDefenderInfo();
    DefenderInfo::operator=((DefenderInfo *)(param_1 + 0x80),(DefenderInfo *)&local_58);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_58);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(*(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         **)(this + 0x28));
    local_68 = FUN_04acbc74(*puVar3);
    local_60 = FUN_04acbcc4(puVar3[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      PvpPlantLostRecord::PvpPlantLostRecord((PvpPlantLostRecord *)&local_58);
      thunk_FUN_05475e00((PlayerPlantData *)&local_58,lVar4);
      local_50 = *(undefined4 *)(lVar4 + 8);
      cVar2 = FUN_0547419c((PlayerPlantData *)&local_58);
      if (cVar2 == '\0') {
        std::vector<PlaybackZombieData,std::allocator<PlaybackZombieData>>::push_back
                  ((vector<PlaybackZombieData,std::allocator<PlaybackZombieData>> *)(param_1 + 0x98)
                   ,(PlaybackZombieData *)&local_58);
      }
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_58);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_68);
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(param_1 + 0x98);
    local_70 = std::
               map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
               ::begin((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                        *)(this + 0x30));
    local_68 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x30));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_70,(rbtree_iterator *)&local_68),
          bVar1) {
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_70);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_60 = FUN_04acd1ec(uVar5,uVar6,lVar4);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
      if (bVar1) {
        lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(lVar4 + 0x10);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_70);
    }
    local_68 = std::
               map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
               ::begin((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
                        *)(this + 0x60));
    local_60 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x60));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_68,(rbtree_iterator *)&local_60),
          bVar1) {
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_68);
      PvpPlantLostRecord::PvpPlantLostRecord((PvpPlantLostRecord *)&local_58);
      thunk_FUN_05475e00((PlayerPlantData *)&local_58,lVar4 + 8);
      local_4c = *(undefined4 *)(lVar4 + 0x10);
      cVar2 = FUN_0547419c((PlayerPlantData *)&local_58);
      if (cVar2 == '\0') {
        std::vector<PlaybackZombieData,std::allocator<PlaybackZombieData>>::push_back
                  ((vector<PlaybackZombieData,std::allocator<PlaybackZombieData>> *)(param_1 + 0xb0)
                   ,(PlaybackZombieData *)&local_58);
      }
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_58);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::~PVPManager() */

void __thiscall PVPManager::~PVPManager(PVPManager *this)

{
  *(undefined ***)this = &PTR__PVPManager_06949460;
  Reset(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PVPShopConfigData::~PVPShopConfigData((PVPShopConfigData *)(this + 0x348));
  NameEffectStruct::~NameEffectStruct((NameEffectStruct *)(this + 0x330));
  std::
  map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
  ::~map((map<long,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>,std::less<long>,std::allocator<std::pair<long_const,std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>>>>
          *)(this + 0x2f8));
  std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)(this + 0x2c0));
  std::vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>>::~vector
            ((vector<S2C_PVP_PreGardenRankInfo,std::allocator<S2C_PVP_PreGardenRankInfo>> *)
             (this + 0x2a8));
  std::vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>>::~vector
            ((vector<S2C_PVP_GardenRewardInfo,std::allocator<S2C_PVP_GardenRewardInfo>> *)
             (this + 0x290));
  std::vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>>::~vector
            ((vector<S2C_PVP_LeagueInfo,std::allocator<S2C_PVP_LeagueInfo>> *)(this + 0x278));
  std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::~vector
            ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 600));
  std::vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>>::~vector
            ((vector<S2C_PVP_RankInfo,std::allocator<S2C_PVP_RankInfo>> *)(this + 0x230));
  std::string::~string((string *)(this + 0x210));
  std::vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>>::~vector
            ((vector<S2C_PVP_BigMapPVPInfo,std::allocator<S2C_PVP_BigMapPVPInfo>> *)(this + 0x1b8));
  std::vector<PVPZoneServerData,std::allocator<PVPZoneServerData>>::~vector
            ((vector<PVPZoneServerData,std::allocator<PVPZoneServerData>> *)(this + 0x1a0));
  std::vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>>::~vector
            ((vector<S2C_PVP_BigMapInfo,std::allocator<S2C_PVP_BigMapInfo>> *)(this + 0x188));
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)(this + 0x150));
  PlayerPlantData::~PlayerPlantData((PlayerPlantData *)(this + 0xd8));
  PVPLabData::~PVPLabData((PVPLabData *)(this + 0x90));
  std::
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  ::~map((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
          *)(this + 0x60));
  std::
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  ::~map((map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
          *)(this + 0x30));
  Sexy::LazySingleton<PVPManager>::~LazySingleton((LazySingleton<PVPManager> *)this);
  return;
}


/* PVPManager::~PVPManager() */

void __thiscall PVPManager::~PVPManager(PVPManager *this)

{
  ~PVPManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::RefreshTrainingDatas(S2C_PVP_TrainingZombie*) */

void __thiscall PVPManager::RefreshTrainingDatas(PVPManager *this,S2C_PVP_TrainingZombie *param_1)

{
  char cVar1;
  bool bVar2;
  TrainingCamp *this_00;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  string asStack_70 [8];
  TrainingData aTStack_68 [8];
  int local_60;
  int local_5c;
  ServerZombieID aSStack_48 [8];
  int local_40;
  int local_3c;
  TrainingData aTStack_28 [8];
  int local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (S2C_PVP_TrainingZombie *)0x0) {
    SetPVPCoin(this,*(int *)(param_1 + 0x30));
    this_00 = (TrainingCamp *)Sexy::SysFont::CreateImageFont((SysFont *)this);
    TrainingCamp::GetCurrentTrainingData();
    for (uVar7 = 0;
        uVar5 = FUN_04ac8cc0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)),
        uVar7 < uVar5; uVar7 = uVar7 + 1) {
      TrainingData::TrainingData(aTStack_28);
      piVar3 = (int *)FUN_04ac8cd4(*(undefined8 *)(param_1 + 0x18),uVar7);
      ServerZombieID::ServerZombieID(aSStack_48,*piVar3);
      ServerZombieID::ToString();
      FUN_05474278(aTStack_28,asStack_70);
      std::string::~string(asStack_70);
      lVar4 = FUN_04ac8cd4(*(undefined8 *)(param_1 + 0x18),uVar7);
      local_20 = *(int *)(lVar4 + 0xc);
      local_10 = *(undefined8 *)(lVar4 + 0x10);
      local_1c = *(undefined4 *)(lVar4 + 4);
      if (0 < *(int *)(lVar4 + 8)) {
        local_18 = (float)*(int *)(lVar4 + 8);
        local_14 = (float)PVZ_T();
        local_14 = local_14 + local_18;
      }
      TrainingCamp::SetTrainingData(this_00,(string *)aTStack_28,aTStack_28);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_28);
    }
    bVar6 = false;
    TrainingCamp::GetCurrentTrainingData();
    cVar1 = TrainingData::IsEmpty(aTStack_68);
    if (cVar1 == '\0') {
      bVar2 = std::operator!=((string *)aTStack_68,(string *)aSStack_48);
      if (bVar2) {
        TrainingCamp::GetTrainingData((string *)this_00);
        cVar1 = TrainingData::IsEmpty(aTStack_28);
        bVar6 = cVar1 == '\0' && local_60 < local_20;
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_28);
      }
      else if (local_3c < local_5c) {
        bVar6 = local_60 < local_40;
      }
    }
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::PVPTrainingZombieChanged,bVar6);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aSStack_48);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPManager::RequestBattleEnding(int, int, int, std::vector<ZombieRecord,
   std::allocator<ZombieRecord> > const&) */

void __thiscall
PVPManager::RequestBattleEnding
          (PVPManager *this,int param_1,int param_2,int param_3,vector *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  RtMixedPtrBase *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  string *psVar8;
  undefined8 local_198;
  undefined8 local_190;
  string asStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  bVar1 = true;
  std::string::string(asStack_188,"");
  FUN_05462980(auStack_178,asStack_188);
  std::string::~string(asStack_188);
  nop();
  FUN_054603b8(auStack_168,"{\"d\":{\"zi\":[");
  local_198 = FUN_04aca980(*(undefined8 *)param_4);
  local_190 = FUN_04aca9d0(*(undefined8 *)(param_4 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_198,(__normal_iterator *)&local_190), bVar2)
  {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_198);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar3 != '\0') {
      if (!bVar1) {
        FUN_054603b8(auStack_168,&DAT_05593348);
      }
      bVar1 = false;
      uVar6 = FUN_054603b8(auStack_168,"{\"z\":");
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ServerZombieID::ServerZombieID((ServerZombieID *)asStack_188,(string *)(lVar7 + 8));
      uVar4 = ImageLib::Image::GetWidth((Image *)asStack_188);
      uVar6 = FUN_0546065c(uVar6,uVar4);
      uVar6 = FUN_054603b8(uVar6,",\"n\":");
      uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(this_00 + 8));
      FUN_054603b8(uVar6,&DAT_05593340);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_198);
  }
  FUN_054603b8(auStack_168,&DAT_0567a138);
  FUN_05462824(asStack_188,auStack_178);
  iVar5 = FUN_04ac8c88(*(undefined4 *)(this + 0x158));
  cVar3 = IsEvilDavidBattle(this);
  if (cVar3 == '\0') {
    FUN_04ac8c74(this + 0x1fc,0xffffffff);
  }
  else {
    FUN_04ac8c74(this + 0x1fc,0 < param_1);
  }
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  psVar8 = (string *)GetLogArenaID(this);
  INetworkMsgProcess::RequestPVPBattleEnding
            (this_02,psVar8,iVar5,param_1,param_2,param_3,asStack_188,*(ulong *)(this + 0x180));
  std::string::~string(asStack_188);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPManager::GetLeagueInfoList() */

PVPManager * __thiscall PVPManager::GetLeagueInfoList(PVPManager *this)

{
  return this + 0x278;
}


/* PVPManager::GetGardenRewardInfoList() */

PVPManager * __thiscall PVPManager::GetGardenRewardInfoList(PVPManager *this)

{
  return this + 0x290;
}


/* PVPManager::GetMainRankInfo() */

PVPManager * __thiscall PVPManager::GetMainRankInfo(PVPManager *this)

{
  return this + 0x2c0;
}


/* PVPManager::GetRankMonthReward() const */

PVPManager * __thiscall PVPManager::GetRankMonthReward(PVPManager *this)

{
  return this + 0x2e0;
}

