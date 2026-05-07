// Class: FestivalEntranceUI


/* FestivalEntranceUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void FestivalEntranceUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FestivalEntranceUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
FestivalEntranceUI::ScrollTargetReached(FestivalEntranceUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* FestivalEntranceUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void FestivalEntranceUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FestivalEntranceUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
FestivalEntranceUI::ScrollTargetInterrupted(FestivalEntranceUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* FestivalEntranceUI::onDialogCancel() */

void FestivalEntranceUI::onDialogCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* FestivalEntranceUI::onFinishBuyChallengeCount(bool const&) */

void __thiscall
FestivalEntranceUI::onFinishBuyChallengeCount(FestivalEntranceUI *this,bool *param_1)

{
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2);
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::GetModeType(FestivalGameMode) */

void FestivalEntranceUI::GetModeType(string *param_1,undefined8 param_2,undefined4 param_3)

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


/* FestivalEntranceUI::onDialogOK() */

void __thiscall FestivalEntranceUI::onDialogOK(FestivalEntranceUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  FestivalEntranceUI *pFVar2;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    return;
  }
  iVar1 = PlayerInfo::GetNumGems(this_01,true);
  if (iVar1 < 0x14) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    return;
  }
  pFVar2 = ::operator_new(0x28);
  ICloudRequestCallbackFunction<FestivalEntranceUI,bool>::ICloudRequestCallbackFunction
            (pFVar2,(_func_void_bool_ptr *)this);
  PlayerInfo::SubtractGems(this_01,1,0x89c,(ICloudRequestCallbackFunctionBase *)pFVar2,1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::Update() */

void __thiscall FestivalEntranceUI::Update(FestivalEntranceUI *this)

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
  fVar7 = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0x168),fVar7);
  uVar6 = *(undefined8 *)(this + 0x150);
  uVar2 = FUN_043bae94(uVar6,*(undefined8 *)(this + 0x158));
  if (uVar2 != 0) {
    do {
      iVar4 = (int)((float)(*(int *)(this + 0x50) * (int)uVar5) +
                   (float)*(int *)(this + 0x50) * fVar7);
      plVar3 = (long *)FUN_043bae8c(uVar6,uVar5);
      plVar3 = (long *)*plVar3;
      if (iVar4 != (int)plVar3[9]) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,iVar4,0);
        uVar6 = *(undefined8 *)(this + 0x150);
        uVar2 = FUN_043bae94(uVar6,*(undefined8 *)(this + 0x158));
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
/* FestivalEntranceUI::Draw(Sexy::Graphics*) */

void __thiscall FestivalEntranceUI::Draw(FestivalEntranceUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
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
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03b20);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar9);
  iVar1 = *(int *)(this + 0xfc);
  iVar2 = *(int *)(this + 0xf8);
  iVar3 = *(int *)(this + 0x104);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar7 = *(int *)(this + 0x100);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets(aIStack_48,iVar2,(iVar1 + iVar3) - iVar5,iVar7,iVar6);
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar7 = FUN_043bb090(0xfffffff3);
  iVar1 = *(int *)(this + 0xf8);
  iVar5 = FUN_043bb090(0xfffffff7);
  iVar2 = *(int *)(this + 0xfc);
  iVar6 = FUN_043bb090(0x1a);
  iVar3 = *(int *)(this + 0x100);
  iVar8 = FUN_043bb090(0x17);
  Sexy::Insets::Insets
            (aIStack_38,iVar7 + iVar1,iVar5 + iVar2,iVar6 + iVar3,iVar8 + *(int *)(this + 0x104));
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03aa0);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  if (*(int *)(this + 0x188) == 0) {
    TodStringTranslate(L"[FESTIVALGAMEMODE_DES]");
    iVar1 = *(int *)(this + 0xfc);
    iVar2 = *(int *)(this + 0xf8);
    iVar3 = *(int *)(this + 0x104);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
    iVar7 = *(int *)(lVar11 + 0x3c);
    iVar5 = *(int *)(this + 0x100);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
    Sexy::Insets::Insets(aIStack_28,iVar2,(iVar1 + iVar3) - iVar7,iVar5,*(int *)(lVar11 + 0x3c));
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,5,1);
    FUN_05476c50(auStack_50);
  }
  else if (*(int *)(this + 0x188) == 1) {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar4 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      MagentoProductProps::GetLocalizedDescription();
      Sexy::UTF8StringToWString((Sexy *)aIStack_28,extraout_x1);
      TodStringTranslate((wstring *)aIStack_18);
      FUN_05476c50(aIStack_18);
      std::string::~string((string *)aIStack_28);
      iVar1 = *(int *)(this + 0xfc);
      iVar2 = *(int *)(this + 0x104);
      iVar3 = *(int *)(this + 0xf8);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
      iVar7 = *(int *)(lVar11 + 0x3c);
      iVar5 = *(int *)(this + 0x100);
      lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03718);
      Sexy::Insets::Insets(aIStack_28,iVar3,(iVar1 + iVar2) - iVar7,iVar5,*(int *)(lVar11 + 0x3c));
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_50,(Sexy *)aIStack_28,uVar9,aIStack_18,5,1);
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
/* FestivalEntranceUI::~FestivalEntranceUI() */

