// Class: ActivityConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsAnyConsumptionTopicValid() */

void ActivityConfig::IsAnyConsumptionTopicValid(void)

{
  byte bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetConsumptionValidTopic();
  bVar1 = FUN_0547419c(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* ActivityConfig::GetActivityStoreBannerImageS() const */

undefined8 ActivityConfig::GetActivityStoreBannerImageS(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* ActivityConfig::GetRechargePlantPieceTextContent() */

ActivityConfig * __thiscall ActivityConfig::GetRechargePlantPieceTextContent(ActivityConfig *this)

{
  return this + 0x360;
}


/* ActivityConfig::GetChristmasLotteryData() */

ActivityConfig * __thiscall ActivityConfig::GetChristmasLotteryData(ActivityConfig *this)

{
  return this + 600;
}


/* ActivityConfig::GetChristmasProtectData() */

ActivityConfig * __thiscall ActivityConfig::GetChristmasProtectData(ActivityConfig *this)

{
  return this + 0x230;
}


/* ActivityConfig::GetRefreshPlantsPurchaseData() */

ActivityConfig * __thiscall ActivityConfig::GetRefreshPlantsPurchaseData(ActivityConfig *this)

{
  return this + 0x2f8;
}


/* ActivityConfig::GetChristmasAccessoryData() */

ActivityConfig * __thiscall ActivityConfig::GetChristmasAccessoryData(ActivityConfig *this)

{
  return this + 0x178;
}


/* ActivityConfig::GetPieceDropDataList() */

ActivityConfig * __thiscall ActivityConfig::GetPieceDropDataList(ActivityConfig *this)

{
  return this + 0x428;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsDayFirstRewardActDays() */

void __thiscall ActivityConfig::IsDayFirstRewardActDays(ActivityConfig *this)

{
  int iVar1;
  long lVar2;
  char *__nptr;
  bool bVar3;
  long local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = LawnApp::GetRealBeijingTime(gLawnApp);
  if ((local_18 < 1) || (lVar2 = LawnApp::BeijingTime(gLawnApp,&local_18), lVar2 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    Sexy::StrFormat("%04d%02d%02d",asStack_10,(ulong)(*(int *)(lVar2 + 0x14) + 0x76c),
                    (ulong)(*(int *)(lVar2 + 0x10) + 1),(ulong)*(uint *)(lVar2 + 0xc));
    __nptr = (char *)FUN_0547429c(asStack_10);
    iVar1 = atoi(__nptr);
    if (*(int *)(this + 0x30) <= iVar1) {
      bVar3 = iVar1 <= *(int *)(this + 0x34);
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsCurrentActivityLocalTimeValid(int, int) */

void __thiscall
ActivityConfig::IsCurrentActivityLocalTimeValid(ActivityConfig *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char *__nptr;
  bool bVar3;
  long local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_18 < 1) {
    bVar3 = false;
  }
  else {
    lVar2 = LawnApp::BeijingTime(gLawnApp,&local_18);
    Sexy::StrFormat("%04d%02d%02d",asStack_10,(ulong)(*(int *)(lVar2 + 0x14) + 0x76c),
                    (ulong)(*(int *)(lVar2 + 0x10) + 1),(ulong)*(uint *)(lVar2 + 0xc));
    __nptr = (char *)FUN_0547429c(asStack_10);
    iVar1 = atoi(__nptr);
    bVar3 = iVar1 <= param_2 && param_1 <= iVar1;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::HasCurrentActivityLocalTimeStarted(int) */

void __thiscall ActivityConfig::HasCurrentActivityLocalTimeStarted(ActivityConfig *this,int param_1)

{
  int iVar1;
  long lVar2;
  char *__nptr;
  bool bVar3;
  long local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_18 < 1) {
    bVar3 = false;
  }
  else {
    lVar2 = LawnApp::BeijingTime(gLawnApp,&local_18);
    Sexy::StrFormat("%04d%02d%02d",asStack_10,(ulong)(*(int *)(lVar2 + 0x14) + 0x76c),
                    (ulong)(*(int *)(lVar2 + 0x10) + 1),(ulong)*(uint *)(lVar2 + 0xc));
    __nptr = (char *)FUN_0547429c(asStack_10);
    iVar1 = atoi(__nptr);
    bVar3 = param_1 <= iVar1;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetCurrentActivityTimeStatus(int, int) */

void __thiscall
ActivityConfig::GetCurrentActivityTimeStatus(ActivityConfig *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar3 = LawnApp::BeijingTime(gLawnApp,&local_10);
    iVar1 = *(int *)(lVar3 + 0x10) * 100 + 100 + (*(int *)(lVar3 + 0x14) + 0x76c) * 10000 +
            *(int *)(lVar3 + 0xc);
    if (param_1 <= iVar1) {
      uVar2 = 2;
      if (iVar1 <= param_2) {
        uVar2 = 1;
      }
      goto LAB_044482a4;
    }
  }
  uVar2 = 0;
LAB_044482a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::HasCurrentActivityTimeStarted(int) */

void __thiscall ActivityConfig::HasCurrentActivityTimeStarted(ActivityConfig *this,int param_1)

{
  bool bVar1;
  long lVar2;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_10 < 1) {
    bVar1 = false;
  }
  else {
    lVar2 = LawnApp::BeijingTime(gLawnApp,&local_10);
    bVar1 = param_1 <=
            *(int *)(lVar2 + 0x10) * 100 + 100 + (*(int *)(lVar2 + 0x14) + 0x76c) * 10000 +
            *(int *)(lVar2 + 0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ActivityConfig::IsActivityDays() */

bool __thiscall ActivityConfig::IsActivityDays(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x20),*(int *)(this + 0x24));
  return iVar1 == 1;
}


/* ActivityConfig::IsActivityCentreDays() */

bool __thiscall ActivityConfig::IsActivityCentreDays(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x28),*(int *)(this + 0x2c));
  return iVar1 == 1;
}


/* ActivityConfig::IsStoreGiftsActivated() */

ActivityConfig __thiscall ActivityConfig::IsStoreGiftsActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0xec),*(int *)(this + 0xf0));
  if (iVar1 != 1) {
    return (ActivityConfig)0x0;
  }
  return this[0xf4];
}


/* ActivityConfig::IsDailyAchievementActivated() */

ActivityConfig __thiscall ActivityConfig::IsDailyAchievementActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0xe0),*(int *)(this + 0xe4));
  if (iVar1 != 1) {
    return (ActivityConfig)0x0;
  }
  return this[0xe8];
}


/* ActivityConfig::IsRedPacksEntryActivated() */

ActivityConfig __thiscall ActivityConfig::IsRedPacksEntryActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x348),*(int *)(this + 0x34c));
  if (iVar1 != 1) {
    return (ActivityConfig)0x0;
  }
  return this[0x350];
}


/* ActivityConfig::IsDangerRoomActivated(bool) */

undefined8 __thiscall ActivityConfig::IsDangerRoomActivated(ActivityConfig *this,bool param_1)

{
  int iVar1;
  
  if (param_1) {
    iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x100),*(int *)(this + 0x104));
  }
  else {
    iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0xf8),*(int *)(this + 0xfc));
  }
  if ((iVar1 == 1) && (this[0x108] != (ActivityConfig)0x0)) {
    return 1;
  }
  return 0;
}


/* ActivityConfig::IsLanternRiddlesActivated() */

ActivityConfig __thiscall ActivityConfig::IsLanternRiddlesActivated(ActivityConfig *this)

{
  ActivityConfig AVar1;
  char cVar2;
  
  cVar2 = IsCurrentActivityLocalTimeValid(this,*(int *)(this + 0x328),*(int *)(this + 0x32c));
  AVar1 = (ActivityConfig)0x0;
  if (cVar2 != '\0') {
    AVar1 = this[0x334];
  }
  return AVar1;
}


/* ActivityConfig::HasLanternRiddlesStarted() */

byte __thiscall ActivityConfig::HasLanternRiddlesStarted(ActivityConfig *this)

{
  char cVar1;
  byte bVar2;
  
  if ((this[0x334] != (ActivityConfig)0x0) &&
     (cVar1 = HasCurrentActivityLocalTimeStarted(this,*(int *)(this + 0x328)), cVar1 != '\0')) {
    bVar2 = HasCurrentActivityLocalTimeStarted(this,*(int *)(this + 0x330));
    return bVar2 ^ 1;
  }
  return 0;
}


/* ActivityConfig::IsRedPackActivated() */

ActivityConfig __thiscall ActivityConfig::IsRedPackActivated(ActivityConfig *this)

{
  ActivityConfig AVar1;
  char cVar2;
  
  cVar2 = IsCurrentActivityLocalTimeValid(this,*(int *)(this + 0x338),*(int *)(this + 0x33c));
  AVar1 = (ActivityConfig)0x0;
  if (cVar2 != '\0') {
    AVar1 = this[0x344];
  }
  return AVar1;
}


/* ActivityConfig::HasRedPackStarted() */

byte __thiscall ActivityConfig::HasRedPackStarted(ActivityConfig *this)

{
  char cVar1;
  byte bVar2;
  
  if ((this[0x344] != (ActivityConfig)0x0) &&
     (cVar1 = HasCurrentActivityLocalTimeStarted(this,*(int *)(this + 0x338)), cVar1 != '\0')) {
    bVar2 = HasCurrentActivityLocalTimeStarted(this,*(int *)(this + 0x340));
    return bVar2 ^ 1;
  }
  return 0;
}


/* ActivityConfig::IsSpringBossActivated() */

bool __thiscall ActivityConfig::IsSpringBossActivated(ActivityConfig *this)

{
  int iVar1;
  
  if (0 < *(int *)(this + 0x118)) {
    iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x110),*(int *)(this + 0x114));
    return iVar1 == 1;
  }
  return false;
}


/* ActivityConfig::IsSpringGiftActivated() */

bool __thiscall ActivityConfig::IsSpringGiftActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x150),*(int *)(this + 0x154));
  return iVar1 == 1;
}


/* ActivityConfig::IsChristmasAccessoryActived() */

bool __thiscall ActivityConfig::IsChristmasAccessoryActived(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x178),*(int *)(this + 0x17c));
  return iVar1 == 1;
}


/* ActivityConfig::GetChristmasAccessoryMaxChances(int) */

undefined4 __thiscall
ActivityConfig::GetChristmasAccessoryMaxChances(ActivityConfig *this,int param_1)

{
  if (param_1 == 2) {
    return *(undefined4 *)(this + 0x18c);
  }
  if (param_1 != 3) {
    if (param_1 != 1) {
      return 0;
    }
    return *(undefined4 *)(this + 0x188);
  }
  return *(undefined4 *)(this + 400);
}


/* ActivityConfig::GetChristmasAccessoryPrice(int) */

undefined4 __thiscall ActivityConfig::GetChristmasAccessoryPrice(ActivityConfig *this,int param_1)

{
  if (param_1 == 2) {
    return *(undefined4 *)(this + 0x180);
  }
  if (param_1 == 3) {
    return *(undefined4 *)(this + 0x184);
  }
  return 0;
}


/* ActivityConfig::IsGoldenEggActived() */

bool __thiscall ActivityConfig::IsGoldenEggActived(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x1e0),*(int *)(this + 0x1e4));
  return iVar1 == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::DateMKTime(int) */

void __thiscall ActivityConfig::DateMKTime(ActivityConfig *this,int param_1)

