// Class: NewPVPUtils


/* NewPVPUtils::IsPlayingNewPVP() */

bool NewPVPUtils::IsPlayingNewPVP(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (gGameStateMgr != 0) {
    iVar2 = FUN_0351456c(*(undefined4 *)(gGameStateMgr + 0x1ec0));
    bVar1 = iVar2 == 0xc;
  }
  return bVar1;
}


/* NewPVPUtils::IsConcreteRegion(Sexy::SexyVector3 const&) */

bool NewPVPUtils::IsConcreteRegion(SexyVector3 *param_1)

{
  long lVar1;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    lVar1 = Board::FindRegionWithFlags(*(long *)(gLawnApp + 0x9f0),param_1,0x20);
    return lVar1 != 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::IsConcreteRegion(Sexy::Point const&) */

void NewPVPUtils::IsConcreteRegion(Point *param_1)

{
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)local_20,(float)local_1c,0.0);
  IsConcreteRegion((SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPUtils::IsOppoentRegion(Sexy::SexyVector3 const&) */

bool NewPVPUtils::IsOppoentRegion(SexyVector3 *param_1)

{
  long lVar1;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    lVar1 = Board::FindRegionWithFlags(*(long *)(gLawnApp + 0x9f0),param_1,0x40);
    return lVar1 != 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::IsOppoentRegion(Sexy::Point const&) */

void NewPVPUtils::IsOppoentRegion(Point *param_1)

{
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)local_20,(float)local_1c,0.0);
  IsOppoentRegion((SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPUtils::IsSameRegion(BoardEntity*, BoardEntity*) */

byte NewPVPUtils::IsSameRegion(BoardEntity *param_1,BoardEntity *param_2)

{
  char cVar1;
  byte bVar2;
  SexyVector3 *pSVar3;
  SexyVector3 *pSVar4;
  
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  cVar1 = IsOppoentRegion(pSVar3);
  if (cVar1 != '\0') {
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
    bVar2 = IsOppoentRegion(pSVar4);
    if (bVar2 != 0) {
      return bVar2;
    }
  }
  cVar1 = IsOppoentRegion(pSVar3);
  if (cVar1 != '\0') {
    return 0;
  }
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
  bVar2 = IsOppoentRegion(pSVar3);
  return bVar2 ^ 1;
}


/* NewPVPUtils::GetCurrentCoin() */

undefined8 NewPVPUtils::GetCurrentCoin(void)

{
  return 99999;
}


/* NewPVPUtils::GetRankNum(int&, int&, int&) */

void NewPVPUtils::GetRankNum(int *param_1,int *param_2,int *param_3)

{
  *param_1 = 6;
  *param_2 = 5;
  *param_3 = 5;
  return;
}


/* NewPVPUtils::GetSmallRankNum(int) */

undefined4 NewPVPUtils::GetSmallRankNum(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (param_1 == 5) {
    uVar1 = 1;
  }
  return uVar1;
}


/* NewPVPUtils::GetStarNumInSmallRank(int, int) */

undefined4 NewPVPUtils::GetStarNumInSmallRank(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_1 != 5) {
    uVar1 = 5;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::GetRankImage(int, int) */

void __thiscall NewPVPUtils::GetRankImage(NewPVPUtils *this,int param_1,int param_2)

{
  int iVar1;
  string *extraout_x1;
  HotUIHelpers aHStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetSmallRankNum((int)this);
  Sexy::StrFormat("IMAGE_UI_NEW_PVP_DUAN_TROPHY_%d_%d",aHStack_10,(ulong)this & 0xffffffff,
                  (ulong)(uint)((iVar1 + -1) - param_1));
  HotUIHelpers::GetImageFromStringId(aHStack_10,extraout_x1);
  std::string::~string((string *)aHStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPUtils::GetGridBySrcGrid(int, int, int, bool) */

void __thiscall
NewPVPUtils::GetGridBySrcGrid(NewPVPUtils *this,int param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  Point *in_x8;
  
  if ((uint)this < 8) {
    switch((ulong)this & 0xffffffff) {
    default:
      if ((param_3 & 0xffU) != 0) goto switchD_03514af4_caseD_5;
      break;
    case 4:
      if ((param_3 & 0xffU) == 0) {
        Sexy::Point::Point(in_x8,param_1,param_2);
        return;
      }
      break;
    case 5:
    case 6:
      goto switchD_03514af4_caseD_5;
    }
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    param_2 = param_2 + iVar1 / 2 + 1;
  }
switchD_03514af4_caseD_5:
  Sexy::Point::Point(in_x8,param_1,param_2);
  return;
}


/* NewPVPUtils::SetCurrentHighFPS(bool) */

void NewPVPUtils::SetCurrentHighFPS(bool param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  FUN_03514580(lVar1 + 0x4bc,param_1);
  return;
}


/* NewPVPUtils::IsCurrentHighFPS() */

void NewPVPUtils::IsCurrentHighFPS(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  FUN_03514588(*(undefined1 *)(lVar1 + 0x4bc));
  return;
}


/* NewPVPUtils::GetZombieCost(int, int) */

undefined4 NewPVPUtils::GetZombieCost(int param_1,int param_2)

{
  NewPVPMgr *this;
  undefined4 *puVar1;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar1 = (undefined4 *)NewPVPMgr::GetZombieLevelUpValueInfo(this,param_1,param_2);
  return *puVar1;
}


/* NewPVPUtils::ApplyOverride_ZombieCost(int, int, int) */

ulong NewPVPUtils::ApplyOverride_ZombieCost(int param_1,int param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return (ulong)(uint)param_3;
  }
  uVar2 = GetZombieCost(param_1,param_2);
  return uVar2;
}


/* NewPVPUtils::GetZombieHitpoints(int, int) */

undefined4 NewPVPUtils::GetZombieHitpoints(int param_1,int param_2)

{
  NewPVPMgr *this;
  long lVar1;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar1 = NewPVPMgr::GetZombieLevelUpValueInfo(this,param_1,param_2);
  return *(undefined4 *)(lVar1 + 4);
}


/* NewPVPUtils::GetZombieDPS(int, int) */

undefined4 NewPVPUtils::GetZombieDPS(int param_1,int param_2)

{
  NewPVPMgr *this;
  long lVar1;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar1 = NewPVPMgr::GetZombieLevelUpValueInfo(this,param_1,param_2);
  return *(undefined4 *)(lVar1 + 8);
}


/* NewPVPUtils::GetZombieSpeed(int, int) */

undefined4 NewPVPUtils::GetZombieSpeed(int param_1,int param_2)

{
  NewPVPMgr *this;
  long lVar1;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar1 = NewPVPMgr::GetZombieLevelUpValueInfo(this,param_1,param_2);
  return *(undefined4 *)(lVar1 + 0xc);
}


/* NewPVPUtils::GetZombieBattleType(int) */

undefined4 NewPVPUtils::GetZombieBattleType(int param_1)

{
  NewPVPMgr *this;
  long lVar1;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar1 = NewPVPMgr::GetZombieLevelUpData(this,param_1);
  return *(undefined4 *)(lVar1 + 4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::GetZombieBattleTypeDes(int) */

void __thiscall NewPVPUtils::GetZombieBattleTypeDes(NewPVPUtils *this,int param_1)

{
  ulong uVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = GetZombieBattleType((int)this);
  Sexy::StrFormat("[ZOMBIE_BATTLE_TYPE_DESCRIPTION_%d]",aSStack_18,uVar1 & 0xffffffff);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::GetZombieRareDes(int) */

void __thiscall NewPVPUtils::GetZombieRareDes(NewPVPUtils *this,int param_1)

{
  NewPVPMgr *this_00;
  ulong uVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = NewPVPMgr::GetZombieRarityById(this_00,(int)this);
  Sexy::StrFormat("[ZOMBIE_BATTLE_TYPE_RARE_%d]",aSStack_18,uVar1 & 0xffffffff);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPUtils::IsPlayingNewPVPTutorial() */

bool NewPVPUtils::IsPlayingNewPVPTutorial(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_03514568(*(undefined4 *)(lVar2 + 0x40));
  return iVar1 == 0x44;
}


/* NewPVPUtils::TrySetTutorialStep(int) */

void NewPVPUtils::TrySetTutorialStep(int param_1)

{
  char cVar1;
  NewPVPMgr *pNVar2;
  
  cVar1 = IsPlayingNewPVPTutorial();
  if (cVar1 == '\0') {
    return;
  }
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::SetTutorialStep(pNVar2,param_1);
  return;
}


/* NewPVPUtils::GetTutorialStep() */

undefined8 NewPVPUtils::GetTutorialStep(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = IsPlayingNewPVPTutorial();
  if (cVar1 != '\0') {
    lVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar3 = FUN_0351457c(*(undefined4 *)(lVar2 + 0x4b8));
    return uVar3;
  }
  return 0xffffffff;
}


/* NewPVPUtils::FinishNewPVPTutorial() */

void NewPVPUtils::FinishNewPVPTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::CompleteTutorial(pPVar1,0x44);
  return;
}


/* NewPVPUtils::GetCurrentCPULevel() */

void NewPVPUtils::GetCurrentCPULevel(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  LocalProfileSaveData::GetCurrentNewPVPCPULevel(pPVar1);
  return;
}


/* NewPVPUtils::IsPlayingWithCPU() */

byte NewPVPUtils::IsPlayingWithCPU(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  MapEventItem *this;
  long lVar4;
  NewPVPMgr *this_00;
  
  this = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar4 = MapEventItem::GetChildren(this);
  if (*(int *)(lVar4 + 0x1d4) == 0) {
    iVar2 = GetCurrentCPULevel();
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar3 = NewPVPMgr::GetCPUInfoSize(this_00);
    if (iVar2 < iVar3) {
      bVar1 = IsPlayingNewPVPTutorial();
      return bVar1 ^ 1;
    }
  }
  return 0;
}


/* NewPVPUtils::IsPlayingFakeMatch() */

void NewPVPUtils::IsPlayingFakeMatch(void)

{
  char cVar1;
  
  cVar1 = IsPlayingWithCPU();
  if (cVar1 != '\0') {
    return;
  }
  IsPlayingNewPVPTutorial();
  return;
}


/* NewPVPUtils::AddCurrentCPULevel() */

void NewPVPUtils::AddCurrentCPULevel(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  int iVar2;
  
  iVar2 = GetCurrentCPULevel();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  LocalProfileSaveData::SetCurrentNewPVPCPULevel(pPVar1,iVar2 + 1);
  return;
}


/* NewPVPUtils::GetBoardScale() */

undefined1  [16] NewPVPUtils::GetBoardScale(void)

{
  LevelModuleManager *this;
  NewPVPGameModule *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (((*(long *)(gLawnApp + 0x9f0) != 0) &&
      (this = (LevelModuleManager *)
              FUN_03514570(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
      this != (LevelModuleManager *)0x0)) &&
     (this_00 = LevelModuleManager::GetModuleByClass<NewPVPGameModule>(this),
     this_00 != (NewPVPGameModule *)0x0)) {
    LawnBrainModule::GetEntryAnimDuration((LawnBrainModule *)this_00);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}


/* NewPVPUtils::HasObtainedDailyChestReward() */

void NewPVPUtils::HasObtainedDailyChestReward(void)

{
  LevelModuleManager *this;
  NewPVPGameModule *pNVar1;
  
  this = (LevelModuleManager *)FUN_03514570(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pNVar1 = LevelModuleManager::GetModuleByClass<NewPVPGameModule>(this);
  if (pNVar1 != (NewPVPGameModule *)0x0) {
    FUN_03514574(pNVar1[0x19]);
    return;
  }
  return;
}


/* NewPVPUtils::HasObtainedWeeklyChestReward() */

void NewPVPUtils::HasObtainedWeeklyChestReward(void)

{
  LevelModuleManager *this;
  NewPVPGameModule *pNVar1;
  
  this = (LevelModuleManager *)FUN_03514570(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pNVar1 = LevelModuleManager::GetModuleByClass<NewPVPGameModule>(this);
  if (pNVar1 != (NewPVPGameModule *)0x0) {
    FUN_03514578(pNVar1[0x1a]);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::HasRankReward() */

void NewPVPUtils::HasRankReward(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ActivityConfig *this;
  int *piVar5;
  MapEventItem *this_00;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ActivityConfig *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  piVar5 = (int *)ActivityConfig::GetChristmasLotteryData(this);
  iVar2 = *piVar5;
  iVar3 = piVar5[1];
  if (iVar2 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    iVar4 = 0;
    do {
      iVar1 = iVar4 + 1;
      iVar4 = GetSmallRankNum(iVar4);
      iVar10 = iVar10 + iVar4;
      iVar4 = iVar1;
    } while (iVar1 != iVar2);
  }
  this_00 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar8 = 0;
  lVar6 = MapEventItem::GetChildren(this_00);
  if (*(int *)(lVar6 + 0x1ac) <= *(int *)(lVar6 + 0x1b0)) {
    iVar10 = iVar3 + 1 + iVar10;
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_20,(vector *)(lVar6 + 0x188));
    if (1 < iVar10) {
      uVar9 = 1;
      uVar7 = FUN_0351458c(local_20,local_18);
      do {
        if (uVar7 <= uVar9) break;
        piVar5 = (int *)FUN_03514598(local_20,uVar9);
        if (*piVar5 == 0) {
          uVar8 = 1;
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)&local_20);
          goto LAB_035157d4;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar10);
    }
    uVar8 = 0;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
LAB_035157d4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::SplitString(std::wstring, std::vector<std::wstring, std::allocator<std::wstring >
   >&, wchar_t) */

void NewPVPUtils::SplitString
               (undefined8 param_1,vector<std::wstring,std::allocator<std::wstring>> *param_2,
               int param_3)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  FUN_05476574(awStack_10);
  lVar2 = FUN_054765d0(param_1);
  if (lVar2 != 0) {
    do {
      piVar3 = (int *)FUN_05476f5c(param_1,uVar6);
      if (*piVar3 == param_3) {
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back(param_2,awStack_10);
        FUN_05476f98(awStack_10);
      }
      else {
        piVar3 = (int *)FUN_05476f5c(param_1,uVar6);
        if (((*piVar3 != 0xd) && (piVar3 = (int *)FUN_05476f5c(param_1,uVar6), *piVar3 != 10)) &&
           (piVar3 = (int *)FUN_05476f5c(param_1,uVar6), *piVar3 != 9)) {
          puVar4 = (undefined4 *)FUN_05476f5c(param_1,uVar6);
          FUN_054778bc(awStack_10,1,*puVar4);
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_054765d0(param_1);
    } while (uVar6 < uVar5);
  }
  cVar1 = FUN_054765e8(awStack_10);
  if (cVar1 == '\0') {
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back(param_2,awStack_10);
  }
  FUN_05476c50(awStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ShowAreaHowToPlayScreen() */

void NewPVPUtils::ShowAreaHowToPlayScreen(void)

{
  NewPVPMgr *this;
  JoustHowToPlayScreenData *pJVar1;
  AdaptorNewPVPAreaHowToPlayScreen *this_00;
  JoustHowToPlayScreenData aJStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pJVar1 = (JoustHowToPlayScreenData *)NewPVPMgr::GetAreaHowToPlayData(this);
  JoustHowToPlayScreenData::JoustHowToPlayScreenData(aJStack_38,pJVar1);
  this_00 = ::operator_new(0x188);
  memset(this_00,0,0x188);
  AdaptorNewPVPAreaHowToPlayScreen::AdaptorNewPVPAreaHowToPlayScreen(this_00);
  AdaptorJoustHowToPlayScreen::SetData((AdaptorJoustHowToPlayScreen *)this_00,aJStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  JoustHowToPlayScreenData::~JoustHowToPlayScreenData(aJStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ShowHowToPlay() */

void NewPVPUtils::ShowHowToPlay(void)

{
  long lVar1;
  AdaptorNewPvPHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0xa0));
  this = ::operator_new(0x1a8);
  memset(this,0,0x1a8);
  AdaptorNewPvPHowToPlayScreen::AdaptorNewPvPHowToPlayScreen(this);
  HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ShowArmyHowToPlay() */

void NewPVPUtils::ShowArmyHowToPlay(void)

{
  long lVar1;
  AdaptorNewPvPHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0xd0));
  this = ::operator_new(0x1a8);
  memset(this,0,0x1a8);
  AdaptorNewPvPHowToPlayScreen::AdaptorNewPvPHowToPlayScreen(this);
  HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::GetRandomPlayerName() */

void __thiscall NewPVPUtils::GetRandomPlayerName(NewPVPUtils *this)

{
  LawnApp *pLVar1;
  string *psVar2;
  int iVar3;
  GenericResFile *this_00;
  char *__s;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_68);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_50);
  pLVar1 = gLawnApp;
  std::string::string(asStack_38,"Credits");
  LawnApp::LoadGroup(pLVar1,asStack_38);
  std::string::~string(asStack_38);
  nop();
  Sexy::Buffer::Buffer((Buffer *)asStack_38);
  psVar2 = Sexy::gSexyAppBase;
  this_00 = (GenericResFile *)
            CachedResourcePtr<Sexy::GenericResFile>::operator->
                      ((CachedResourcePtr<Sexy::GenericResFile> *)&DAT_06aa4340);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_00);
  std::string::string(asStack_70,__s);
  Sexy::SexyAppBase::ReadBufferFromFile(psVar2,(Buffer *)asStack_70,SUB81(asStack_38,0));
  std::string::~string(asStack_70);
  nop();
  Sexy::Buffer::ReadUTF8Line();
  Sexy::Buffer::ReadUTF8Line();
  FUN_05477b24(asStack_70,auStack_80);
  SplitString(asStack_70,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,
              0x2c);
  FUN_05476c50(asStack_70);
  FUN_05477b24(asStack_70,auStack_78);
  SplitString(asStack_70,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,
              0x2c);
  FUN_05476c50(asStack_70);
  uVar4 = time((time_t *)0x0);
  Sexy::SRand(uVar4);
  iVar3 = FUN_035145a0(local_68,local_60);
  iVar3 = Sexy::Rand(iVar3);
  uVar5 = FUN_035145ac(local_68,(long)iVar3);
  iVar3 = FUN_035145a0(local_50,local_48);
  iVar3 = Sexy::Rand(iVar3);
  uVar6 = FUN_035145ac(local_50,(long)iVar3);
  FUN_0342e660(uVar5,uVar6);
  pLVar1 = gLawnApp;
  std::string::string(asStack_70,"Credits");
  LawnApp::DeleteGroup(pLVar1,asStack_70);
  std::string::~string(asStack_70);
  nop();
  FUN_05476c50(auStack_78);
  FUN_05476c50(auStack_80);
  Sexy::Buffer::~Buffer((Buffer *)asStack_38);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_50);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ApplyOverride_ZombieCost(std::string const&, int, int) */

void NewPVPUtils::ApplyOverride_ZombieCost(string *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  uVar3 = (ulong)(uint)param_3;
  local_8 = ___stack_chk_guard;
  cVar1 = IsPlayingNewPVP();
  if (cVar1 != '\0') {
    ServerZombieID::ServerZombieID(aSStack_18,param_1);
    iVar2 = ImageLib::Image::GetWidth((Image *)aSStack_18);
    uVar3 = GetZombieCost(iVar2,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ApplyOverride_ZombieHitpoints(std::string const&, int, float) */

void NewPVPUtils::ApplyOverride_ZombieHitpoints(string *param_1,int param_2,float param_3)

{
  char cVar1;
  int iVar2;
  float fVar3;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerZombieID::ServerZombieID(aSStack_18,param_1);
  iVar2 = ImageLib::Image::GetWidth((Image *)aSStack_18);
  fVar3 = (float)GetZombieHitpoints(iVar2,param_2);
  cVar1 = IsPlayingNewPVP();
  if ((fVar3 <= 0.0) || (cVar1 == '\0')) {
    fVar3 = param_3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ApplyOverride_ZombieDPS(int, std::string const&, int, float) */

void NewPVPUtils::ApplyOverride_ZombieDPS(int param_1,string *param_2,int param_3,float param_4)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerZombieID::ServerZombieID(aSStack_18,param_2);
  iVar2 = ImageLib::Image::GetWidth((Image *)aSStack_18);
  fVar3 = (float)GetZombieDPS(iVar2,param_3);
  cVar1 = IsPlayingNewPVP();
  fVar4 = param_4;
  if (cVar1 != '\0') {
    ServerZombieID::ServerZombieID(aSStack_18,param_2);
    iVar2 = ImageLib::Image::GetWidth((Image *)aSStack_18);
    iVar2 = GetZombieBattleType(iVar2);
    if ((iVar2 != param_1) || (fVar4 = fVar3, fVar3 == -1.0)) {
      fVar4 = param_4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPUtils::ApplyOverride_ZombieSpeed(std::string const&, int, float) */

void NewPVPUtils::ApplyOverride_ZombieSpeed(string *param_1,int param_2,float param_3)

{
  char cVar1;
  int iVar2;
  float fVar3;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerZombieID::ServerZombieID(aSStack_18,param_1);
  iVar2 = ImageLib::Image::GetWidth((Image *)aSStack_18);
  fVar3 = (float)GetZombieSpeed(iVar2,param_2);
  cVar1 = IsPlayingNewPVP();
  if ((fVar3 == -1.0) || (cVar1 == '\0')) {
    fVar3 = param_3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}

