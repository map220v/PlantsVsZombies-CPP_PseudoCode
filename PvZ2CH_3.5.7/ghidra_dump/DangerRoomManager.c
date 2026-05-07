// Class: DangerRoomManager


/* DangerRoomManager::SetLevelPlantsAdd(std::vector<S2C_DangerRoomPlantNum,
   std::allocator<S2C_DangerRoomPlantNum> > const&) */

void __thiscall DangerRoomManager::SetLevelPlantsAdd(DangerRoomManager *this,vector *param_1)

{
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0xe8),
             param_1);
  return;
}


/* DangerRoomManager::IsTrainingMode() const */

bool __thiscall DangerRoomManager::IsTrainingMode(DangerRoomManager *this)

{
  int iVar1;
  
  iVar1 = FUN_0329b64c(*(undefined4 *)(this + 0x2b8));
  return iVar1 == 1;
}


/* DangerRoomManager::GetMaxLastWeekLevel() const */

undefined4 __thiscall DangerRoomManager::GetMaxLastWeekLevel(DangerRoomManager *this)

{
  return *(undefined4 *)(this + 0x34);
}


/* DangerRoomManager::SetMaxLevel(int) */

void __thiscall DangerRoomManager::SetMaxLevel(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0x30) = param_1;
  return;
}


/* DangerRoomManager::SetMaxLastWeekLevel(int) */

void __thiscall DangerRoomManager::SetMaxLastWeekLevel(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0x34) = param_1;
  return;
}


/* DangerRoomManager::SetCachePlantNumList(std::vector<S2C_DangerRoomPlantNum,
   std::allocator<S2C_DangerRoomPlantNum> > const&) */

void __thiscall DangerRoomManager::SetCachePlantNumList(DangerRoomManager *this,vector *param_1)

{
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x260)
             ,param_1);
  return;
}


/* DangerRoomManager::GetCachePlantNumList() const */

DangerRoomManager * __thiscall DangerRoomManager::GetCachePlantNumList(DangerRoomManager *this)

{
  return this + 0x260;
}


/* DangerRoomManager::SetPlantNumList(std::vector<S2C_DangerRoomPlantNum,
   std::allocator<S2C_DangerRoomPlantNum> > const&) */

void __thiscall DangerRoomManager::SetPlantNumList(DangerRoomManager *this,vector *param_1)

{
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x68),
             param_1);
  return;
}


/* DangerRoomManager::SetCurrentLevel(int) */

void __thiscall DangerRoomManager::SetCurrentLevel(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0x2c) = param_1;
  return;
}


/* DangerRoomManager::GetServerPlantBanList() const */

DangerRoomManager * __thiscall DangerRoomManager::GetServerPlantBanList(DangerRoomManager *this)

{
  return this + 0x280;
}


/* DangerRoomManager::GetTrainingWorldList() */

vector<std::string,std::allocator<std::string>> * DangerRoomManager::GetTrainingWorldList(void)

{
  long in_x0;
  vector<std::string,std::allocator<std::string>> *in_x8;
  
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,(vector *)(in_x0 + 0x298));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::onADFinished(int) */

void __thiscall DangerRoomManager::onADFinished(DangerRoomManager *this,int param_1)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x11) {
    __s = "EndlessShopRefreshAD";
  }
  else {
    if (param_1 != 0x1f) goto LAB_04a804ac;
    __s = "DangerRoomChallengeTimeReset";
  }
  std::string::string(asStack_10,__s);
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_04a804ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::GetProps() */

undefined8 __thiscall DangerRoomManager::GetProps(DangerRoomManager *this)

{
  return *(undefined8 *)(this + 0x108);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetMainDialog() */

void DangerRoomManager::GetMainDialog(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b7ea58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7ea58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b7e800,"DangerRoomMain");
    __cxa_guard_release(&DAT_06b7ea58);
    __cxa_atexit(std::string::~string,&DAT_06b7e800,&DAT_06a88000);
    nop();
  }
  if (((DAT_06b7e7f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7e7f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b7e808,"DangerRoomNotOpen");
    __cxa_guard_release(&DAT_06b7e7f8);
    __cxa_atexit(std::string::~string,&DAT_06b7e808,&DAT_06a88000);
    nop();
  }
  pcVar3 = (char *)FUN_0547429c(&DAT_06b7e800);
  lVar4 = Lua::CUIDialog::GetDialog(pcVar3);
  if (lVar4 == 0) {
    pcVar3 = (char *)FUN_0547429c(&DAT_06b7e808);
    Lua::CUIDialog::GetDialog(pcVar3);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::CloseMainDialog() */

void DangerRoomManager::CloseMainDialog(void)

{
  LuaFunctionCallback *pLVar1;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_31 = false;
  local_28 = 0;
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
  std::string::string(asStack_30,"luaDangerRoom:CloseDialog");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,0,&local_31);
  Lua::LuaFunctionCallback::End(pLVar1);
  std::string::~string(asStack_30);
  nop();
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::SetMainDialogVisible(bool) */

void __thiscall DangerRoomManager::SetMainDialogVisible(DangerRoomManager *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = (long *)GetMainDialog();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  }
  return;
}


/* DangerRoomManager::OnResponceRestartLevel() */

void DangerRoomManager::OnResponceRestartLevel(void)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::RestartLevel(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* DangerRoomManager::SetRestartFlag(int) */

void __thiscall DangerRoomManager::SetRestartFlag(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0x278) = param_1;
  return;
}


/* DangerRoomManager::EnterLevel(bool) */

void __thiscall DangerRoomManager::EnterLevel(DangerRoomManager *this,bool param_1)

{
  FUN_04a80684(this + 0x2b8,param_1);
  GameStateMgr::ShowDangerRoomSkipLevel(gGameStateMgr);
  return;
}


/* DangerRoomManager::SetMedal(int) */

void __thiscall DangerRoomManager::SetMedal(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0x90) = param_1;
  return;
}


/* DangerRoomManager::GetNextLevel() const */

int __thiscall DangerRoomManager::GetNextLevel(DangerRoomManager *this)

{
  int iVar1;
  
  iVar1 = BaseReadWithoutBufferTask::GetNumBytesRead((BaseReadWithoutBufferTask *)this);
  return iVar1 + 1;
}


/* DangerRoomManager::GetLevelMedal() const */

undefined4 __thiscall DangerRoomManager::GetLevelMedal(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0xd8);
  }
  return uVar2;
}


/* DangerRoomManager::GetLevelScore() const */

undefined4 __thiscall DangerRoomManager::GetLevelScore(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0xd4);
  }
  return uVar2;
}


/* DangerRoomManager::GetPlantfoodNum() const */

undefined4 __thiscall DangerRoomManager::GetPlantfoodNum(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x50);
  }
  return uVar2;
}


/* DangerRoomManager::GetSunNum() const */

undefined4 __thiscall DangerRoomManager::GetSunNum(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x80);
  }
  return uVar2;
}


/* DangerRoomManager::SetCukeCount(int) */

void __thiscall DangerRoomManager::SetCukeCount(DangerRoomManager *this,int param_1)

{
  char cVar1;
  
  cVar1 = IsTrainingMode(this);
  if (cVar1 == '\0') {
    *(int *)(this + 0x88) = param_1;
  }
  return;
}


/* DangerRoomManager::GetCukeCount() const */

undefined4 __thiscall DangerRoomManager::GetCukeCount(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x88);
  }
  return uVar2;
}


/* DangerRoomManager::GetCukeUsedCount() const */

undefined4 __thiscall DangerRoomManager::GetCukeUsedCount(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x8c);
  }
  return uVar2;
}


/* DangerRoomManager::GetDayScore() const */

undefined4 __thiscall DangerRoomManager::GetDayScore(DangerRoomManager *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsTrainingMode(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x84);
  }
  return uVar2;
}


/* DangerRoomManager::SetHaveMower(int, bool) */

void __thiscall DangerRoomManager::SetHaveMower(DangerRoomManager *this,int param_1,bool param_2)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x38);
    uVar1 = FUN_04a80698(uVar3,*(undefined8 *)(this + 0x40));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (uint *)FUN_04a806a8(uVar3,(long)param_1);
      *puVar2 = (uint)param_2;
    }
  }
  return;
}


/* DangerRoomManager::IsHaveMower(int) */

char __thiscall DangerRoomManager::IsHaveMower(DangerRoomManager *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  cVar1 = IsTrainingMode(this);
  if ((cVar1 == '\0') && (-1 < param_1)) {
    uVar4 = *(undefined8 *)(this + 0x38);
    uVar2 = FUN_04a80698(uVar4,*(undefined8 *)(this + 0x40));
    if ((ulong)(long)param_1 < uVar2) {
      piVar3 = (int *)FUN_04a806a8(uVar4,(long)param_1);
      cVar1 = 0 < *piVar3;
    }
  }
  return cVar1;
}