{
  long lVar1;
  long lVar2;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40.tm_hour = 0x17;
  local_40.tm_wday = 0;
  local_40.tm_yday = 0;
  local_40.tm_mday = param_1 % 100;
  local_40.tm_min = 0x3b;
  local_40.tm_sec = 0x3b;
  local_40.tm_year = param_1 / 10000 + -0x76c;
  local_40.tm_mon = (param_1 % 10000) / 100 + -1;
  local_40.tm_isdst = 0;
  local_40._36_4_ = 0;
  local_40.tm_gmtoff = 0;
  local_40.tm_zone = (char *)0x0;
  lVar1 = Sexy::GetTimegm(&local_40);
  lVar2 = Sexy::GetBJTimeOffset();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 - lVar2);
}


/* ActivityConfig::GetGoldenEggRewardHammerQuantity() */

undefined4 __thiscall ActivityConfig::GetGoldenEggRewardHammerQuantity(ActivityConfig *this)

{
  return *(undefined4 *)(this + 0x1ec);
}


/* ActivityConfig::GetGoldenEggEggOpenGemCost() */

undefined4 __thiscall ActivityConfig::GetGoldenEggEggOpenGemCost(ActivityConfig *this)

{
  return *(undefined4 *)(this + 0x1f8);
}


/* ActivityConfig::IsTwoYearActivated() */

bool __thiscall ActivityConfig::IsTwoYearActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x38),*(int *)(this + 0x3c));
  return iVar1 == 1;
}


/* ActivityConfig::IsSpringGiftActivatedAtTime(tm) */

bool __thiscall ActivityConfig::IsSpringGiftActivatedAtTime(ActivityConfig *this,tm *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = param_1->tm_mon * 100 + 100 + (param_1->tm_year + 0x76c) * 10000 + param_1->tm_mday;
  if (*(int *)(this + 0x150) <= iVar1) {
    bVar2 = iVar1 <= *(int *)(this + 0x154);
  }
  return bVar2;
}


/* ActivityConfig::IsBossFightActivated() */

bool __thiscall ActivityConfig::IsBossFightActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x2b0),*(int *)(this + 0x2b4));
  return iVar1 == 1;
}


/* ActivityConfig::IsBossFightActivatedAtTime(tm) */

bool __thiscall ActivityConfig::IsBossFightActivatedAtTime(ActivityConfig *this,tm *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = param_1->tm_mon * 100 + 100 + (param_1->tm_year + 0x76c) * 10000 + param_1->tm_mday;
  if (*(int *)(this + 0x2b0) <= iVar1) {
    bVar2 = iVar1 <= *(int *)(this + 0x2b4);
  }
  return bVar2;
}


/* ActivityConfig::IsPlantBonusActivated() */

bool __thiscall ActivityConfig::IsPlantBonusActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x2e8),*(int *)(this + 0x2ec));
  return iVar1 == 1;
}


/* ActivityConfig::IsAvatarBonusActivated() */

bool __thiscall ActivityConfig::IsAvatarBonusActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x2f0),*(int *)(this + 0x2f4));
  return iVar1 == 1;
}


/* ActivityConfig::GetBossFightConfigLevelsCount() */

void __thiscall ActivityConfig::GetBossFightConfigLevelsCount(ActivityConfig *this)

{
  FUN_04445bd4(*(undefined8 *)(this + 0x2b8),*(undefined8 *)(this + 0x2c0));
  return;
}


/* ActivityConfig::GetAllBossLevelInfo() */

ActivityConfig * __thiscall ActivityConfig::GetAllBossLevelInfo(ActivityConfig *this)

{
  return this + 0x2b8;
}


/* ActivityConfig::GetBossLevelInfoByIndex(int) */

void ActivityConfig::GetBossLevelInfoByIndex(int param_1)

{
  ulong uVar1;
  LogCacheInfo *pLVar2;
  int in_w1;
  LogCacheInfo *in_x8;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)((ulong)(uint)param_1 + 0x2b8);
  uVar1 = FUN_04445bd4(uVar3,*(undefined8 *)((ulong)(uint)param_1 + 0x2c0));
  if (uVar1 <= (ulong)(long)in_w1) {
    pLVar2 = (LogCacheInfo *)FUN_04445bfc(uVar3,0);
    LogCacheInfo::LogCacheInfo(in_x8,pLVar2);
    return;
  }
  pLVar2 = (LogCacheInfo *)FUN_04445bfc(uVar3,(long)in_w1);
  LogCacheInfo::LogCacheInfo(in_x8,pLVar2);
  return;
}


/* ActivityConfig::GetBossFightBonusCount() */

void __thiscall ActivityConfig::GetBossFightBonusCount(ActivityConfig *this)

{
  FUN_04445c04(*(undefined8 *)(this + 0x2d0),*(undefined8 *)(this + 0x2d8));
  return;
}


/* ActivityConfig::GetBossFightBonusSkuID(int) */

void ActivityConfig::GetBossFightBonusSkuID(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  int in_w1;
  
  uVar1 = (ulong)(uint)param_1;
  uVar2 = FUN_04445bd4(*(undefined8 *)(uVar1 + 0x2b8),*(undefined8 *)(uVar1 + 0x2c0));
  if (uVar2 <= (ulong)(long)in_w1) {
    FUN_04445c2c(*(undefined8 *)(uVar1 + 0x2d0),0);
    FUN_05475d88();
    return;
  }
  FUN_04445c2c(*(undefined8 *)(uVar1 + 0x2d0),(long)in_w1);
  FUN_05475d88();
  return;
}


/* ActivityConfig::IsStorePlantGiftsActivated() */

ActivityConfig __thiscall ActivityConfig::IsStorePlantGiftsActivated(ActivityConfig *this)