void __thiscall FestivalEntranceUI::~FestivalEntranceUI(FestivalEntranceUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06843990;
  *(undefined ***)(this + 0xd8) = &PTR__FestivalEntranceUI_06843cd0;
  *(undefined **)(this + 0xe0) = &DAT_06843d18;
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
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x168));
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::~vector
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x150));
  std::vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>>::~vector
            ((vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>> *)(this + 0x138));
  FUN_05476c50(this + 0x128);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalEntranceUI::~FestivalEntranceUI() */

void __thiscall FestivalEntranceUI::~FestivalEntranceUI(FestivalEntranceUI *this)

{
  ~FestivalEntranceUI(this + -0xd8);
  return;
}


/* FestivalEntranceUI::~FestivalEntranceUI() */

void __thiscall FestivalEntranceUI::~FestivalEntranceUI(FestivalEntranceUI *this)

{
  ~FestivalEntranceUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FestivalEntranceUI::~FestivalEntranceUI() */

void __thiscall FestivalEntranceUI::~FestivalEntranceUI(FestivalEntranceUI *this)

{
  ~FestivalEntranceUI(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::GoToPlay() */

void __thiscall FestivalEntranceUI::GoToPlay(FestivalEntranceUI *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  LawnApp *this_00;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ProfileMgr *this_01;
  PlayerInfo *pPVar7;
  long lVar8;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar9;
  DailySignRewardWithTW *this_03;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  GameStateMgr *pGVar13;
  undefined8 uVar14;
  string *psVar15;
  string asStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate0 aDStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (pPVar7 == (PlayerInfo *)0x0) goto LAB_043bcf20;
  iVar4 = PlayerInfo::GetFestivalGameLeftCount(pPVar7,*(undefined4 *)(this + 0x130));
  this_00 = gLawnApp;
  if (iVar4 < 1) {
    iVar4 = FUN_043bb090(500);
    iVar6 = FUN_043bb090(0xdc);
    this_02 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar4,(float)iVar6,(PVZ2UIDialog *)0x0);
    FUN_05478178((wstring *)aRStack_50,L"[FESTIVALGAME_LEFTTIME_HEAD]",(wstring *)aRStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_02,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    TodStringTranslate(L"[FESTIVALGAME_LEFTTIME_TIP]");
    TodReplaceNumberString((wstring *)aRStack_58,L"{GEM_COUNT}",0x14);
    PVZ2UIDialog::SetFooterLabel(this_02,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_58);
    pPVar9 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_02,pPVar9,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar9 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)aRStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_02,pPVar9,(Color *)aRStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
    FUN_05478178((wstring *)aRStack_58,L"[BUTTON_CANCEL]",asStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogCancel);
    Sexy::Delegate0::Delegate0<FestivalEntranceUI,void(FestivalEntranceUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(this_02,(wstring *)aRStack_58,aDStack_38,1);
    FUN_05476c50((wstring *)aRStack_58);
    nop();
    FUN_05478178((wstring *)aRStack_58,L"[BUTTON_OK]",asStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogOK);
    Sexy::Delegate0::Delegate0<FestivalEntranceUI,void(FestivalEntranceUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(this_02,(wstring *)aRStack_58,aDStack_38,0);
    FUN_05476c50((wstring *)aRStack_58);
    nop();
    goto LAB_043bcf20;
  }
  Sexy::LazySingleton<FestivalManager>::GetInstance();
  EntityComponent_GroundEffect::GetEffect();
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  puVar2 = gMessageRouter;
  if (bVar3) {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    std::operator+((string *)(lVar8 + 0x78),".");
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::operator+(asStack_60,(string *)(lVar8 + 0x80));
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar2,Message::WishItem,aRStack_50);
    std::string::~string((string *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    puVar2 = gMessageRouter;
    uVar1 = *(undefined4 *)(this + 0x130);
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar5 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    std::operator+((string *)(lVar8 + 0x78),".");
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::operator+(asStack_60,(string *)(lVar8 + 0x80));
    MessageRouter::Post<int,int,std::string_const&,int,int,std::string>
              ((MessageRouter *)puVar2,Message::FestivalEntrance,uVar1,uVar5,aRStack_50);
    std::string::~string((string *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  Sexy::LazySingleton<FestivalManager>::GetInstance();
  EntityComponent_GroundEffect::GetEffect();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  FUN_05475d88(asStack_70,lVar8 + 0x80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  LawnApp::KillFestivalEntranceUI(gLawnApp);
  iVar4 = *(int *)(this + 0x130);
  if (iVar4 == 0) {
    FUN_043bafb8(gGameStateMgr + 0x1eb1);
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    pGVar13 = gGameStateMgr;
    if (iVar4 == 1) {
      std::string::string((string *)aRStack_50,"festival_lv2_normal");
LAB_043bd618:
      GameStateMgr::StartLevel(pGVar13,&DAT_06b03db8,aRStack_50,0xffffffff,1,1,0);
      std::string::~string((string *)aRStack_50);
      nop();
    }
    else {
      if (iVar4 == 0) {
        std::string::string((string *)aRStack_50,"festival_lv2_easy");
        goto LAB_043bd3b0;
      }
      if (iVar4 != 2) goto LAB_043bce38;
      pcVar11 = "festival_lv2_hard";
LAB_043bd178:
      pGVar13 = gGameStateMgr;
      std::string::string((string *)aRStack_50,pcVar11);
LAB_043bd35c:
      GameStateMgr::StartLevel(pGVar13,&DAT_06b03db8,aRStack_50,0xffffffff,1,1,0);
      std::string::~string((string *)aRStack_50);
      nop();
    }
  }
  else if (iVar4 == 1) {
    FUN_043bafb8(gGameStateMgr + 0x1eb1);
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    pGVar13 = gGameStateMgr;
    if (iVar4 == 1) {
      std::string::string((string *)aRStack_50,"festival_lv1_normal");
LAB_043bd3b0:
      GameStateMgr::StartLevel(pGVar13,&DAT_06b03db8,aRStack_50,0xffffffff,1,1,0);
      std::string::~string((string *)aRStack_50);
      nop();
    }
    else {
      if (iVar4 == 0) {
        std::string::string((string *)aRStack_50,"festival_lv1_easy");
        goto LAB_043bd618;
      }
      if (iVar4 == 2) {
        pcVar11 = "festival_lv1_hard";
        goto LAB_043bd334;
      }
    }
  }
  else if (iVar4 == 2) {
    FUN_043bafb8(gGameStateMgr + 0x1eb1);
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    pGVar13 = gGameStateMgr;
    if (iVar4 == 1) {
      pcVar11 = "festival_lv3_normal";
LAB_043bd334:
      pGVar13 = gGameStateMgr;
      std::string::string((string *)aRStack_50,pcVar11);
      goto LAB_043bd35c;
    }
    if (iVar4 == 0) {
      pcVar11 = "festival_lv3_easy";
      goto LAB_043bd178;
    }
    if (iVar4 == 2) {
      std::string::string((string *)aRStack_50,"festival_lv3_hard");
      goto LAB_043bd3b0;
    }
  }
  else if (iVar4 == 3) {
    FUN_043bafb8(gGameStateMgr + 0x1eb1);
    std::string::string((string *)aDStack_38,"festival_lv2_easy");
    nop();
    std::string::string(asStack_30,"festival_lv2_normal");
    nop();
    std::string::string(asStack_28,"festival_lv2_hard");
    nop();
    this_03 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
    if (this_03 != (DailySignRewardWithTW *)0x0) {
      lVar8 = DailySignRewardWithTW::getRewardListData(this_03);
      uVar12 = 0;
      psVar15 = (string *)aDStack_38;
      while( true ) {
        uVar14 = *(undefined8 *)(lVar8 + 0x28);
        uVar10 = FUN_043bae3c(uVar14,*(undefined8 *)(lVar8 + 0x30));
        if (uVar10 <= uVar12) break;
        uVar14 = FUN_043baeb4(uVar14,uVar12);
        thunk_FUN_05475e00(psVar15,uVar14);
        uVar12 = uVar12 + 1;
        psVar15 = psVar15 + 8;
      }
    }
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    pGVar13 = gGameStateMgr;
    if (iVar4 == 1) {
      pcVar11 = (char *)FUN_0547429c(asStack_30);
      std::string::string((string *)aRStack_50,pcVar11);
LAB_043bd6dc:
      GameStateMgr::StartLevel(pGVar13,&DAT_06b03db8,aRStack_50,0xffffffff,1,1,0);
      std::string::~string((string *)aRStack_50);
      nop();
    }
    else {
      if (iVar4 == 0) {
        pcVar11 = (char *)FUN_0547429c((string *)aDStack_38);
        std::string::string((string *)aRStack_50,pcVar11);
        goto LAB_043bd6dc;
      }
      if (iVar4 == 2) {
        pcVar11 = (char *)FUN_0547429c(asStack_28);
        std::string::string((string *)aRStack_50,pcVar11);
        GameStateMgr::StartLevel(pGVar13,&DAT_06b03db8,aRStack_50,0xffffffff,1,1,0);
        std::string::~string((string *)aRStack_50);
        nop();
      }
    }
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string((string *)aDStack_38);
  }
LAB_043bce38:
  Sexy::LazySingleton<FestivalManager>::GetInstance();
  EntityComponent_GroundEffect::GetEffect();
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  puVar2 = gMessageRouter;
  if (bVar3) {
    uVar1 = *(undefined4 *)(this + 0x130);
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar5 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    std::operator+((string *)(lVar8 + 0x78),".");
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    EntityComponent_GroundEffect::GetEffect();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::operator+(asStack_60,(string *)(lVar8 + 0x80));
    MessageRouter::Post<int,int,std::string_const&,int,int,std::string>
              ((MessageRouter *)puVar2,Message::FestivalEntrance,uVar1,uVar5,aRStack_50);
    std::string::~string((string *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  std::string::~string(asStack_70);
LAB_043bcf20:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::onUseGemFinish(bool const&) */

void __thiscall FestivalEntranceUI::onUseGemFinish(FestivalEntranceUI *this,bool *param_1)

{
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  GroupInfo *this_02;
  int *piVar1;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    PlayerInfo::AddFestivalGameLeftCount((PlayerInfo *)this_01,*(undefined4 *)(this + 0x130),1);
    GetModeType((string *)local_10,this,*(undefined4 *)(this + 0x130));
    this_02 = ::operator_new(0x10);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(this_02,(string *)local_10,1,0x14);
    std::string::~string((string *)local_10);
    local_10[0] = NewPVPMgr::GetSeasonEndTime(this_01);
    piVar1 = eastl::min_alt<int>((int *)&DAT_05753878,(int *)local_10);
    MessageRouter::Post<EventMetrics*,int,EventMetrics*,int>
              ((MessageRouter *)gMessageRouter,Message::EventPurchase,(EventMetrics *)this_02,
               *piVar1);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)this_02);
    AK::FreeHook(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalEntranceUI::ButtonPress(int) */

void FestivalEntranceUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to FestivalEntranceUI::ButtonPress(int) */

void __thiscall FestivalEntranceUI::ButtonPress(FestivalEntranceUI *this,int param_1)

{
  ButtonPress((int)this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::setupWishScreen() */

void __thiscall FestivalEntranceUI::setupWishScreen(FestivalEntranceUI *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  WishPanel *this_00;
  PVZ2UIImageWidget *this_01;
  Image *pIVar7;
  long lVar8;
  PVZ2UIScrollingWidget *this_02;
  WishScrollPanel *pWVar9;
  undefined8 *puVar10;
  code *pcVar11;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xd8);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  WishPanel::WishPanel(this_00);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,this + 0x118);
  this_01 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_01);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d90);
  LevelEditorWaveEventPortalPanel::SetBgImage((LevelEditorWaveEventPortalPanel *)this_01,pIVar7);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d90);
  iVar1 = *(int *)(lVar8 + 0x3c);
  iVar4 = *(int *)(this + 0xf8);
  iVar5 = *(int *)(this + 0x100);
  pcVar11 = *(code **)(*(long *)this_01 + 0x198);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d90);
  iVar6 = *(int *)(lVar8 + 0x38);
  uVar3 = FUN_043bb090(0);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d90);
  uVar2 = *(undefined4 *)(lVar8 + 0x38);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d90);
  (*pcVar11)(this_01,iVar4 + (iVar5 - iVar6) / 2,uVar3,uVar2,*(undefined4 *)(lVar8 + 0x3c));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  iVar4 = FUN_043bb090(0x1a);
  *(int *)(this_00 + 0xd4) = iVar1 + iVar4;
  iVar4 = FUN_043bb090(8);
  iVar5 = FUN_043bb090(0);
  iVar1 = *(int *)(this + 0x120);
  iVar6 = FUN_043bb090(0x32);
  Sexy::Insets::Insets(aIStack_18,iVar4,iVar5,iVar1 + iVar4 * -2,*(int *)(this + 0x124) - iVar6);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,1);
  pWVar9 = ::operator_new(0x118);
  WishScrollPanel::WishScrollPanel(pWVar9,aIStack_18,*(undefined4 *)(this + 0x130));
  (**(code **)(*(long *)this_02 + 0x60))(this_02,pWVar9);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_18);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_02);
  puVar10 = (undefined8 *)FUN_043bae8c(*(undefined8 *)(this + 0x150),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar10,(Widget *)this_00);
  lVar8 = FUN_043bae78(*(undefined8 *)(pWVar9 + 0xe0),*(undefined8 *)(pWVar9 + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar8 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* FestivalEntranceUI::setupGameLevelScreen() */

void __thiscall FestivalEntranceUI::setupGameLevelScreen(FestivalEntranceUI *this)

{
  vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>> *this_00;
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIImageWidget *this_01;
  SettingsDialogPane *pSVar9;
  GameFestivalPanel *this_02;
  LotteryResultProgressBar *pLVar10;
  FestivalGameWidget *pFVar11;
  SalesProgressBar *pSVar12;
  PVZ2UIButton *pPVar13;
  long lVar14;
  undefined8 uVar15;
  Image *pIVar16;
  long *plVar17;
  code *pcVar18;
  CachedUIResourcePtr<Sexy::Image> *this_03;
  SettingsDialogPane *local_d0;
  FestivalGameWidget *local_c8;
  FestivalGameWidget *local_c0;
  FestivalGameWidget *local_b8;
  SettingsDialogPane *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_01);
  Sexy::Insets::Insets((Insets *)&local_a8);
  if (*(uint *)(this + 0x130) < 4) {
    switch(*(uint *)(this + 0x130)) {
    case 0:
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b037e8;
      TodStringTranslate(L"[FESTIVALGAMEMODE_CRAZYYETI_TITLE]");
      FUN_054766c8(this + 0x128,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      break;
    case 1:
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036a0;
      TodStringTranslate(L"[FESTIVALGAMEMODE_GARGANTUARCRISIS_TITLE]");
      FUN_054766c8(this + 0x128,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      break;
    case 2:
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03748;
      TodStringTranslate(L"[FESTIVALGAMEMODE_DEVILINVADE_TITLE]");
      FUN_054766c8(this + 0x128,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      break;
    case 3:
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b034f0;
      TodStringTranslate(L"[FESTIVALGAMEMODE_CAISHEN_TITLE]");
      FUN_054766c8(this + 0x128,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
    }
    pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    LevelEditorWaveEventPortalPanel::SetBgImage((LevelEditorWaveEventPortalPanel *)this_01,pIVar16);
    iVar8 = *(int *)(this + 0xf8);
    iVar2 = *(int *)(this + 0x100);
    lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    iVar3 = *(int *)(lVar14 + 0x38);
    iVar7 = FUN_043bb090(0);
    lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    iVar6 = *(int *)(lVar14 + 0x38);
    lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar8 + (iVar2 - iVar3) / 2,iVar7,iVar6,*(int *)(lVar14 + 0x3c));
    local_a8 = local_40;
    uStack_a0 = uStack_38;
    lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    iVar8 = *(int *)(lVar14 + 0x3c);
  }
  else {
    iVar8 = 0;
  }
  iVar2 = FUN_043bb090(0x10);
  iVar8 = iVar8 + iVar2;
  this_00 = (vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>> *)(this + 0x138);
  pBVar1 = (ButtonListener *)(this + 0xe0);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)&local_a8);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,awStack_78);
  pSVar9 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar9,(Insets *)&local_40);
  local_d0 = pSVar9;
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)local_d0 + 0x198))
            (local_d0,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,local_d0);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x150),
             &local_d0);
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
  GameFestivalPanel::GameFestivalPanel(this_02);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,this + 0x108);
  *(int *)(this_02 + 0xd4) = iVar8;
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_01);
  iVar2 = *(int *)(this + 0x110);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03b70);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar3 = (iVar2 + iVar3 * -3) / 6;
  pFVar11 = ::operator_new(0x128);
  FestivalGameWidget::FestivalGameWidget(pFVar11,0,100,pBVar1);
  pcVar18 = *(code **)(*(long *)pFVar11 + 0x198);
  local_c8 = pFVar11;
  iVar2 = FUN_043bb090(0x14);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03b70);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03b70);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar18)(pFVar11,iVar3,iVar2 + iVar8,uVar4,uVar5);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,local_c8);
  std::vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>>::push_back(this_00,&local_c8)
  ;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03b70);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar2 = iVar2 + iVar3 * 3;
  pFVar11 = ::operator_new(0x128);
  FestivalGameWidget::FestivalGameWidget(pFVar11,1,0x65,pBVar1);
  pcVar18 = *(code **)(*(long *)pFVar11 + 0x198);
  local_c0 = pFVar11;
  iVar6 = FUN_043bb090(0x14);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03ac8);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03ac8);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar18)(pFVar11,iVar2,iVar6 + iVar8,uVar4,uVar5);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,local_c0);
  std::vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>>::push_back(this_00,&local_c0)
  ;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03ac8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pFVar11 = ::operator_new(0x128);
  FestivalGameWidget::FestivalGameWidget(pFVar11,2,0x66,pBVar1);
  pcVar18 = *(code **)(*(long *)pFVar11 + 0x198);
  local_b8 = pFVar11;
  iVar7 = FUN_043bb090(0x14);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03678);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03678);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar18)(pFVar11,iVar2 + iVar3 * 2 + iVar6,iVar7 + iVar8,uVar4,uVar5);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,local_b8);
  std::vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>>::push_back(this_00,&local_b8)
  ;
  SettingsDialogPane::SetContentsWidget(local_d0,(Widget *)this_02);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,awStack_78);
  pSVar9 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar9,(Insets *)&local_40);
  local_b0 = pSVar9;
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)local_b0 + 0x198))
            (local_b0,*(undefined4 *)(this + 0x50),0,*(undefined4 *)(this + 0x50),
             *(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,local_b0);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0x150),
             &local_b0);
  FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,0x3ea,pBVar1,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar18 = *(code **)(*(long *)pPVar13 + 0x198);
  iVar2 = FUN_043bb090(0x50);
  iVar8 = *(int *)(this + 0x50);
  iVar3 = FUN_043bb090(0x37);
  uVar4 = FUN_043bb090(0x1e0);
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03628);
  (*pcVar18)(pPVar13,(iVar8 / 2 - iVar2) - iVar3,uVar4,iVar2,*(undefined4 *)(lVar14 + 0x3c));
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b03628,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b03cc8,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  pcVar18 = *(code **)(*(long *)pPVar13 + 800);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar18)(pPVar13,uVar15);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b03908,1);
  PVZ2UIButton::AddImage(pPVar13,(Insets *)&local_40,0);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,pPVar13);
  FUN_05478178(awStack_78,L"[MAINMENU_PLAY]",aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,0x3e9,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar13;
  FUN_05476c50(awStack_78);
  nop();
  plVar17 = *(long **)(this + 0xe8);
  pcVar18 = *(code **)(*plVar17 + 0x198);
  iVar2 = FUN_043bb090(0x37);
  iVar8 = *(int *)(this + 0x50);
  uVar4 = FUN_043bb090(0x1e0);
  uVar5 = FUN_043bb090(0x6c);
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03798);
  (*pcVar18)(plVar17,iVar2 + iVar8 / 2,uVar4,uVar5,*(undefined4 *)(lVar14 + 0x3c));
  pPVar13 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b03798,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b039a8,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar17 = *(long **)(this + 0xe8);
  pcVar18 = *(code **)(*plVar17 + 800);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  (*pcVar18)(plVar17,uVar15);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  *(undefined8 *)(this + 0xf0) = 0;
  FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,0x3eb,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar13;
  FUN_05476c50(awStack_78);
  nop();
  plVar17 = *(long **)(this + 0xf0);
  iVar2 = FUN_043bb090(0xa0);
  iVar8 = *(int *)(this + 0x50);
  uVar4 = FUN_043bb090(0x96);
  uVar5 = FUN_043bb090(0x28);
  (**(code **)(*plVar17 + 0x198))
            (plVar17,iVar8 - iVar2,(int)((float)*(int *)(this + 0x54) * 0.8),uVar4,uVar5);
  iVar2 = FUN_043bb090(10);
  iVar3 = FUN_043bb090(5);
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03528);
  iVar8 = *(int *)(lVar14 + 0x38);
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03528);
  Sexy::Insets::Insets
            (aIStack_98,iVar2,iVar3,(int)((float)iVar8 * 0.8),
             (int)((float)*(int *)(lVar14 + 0x3c) * 0.8));
  pPVar13 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b03528,1);
  PVZ2UIButton::AddImage(pPVar13,(PVZ2UIImage *)&local_40,(TRect *)aIStack_98);
  iVar8 = FUN_043bb090(0xf);
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03528);
  iVar2 = FUN_043bb090(0xfffffffb);
  iVar3 = FUN_043bb090(100);
  iVar6 = FUN_043bb090(0x32);
  Sexy::Insets::Insets
            (aIStack_88,(int)((float)iVar8 + (float)*(int *)(lVar14 + 0x38) * 0.8),iVar2,iVar3,iVar6
            );
  pPVar13 = *(PVZ2UIButton **)(this + 0xf0);
  TodStringTranslate(L"[REFRESH_WISH_PANEL_BUTTON_TEXT_CONTENT]");
  Sexy::Insets::Insets((Insets *)&local_40,aIStack_88);
  PVZ2UIButton::AddText(pPVar13,awStack_78,(Insets *)&local_40,0);
  FUN_05476c50(awStack_78);
  pPVar13 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b03628,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b03cc8,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar17 = *(long **)(this + 0xf0);
  pcVar18 = *(code **)(*plVar17 + 800);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar18)(plVar17,uVar15);
  (**(code **)(*(long *)local_b0 + 0x60))(local_b0,*(undefined8 *)(this + 0xf0));
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  *(undefined4 *)(this + 0x188) = 0;
  TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0x168),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::FestivalEntranceUI(FestivalGameMode) */

