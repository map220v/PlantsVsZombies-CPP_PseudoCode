// Class: StandardLevelIntro


/* StandardLevelIntro::StandardLevelIntro() */

void __thiscall StandardLevelIntro::StandardLevelIntro(StandardLevelIntro *this)

{
  IntroModule::IntroModule((IntroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684d6a0;
  return;
}


/* StandardLevelIntro::~StandardLevelIntro() */

void __thiscall StandardLevelIntro::~StandardLevelIntro(StandardLevelIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684d6a0;
  IntroModule::~IntroModule((IntroModule *)this);
  return;
}


/* StandardLevelIntro::~StandardLevelIntro() */

void __thiscall StandardLevelIntro::~StandardLevelIntro(StandardLevelIntro *this)

{
  ~StandardLevelIntro(this);
  AK::FreeHook(this);
  return;
}


/* StandardLevelIntro::onStandardIntroComplete() */

void StandardLevelIntro::onStandardIntroComplete(void)

{
  Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* StandardLevelIntro::StaticNew() */

StandardLevelIntro * StandardLevelIntro::StaticNew(void)

{
  StandardLevelIntro *this;
  
  this = ::operator_new(0x50);
  StandardLevelIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::StaticClassInit() */

void StandardLevelIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"StandardLevelIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_0446fbe8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandardLevelIntro::StaticGetClass() */

long * StandardLevelIntro::StaticGetClass(void)

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
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"StandardLevelIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StandardLevelIntro::initializeModule() */

void __thiscall StandardLevelIntro::initializeModule(StandardLevelIntro *this)

{
  char cVar1;
  
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x48) = 0;
  }
  return;
}


/* StandardLevelIntro::onPreSeedchooserIntroComplete() */

void __thiscall StandardLevelIntro::onPreSeedchooserIntroComplete(StandardLevelIntro *this)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  (**(code **)(*(long *)this + 0xe8))(this,*(undefined4 *)(this + 0x48),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::GetPanLocations(StandardLevelIntro::PanType, int&, int&) */

void StandardLevelIntro::GetPanLocations(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = 0;
  local_c = 0;
  Android::Graphics::GetScreenSizeInPixels
            (*(AndroidAppDriver **)(Sexy::gSexyAppBase + 0x10),&local_10,&local_c);
  if (((local_10 == 0x90c || (local_10 == 0x9d8 || (local_10 == 0x99c || local_10 == 0x960))) ||
      (local_10 == 0x924)) && (local_c == 0x438)) {
    bVar1 = true;
  }
  else {
    bVar1 = 2.1 <= (float)local_10 / (float)local_c;
  }
  piVar4 = (int *)Board::GetBoardPanLocations(*(Board **)(gLawnApp + 0x9f0));
  switch(param_1) {
  case 0:
    iVar3 = -*piVar4;
    break;
  case 1:
    iVar3 = piVar4[1];
    break;
  case 2:
    uVar2 = FUN_0446ef88(-piVar4[3]);
    *param_2 = uVar2;
    goto joined_r0x0446f388;
  case 3:
    iVar3 = piVar4[3];
    goto LAB_0446f2bc;
  case 4:
    if (!bVar1) {
      iVar3 = piVar4[2];
      goto LAB_0446f2bc;
    }
    uVar2 = FUN_0446ef88(piVar4[1]);
    goto LAB_0446f2c4;
  case 5:
    uVar2 = FUN_0446ef88(piVar4[1]);
    *param_2 = uVar2;
joined_r0x0446f388:
    if (bVar1) {
      uVar2 = FUN_0446ef88(piVar4[1]);
      *param_3 = uVar2;
    }
    else {
      uVar2 = FUN_0446ef88(-piVar4[2]);
      *param_3 = uVar2;
    }
  default:
    goto switchD_0446f2b4_caseD_6;
  case 7:
    iVar3 = *piVar4;
LAB_0446f2bc:
    uVar2 = FUN_0446ef88(-iVar3);
LAB_0446f2c4:
    *param_2 = uVar2;
    uVar2 = FUN_0446ef88(piVar4[1]);
    *param_3 = uVar2;
    goto switchD_0446f2b4_caseD_6;
  case 8:
    iVar3 = *piVar4;
    goto LAB_0446f3ac;
  case 9:
    iVar3 = piVar4[3];
LAB_0446f3ac:
    uVar2 = FUN_0446ef88(-iVar3);
LAB_0446f3b4:
    *param_2 = uVar2;
    iVar3 = FUN_0446ef74();
    uVar2 = FUN_0446ef88(piVar4[1] - iVar3);
    *param_3 = uVar2;
    goto switchD_0446f2b4_caseD_6;
  case 10:
    if (bVar1) {
      uVar2 = FUN_0446ef88(piVar4[1]);
    }
    else {
      uVar2 = FUN_0446ef88(-piVar4[2]);
    }
    goto LAB_0446f3b4;
  }
  uVar2 = FUN_0446ef88(iVar3);
  *param_2 = uVar2;
  uVar2 = FUN_0446ef88(-piVar4[3]);
  *param_3 = uVar2;
switchD_0446f2b4_caseD_6:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::checkWhetherCukeShouldBeUnlocked() const */

void StandardLevelIntro::checkWhetherCukeShouldBeUnlocked(void)

{
  char cVar1;
  int iVar2;
  PlayerInfo *this;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::GameFeatureIsUnlocked(this,0x22);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"egypt4");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (iVar2 == 3) {
      PlayerInfo::SetGameFeatureUnlockState(this,0x22,1);
      std::string::string(asStack_10,"poweruptacticalcuke");
      PlayerInfo::SetPowerupUnlockState(this,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      uVar3 = 1;
      goto LAB_0446f438;
    }
  }
  uVar3 = 0;
LAB_0446f438:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::CreateLevelNameStringAdvice() */

void StandardLevelIntro::CreateLevelNameStringAdvice(void)

{
  ProfileMgr *this;
  long lVar1;
  ShowAdvice *this_00;
  Board *this_01;
  undefined1 auVar2 [16];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  int local_20;
  int local_14;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  if (lVar1 == 0) {
    FUN_05478178(awStack_30,L"-invalid-",awStack_10);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  auVar2 = Board::GetLevelDefinition(this_01);
  Sexy::UTF8StringToWString((Sexy *)(auVar2._0_8_ + 0x18),auVar2._8_8_);
  TodReplaceString(awStack_10,L"{PLAYER}",awStack_30);
  FUN_05476c50(awStack_10);
  this_00 = (ShowAdvice *)ShowAdvice::Create();
  ShowAdvice::SetLabel(this_00,auStack_28,0x10);
  Board::GetBoardBaseOffset();
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)awStack_10,local_20,local_14);
  ShowAdvice::SetOffset(this_00,(Point *)awStack_10);
  FUN_05476c50(auStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::isFirstPlaythrough() const */

void StandardLevelIntro::isFirstPlaythrough(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  iVar1 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 < 3);
}


/* StandardLevelIntro::hasNarration() */

bool StandardLevelIntro::hasNarration(void)

{
  char cVar1;
  long lVar2;
  
  cVar1 = isFirstPlaythrough();
  if (cVar1 == '\0') {
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    lVar2 = FUN_05474184(lVar2 + 0xf0);
    return lVar2 != 0;
  }
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = FUN_05474184(lVar2 + 0xe8);
  return lVar2 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::bringUpPowerupChooser() */

void StandardLevelIntro::bringUpPowerupChooser(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  char *__s;
  Board *this;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(gLawnApp + 0x2998) == '\0') {
    checkWhetherCukeShouldBeUnlocked();
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    __s = "poweruptacticalcuke";
    std::string::string(asStack_18,"poweruptacticalcuke");
    cVar1 = PlayerInfo::GetPowerupUnlockState(pPVar3,asStack_18);
    if (cVar1 == '\0') {
      std::string::~string(asStack_18);
      nop();
    }
    else {
      std::string::string(asStack_10,"egypt3");
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (cVar1 != '\0') {
        cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
        if (cVar1 == '\0') {
          cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
          if (cVar1 != '\0') goto LAB_0446f780;
        }
        else {
          __s = "powerupdangerroomtacticalcuke";
        }
        this = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,__s);
        Board::AddPowerup(this,asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
    }
  }
LAB_0446f780:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::startNarration(StandardLevelIntro::PanType) */

void __thiscall StandardLevelIntro::startNarration(StandardLevelIntro *this,undefined4 param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  CrazyNPCManager *pCVar3;
  long lVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x48) = param_2;
  local_8 = ___stack_chk_guard;
  cVar2 = hasNarration();
  if (cVar2 != '\0') {
    cVar2 = isFirstPlaythrough();
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      lVar4 = Board::GetLevelDefinition(*(Board **)(pLVar1 + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xf8);
      Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      lVar4 = lVar4 + 0xf0;
    }
    else {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      lVar4 = Board::GetLevelDefinition(*(Board **)(pLVar1 + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xf8);
      Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      lVar4 = lVar4 + 0xe8;
    }
    CrazyNPCManager::StartNarrativeID(pCVar3,lVar4,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::initBoardEntities() */

void __thiscall StandardLevelIntro::initBoardEntities(StandardLevelIntro *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ZombossRobotSpawnZombieInfo *pZVar3;
  long lVar4;
  long *plVar5;
  Board *pBVar6;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2 != (ResilienceTutorialIntroProperties *)0x0) {
    local_38 = FUN_0447011c(*(undefined8 *)(pRVar2 + 0x58));
    local_30 = FUN_0447016c(*(undefined8 *)(pRVar2 + 0x60));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      pZVar3 = (ZombossRobotSpawnZombieInfo *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
                ((ZombossRobotSpawnZombieInfo *)apStack_20,pZVar3);
      if (local_18 == 1) {
        lVar4 = Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),local_10,local_14,(string *)apStack_20
                                ,-1,false,false,false,false);
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 0x158) = 0;
        }
      }
      else if (local_18 == 2) {
        pBVar6 = *(Board **)(gLawnApp + 0x9f0);
        FUN_05475d88(asStack_28,apStack_20);
        plVar5 = (long *)Board::AddZombie(pBVar6,asStack_28,1,local_10,local_14);
        std::string::~string(asStack_28);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 600))(plVar5);
          Zombie::SetHasPlantFood(SUB81(plVar5,0));
        }
      }
      else if (local_18 == 4) {
        Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)apStack_20,local_10,local_14,1);
      }
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::bringUpSeedChooser() */

void StandardLevelIntro::bringUpSeedChooser(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  UIWidget *pUVar4;
  ResourceInfo *this;
  string *extraout_x1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898))
  ;
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
    FUN_0446eb38(lVar3 + 0x14);
  }
  lVar3 = Board::GetSeedChooser(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 != 0) {
    pUVar4 = (UIWidget *)Board::GetSeedChooser(*(Board **)(gLawnApp + 0x9f0));
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_10,"UIPauseButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_10,"UICoinBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,3);
    if (cVar2 != '\0') {
      if ((((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
           (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 == 0)) ||
          (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
          *(char *)(lVar3 + 0x114) == '\0')) &&
         ((cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 == '\0' &&
          (cVar2 = RiftUtils::IsRiftTimedLevel(), cVar2 == '\0')))) {
        UIWidget::SetVisible(pUVar4,true);
      }
      else {
        UIWidget::SetVisible(pUVar4,false);
      }
    }
  }
  std::string::string(asStack_18,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (this != (ResourceInfo *)0x0) {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::startPreSeedchooserIntro(PreSeedchooserFlowType) */

void __thiscall StandardLevelIntro::startPreSeedchooserIntro(StandardLevelIntro *this,int param_2)

{
  AdaptorPerkSelectionDialog *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    this_00 = ::operator_new(0x180);
    AdaptorPerkSelectionDialog::AdaptorPerkSelectionDialog(this_00);
    FUN_0446eebc(afStack_28,this);
    AdaptorPerkSelectionDialog::SetOnCloseAction(this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    FUN_0446ef18(afStack_28,this);
    AdaptiveMessageBox::SetConfirmFunction((AdaptiveMessageBox *)this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
    MessageRouter::Broadcast<AdaptorPerkSelectionDialog*,AdaptorPerkSelectionDialog*>
              ((MessageRouter *)gMessageRouter,Message::PerkScreenCreated,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StandardLevelIntro::onStarPreviewComplete() */

void __thiscall StandardLevelIntro::onStarPreviewComplete(StandardLevelIntro *this)

{
  PVZ2UIAwardScreen *this_00;
  ResilienceTutorialIntroProperties *pRVar1;
  
  this_00 = (PVZ2UIAwardScreen *)FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  if (this_00 != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(this_00);
  }
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar1 + 0x74) == 0) {
    (**(code **)(*(long *)this + 0xe8))(this,*(undefined4 *)(this + 0x48));
    return;
  }
  startPreSeedchooserIntro(this,*(int *)(pRVar1 + 0x74));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::startStarPreview(StandardLevelIntro::PanType) */

void __thiscall StandardLevelIntro::startStarPreview(StandardLevelIntro *this,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ProfileMgr *this_00;
  PVZ2UIAwardScreen *pPVar6;
  long lVar7;
  undefined8 uVar8;
  ResilienceTutorialIntroProperties *pRVar9;
  PVZ1ModeUtils *this_01;
  RtWeakPtrBase *pRVar10;
  ChallengeStatusHolder *pCVar11;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0 [3];
  undefined8 local_d8;
  undefined8 local_d0;
  Delegate0 aDStack_c0 [48];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_0446e94c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = BoardHelpers::HasExtraChallenges();
  cVar1 = Board::IsStarChallengeActive(*(Board **)(gLawnApp + 0x9f0));
  if (((iVar4 < 0) || (cVar1 == '\0')) && ((uVar5 & 0xff) == 0)) {
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if ((*(char *)(lVar7 + 0x11a) == '\0') &&
       (lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar7 + 0x11b) == '\0')) {
      pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (*(int *)(pRVar9 + 0x74) == 1) {
        onStarPreviewComplete(this);
      }
      else {
        (**(code **)(*(long *)this + 0xe8))(this,param_2,uVar5);
      }
    }
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11a) != '\0') {
      *(undefined4 *)(this + 0x48) = param_2;
      pPVar6 = (PVZ2UIAwardScreen *)
               FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
      PVZ2UIAwardScreen::ShowAwardScreen(pPVar6);
      PVZ2UIAwardScreen::AddUnchartedModeTips(pPVar6);
      PVZ2UIAwardScreen::SetBackgroundType(pPVar6,1);
      PirateStage::ShowGuides((PirateStage *)pPVar6,true);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onStarPreviewComplete);
      Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
                (aDStack_c0,aRStack_90);
      TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)pPVar6,aDStack_c0);
      PVZ2UIAwardScreen::Start(pPVar6);
      goto LAB_04470f08;
    }
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11b) == '\0') goto LAB_04470f1c;
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    std::
    vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
    ::vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
              *)&local_d8,(vector *)(lVar7 + 0x1c8));
    *(undefined4 *)(this + 0x48) = param_2;
    pPVar6 = (PVZ2UIAwardScreen *)FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8))
    ;
    PVZ2UIAwardScreen::ShowAwardScreen(pPVar6);
    lVar7 = FUN_0446e988(local_d8,local_d0);
    if (lVar7 != 0) {
      pRVar10 = (RtWeakPtrBase *)FUN_0446eb34(local_d8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,pRVar10);
      PVZ2UIAwardScreen::AddUnchartedModeDifficultyTips(pPVar6,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    }
    PVZ2UIAwardScreen::SetBackgroundType(pPVar6,1);
    PirateStage::ShowGuides((PirateStage *)pPVar6,true);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStarPreviewComplete);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_c0,aRStack_90);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)pPVar6,aDStack_c0);
    PVZ2UIAwardScreen::Start(pPVar6);
  }
  else {
    *(undefined4 *)(this + 0x48) = param_2;
    uVar3 = true;
    pPVar6 = (PVZ2UIAwardScreen *)FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8))
    ;
    PVZ2UIAwardScreen::ShowAwardScreen(pPVar6);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_108);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_f0);
    cVar1 = RiftUtils::IsPlayingRiftLevel();
    if (cVar1 == '\0') {
      uVar3 = CustomLevelUtils::IsCustomLevel();
    }
    cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    ProfileUtils::GetChallengeStatusForCurrentLevel
              ((vector *)&local_108,(vector *)local_f0,(bool)uVar3);
    cVar2 = std::
            vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
            ::empty((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                     *)local_f0);
    if (cVar2 == '\0') {
      ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder
                ((ChallengeStatusHolder *)aRStack_90);
      cVar1 = std::
              vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
              ::empty((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                       *)&local_108);
      if (cVar1 == '\0') {
        pCVar11 = (ChallengeStatusHolder *)FUN_0446e968(local_108,0);
        ProfileUtils::ChallengeStatusHolder::operator=((ChallengeStatusHolder *)aRStack_90,pCVar11);
      }
      uVar8 = FUN_0446e968(local_f0[0],0);
      PVZ2UIAwardScreen::AddObjectiveScreen(pPVar6,(ChallengeStatusHolder *)aRStack_90,uVar8,0);
      ProfileUtils::ChallengeStatusHolder::~ChallengeStatusHolder
                ((ChallengeStatusHolder *)aRStack_90);
    }
    else if (cVar1 == '\0') {
      lVar7 = FUN_0446e974(local_108,local_100);
      if ((lVar7 == 1) || (iVar4 == -1)) {
        uVar8 = FUN_0446e968(local_108,0);
        PVZ2UIAwardScreen::AddStarScreenSingle(pPVar6,uVar8,3);
      }
      else {
        uVar8 = FUN_0446e968(local_108,(long)iVar4);
        PVZ2UIAwardScreen::AddStarScreenTriple(pPVar6,iVar4 + 1,uVar8,3);
      }
    }
    else {
      this_01 = (PVZ1ModeUtils *)
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_d8);
      PVZ1ModeUtils::GetLevelChallengeChoose(this_01);
      PVZ1ModeUtils::IsHardMode();
      ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d8,
                 (vector<bool,std::allocator<bool>> *)aRStack_90,0);
      std::vector<bool,std::allocator<bool>>::~vector
                ((vector<bool,std::allocator<bool>> *)aRStack_90);
      uVar8 = local_d8;
      lVar7 = FUN_0446e974(local_d8,local_d0);
      if (lVar7 == 1) {
        uVar8 = FUN_0446e968(uVar8,0);
        PVZ2UIAwardScreen::AddChooseObjectiveScreen(pPVar6,uVar8,2);
      }
      std::
      vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
      ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                 *)&local_d8);
    }
    PVZ2UIAwardScreen::SetBackgroundType(pPVar6,1);
    PirateStage::ShowGuides((PirateStage *)pPVar6,true);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStarPreviewComplete);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_c0,aRStack_90);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)pPVar6,aDStack_c0);
    PVZ2UIAwardScreen::Start(pPVar6);
    std::
    vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
    ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *)local_f0);
    std::
    vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
    ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *)&local_108);
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11a) != '\0') {
      pPVar6 = (PVZ2UIAwardScreen *)
               FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
      PVZ2UIAwardScreen::AddUnchartedModeTips(pPVar6);
    }