{
  int iVar1;
  
  iVar1 = GetCurrentActivityTimeStatus(this,*(int *)(this + 0x300),*(int *)(this + 0x304));
  if (iVar1 != 1) {
    return (ActivityConfig)0x0;
  }
  return this[0x308];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetTodayDiscountPlant(DiscountPlant&) */

void __thiscall ActivityConfig::GetTodayDiscountPlant(ActivityConfig *this,DiscountPlant *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  DiscountPlant *pDVar6;
  long lVar7;
  undefined8 uVar8;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar7 = 0;
    lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
    uVar8 = *(undefined8 *)(this + 0x3e0);
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar5 = FUN_04445c40(uVar8,*(undefined8 *)(this + 1000));
    iVar2 = *(int *)(lVar4 + 0x10);
    iVar1 = iVar1 + 0x76c;
    if (lVar5 != 0) {
      do {
        pDVar6 = (DiscountPlant *)FUN_04445c68(uVar8,lVar7);
        iVar3 = *(int *)pDVar6;
        if (((iVar3 / 10000 == iVar1) && ((iVar3 + iVar1 * -10000) / 100 == iVar2 + 1)) &&
           (iVar3 % 100 == *(int *)(lVar4 + 0xc))) {
          DiscountPlant::operator=(param_1,pDVar6);
          break;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::HaveGameModeToday(FestivalGameMode) */

void __thiscall ActivityConfig::HaveGameModeToday(ActivityConfig *this,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar2 = LawnApp::BeijingTime(gLawnApp,&local_10);
    uVar7 = *(undefined8 *)(this + 0x3b0);
    iVar1 = *(int *)(lVar2 + 0x18);
    uVar3 = FUN_04445cb4(uVar7,*(undefined8 *)(this + 0x3b8));
    if ((ulong)(long)iVar1 < uVar3) {
      puVar4 = (undefined8 *)FUN_04445ce4(uVar7,(long)iVar1);
      uVar7 = *puVar4;
      lVar5 = FUN_04445cf0(uVar7,puVar4[1]);
      lVar2 = 0;
      do {
        if (lVar2 == lVar5) goto LAB_04448d54;
        piVar6 = (int *)FUN_04445d18(uVar7,lVar2);
        lVar2 = lVar2 + 1;
      } while (*piVar6 != param_2);
      uVar7 = 1;
      goto LAB_04448d58;
    }
  }
LAB_04448d54:
  uVar7 = 0;
LAB_04448d58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetRemainTime(FestivalGameMode) */

void __thiscall ActivityConfig::GetRemainTime(ActivityConfig *this,int param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    piVar2 = (int *)LawnApp::BeijingTime(gLawnApp,&local_10);
    uVar10 = *(undefined8 *)(this + 0x3b0);
    iVar8 = (piVar2[1] * -0x3c + piVar2[2] * -0xe10) - *piVar2;
    uVar3 = FUN_04445cb4(uVar10,*(undefined8 *)(this + 0x3b8));
    for (uVar9 = (ulong)piVar2[6]; uVar9 < uVar3 << 1; uVar9 = uVar9 + 1) {
      iVar1 = 0;
      if (uVar3 != 0) {
        iVar1 = (int)(uVar9 / uVar3);
      }
      puVar4 = (undefined8 *)FUN_04445ce4(uVar10,(long)((int)uVar9 - iVar1 * (int)uVar3));
      uVar7 = *puVar4;
      lVar5 = FUN_04445cf0(uVar7,puVar4[1]);
      lVar6 = 0;
      while (lVar6 != lVar5) {
        piVar2 = (int *)FUN_04445d18(uVar7,lVar6);
        lVar6 = lVar6 + 1;
        if (*piVar2 == param_2) goto LAB_04448de4;
      }
      iVar8 = iVar8 + 0x15180;
    }
  }
  iVar8 = 0x828480;
LAB_04448de4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetScrollBarBarkContentIndex() */

void __thiscall ActivityConfig::GetScrollBarBarkContentIndex(ActivityConfig *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_10;
  long local_8;
  
  iVar2 = *(int *)(this + 0x7c);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 2) {
    local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
    if (0 < local_10) {
      lVar3 = LawnApp::BeijingTime(gLawnApp,&local_10);
      iVar2 = *(int *)(lVar3 + 0x10) * 100 + 100 + (*(int *)(lVar3 + 0x14) + 0x76c) * 10000 +
              *(int *)(lVar3 + 0xc);
      if ((iVar2 < *(int *)(this + 0x20)) || (*(int *)(this + 0x24) < iVar2)) {
        uVar4 = 0;
        iVar2 = 0;
      }
      else {
        iVar2 = (iVar2 - *(int *)(this + 0x20)) + 1;
        uVar4 = (ulong)iVar2;
      }
      uVar5 = FUN_04445d20(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
      if (uVar5 <= uVar4) {
        iVar2 = 0;
      }
      goto LAB_04448f1c;
    }
  }
  else if (iVar2 == 3) {
    local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
    if (0 < local_10) {
      lVar3 = LawnApp::BeijingTime(gLawnApp,&local_10);
      iVar2 = *(int *)(lVar3 + 0x10) * 100 + 100 + (*(int *)(lVar3 + 0x14) + 0x76c) * 10000 +
              *(int *)(lVar3 + 0xc);
      if ((iVar2 < *(int *)(this + 0x20)) || (*(int *)(this + 0x24) < iVar2)) {
        lVar3 = FUN_04445d20(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
        if (lVar3 == 1) {
          iVar2 = 0;
          uVar4 = 1;
          goto LAB_04449000;
        }
      }
      else {
        iVar2 = iVar2 - *(int *)(this + 0x20);
        uVar4 = FUN_04445d20(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
        if (uVar4 - 1 <= (ulong)(long)iVar2) {
          iVar1 = 0;
          if (uVar4 != 0) {
            iVar1 = (int)((ulong)(long)iVar2 / uVar4);
          }
          iVar2 = iVar2 - iVar1 * (int)uVar4;
        }
        if (-1 < iVar2) {
LAB_04449000:
          if ((ulong)(long)iVar2 <= uVar4) goto LAB_04448f1c;
        }
      }
    }
  }
  else if (iVar2 == 1) {
    iVar2 = 0;
    iVar1 = FUN_04445d20(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
    if (0 < iVar1 + -1) {
      iVar2 = RandRangeInt(0,iVar1 + -1);
    }
    goto LAB_04448f1c;
  }
  iVar2 = 0;
LAB_04448f1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::UTF8ChStringToUnicodeChString(std::string&, std::wstring&) */

void __thiscall
ActivityConfig::UTF8ChStringToUnicodeChString(ActivityConfig *this,string *param_1,wstring *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  wchar_t local_14;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0547429c(param_1);
  local_10 = (char *)(lVar2 + 1);
  for (iVar4 = 1; uVar3 = FUN_05474184(param_1), (ulong)(long)iVar4 < uVar3; iVar4 = iVar4 + iVar1)
  {
    iVar1 = Sexy::GetNextUTF8CharFromStream(&local_10,(int)uVar3 - iVar4,&local_14);
    FUN_05477a88(param_2,local_14);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityConfig::GetNoticeContent(std::wstring&) */

void __thiscall ActivityConfig::GetNoticeContent(ActivityConfig *this,wstring *param_1)

{
  UTF8ChStringToUnicodeChString(this,(string *)(this + 0x50),param_1);
  return;
}


/* ActivityConfig::GetScrollBarBarTextContent(int, std::wstring&) */

undefined8 __thiscall
ActivityConfig::GetScrollBarBarTextContent(ActivityConfig *this,int param_1,wstring *param_2)

{
  long lVar1;
  string *psVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x80);
    lVar1 = FUN_04445d20(uVar3,*(undefined8 *)(this + 0x88));
    if ((ulong)(long)param_1 <= lVar1 - 1U) {
      psVar2 = (string *)FUN_04445d2c(uVar3,(long)param_1);
      UTF8ChStringToUnicodeChString(this,psVar2,param_2);
      return 1;
    }
  }
  return 0;
}


/* ActivityConfig::GetTipsTextContent(int, std::wstring&) */

undefined8 __thiscall
ActivityConfig::GetTipsTextContent(ActivityConfig *this,int param_1,wstring *param_2)

{
  long lVar1;
  string *psVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0xb0);
    lVar1 = FUN_04445d20(uVar3,*(undefined8 *)(this + 0xb8));
    if ((ulong)(long)param_1 <= lVar1 - 1U) {
      psVar2 = (string *)FUN_04445d2c(uVar3,(long)param_1);
      UTF8ChStringToUnicodeChString(this,psVar2,param_2);
      return 1;
    }
  }
  return 0;
}


/* ActivityConfig::GetWeeklyGameModeCount(FestivalGameMode) const */

int __thiscall ActivityConfig::GetWeeklyGameModeCount(ActivityConfig *this,int param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x410);
  if (param_2 == 3) {
    param_2 = 0;
  }
  lVar1 = FUN_04445d34(uVar4,*(undefined8 *)(this + 0x418));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    piVar2 = (int *)FUN_04445d5c(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (param_2 != *piVar2);
  return piVar2[1];
}


/* ActivityConfig::GetMaxCoinSpecialCollected() const */

int __thiscall ActivityConfig::GetMaxCoinSpecialCollected(ActivityConfig *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = 0;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    iVar2 = Board::GetExtraMaxCoinSpecialCollected();
  }
  return iVar1 + iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetLeftDangerRoomDays(bool) */

void __thiscall ActivityConfig::GetLeftDangerRoomDays(ActivityConfig *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  tm local_78;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    lVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
    if (0 < lVar4) {
      iVar2 = *(int *)(this + 0xf8);
      local_78.tm_wday = 0;
      local_78.tm_yday = 0;
      local_78.tm_sec = 0;
      local_78.tm_min = 0;
      local_78.tm_isdst = 0;
      local_78._36_4_ = 0;
      local_78.tm_gmtoff = 0;
      local_78._8_8_ = (ulong)(uint)(iVar2 % 100) << 0x20;
      local_78.tm_zone = (char *)0x0;
      local_78.tm_year = iVar2 / 10000 + -0x76c;
      local_78.tm_mon = (iVar2 % 10000) / 100 + -1;
      lVar5 = Sexy::GetTimegm(&local_78);
      lVar6 = Sexy::GetBJTimeOffset();
      local_40.tm_zone = (char *)0x0;
      iVar2 = *(int *)(this + 0x104);
      local_40.tm_wday = 0;
      local_40.tm_yday = 0;
      local_40.tm_sec = 0;
      local_40.tm_min = 0;
      local_40._8_8_ = (ulong)(uint)(iVar2 % 100) << 0x20;
      local_40.tm_year = iVar2 / 10000 + -0x76c;
      local_40.tm_mon = (iVar2 % 10000) / 100 + -1;
      local_40.tm_isdst = 0;
      local_40._36_4_ = 0;
      local_40.tm_gmtoff = 0;
      lVar7 = Sexy::GetTimegm(&local_40);
      lVar8 = Sexy::GetBJTimeOffset();
      if ((lVar4 <= lVar7 - lVar8) && (lVar5 - lVar6 <= lVar4)) {
        iVar3 = (int)((lVar4 - (lVar5 - lVar6)) / 0x15180) + 1;
        iVar1 = iVar3 / 7;
        iVar2 = iVar1 + 1;
        if (iVar3 == iVar1 * 7) {
          iVar2 = iVar1;
        }
        iVar2 = (iVar2 * 7 - iVar3) + 1;
        if (-1 < iVar3) goto LAB_0444950c;
      }
    }
    iVar2 = 0;
  }
  else {
    local_78._0_8_ = LawnApp::GetRealServerTime(gLawnApp);
    iVar2 = 0;
    if (0 < (long)local_78._0_8_) {
      LawnApp::BeijingTime(gLawnApp,(long *)&local_78);
      local_40.tm_zone = (char *)0x0;
      iVar2 = *(int *)(this + 0xfc);
      local_40.tm_wday = 0;
      local_40.tm_yday = 0;
      local_40.tm_sec = 0;
      local_40.tm_min = 0;
      local_40._8_8_ = (ulong)(uint)(iVar2 % 100) << 0x20;
      local_40.tm_year = iVar2 / 10000 + -0x76c;
      local_40.tm_mon = (iVar2 % 10000) / 100 + -1;
      local_40.tm_isdst = 0;
      local_40._36_4_ = 0;
      local_40.tm_gmtoff = 0;
      iVar2 = Sexy::GetTimegm(&local_40);
      iVar3 = Sexy::GetBJTimeOffset();
      iVar2 = ((iVar2 - iVar3) - local_78.tm_sec) / 0x15180 + 1;
    }
  }
LAB_0444950c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsTargetTimeInDangerRoomPeriod(long) */

void __thiscall ActivityConfig::IsTargetTimeInDangerRoomPeriod(ActivityConfig *this,long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  if (0 < lVar3) {
    iVar1 = *(int *)(this + 0xf8);
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_zone = (char *)0x0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40._8_8_ = (ulong)(uint)(iVar1 % 100) << 0x20;
    local_40.tm_year = iVar1 / 10000 + -0x76c;
    local_40.tm_mon = (iVar1 % 10000) / 100 + -1;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    lVar4 = Sexy::GetTimegm(&local_40);
    lVar5 = Sexy::GetBJTimeOffset();
    lVar4 = lVar4 - lVar5;
    if (lVar4 <= lVar3) {
      lVar3 = (lVar3 - lVar4) / 0x15180 + 1;
      lVar5 = lVar3 / 7;
      if (lVar3 != (lVar3 / 7) * 7) {
        lVar5 = lVar5 + 1;
      }
      lVar3 = (param_1 - lVar4) / 0x15180 + 1;
      if (lVar3 == (lVar3 / 7) * 7) {
        bVar2 = lVar5 == lVar3 / 7;
      }
      else {
        bVar2 = lVar5 == lVar3 / 7 + 1;
      }
      goto LAB_04449804;
    }
  }
  bVar2 = false;
LAB_04449804:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetLeftActivityDays() */

void __thiscall ActivityConfig::GetLeftActivityDays(ActivityConfig *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (lVar2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x24);
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_zone = (char *)0x0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40._8_8_ = (ulong)(uint)(iVar1 % 100) << 0x20;
    local_40.tm_year = iVar1 / 10000 + -0x76c;
    local_40.tm_mon = (iVar1 % 10000) / 100 + -1;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    lVar3 = Sexy::GetTimegm(&local_40);
    lVar4 = Sexy::GetBJTimeOffset();
    iVar1 = (int)(((lVar3 - lVar4) - lVar2) / 0x15180) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* ActivityConfig::IsFirstRechargeAward() */

undefined8 __thiscall ActivityConfig::IsFirstRechargeAward(ActivityConfig *this)

{
  undefined8 uVar1;
  
  if (this[0x3a8] == (ActivityConfig)0x0) {
    return 0;
  }
  uVar1 = IsActivityDays(this);
  return uVar1;
}


/* ActivityConfig::IsRechargePlantPieceValid() */

undefined8 __thiscall ActivityConfig::IsRechargePlantPieceValid(ActivityConfig *this)

{
  undefined8 uVar1;
  
  if (this[0x358] == (ActivityConfig)0x0) {
    return 0;
  }
  uVar1 = IsActivityDays(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsPlantOnSale(std::string&) */

void __thiscall ActivityConfig::IsPlantOnSale(ActivityConfig *this,string *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar7 = 0;
    lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
    uVar8 = *(undefined8 *)(this + 0x3e0);
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar5 = FUN_04445c40(uVar8,*(undefined8 *)(this + 1000));
    iVar1 = iVar1 + 0x76c;
    if (lVar5 != 0) {
      do {
        piVar6 = (int *)FUN_04445c68(uVar8,lVar7);
        if (((((char)piVar6[4] == '\0') &&
             (cVar3 = std::operator==((string *)(piVar6 + 2),param_1), cVar3 != '\0')) &&
            (iVar2 = *piVar6, iVar2 / 10000 == iVar1)) &&
           ((*(int *)(lVar4 + 0x10) + 1 == (iVar2 + iVar1 * -10000) / 100 &&
            (*(int *)(lVar4 + 0xc) == iVar2 % 100)))) goto LAB_04449a90;
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar5);
    }
  }
  cVar3 = '\0';
LAB_04449a90:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsAvatarOnSale(std::string&) */

void __thiscall ActivityConfig::IsAvatarOnSale(ActivityConfig *this,string *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar7 = 0;
    lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
    uVar8 = *(undefined8 *)(this + 0x3e0);
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar5 = FUN_04445c40(uVar8,*(undefined8 *)(this + 1000));
    iVar1 = iVar1 + 0x76c;
    if (lVar5 != 0) {
      do {
        piVar6 = (int *)FUN_04445c68(uVar8,lVar7);
        if (((((char)piVar6[4] != '\0') &&
             (cVar3 = std::operator==((string *)(piVar6 + 2),param_1), cVar3 != '\0')) &&
            (iVar2 = *piVar6, iVar2 / 10000 == iVar1)) &&
           ((*(int *)(lVar4 + 0x10) + 1 == (iVar2 + iVar1 * -10000) / 100 &&
            (*(int *)(lVar4 + 0xc) == iVar2 % 100)))) goto LAB_04449c1c;
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar5);
    }
  }
  cVar3 = '\0';
LAB_04449c1c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetActivityPrice(std::string&, bool, int) */

void __thiscall
ActivityConfig::GetActivityPrice(ActivityConfig *this,string *param_1,bool param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar7 = 0;
    lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
    uVar8 = *(undefined8 *)(this + 0x3e0);
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar5 = FUN_04445c40(uVar8,*(undefined8 *)(this + 1000));
    iVar1 = iVar1 + 0x76c;
    if (lVar5 != 0) {
      do {
        piVar6 = (int *)FUN_04445c68(uVar8,lVar7);
        if (((((bool)(char)piVar6[4] == param_2) &&
             (cVar3 = std::operator==((string *)(piVar6 + 2),param_1), cVar3 != '\0')) &&
            (iVar2 = *piVar6, iVar2 / 10000 == iVar1)) &&
           ((*(int *)(lVar4 + 0x10) + 1 == (iVar2 + iVar1 * -10000) / 100 &&
            (*(int *)(lVar4 + 0xc) == iVar2 % 100)))) {
          param_3 = (int)((float)(param_3 * piVar6[5]) * 0.01);
          break;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar5);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}


/* ActivityConfig::IsGeneralSale(std::string&) */

char __thiscall ActivityConfig::IsGeneralSale(ActivityConfig *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x3c8);
  lVar2 = FUN_04445c84(uVar5,*(undefined8 *)(this + 0x3d0));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return '\0';
    }
    lVar3 = FUN_04445cac(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x10),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsGeneralSaleOnDay(std::string&) */

void __thiscall ActivityConfig::IsGeneralSaleOnDay(ActivityConfig *this,string *param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long local_10;
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x3c8);
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  uVar3 = FUN_04445c84(uVar7,*(undefined8 *)(this + 0x3d0));
  if (uVar3 != 0) {
    do {
      lVar4 = FUN_04445cac(uVar7,uVar6);
      cVar2 = std::operator==((string *)(lVar4 + 0x10),param_1);
      if (cVar2 != '\0') {
        if (*(int *)(lVar4 + 4) == 0) goto LAB_04449ff0;
        local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
        if (local_10 < 1) break;
        lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
        uVar7 = *(undefined8 *)(this + 0x3c8);
        lVar5 = FUN_04445cac(uVar7,uVar6);
        iVar1 = *(int *)(lVar5 + 4);
        if (((iVar1 / 10000 == *(int *)(lVar4 + 0x14) + 0x76c) &&
            (*(int *)(lVar4 + 0x10) + 1 == (iVar1 % 10000) / 100)) &&
           (*(int *)(lVar4 + 0xc) == iVar1 % 100)) goto LAB_04449ff0;
        uVar3 = FUN_04445c84(uVar7,*(undefined8 *)(this + 0x3d0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  cVar2 = '\0';
LAB_04449ff0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetGeneralSaleDiscountOnDay(std::string&) */

void __thiscall ActivityConfig::GetGeneralSaleDiscountOnDay(ActivityConfig *this,string *param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  long local_10;
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x3c8);
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04445c84(uVar7,*(undefined8 *)(this + 0x3d0));
  if (uVar3 != 0) {
    do {
      lVar4 = FUN_04445cac(uVar7,uVar6);
      cVar2 = std::operator==((string *)(lVar4 + 0x10),param_1);
      if (cVar2 != '\0') {
        local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
        if (local_10 < 1) break;
        lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
        uVar7 = *(undefined8 *)(this + 0x3c8);
        lVar5 = FUN_04445cac(uVar7,uVar6);
        iVar1 = *(int *)(lVar5 + 4);
        if (((iVar1 / 10000 == *(int *)(lVar4 + 0x14) + 0x76c) &&
            (*(int *)(lVar4 + 0x10) + 1 == (iVar1 % 10000) / 100)) &&
           (*(int *)(lVar4 + 0xc) == iVar1 % 100)) {
          fVar8 = *(float *)(lVar5 + 8);
          if (fVar8 != 0.0) goto LAB_0444a11c;
          break;
        }
        uVar3 = FUN_04445c84(uVar7,*(undefined8 *)(this + 0x3d0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  fVar8 = 1.0;
LAB_0444a11c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar8);
}


/* ActivityConfig::IsGeneralSaleFirstAward(std::string&) */

undefined1 __thiscall ActivityConfig::IsGeneralSaleFirstAward(ActivityConfig *this,string *param_1)

{
  char cVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x3c8);
  lVar2 = FUN_04445c84(uVar5,*(undefined8 *)(this + 0x3d0));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined1 *)FUN_04445cac(uVar5,lVar4);
    cVar1 = std::operator==((string *)(puVar3 + 0x10),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return *puVar3;
}


/* ActivityConfig::CheckCurrentLevelIsActivityLevel(std::string const&) const */

string __thiscall
ActivityConfig::CheckCurrentLevelIsActivityLevel(ActivityConfig *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x458);
  lVar2 = FUN_04445ecc(uVar5,*(undefined8 *)(this + 0x460));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return (string)0x0;
    }
    psVar3 = (string *)FUN_04445ef4(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return psVar3[8];
}


/* ActivityConfig::IsCurrentWorldMapActivityLevelValid(std::string const&) */

undefined1 __thiscall
ActivityConfig::IsCurrentWorldMapActivityLevelValid(ActivityConfig *this,string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x458);
  lVar3 = FUN_04445ecc(uVar7,*(undefined8 *)(this + 0x460));
  lVar5 = 0;
  do {
    lVar6 = lVar5;
    if (lVar6 == lVar3) goto LAB_0444a3bc;
    psVar4 = (string *)FUN_04445efc(uVar7,lVar6);
    cVar1 = std::operator==(psVar4,param_1);
    lVar5 = lVar6 + 1;
  } while (cVar1 == '\0');
  cVar1 = IsActivityDays(this);
  uVar2 = 0;
  if (cVar1 != '\0') {
    lVar5 = FUN_04445efc(*(undefined8 *)(this + 0x458),lVar6);
    if (*(char *)(lVar5 + 8) == '\0') {
      return 0;
    }
LAB_0444a3bc:
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetPlantImageOnSale(std::string&) */

void ActivityConfig::GetPlantImageOnSale(string *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  string *in_x1;
  string *in_x8;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(param_1 + 0x3e0);
  lVar5 = 0;
  lVar3 = FUN_04445c40(uVar6,*(undefined8 *)(param_1 + 1000));
  if (lVar3 != 0) {
    do {
      lVar4 = FUN_04445c68(uVar6,lVar5);
      if ((*(char *)(lVar4 + 0x10) == '\0') &&
         (cVar2 = std::operator==((string *)(lVar4 + 8),in_x1), cVar2 != '\0')) {
        FUN_05475d88();
        goto LAB_0444a4b4;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar3);
  }
  std::string::string(in_x8,"");
  nop();
LAB_0444a4b4:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetAvatarImageOnSale(std::string&) */

void ActivityConfig::GetAvatarImageOnSale(string *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  string *in_x1;
  string *in_x8;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(param_1 + 0x3e0);
  lVar5 = 0;
  lVar3 = FUN_04445c40(uVar6,*(undefined8 *)(param_1 + 1000));
  if (lVar3 != 0) {
    do {
      lVar4 = FUN_04445c68(uVar6,lVar5);
      if ((*(char *)(lVar4 + 0x10) != '\0') &&
         (cVar2 = std::operator==((string *)(lVar4 + 8),in_x1), cVar2 != '\0')) {
        FUN_05475d88();
        goto LAB_0444a5a0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar3);
  }
  std::string::string(in_x8,"");
  nop();
LAB_0444a5a0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetGeneralSale(std::string&) */

void ActivityConfig::GetGeneralSale(string *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  string *in_x1;
  string *in_x8;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(param_1 + 0x3c8);
  lVar3 = FUN_04445c84(uVar6,*(undefined8 *)(param_1 + 0x3d0));
  lVar5 = 0;
  do {
    if (lVar5 == lVar3) {
      std::string::string(in_x8,"");
      nop();
      goto LAB_0444a680;
    }
    lVar4 = FUN_04445cac(uVar6,lVar5);
    cVar2 = std::operator==((string *)(lVar4 + 0x10),in_x1);
    lVar5 = lVar5 + 1;
  } while (cVar2 == '\0');
  FUN_05475d88();
LAB_0444a680:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetActivityTextColor(std::string) const */

void __thiscall ActivityConfig::GetActivityTextColor(undefined8 param_1,Sexy *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToLower(param_2,___stack_chk_guard);
  bVar1 = std::operator==(asStack_10,"");
  if (!bVar1) {
    uVar2 = 0;
    bVar1 = std::operator==(asStack_10,"black");
    if (bVar1) goto LAB_0444a730;
    bVar1 = std::operator==(asStack_10,"white");
    if (!bVar1) {
      uVar2 = 2;
      bVar1 = std::operator==(asStack_10,"red");
      if (!bVar1) {
        uVar2 = 3;
        bVar1 = std::operator==(asStack_10,"orange");
        if (!bVar1) {
          uVar2 = 4;
          bVar1 = std::operator==(asStack_10,"yellow");
          if (!bVar1) {
            uVar2 = 5;
            bVar1 = std::operator==(asStack_10,"green");
            if (!bVar1) {
              uVar2 = 6;
              bVar1 = std::operator==(asStack_10,"blue");
              if (!bVar1) {
                uVar2 = 7;
                bVar1 = std::operator==(asStack_10,"purple");
                if (!bVar1) {
                  bVar1 = std::operator==(asStack_10,"cyan");
                  uVar2 = 8;
                  if (!bVar1) {
                    uVar2 = 1;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0444a730;
    }
  }
  uVar2 = 1;
LAB_0444a730:
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetTodayDiscountPlantName() */

void ActivityConfig::GetTodayDiscountPlantName(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  long in_x0;
  long lVar6;
  long lVar7;
  int *piVar8;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  ulong uVar10;
  char *__s;
  string *extraout_x1;
  Sexy *pSVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long local_30;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_30 < 1) {
    FUN_05478178();
    nop();
    goto LAB_0444a960;
  }
  lVar12 = 0;
  lVar6 = LawnApp::BeijingTime(gLawnApp,&local_30);
  uVar14 = *(undefined8 *)(in_x0 + 0x3e0);
  iVar1 = *(int *)(lVar6 + 0x14);
  lVar7 = FUN_04445c40(uVar14,*(undefined8 *)(in_x0 + 1000));
  iVar2 = *(int *)(lVar6 + 0x10);
  iVar1 = iVar1 + 0x76c;
  if (lVar7 != 0) {
    do {
      piVar8 = (int *)FUN_04445c68(uVar14,lVar12);
      iVar3 = *piVar8;
      if (((iVar3 / 10000 == iVar1) && ((iVar3 + iVar1 * -10000) / 100 == iVar2 + 1)) &&
         (iVar3 % 100 == *(int *)(lVar6 + 0xc))) {
        if ((char)piVar8[4] == '\0') {
          __s = "Plants";
        }
        else {
          __s = "Avatars";
        }
        std::string::string(asStack_28,__s);
        nop();
        pSVar11 = aSStack_18;
        std::string::string(asStack_10,"iOS PvZ2 Store");
        Magento::GetStoreCategory((Magento *)asStack_10,asStack_28,(string *)pSVar11);
        std::string::~string(asStack_10);
        nop();
        bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
        uVar10 = 0;
        if (!bVar4) goto LAB_0444aad4;
        goto LAB_0444aab0;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar7);
  }
  goto LAB_0444a944;
  while( true ) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04445c7c(*(undefined8 *)(lVar6 + 0x60),uVar13);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
    lVar7 = FUN_04445c68(*(undefined8 *)(in_x0 + 0x3e0),lVar12);
    cVar5 = std::operator==((string *)(lVar6 + 0x80),(string *)(lVar7 + 8));
    uVar10 = uVar13 + 1;
    if (cVar5 != '\0') break;
LAB_0444aab0:
    uVar13 = uVar10;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar10 = FUN_04445c70(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
    if (uVar10 <= uVar13) goto LAB_0444aad4;
  }
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04445c7c(*(undefined8 *)(lVar12 + 0x60),uVar13);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  goto LAB_0444a960;
LAB_0444aad4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
LAB_0444a944:
  FUN_05478178();
  nop();
LAB_0444a960:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetRechargeImage() */

void __thiscall ActivityConfig::GetRechargeImage(ActivityConfig *this)

{
  char cVar1;
  long lVar2;
  ResourceInfo *pRVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsRechargePlantPieceValid(this);
  if ((cVar1 == '\0') ||
     (lVar2 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,(string *)(this + 0x368)), lVar2 == 0)) {
    pRVar3 = (ResourceInfo *)0x0;
  }
  else {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* ActivityConfig::IsActivityNoticeOnce() */

undefined1 ActivityConfig::IsActivityNoticeOnce(void)

{
  undefined1 uVar1;
  ProfileMgr *this;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  if (lVar2 != 0) {
    uVar1 = FUN_0444435c(*(undefined1 *)(lVar2 + 0xda8));
    FUN_04444360(lVar2 + 0xda8);
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetChristmasAccessoryIdByIndex(int, int) */

void __thiscall
ActivityConfig::GetChristmasAccessoryIdByIndex(ActivityConfig *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1b0));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*piVar3 == param_2) {
        uVar2 = *(undefined8 *)piVar3;
        uStack_10 = *(undefined8 *)(piVar3 + 2);
        goto LAB_0444c26c;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  else if (param_1 == 3) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1c8));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*piVar3 == param_2) {
        uVar2 = *(undefined8 *)piVar3;
        uStack_10 = *(undefined8 *)(piVar3 + 2);
        goto LAB_0444c26c;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  else if (param_1 == 1) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x198));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x198));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*piVar3 == param_2) {
        uVar2 = *(undefined8 *)piVar3;
        uStack_10 = *(undefined8 *)(piVar3 + 2);
        goto LAB_0444c26c;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  Sexy::Insets::Insets((Insets *)&local_18);
  uVar2 = local_18;
LAB_0444c26c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,uStack_10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::IsCurrStorePlantGiftActivated(std::string) */

void __thiscall ActivityConfig::IsCurrStorePlantGiftActivated(ActivityConfig *this,string *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  string *psVar4;
  int *piVar5;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x440));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x440));
    uVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)uVar2) {
LAB_0444c44c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar4,param_2);
    if (cVar1 != '\0') {
      piVar5 = (int *)FUN_04445c34(*(undefined8 *)(this + 0x310),(long)*(int *)(psVar4 + 0x1c));
      iVar3 = GetCurrentActivityTimeStatus(this,*piVar5,piVar5[1]);
      uVar2 = 0;
      if (iVar3 == 1) {
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        lVar6 = FUN_04445c34(*(undefined8 *)(this + 0x310),(long)*(int *)(lVar6 + 0x1c));
        uVar2 = *(undefined1 *)(lVar6 + 8);
      }
      goto LAB_0444c44c;
    }
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
  } while( true );
}


/* ActivityConfig::GetGetWeeklyGameModesPlantCount(FestivalGameMode, FestivalGameLevel) const */

int __thiscall
ActivityConfig::GetGetWeeklyGameModesPlantCount(ActivityConfig *this,int param_2,int param_3)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar1 = std::vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>>::empty
                    ((vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>> *)
                     (this + 0x3f8));
  if (cVar1 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar6 = 0;
    ProfileMgr::GetCurrentProfile(this_00);
    uVar8 = *(undefined8 *)(this + 0x3f8);
    if (param_2 == 3) {
      param_2 = 0;
    }
    lVar2 = FUN_04445d64(uVar8,*(undefined8 *)(this + 0x400));
    for (; lVar6 != lVar2; lVar6 = lVar6 + 1) {
      piVar3 = (int *)FUN_04445d8c(uVar8,lVar6);
      if (param_2 == *piVar3) {
        uVar7 = *(undefined8 *)(piVar3 + 2);
        lVar4 = FUN_04445d94(uVar7,*(undefined8 *)(piVar3 + 4));
        lVar5 = 0;
        while (lVar5 != lVar4) {
          piVar3 = (int *)FUN_04445dc4(uVar7,lVar5);
          lVar5 = lVar5 + 1;
          if (*piVar3 == param_3) {
            return piVar3[1];
          }
        }
      }
    }
  }
  return 0;
}


/* ActivityConfig::IsWeeklyGameModesPlantArrayAvatar(FestivalGameMode, bool&) */

undefined8 __thiscall
ActivityConfig::IsWeeklyGameModesPlantArrayAvatar
          (ActivityConfig *this,int param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>>::empty
                    ((vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>> *)
                     (this + 0x3f8));
  if (cVar1 != '\0') {
    return 0;
  }
  uVar5 = *(undefined8 *)(this + 0x3f8);
  if (param_2 == 3) {
    param_2 = 0;
  }
  lVar2 = FUN_04445d64(uVar5,*(undefined8 *)(this + 0x400));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    piVar3 = (int *)FUN_04445dd0(uVar5,lVar4);
    lVar4 = lVar4 + 1;
  } while (param_2 != *piVar3);
  *param_3 = (char)piVar3[1];
  return 1;
}


/* ActivityConfig::GetCurrentPlantListDrowWeight(FestivalGameMode, FestivalGameLevel, EArrayType)
   const */

float __thiscall
ActivityConfig::GetCurrentPlantListDrowWeight
          (ActivityConfig *this,int param_2,int param_3,int param_4)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  cVar1 = std::vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>>::empty
                    ((vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>> *)
                     (this + 0x3f8));
  if (cVar1 == '\0') {
    lVar8 = 0;
    if (param_2 == 3) {
      param_2 = 0;
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    uVar9 = *(undefined8 *)(this + 0x3f8);
    lVar2 = FUN_04445d64(uVar9,*(undefined8 *)(this + 0x400));
    for (; lVar8 != lVar2; lVar8 = lVar8 + 1) {
      piVar3 = (int *)FUN_04445d8c(uVar9,lVar8);
      uVar7 = *(undefined8 *)(piVar3 + 2);
      lVar4 = FUN_04445d94(uVar7,*(undefined8 *)(piVar3 + 4));
      for (lVar6 = 0; lVar6 != lVar4; lVar6 = lVar6 + 1) {
        piVar5 = (int *)FUN_04445dc4(uVar7,lVar6);
        if ((*piVar5 == param_3) && (*piVar3 == param_2)) {
          if (param_4 == 1) {
            return (float)piVar5[3] * 0.01;
          }
          if (param_4 == 0) {
            return (float)piVar5[2] * 0.01;
          }
          if (param_4 == 2) {
            return (float)piVar5[4] * 0.01;
          }
        }
      }
    }
  }
  return 1.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetCurrentPieceDropActivityCombat(std::string const&) const */

void __thiscall
ActivityConfig::GetCurrentPieceDropActivityCombat(ActivityConfig *this,string *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  string *psVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar5 = std::vector<PieceDropData,std::allocator<PieceDropData>>::empty
                    ((vector<PieceDropData,std::allocator<PieceDropData>> *)(this + 0x428));
  if (cVar5 == '\0') {
    uVar11 = *(undefined8 *)(this + 0x428);
    uVar10 = 0;
    uVar7 = FUN_04445de4(uVar11,*(undefined8 *)(this + 0x430));
    if (uVar7 != 0) {
      do {
        psVar8 = (string *)FUN_04445e20(uVar11,uVar10);
        cVar5 = std::operator==(param_1,psVar8);
        if (cVar5 != '\0') {
          if (((*(int *)(psVar8 + 0x54) == 0) || (*(int *)(psVar8 + 0x58) == 0)) ||
             (local_10 = LawnApp::GetRealBeijingTime(gLawnApp), local_10 < 1)) break;
          lVar9 = LawnApp::BeijingTime(gLawnApp,&local_10);
          uVar11 = *(undefined8 *)(this + 0x428);
          iVar2 = *(int *)(lVar9 + 8);
          iVar3 = *(int *)(lVar9 + 4);
          iVar1 = *(int *)(lVar9 + 0x10) * 100 + 100 + (*(int *)(lVar9 + 0x14) + 0x76c) * 10000 +
                  *(int *)(lVar9 + 0xc);
          lVar9 = FUN_04445e20(uVar11,uVar10);
          if ((*(int *)(lVar9 + 0x54) <= iVar1) && (iVar1 <= *(int *)(lVar9 + 0x58))) {
            iVar1 = iVar1 - *(int *)(lVar9 + 0x54);
            iVar4 = iVar1 * 0x18;
            iVar2 = iVar4 + iVar2;
            if ((*(int *)(lVar9 + 0x5c) / 100 + iVar4 <= iVar2) &&
               (iVar2 <= *(int *)(lVar9 + 0x60) / 100 + iVar4)) {
              iVar1 = iVar1 * 0x5a0;
              iVar3 = iVar1 + iVar3;
              if ((*(int *)(lVar9 + 0x5c) % 100 + iVar1 <= iVar3) &&
                 (iVar3 <= *(int *)(lVar9 + 0x60) % 100 + iVar1)) {
                uVar6 = *(undefined4 *)(lVar9 + 0x50);
                goto LAB_0444ce80;
              }
            }
          }
          uVar7 = FUN_04445de4(uVar11,*(undefined8 *)(this + 0x430));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar7);
    }
  }
  uVar6 = 1;
LAB_0444ce80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* ActivityConfig::_GetCurrentPlantPieceComeFrom(std::string const&, bool) const */

undefined4 __thiscall
ActivityConfig::_GetCurrentPlantPieceComeFrom(ActivityConfig *this,string *param_1,bool param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  string *psVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar2 = *(undefined8 *)(this + 0x3f8);
  uVar12 = 0;
  do {
    uVar3 = FUN_04445d64(uVar2,*(undefined8 *)(this + 0x400));
    if (uVar3 <= uVar12) {
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)FUN_04445d8c(uVar2,uVar12);
    uVar13 = *(undefined8 *)(puVar4 + 2);
    for (uVar3 = 0; uVar5 = FUN_04445d94(uVar13,*(undefined8 *)(puVar4 + 4)), uVar3 < uVar5;
        uVar3 = uVar3 + 1) {
      lVar6 = FUN_04445dc4(uVar13,uVar3);
      cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(lVar6 + 0x48));
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)FUN_04445d8c(*(undefined8 *)(this + 0x3f8),uVar12);
        lVar6 = FUN_04445dc4(*(undefined8 *)(puVar4 + 2),uVar3);
        uVar2 = *(undefined8 *)(lVar6 + 0x48);
        lVar7 = FUN_04445d20(uVar2,*(undefined8 *)(lVar6 + 0x50));
        lVar9 = 0;
        while (lVar10 = lVar9 + 1, lVar9 != lVar7) {
          psVar8 = (string *)FUN_04445e30(uVar2,lVar9);
          cVar1 = std::operator==(psVar8,param_1);
          lVar9 = lVar10;
          if ((cVar1 != '\0') && ((bool)*(char *)(puVar4 + 1) == param_2)) {
LAB_0444cfc0:
            return *puVar4;
          }
        }
      }
      else {
        lVar6 = FUN_04445d8c(*(undefined8 *)(this + 0x3f8),uVar12);
        lVar6 = FUN_04445dc4(*(undefined8 *)(lVar6 + 8),uVar3);
      }
      cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(lVar6 + 0x30));
      if (cVar1 == '\0') {
        lVar7 = 0;
        puVar4 = (undefined4 *)FUN_04445d8c(*(undefined8 *)(this + 0x3f8),uVar12);
        lVar6 = FUN_04445dc4(*(undefined8 *)(puVar4 + 2),uVar3);
        uVar2 = *(undefined8 *)(lVar6 + 0x30);
        lVar9 = FUN_04445d20(uVar2,*(undefined8 *)(lVar6 + 0x38));
        while (lVar10 = lVar7, lVar7 != lVar9) {
          while( true ) {
            lVar7 = lVar10 + 1;
            psVar8 = (string *)FUN_04445e30(uVar2,lVar10);
            cVar1 = std::operator==(psVar8,param_1);
            if (cVar1 == '\0') break;
            if ((bool)*(char *)(puVar4 + 1) == param_2) goto LAB_0444cfc0;
            lVar10 = lVar7;
            if (lVar7 == lVar9) goto LAB_0444d090;
          }
        }
      }
      else {
        lVar6 = FUN_04445d8c(*(undefined8 *)(this + 0x3f8),uVar12);
        lVar6 = FUN_04445dc4(*(undefined8 *)(lVar6 + 8),uVar3);
      }
LAB_0444d090:
      cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(lVar6 + 0x18));
      if (cVar1 == '\0') {
        uVar2 = *(undefined8 *)(this + 0x3f8);
        puVar4 = (undefined4 *)FUN_04445d8c(uVar2,uVar12);
        uVar13 = *(undefined8 *)(puVar4 + 2);
        lVar6 = FUN_04445dc4(uVar13,uVar3);
        uVar11 = *(undefined8 *)(lVar6 + 0x18);
        lVar9 = FUN_04445d20(uVar11,*(undefined8 *)(lVar6 + 0x20));
        lVar6 = 0;
        while (lVar7 = lVar6 + 1, lVar6 != lVar9) {
          psVar8 = (string *)FUN_04445e30(uVar11,lVar6);
          cVar1 = std::operator==(psVar8,param_1);
          lVar6 = lVar7;
          if ((cVar1 != '\0') && ((bool)*(char *)(puVar4 + 1) == param_2)) {
            return *puVar4;
          }
        }
      }
      else {
        uVar2 = *(undefined8 *)(this + 0x3f8);
        puVar4 = (undefined4 *)FUN_04445d8c(uVar2,uVar12);
        uVar13 = *(undefined8 *)(puVar4 + 2);
      }
    }
    uVar12 = uVar12 + 1;
  } while( true );
}


/* ActivityConfig::GetCurrentPlantPieceComeFrom(std::string const&, bool) */

ulong __thiscall
ActivityConfig::GetCurrentPlantPieceComeFrom(ActivityConfig *this,string *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = _GetCurrentPlantPieceComeFrom(this,param_1,param_2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  cVar1 = IsSpringBossActivated(this);
  uVar2 = 3;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return (ulong)uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetTipsImage() */

void __thiscall ActivityConfig::GetTipsImage(ActivityConfig *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  string *psVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  undefined8 uVar6;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 200));
  if ((cVar1 == '\0') && (cVar1 = IsActivityDays(this), cVar1 != '\0')) {
    uVar6 = *(undefined8 *)(this + 200);
    iVar2 = FUN_04445d20(uVar6,*(undefined8 *)(this + 0xd0));
    lVar5 = 0;
    if (1 < iVar2) {
      iVar2 = Sexy::Rand(iVar2);
      uVar6 = *(undefined8 *)(this + 200);
      lVar5 = (long)iVar2;
    }
    this_00 = gLawnApp;
    psVar3 = (string *)FUN_04445d2c(uVar6,lVar5);
    lVar5 = LawnApp::GetUIImageInfoFromStringId(this_00,psVar3);
    if (lVar5 != 0) {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_0444d27c;
    }
  }
  pRVar4 = (ResourceInfo *)0x0;
LAB_0444d27c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar4);
}


/* ActivityConfig::GetStorePlantGiftImageBySku(std::string const&, std::string&) */

char __thiscall
ActivityConfig::GetStorePlantGiftImageBySku(ActivityConfig *this,string *param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<PlantGiftData,std::allocator<PlantGiftData>>::empty
                    ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  if (cVar1 != '\0') {
    return '\0';
  }
  uVar5 = *(undefined8 *)(this + 0x440);
  lVar2 = FUN_04445e38(uVar5,*(undefined8 *)(this + 0x448));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return '\0';
    }
    psVar3 = (string *)FUN_04445e74(uVar5,lVar4);
    cVar1 = std::operator==(param_1,psVar3);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  thunk_FUN_05475e00(param_2,psVar3 + 0x10);
  return cVar1;
}


/* ActivityConfig::GetStorePlantGiftLevelDiscountImageSBySku(std::string const&, int, std::string&)
    */

char __thiscall
ActivityConfig::GetStorePlantGiftLevelDiscountImageSBySku
          (ActivityConfig *this,string *param_1,int param_2,string *param_3)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  cVar1 = std::vector<PlantGiftData,std::allocator<PlantGiftData>>::empty
                    ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  if (cVar1 == '\0') {
    uVar9 = *(undefined8 *)(this + 0x440);
    lVar2 = FUN_04445e38(uVar9,*(undefined8 *)(this + 0x448));
    for (lVar8 = 0; lVar8 != lVar2; lVar8 = lVar8 + 1) {
      psVar3 = (string *)FUN_04445e74(uVar9,lVar8);
      cVar1 = std::operator==(param_1,psVar3);
      if (cVar1 != '\0') {
        uVar7 = *(undefined8 *)(psVar3 + 0x20);
        lVar4 = FUN_04445e84(uVar7,*(undefined8 *)(psVar3 + 0x28));
        lVar6 = 0;
        while (lVar6 != lVar4) {
          piVar5 = (int *)FUN_04445eac(uVar7,lVar6);
          lVar6 = lVar6 + 1;
          if (*piVar5 == param_2) {
            thunk_FUN_05475e00(param_3,piVar5 + 2);
            return cVar1;
          }
        }
      }
    }
  }
  return '\0';
}


/* ActivityConfig::GetStorePlantGiftLevelDiscountImageSByPlantName(std::string const&, int,
   std::string&) */

char __thiscall
ActivityConfig::GetStorePlantGiftLevelDiscountImageSByPlantName
          (ActivityConfig *this,string *param_1,int param_2,string *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  cVar1 = std::vector<PlantGiftData,std::allocator<PlantGiftData>>::empty
                    ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  if (cVar1 == '\0') {
    uVar8 = *(undefined8 *)(this + 0x440);
    lVar2 = FUN_04445e38(uVar8,*(undefined8 *)(this + 0x448));
    for (lVar7 = 0; lVar7 != lVar2; lVar7 = lVar7 + 1) {
      lVar3 = FUN_04445e74(uVar8,lVar7);
      cVar1 = std::operator==(param_1,(string *)(lVar3 + 8));
      if (cVar1 != '\0') {
        uVar6 = *(undefined8 *)(lVar3 + 0x20);
        lVar4 = FUN_04445e84(uVar6,*(undefined8 *)(lVar3 + 0x28));
        lVar3 = 0;
        while (lVar3 != lVar4) {
          piVar5 = (int *)FUN_04445eac(uVar6,lVar3);
          lVar3 = lVar3 + 1;
          if (*piVar5 == param_2) {
            thunk_FUN_05475e00(param_3,piVar5 + 2);
            return cVar1;
          }
        }
      }
    }
  }
  return '\0';
}


/* ActivityConfig::GetStorePlantGiftLevelDiscountBySku(std::string const&, int) const */

int __thiscall
ActivityConfig::GetStorePlantGiftLevelDiscountBySku
          (ActivityConfig *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  cVar1 = std::vector<PlantGiftData,std::allocator<PlantGiftData>>::empty
                    ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  if (cVar1 == '\0') {
    uVar9 = *(undefined8 *)(this + 0x440);
    lVar2 = FUN_04445e38(0,uVar9,*(undefined8 *)(this + 0x448));
    for (lVar8 = 0; lVar8 != lVar2; lVar8 = lVar8 + 1) {
      psVar3 = (string *)FUN_04445eb4(uVar9,lVar8);
      cVar1 = std::operator==(param_1,psVar3);
      if (cVar1 != '\0') {
        uVar7 = *(undefined8 *)(psVar3 + 0x20);
        lVar4 = FUN_04445e84(uVar7,*(undefined8 *)(psVar3 + 0x28));
        lVar6 = 0;
        while (lVar6 != lVar4) {
          piVar5 = (int *)FUN_04445ec4(uVar7,lVar6);
          lVar6 = lVar6 + 1;
          if (*piVar5 == param_2) {
            return piVar5[1];
          }
        }
      }
    }
  }
  return 0;
}


/* ActivityConfig::GetStorePlantGiftLevelDiscountByPlantName(std::string const&, int) const */

int __thiscall
ActivityConfig::GetStorePlantGiftLevelDiscountByPlantName
          (ActivityConfig *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  cVar1 = std::vector<PlantGiftData,std::allocator<PlantGiftData>>::empty
                    ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  if (cVar1 == '\0') {
    uVar8 = *(undefined8 *)(this + 0x440);
    lVar2 = FUN_04445e38(0,uVar8,*(undefined8 *)(this + 0x448));
    for (lVar7 = 0; lVar7 != lVar2; lVar7 = lVar7 + 1) {
      lVar3 = FUN_04445eb4(uVar8,lVar7);
      cVar1 = std::operator==(param_1,(string *)(lVar3 + 8));
      if (cVar1 != '\0') {
        uVar6 = *(undefined8 *)(lVar3 + 0x20);
        lVar4 = FUN_04445e84(uVar6,*(undefined8 *)(lVar3 + 0x28));
        lVar3 = 0;
        while (lVar3 != lVar4) {
          piVar5 = (int *)FUN_04445ec4(uVar6,lVar3);
          lVar3 = lVar3 + 1;
          if (*piVar5 == param_2) {
            return piVar5[1];
          }
        }
      }
    }
  }
  return 0;
}


/* ActivityConfig::GetStorePlantGiftLevelActidByPlantName(std::string const&) */

undefined4 __thiscall
ActivityConfig::GetStorePlantGiftLevelActidByPlantName(ActivityConfig *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<PlantGiftData,std::allocator<PlantGiftData>>::empty
                    ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(this + 0x440);
    lVar2 = FUN_04445e38(uVar5,*(undefined8 *)(this + 0x448));
    lVar4 = 0;
    while (lVar4 != lVar2) {
      lVar3 = FUN_04445e74(uVar5,lVar4);
      cVar1 = std::operator==(param_1,(string *)(lVar3 + 8));
      lVar4 = lVar4 + 1;
      if (cVar1 != '\0') {
        return *(undefined4 *)(lVar3 + 0x18);
      }
    }
  }
  return 0;
}


/* ActivityConfig::ActivityConfig() */

void __thiscall ActivityConfig::ActivityConfig(ActivityConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 0xc) = 5;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_0684aee0;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x10));
  Set8BytesTo0(this + 0x18);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x20));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x28));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x30));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x38));
  NoticeContentData::NoticeContentData((NoticeContentData *)(this + 0x40));
  ScrollBarBarkData::ScrollBarBarkData((ScrollBarBarkData *)(this + 0x60));
  TipsData::TipsData((TipsData *)(this + 0x98));
  StorePlantGiftsActivatedData::StorePlantGiftsActivatedData
            ((StorePlantGiftsActivatedData *)(this + 0xe0));
  StorePlantGiftsActivatedData::StorePlantGiftsActivatedData
            ((StorePlantGiftsActivatedData *)(this + 0xec));
  DangerRoomActivatedData::DangerRoomActivatedData((DangerRoomActivatedData *)(this + 0xf8));
  SpringBossActivatedData::SpringBossActivatedData((SpringBossActivatedData *)(this + 0x110));
  SpringGiftActivatedData::SpringGiftActivatedData((SpringGiftActivatedData *)(this + 0x150));
  ChristmasAccessoryData::ChristmasAccessoryData((ChristmasAccessoryData *)(this + 0x178));
  GoldenEggData::GoldenEggData((GoldenEggData *)(this + 0x1e0));
  ChristmasProtectData::ChristmasProtectData((ChristmasProtectData *)(this + 0x230));
  ChristmasLotteryData::ChristmasLotteryData((ChristmasLotteryData *)(this + 600));
  BossFightActivateData::BossFightActivateData((BossFightActivateData *)(this + 0x2b0));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x2e8));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x2f0));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x2f8));
  StorePlantGiftsActivatedData::StorePlantGiftsActivatedData
            ((StorePlantGiftsActivatedData *)(this + 0x300));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x310));
  RedPackActivedData::RedPackActivedData((RedPackActivedData *)(this + 0x328));
  RedPackActivedData::RedPackActivedData((RedPackActivedData *)(this + 0x338));
  StorePlantGiftsActivatedData::StorePlantGiftsActivatedData
            ((StorePlantGiftsActivatedData *)(this + 0x348));
  ActivityRechargePlantPieceData::ActivityRechargePlantPieceData
            ((ActivityRechargePlantPieceData *)(this + 0x358));
  ConsumptionActivedData::ConsumptionActivedData((ConsumptionActivedData *)(this + 0x380));
  Set8BytesTo0(this + 0x3a0);
  this[0x3a8] = (ActivityConfig)0x0;
  this[0x3a9] = (ActivityConfig)0x0;
  this[0x3aa] = (ActivityConfig)0x0;
  *(undefined4 *)(this + 0x3ac) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x410));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x428));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x440));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x458));
  return;
}