/* DangerRoomManager::RequestResetFree() */

void DangerRoomManager::RequestResetFree(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestSkipDangerRoom(this_00,0,0);
  return;
}


/* DangerRoomManager::SetPlantFoodBuyCount(int) */

void __thiscall DangerRoomManager::SetPlantFoodBuyCount(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0x54) = param_1;
  return;
}


/* DangerRoomManager::SetArtifactLeftTimes(int) */

void __thiscall DangerRoomManager::SetArtifactLeftTimes(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0xb0) = param_1;
  return;
}


/* DangerRoomManager::GetArtifactLeftTimes() */

undefined4 __thiscall DangerRoomManager::GetArtifactLeftTimes(DangerRoomManager *this)

{
  return *(undefined4 *)(this + 0xb0);
}


/* DangerRoomManager::SetArtifactMaxTimes(int) */

void __thiscall DangerRoomManager::SetArtifactMaxTimes(DangerRoomManager *this,int param_1)

{
  *(int *)(this + 0xb4) = param_1;
  return;
}


/* DangerRoomManager::GetArtifactMaxTimes() */

undefined4 __thiscall DangerRoomManager::GetArtifactMaxTimes(DangerRoomManager *this)

{
  return *(undefined4 *)(this + 0xb4);
}


/* DangerRoomManager::GetArtifactUsedTimes() */

int __thiscall DangerRoomManager::GetArtifactUsedTimes(DangerRoomManager *this)

{
  return *(int *)(this + 0xb4) - *(int *)(this + 0xb0);
}


/* DangerRoomManager::GetMaxSelectedPlant() */

undefined4 __thiscall DangerRoomManager::GetMaxSelectedPlant(DangerRoomManager *this)

{
  return *(undefined4 *)(*(long *)(this + 0x108) + 0x1e8);
}


/* DangerRoomManager::ShowEndLevel(bool) */

void __thiscall DangerRoomManager::ShowEndLevel(DangerRoomManager *this,bool param_1)

{
  int iVar1;
  DangerRoomEndLevelLose *this_00;
  DangerRoomEndLevelWin *this_01;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0)), iVar1 != 1)) {
    this_00 = (DangerRoomEndLevelLose *)UISingletonDialog<DangerRoomEndLevelLose>::ShowDialog();
    DangerRoomEndLevelLose::Start(this_00,param_1,3.0);
    return;
  }
  this_01 = (DangerRoomEndLevelWin *)UISingletonDialog<DangerRoomEndLevelWin>::ShowDialog();
  if (this_01 != (DangerRoomEndLevelWin *)0x0) {
    DangerRoomEndLevelWin::StartAnim(this_01,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::OnResetCallback(UIMessageBox*, int) */

void DangerRoomManager::OnResetCallback(UIMessageBox *param_1,int param_2)

{
  LuaFunctionCallback *pLVar1;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  local_31 = false;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
  std::string::string(asStack_30,"luaDangerRoom:OnResetDangerRoom");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,0,&local_31);
  Lua::LuaFunctionCallback::End(pLVar1);
  std::string::~string(asStack_30);
  nop();
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::RequestSpecialOfferExtraUI() */

void DangerRoomManager::RequestSpecialOfferExtraUI(void)

{
  Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::GetInstancePtr();
  DangerRoomSpecialOfferExtraManager::RequestNetwork();
  return;
}


/* DangerRoomManager::OnNarrationFinished() */

void DangerRoomManager::OnNarrationFinished(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  WorldMap *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_04a80654(*(undefined4 *)(lVar2 + 0x40));
  if ((iVar1 == 0x35) &&
     (this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp), this_00 != (WorldMap *)0x0)) {
    WorldMap::ForceTutorialToFinish(this_00);
    return;
  }
  return;
}


/* DangerRoomManager::GetDangerRoomInfo(bool) const */

void __thiscall DangerRoomManager::GetDangerRoomInfo(DangerRoomManager *this,bool param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (!param_1) {
    PlayerInfo::GetDangerRoomInfo(this_01,(string *)&DAT_06b7e9c0);
    return;
  }
  PlayerInfo::GetDangerRoomInfo(this_01,(string *)&DAT_06b7e848);
  return;
}


/* DangerRoomManager::RestartLevel() */

void __thiscall DangerRoomManager::RestartLevel(DangerRoomManager *this)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  long lVar2;
  
  cVar1 = IsTrainingMode(this);
  if (cVar1 == '\0') {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    lVar2 = GetDangerRoomInfo(this,false);
    INetworkMsgProcess::RequestDangerRoomStartData(this_01,*(int *)(lVar2 + 8),1);
    return;
  }
  OnResponceRestartLevel();
  return;
}


/* DangerRoomManager::GetCurrentDangerRoomInfo() const */

void __thiscall DangerRoomManager::GetCurrentDangerRoomInfo(DangerRoomManager *this)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_04a8068c(*(undefined4 *)(this + 0x2b8));
  uVar2 = (undefined1)iVar1;
  if (iVar1 != 1) {
    uVar2 = false;
  }
  GetDangerRoomInfo(this,(bool)uVar2);
  return;
}


/* DangerRoomManager::SetDangerRoomInfo(DangerRoomInfo const&, bool) */

void __thiscall
DangerRoomManager::SetDangerRoomInfo(DangerRoomManager *this,DangerRoomInfo *param_1,bool param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (!param_2) {
    PlayerInfo::SetDangerRoomInfo(this_01,(string *)&DAT_06b7e9c0,param_1);
    return;
  }
  PlayerInfo::SetDangerRoomInfo(this_01,(string *)&DAT_06b7e848,param_1);
  return;
}


/* DangerRoomManager::IsAdvertisementEnable() */

bool DangerRoomManager::IsAdvertisementEnable(void)