void __thiscall FestivalEntranceUI::FestivalEntranceUI(FestivalEntranceUI *this,undefined4 param_2)

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
  CachedUIResourcePtr<Sexy::Image> *this_01;
  SalesProgressBar *pSVar11;
  long lVar12;
  PVZ2UIButton *this_02;
  LotteryResultProgressBar *this_03;
  code *pcVar13;
  int iVar14;
  int local_90;
  int local_88;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06843990;
  *(undefined ***)(this + 0xd8) = &PTR__FestivalEntranceUI_06843cd0;
  *(undefined **)(this + 0xe0) = &DAT_06843d18;
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  FUN_05476574(this + 0x128);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x168));
  *(undefined8 *)(this + 0xe8) = 0;
  this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::ResetWishProps(this_00);
  std::vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>>::clear
            ((vector<FestivalGameWidget*,std::allocator<FestivalGameWidget*>> *)(this + 0x138));
  *(undefined4 *)(this + 0x130) = param_2;
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
  iVar2 = FUN_043bb090(0x2a8);
  iVar3 = FUN_043bb090(0x148);
  iVar14 = (int)(float)iVar2;
  iVar4 = FUN_043bb090(0);
  iVar5 = FUN_043bb090(0xaa);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar14,(int)(float)iVar3);
  pLVar1 = gLawnApp;
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  iVar3 = FUN_043bb090(0);
  Sexy::Widget::Resize
            ((Widget *)this,(int)(((float)*(int *)(pLVar1 + 0xd4) - (float)iVar2) * 0.5),iVar3,
             iVar14,*(int *)(pLVar1 + 0xd8));
  iVar3 = FUN_043bb090(0x18);
  iVar2 = *(int *)(this + 0x100);
  switch(*(undefined4 *)(this + 0x130)) {
  case 0:
    local_90 = FUN_043bb090(0xc);
    local_90 = local_90 + *(int *)(this + 0xf8);
    local_88 = FUN_043bb090(0x3e);
    iVar4 = FUN_043bb090(0x14);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
    iVar4 = iVar4 + iVar5;
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b037e8;
    break;
  case 1:
  case 2:
    local_90 = FUN_043bb090(0xc);
    local_90 = local_90 + *(int *)(this + 0xf8);
    local_88 = FUN_043bb090(0x42);
    iVar4 = FUN_043bb090(0x14);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
    iVar4 = iVar4 + iVar5;
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036a0;
    break;
  case 3:
    local_90 = FUN_043bb090(0xc);
    local_90 = local_90 + *(int *)(this + 0xf8);
    local_88 = FUN_043bb090(0x3e);
    iVar4 = FUN_043bb090(0x14);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
    iVar4 = iVar4 + iVar5;
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b034f0;
    break;
  default:
    goto switchD_043bff30_default;
  }
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  iVar5 = *(int *)(lVar12 + 0x3c);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038d8);
  Sexy::Insets::Insets
            ((Insets *)&local_40,local_90,local_88,iVar2 - iVar3,
             iVar4 + iVar5 + *(int *)(lVar12 + 0x3c));
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
switchD_043bff30_default:
  iVar5 = FUN_043bb090(0xc);
  iVar4 = *(int *)(this + 0xf8);
  iVar14 = FUN_043bb090(0x88);
  iVar6 = FUN_043bb090(0x2e);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d90);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03578);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + iVar4,iVar14,iVar2 - iVar3,
             iVar6 + iVar7 + iVar8 + *(int *)(lVar12 + 0x3c));
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  setupGameLevelScreen(this);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_02,1000,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = *(int *)(this + 0xf8);
  iVar3 = *(int *)(this + 0x100);
  pcVar13 = *(code **)(*(long *)this_02 + 0x198);
  iVar5 = FUN_043bb090(0x4b);
  iVar4 = *(int *)(this + 0xfc);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038b0);
  iVar14 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar6 = FUN_043bb090(7);
  this_03 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038b0);
  uVar9 = LotteryResultProgressBar::GetCurrentLevel(this_03);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038b0);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar13)(this_02,(iVar2 + iVar3) - iVar5,(iVar4 - iVar14) - iVar6,uVar9,uVar10);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b038b0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b03c70,1);
  PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_02);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::scrollRight() */