/* ActivityConfig::StaticNew() */

ActivityConfig * ActivityConfig::StaticNew(void)

{
  ActivityConfig *this;
  
  this = ::operator_new(0x470);
  ActivityConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetConsumptionValidTopic() */

void ActivityConfig::GetConsumptionValidTopic(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  long in_x0;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  FUN_05474ff8();
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  if ((0 < lVar2) && (*(char *)(in_x0 + 0x380) != '\0')) {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(in_x0 + 0x388);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this);
    local_18 = FUN_04450e78(uVar3,uVar4);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      thunk_FUN_05475e00();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityConfig::GetGoldenEggList() */

vector<int,std::allocator<int>> * ActivityConfig::GetGoldenEggList(void)

{
  long in_x0;
  vector<int,std::allocator<int>> *in_x8;
  
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(in_x0 + 0x200));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetCurrentPieceDropPercentArray(std::string const&, FestivalGameLevel) const */

void ActivityConfig::GetCurrentPieceDropPercentArray
               (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                *param_1_00,long param_1,string *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<float,std::allocator<float>>::clear((vector<float,std::allocator<float>> *)avStack_20)
  ;
  cVar1 = std::vector<PieceDropData,std::allocator<PieceDropData>>::empty
                    ((vector<PieceDropData,std::allocator<PieceDropData>> *)(param_1 + 0x428));
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x428);
    lVar2 = FUN_04445de4(uVar5,*(undefined8 *)(param_1 + 0x430));
    lVar4 = 0;
    do {
      if (lVar4 == lVar2) goto LAB_04451078;
      psVar3 = (string *)FUN_04445e20(uVar5,lVar4);
      cVar1 = std::operator==(param_3,psVar3);
      lVar4 = lVar4 + 1;
    } while (cVar1 == '\0');
    if (param_4 == 1) {
      std::vector<float,std::allocator<float>>::vector
                ((vector<float,std::allocator<float>> *)param_1_00,(vector *)(psVar3 + 0x20));
    }
    else if ((param_4 == 0) || (param_4 != 2)) {
      std::vector<float,std::allocator<float>>::vector
                ((vector<float,std::allocator<float>> *)param_1_00,(vector *)(psVar3 + 8));
    }
    else {
      std::vector<float,std::allocator<float>>::vector
                ((vector<float,std::allocator<float>> *)param_1_00,(vector *)(psVar3 + 0x38));
    }
  }
  else {
LAB_04451078:
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1_00,(vector *)avStack_20);
  }
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetGetWeeklyGameModesPlantArray(FestivalGameMode, FestivalGameLevel, EArrayType,
   std::vector<std::string, std::allocator<std::string > >&) */

