// Class: TimeTravelEntranceUI


/* TimeTravelEntranceUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void TimeTravelEntranceUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TimeTravelEntranceUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
TimeTravelEntranceUI::ScrollTargetReached(TimeTravelEntranceUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* TimeTravelEntranceUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void TimeTravelEntranceUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TimeTravelEntranceUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
TimeTravelEntranceUI::ScrollTargetInterrupted(TimeTravelEntranceUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* TimeTravelEntranceUI::onFinishBuyChallengeCount(bool const&) */

void __thiscall
TimeTravelEntranceUI::onFinishBuyChallengeCount(TimeTravelEntranceUI *this,bool *param_1)

{
  if (*param_1 != false) {
    return;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::GetModeType(FestivalGameMode) */

void TimeTravelEntranceUI::GetModeType(string *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  switch(param_3) {
  case 0:
    std::string::append(param_1,"festival_yeti",(size_t)__n);
    break;
  case 1:
    std::string::append(param_1,"festival_gargantuar",(size_t)__n);
    break;
  case 2:
    std::string::append(param_1,"festival_devil",(size_t)__n);
    break;
  case 3:
    std::string::append(param_1,"festival_wealthgod",(size_t)__n);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::GetLeveloftheDayLevelName() const */

void __thiscall TimeTravelEntranceUI::GetLeveloftheDayLevelName(TimeTravelEntranceUI *this)

{
  long lVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelOfTheDayMgr *this_02;
  long lVar3;
  long lVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
LAB_03aef810:
    std::string::string(in_x8,"");
    nop();
  }
  else {
    iVar2 = PlayerInfo::GetLevelOfTheDayInfo(this_01,0x2992);
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      if (7 < iVar2) goto LAB_03aef810;
      lVar4 = (long)(iVar2 + -1);
    }
    this_02 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    lVar3 = LevelOfTheDayMgr::GetCurrentTheDayItem(this_02);
    FUN_03aeef80(*(undefined8 *)(lVar3 + 0x80),lVar4);
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::Update() */

void __thiscall TimeTravelEntranceUI::Update(TimeTravelEntranceUI *this)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  fVar7 = (float)PVZ_RealT();
  fVar7 = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0x160),fVar7);
  uVar6 = *(undefined8 *)(this + 0x148);
  uVar2 = FUN_03aeef58(uVar6,*(undefined8 *)(this + 0x150));
  if (uVar2 != 0) {
    do {
      iVar4 = (int)((float)(*(int *)(this + 0x50) * (int)uVar5) +
                   (float)*(int *)(this + 0x50) * fVar7);
      plVar3 = (long *)FUN_03aeef64(uVar6,uVar5);
      plVar3 = (long *)*plVar3;
      if (iVar4 != (int)plVar3[9]) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,iVar4,0);
        uVar6 = *(undefined8 *)(this + 0x148);
        uVar2 = FUN_03aeef58(uVar6,*(undefined8 *)(this + 0x150));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(this + 0xe8) != 0) {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    plVar3 = *(long **)(this + 0xe8);
    if (cVar1 == '\0') {
      (**(code **)(*plVar3 + 0x188))(plVar3,1);
    }
    else {
      (**(code **)(*plVar3 + 0x188))(plVar3,0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::SelectGameLevel(int) */

void __thiscall TimeTravelEntranceUI::SelectGameLevel(TimeTravelEntranceUI *this,int param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x130));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x130));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((TitleScreen *)*puVar3 != (TitleScreen *)0x0) {
      TitleScreen::SetSkipIntro((TitleScreen *)*puVar3,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (-1 < param_1) {
    uVar4 = *(undefined8 *)(this + 0x130);
    uVar2 = FUN_03aeef6c(uVar4,*(undefined8 *)(this + 0x138));
    if ((ulong)(long)param_1 < uVar2) {
      puVar3 = (undefined8 *)FUN_03aeef78(uVar4,(long)param_1);
      if ((TitleScreen *)*puVar3 != (TitleScreen *)0x0) {
        TitleScreen::SetSkipIntro((TitleScreen *)*puVar3,true);
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
/* TimeTravelEntranceUI::Draw(Sexy::Graphics*) */

void __thiscall TimeTravelEntranceUI::Draw(TimeTravelEntranceUI *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  SalesProgressBar *pSVar10;
  long lVar11;
  string *extraout_x1;
  GraphicsAutoState aGStack_60 [8];
  RtMixedPtrBase aRStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac96f8);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar9);
  iVar1 = *(int *)(this + 0xfc);
  iVar5 = *(int *)(this + 0xf8);
  iVar6 = *(int *)(this + 0x104);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar7 = *(int *)(this + 0x100);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets(aIStack_48,iVar5,(iVar1 + iVar6) - iVar3,iVar7,iVar4);
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  iVar5 = FUN_03aef104(0x12);
  iVar1 = *(int *)(this + 0xfc);
  iVar6 = FUN_03aef104(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xf8),iVar1 - iVar5,*(int *)(this + 0x100),iVar6);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar9,aIStack_18,5,1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar7 = FUN_03aef104(0xfffffff3);
  iVar1 = *(int *)(this + 0xf8);
  iVar3 = FUN_03aef104(0xfffffff7);
  iVar5 = *(int *)(this + 0xfc);
  iVar4 = FUN_03aef104(0x1a);
  iVar6 = *(int *)(this + 0x100);
  iVar8 = FUN_03aef104(0x17);
  Sexy::Insets::Insets
            (aIStack_38,iVar7 + iVar1,iVar3 + iVar5,iVar4 + iVar6,iVar8 + *(int *)(this + 0x104));
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9678);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  if (*(int *)(this + 0x180) == 0) {
    TodStringTranslate(L"[FESTIVALGAMEMODE_DES]");
    iVar1 = *(int *)(this + 0xfc);
    iVar5 = *(int *)(this + 0xf8);
    iVar6 = *(int *)(this + 0x104);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
    iVar7 = *(int *)(lVar11 + 0x3c);
    iVar3 = *(int *)(this + 0x100);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
    Sexy::Insets::Insets(aIStack_28,iVar5,(iVar1 + iVar6) - iVar7,iVar3,*(int *)(lVar11 + 0x3c));
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,5,1);
    FUN_05476c50(auStack_50);
  }
  else if (*(int *)(this + 0x180) == 1) {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      MagentoProductProps::GetLocalizedDescription();
      Sexy::UTF8StringToWString((Sexy *)aIStack_28,extraout_x1);
      TodStringTranslate((wstring *)aIStack_18);
      FUN_05476c50(aIStack_18);
      std::string::~string((string *)aIStack_28);
      iVar1 = *(int *)(this + 0xfc);
      iVar5 = *(int *)(this + 0x104);
      iVar6 = *(int *)(this + 0xf8);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
      iVar7 = *(int *)(lVar11 + 0x3c);
      iVar3 = *(int *)(this + 0x100);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9270);
      Sexy::Insets::Insets(aIStack_28,iVar6,(iVar1 + iVar5) - iVar7,iVar3,*(int *)(lVar11 + 0x3c));
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,5,1);
      FUN_05476c50(auStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::~TimeTravelEntranceUI() */

void __thiscall TimeTravelEntranceUI::~TimeTravelEntranceUI(TimeTravelEntranceUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06724200;
  *(undefined ***)(this + 0xd8) = &PTR__TimeTravelEntranceUI_06724540;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06724588;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 400));
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x160));
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::~vector
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x148));
  std::vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>>::~vector
            ((vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>> *)(this + 0x130));
  FUN_05476c50(this + 0x128);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TimeTravelEntranceUI::~TimeTravelEntranceUI() */