LAB_04470f08:
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11b) == '\0') goto LAB_04470f1c;
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    std::
    vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
    ::vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
              *)&local_d8,(vector *)(lVar7 + 0x1c8));
    lVar7 = FUN_0446e988(local_d8,local_d0);
    if (lVar7 != 0) {
      pPVar6 = (PVZ2UIAwardScreen *)
               FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
      pRVar10 = (RtWeakPtrBase *)FUN_0446eb34(local_d8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,pRVar10);
      PVZ2UIAwardScreen::AddUnchartedModeDifficultyTips(pPVar6,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    }
  }
  std::
  vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
             *)&local_d8);
LAB_04470f1c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StandardLevelIntro::startStandardIntro(StandardLevelIntro::PanType) */

void __thiscall StandardLevelIntro::startStandardIntro(StandardLevelIntro *this,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hasNarration();
  if (cVar1 == '\0') {
    startStarPreview(this);
    return;
  }
  (**(code **)(*(long *)this + 0xe0))(this,param_2);
  return;
}


/* StandardLevelIntro::onLoadComplete() */

void __thiscall StandardLevelIntro::onLoadComplete(StandardLevelIntro *this)

{
  char cVar1;
  int *piVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  piVar2 = (int *)Board::GetBoardPanLocations(this_00);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,-*piVar2,0);
  cVar1 = (**(code **)(*(long *)this + 0xc0))(this);
  if (cVar1 != '\0') {
    return;
  }
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((pRVar3 != (ResilienceTutorialIntroProperties *)0x0) &&
     (pRVar3[0x70] != (ResilienceTutorialIntroProperties)0x0)) {
    startStandardIntro(this,7);
    return;
  }
  startStandardIntro(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::startStandardIntroWithoutNarration(StandardLevelIntro::PanType) */

void __thiscall
StandardLevelIntro::startStandardIntroWithoutNarration(StandardLevelIntro *this,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ProfileMgr *this_00;
  PVZ2UIAwardScreen *pPVar6;
  long lVar7;
  undefined8 uVar8;
  ResilienceTutorialIntroProperties *pRVar9;
  PVZ1ModeUtils *this_01;
  RtWeakPtrBase *pRVar10;
  ChallengeStatusHolder *pCVar11;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  Delegate0 aDStack_c0 [48];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [136];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar4 = FUN_0446e94c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = BoardHelpers::HasExtraChallenges();
  cVar1 = Board::IsStarChallengeActive(*(Board **)(gLawnApp + 0x9f0));
  if (((iVar4 < 0) || (cVar1 == '\0')) && ((uVar5 & 0xff) == 0)) {
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if ((*(char *)(lVar7 + 0x11a) == '\0') &&
       (lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar7 + 0x11b) == '\0')) {
      pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (*(int *)(pRVar9 + 0x74) == 1) {
        onStarPreviewComplete(this);
      }
      else {
        (**(code **)(*(long *)this + 0xe8))(this,param_2,uVar5);
      }
    }
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11a) != '\0') {
      *(undefined4 *)(this + 0x48) = param_2;
      pPVar6 = (PVZ2UIAwardScreen *)
               FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
      PVZ2UIAwardScreen::ShowAwardScreen(pPVar6);
      PVZ2UIAwardScreen::AddUnchartedModeTips(pPVar6);
      PVZ2UIAwardScreen::SetBackgroundType(pPVar6,1);
      PirateStage::ShowGuides((PirateStage *)pPVar6,true);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onStarPreviewComplete);
      Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
                (aDStack_c0,aRStack_90);
      TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)pPVar6,aDStack_c0);
      PVZ2UIAwardScreen::Start(pPVar6);
      goto LAB_04470f08;
    }
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11b) == '\0') goto LAB_04470f1c;
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    std::
    vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
    ::vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
              *)&uStack_d8,(vector *)(lVar7 + 0x1c8));
    *(undefined4 *)(this + 0x48) = param_2;
    pPVar6 = (PVZ2UIAwardScreen *)FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8))
    ;
    PVZ2UIAwardScreen::ShowAwardScreen(pPVar6);
    lVar7 = FUN_0446e988(uStack_d8,uStack_d0);
    if (lVar7 != 0) {
      pRVar10 = (RtWeakPtrBase *)FUN_0446eb34(uStack_d8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,pRVar10);
      PVZ2UIAwardScreen::AddUnchartedModeDifficultyTips(pPVar6,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    }
    PVZ2UIAwardScreen::SetBackgroundType(pPVar6,1);
    PirateStage::ShowGuides((PirateStage *)pPVar6,true);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStarPreviewComplete);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_c0,aRStack_90);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)pPVar6,aDStack_c0);
    PVZ2UIAwardScreen::Start(pPVar6);
  }
  else {
    *(undefined4 *)(this + 0x48) = param_2;
    uVar3 = true;
    pPVar6 = (PVZ2UIAwardScreen *)FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8))
    ;
    PVZ2UIAwardScreen::ShowAwardScreen(pPVar6);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_108);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)auStack_f0);
    cVar1 = RiftUtils::IsPlayingRiftLevel();
    if (cVar1 == '\0') {
      uVar3 = CustomLevelUtils::IsCustomLevel();
    }
    cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    ProfileUtils::GetChallengeStatusForCurrentLevel
              ((vector *)&uStack_108,(vector *)auStack_f0,(bool)uVar3);
    cVar2 = std::
            vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
            ::empty((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                     *)auStack_f0);
    if (cVar2 == '\0') {
      ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder
                ((ChallengeStatusHolder *)aRStack_90);
      cVar1 = std::
              vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
              ::empty((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                       *)&uStack_108);
      if (cVar1 == '\0') {
        pCVar11 = (ChallengeStatusHolder *)FUN_0446e968(uStack_108,0);
        ProfileUtils::ChallengeStatusHolder::operator=((ChallengeStatusHolder *)aRStack_90,pCVar11);
      }
      uVar8 = FUN_0446e968(auStack_f0[0],0);
      PVZ2UIAwardScreen::AddObjectiveScreen(pPVar6,(ChallengeStatusHolder *)aRStack_90,uVar8,0);
      ProfileUtils::ChallengeStatusHolder::~ChallengeStatusHolder
                ((ChallengeStatusHolder *)aRStack_90);
    }
    else if (cVar1 == '\0') {
      lVar7 = FUN_0446e974(uStack_108,uStack_100);
      if ((lVar7 == 1) || (iVar4 == -1)) {
        uVar8 = FUN_0446e968(uStack_108,0);
        PVZ2UIAwardScreen::AddStarScreenSingle(pPVar6,uVar8,3);
      }
      else {
        uVar8 = FUN_0446e968(uStack_108,(long)iVar4);
        PVZ2UIAwardScreen::AddStarScreenTriple(pPVar6,iVar4 + 1,uVar8,3);
      }
    }
    else {
      this_01 = (PVZ1ModeUtils *)
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &uStack_d8);
      PVZ1ModeUtils::GetLevelChallengeChoose(this_01);
      PVZ1ModeUtils::IsHardMode();
      ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_d8,
                 (vector<bool,std::allocator<bool>> *)aRStack_90,0);
      std::vector<bool,std::allocator<bool>>::~vector
                ((vector<bool,std::allocator<bool>> *)aRStack_90);
      uVar8 = uStack_d8;
      lVar7 = FUN_0446e974(uStack_d8,uStack_d0);
      if (lVar7 == 1) {
        uVar8 = FUN_0446e968(uVar8,0);
        PVZ2UIAwardScreen::AddChooseObjectiveScreen(pPVar6,uVar8,2);
      }
      std::
      vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
      ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                 *)&uStack_d8);
    }
    PVZ2UIAwardScreen::SetBackgroundType(pPVar6,1);
    PirateStage::ShowGuides((PirateStage *)pPVar6,true);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStarPreviewComplete);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_c0,aRStack_90);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)pPVar6,aDStack_c0);
    PVZ2UIAwardScreen::Start(pPVar6);
    std::
    vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
    ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *)auStack_f0);
    std::
    vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
    ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *)&uStack_108);
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11a) != '\0') {
      pPVar6 = (PVZ2UIAwardScreen *)
               FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
      PVZ2UIAwardScreen::AddUnchartedModeTips(pPVar6);
    }