void __thiscall FestivalEntranceUI::scrollRight(FestivalEntranceUI *this)

{
  TimeLineTrack<float> *this_00;
  float fVar1;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x188) == 0) {
    *(undefined4 *)(this + 0x188) = 1;
    this_00 = (TimeLineTrack<float> *)(this + 0x168);
    fVar1 = (float)PVZ_RealT();
    local_10[0] = (float)TimeLineTrack<float>::GetValueAt(this_00,fVar1);
    TimeLineTrack<float>::Initialize(this_00,local_10[0]);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_00,local_10,4);
    fVar1 = (float)PVZ_RealT();
    local_10[1] = -1.0;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar1 + 0.2),this_00,local_10 + 1,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::SelectGameInEntrance(int) */

void __thiscall FestivalEntranceUI::SelectGameInEntrance(FestivalEntranceUI *this,int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *pPVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  FestivalManager *this_01;
  PVZ2UIDialog *pPVar10;
  PrimeTypeface *pPVar11;
  TitleScreen *this_02;
  undefined8 uVar12;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar6 == (PlayerInfo *)0x0) goto LAB_043c03dc;
  iVar3 = PlayerInfo::GetFestivalGameLeftCount(pPVar6,*(undefined4 *)(this + 0x130));
  pLVar1 = gLawnApp;
  if (iVar3 < 1) {
    iVar3 = FUN_043bb090(500);
    iVar5 = FUN_043bb090(0xdc);
    pPVar10 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar3,(float)iVar5,(PVZ2UIDialog *)0x0);
    TodStringTranslate(L"[SEED_CHOOSER_WARNING_TITLE]");
    PVZ2UIDialog::SetHeaderLabel(pPVar10,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05478178(awStack_50,L"[FESTIVALGAME_LEFTTIME_HEAD]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(pPVar10,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    PVZ2UIDialog::SetBackgroundDarken(pPVar10,true,0.5);
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogCancel);
    Sexy::Delegate0::Delegate0<FestivalEntranceUI,void(FestivalEntranceUI::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar10,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    goto LAB_043c03dc;
  }
  if (param_1 < 0) goto LAB_043c03dc;
  uVar12 = *(undefined8 *)(this + 0x138);
  uVar7 = FUN_043baea0(uVar12,*(undefined8 *)(this + 0x140));
  if (uVar7 <= (ulong)(long)param_1) goto LAB_043c03dc;
  puVar8 = (undefined8 *)FUN_043baeac(uVar12,(long)param_1);
  this_02 = (TitleScreen *)*puVar8;
  if (this_02 == (TitleScreen *)0x0) goto LAB_043c03dc;
  iVar3 = *(int *)(this + 0x130);
  if (iVar3 == 0) {
    iVar3 = FUN_043bae38(*(undefined4 *)(this_02 + 0xe0));
    if (iVar3 == 2) {
      cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x29);
      pLVar1 = gLawnApp;
      goto joined_r0x043c06d8;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = FUN_043bae38(*(undefined4 *)(this_02 + 0xe0));
    if (iVar3 == 2) {
      cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x2a);
      pLVar1 = gLawnApp;
      goto joined_r0x043c06d8;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_043bae38(*(undefined4 *)(this_02 + 0xe0));
    if (iVar3 == 2) {
      cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x2b);
      pLVar1 = gLawnApp;
      goto joined_r0x043c06d8;
    }
  }
  else if ((iVar3 == 3) && (iVar3 = FUN_043bae38(*(undefined4 *)(this_02 + 0xe0)), iVar3 == 2)) {
    cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x34);
    pLVar1 = gLawnApp;