{
  byte bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  long lVar4;
  long *plVar5;
  
  if (((DAT_06b7ea10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7ea10), iVar2 != 0)) {
    DAT_06b7e810 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b7ea10);
  }
  if (((DAT_06b7ea60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7ea60), iVar2 != 0)) {
    plVar5 = (long *)EASquared::Instance();
    DAT_06b7ea49 = (**(code **)(*plVar5 + 0xb8))(plVar5,0x2a9a);
    __cxa_guard_release(&DAT_06b7ea60);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar4 = PlayerInfo::GetAdvertisementWatchTime(pPVar3,8);
  bVar1 = TimeUtil::IsToday(lVar4);
  return DAT_06b7e810 != '\0' && bVar1 < DAT_06b7ea49;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::IsAdvertisementEnable_ChallengeTimeReset() */

void DangerRoomManager::IsAdvertisementEnable_ChallengeTimeReset(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  long lVar5;
  long *plVar6;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b7ea50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b7ea50), iVar3 != 0)) {
    DAT_06b7ea48 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b7ea50);
  }
  if (((DAT_06b7ea68 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b7ea68), iVar3 != 0)) {
    plVar6 = (long *)EASquared::Instance();
    DAT_06b7e840 = (**(code **)(*plVar6 + 0xb8))(plVar6,0x2a9b);
    __cxa_guard_release(&DAT_06b7ea68);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar5 = PlayerInfo::GetAdvertisementWatchTime(pPVar4,9);
  bVar2 = TimeUtil::IsToday(lVar5);
  LawnApp::GetRealBeijingTime(gLawnApp);
  local_10 = FUN_04a806b0();
  lVar5 = LawnApp::BeijingTime(gLawnApp,&local_10);
  bVar1 = 0;
  if (DAT_06b7ea48 != '\0') {
    bVar1 = bVar2 < (*(int *)(lVar5 + 0x18) == 0 || *(int *)(lVar5 + 0x18) == 6) & DAT_06b7e840;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DangerRoomManager::SaveSelectedPlantList(std::vector<int, std::allocator<int> >&) */

void __thiscall DangerRoomManager::SaveSelectedPlantList(DangerRoomManager *this,vector *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  LocalProfileSaveData::SaveDangerRoomSelectedList(pPVar1,param_1);
  return;
}


/* DangerRoomManager::SetCurrentTrainingWorld(std::string const&) */

void DangerRoomManager::SetCurrentTrainingWorld(string *param_1)

{
  ProfileMgr *this;
  string *psVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar1 = (string *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::SetCurrentTrainingWorldName(psVar1);
  return;
}


/* DangerRoomManager::GetCurrentTrainingWorld() */

void __thiscall DangerRoomManager::GetCurrentTrainingWorld(DangerRoomManager *this)

{
  ProfileMgr *this_00;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetCurrentTrainingWorldName();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall DangerRoomManager::onAdsFinish(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"DangerRoomManager::onAdsFinish %d");
  if (param_2 == 0) {
    uVar1 = LawnApp::GetRealServerTime(gLawnApp);
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar2,8,uVar1,1);
    std::string::string(asStack_10,"EndlessShopRefresh");
    Cpp2Lua(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::onAdsFinish_ChallengeTimeReset(EASquaredAdFinishedReason::EASquaredAdFinishedReason)
    */

void __thiscall DangerRoomManager::onAdsFinish_ChallengeTimeReset(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"DangerRoomManager::onAdsFinish_ChallengeTimeReset %d");
  if (param_2 == 0) {
    uVar1 = LawnApp::GetRealServerTime(gLawnApp);
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar2,9,uVar1,1);
    std::string::string(asStack_10,"DangerRoomChallengeTimeReset");
    Cpp2Lua(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetHighestTrainingRecord(std::string const&) */

void __thiscall DangerRoomManager::GetHighestTrainingRecord(DangerRoomManager *this,string *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetDangerRoomTrainingRecord(this_01,param_1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetMowerNum() const */

void __thiscall DangerRoomManager::GetMowerNum(DangerRoomManager *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04a82424(*(undefined8 *)(this + 0x38));
  local_10 = FUN_04a82474(*(undefined8 *)(this + 0x40));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (0 < *piVar2) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::PlayAds() */

void __thiscall DangerRoomManager::PlayAds(DangerRoomManager *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 != '\0') {
    plVar2 = (long *)EASquared::Instance();
    pcVar3 = *(code **)(*plVar2 + 0x28);
    std::string::string(asStack_58,"DangerRoomManager::EndlessShopRefresh");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdsFinish);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<DangerRoomManager,void(DangerRoomManager::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,aCStack_50);
    (*pcVar3)(plVar2,asStack_58,aDStack_38,0,3,0x2a9a);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::PlayAds_ChallengeTimeReset() */

void __thiscall DangerRoomManager::PlayAds_ChallengeTimeReset(DangerRoomManager *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 != '\0') {
    plVar2 = (long *)EASquared::Instance();
    pcVar3 = *(code **)(*plVar2 + 0x28);
    std::string::string(asStack_58,"DangerRoomManager::PlayAds_ChallengeTimeReset");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdsFinish_ChallengeTimeReset);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<DangerRoomManager,void(DangerRoomManager::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,aCStack_50);
    (*pcVar3)(plVar2,asStack_58,aDStack_38,0,3,0x2a9b);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::ShowAD(int) */

void __thiscall DangerRoomManager::ShowAD(DangerRoomManager *this,int param_1)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,param_1);
  return;
}


/* DangerRoomManager::GetLeftADWatchCount(int) */

void __thiscall DangerRoomManager::GetLeftADWatchCount(DangerRoomManager *this,int param_1)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::GetLeftADWatchCount(pAVar1,param_1);
  return;
}


/* DangerRoomManager::CanWatchAD(int) */

void __thiscall DangerRoomManager::CanWatchAD(DangerRoomManager *this,int param_1)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::CanWatchAD(pAVar1,param_1);
  return;
}


/* DangerRoomManager::SetADWatchCount(int, int) */

void __thiscall DangerRoomManager::SetADWatchCount(DangerRoomManager *this,int param_1,int param_2)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::SetADWatchCount(pAVar1,param_1,param_2);
  return;
}


/* DangerRoomManager::GetCurrentPlantNumList() const */

vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> * __thiscall
DangerRoomManager::GetCurrentPlantNumList(DangerRoomManager *this)

{
  char cVar1;
  vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *pvVar2;
  
  cVar1 = std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::empty
                    ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)
                     (this + 0x248));
  if (cVar1 != '\0') {
    pvVar2 = (vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)
             RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)this);
    return pvVar2;
  }
  return (vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x248);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::DangerRoomManager() */

void __thiscall DangerRoomManager::DangerRoomManager(DangerRoomManager *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  DangerRoomPropertySheet *this_00;
  ResourceInfo *pRVar3;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  RtId aRStack_98 [8];
  RtName aRStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<DangerRoomManager>::LazySingleton((LazySingleton<DangerRoomManager> *)this);
  *(undefined ***)this = &PTR__DangerRoomManager_0693ed50;
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  S2C_DangerRoomRecord::S2C_DangerRoomRecord((S2C_DangerRoomRecord *)(this + 0x18));
  this[0xd0] = (DangerRoomManager)0x0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  S2C_DangerRoomPropertySheet::S2C_DangerRoomPropertySheet
            ((S2C_DangerRoomPropertySheet *)(this + 0x110));
  this[0x1f8] = (DangerRoomManager)0x0;
  this[0x1f9] = (DangerRoomManager)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x260));
  *(undefined4 *)(this + 0x278) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x280));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x298));
  std::string::string((string *)(this + 0x2b0),"");
  nop();
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<DangerRoomManager,void(DangerRoomManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyItemFinish);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<DangerRoomManager,void(DangerRoomManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::BuyItemFinish,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifySkipDangerRoom);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<DangerRoomManager,void(DangerRoomManager::*)(int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifySkipDangerRoom,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyChallengeReward);
  local_110 = local_28;
  local_120 = local_38;
  uStack_118 = uStack_30;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<DangerRoomManager,void(DangerRoomManager::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::NotifyChallengeReward,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_140 = local_20;
  uStack_138 = uStack_18;
  local_130 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DangerRoomManager,void(DangerRoomManager::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_140);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_90,L"DefaultDangerRoomProps");
  PVZDB::GetIdByAlias(aRStack_98,uVar2,5,aRStack_90);
  Sexy::RtName::~RtName(aRStack_90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,(RtWeakPtrBase *)aRStack_98);
  this_00 = ::operator_new(0x1f0);
  DangerRoomPropertySheet::DangerRoomPropertySheet(this_00);
  *(DangerRoomPropertySheet **)(this + 0x108) = this_00;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_90);
  DangerRoomPropertySheet::Copy(this_00,(DangerRoomPropertySheet *)pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtId::~RtId(aRStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::GetSelectedPlantList(std::vector<int, std::allocator<int> >&) */

void __thiscall DangerRoomManager::GetSelectedPlantList(DangerRoomManager *this,vector *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  vector *pvVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar2 = (vector *)LocalProfileSaveData::GetDangerRoomSelectedList(pPVar1);
  std::vector<int,std::allocator<int>>::operator=((vector<int,std::allocator<int>> *)param_1,pvVar2)
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::LoadPlantNumList() */

void __thiscall DangerRoomManager::LoadPlantNumList(DangerRoomManager *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GetSelectedPlantList(this,(vector *)avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::StartLevel() */

void __thiscall DangerRoomManager::StartLevel(DangerRoomManager *this)

{
  int iVar1;
  DangerRoomInfo *pDVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  long lVar3;
  DangerRoomInfo aDStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BaseReadWithoutBufferTask::GetNumBytesRead((BaseReadWithoutBufferTask *)this);
  if (iVar1 == 0) {
    pDVar2 = (DangerRoomInfo *)GetDangerRoomInfo(this,false);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar2);
    DangerRoomInfo::RestartRoom();
    SetDangerRoomInfo(this,aDStack_b0,false);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  lVar3 = GetDangerRoomInfo(this,false);
  INetworkMsgProcess::RequestDangerRoomStartData(this_01,*(int *)(lVar3 + 8),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetCurrentTrainingLevel() const */

void __thiscall DangerRoomManager::GetCurrentTrainingLevel(DangerRoomManager *this)

{
  DangerRoomInfo *pDVar1;
  DangerRoomInfo aDStack_b0 [8];
  undefined4 local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = (DangerRoomInfo *)GetDangerRoomInfo(this,true);
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar1);
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
}


/* DangerRoomManager::GetNextTrainingLevel() const */

int __thiscall DangerRoomManager::GetNextTrainingLevel(DangerRoomManager *this)

{
  int iVar1;
  
  iVar1 = GetCurrentTrainingLevel(this);
  return iVar1 + 1;
}


/* DangerRoomManager::GetCurrentNextLevel() const */

void __thiscall DangerRoomManager::GetCurrentNextLevel(DangerRoomManager *this)

{
  int iVar1;
  
  iVar1 = FUN_04a8068c(*(undefined4 *)(this + 0x2b8));
  if (iVar1 != 1) {
    GetNextLevel(this);
    return;
  }
  GetNextTrainingLevel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::PickupZombieLevelForCurrentLevel() */

void __thiscall DangerRoomManager::PickupZombieLevelForCurrentLevel(DangerRoomManager *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int local_14;
  int local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsTrainingMode(this);
  if (cVar1 == '\0') {
    iVar2 = GetNextLevel(this);
  }
  else {
    iVar2 = GetNextTrainingLevel(this);
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0.0;
  DangerRoomPropertySheet::CalcZombieLevel
            (*(DangerRoomPropertySheet **)(this + 0x108),iVar2,&local_14,&local_10,&local_c);
  iVar2 = local_10;
  if ((local_14 != local_10) && (fVar3 = (float)Sexy::Rand(1.0), iVar2 = local_10, local_c <= fVar3)
     ) {
    iVar2 = local_14;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::SetCurrentTrainingLevel(int) */

void __thiscall DangerRoomManager::SetCurrentTrainingLevel(DangerRoomManager *this,int param_1)

{
  DangerRoomInfo *pDVar1;
  DangerRoomInfo aDStack_b0 [8];
  int local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = (DangerRoomInfo *)GetDangerRoomInfo(this,true);
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar1);
  local_a8 = param_1;
  SetDangerRoomInfo(this,aDStack_b0,true);
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::HasTrainingInfo() */

void __thiscall DangerRoomManager::HasTrainingInfo(DangerRoomManager *this)

{
  DangerRoomInfo *pDVar1;
  DangerRoomInfo aDStack_b0 [8];
  int local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = (DangerRoomInfo *)GetDangerRoomInfo(this,true);
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar1);
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0 < local_a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::OnResetDangerRoom() */

void __thiscall DangerRoomManager::OnResetDangerRoom(DangerRoomManager *this)

{
  UIMessageBox *this_00;
  DangerRoomInfo *pDVar1;
  string asStack_e8 [8];
  Delegate2<UIMessageBox*,int> aDStack_e0 [48];
  string asStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,2);
    std::string::string(asStack_e8,"[DANGERROOM_RESET_SUCCESS]");
    std::string::string(asStack_b0,"[REVIVE_TIP]");
    UIMessageBox::SetMessage(this_00,asStack_e8,asStack_b0);
    std::string::~string(asStack_b0);
    nop();
    std::string::~string(asStack_e8);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnResetCallback);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<DangerRoomManager,void(DangerRoomManager::*)(UIMessageBox*,int)>
              (aDStack_e0,asStack_b0);
    UIMessageBox::SetCallback(this_00,aDStack_e0);
  }
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x200));
  pDVar1 = (DangerRoomInfo *)GetDangerRoomInfo(this,false);
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)asStack_b0,pDVar1);
  DangerRoomInfo::RestartRoom();
  SetDangerRoomInfo(this,(DangerRoomInfo *)asStack_b0,false);
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::OnNotifySkipDangerRoom(int, S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo
   const*) */

void DangerRoomManager::OnNotifySkipDangerRoom
               (int param_1,S2C_DangerRoomSkipLevel *param_2,S2C_PlayerInfo *param_3)

{
  int iVar1;
  TGALogMgr *pTVar2;
  string *__n;
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [24];
  string asStack_c0 [8];
  string asStack_b8 [72];
  string asStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((int)param_2 == 0) &&
     (iVar1 = BaseReadWithoutBufferTask::GetNumBytesRead
                        ((BaseReadWithoutBufferTask *)(ulong)(uint)param_1), iVar1 == 0)) {
    OnResetDangerRoom((DangerRoomManager *)(ulong)(uint)param_1);
    std::string::string(asStack_f0,"Store");
    std::string::string(asStack_e8,"Endless_Buy_Times");
    std::string::string(asStack_e0,"0");
    std::string::string(asStack_d8,"");
    std::string::string(asStack_70,"");
    __n = asStack_e0;
    BehaviorLog::itemPurchaseEx(asStack_f0,asStack_e8,asStack_e0,asStack_d8,asStack_70);
    std::string::~string(asStack_70);
    nop();
    std::string::~string(asStack_d8);
    nop();
    std::string::~string(asStack_e0);
    nop();
    std::string::~string(asStack_e8);
    nop();
    std::string::~string(asStack_f0);
    nop();
    TGALogEndlessData::TGALogEndlessData((TGALogEndlessData *)asStack_d8);
    std::string::append(asStack_d8,"7",(size_t)__n);
    std::string::append(asStack_c0,"0",(size_t)__n);
    std::string::append(asStack_b8,"0",(size_t)__n);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogEndlessData::TGALogEndlessData
              ((TGALogEndlessData *)asStack_70,(TGALogEndlessData *)asStack_d8);
    TGALogMgr::LogEndless(pTVar2,asStack_70);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)asStack_70);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)asStack_d8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::SetRecord(S2C_DangerRoomRecord const&) */

void __thiscall DangerRoomManager::SetRecord(DangerRoomManager *this,S2C_DangerRoomRecord *param_1)

{
  S2C_DangerRoomRecord::operator=((S2C_DangerRoomRecord *)(this + 0x18),param_1);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::SetDangerRoomMaxLevel,*(int *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetFavoritePlantList(std::vector<int, std::allocator<int> >&) */

void __thiscall DangerRoomManager::GetFavoritePlantList(DangerRoomManager *this,vector *param_1)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 uVar3;
  NameMapperBase *this_02;
  int local_24;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)LocalProfileSaveData::GetSeedChooserFavorites(pPVar2);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    local_24 = NameMapperBase::GetIdForName(this_02,asStack_20);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_1,&local_24);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::InitProps(S2C_DangerRoomPropertySheet const*) */

void __thiscall
DangerRoomManager::InitProps(DangerRoomManager *this,S2C_DangerRoomPropertySheet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  long lVar16;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  lVar16 = *(long *)(this + 0x108);
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar14 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  local_8 = ___stack_chk_guard;
  this[0x1f9] = (DangerRoomManager)0x1;
  uVar9 = *(undefined4 *)(param_1 + 0x2c);
  uVar10 = *(undefined4 *)(param_1 + 0x38);
  uVar11 = *(undefined4 *)(param_1 + 0x3c);
  uVar12 = *(undefined4 *)(param_1 + 0x40);
  uVar13 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(lVar16 + 0x158) = uVar2;
  *(undefined4 *)(lVar16 + 0x15c) = uVar4;
  *(undefined4 *)(lVar16 + 0x160) = uVar5;
  *(undefined4 *)(lVar16 + 0x164) = uVar7;
  *(undefined4 *)(lVar16 + 0x168) = uVar8;
  *(undefined4 *)(lVar16 + 0x16c) = uVar13;
  *(undefined4 *)(lVar16 + 0x184) = uVar12;
  *(undefined4 *)(lVar16 + 0x188) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(lVar16 + 0x170) = uVar9;
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(lVar16 + 0x18c) = uVar3;
  *(undefined4 *)(lVar16 + 0x17c) = uVar10;
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  uVar7 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(lVar16 + 0x174) = uVar14;
  *(undefined4 *)(lVar16 + 0x180) = uVar11;
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  uVar9 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(lVar16 + 0x178) = uVar6;
  *(undefined4 *)(lVar16 + 0x1a4) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(lVar16 + 0x194) = uVar1;
  *(undefined4 *)(lVar16 + 0x198) = uVar5;
  *(undefined4 *)(lVar16 + 0x19c) = uVar8;
  *(undefined4 *)(lVar16 + 0x1a0) = uVar7;
  *(undefined4 *)(lVar16 + 0x1a8) = uVar9;
  *(undefined4 *)(lVar16 + 400) = uVar2;
  *(undefined4 *)(lVar16 + 0x1ac) = uVar4;
  *(undefined4 *)(lVar16 + 0x1b0) = uVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(lVar16 + 0x110),(vector *)(param_1 + 0xb0));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(*(long *)(this + 0x108) + 0xf8),
             (vector *)(param_1 + 0x98));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(*(long *)(this + 0x108) + 0x128),
             (vector *)(param_1 + 200));
  lVar16 = *(long *)(this + 0x108);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(lVar16 + 0x1bc) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(lVar16 + 0x1b4) = uVar1;
  *(undefined4 *)(lVar16 + 0x1b8) = uVar2;
  *(undefined4 *)(lVar16 + 0x1e8) = 0x50;
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::clear
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(lVar16 + 200));
  local_20 = FUN_04a825e8(*(undefined8 *)(param_1 + 0x80));
  local_18 = FUN_04a82638(*(undefined8 *)(param_1 + 0x88));
  while (bVar15 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar15)
  {
    lVar16 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::PrimeTextExtraParameters::PrimeTextExtraParameters((PrimeTextExtraParameters *)&local_10);
    local_10 = *(undefined4 *)(lVar16 + 0x14);
    local_c = *(undefined4 *)(lVar16 + 0x18);
    std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::push_back
              ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)
               (*(long *)(this + 0x108) + 200),(ZombieLevelStat *)&local_10);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::RebuildPlantNumList(std::vector<int, std::allocator<int> > const&) */