LAB_04470f08:
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar7 + 0x11b) == '\0') goto LAB_04470f1c;
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    std::
    vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
    ::vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
              *)&uStack_d8,(vector *)(lVar7 + 0x1c8));
    lVar7 = FUN_0446e988(uStack_d8,uStack_d0);
    if (lVar7 != 0) {
      pPVar6 = (PVZ2UIAwardScreen *)
               FUN_0446e950(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
      pRVar10 = (RtWeakPtrBase *)FUN_0446eb34(uStack_d8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,pRVar10);
      PVZ2UIAwardScreen::AddUnchartedModeDifficultyTips(pPVar6,aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    }
  }
  std::
  vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
             *)&uStack_d8);
LAB_04470f1c:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StandardLevelIntro::startPreview() */

void __thiscall StandardLevelIntro::startPreview(StandardLevelIntro *this)

{
  startStarPreview(this,*(undefined4 *)(this + 0x48));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::setupIntro(StandardLevelIntro::PanType, bool) */

void __thiscall
StandardLevelIntro::setupIntro(StandardLevelIntro *this,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ResourceInfo *this_00;
  AnimationController *pAVar4;
  BombModule *pBVar5;
  AnimationController *pAVar6;
  AnimationController *pAVar7;
  code *pcVar8;
  Board *this_01;
  AnimationController *pAVar9;
  float fVar10;
  AnimationController *pAVar11;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [6];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_01 + 0x898));
  local_70 = (float)FUN_0446e948(*(undefined4 *)(this_00 + 0x10));
  if (param_3 == '\0') {
    GetPanLocations(param_2,&local_6c,&local_68);
    pAVar4 = (AnimationController *)
             MoveBoard::Create(*(undefined4 *)(pRVar3 + 0x48),local_6c,local_68,0,0,4);
    std::string::string((string *)local_50,"Play_UI_Game_Intro_Cam_Pan");
    pAVar6 = (AnimationController *)AnimMgrSendAudioEvent::Create((string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    if (pRVar3[0x70] == (ResilienceTutorialIntroProperties)0x0) {
      cVar1 = Board::ChooseSeedsOnCurrentLevel(this_01);
      if (cVar1 == '\0') {
        pAVar9 = (AnimationController *)0x0;
        GetPanLocations(3,&local_64,local_60);
      }
      else {
        GetPanLocations(2,local_58,(string *)local_50);
        pAVar9 = (AnimationController *)MoveBoard::Create(0x3fc00000,local_58[0],local_50[0],0,0,4);
        GetPanLocations(4,&local_64,local_60);
      }
      pAVar11 = (AnimationController *)
                MoveBoard::Create(*(undefined4 *)(pRVar3 + 0x4c),local_64,local_60[0],0,0,4);
    }
    else {
      pAVar9 = (AnimationController *)0x0;
      pAVar11 = (AnimationController *)0x0;
    }
    local_64 = 0.0;
    std::string::string((string *)local_50,"PlaceLawnItems");
    pAVar7 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,local_70);
    std::string::~string((string *)local_50);
    nop();
    MessageRouter::Post<AnimationMgr*,float*,AnimationMgr*,float*>
              ((MessageRouter *)gMessageRouter,Message::AddAnimationEvent,(AnimationMgr *)this_00,
               &local_70);
    std::string::string((string *)local_50,"PlaceStreetZombies");
    pAVar7 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,local_70);
    std::string::~string((string *)local_50);
    nop();
    pAVar7 = (AnimationController *)CreateLevelNameStringAdvice();
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,local_70);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_70,&local_64);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar6,local_70);
    std::string::string((string *)local_50,"EnableGridItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_70);
    std::string::~string((string *)local_50);
    nop();
    cVar1 = Board::ChooseSeedsOnCurrentLevel(this_01);
    if (cVar1 != '\0') {
      if (pAVar9 != (AnimationController *)0x0) {
        AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,local_64);
        local_64 = local_64 + 1.5;
      }
      goto LAB_04471574;
    }