void __thiscall
ActivityConfig::GetGetWeeklyGameModesPlantArray
          (ActivityConfig *this,int param_2,int param_3,int param_4,
          vector<std::string,std::allocator<std::string>> *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  string *psVar8;
  PlantType *pPVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = std::vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>>::empty
                    ((vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>> *)
                     (this + 0x3f8));
  if (cVar3 == '\0') {
    if (param_2 == 3) {
      param_2 = 0;
    }
    lVar13 = 0;
    std::vector<std::string,std::allocator<std::string>>::clear(param_5);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar14 = *(undefined8 *)(this + 0x3f8);
    lVar4 = FUN_04445d64(uVar14,*(undefined8 *)(this + 0x400));
    if (lVar4 != 0) {
      do {
        piVar5 = (int *)FUN_04445dd0(uVar14,lVar13);
        if (param_2 == *piVar5) {
          uVar11 = *(undefined8 *)(piVar5 + 2);
          lVar6 = FUN_04445d94(uVar11,*(undefined8 *)(piVar5 + 4));
          for (lVar10 = 0; lVar10 != lVar6; lVar10 = lVar10 + 1) {
            piVar5 = (int *)FUN_04445dd8(uVar11,lVar10);
            if (*piVar5 == param_3) {
              if (param_4 == 1) {
                uVar7 = FUN_04445d20(*(undefined8 *)(piVar5 + 0xc),*(undefined8 *)(piVar5 + 0xe));
                if (uVar7 != 0) {
                  uVar12 = 0;
                  std::vector<std::string,std::allocator<std::string>>::reserve(param_5,uVar7);
                  while( true ) {
                    lVar4 = FUN_04445dd0(*(undefined8 *)(this + 0x3f8),lVar13);
                    lVar4 = FUN_04445dd8(*(undefined8 *)(lVar4 + 8),lVar10);
                    uVar14 = *(undefined8 *)(lVar4 + 0x30);
                    uVar7 = FUN_04445d20(uVar14,*(undefined8 *)(lVar4 + 0x38));
                    if (uVar7 <= uVar12) break;
                    uVar14 = FUN_04445d2c(uVar14,uVar12);
                    FUN_05475d88(asStack_18,uVar14);
                    psVar8 = (string *)
                             Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
                    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
                    pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                    lVar4 = PlantType::GetProps(pPVar9);
                    iVar1 = *(int *)(lVar4 + 0x2c);
                    pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                    lVar4 = PlantType::GetProps(pPVar9);
                    iVar2 = *(int *)(lVar4 + 0x28);
                    cVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_18);
                    if (((cVar3 == '\0') || (iVar1 != iVar2)) ||
                       (lVar4 = FUN_04445dd0(*(undefined8 *)(this + 0x3f8),lVar13),
                       *(char *)(lVar4 + 4) != '\0')) {
                      uVar12 = uVar12 + 1;
                      std::vector<std::string,std::allocator<std::string>>::push_back
                                (param_5,asStack_18);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                      std::string::~string(asStack_18);
                    }
                    else {
                      uVar12 = uVar12 + 1;
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                      std::string::~string(asStack_18);
                    }
                  }
                  goto LAB_04451904;
                }
              }
              else if (param_4 == 0) {
                uVar7 = FUN_04445d20(*(undefined8 *)(piVar5 + 6),*(undefined8 *)(piVar5 + 8));
                if (uVar7 != 0) {
                  uVar12 = 0;
                  std::vector<std::string,std::allocator<std::string>>::reserve(param_5,uVar7);
                  while( true ) {
                    lVar4 = FUN_04445dd0(*(undefined8 *)(this + 0x3f8),lVar13);
                    lVar4 = FUN_04445dd8(*(undefined8 *)(lVar4 + 8),lVar10);
                    uVar14 = *(undefined8 *)(lVar4 + 0x18);
                    uVar7 = FUN_04445d20(uVar14,*(undefined8 *)(lVar4 + 0x20));
                    if (uVar7 <= uVar12) break;
                    uVar14 = FUN_04445d2c(uVar14,uVar12);
                    FUN_05475d88(asStack_18,uVar14);
                    psVar8 = (string *)
                             Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
                    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
                    pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                    lVar4 = PlantType::GetProps(pPVar9);
                    iVar1 = *(int *)(lVar4 + 0x2c);
                    pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                    lVar4 = PlantType::GetProps(pPVar9);
                    iVar2 = *(int *)(lVar4 + 0x28);
                    cVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_18);
                    if (((cVar3 == '\0') || (iVar1 != iVar2)) ||
                       (lVar4 = FUN_04445dd0(*(undefined8 *)(this + 0x3f8),lVar13),
                       *(char *)(lVar4 + 4) != '\0')) {
                      uVar12 = uVar12 + 1;
                      std::vector<std::string,std::allocator<std::string>>::push_back
                                (param_5,asStack_18);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                      std::string::~string(asStack_18);
                    }
                    else {
                      uVar12 = uVar12 + 1;
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                      std::string::~string(asStack_18);
                    }
                  }
                  goto LAB_04451904;
                }
              }
              else if ((param_4 == 2) &&
                      (uVar7 = FUN_04445d20(*(undefined8 *)(piVar5 + 0x12),
                                            *(undefined8 *)(piVar5 + 0x14)), uVar7 != 0)) {
                uVar12 = 0;
                std::vector<std::string,std::allocator<std::string>>::reserve(param_5,uVar7);
                while( true ) {
                  lVar4 = FUN_04445dd0(*(undefined8 *)(this + 0x3f8),lVar13);
                  lVar4 = FUN_04445dd8(*(undefined8 *)(lVar4 + 8),lVar10);
                  uVar14 = *(undefined8 *)(lVar4 + 0x48);
                  uVar7 = FUN_04445d20(uVar14,*(undefined8 *)(lVar4 + 0x50));
                  if (uVar7 <= uVar12) break;
                  uVar14 = FUN_04445d2c(uVar14,uVar12);
                  FUN_05475d88(asStack_18,uVar14);
                  psVar8 = (string *)
                           Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
                  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
                  pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                  lVar4 = PlantType::GetProps(pPVar9);
                  iVar1 = *(int *)(lVar4 + 0x2c);
                  pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                  lVar4 = PlantType::GetProps(pPVar9);
                  iVar2 = *(int *)(lVar4 + 0x28);
                  cVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_18);
                  if (((cVar3 == '\0') || (iVar1 != iVar2)) ||
                     (lVar4 = FUN_04445dd0(*(undefined8 *)(this + 0x3f8),lVar13),
                     *(char *)(lVar4 + 4) != '\0')) {
                    uVar12 = uVar12 + 1;
                    std::vector<std::string,std::allocator<std::string>>::push_back
                              (param_5,asStack_18);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                    std::string::~string(asStack_18);
                  }
                  else {
                    uVar12 = uVar12 + 1;
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                    std::string::~string(asStack_18);
                  }
                }
LAB_04451904:
                uVar14 = 1;
                goto LAB_044515d4;
              }
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar4);
    }
  }
  uVar14 = 0;
LAB_044515d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}