void __thiscall DangerRoomManager::RebuildPlantNumList(DangerRoomManager *this,vector *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::clear
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x248)
            );
  puVar2 = (undefined8 *)RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)this);
  local_40 = FUN_04a82424(*(undefined8 *)param_1);
  local_38 = FUN_04a82474(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_44 = *puVar3;
    uVar4 = FUN_04a82384(*puVar2);
    uVar5 = FUN_04a823d4(puVar2[1]);
    local_30 = FUN_04a83b20(uVar4,uVar5,&local_44);
    local_28[0] = FUN_04a823d4(puVar2[1]);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_28);
    if (bVar1) {
      S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
      local_14 = local_44;
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      local_10 = *(undefined4 *)(lVar6 + 0x18);
      std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::push_back
                ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)
                 (this + 0x248),(S2C_DangerRoomPlantNum *)local_28);
      S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::RebuildNewPlantNumList(std::vector<int, std::allocator<int> > const&) */

void __thiscall DangerRoomManager::RebuildNewPlantNumList(DangerRoomManager *this,vector *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  undefined8 local_28 [2];
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  puVar2 = (undefined8 *)RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)this);
  local_58 = FUN_04a82424(*(undefined8 *)param_1);
  local_50 = FUN_04a82474(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    local_5c = *puVar3;
    uVar4 = FUN_04a82384(*puVar2);
    uVar5 = FUN_04a823d4(puVar2[1]);
    local_48 = FUN_04a83cf4(uVar4,uVar5,&local_5c);
    local_28[0] = FUN_04a823d4(puVar2[1]);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)local_28);
    if (bVar1) {
      S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
      local_14 = local_5c;
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      local_10 = *(undefined4 *)(lVar6 + 0x18);
      std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::push_back
                ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)avStack_40
                 ,(S2C_DangerRoomPlantNum *)local_28);
      S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_58);
  }
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x68),
             (vector *)avStack_40);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::Reset() */

