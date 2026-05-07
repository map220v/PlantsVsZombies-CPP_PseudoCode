// Class: ActiveNationalDayTab


/* ActiveNationalDayTab::~ActiveNationalDayTab() */

void __thiscall ActiveNationalDayTab::~ActiveNationalDayTab(ActiveNationalDayTab *this)

{
  *(undefined ***)this = &PTR__ActiveNationalDayTab_06927360;
  *(undefined ***)(this + 0x28) = &PTR_ButtonPress_069273c0;
  nop();
  return;
}


/* ActiveNationalDayTab::~ActiveNationalDayTab() */

void __thiscall ActiveNationalDayTab::~ActiveNationalDayTab(ActiveNationalDayTab *this)

{
  ~ActiveNationalDayTab(this);
  AK::FreeHook(this);
  return;
}


/* ActiveNationalDayTab::CancelBuy() */

void ActiveNationalDayTab::CancelBuy(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* ActiveNationalDayTab::Update() */

void __thiscall ActiveNationalDayTab::Update(ActiveNationalDayTab *this)

{
  char cVar1;
  NatinalDayRewardMgr *this_00;
  
  cVar1 = FUN_049cb0f8(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8));
  if ((((cVar1 != '\0') && (*(long *)(this + 0x38) != 0)) && (*(long *)(this + 0x40) != 0)) &&
     ((*(char *)(*(long *)(this + 0x38) + 0x6c) != '\0' ||
      (*(char *)(*(long *)(this + 0x40) + 0x6c) != '\0')))) {
    this_00 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
    cVar1 = NatinalDayRewardMgr::CanDoNationalActivity(this_00);
    if (cVar1 == '\0') {
      (**(code **)(**(long **)(this + 0x38) + 0x158))(*(long **)(this + 0x38));
      (**(code **)(**(long **)(this + 0x40) + 0x158))(*(long **)(this + 0x40),0);
      return;
    }
  }
  return;
}


/* ActiveNationalDayTab::DrawBanner(Sexy::Graphics*) */