LAB_04471990:
    std::string::string((string *)local_50,"PlaceStreetDinos");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_70);
    std::string::~string((string *)local_50);
    nop();
  }
  else {
    local_64 = 0.0;
    std::string::string((string *)local_50,"PlaceLawnItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_70);
    std::string::~string((string *)local_50);
    nop();
    MessageRouter::Post<AnimationMgr*,float*,AnimationMgr*,float*>
              ((MessageRouter *)gMessageRouter,Message::AddAnimationEvent,(AnimationMgr *)this_00,
               &local_70);
    std::string::string((string *)local_50,"EnableGridItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_70);
    std::string::~string((string *)local_50);
    nop();
    cVar1 = Board::ChooseSeedsOnCurrentLevel(this_01);
    pAVar11 = (AnimationController *)0x0;
    if (cVar1 == '\0') goto LAB_04471990;
LAB_04471574:
    std::string::string((string *)local_50,"SpawnStreetDinos");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_64);
    std::string::~string((string *)local_50);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_60);
    std::string::string((string *)local_50,"bringUpSeedChooser");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)local_58,(string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_64,&local_64);
    std::string::~string((string *)local_50);
    nop();
    Sexy::RtId::~RtId((RtId *)local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    local_64 = local_64 + 0.1;
  }
  if ((param_3 == '\0') && (pRVar3[0x70] == (ResilienceTutorialIntroProperties)0x0)) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_60);
    std::string::string((string *)local_50,"bringUpPowerupChooser");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)local_58,(string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_64,&local_64);
    std::string::~string((string *)local_50);
    nop();
    Sexy::RtId::~RtId((RtId *)local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    local_64 = local_64 + 0.1;
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar11,local_64,&local_64);
    std::string::string((string *)local_50,"ShowLawnItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)local_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,local_64);
    std::string::~string((string *)local_50);
    nop();
  }
  cVar1 = (**(code **)(*(long *)this + 200))(this);
  if (cVar1 == '\0') {
    pBVar5 = (BombModule *)FUN_044709f4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (pBVar5 != (BombModule *)0x0) {
      fVar10 = (float)BombModule::GetPaveTime(pBVar5);
      local_64 = local_64 + fVar10;
    }
    pcVar8 = *(code **)(*(long *)this + 0xa0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xd8);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_38,(string *)local_50);
    (*pcVar8)(this,this_00,&local_64,aDStack_38,0);
    goto LAB_044716cc;
  }
  iVar2 = Board::GetInitialLawnItemsCount();
  if (iVar2 < 1) {
LAB_04471754:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_60);
    std::string::string((string *)local_50,"onStandardIntroComplete");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)local_58,(string *)local_50);
    fVar10 = local_64;
  }
  else {
    pBVar5 = (BombModule *)FUN_044709f4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (pBVar5 != (BombModule *)0x0) {
      fVar10 = (float)BombModule::GetPaveTime(pBVar5);
      local_64 = local_64 + fVar10;
    }
    if (param_3 != '\0') goto LAB_04471754;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_60);
    std::string::string((string *)local_50,"onStandardIntroComplete");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)local_58,(string *)local_50);
    fVar10 = local_64 + 2.0;
  }
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fVar10);
  std::string::~string((string *)local_50);
  nop();
  Sexy::RtId::~RtId((RtId *)local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
LAB_044716cc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::startLevelIntro(StandardLevelIntro::PanType, bool) */

void __thiscall
StandardLevelIntro::startLevelIntro(StandardLevelIntro *this,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ResourceInfo *this_00;
  AnimationController *pAVar4;
  BombModule *pBVar5;
  AnimationController *pAVar6;
  AnimationController *pAVar7;
  code *pcVar8;
  Board *this_01;
  AnimationController *pAVar9;
  float fVar10;
  AnimationController *pAVar11;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 auStack_60 [2];
  undefined4 auStack_58 [2];
  undefined4 auStack_50 [6];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_01 + 0x898));
  fStack_70 = (float)FUN_0446e948(*(undefined4 *)(this_00 + 0x10));
  if (param_3 == '\0') {
    GetPanLocations(param_2,&uStack_6c,&uStack_68);
    pAVar4 = (AnimationController *)
             MoveBoard::Create(*(undefined4 *)(pRVar3 + 0x48),uStack_6c,uStack_68,0,0,4);
    std::string::string((string *)auStack_50,"Play_UI_Game_Intro_Cam_Pan");
    pAVar6 = (AnimationController *)AnimMgrSendAudioEvent::Create((string *)auStack_50);
    std::string::~string((string *)auStack_50);
    nop();
    if (pRVar3[0x70] == (ResilienceTutorialIntroProperties)0x0) {
      cVar1 = Board::ChooseSeedsOnCurrentLevel(this_01);
      if (cVar1 == '\0') {
        pAVar9 = (AnimationController *)0x0;
        GetPanLocations(3,&fStack_64,auStack_60);
      }
      else {
        GetPanLocations(2,auStack_58,(string *)auStack_50);
        pAVar9 = (AnimationController *)
                 MoveBoard::Create(0x3fc00000,auStack_58[0],auStack_50[0],0,0,4);
        GetPanLocations(4,&fStack_64,auStack_60);
      }
      pAVar11 = (AnimationController *)
                MoveBoard::Create(*(undefined4 *)(pRVar3 + 0x4c),fStack_64,auStack_60[0],0,0,4);
    }
    else {
      pAVar9 = (AnimationController *)0x0;
      pAVar11 = (AnimationController *)0x0;
    }
    fStack_64 = 0.0;
    std::string::string((string *)auStack_50,"PlaceLawnItems");
    pAVar7 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,fStack_70);
    std::string::~string((string *)auStack_50);
    nop();
    MessageRouter::Post<AnimationMgr*,float*,AnimationMgr*,float*>
              ((MessageRouter *)gMessageRouter,Message::AddAnimationEvent,(AnimationMgr *)this_00,
               &fStack_70);
    std::string::string((string *)auStack_50,"PlaceStreetZombies");
    pAVar7 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,fStack_70);
    std::string::~string((string *)auStack_50);
    nop();
    pAVar7 = (AnimationController *)CreateLevelNameStringAdvice();
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,fStack_70);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_70,&fStack_64);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar6,fStack_70);
    std::string::string((string *)auStack_50,"EnableGridItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_70);
    std::string::~string((string *)auStack_50);
    nop();
    cVar1 = Board::ChooseSeedsOnCurrentLevel(this_01);
    if (cVar1 != '\0') {
      if (pAVar9 != (AnimationController *)0x0) {
        AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fStack_64);
        fStack_64 = fStack_64 + 1.5;
      }
      goto LAB_04471574;
    }