void __thiscall DangerRoomManager::Reset(DangerRoomManager *this)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_8 = ___stack_chk_guard;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  S2C_DangerRoomRecord::S2C_DangerRoomRecord((S2C_DangerRoomRecord *)&local_c0);
  S2C_DangerRoomRecord::operator=
            ((S2C_DangerRoomRecord *)(this + 0x18),(S2C_DangerRoomRecord *)&local_c0);
  S2C_DangerRoomRecord::~S2C_DangerRoomRecord((S2C_DangerRoomRecord *)&local_c0);
  this[0xd0] = (DangerRoomManager)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  this[0x1f8] = (DangerRoomManager)0x0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x200));
  this[0x1f9] = (DangerRoomManager)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = 100;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomManager::~DangerRoomManager() */

void __thiscall DangerRoomManager::~DangerRoomManager(DangerRoomManager *this)

{
  *(undefined ***)this = &PTR__DangerRoomManager_0693ed50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
  }
  std::string::~string((string *)(this + 0x2b0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x298));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x280));
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x260)
            );
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x248)
            );
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x230));
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x200));
  S2C_DangerRoomPropertySheet::~S2C_DangerRoomPropertySheet
            ((S2C_DangerRoomPropertySheet *)(this + 0x110));
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0xe8))
  ;
  S2C_DangerRoomRecord::~S2C_DangerRoomRecord((S2C_DangerRoomRecord *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  Sexy::LazySingleton<DangerRoomManager>::~LazySingleton((LazySingleton<DangerRoomManager> *)this);
  return;
}


/* DangerRoomManager::~DangerRoomManager() */

void __thiscall DangerRoomManager::~DangerRoomManager(DangerRoomManager *this)

{
  ~DangerRoomManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::IsOpened() */

void DangerRoomManager::IsOpened(void)

{
  byte bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"egypt13");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar3);
  std::string::~string(asStack_90);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 & local_70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::ShowMainDialog() */

void __thiscall DangerRoomManager::ShowMainDialog(DangerRoomManager *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  LuaFunctionCallback *this_01;
  ProfileMgr *this_02;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  CrazyNPCManager *pCVar5;
  undefined8 uVar6;
  bool local_81;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178((wstring *)asStack_70,L"[NETWORK_NOT_CONNECTED_TITLE]",asStack_80);
    FUN_05478178((wstring *)&local_58,L"[NETWORK_NOT_CONNECTED_TEXT]",asStack_78);
    pPVar4 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(this_00,(wstring *)asStack_70,(wstring *)&local_58);
    FUN_05476c50((wstring *)&local_58);
    nop();
    FUN_05476c50((wstring *)asStack_70);
    nop();
    FUN_05478178((wstring *)asStack_70,L"[DIALOG_STRING_OK]",asStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)&local_58);
    PVZ2UIDialog::AddButton(pPVar4,(wstring *)asStack_70,aDStack_38,0);
    FUN_05476c50((wstring *)asStack_70);
    nop();
    uVar6 = 0;
  }
  else {
    cVar1 = IsOpened();
    if (cVar1 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      NetworkHelper::MakeServerPlantBanList(0x297e,this + 0x280);
      local_81 = false;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      this_01 = (LuaFunctionCallback *)
                Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_58);
      std::string::string(asStack_70,"luaDangerRoom:ShowDialog");
      Lua::LuaFunctionCallback::Execute(this_01,asStack_70,1,&local_81);
      std::string::~string(asStack_70);
      nop();
      if (local_81 != false) {
        uVar6 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&local_58);
      }
      Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&local_58);
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar3 = ProfileMgr::GetCurrentProfile(this_02);
      iVar2 = FUN_04a80654(*(undefined4 *)(lVar3 + 0x40));
      if (iVar2 == 0x35) {
        pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        std::string::string(asStack_80,"NEW_DANGER_ROOM_INTRO");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnNarrationFinished);
        Sexy::Delegate0::Delegate0<DangerRoomManager,void(DangerRoomManager::*)()>
                  (aDStack_38,asStack_70);
        std::string::string(asStack_78,"");
        CrazyNPCManager::StartNarrativeID(pCVar5,asStack_80,aDStack_38,asStack_78);
        std::string::~string(asStack_78);
        nop();
        std::string::~string(asStack_80);
        nop();
      }
      LocalProfileSaveData::UpdateDangerRoomTipsTime();
      Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::HandleLevelEnd(DangerRoomInfo&) */

void __thiscall DangerRoomManager::HandleLevelEnd(DangerRoomManager *this,DangerRoomInfo *param_1)