void __thiscall ActiveNationalDayTab::DrawBanner(ActiveNationalDayTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  NatinalDayRewardMgr *this_00;
  long lVar4;
  LotteryResultProgressBar *this_01;
  
  this_00 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
  lVar4 = NatinalDayRewardMgr::GetCurrentNationalDayActivityDate(this_00);
  if ((lVar4 != 0) &&
     (this_01 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)(lVar4 + 0x20),false),
     this_01 != (LotteryResultProgressBar *)0x0)) {
    iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar3 = FUN_049cb200(0xb4);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_01,(iVar1 - iVar2) / 2,iVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveNationalDayTab::DrawTimeCD(Sexy::Graphics*) */

void __thiscall ActiveNationalDayTab::DrawTimeCD(ActiveNationalDayTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  NatinalDayRewardMgr *this_00;
  undefined8 uVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_30,&DAT_057394f8,aCStack_18);
  nop();
  this_00 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
  iVar1 = NatinalDayRewardMgr::GetIntervalTime(this_00);
  if (iVar1 != -1) {
    Sexy::StrFormat(L"%d:%d:%d",aCStack_18,(ulong)(uint)(iVar1 / 0xe10),
                    (ulong)(uint)((iVar1 % 0xe10) / 0x3c),(ulong)(uint)(iVar1 % 0x3c));
    FUN_054766c8(auStack_30,aCStack_18);
    FUN_05476c50(aCStack_18);
  }
  iVar2 = FUN_049cb200(0x2d);
  iVar3 = FUN_049cb200(100);
  iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
  iVar4 = FUN_049cb200(0x19);
  iVar5 = FUN_049cb200(0x50);
  Sexy::Insets::Insets(aIStack_28,iVar2 + (iVar1 - iVar3) / 2,iVar4,iVar3,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_18,2);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveNationalDayTab::DrawIntro(Sexy::Graphics*) */

void __thiscall ActiveNationalDayTab::DrawIntro(ActiveNationalDayTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  NatinalDayRewardMgr *this_00;
  long lVar6;
  undefined8 uVar7;
  string *extraout_x1;
  undefined1 auVar8 [16];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
  auVar8 = NatinalDayRewardMgr::GetCurrentNationalDayActivityDate(this_00);
  lVar6 = auVar8._0_8_;
  if (lVar6 != 0) {
    Sexy::UTF8StringToWString((Sexy *)(lVar6 + 0x10),auVar8._8_8_);
    TodStringTranslate(awStack_38);
    iVar2 = FUN_049cb200(0x78);
    iVar3 = FUN_049cb200(0x5f);
    iVar4 = FUN_049cb200(0x96);
    iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
    iVar5 = FUN_049cb200(0x50);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 - iVar4,iVar5);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color(aCStack_18,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aCStack_18,0,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    Sexy::UTF8StringToWString((Sexy *)(lVar6 + 0x18),extraout_x1);
    TodStringTranslate(awStack_38);
    iVar2 = FUN_049cb200(0x78);
    iVar3 = FUN_049cb200(0x96);
    iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
    iVar4 = FUN_049cb200(0x50);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar1 - iVar3,iVar4);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color(aCStack_18,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aCStack_18,0,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveNationalDayTab::ConfirmBuy() */

void __thiscall ActiveNationalDayTab::ConfirmBuy(ActiveNationalDayTab *this)

{
  int iVar1;
  NatinalDayRewardMgr *this_00;
  long lVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ActiveNationalDayTab *pAVar3;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
  lVar2 = NatinalDayRewardMgr::GetCurrentNationalDayActivityDate(this_00);
  if (lVar2 != 0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      iVar1 = PlayerInfo::GetNumGems(this_02,true);
      if (iVar1 < *(int *)(lVar2 + 8)) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
        return;
      }
      pAVar3 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<ActiveNationalDayTab,bool>::ICloudRequestCallbackFunction
                (pAVar3,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems(this_02,1,0x8bd,(ICloudRequestCallbackFunctionBase *)pAVar3,1,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveNationalDayTab::AddBuyDialog() */

void __thiscall ActiveNationalDayTab::AddBuyDialog(ActiveNationalDayTab *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  NatinalDayRewardMgr *this_01;
  long lVar3;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
  lVar3 = NatinalDayRewardMgr::GetCurrentNationalDayActivityDate(this_01);
  this_00 = gLawnApp;
  if (lVar3 != 0) {
    iVar1 = FUN_049cb200(400);
    iVar2 = FUN_049cb200(0xfa);
    this_02 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
    TodStringTranslate(L"[NATIONALDAY_ACTIVE_BUY_DIALOG_CONTENT]");
    PVZ2UIDialog::SetFooterLabel(this_02,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05478178(awStack_50,L"[NATIONALDAY_ACTIVE_BUY_DIALOG_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_02,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_02,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_02,pPVar4,(Color *)awStack_50);
    FUN_05478178(auStack_58,L"[BUTTON_CANCEL]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CancelBuy);
    Sexy::Delegate0::Delegate0<ActiveNationalDayTab,void(ActiveNationalDayTab::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmBuy);
    Sexy::Delegate0::Delegate0<ActiveNationalDayTab,void(ActiveNationalDayTab::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveNationalDayTab::ButtonDepress(int) */

void __thiscall ActiveNationalDayTab::ButtonDepress(ActiveNationalDayTab *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  AddBuyDialog(this);
  return;
}


/* non-virtual thunk to ActiveNationalDayTab::ButtonDepress(int) */

void __thiscall ActiveNationalDayTab::ButtonDepress(ActiveNationalDayTab *this,int param_1)

{
  ButtonDepress(this + -0x28,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveNationalDayTab::ActiveNationalDayTab(int, UI::Dialog*) */

void __thiscall
ActiveNationalDayTab::ActiveNationalDayTab(ActiveNationalDayTab *this,int param_1,Dialog *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  NatinalDayRewardMgr *pNVar8;
  long lVar9;
  UIWidgetImage *pUVar10;
  long *plVar11;
  PVZ2UIButton *pPVar12;
  Image *pIVar13;
  long lVar14;
  code *pcVar15;
  wstring awStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x28));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__ActiveNationalDayTab_06927360;
  *(undefined ***)(this + 0x28) = &PTR_ButtonPress_069273c0;
  *(undefined8 *)(this + 0x40) = 0;
  pNVar8 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
  cVar3 = NatinalDayRewardMgr::CanDoNationalActivity(pNVar8);
  if (cVar3 == '\0') {
    (**(code **)(**(long **)(this + 0x18) + 0x158))(*(long **)(this + 0x18));
  }
  else {
    pNVar8 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
    lVar9 = NatinalDayRewardMgr::GetCurrentNationalDayActivityDate(pNVar8);
    uVar6 = *(undefined4 *)(*(long *)(this + 0x20) + 0x50);
    uVar1 = *(undefined4 *)(*(long *)(this + 0x20) + 0x54);
    pUVar10 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar10);
    *(UIWidgetImage **)(this + 0x20) = pUVar10;
    plVar11 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar11 + 0x60))(plVar11,*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(this + 0x20) + 0x198))(*(long **)(this + 0x20),0,0,uVar6,uVar1);
    TodStringTranslate(L"[NATIONALDAY_ACTIVE_BUY]");
    TodReplaceNumberString(awStack_40,L"{GEM}",*(int *)(lVar9 + 8));
    FUN_05476c50(awStack_40);
    Sexy::Color::Color((Color *)awStack_40,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar12,0,(ButtonListener *)(this + 0x28),awStack_80,(Color *)awStack_40);
    *(PVZ2UIButton **)(this + 0x38) = pPVar12;
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75820);
    iVar4 = FUN_049cb200(0x3c);
    iVar4 = iVar4 + *(int *)(lVar9 + 0x38);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75820);
    plVar11 = *(long **)(this + 0x38);
    iVar5 = FUN_049cb200(0x1e);
    iVar2 = *(int *)(*(long *)(this + 0x20) + 0x50);
    uVar6 = FUN_049cb200(0x17c);
    (**(code **)(*plVar11 + 0x198))
              (plVar11,iVar5 + (iVar2 - iVar4) / 2,uVar6,iVar4,*(undefined4 *)(lVar9 + 0x3c));
    pPVar12 = *(PVZ2UIButton **)(this + 0x38);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b75820,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b757c8,3);
    PVZ2UIButton::SetDialogStates(pPVar12,aPStack_78,(PVZ2UIImage *)awStack_40);
    (**(code **)(**(long **)(this + 0x20) + 0x60))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x38));
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b758e0);
    pUVar10 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar10,pIVar13);
    lVar14 = *(long *)(this + 0x38);
    lVar9 = *(long *)pUVar10;
    *(UIWidgetImage **)(this + 0x40) = pUVar10;
    pcVar15 = *(code **)(lVar9 + 0x198);
    iVar5 = FUN_049cb200(10);
    iVar4 = *(int *)(lVar14 + 0x48);
    iVar7 = FUN_049cb200(0x11);
    iVar2 = *(int *)(lVar14 + 0x4c);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b758e0);
    uVar6 = *(undefined4 *)(lVar9 + 0x38);
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b758e0);
    (*pcVar15)(pUVar10,iVar5 + iVar4,iVar7 + iVar2,uVar6,*(undefined4 *)(lVar9 + 0x3c));
    (**(code **)(**(long **)(this + 0x20) + 0x60))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x40));
    FUN_05476c50(awStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveNationalDayTab::CreateStaticRewardAnim(NationalDayRewardItem*) */

void __thiscall
ActiveNationalDayTab::CreateStaticRewardAnim
          (ActiveNationalDayTab *this,NationalDayRewardItem *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  NationalDayRewardAnimWidget *this_00;
  long lVar5;
  long lVar6;
  
  if (*(long *)(this + 0x30) != 0) {
    (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20));
  }
  this_00 = ::operator_new(0x110);
  NationalDayRewardAnimWidget::NationalDayRewardAnimWidget(this_00,param_1,5.0);
  lVar5 = *(long *)(this + 0x20);
  iVar1 = *(int *)(this_00 + 0x50);
  iVar2 = *(int *)(this_00 + 0x54);
  iVar3 = *(int *)(lVar5 + 0x50);
  iVar4 = *(int *)(lVar5 + 0x54);
  lVar6 = *(long *)this_00;
  *(NationalDayRewardAnimWidget **)(this + 0x30) = this_00;
  (**(code **)(lVar6 + 0x1a8))
            (this_00,*(int *)(lVar5 + 0x48) + (iVar3 - iVar1) / 2,
             *(int *)(lVar5 + 0x4c) + (iVar4 - iVar2) / 2);
  (**(code **)(**(long **)(this + 0x20) + 0x60))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x30));
  (**(code **)(**(long **)(this + 0x20) + 0xb0))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveNationalDayTab::BuySuccess(bool const&) */