joined_r0x043c06d8:
    gLawnApp = pLVar1;
    if (cVar2 == '\0') {
      iVar3 = FUN_043bb090(500);
      iVar5 = FUN_043bb090(0xdc);
      pPVar10 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar3,(float)iVar5,(PVZ2UIDialog *)0x0);
      FUN_05478178(awStack_50,L"[SUMMARY_NOTICE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(pPVar10,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[FESTIVALGAME_UNLOCK_LEGEND_TIP]",auStack_58);
      PVZ2UIDialog::SetFooterLabel(pPVar10,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pPVar11 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(pPVar10,pPVar11,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar11 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)awStack_50,1);
      PVZ2UIDialog::SetFooterFont(pPVar10,pPVar11,(Color *)awStack_50);
      PVZ2UIDialog::SetBackgroundDarken(pPVar10,true,0.5);
      FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onDialogCancel);
      Sexy::Delegate0::Delegate0<FestivalEntranceUI,void(FestivalEntranceUI::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar10,auStack_58,aDStack_38,0);
      FUN_05476c50(auStack_58);
      nop();
      goto LAB_043c03dc;
    }
  }
  TitleScreen::SetSkipIntro(this_02,true);
  lVar9 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  uVar4 = FUN_043bae38(*(undefined4 *)(this_02 + 0xe0));
  FUN_043bae2c(lVar9 + 0xc,uVar4);
  this_01 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::ResetWishProps(this_01);
  cVar2 = setupWishScreen(this);
  if (cVar2 == '\0') {
    GoToPlay(this);
  }
  else {
    scrollRight(this);
  }