{
  int iVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  char *__s;
  undefined8 uVar4;
  TGALogMgr *pTVar5;
  int *piVar6;
  size_t __n;
  string asStack_e0 [8];
  TGALogEndlessData aTStack_d8 [96];
  undefined1 auStack_78 [8];
  DString aDStack_70 [8];
  int local_68;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 == 1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    piVar6 = eastl::max_alt<int>((int *)(param_1 + 0xc),(int *)(param_1 + 8));
    *(int *)(param_1 + 0xc) = *piVar6;
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    PlayerInfo::GetCurrentTrainingWorldName();
    iVar1 = GetHighestTrainingRecord(this,(string *)aDStack_70);
    std::string::~string((string *)aDStack_70);
    if (iVar1 < *(int *)(param_1 + 8)) {
      PlayerInfo::GetCurrentTrainingWorldName();
      PlayerInfo::SetDangerRoomTrainingRecord(pPVar3,(string *)aDStack_70,*(int *)(param_1 + 8));
      std::string::~string((string *)aDStack_70);
    }
  }
  __n = 1;
  SetDangerRoomInfo(this,param_1,true);
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
  TGALogEndlessData::TGALogEndlessData(aTStack_d8);
  std::string::append((string *)aTStack_d8,"12",__n);
  iVar1 = PlayerInfo::GetCurrentArtifact(pPVar3);
  DString::DString(aDStack_70,iVar1);
  __s = (char *)DString::c_str(aDStack_70);
  std::string::string(asStack_e0,__s);
  nop();
  DString::~DString(aDStack_70);
  PlayerInfo::GetArtifactInfoByID((int)pPVar3);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)aDStack_70);
  FUN_05475ad8(asStack_e0,&DAT_05593348);
  DString::DString(aDStack_70,local_68);
  uVar4 = DString::c_str(aDStack_70);
  FUN_05475ad8(asStack_e0,uVar4);
  DString::~DString(aDStack_70);
  thunk_FUN_05475e00(auStack_78,asStack_e0);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogEndlessData::TGALogEndlessData((TGALogEndlessData *)aDStack_70,aTStack_d8);
  TGALogMgr::LogEndless(pTVar5,aDStack_70);
  TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)aDStack_70);
  std::string::~string(asStack_e0);
  TGALogEndlessData::~TGALogEndlessData(aTStack_d8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::RequestAds_Reset(int) */

void __thiscall DangerRoomManager::RequestAds_Reset(DangerRoomManager *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  NetworkMgr *pNVar3;
  ProfileMgr *this_00;
  long lVar4;
  string *this_01;
  char *__s;
  DNetwork *this_02;
  undefined1 *__n;
  undefined1 auStack_1e8 [8];
  string asStack_1e0 [8];
  string asStack_1d8 [16];
  function<bool(Sexy::Touch_const&)> afStack_1c8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  __n = auStack_1e8;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1e0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1e0);
  pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(pNVar3);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(uVar2,asStack_1d8);
  std::string::~string(asStack_1d8);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1e0);
  pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(pNVar3);
  Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
  FUN_05474278(uVar2,asStack_1d8);
  std::string::~string(asStack_1d8);
  std::string::~string(asStack_1e0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1d8,"");
  FUN_05462980(auStack_178,asStack_1d8);
  std::string::~string(asStack_1d8);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = FUN_04a80650(*(undefined4 *)(lVar4 + 0x604));
  FUN_0546065c(auStack_168,uVar1);
  std::string::string(asStack_1e0,"pi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1e0);
  FUN_05462824(asStack_1d8,auStack_178);
  FUN_05474278(uVar2,asStack_1d8);
  std::string::~string(asStack_1d8);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"oi");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1e0);
  DString::DString((DString *)asStack_1d8,param_1);
  __s = (char *)DString::c_str((DString *)asStack_1d8);
  std::string::append(this_01,__s,(size_t)__n);
  DString::~DString((DString *)asStack_1d8);
  std::string::~string(asStack_1e0);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_1e0,"V921");
  FUN_04a80e68(afStack_1c8,this);
  std::string::string(asStack_1d8,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_1e0,(map *)amStack_1a8,30.0,(function *)afStack_1c8,true,true,
             asStack_1d8,0);
  std::string::~string(asStack_1d8);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_1c8);
  std::string::~string(asStack_1e0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetPlantNum(int) const */

void __thiscall DangerRoomManager::GetPlantNum(DangerRoomManager *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerPlantID::ServerPlantID((ServerPlantID *)local_18,param_1);
  iVar2 = ImageLib::Image::GetWidth((Image *)local_18);
  local_20 = FUN_04a82384(*(undefined8 *)(this + 0x68));
  local_18[0] = FUN_04a823d4(*(undefined8 *)(this + 0x70));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    uVar3 = (uint)bVar1;
    if (!bVar1) {
LAB_04a85e28:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*(int *)(lVar4 + 0x14) == iVar2) {
      uVar3 = *(uint *)(lVar4 + 0x18);
      goto LAB_04a85e28;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetPlantNum(std::string const&) const */

void __thiscall DangerRoomManager::GetPlantNum(DangerRoomManager *this,string *param_1)

{
  int iVar1;
  ServerPlantID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerPlantID::ServerPlantID(aSStack_18,param_1);
  iVar1 = ImageLib::Image::GetWidth((Image *)aSStack_18);
  GetPlantNum(this,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::IsHavePlant(int) const */

void __thiscall DangerRoomManager::IsHavePlant(DangerRoomManager *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerPlantID::ServerPlantID((ServerPlantID *)local_18,param_1);
  iVar2 = ImageLib::Image::GetWidth((Image *)local_18);
  local_20 = FUN_04a82384(*(undefined8 *)(this + 0x68));
  local_18[0] = FUN_04a823d4(*(undefined8 *)(this + 0x70));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if ((!bVar1) ||
       (lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20),
       *(int *)(lVar3 + 0x14) == iVar2)) break;
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::SetPlantOnBoard(std::string const&) */

void __thiscall DangerRoomManager::SetPlantOnBoard(DangerRoomManager *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerPlantID::ServerPlantID((ServerPlantID *)local_18,param_1);
  iVar2 = ImageLib::Image::GetWidth((Image *)local_18);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x68));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x68));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar1) {
LAB_04a8601c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*(int *)(lVar3 + 0x14) == iVar2) {
      local_28 = 0;
      local_24 = *(int *)(lVar3 + 0x18) + -1;
      piVar4 = eastl::max_alt<int>(&local_28,&local_24);
      *(int *)(lVar3 + 0x18) = *piVar4;
      goto LAB_04a8601c;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::SetPlantOnBoard(std::string const&, int) */

void __thiscall
DangerRoomManager::SetPlantOnBoard(DangerRoomManager *this,string *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int local_34 [4];
  int local_24;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_2;
  ServerPlantID::ServerPlantID((ServerPlantID *)local_18,param_1);
  iVar2 = ImageLib::Image::GetWidth((Image *)local_18);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x68));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x68));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar1) {
LAB_04a8610c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*(int *)(lVar3 + 0x14) == iVar2) {
      local_24 = 0;
      piVar4 = eastl::max_alt<int>(&local_24,local_34);
      *(int *)(lVar3 + 0x18) = *piVar4;
      goto LAB_04a8610c;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::CheckPlantList(bool) */

void DangerRoomManager::CheckPlantList(bool param_1)

{
  set<int,std::less<int>,std::allocator<int>> *this;
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  WorldMap *this_01;
  vector *pvVar5;
  int *piVar6;
  char in_w1;
  int local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0 [2];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_190);
  if (in_w1 == '\0') {
    GetSelectedPlantList((DangerRoomManager *)(ulong)param_1,(vector *)asStack_190);
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (WorldMap *)ProfileMgr::GetCurrentProfile(this_00);
    pvVar5 = (vector *)WorldMap::GetActionsMgr(this_01);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)asStack_190,pvVar5);
  }
  FUN_054603b8(auStack_168,&DAT_05593308);
  bVar1 = true;
  this = (set<int,std::less<int>,std::allocator<int>> *)
         ((DangerRoomManager *)(ulong)param_1 + 0x200);
  local_1b8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)asStack_190);
  local_1b0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)asStack_190);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_1b8,(__normal_iterator *)&local_1b0), bVar2)
  {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1b8);
    ServerPlantID::ServerPlantID((ServerPlantID *)local_1a0,*piVar6);
    local_1bc = ImageLib::Image::GetWidth((Image *)local_1a0);
    local_1a8 = std::set<int,std::less<int>,std::allocator<int>>::find(this,&local_1bc);
    local_1a0[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_1a8,(exception_ptr *)local_1a0)
    ;
    if (cVar3 != '\0') {
      if (!bVar1) {
        FUN_054603b8(auStack_168,&DAT_05593348);
      }
      bVar1 = false;
      FUN_0546065c(auStack_168,local_1bc);
      std::set<int,std::less<int>,std::allocator<int>>::insert(this,&local_1bc);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_1b8);
  }
  FUN_054603b8(auStack_168,&DAT_05593350);
  FUN_05462824(auStack_178);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetInitPlantList(std::vector<int, std::allocator<int> >&) */

void __thiscall DangerRoomManager::GetInitPlantList(DangerRoomManager *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  ProfileMgr *this_01;
  WorldMap *this_02;
  undefined8 *puVar3;
  S2C_DangerRoomPlantNum *pSVar4;
  vector *pvVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [24];
  ServerPlantID aSStack_40 [24];
  undefined8 local_28 [2];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (WorldMap *)ProfileMgr::GetCurrentProfile(this_01);
  puVar3 = (undefined8 *)RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)this);
  local_80 = FUN_04a82384(*puVar3);
  local_78 = FUN_04a823d4(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    pSVar4 = (S2C_DangerRoomPlantNum *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28,pSVar4);
    ServerPlantID::ServerPlantID(aSStack_40,local_14);
    uVar2 = ImageLib::Image::GetWidth((Image *)aSStack_40);
    local_88 = CONCAT44(local_88._4_4_,uVar2);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_70,(int *)&local_88);
    S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_80);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x280);
  pvVar5 = (vector *)WorldMap::GetActionsMgr(this_02);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)aSStack_40,pvVar5)
  ;
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aSStack_40);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aSStack_40);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    ServerPlantID::ServerPlantID((ServerPlantID *)local_28,*piVar6);
    local_8c = ImageLib::Image::GetWidth((Image *)local_28);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_78 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar7,uVar8,&local_8c);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_78,(__normal_iterator *)local_28);
    if (bVar1) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_58,&local_8c);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_88);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_28);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_70);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_70);
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar7,uVar8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_58);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_58);
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar7,uVar8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_70);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_70);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_58);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_58);
  uVar11 = std::
           __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                     ((TaskResource **)local_28);
  std::
  set_intersection<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
            (uVar7,uVar8,uVar9,uVar10,uVar11);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)param_1,(vector *)local_28);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_28);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aSStack_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_58);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::PlayerReachRequiredPlantNum() */