void __thiscall ActiveNationalDayTab::BuySuccess(ActiveNationalDayTab *this,bool *param_1)

{
  undefined *puVar1;
  LawnApp *this_00;
  NatinalDayRewardMgr *pNVar2;
  NationalDayRewardItem *pNVar3;
  ProfileMgr *this_01;
  long lVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2);
  }
  else {
    pNVar2 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
    pNVar3 = (NationalDayRewardItem *)NatinalDayRewardMgr::GetRewardItem(pNVar2);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_01);
    if ((lVar4 != 0) && (pNVar3 != (NationalDayRewardItem *)0x0)) {
      pNVar2 = (NatinalDayRewardMgr *)NatinalDayRewardMgr::GetInstance();
      NatinalDayRewardMgr::SetMyRewardItem(pNVar2,pNVar3);
      this_00 = gLawnApp;
      std::string::string(asStack_10,"active_nationalday");
      LawnApp::ShowGachaUI(this_00,asStack_10,pNVar3 == (NationalDayRewardItem *)0x0);
      std::string::~string(asStack_10);
      nop();
      LawnApp::GetRealBeijingTime(gLawnApp);
      PlayerInfo::AddNationalDayDate(lVar4);
      puVar1 = gMessageRouter;
      FUN_05475d88(asStack_10,pNVar3);
      MessageRouter::Post<std::string_const&,int,std::string,int>
                ((MessageRouter *)puVar1,Message::NationalDayConsumeDimondsInLottery,asStack_10,
                 *(undefined4 *)(pNVar3 + 0xc));
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveNationalDayTab::DrawForeground(Sexy::Graphics*) */

void __thiscall ActiveNationalDayTab::DrawForeground(ActiveNationalDayTab *this,Graphics *param_1)

{
  char cVar1;
  GraphicsAutoState aGStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::DrawForeground((ActiveCenterTabBase *)this,param_1);
  cVar1 = FUN_049cb0f8(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8));
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_10,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_10,local_c);
    DrawBanner(this,param_1);
    DrawTimeCD(this,param_1);
    DrawIntro(this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