/* ActivityConfig::~ActivityConfig() */

void __thiscall ActivityConfig::~ActivityConfig(ActivityConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684aee0;
  std::vector<WorldMapActivityPieceLevelData,std::allocator<WorldMapActivityPieceLevelData>>::
  ~vector((vector<WorldMapActivityPieceLevelData,std::allocator<WorldMapActivityPieceLevelData>> *)
          (this + 0x458));
  std::vector<PlantGiftData,std::allocator<PlantGiftData>>::~vector
            ((vector<PlantGiftData,std::allocator<PlantGiftData>> *)(this + 0x440));
  std::vector<PieceDropData,std::allocator<PieceDropData>>::~vector
            ((vector<PieceDropData,std::allocator<PieceDropData>> *)(this + 0x428));
  std::vector<WeeklyGameModesCount,std::allocator<WeeklyGameModesCount>>::~vector
            ((vector<WeeklyGameModesCount,std::allocator<WeeklyGameModesCount>> *)(this + 0x410));
  std::vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>>::~vector
            ((vector<SpecialGameLevelGroup,std::allocator<SpecialGameLevelGroup>> *)(this + 0x3f8));
  std::vector<DiscountPlant,std::allocator<DiscountPlant>>::~vector
            ((vector<DiscountPlant,std::allocator<DiscountPlant>> *)(this + 0x3e0));
  std::vector<GeneralSaleProp,std::allocator<GeneralSaleProp>>::~vector
            ((vector<GeneralSaleProp,std::allocator<GeneralSaleProp>> *)(this + 0x3c8));
  std::
  vector<std::vector<FestivalGameMode,std::allocator<FestivalGameMode>>,std::allocator<std::vector<FestivalGameMode,std::allocator<FestivalGameMode>>>>
  ::~vector((vector<std::vector<FestivalGameMode,std::allocator<FestivalGameMode>>,std::allocator<std::vector<FestivalGameMode,std::allocator<FestivalGameMode>>>>
             *)(this + 0x3b0));
  std::string::~string((string *)(this + 0x3a0));
  ConsumptionActivedData::~ConsumptionActivedData((ConsumptionActivedData *)(this + 0x380));
  WakeupRet::~WakeupRet((WakeupRet *)(this + 0x358));
  std::vector<StorePlantGiftsActivatedData,std::allocator<StorePlantGiftsActivatedData>>::~vector
            ((vector<StorePlantGiftsActivatedData,std::allocator<StorePlantGiftsActivatedData>> *)
             (this + 0x310));
  BossFightActivateData::~BossFightActivateData((BossFightActivateData *)(this + 0x2b0));
  ChristmasLotteryData::~ChristmasLotteryData((ChristmasLotteryData *)(this + 600));
  ChristmasProtectData::~ChristmasProtectData((ChristmasProtectData *)(this + 0x230));
  GoldenEggData::~GoldenEggData((GoldenEggData *)(this + 0x1e0));
  ChristmasAccessoryData::~ChristmasAccessoryData((ChristmasAccessoryData *)(this + 0x178));
  SpringGiftActivatedData::~SpringGiftActivatedData((SpringGiftActivatedData *)(this + 0x150));
  SpringBossActivatedData::~SpringBossActivatedData((SpringBossActivatedData *)(this + 0x110));
  TipsData::~TipsData((TipsData *)(this + 0x98));
  ScrollBarBarkData::~ScrollBarBarkData((ScrollBarBarkData *)(this + 0x60));
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)(this + 0x40));
  std::string::~string((string *)(this + 0x18));
  nop();
  return;
}


