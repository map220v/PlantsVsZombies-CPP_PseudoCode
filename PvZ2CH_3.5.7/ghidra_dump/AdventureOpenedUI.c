// Class: AdventureOpenedUI


/* AdventureOpenedUI::BackToMap() */

void AdventureOpenedUI::BackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillAdventureOpenedUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureOpenedUI::~AdventureOpenedUI() */

void __thiscall AdventureOpenedUI::~AdventureOpenedUI(AdventureOpenedUI *this)

{
  LawnApp *pLVar1;
  char cVar2;
  PrimeText *this_00;
  long *plVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0682f260;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f588;
  if (*(long *)(this + 0x128) != 0) {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x128) = 0;
  }
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x110);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdventureOpenedUI::~AdventureOpenedUI() */

void __thiscall AdventureOpenedUI::~AdventureOpenedUI(AdventureOpenedUI *this)

{
  ~AdventureOpenedUI(this);
  AK::FreeHook(this);
  return;
}


/* AdventureOpenedUI::Update() */

void __thiscall AdventureOpenedUI::Update(AdventureOpenedUI *this)

{
  long *plVar1;
  code *pcVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  plVar1 = *(long **)(this + 0x128);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x80);
    PVZ_RealT();
    (*pcVar2)(plVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureOpenedUI::OnOpenPlantAdventure(bool) */

void __thiscall AdventureOpenedUI::OnOpenPlantAdventure(AdventureOpenedUI *this,bool param_1)

{
  LawnApp *this_00;
  LawnApp *this_01;
  char cVar1;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"UIWorldMapPlantAdventure");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  this_01 = gLawnApp;
  if (lVar2 == 0) {
    cVar1 = LawnApp::IsAdventureOpenedUIValid(gLawnApp);
    this_00 = gLawnApp;
    if (cVar1 != '\0') {
      LawnApp::KillAdventureOpenedUI(this_01);
      this_00 = gLawnApp;
    }
    gLawnApp = this_00;
    if (param_1) {
      GameStateMgr::ShowPlantAdventure(gGameStateMgr,5,5);
    }
    else {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(asStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,BackToMap);
      Sexy::Delegate0::Delegate0<AdventureOpenedUI,void(AdventureOpenedUI::*)()>
                (aDStack_38,asStack_50);
      PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureOpenedUI::ButtonDepress(int) */

void __thiscall AdventureOpenedUI::ButtonDepress(AdventureOpenedUI *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *pPVar3;
  long *plVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (param_1 == 0) {
    if ((this_02 == (PlayerInfo *)0x0) ||
       (iVar2 = FUN_042d2594(*(undefined4 *)(this_02 + 0x40)), iVar2 != 0x27)) {
      cVar1 = LawnApp::IsNetworkModuleOK();
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
        pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,BackToMap);
        Sexy::Delegate0::Delegate0<AdventureOpenedUI,void(AdventureOpenedUI::*)()>
                  (aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        (**(code **)(*plVar4 + 0x100))();
      }
    }
    else {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::OpenPlantAdventure,true);
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GotExploreTeamStatus,true);
    }
  }
  else if ((param_1 == 6) &&
          (LawnApp::KillAdventureOpenedUI(gLawnApp), this_02 != (PlayerInfo *)0x0)) {
    PlayerInfo::RemoveAllPlantAdventureOpenInfo(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdventureOpenedUI::ButtonDepress(int) */

void __thiscall AdventureOpenedUI::ButtonDepress(AdventureOpenedUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureOpenedUI::Draw(Sexy::Graphics*) */

void __thiscall AdventureOpenedUI::Draw(AdventureOpenedUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  long *plVar13;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7338);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar1 = *(int *)(this + 0xe8);
  iVar7 = *(int *)(this + 0xe0);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar8 = *(int *)(this + 0xe4);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar4 = FUN_042d2d60(0x14);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,iVar7 + (iVar1 - iVar2) / 2,(iVar8 - iVar3) + iVar4,iVar5,iVar6);
  iVar7 = FUN_042d2d60(0x23);
  iVar1 = *(int *)(this + 0xf4);
  iVar8 = FUN_042d2d60(0x32);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xf0),iVar7 + iVar1,*(int *)(this + 0xf8),iVar8);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar9,aIStack_18,5,1);
  iVar7 = FUN_042d2d60(0x82);
  iVar1 = *(int *)(this + 0xf4);
  iVar8 = FUN_042d2d60(0x78);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xf0),iVar7 + iVar1,*(int *)(this + 0xf8),iVar8);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_Outline);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,this + 0x118,aIStack_28,uVar9,aIStack_18,5,1);
  plVar13 = *(long **)(this + 0x128);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x98))(plVar13,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureOpenedUI::AdventureOpenedUI() */

void __thiscall AdventureOpenedUI::AdventureOpenedUI(AdventureOpenedUI *this)

{
  ButtonListener *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  LawnApp *pLVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  PrimeText *this_01;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  ProfileMgr *this_02;
  long lVar17;
  BouncingArrow *this_03;
  Widget *pWVar18;
  long lVar19;
  code *pcVar20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [8];
  undefined8 local_78 [7];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR_GetClass_0682f260;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f588;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x110);
  FUN_05476574(this + 0x118);
  *(undefined8 *)(this + 0x128) = 0;
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Activity");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  iVar6 = FUN_042d2d60(0x285);
  iVar7 = FUN_042d2d60(0x17c);
  iVar1 = (*(int *)(this + 0x50) - iVar6) / 2;
  iVar8 = FUN_042d2d60(0x1e);
  iVar8 = iVar8 + (*(int *)(this + 0x54) - iVar7) / 2;
  TodStringTranslate(L"[PLANT_ADVENTURE_OPENED_TITLE]");
  FUN_054766c8(this + 0x110,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar8,iVar6,iVar7);
  *(undefined8 *)(this + 0xe0) = local_40;
  *(undefined8 *)(this + 0xe8) = uStack_38;
  iVar6 = FUN_042d2d60(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + *(int *)(this + 0xe0),iVar6 + *(int *)(this + 0xe4),
             iVar6 * -2 + *(int *)(this + 0xe8),iVar6 * -2 + *(int *)(this + 0xec));
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = uStack_38;
  iVar6 = FUN_042d2d60(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + *(int *)(this + 0xe0),iVar6 + *(int *)(this + 0xe4),
             iVar6 * -2 + *(int *)(this + 0xe8),iVar6 * -2 + *(int *)(this + 0xec));
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  TodStringTranslate(L"[PLANT_ADVENTURE_OPENED_HINT]");
  FUN_054766c8(this + 0x118,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  TodStringTranslate(L"[PLANT_ADVENTURE_GO]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0,this_00,(wstring *)local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar14;
  FUN_05476c50((Point *)local_78);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar6 = (iVar6 * 3) / 2;
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar7 = *(int *)(this + 0xe4);
  iVar11 = *(int *)(this + 0xe8);
  iVar2 = *(int *)(this + 0xec);
  iVar3 = *(int *)(this + 0xe0);
  iVar10 = FUN_042d2d60(10);
  (**(code **)(**(long **)(this + 0x120) + 0x198))
            (*(long **)(this + 0x120),iVar3 + (iVar11 - iVar6) / 2,
             (((iVar7 + iVar2) - iVar9 / 2) + iVar10 / 2) - iVar10,iVar6,iVar9);
  pPVar14 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06af7168,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af6df8,2);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),0);
  pWVar18 = *(Widget **)(this + 0x120);
  pWVar18[0x59] = (Widget)0x0;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar18);
  FUN_05478178((Point *)local_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,6,this_00,(wstring *)local_78,(Color *)&local_40);
  FUN_05476c50((Point *)local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06af7430,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af7568,1);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40);
  pcVar20 = *(code **)(*(long *)pPVar14 + 0x198);
  iVar6 = FUN_042d2d60(0x2d0);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7430);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar11 = FUN_042d2d60(0x14);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7430);
  uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7430);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar20)(pPVar14,iVar6 + iVar1,(iVar8 - iVar7) + iVar11,uVar12,uVar13);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar14);
  puVar4 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnOpenPlantAdventure);
  local_a0 = local_40;
  uStack_98 = uStack_38;
  local_90 = local_30;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<AdventureOpenedUI,void(AdventureOpenedUI::*)(bool)>>
            ((MessageRouter *)puVar4,Message::OpenPlantAdventure,&local_a0);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar17 = ProfileMgr::GetCurrentProfile(this_02);
  if (((lVar17 != 0) && (iVar8 = FUN_042d2594(*(undefined4 *)(lVar17 + 0x40)), iVar8 == 0x27)) &&
     (*(long *)(this + 0x128) == 0)) {
    (**(code **)(*(long *)pPVar14 + 0x188))(pPVar14,1);
    this_03 = GameObject::Create<BouncingArrow>();
    *(BouncingArrow **)(this + 0x128) = this_03;
    AnimationController::SetDuration((AnimationController *)this_03,10000.0);
    lVar19 = *(long *)(this + 0x120);
    lVar17 = *(long *)(this + 0x128);
    iVar8 = *(int *)(lVar19 + 0x50);
    iVar1 = *(int *)(lVar19 + 0x48);
    *(undefined4 *)(lVar17 + 0x3c) = 0;
    iVar6 = FUN_042d2d60(0x1e);
    Sexy::Point::Point((Point *)local_78,iVar1 + iVar8 / 2,*(int *)(lVar19 + 0x4c) - iVar6);
    *(undefined8 *)(lVar17 + 0x30) = local_78[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