void __thiscall DangerRoomManager::PlayerReachRequiredPlantNum(DangerRoomManager *this)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GetInitPlantList(this,(vector *)&local_20);
  iVar1 = FUN_04a80698(local_20,local_18);
  iVar2 = GetMaxSelectedPlant(this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 <= iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::CheckSelectPlantList() */

void DangerRoomManager::CheckSelectPlantList(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  DangerRoomManager *in_x0;
  int *piVar4;
  undefined8 in_x8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ServerPlantID aSStack_1a0 [16];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  bVar1 = true;
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_190);
  GetSelectedPlantList(in_x0,(vector *)asStack_190);
  FUN_054603b8(auStack_168,&DAT_05593308);
  local_1b0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)asStack_190);
  local_1a8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)asStack_190);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_1b0,(__normal_iterator *)&local_1a8), bVar2)
  {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1b0);
    ServerPlantID::ServerPlantID(aSStack_1a0,*piVar4);
    uVar3 = ImageLib::Image::GetWidth((Image *)aSStack_1a0);
    if (!bVar1) {
      FUN_054603b8(auStack_168,&DAT_05593348);
    }
    bVar1 = false;
    FUN_0546065c(auStack_168,uVar3);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_1b0);
  }
  FUN_054603b8(auStack_168,&DAT_05593350);
  FUN_05462824(in_x8,auStack_178);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_190);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::SendSelectPlantList() */

void __thiscall DangerRoomManager::SendSelectPlantList(DangerRoomManager *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1816];
  string asStack_5d0 [1480];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"pl");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  CheckSelectPlantList();
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04a80ec4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5d0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* DangerRoomManager::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
DangerRoomManager::OnNotifyRefreshActivityList(DangerRoomManager *this,bool param_1,set *param_2)

{
  string *this_00;
  vector<std::string,std::allocator<std::string>> *this_01;
  char cVar1;
  bool bVar2;
  DangerRoomManager DVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *__s;
  ProfileMgr *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  long lVar7;
  Value *this_04;
  Value *pVVar8;
  ServerTime *this_05;
  char *pcVar9;
  LuaFunctionCallback *pLVar10;
  NetworkMgr *this_06;
  INetworkMsgProcess *this_07;
  double dVar11;
  bool local_e11;
  string asStack_e10 [8];
  string asStack_e08 [8];
  undefined8 local_e00;
  undefined8 local_df8;
  undefined4 local_df0;
  undefined4 local_dec;
  undefined4 local_de8;
  undefined8 local_de0 [15];
  ActiveItem aAStack_d68 [64];
  string asStack_d28 [64];
  undefined8 local_ce8 [173];
  string asStack_780 [1912];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_e00 = CONCAT44(local_e00._4_4_,0x297e);
    local_de0[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)&local_e00);
    local_ce8[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)local_de0,(exception_ptr *)local_ce8);
    if (cVar1 == '\0') {
      iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar4);
      Sexy::StructuredData::StructuredData((StructuredData *)local_de0);
      cVar1 = StringHelper::ReadJson(asStack_d28,(StructuredData *)local_de0);
      if (cVar1 == '\0') {
        Sexy::StructuredData::~StructuredData((StructuredData *)local_de0);
        ActiveItem::~ActiveItem(aAStack_d68);
      }
      else {
        this_00 = (string *)(this + 8);
        uVar5 = Sexy::StructuredData::BooleanForPath((StructuredData *)local_de0,"$.co",false);
        uVar6 = ProfileUtils::Profile();
        PlayerInfo::SetCheatingCheckFlag(uVar6,1,uVar5);
        iVar4 = Sexy::StructuredData::IntegerForPath((StructuredData *)local_de0,"$.em",0);
        SetMedal(this,iVar4);
        FUN_05475d88(asStack_e10,this_00);
        pcVar9 = "egypt";
        __s = (char *)Sexy::StructuredData::StringForPath
                                ((StructuredData *)local_de0,"$.cwn","egypt");
        std::string::append(this_00,__s,(size_t)pcVar9);
        bVar2 = std::operator!=(this_00,asStack_e10);
        if (bVar2) {
          std::set<int,std::less<int>,std::allocator<int>>::clear
                    ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x200));
        }
        this_01 = (vector<std::string,std::allocator<std::string>> *)(this + 0x298);
        std::string::string((string *)local_ce8,"egypt");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"pirate");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"cowboy");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"kongfu");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"future");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"dark");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"beach");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"iceage");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"skycity");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"lostcity");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"eighties");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"dino");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"modern");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"steam");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        std::string::string((string *)local_ce8,"tale");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_01,(string *)local_ce8)
        ;
        std::string::~string((string *)local_ce8);
        nop();
        this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::GetCurrentProfile(this_02);
        PlayerInfo::GetCurrentTrainingWorldName();
        cVar1 = FUN_0547419c(asStack_e08);
        if (cVar1 == '\0') {
          FUN_05475d88((string *)local_ce8,asStack_e08);
          FUN_05474278(this + 0x2b0,(string *)local_ce8);
          std::string::~string((string *)local_ce8);
        }
        else {
          std::string::string((string *)local_ce8,"egypt");
          FUN_05474278(this + 0x2b0,(string *)local_ce8);
          std::string::~string((string *)local_ce8);
          nop();
        }
        dVar11 = (double)Sexy::StructuredData::NumberForPath((StructuredData *)local_de0,"$.bh",1.0)
        ;
        *(float *)(this + 0x10) = (float)dVar11;
        DVar3 = (DangerRoomManager)
                Sexy::StructuredData::BooleanForPath((StructuredData *)local_de0,"$.rs",false);
        this[0x1f8] = DVar3;
        uVar5 = Sexy::StructuredData::IntegerForPath((StructuredData *)local_de0,"$.ml",100);
        *(undefined4 *)(this + 0xe0) = uVar5;
        this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::StructuredData::ArrayForPath((StructuredData *)local_de0,"$.bepl");
        uVar5 = Sexy::StructuredData::IntegerForPath((StructuredData *)local_de0,"$.tnc",0);
        lVar7 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        FUN_04a80690(lVar7 + 700,uVar5);
        std::vector<int,std::allocator<int>>::clear
                  ((vector<int,std::allocator<int>> *)(this + 0x230));
        if (this_03 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          for (this_04 = (Value *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_rightmost(this_03);
              pVVar8 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_03),
              this_04 != pVVar8; this_04 = (Value *)Sexy::StructuredData::Value::Next(this_04)) {
            uVar5 = FUN_04a8064c(*(undefined8 *)(this_04 + 0x10));
            local_ce8[0] = CONCAT44(local_ce8[0]._4_4_,uVar5);
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(this + 0x230),(int *)local_ce8);
          }
        }
        this_05 = (ServerTime *)ServerTime::Instance();
        pcVar9 = (char *)Sexy::StructuredData::StringForPath((StructuredData *)local_de0,"$.t","");
        std::string::string((string *)local_ce8,pcVar9);
        ServerTime::SetServerTime(this_05,(string *)local_ce8);
        std::string::~string((string *)local_ce8);
        nop();
        local_e11 = false;
        local_e00 = 0;
        local_df8 = 0;
        local_df0 = 0;
        local_dec = 0;
        local_de8 = 0;
        pLVar10 = (LuaFunctionCallback *)
                  Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_e00);
        std::string::string((string *)local_ce8,"luaDangerRoom:OnNotifyRefreshActivityList");
        pLVar10 = (LuaFunctionCallback *)
                  Lua::LuaFunctionCallback::Execute(pLVar10,(string *)local_ce8,0,&local_e11);
        Lua::LuaFunctionCallback::End(pLVar10);
        std::string::~string((string *)local_ce8);
        nop();
        if (this[0x1f8] != (DangerRoomManager)0x0) {
          this_06 = (NetworkMgr *)NetworkMgr::Instance();
          this_07 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_06);
          _PacketId::_PacketId((_PacketId *)local_ce8);
          INetworkMsgProcess::RequestChallengeReward(this_07,asStack_780);
          _PacketId::~_PacketId((_PacketId *)local_ce8);
        }
        Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_e00);
        std::string::~string(asStack_e08);
        std::string::~string(asStack_e10);
        Sexy::StructuredData::~StructuredData((StructuredData *)local_de0);
        ActiveItem::~ActiveItem(aAStack_d68);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::OnNotifyChallengeReward(std::string const&) */