/* ActivityConfig::~ActivityConfig() */

void __thiscall ActivityConfig::~ActivityConfig(ActivityConfig *this)

{
  ~ActivityConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::StaticClassInit() */

void ActivityConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"yeti",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"gargantuar",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"devil",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"wealth",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"FestivalGameMode");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Normal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Hard",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Legend",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"FestivalGameLevel");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ActivityDateData");
    (*pcVar3)(plVar2,avStack_20,FUN_04444a9c,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"NoticeContentData");
    (*pcVar3)(plVar2,avStack_20,FUN_044470d4,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Rand",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"List",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Loop",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"EBarkType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"BarkPropertyData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444ac14,0x18,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ScrollBarBarkData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444aebc,0x38,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"TipsPropertyData");
    (*pcVar3)(plVar2,avStack_20,FUN_04446f88,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"TipsData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444b080,0x48,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"DailyAchievementActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_04445a00,0xc,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"StoreGiftsActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444583c,0xc,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GachaRewardItem");
    (*pcVar3)(plVar2,avStack_20,FUN_044448dc,0xc,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"DangerRoomActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_044455a0,0x14,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"SpringBossActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_04451108,0x40,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"SSpringRewardInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_0444dab4,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"SpringGiftActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444dcac,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ChristmasAccessoryBonus");
    (*pcVar3)(plVar2,avStack_20,FUN_044446b0,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ChristmasAccessoryData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444dff4,0x68,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GoldenEggProbility");
    (*pcVar3)(plVar2,avStack_20,FUN_044453dc,0xc,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GoldenEggData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444e564,0x50,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ChristmasProtectData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444edec,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ChristmasLotteryData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444ea64,0x58,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"BossLevel");
    (*pcVar3)(plVar2,avStack_20,FUN_04446e34,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"BossFightBonus");
    (*pcVar3)(plVar2,avStack_20,FUN_04446c70,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"BossFightActivateData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444f170,0x38,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"CommonActivateData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444455c,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"DiscountPlant");
    (*pcVar3)(plVar2,avStack_20,FUN_044469cc,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GeneralSaleProp");
    (*pcVar3)(plVar2,avStack_20,FUN_04446728,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantNameArray");
    (*pcVar3)(plVar2,avStack_20,FUN_0444b3e0,0x60,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"SpecialGameLevelRefreshData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444b7d8,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"SpecialGameLevelGroup");
    (*pcVar3)(plVar2,avStack_20,FUN_0444f454,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"WeeklyGameModesCount");
    (*pcVar3)(plVar2,avStack_20,FUN_0444b930,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PieceDropData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444bab0,0x68,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LanternRiddlesActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_044451ac,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"RedPackActivedData");
    (*pcVar3)(plVar2,avStack_20,FUN_04444f7c,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"RedPackClosedData");
    (*pcVar3)(plVar2,avStack_20,FUN_04444db8,0xc,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"StorePlantGiftsActivatedData");
    (*pcVar3)(plVar2,avStack_20,FUN_04444bf4,0xc,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LevelGem");
    (*pcVar3)(plVar2,avStack_20,FUN_0444656c,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantGiftData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444f6c0,0x38,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ActivityRechargePlantPieceData");
    (*pcVar3)(plVar2,avStack_20,FUN_044462cc,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"WorldMapActivityPieceLevelData");
    (*pcVar3)(plVar2,avStack_20,FUN_04446180,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ConsumptionActivedItem");
    (*pcVar3)(plVar2,avStack_20,FUN_04445fbc,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ConsumptionActivedData");
    (*pcVar3)(plVar2,avStack_20,FUN_0444fa7c,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"MysteryCrystalDrop");
    (*pcVar3)(plVar2,avStack_20,FUN_04444408,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ActivityConfig");
    (*pcVar3)(plVar2,avStack_20,FUN_04452e4c,0x470,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityConfig::StaticGetClass() */

long * ActivityConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ActivityConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityConfig::GetClass() const */

long * ActivityConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ActivityConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::RollChristmasAccessoryIndex(int) */

void __thiscall ActivityConfig::RollChristmasAccessoryIndex(ActivityConfig *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 local_48;
  undefined8 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  if (param_1 == 2) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1b0));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,*piVar3,piVar3[3]);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    }
  }
  else if (param_1 == 3) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1c8));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,*piVar3,piVar3[3]);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    }
  }
  else if (param_1 == 1) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x198));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x198));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,*piVar3,piVar3[3]);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    }
  }
  uVar2 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::RollGoldenEggPieceCount() */