LAB_043c03dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEntranceUI::scrollLeft() */

void __thiscall FestivalEntranceUI::scrollLeft(FestivalEntranceUI *this)

{
  TimeLineTrack<float> *this_00;
  float fVar1;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x188) == 1) {
    *(undefined4 *)(this + 0x188) = 0;
    this_00 = (TimeLineTrack<float> *)(this + 0x168);
    fVar1 = (float)PVZ_RealT();
    local_10[0] = (float)TimeLineTrack<float>::GetValueAt(this_00,fVar1);
    TimeLineTrack<float>::Initialize(this_00,local_10[0]);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_00,local_10,4);
    fVar1 = (float)PVZ_RealT();
    local_10[1] = 0.0;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar1 + 0.2),this_00,local_10 + 1,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalEntranceUI::ButtonDepress(int) */

void __thiscall FestivalEntranceUI::ButtonDepress(FestivalEntranceUI *this,int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  FestivalManager *this_00;
  long lVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ActivityConfig *this_03;
  int *piVar6;
  
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
  if (99 < param_1) {
    uVar4 = FUN_043baea0(*(undefined8 *)(this + 0x138),*(undefined8 *)(this + 0x140));
    if ((ulong)(long)(param_1 + -100) < uVar4) {
      if (*(int *)(this + 0x188) != 0) {
        return;
      }
      SelectGameInEntrance(this,param_1 + -100);
      return;
    }
  }
  switch(param_1) {
  case 1000:
    LawnApp::KillFestivalEntranceUI(gLawnApp);
    return;
  case 0x3e9:
    GoToPlay(this);
    return;
  case 0x3ea:
    this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    FestivalManager::ResetWishProps(this_00);
    scrollLeft(this);
    return;
  case 0x3eb:
    lVar5 = LawnApp::GetActivityConfig();
    if (lVar5 != 0) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
      piVar6 = (int *)ActivityConfig::GetRefreshPlantsPurchaseData(this_03);
      iVar2 = piVar6[1];
      if (*piVar6 == 2) {
        iVar1 = PlayerInfo::GetNumCoins(this_02,true);
        if ((iVar1 < iVar2) || (iVar2 = PlayerInfo::SubtractCoins(this_02,iVar2), iVar2 < 0)) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
          return;
        }
      }
      else {
        if (*piVar6 != 0) {
          return;
        }
        iVar1 = PlayerInfo::GetNumGems(this_02,true);
        if ((iVar1 < iVar2) ||
           (iVar2 = PlayerInfo::SubtractGems
                              (this_02,iVar2,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false),
           iVar2 < 0)) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
          return;
        }
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* non-virtual thunk to FestivalEntranceUI::ButtonDepress(int) */

void __thiscall FestivalEntranceUI::ButtonDepress(FestivalEntranceUI *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}