void __thiscall DangerRoomManager::OnNotifyChallengeReward(DangerRoomManager *this,string *param_1)

{
  char cVar1;
  DangerRoomManager DVar2;
  int iVar3;
  int iVar4;
  char *__s;
  Dialog *this_00;
  UserInfo *this_01;
  TGALogMgr *pTVar5;
  _PacketId *__n;
  undefined4 local_dd8 [2];
  string asStack_dd0 [8];
  string asStack_dc8 [8];
  undefined1 auStack_dc0 [96];
  StructuredData aSStack_d60 [120];
  _PacketId a_Stack_ce8 [1384];
  string asStack_780 [1912];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StructuredData::StructuredData(aSStack_d60);
  cVar1 = StringHelper::ReadJson(param_1,aSStack_d60);
  if (cVar1 != '\0') {
    __s = (char *)Sexy::StructuredData::StringForPath(aSStack_d60,"$.i","");
    __n = a_Stack_ce8;
    std::string::string(asStack_dd0,__s);
    nop();
    _PacketId::_PacketId(a_Stack_ce8);
    DVar2 = (DangerRoomManager)std::operator!=(asStack_dd0,asStack_780);
    _PacketId::~_PacketId(a_Stack_ce8);
    if (!(bool)DVar2) {
      this[0x1f8] = DVar2;
      this_00 = (Dialog *)UISingletonDialog<ChallengeRewardDlg>::ShowDialog();
      if (this_00 != (Dialog *)0x0) {
        Sexy::StructuredData::IntegerForPath(aSStack_d60,"$.d.er.r",-1);
        __n = (_PacketId *)local_dd8;
        Sexy::StructuredData::IntegerForPath(aSStack_d60,"$.d.er.tr",100);
        iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_d60,"$.d.h",-1);
        std::string::string((string *)a_Stack_ce8,"UI_DangerRoom");
        UI::Dialog::AddResGroup(this_00,(string *)a_Stack_ce8);
        std::string::~string((string *)a_Stack_ce8);
        nop();
        ChallengeRewardDlg::SetHeadshot((ChallengeRewardDlg *)this_00,iVar3);
        std::string::string((string *)a_Stack_ce8,"IMAGE_UI_DANGERROOM_DIALOG_ICON");
        iVar4 = Sexy::StructuredData::IntegerForPath(aSStack_d60,"$.d.amn",0);
        ChallengeRewardDlg::AddReward((ChallengeRewardDlg *)this_00,(string *)a_Stack_ce8,iVar4);
        std::string::~string((string *)a_Stack_ce8);
        nop();
        std::string::string(asStack_dc8,"[DANGERROOM_REWARD_RANK_TIP]");
        StringHelper::ToStringValue(asStack_dc8);
        ChallengeRewardDlg::SetText((ChallengeRewardDlg *)this_00,(wstring *)a_Stack_ce8);
        FUN_05476c50(a_Stack_ce8);
        std::string::~string(asStack_dc8);
        nop();
        this_01 = (UserInfo *)DSingleton<UserInfo>::getInstance();
        UserInfo::unlockHeadShotId(this_01,iVar3);
      }
      TGALogEndlessData::TGALogEndlessData((TGALogEndlessData *)asStack_dc8);
      std::string::append(asStack_dc8,"13",(size_t)__n);
      local_dd8[0] = Sexy::StructuredData::IntegerForPath(aSStack_d60,"$.d.amn",0);
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_dd8);
      FUN_05474278(auStack_dc0,a_Stack_ce8);
      std::string::~string((string *)a_Stack_ce8);
      pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogEndlessData::TGALogEndlessData
                ((TGALogEndlessData *)a_Stack_ce8,(TGALogEndlessData *)asStack_dc8);
      TGALogMgr::LogEndless(pTVar5,a_Stack_ce8);
      TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)a_Stack_ce8);
      TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)asStack_dc8);
      std::string::~string(asStack_dd0);
      Sexy::StructuredData::~StructuredData(aSStack_d60);
      goto LAB_04a87184;
    }
    std::string::~string(asStack_dd0);
  }
  Sexy::StructuredData::~StructuredData(aSStack_d60);
LAB_04a87184:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::GetResetGemCost() */

void DangerRoomManager::GetResetGemCost(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  StructuredData aSStack_100 [120];
  ActiveItem aAStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  Sexy::StructuredData::StructuredData(aSStack_100);
  cVar1 = StringHelper::ReadJson(asStack_48,aSStack_100);
  if (cVar1 != '\0') {
    uVar3 = Sexy::StructuredData::IntegerForPath(aSStack_100,"$.bcp",0);
  }
  Sexy::StructuredData::~StructuredData(aSStack_100);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomManager::OnBuyItemFinish(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*,
   S2C_PlayerInfo const*) */

void __thiscall
DangerRoomManager::OnBuyItemFinish
          (DangerRoomManager *this,MsgResultInfo *param_1,S2C_ICloud_GetConsumeGemInfo *param_2,
          S2C_PlayerInfo *param_3)

{
  int iVar1;
  DangerRoomInfo *pDVar2;
  vector *pvVar3;
  char *pcVar4;
  TGALogMgr *pTVar5;
  string *__n;
  size_t sVar6;
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  LogGameItemData aLStack_1a8 [4];
  int local_1a4;
  int local_19c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_198 [24];
  string asStack_180 [24];
  string asStack_168 [8];
  string asStack_160 [72];
  string asStack_118 [104];
  DangerRoomInfo aDStack_b0 [128];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (MsgResultInfo *)0x0) && (param_2 != (S2C_ICloud_GetConsumeGemInfo *)0x0)) &&
      (*(int *)param_1 == 0)) && (*(int *)(param_2 + 0x6c) == 0x283c)) {
    OnResetDangerRoom(this);
    GetResetGemCost();
    pDVar2 = (DangerRoomInfo *)GetDangerRoomInfo(this,false);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar2);
    iVar1 = GetResetGemCost();
    local_30 = local_30 + iVar1;
    SetDangerRoomInfo(this,aDStack_b0,false);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_198);
    if (param_3 == (S2C_PlayerInfo *)0x0) {
      LogGameItemData::LogGameItemData(aLStack_1a8,0xbc0,0);
      local_19c = 0;
    }
    else {
      LogGameItemData::LogGameItemData(aLStack_1a8,0xbc0,*(int *)(param_3 + 0x34));
      local_19c = *(int *)(param_3 + 0x40);
    }
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_198,aLStack_1a8);
    pvVar3 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::GetGameItemChangedLog(pvVar3);
    std::string::string(asStack_1b8,"Store");
    std::string::string(asStack_1b0,"Endless_Buy_Times");
    std::string::string(asStack_180,"1");
    std::string::string(asStack_118,"");
    __n = asStack_180;
    BehaviorLog::itemPurchaseEx(asStack_1b8,asStack_1b0,asStack_180,asStack_118,asStack_1c0);
    std::string::~string(asStack_118);
    nop();
    std::string::~string(asStack_180);
    nop();
    std::string::~string(asStack_1b0);
    nop();
    std::string::~string(asStack_1b8);
    nop();
    TGALogEndlessData::TGALogEndlessData((TGALogEndlessData *)asStack_180);
    std::string::append(asStack_180,"7",(size_t)__n);
    sVar6 = (long)local_19c ^ (long)local_19c >> 0x3f;
    DString::DString((DString *)asStack_118,(int)sVar6 - (local_19c >> 0x1f));
    pcVar4 = (char *)DString::c_str((DString *)asStack_118);
    std::string::append(asStack_168,pcVar4,sVar6);
    DString::~DString((DString *)asStack_118);
    if (local_19c == 0) {
      sVar6 = (long)local_1a4 ^ (long)local_1a4 >> 0x3f;
      DString::DString((DString *)asStack_118,(int)sVar6 - (local_1a4 >> 0x1f));
      pcVar4 = (char *)DString::c_str((DString *)asStack_118);
      std::string::append(asStack_160,pcVar4,sVar6);
      DString::~DString((DString *)asStack_118);
    }
    else {
      std::string::append(asStack_160,"0",sVar6);
    }
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogEndlessData::TGALogEndlessData
              ((TGALogEndlessData *)asStack_118,(TGALogEndlessData *)asStack_180);
    TGALogMgr::LogEndless(pTVar5,asStack_118);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)asStack_118);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)asStack_180);
    std::string::~string(asStack_1c0);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_198);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