void __thiscall ActivityConfig::RollGoldenEggPieceCount(ActivityConfig *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x218));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x218));
  if (this_01 == (PlayerInfo *)0x0) {
    iVar4 = 0;
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar3)
    {
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar4,*(int *)(lVar7 + 4));
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_50);
      iVar4 = iVar4 + 1;
    }
    iVar4 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
    lVar7 = (long)iVar4;
  }
  else {
    iVar4 = 1;
    while( true ) {
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
      if (!bVar3) break;
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      iVar1 = *(int *)(lVar7 + 4);
      cVar2 = PlayerInfo::IsOpenedIndex(this_01,iVar4 + -1);
      if (cVar2 == '\0') {
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar4 + -1,iVar1);
      }
      iVar4 = iVar4 + 1;
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_50);
    }
    iVar4 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
    lVar7 = (long)iVar4;
    lVar5 = FUN_04445bc8(*(undefined8 *)(this + 0x218),lVar7);
    if (*(char *)(lVar5 + 8) == '\0') {
      PlayerInfo::AddToGoldenEggOpenedInfo((int)this_01,SUB41(iVar4,0));
    }
    else {
      PlayerInfo::ResetGoldenEggOpenedInfo(this_01,true);
    }
  }
  puVar6 = (undefined8 *)FUN_04445bc8(*(undefined8 *)(this + 0x218),lVar7);
  local_48 = *puVar6;
  local_40 = *(undefined4 *)(puVar6 + 1);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48,local_40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityConfig::GetBossFightBonusPieceCount(int) */

void __thiscall ActivityConfig::GetBossFightBonusPieceCount(ActivityConfig *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04445bd4(*(undefined8 *)(this + 0x2b8),*(undefined8 *)(this + 0x2c0));
  if ((ulong)(long)param_1 < uVar3) {
    lVar4 = FUN_04445c2c(*(undefined8 *)(this + 0x2d0),(long)param_1);
    iVar1 = *(int *)(lVar4 + 8);
    iVar5 = *(int *)(lVar4 + 0xc);
  }
  else {
    lVar4 = FUN_04445c2c(*(undefined8 *)(this + 0x2d0),0);
    iVar1 = *(int *)(lVar4 + 8);
    iVar5 = *(int *)(lVar4 + 0xc);
  }
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  for (; iVar1 <= iVar5; iVar1 = iVar1 + 1) {
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar1,1);
  }
  uVar2 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