LAB_04471990:
    std::string::string((string *)auStack_50,"PlaceStreetDinos");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_70);
    std::string::~string((string *)auStack_50);
    nop();
  }
  else {
    fStack_64 = 0.0;
    std::string::string((string *)auStack_50,"PlaceLawnItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_70);
    std::string::~string((string *)auStack_50);
    nop();
    MessageRouter::Post<AnimationMgr*,float*,AnimationMgr*,float*>
              ((MessageRouter *)gMessageRouter,Message::AddAnimationEvent,(AnimationMgr *)this_00,
               &fStack_70);
    std::string::string((string *)auStack_50,"EnableGridItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_70);
    std::string::~string((string *)auStack_50);
    nop();
    cVar1 = Board::ChooseSeedsOnCurrentLevel(this_01);
    pAVar11 = (AnimationController *)0x0;
    if (cVar1 == '\0') goto LAB_04471990;
LAB_04471574:
    std::string::string((string *)auStack_50,"SpawnStreetDinos");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_64);
    std::string::~string((string *)auStack_50);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)auStack_60);
    std::string::string((string *)auStack_50,"bringUpSeedChooser");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)auStack_58,(string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_64,&fStack_64);
    std::string::~string((string *)auStack_50);
    nop();
    Sexy::RtId::~RtId((RtId *)auStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_60);
    fStack_64 = fStack_64 + 0.1;
  }
  if ((param_3 == '\0') && (pRVar3[0x70] == (ResilienceTutorialIntroProperties)0x0)) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)auStack_60);
    std::string::string((string *)auStack_50,"bringUpPowerupChooser");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)auStack_58,(string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_64,&fStack_64);
    std::string::~string((string *)auStack_50);
    nop();
    Sexy::RtId::~RtId((RtId *)auStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_60);
    fStack_64 = fStack_64 + 0.1;
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar11,fStack_64,&fStack_64);
    std::string::string((string *)auStack_50,"ShowLawnItems");
    pAVar4 = (AnimationController *)IntroBoardDispatch::Create((string *)auStack_50);
    AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fStack_64);
    std::string::~string((string *)auStack_50);
    nop();
  }
  cVar1 = (**(code **)(*(long *)this + 200))(this);
  if (cVar1 == '\0') {
    pBVar5 = (BombModule *)FUN_044709f4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (pBVar5 != (BombModule *)0x0) {
      fVar10 = (float)BombModule::GetPaveTime(pBVar5);
      fStack_64 = fStack_64 + fVar10;
    }
    pcVar8 = *(code **)(*(long *)this + 0xa0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xd8);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_38,(string *)auStack_50);
    (*pcVar8)(this,this_00,&fStack_64,aDStack_38,0);
    goto LAB_044716cc;
  }
  iVar2 = Board::GetInitialLawnItemsCount();
  if (iVar2 < 1) {
LAB_04471754:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)auStack_60);
    std::string::string((string *)auStack_50,"onStandardIntroComplete");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)auStack_58,(string *)auStack_50);
    fVar10 = fStack_64;
  }
  else {
    pBVar5 = (BombModule *)FUN_044709f4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (pBVar5 != (BombModule *)0x0) {
      fVar10 = (float)BombModule::GetPaveTime(pBVar5);
      fStack_64 = fStack_64 + fVar10;
    }
    if (param_3 != '\0') goto LAB_04471754;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)auStack_60);
    std::string::string((string *)auStack_50,"onStandardIntroComplete");
    pAVar4 = (AnimationController *)TimeEvent::Create((RtId *)auStack_58,(string *)auStack_50);
    fVar10 = fStack_64 + 2.0;
  }
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fVar10);
  std::string::~string((string *)auStack_50);
  nop();
  Sexy::RtId::~RtId((RtId *)auStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_60);
LAB_044716cc:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StandardLevelIntro::registerForEvents() */

void __thiscall StandardLevelIntro::registerForEvents(StandardLevelIntro *this)

{
  char cVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if (cVar1 != '\0') {
    IntroModule::registerForEvents();
    pLVar2 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xf0);
    Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