void __thiscall TimeTravelEntranceUI::~TimeTravelEntranceUI(TimeTravelEntranceUI *this)

{
  ~TimeTravelEntranceUI(this + -0xd8);
  return;
}


/* TimeTravelEntranceUI::~TimeTravelEntranceUI() */

void __thiscall TimeTravelEntranceUI::~TimeTravelEntranceUI(TimeTravelEntranceUI *this)

{
  ~TimeTravelEntranceUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TimeTravelEntranceUI::~TimeTravelEntranceUI() */

void __thiscall TimeTravelEntranceUI::~TimeTravelEntranceUI(TimeTravelEntranceUI *this)

{
  ~TimeTravelEntranceUI(this + -0xd8);
  return;
}


/* TimeTravelEntranceUI::ButtonPress(int) */

void TimeTravelEntranceUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to TimeTravelEntranceUI::ButtonPress(int) */

void __thiscall TimeTravelEntranceUI::ButtonPress(TimeTravelEntranceUI *this,int param_1)

{
  ButtonPress((int)this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::ButtonDepress(int) */

void __thiscall TimeTravelEntranceUI::ButtonDepress(TimeTravelEntranceUI *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  SecretGachaMgr *this_00;
  long lVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ActivityConfig *this_03;
  int *piVar7;
  TimeTravelEntranceUI *pTVar8;
  FestivalManager *this_04;
  undefined8 uVar9;
  undefined8 uVar10;
  string *psVar11;
  undefined *puVar12;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Button_Click_Release");
  if (99 < param_1) {
    uVar5 = FUN_03aeef6c(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
    if ((ulong)(long)(param_1 + -100) < uVar5) {
      if (*(int *)(this + 0x180) == 0) {
        SelectGameLevel(this,param_1 + -100);
        *(int *)(this + 0x184) = param_1 + -99;
        SummerEventEntranceUI::updateBtnState((SummerEventEntranceUI *)this);
        this_00 = (SecretGachaMgr *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
        SecretGachaMgr::SetSelectId(this_00,*(int *)(this + 0x184));
      }
      goto switchD_03af0e8c_default;
    }
  }
  switch(param_1) {
  case 1000:
    LawnApp::killTimeTravelEntranceUI(gLawnApp);
    break;
  case 0x3e9:
    nop();
    break;
  case 0x3ea:
    this_04 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    FestivalManager::ResetWishProps(this_04);
    SummerEventEntranceUI::scrollLeft((SummerEventEntranceUI *)this);
    break;
  case 0x3eb:
    lVar6 = LawnApp::GetActivityConfig();
    if (lVar6 != 0) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
      piVar7 = (int *)ActivityConfig::GetRefreshPlantsPurchaseData(this_03);
      iVar3 = piVar7[1];
      if (*piVar7 == 2) {
        iVar2 = PlayerInfo::GetNumCoins(this_02,true);
        if ((iVar2 < iVar3) || (iVar3 = PlayerInfo::SubtractCoins(this_02,iVar3), iVar3 < 0)) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
        }
      }
      else if (*piVar7 == 0) {
        iVar2 = PlayerInfo::GetNumGems(this_02,true);
        if (iVar2 < iVar3) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
        }
        else {
          pTVar8 = ::operator_new(0x28);
          ICloudRequestCallbackFunction<TimeTravelEntranceUI,bool>::ICloudRequestCallbackFunction
                    (pTVar8,(_func_void_bool_ptr *)this);
          PlayerInfo::SubtractGems
                    (this_02,1,0x3e9,(ICloudRequestCallbackFunctionBase *)pTVar8,1,false);
        }
      }
    }
    break;
  case 0x3ec:
    GetLeveloftheDayLevelName(this);
    bVar1 = std::operator!=("",asStack_38);
    if (bVar1) {
      Set8BytesTo0(asStack_30);
      iVar3 = *(int *)(this + 0x184);
      if (iVar3 == 1) {
        puVar12 = &DAT_06ac9848;
      }
      else if (iVar3 == 2) {
        puVar12 = &DAT_06ac9578;
      }
      else {
        if (iVar3 != 3) {
          std::string::~string(asStack_30);
          std::string::~string(asStack_38);
          break;
        }
        puVar12 = &DAT_06ac9218;
      }
      FUN_031dcc6c(asStack_18,asStack_38,puVar12);
      FUN_05474278(asStack_30,asStack_18);
      std::string::~string(asStack_18);
      uVar9 = FUN_0547429c(asStack_38);
      uVar10 = FUN_0547429c(asStack_30);
      Sexy::OutputDebugStrF
                ((wchar_t *)"showFlag---> TimeTravelEntranceUI  level %s, strLevelWitHard %s",uVar9,
                 uVar10);
      GameStateMgr::StartLevel(gGameStateMgr,&DAT_06ac9998,asStack_30,0xffffffff,1,1,0);
      FUN_05475d88(asStack_20,asStack_38);
      PlantDefenceEntrance::TranslateLevelForLog(asStack_18,this,asStack_20);
      pcVar4 = (char *)DString::c_str((DString *)asStack_18);
      std::string::string(asStack_28,pcVar4);
      nop();
      DString::~DString((DString *)asStack_18);
      std::string::~string(asStack_20);
      puVar12 = gMessageRouter;
      FUN_05475d88(asStack_18,asStack_28);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar12,Message::PinataParty,asStack_18);
      std::string::~string(asStack_18);
      psVar11 = (string *)LevelOfTheDayMgr::GetInstance();
      std::string::string(asStack_18,"birthzTimeTravel");
      CustomLevelSettingManager::SetLinkPhoneNumber(psVar11);
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
    }
    LawnApp::killTimeTravelEntranceUI(gLawnApp);
    UISingletonDialog<TimeTravelSelEntranceUI>::CloseDialog();
    std::string::~string(asStack_38);
  }
switchD_03af0e8c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to TimeTravelEntranceUI::ButtonDepress(int) */

void __thiscall TimeTravelEntranceUI::ButtonDepress(TimeTravelEntranceUI *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::TranslateLevelForInt() const */

void __thiscall TimeTravelEntranceUI::TranslateLevelForInt(TimeTravelEntranceUI *this)

{
  undefined4 uVar1;
  long lVar2;
  DString aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLeveloftheDayLevelName(this);
  DString::DString(aDStack_28,asStack_18);
  std::string::~string(asStack_18);
  lVar2 = DString::findString(aDStack_28,"Birthdayz");
  if ((lVar2 == -1) || (lVar2 = DString::findNumber(aDStack_28,-1), lVar2 == -1)) {
    uVar1 = 0;
  }
  else {
    DString::subString((long)aDStack_28);
    uVar1 = DString::toInt((DString *)asStack_18);
    DString::~DString((DString *)asStack_18);
  }
  DString::~DString(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* TimeTravelEntranceUI::setupGameLevelScreen() */

void __thiscall TimeTravelEntranceUI::setupGameLevelScreen(TimeTravelEntranceUI *this)

{
  vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>> *this_00;
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  PVZ2UIImageWidget *this_01;
  ulong uVar10;
  wchar_t *pwVar11;
  Image *pIVar12;
  long lVar13;
  SettingsDialogPane *pSVar14;
  GameTimeTravelPanel *this_02;
  LotteryResultProgressBar *pLVar15;
  TimeTravelGameWidget *pTVar16;
  SalesProgressBar *pSVar17;
  PVZ2UIButton *pPVar18;
  undefined8 uVar19;
  string *extraout_x1;
  long *plVar20;
  code *pcVar21;
  Sexy aSStack_e0 [8];
  SettingsDialogPane *local_d8;
  TimeTravelGameWidget *local_d0;
  TimeTravelGameWidget *local_c8;
  TimeTravelGameWidget *local_c0;
  wstring awStack_b8 [8];
  SettingsDialogPane *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>> *)(this + 0x130);
  this_01 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_01);
  Sexy::Insets::Insets((Insets *)&local_a8);
  uVar10 = TranslateLevelForInt(this);
  Sexy::StrFormat("[TIMETRAVELGAMEMODE_DAYS_TITLE%d]",aSStack_e0,uVar10 & 0xffffffff);
  pBVar1 = (ButtonListener *)(this + 0xe0);
  Sexy::UTF8StringToWString(aSStack_e0,extraout_x1);
  pwVar11 = (wchar_t *)FUN_054766ec(aPStack_78);
  TodStringTranslate(pwVar11);
  FUN_054766c8(this + 0x128,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(aPStack_78);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9340);
  LevelEditorWaveEventPortalPanel::SetBgImage((LevelEditorWaveEventPortalPanel *)this_01,pIVar12);
  iVar9 = *(int *)(this + 0x100);
  iVar3 = *(int *)(this + 0xf8);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9340);
  iVar4 = *(int *)(lVar13 + 0x38);
  iVar2 = FUN_03aef104(0);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9340);
  iVar7 = *(int *)(lVar13 + 0x38);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9340);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar3 + (iVar9 - iVar4) / 2,iVar2,iVar7,*(int *)(lVar13 + 0x3c));
  local_a8 = local_40;
  uStack_a0 = uStack_38;
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9340);
  iVar9 = *(int *)(lVar13 + 0x3c);
  iVar3 = FUN_03aef104(0x10);
  iVar9 = iVar9 + iVar3;
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)&local_a8);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,aPStack_78);
  pSVar14 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar14,(Insets *)&local_40);
  local_d8 = pSVar14;
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)local_d8 + 0x198))
            (local_d8,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,local_d8);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x148),
             &local_d8);
  this_02 = ::operator_new(0xd8);
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)(this_02 + 8) = 0;
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x18) = 0;
  *(undefined8 *)(this_02 + 0x20) = 0;
  *(undefined8 *)(this_02 + 0x28) = 0;
  *(undefined8 *)(this_02 + 0x30) = 0;
  *(undefined8 *)(this_02 + 0x38) = 0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  *(undefined8 *)(this_02 + 0x48) = 0;
  *(undefined8 *)(this_02 + 0x50) = 0;
  *(undefined8 *)(this_02 + 0x58) = 0;
  *(undefined8 *)(this_02 + 0x60) = 0;
  *(undefined8 *)(this_02 + 0x68) = 0;
  *(undefined8 *)(this_02 + 0x70) = 0;
  *(undefined8 *)(this_02 + 0x78) = 0;
  *(undefined8 *)(this_02 + 0x80) = 0;
  *(undefined8 *)(this_02 + 0x88) = 0;
  *(undefined8 *)(this_02 + 0x90) = 0;
  *(undefined8 *)(this_02 + 0x98) = 0;
  *(undefined8 *)(this_02 + 0xa0) = 0;
  *(undefined8 *)(this_02 + 0xa8) = 0;
  *(undefined8 *)(this_02 + 0xb0) = 0;
  *(undefined8 *)(this_02 + 0xb8) = 0;
  *(undefined8 *)(this_02 + 0xc0) = 0;
  *(undefined8 *)(this_02 + 200) = 0;
  *(undefined8 *)(this_02 + 0xd0) = 0;
  GameTimeTravelPanel::GameTimeTravelPanel(this_02);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,this + 0x108);
  iVar4 = FUN_03aef104(10);
  iVar3 = *(int *)(this + 0x110);
  *(int *)(this_02 + 0xd4) = iVar4 + iVar9;
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9748);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar4 = (iVar3 + iVar4 * -3) / 6;
  pTVar16 = ::operator_new(0xf8);
  TimeTravelGameWidget::TimeTravelGameWidget(pTVar16,0,100,pBVar1);
  pcVar21 = *(code **)(*(long *)pTVar16 + 0x198);
  local_d0 = pTVar16;
  iVar3 = FUN_03aef104(0x1e);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9748);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9748);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
  (*pcVar21)(pTVar16,iVar4,iVar3 + iVar9,uVar5,uVar6);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,local_d0);
  std::vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>>::push_back
            (this_00,&local_d0);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9748);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar3 = iVar3 + iVar4 * 3;
  pTVar16 = ::operator_new(0xf8);
  TimeTravelGameWidget::TimeTravelGameWidget(pTVar16,1,0x65,pBVar1);
  pcVar21 = *(code **)(*(long *)pTVar16 + 0x198);
  local_c8 = pTVar16;
  iVar7 = FUN_03aef104(0x1e);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac96a0);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac96a0);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
  (*pcVar21)(pTVar16,iVar3,iVar7 + iVar9,uVar5,uVar6);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,local_c8);
  std::vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>>::push_back
            (this_00,&local_c8);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac96a0);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar3 = iVar3 + iVar4 * 2 + iVar7;
  pTVar16 = ::operator_new(0xf8);
  TimeTravelGameWidget::TimeTravelGameWidget(pTVar16,2,0x66,pBVar1);
  pcVar21 = *(code **)(*(long *)pTVar16 + 0x198);
  local_c0 = pTVar16;
  iVar4 = FUN_03aef104(0x1e);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac91c8);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac91c8);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
  (*pcVar21)(pTVar16,iVar3,iVar4 + iVar9,uVar5,uVar6);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,local_c0);
  std::vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>>::push_back
            (this_00,&local_c0);
  FUN_05478178(awStack_b8,L"[QUEST_PLAY_LABEL]",(Insets *)&local_40);
  nop();
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0x3ec,pBVar1,awStack_b8,(Color *)&local_40);
  lVar13 = *(long *)pPVar18;
  *(PVZ2UIButton **)(this + 0x188) = pPVar18;
  pcVar21 = *(code **)(lVar13 + 0x198);
  iVar4 = FUN_03aef104(0xd0);
  iVar7 = FUN_03aef104(0xb9);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9628);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9628);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
  (*pcVar21)(pPVar18,iVar3 - iVar4,iVar7 + iVar9,iVar2 << 1,(iVar8 * 6) / 5);
  pPVar18 = *(PVZ2UIButton **)(this + 0x188);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac9628,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac9488,3);
  PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
  SummerEventEntranceUI::updateBtnState((SummerEventEntranceUI *)this);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,*(undefined8 *)(this + 0x188));
  SettingsDialogPane::SetContentsWidget(local_d8,(Widget *)this_02);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,aPStack_78);
  pSVar14 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar14,(Insets *)&local_40);
  local_b0 = pSVar14;
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)local_b0 + 0x198))
            (local_b0,*(undefined4 *)(this + 0x50),0,*(undefined4 *)(this + 0x50),
             *(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,local_b0);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x148),
             &local_b0);
  FUN_05478178(aPStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0x3ea,pBVar1,(wstring *)aPStack_78,(Color *)&local_40);
  FUN_05476c50(aPStack_78);
  nop();
  pcVar21 = *(code **)(*(long *)pPVar18 + 0x198);
  iVar3 = FUN_03aef104(0x50);
  iVar9 = *(int *)(this + 0x50);
  iVar4 = FUN_03aef104(0x37);
  uVar5 = FUN_03aef104(0x1e0);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9178);
  (*pcVar21)(pPVar18,(iVar9 / 2 - iVar3) - iVar4,uVar5,iVar3,*(undefined4 *)(lVar13 + 0x3c));
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac9178,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac98a8,3);
  PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
  pcVar21 = *(code **)(*(long *)pPVar18 + 800);
  uVar19 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar21)(pPVar18,uVar19);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac9460,1);
  PVZ2UIButton::AddImage(pPVar18,(Insets *)&local_40,0);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,pPVar18);
  FUN_05478178(aPStack_78,L"[MAINMENU_PLAY]",aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0x3e9,pBVar1,(wstring *)aPStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar18;
  FUN_05476c50(aPStack_78);
  nop();
  plVar20 = *(long **)(this + 0xe8);
  pcVar21 = *(code **)(*plVar20 + 0x198);
  iVar3 = FUN_03aef104(0x37);
  iVar9 = *(int *)(this + 0x50);
  uVar5 = FUN_03aef104(0x1e0);
  uVar6 = FUN_03aef104(0x6c);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac92f0);
  (*pcVar21)(plVar20,iVar3 + iVar9 / 2,uVar5,uVar6,*(undefined4 *)(lVar13 + 0x3c));
  pPVar18 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac92f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac9528,3);
  PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
  plVar20 = *(long **)(this + 0xe8);
  pcVar21 = *(code **)(*plVar20 + 800);
  uVar19 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  (*pcVar21)(plVar20,uVar19);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  *(undefined8 *)(this + 0xf0) = 0;
  FUN_05478178(aPStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0x3eb,pBVar1,(wstring *)aPStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar18;
  FUN_05476c50(aPStack_78);
  nop();
  plVar20 = *(long **)(this + 0xf0);
  iVar3 = FUN_03aef104(0xa0);
  iVar9 = *(int *)(this + 0x50);
  uVar5 = FUN_03aef104(0x96);
  uVar6 = FUN_03aef104(0x28);
  (**(code **)(*plVar20 + 0x198))
            (plVar20,iVar9 - iVar3,(int)((float)*(int *)(this + 0x54) * 0.8),uVar5,uVar6);
  iVar3 = FUN_03aef104(10);
  iVar4 = FUN_03aef104(5);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9078);
  iVar9 = *(int *)(lVar13 + 0x38);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9078);
  Sexy::Insets::Insets
            (aIStack_98,iVar3,iVar4,(int)((float)iVar9 * 0.8),
             (int)((float)*(int *)(lVar13 + 0x3c) * 0.8));
  pPVar18 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac9078,1);
  PVZ2UIButton::AddImage(pPVar18,(PVZ2UIImage *)&local_40,(TRect *)aIStack_98);
  iVar9 = FUN_03aef104(0xf);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9078);
  iVar3 = FUN_03aef104(0xfffffffb);
  iVar4 = FUN_03aef104(100);
  iVar7 = FUN_03aef104(0x32);
  Sexy::Insets::Insets
            (aIStack_88,(int)((float)iVar9 + (float)*(int *)(lVar13 + 0x38) * 0.8),iVar3,iVar4,iVar7
            );
  pPVar18 = *(PVZ2UIButton **)(this + 0xf0);
  TodStringTranslate(L"[REFRESH_WISH_PANEL_BUTTON_TEXT_CONTENT]");
  Sexy::Insets::Insets((Insets *)&local_40,aIStack_88);
  PVZ2UIButton::AddText(pPVar18,aPStack_78,(Insets *)&local_40,0);
  FUN_05476c50(aPStack_78);
  pPVar18 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac9178,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac98a8,3);
  PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
  plVar20 = *(long **)(this + 0xf0);
  pcVar21 = *(code **)(*plVar20 + 800);
  uVar19 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar21)(plVar20,uVar19);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,*(undefined8 *)(this + 0xf0));
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  *(undefined4 *)(this + 0x180) = 0;
  TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0x160),0.0);
  FUN_05476c50(awStack_b8);
  std::string::~string((string *)aSStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeTravelEntranceUI::TimeTravelEntranceUI() */

void __thiscall TimeTravelEntranceUI::TimeTravelEntranceUI(TimeTravelEntranceUI *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FestivalManager *this_00;
  SalesProgressBar *pSVar11;
  long lVar12;
  PVZ2UIButton *this_01;
  LotteryResultProgressBar *this_02;
  int iVar13;
  code *pcVar14;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06724200;
  *(undefined ***)(this + 0xd8) = &PTR__TimeTravelEntranceUI_06724540;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06724588;
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  FUN_05476574(this + 0x128);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x160));
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  *(undefined8 *)(this + 0xe8) = 0;
  this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::ResetWishProps(this_00);
  std::vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>>::clear
            ((vector<TimeTravelGameWidget*,std::allocator<TimeTravelGameWidget*>> *)(this + 0x130));
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Store");
  LawnApp::LoadGroup(pLVar1,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  iVar2 = FUN_03aef104(0x2a8);
  iVar3 = FUN_03aef104(0x16d);
  iVar13 = (int)(float)iVar2;
  iVar4 = FUN_03aef104(0);
  iVar5 = FUN_03aef104(0xaa);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar13,(int)(float)iVar3);
  pLVar1 = gLawnApp;
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  iVar3 = FUN_03aef104(0);
  Sexy::Widget::Resize
            ((Widget *)this,(int)(((float)*(int *)(pLVar1 + 0xd4) - (float)iVar2) * 0.5),iVar3,
             iVar13,*(int *)(pLVar1 + 0xd8));
  iVar5 = FUN_03aef104(0x18);
  iVar2 = *(int *)(this + 0x100);
  iVar13 = FUN_03aef104(0xc);
  iVar3 = *(int *)(this + 0xf8);
  iVar6 = FUN_03aef104(0x3e);
  iVar7 = FUN_03aef104(0x32);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9390);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9340);
  iVar4 = *(int *)(lVar12 + 0x3c);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9430);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar13 + iVar3,iVar6,iVar2 - iVar5,
             iVar7 + iVar8 + iVar4 + *(int *)(lVar12 + 0x3c));
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar4 = FUN_03aef104(0xc);
  iVar3 = *(int *)(this + 0xf8);
  iVar13 = FUN_03aef104(0x88);
  iVar6 = FUN_03aef104(0x2e);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9390);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9970);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac90c8);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + iVar3,iVar13,iVar2 - iVar5,
             iVar6 + iVar7 + iVar8 + *(int *)(lVar12 + 0x3c));
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  setupGameLevelScreen(this);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,1000,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = *(int *)(this + 0xf8);
  iVar3 = *(int *)(this + 0x100);
  pcVar14 = *(code **)(*(long *)this_01 + 0x198);
  iVar5 = FUN_03aef104(0x4b);
  iVar4 = *(int *)(this + 0xfc);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9408);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar6 = FUN_03aef104(7);
  this_02 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9408);
  uVar9 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9408);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar14)(this_01,(iVar2 + iVar3) - iVar5,(iVar4 - iVar13) - iVar6,uVar9,uVar10);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac9408,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac9850,1);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

