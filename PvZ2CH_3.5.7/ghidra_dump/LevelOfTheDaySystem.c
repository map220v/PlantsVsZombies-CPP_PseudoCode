// Class: LevelOfTheDaySystem


/* LevelOfTheDaySystem::~LevelOfTheDaySystem() */

void __thiscall LevelOfTheDaySystem::~LevelOfTheDaySystem(LevelOfTheDaySystem *this)

{
  *(undefined ***)this = &PTR__LevelOfTheDaySystem_06925300;
  Sexy::LazySingleton<LevelOfTheDaySystem>::~LazySingleton
            ((LazySingleton<LevelOfTheDaySystem> *)this);
  return;
}


/* LevelOfTheDaySystem::~LevelOfTheDaySystem() */

void __thiscall LevelOfTheDaySystem::~LevelOfTheDaySystem(LevelOfTheDaySystem *this)

{
  ~LevelOfTheDaySystem(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDaySystem::IsCheatScheduleActive() const */

bool __thiscall LevelOfTheDaySystem::IsCheatScheduleActive(LevelOfTheDaySystem *this)

{
  return *(long *)(this + 0x10) != 0;
}


/* LevelOfTheDaySystem::setCurLotdAcType(LevelOfTheDay_AcitivityType) */

void __thiscall LevelOfTheDaySystem::setCurLotdAcType(LevelOfTheDaySystem *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1c) = param_2;
  return;
}


/* LevelOfTheDaySystem::getCurActivityTypeID() const */

undefined4 __thiscall LevelOfTheDaySystem::getCurActivityTypeID(LevelOfTheDaySystem *this)

{
  undefined4 uVar1;
  
  uVar1 = 0x2991;
  if (*(int *)(this + 0x1c) - 1U < 8) {
    uVar1 = *(undefined4 *)(&DAT_05754cd0 + (ulong)(*(int *)(this + 0x1c) - 1U) * 4);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::attemptPurchaseLODReplay() */

void LevelOfTheDaySystem::attemptPurchaseLODReplay(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::onReplayForCoinsDialogClosed() */

void LevelOfTheDaySystem::onReplayForCoinsDialogClosed(void)

{
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* LevelOfTheDaySystem::Initialize() */

void LevelOfTheDaySystem::Initialize(void)

{
  nop();
  nop();
  return;
}


/* LevelOfTheDaySystem::getDeviceUTCTime() const */

void __thiscall LevelOfTheDaySystem::getDeviceUTCTime(LevelOfTheDaySystem *this)

{
  TimeMgr::GetDate(*(TimeMgr **)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::UpdateActiveLevelForProfile(PlayerInfo*, bool&) const */

void __thiscall
LevelOfTheDaySystem::UpdateActiveLevelForProfile
          (LevelOfTheDaySystem *this,PlayerInfo *param_1,bool *param_2)

{
  char cVar1;
  Toggles *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"LevelOfTheDay");
  cVar1 = Toggles::IsEnabled(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    nop();
    *param_2 = false;
    EA::Thread::GetModuleHandleFromAddress(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::PickLevelNameForProfile(std::string&, PlayerInfo*) const */

void LevelOfTheDaySystem::PickLevelNameForProfile(string *param_1,PlayerInfo *param_2)

{
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = EA::Thread::GetModuleHandleFromAddress(param_1);
  uVar3 = 0;
  if (lVar2 != 0) {
    std::string::string(asStack_10,"");
    nop();
    cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)param_1);
    if (cVar1 == '\0') {
      cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)param_1);
      if (cVar1 == '\0') {
        std::string::~string(asStack_10);
        uVar3 = 0;
        goto LAB_049b6640;
      }
      thunk_FUN_05475e00(asStack_10,lVar2 + 0x30);
    }
    else {
      thunk_FUN_05475e00(asStack_10,lVar2 + 0x28);
    }
    uVar3 = 1;
    thunk_FUN_05475e00(param_2,asStack_10);
    std::string::~string(asStack_10);
  }
LAB_049b6640:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* LevelOfTheDaySystem::isLevelScheduleCurrent(LevelOfTheDaySchedule const*) const */

bool __thiscall
LevelOfTheDaySystem::isLevelScheduleCurrent
          (LevelOfTheDaySystem *this,LevelOfTheDaySchedule *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = EA::Thread::GetModuleHandleFromAddress(this);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = LevelOfTheDaySchedule::AvailableTimeInSeconds(param_1);
  return lVar1 <= lVar3 + lVar2 && lVar3 <= lVar1;
}


/* LevelOfTheDaySystem::isScheduleValid(LevelOfTheDaySchedule const*) const */

undefined8 LevelOfTheDaySystem::isScheduleValid(LevelOfTheDaySchedule *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  if ((in_x1 != 0) &&
     (cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        ((wchar16 *)param_1,(wchar16 *)(in_x1 + 0x28),in_x2,in_x3,in_x4),
     cVar1 != '\0')) {
    uVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)param_1,(wchar16 *)(in_x1 + 0x30),in_x2,in_x3,in_x4);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::calculateSenorPinataProgressIndex(int, int) */

void LevelOfTheDaySystem::calculateSenorPinataProgressIndex(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (param_1 + -1) / param_2;
  }
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  local_c = ((param_1 + -1) - iVar1 * param_2) + 1;
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::calculateNewSenorPinataOffset(int, int, int) */

void LevelOfTheDaySystem::calculateNewSenorPinataOffset(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    local_10 = calculateSenorPinataProgressIndex(param_1,param_2);
    local_10 = param_2 - local_10;
    iVar1 = calculateSenorPinataProgressIndex(param_1,param_3);
    local_c = param_3 + -1;
    piVar2 = eastl::min_alt<int>(&local_10,&local_c);
    iVar1 = (param_3 - iVar1) - *piVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* LevelOfTheDaySystem::LevelOfTheDaySystem() */

void __thiscall LevelOfTheDaySystem::LevelOfTheDaySystem(LevelOfTheDaySystem *this)

{
  undefined8 uVar1;
  
  Sexy::LazySingleton<LevelOfTheDaySystem>::LazySingleton
            ((LazySingleton<LevelOfTheDaySystem> *)this);
  *(undefined ***)this = &PTR__LevelOfTheDaySystem_06925300;
  uVar1 = Sexy::LazySingleton<TimeMgr>::GetInstance();
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* LevelOfTheDaySystem::GetTotalNumDiscountedReplays() const */

int __thiscall LevelOfTheDaySystem::GetTotalNumDiscountedReplays(LevelOfTheDaySystem *this)

{
  char cVar1;
  ProfileMgr *pPVar2;
  long lVar3;
  
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar2);
    lVar3 = EA::Thread::GetModuleHandleFromAddress(this);
    if (lVar3 != 0) {
      if (-1 < *(int *)(lVar3 + 0x74)) {
        return *(int *)(lVar3 + 0x74);
      }
      return -1;
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::ActiveLevelHasBeenAttemptedByProfile(PlayerInfo*) const */

void LevelOfTheDaySystem::ActiveLevelHasBeenAttemptedByProfile(PlayerInfo *param_1)

{
  char cVar1;
  Toggles *this;
  void *pvVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"ReplayLODForCoins");
  cVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    pvVar2 = (void *)LevelOfTheDay::GetSystem();
    EA::Thread::GetModuleHandleFromAddress(pvVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::startLoDLevel() */

void LevelOfTheDaySystem::startLoDLevel(void)

{
  char cVar1;
  WorldMap *this;
  string *psVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  if (this == (WorldMap *)0x0) {
    Set8BytesTo0(asStack_18);
    psVar2 = (string *)LevelOfTheDay::GetSystem();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = PickLevelNameForProfile(psVar2,(PlayerInfo *)asStack_18);
    if (cVar1 != '\0') {
      uVar3 = FUN_0547429c(asStack_18);
      Sexy::StrFormat("[#43966] MainMenu::PlayLevelOfTheDay - Starting level of the day from main menu: %s"
                      ,asStack_10,uVar3);
      nop();
      std::string::~string(asStack_10);
    }
    std::string::~string(asStack_18);
  }
  else {
    WorldMap::PlayLevelOfTheDay(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDaySystem::AttemptStartLOD() */

undefined8 LevelOfTheDaySystem::AttemptStartLOD(void)

{
  char cVar1;
  PlayerInfo *pPVar2;
  ProfileMgr *this;
  undefined8 uVar3;
  
  pPVar2 = (PlayerInfo *)LevelOfTheDay::GetSystem();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  cVar1 = ActiveLevelHasBeenAttemptedByProfile(pPVar2);
  if (cVar1 != '\0') {
    uVar3 = attemptPurchaseLODReplay();
    return uVar3;
  }
  startLoDLevel();
  return 1;
}


/* LevelOfTheDaySystem::GetNumReplaysForCurrentLOD() */

undefined8 LevelOfTheDaySystem::GetNumReplaysForCurrentLOD(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  ProfileUtils::Profile();
  EA::Thread::GetModuleHandleFromAddress(pvVar1);
  return 0xffffffff;
}


/* LevelOfTheDaySystem::GetSenorPinataInterval() */

undefined4 __thiscall LevelOfTheDaySystem::GetSenorPinataInterval(LevelOfTheDaySystem *this)

{
  long lVar1;
  
  ProfileUtils::Profile();
  nop();
  lVar1 = LevelOfTheDay::GetProperties();
  return *(undefined4 *)(lVar1 + 0x30);
}


/* LevelOfTheDaySystem::WasLevelJustCompletedASenorPinataLevel() */

bool LevelOfTheDaySystem::WasLevelJustCompletedASenorPinataLevel(void)

{
  int iVar1;
  int iVar2;
  LevelOfTheDaySystem *in_x0;
  wchar16 *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  iVar1 = GetSenorPinataInterval(in_x0);
  iVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)in_x0,extraout_x1,in_x2,in_x3,in_x4);
  return iVar1 == iVar2;
}


/* LevelOfTheDaySystem::GetFinalSchedule() const */

undefined8 LevelOfTheDaySystem::GetFinalSchedule(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = LevelOfTheDay::GetProperties();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    lVar1 = FUN_049b5708(uVar2,*(undefined8 *)(lVar1 + 0x40));
    if (lVar1 != 0) {
      uVar2 = FUN_049b5730(uVar2,lVar1 + -1);
      return uVar2;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::GetCurrentSchedule() const */

void __thiscall LevelOfTheDaySystem::GetCurrentSchedule(LevelOfTheDaySystem *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  LevelOfTheDaySchedule *pLVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LevelOfTheDay::GetProperties();
  if (lVar3 == 0) {
    pLVar4 = (LevelOfTheDaySchedule *)0x0;
  }
  else {
    local_18 = FUN_049b6d54(*(undefined8 *)(lVar3 + 0x38));
    while( true ) {
      local_10 = FUN_049b6da4(*(undefined8 *)(lVar3 + 0x40));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      pLVar4 = (LevelOfTheDaySchedule *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((pLVar4 != (LevelOfTheDaySchedule *)0x0) &&
         (cVar1 = isLevelScheduleCurrent(this,pLVar4), cVar1 != '\0')) goto LAB_049b7134;
      __gnu_cxx::
      __normal_iterator<LevelOfTheDaySchedule*,std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>>
      ::operator++((__normal_iterator<LevelOfTheDaySchedule*,std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>>
                    *)&local_18);
    }
    pLVar4 = (LevelOfTheDaySchedule *)0x0;
  }
LAB_049b7134:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pLVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::GetCurrentHoliday() const */

void LevelOfTheDaySystem::GetCurrentHoliday(void)

{
  string *psVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  void *in_x0;
  ProfileMgr *pPVar5;
  long lVar6;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar3 = ProfileMgr::HasValidProfile(pPVar5);
  if (cVar3 != '\0') {
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar5);
    lVar6 = EA::Thread::GetModuleHandleFromAddress(in_x0);
    if (lVar6 != 0) {
      psVar1 = (string *)(lVar6 + 0x40);
      cVar3 = FUN_0547419c(psVar1);
      if (((cVar3 != '\0') || (bVar4 = std::operator!=(psVar1,"none"), !bVar4)) ||
         (cVar3 = isHolidayAllowedOnPlatform(psVar1), cVar3 == '\0')) goto LAB_049b71d0;
LAB_049b725c:
      FUN_05475d88();
      goto LAB_049b720c;
    }
LAB_049b71d0:
    lVar6 = LevelOfTheDay::GetProperties();
    if (lVar6 != 0) {
      cVar3 = isHolidayAllowedOnPlatform((string *)(lVar6 + 0xa0));
      if (cVar3 != '\0') goto LAB_049b725c;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_049b720c:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDaySystem::GetReplayCostCoins() const */

undefined4 __thiscall LevelOfTheDaySystem::GetReplayCostCoins(LevelOfTheDaySystem *this)

{
  char cVar1;
  ProfileMgr *pPVar2;
  long lVar3;
  
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar2);
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar2);
    EA::Thread::GetModuleHandleFromAddress(this);
  }
  lVar3 = LevelOfTheDay::GetProperties();
  return *(undefined4 *)(lVar3 + 0x34);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::getScheduleThatStartsAfter(long) const */

void __thiscall
LevelOfTheDaySystem::getScheduleThatStartsAfter(LevelOfTheDaySystem *this,long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LevelOfTheDay::GetProperties();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    local_18 = FUN_049b6d54(*(undefined8 *)(lVar2 + 0x38));
    while( true ) {
      local_10 = FUN_049b6da4(*(undefined8 *)(lVar2 + 0x40));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (((lVar4 == 0) || (*(long *)(lVar3 + 0x18) < *(long *)(lVar4 + 0x18))) &&
         (param_1 < *(long *)(lVar3 + 0x18))) {
        lVar4 = lVar3;
      }
      __gnu_cxx::
      __normal_iterator<LevelOfTheDaySchedule*,std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>>
      ::operator++((__normal_iterator<LevelOfTheDaySchedule*,std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>>
                    *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


/* LevelOfTheDaySystem::CheatScheduleNextLOD() */

void __thiscall LevelOfTheDaySystem::CheatScheduleNextLOD(LevelOfTheDaySystem *this)

{
  getScheduleThatStartsAfter(this,*(long *)(this + 0x10));
  return;
}


/* LevelOfTheDaySystem::CheatScheduleTodayLOD() */

void __thiscall LevelOfTheDaySystem::CheatScheduleTodayLOD(LevelOfTheDaySystem *this)

{
  TimeMgr *this_00;
  long lVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  this_00 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  lVar1 = TimeMgr::GetDate(this_00);
  getScheduleThatStartsAfter(this,lVar1);
  return;
}


/* LevelOfTheDaySystem::GetNextScheduleForProfile(PlayerInfo const*) const */

undefined8 LevelOfTheDaySystem::GetNextScheduleForProfile(PlayerInfo *param_1)

{
  LevelOfTheDay::GetProperties();
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::getScheduleFromUID(int) const */

void __thiscall LevelOfTheDaySystem::getScheduleFromUID(LevelOfTheDaySystem *this,int param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LevelOfTheDay::GetProperties();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    local_18 = FUN_049b6d54(*(undefined8 *)(lVar2 + 0x38));
    while( true ) {
      local_10 = FUN_049b6da4(*(undefined8 *)(lVar2 + 0x40));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(int *)(lVar3 + 0x10) == param_1) goto LAB_049b7470;
      __gnu_cxx::
      __normal_iterator<LevelOfTheDaySchedule*,std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>>
      ::operator++((__normal_iterator<LevelOfTheDaySchedule*,std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>>
                    *)&local_18);
    }
    lVar3 = 0;
  }
LAB_049b7470:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* LevelOfTheDaySystem::CheatSchedulePrevLOD() */

long __thiscall LevelOfTheDaySystem::CheatSchedulePrevLOD(LevelOfTheDaySystem *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = GetCurrentSchedule(this);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    while (0 < iVar1) {
      iVar1 = iVar1 + -1;
      lVar2 = getScheduleFromUID(this,iVar1);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::GetHolidayEventProps(std::string const&) */

void __thiscall LevelOfTheDaySystem::GetHolidayEventProps(LevelOfTheDaySystem *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LevelOfTheDay::GetProperties();
  lVar4 = 0;
  if (lVar3 != 0) {
    local_18 = FUN_049b6df4(*(undefined8 *)(lVar3 + 0x68));
    local_10 = FUN_049b6e44(*(undefined8 *)(lVar3 + 0x70));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(param_1,(string *)(lVar4 + 0x10));
      if (cVar1 != '\0') goto LAB_049b7598;
      __gnu_cxx::
      __normal_iterator<HolidayEventProperties*,std::vector<HolidayEventProperties,std::allocator<HolidayEventProperties>>>
      ::operator++((__normal_iterator<HolidayEventProperties*,std::vector<HolidayEventProperties,std::allocator<HolidayEventProperties>>>
                    *)&local_18);
    }
    lVar4 = 0;
  }
LAB_049b7598:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySystem::CanSpawnZombie(Sexy::RtWeakPtr<ZombieType const>) const */

void __thiscall
LevelOfTheDaySystem::CanSpawnZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = LevelOfTheDay::GetProperties();
  if ((this_00 != (PlayerInfo *)0x0) && (lVar2 != 0)) {
    uVar3 = FUN_049b6cb4(*(undefined8 *)(lVar2 + 0x10));
    uVar4 = FUN_049b6d04(*(undefined8 *)(lVar2 + 0x18));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ZombieType>const*,std::vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>>>,Sexy::RtWeakPtr<ZombieType_const>>
                         (uVar3,uVar4,param_2);
    local_10 = FUN_049b6d04(*(undefined8 *)(lVar2 + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      lVar2 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) {
        PlayerInfo::IsKilledZombie(this_00,(string *)(lVar5 + 8));
        return;
      }
      goto LAB_049b7b14;
    }
  }
  lVar2 = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_049b7b14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}

