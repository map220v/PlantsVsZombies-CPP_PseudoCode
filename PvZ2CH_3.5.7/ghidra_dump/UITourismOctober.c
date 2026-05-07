// Class: UITourismOctober


/* UITourismOctober::getData() */

UITourismOctober * __thiscall UITourismOctober::getData(UITourismOctober *this)

{
  return this + 0x180;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initSharedBtn(bool) */

void __thiscall UITourismOctober::initSharedBtn(UITourismOctober *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::string::string(asStack_10,"UIButton_OK");
    pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pPVar1 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::LockButton() */

void __thiscall UITourismOctober::LockButton(UITourismOctober *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_1");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::UnlockButton() */

void __thiscall UITourismOctober::UnlockButton(UITourismOctober *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_1");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITourismOctober::TabSelectionChanged(int) */

int UITourismOctober::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UITourismOctober::TabSelectionChanged(int) */

void __thiscall UITourismOctober::TabSelectionChanged(UITourismOctober *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* UITourismOctober::ScrollTargetReached(Sexy::ScrollWidget*) */

void UITourismOctober::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITourismOctober::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UITourismOctober::ScrollTargetReached(UITourismOctober *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UITourismOctober::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UITourismOctober::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITourismOctober::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UITourismOctober::ScrollTargetInterrupted(UITourismOctober *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::GetLayoutName() */

void __thiscall UITourismOctober::GetLayoutName(UITourismOctober *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITourismOctober");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITourismOctober::closeMainTips() */

void __thiscall UITourismOctober::closeMainTips(UITourismOctober *this)

{
  if (*(long *)(this + 0x150) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x150))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x150));
    *(undefined8 *)(this + 0x150) = 0;
  }
  return;
}


/* UITourismOctober::closeTaskTips() */

void __thiscall UITourismOctober::closeTaskTips(UITourismOctober *this)

{
  if (*(long *)(this + 0x160) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x160))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x160));
    *(undefined8 *)(this + 0x160) = 0;
  }
  return;
}


/* UITourismOctober::closeMainHelp() */

void __thiscall UITourismOctober::closeMainHelp(UITourismOctober *this)

{
  if (*(long *)(this + 0x158) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x158))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x158));
    *(undefined8 *)(this + 0x158) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initProgress() */

void __thiscall UITourismOctober::initProgress(UITourismOctober *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  UITourismOctoberProgressItem *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Invitation_Tophalf");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = ::operator_new(0xe0);
  UITourismOctoberProgressItem::UITourismOctoberProgressItem(this_00);
  FUN_04e952a8(this_00 + 0xd4,this_00 + 0xd8,*(undefined4 *)(this + 0x1a4),
               *(undefined4 *)(this + 0x1a0));
  uVar1 = FUN_04e967b8(0x78);
  uVar2 = FUN_04e967b8(0x69);
  uVar3 = FUN_04e967b8(0x1c2);
  uVar4 = FUN_04e967b8(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  *(UITourismOctoberProgressItem **)(this + 0x228) = this_00;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initInvitedCode(std::string const&) */

void UITourismOctober::initInvitedCode(string *param_1)

{
  undefined4 uVar1;
  UIWidgetImage *pUVar2;
  UITourismOctoberInviteItem *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Invatation_Right");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this = ::operator_new(0xe0);
  UITourismOctoberInviteItem::UITourismOctoberInviteItem(this);
  this[0x6d] = (UITourismOctoberInviteItem)0x0;
  uVar1 = FUN_04e967b8(0);
  (**(code **)(*(long *)this + 0x198))
            (this,uVar1,uVar1,*(undefined4 *)(pUVar2 + 0x50),*(undefined4 *)(pUVar2 + 0x54));
  UITourismOctoberInviteItem::InitView((string *)this);
  (**(code **)(*(long *)pUVar2 + 0x60))(pUVar2,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::RefreshTokenNum() */

void __thiscall UITourismOctober::RefreshTokenNum(UITourismOctober *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Integral_Number1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x1a8));
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITourismOctober::AddIntegral(int) */

void __thiscall UITourismOctober::AddIntegral(UITourismOctober *this,int param_1)

{
  long lVar1;
  
  *(int *)(this + 0x1a8) = *(int *)(this + 0x1a8) + param_1;
  if (0 < param_1) {
    *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + param_1;
  }
  RefreshTokenNum(this);
  lVar1 = *(long *)(this + 0x228);
  if (lVar1 != 0) {
    FUN_04e952a8(lVar1 + 0xd4,lVar1 + 0xd8,*(undefined4 *)(this + 0x1a4),
                 *(undefined4 *)(this + 0x1a0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::UpdateTimer() */

void __thiscall UITourismOctober::UpdateTimer(UITourismOctober *this)

{
  UIWidgetText *pUVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  lVar2 = *(long *)(this + 0x178) - lVar2;
  LawnApp::GetRealBeijingTime(gLawnApp);
  if ((lVar2 < 0x15181) && (lVar2 < 1)) {
    std::string::string(asStack_18,"[CORNUCOPIA_ACTIVITY_TIME_OVER]");
    StringHelper::ToStringValue(asStack_18);
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,(float)lVar2,0);
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initInvitedNum() */

void __thiscall UITourismOctober::initInvitedNum(UITourismOctober *this)

{
  UIWidgetText *pUVar1;
  string *extraout_x1;
  ulong local_20;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Invited_num");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  local_20 = FUN_04e954f8(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d0));
  std::to_string<unsigned_long>(&local_20);
  Sexy::StringToWString(aSStack_18,extraout_x1);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::showMainTips() */

void __thiscall UITourismOctober::showMainTips(UITourismOctober *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x150) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x150) = this_00;
    TodStringTranslate(L"[TOURISMOCTOBER_MAIN_TIPS_INFO]");
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x150);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeMainTips);
    Sexy::Delegate0::Delegate0<UITourismOctober,void(UITourismOctober::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x150));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::ShowTaskTips(bool) */

void __thiscall UITourismOctober::ShowTaskTips(UITourismOctober *this,bool param_1)

{
  ActivityDescriptionUI *this_00;
  wchar_t *pwVar1;
  PlantWarsLevelSelectUI *pPVar2;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x160) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x160) = this_00;
    if (param_1) {
      TodStringTranslate(L"[TOURISMOCTOBER_TASKDAY_TIPS_INFO]");
      pwVar1 = L"[TOURISMOCTOBER_TASKDAY_TIPS_LABEL]";
    }
    else {
      TodStringTranslate(L"[TOURISMOCTOBER_TASK_TIPS_INFO]");
      pwVar1 = L"[TOURISMOCTOBER_TASK_TIPS_LABEL]";
    }
    TodStringTranslate(pwVar1);
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar2 = *(PlantWarsLevelSelectUI **)(this + 0x160);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeTaskTips);
    Sexy::Delegate0::Delegate0<UITourismOctober,void(UITourismOctober::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar2,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x160));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x160));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x160));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x160));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::showMainHelp() */

void __thiscall UITourismOctober::showMainHelp(UITourismOctober *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x158) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x158) = this_00;
    TodStringTranslate(L"[TOURISMOCTOBER_MAIN_TIPS_INFO]");
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x158);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeMainHelp);
    Sexy::Delegate0::Delegate0<UITourismOctober,void(UITourismOctober::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x158));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::copyInvitatedCode() */

void __thiscall UITourismOctober::copyInvitatedCode(UITourismOctober *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x170);
  if (cVar1 == '\0') {
    Sexy::SexyAppBase::CopyToClipboard(gLawnApp);
    this_00 = (LawnApp *)gLawnApp;
    iVar2 = FUN_04e967b8(300);
    iVar3 = FUN_04e967b8(0xdc);
    this_01 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[HINT_DEFAULT_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[PVZ_COPY_COMPLETE]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_01,pPVar4,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::refreshOrder(std::vector<TourismOctoberPlayerData,
   std::allocator<TourismOctoberPlayerData> > const&) */

void __thiscall UITourismOctober::refreshOrder(UITourismOctober *this,vector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  undefined4 *puVar11;
  TeamMemberItem *this_02;
  long lVar12;
  int iVar13;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_MemberList");
  iVar13 = 0;
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(undefined1 *)((long)plVar10 + 0x6d) = 0;
  (**(code **)(*plVar10 + 0x80))(plVar10,1,1);
  uVar4 = FUN_04e967b8(0x5a);
  uVar5 = FUN_04e967b8(0x17c);
  iVar6 = FUN_04e967b8(0x32);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar7 = FUN_04e967b8(0);
  iVar8 = FUN_04e967b8(0xb4);
  iVar9 = FUN_04e967b8(0x96);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar7,iVar8,(int)plVar10[10],
             *(int *)((long)plVar10 + 0x54) - iVar9);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  local_30 = FUN_04e99970(*(undefined8 *)param_1);
  local_28 = FUN_04e999c0(*(undefined8 *)(param_1 + 8));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3) {
    puVar11 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_02 = ::operator_new(0x110);
    TeamMemberItem::TeamMemberItem(this_02);
    iVar7 = FUN_04e967b8(0x19);
    iVar7 = (iVar7 + iVar6) * iVar13;
    iVar8 = FUN_04e967b8(0xf);
    iVar13 = iVar13 + 1;
    (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar4,iVar7 + iVar8,uVar5,iVar6);
    uVar1 = puVar11[5];
    uVar2 = *puVar11;
    *(undefined4 *)(this_02 + 0xfc) = puVar11[4];
    *(undefined4 *)(this_02 + 0xf0) = uVar1;
    *(undefined4 *)(this_02 + 0xe0) = uVar2;
    Sexy::UTF8StringToSexyString((string *)(puVar11 + 2));
    FUN_054766c8(this_02 + 0xe8,auStack_20);
    FUN_05476c50(auStack_20);
    TeamMemberItem::Refresh(this_02,2);
    lVar12 = *(long *)this_01;
    this_02[0x59] = (TeamMemberItem)0x0;
    (**(code **)(lVar12 + 0x60))(this_01,this_02);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  iVar7 = FUN_04e967b8(0x19);
  iVar8 = FUN_04e967b8(0xf);
  lVar12 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = (iVar7 + iVar6) * iVar13 + iVar8;
  (**(code **)(lVar12 + 0x60))(this_00,this_01);
  (**(code **)(*plVar10 + 0x60))(plVar10,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initOrder(std::vector<TourismOctoberPlayerData,
   std::allocator<TourismOctoberPlayerData> > const&) */

void __thiscall UITourismOctober::initOrder(UITourismOctober *this,vector *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  EditWidget *this_00;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITab_1");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar1 = FUN_04e967b8(0x28);
  iVar2 = FUN_04e967b8(0x8c);
  uVar3 = FUN_04e967b8(100);
  uVar4 = FUN_04e967b8(300);
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,0,(EditListener *)(this + 0x148));
  *(EditWidget **)(this + 0x168) = this_00;
  pcVar9 = *(code **)(*(long *)this_00 + 0x330);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar9)(this_00,uVar7,0);
  TodStringTranslate(L"[TOURISM_OCTOBER_DEFAULT_TEXT2]");
  lVar8 = FUN_04e954f8(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d0));
  if (lVar8 == 0) {
    TodStringTranslate(L"[INVATATION_DEFAULT_TEXT1]");
    FUN_054766c8(auStack_18,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    std::string::string(asStack_10,"UIButton_OK");
    plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    (**(code **)(*plVar10 + 0x188))(plVar10,1);
    std::string::~string(asStack_10);
    nop();
  }
  (**(code **)(**(long **)(this + 0x168) + 0x340))(*(long **)(this + 0x168),auStack_18,1);
  plVar10 = *(long **)(this + 0x168);
  *(undefined1 *)((long)plVar10 + 0x16c) = 1;
  iVar5 = FUN_04e967b8(0x14);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar2 - iVar5,uVar3,uVar4,uVar1);
  (**(code **)(*plVar6 + 0x60))(plVar6,*(undefined8 *)(this + 0x168));
  refreshOrder(this,param_1);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::refreshTask(std::vector<TourismOctoberPlayerInfo,
   std::allocator<TourismOctoberPlayerInfo> > const&) */

void __thiscall UITourismOctober::refreshTask(UITourismOctober *this,vector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  UIWidgetImage *pUVar10;
  undefined4 *puVar11;
  TeamMemberItem *this_00;
  long lVar12;
  int iVar13;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_12");
  iVar13 = 0;
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar5 = FUN_04e967b8(0x12);
  uVar6 = FUN_04e967b8(0x2d);
  iVar7 = FUN_04e967b8(0xb4);
  uVar8 = FUN_04e967b8(0x32);
  local_20 = FUN_04e99f78(*(undefined8 *)param_1);
  local_18 = FUN_04e99fc8(*(undefined8 *)(param_1 + 8));
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar4) {
    puVar11 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = ::operator_new(0x110);
    TeamMemberItem::TeamMemberItem(this_00);
    iVar9 = FUN_04e967b8(0x14);
    iVar9 = (iVar9 + iVar7) * iVar13;
    iVar13 = iVar13 + 1;
    (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar5 + iVar9,uVar6,iVar7,uVar8);
    uVar1 = *puVar11;
    uVar2 = puVar11[4];
    uVar3 = puVar11[6];
    *(undefined4 *)(this_00 + 0xf0) = puVar11[5];
    *(undefined4 *)(this_00 + 0xe0) = uVar1;
    *(undefined4 *)(this_00 + 0xfc) = uVar2;
    *(undefined4 *)(this_00 + 0x100) = uVar3;
    Sexy::UTF8StringToSexyString((string *)(puVar11 + 2));
    FUN_054766c8(this_00 + 0xe8,asStack_10);
    FUN_05476c50(asStack_10);
    TeamMemberItem::Refresh(this_00,3);
    lVar12 = *(long *)pUVar10;
    this_00[0x59] = (TeamMemberItem)0x0;
    this_00[0x6d] = (TeamMemberItem)0x0;
    (**(code **)(lVar12 + 0x60))(pUVar10,this_00);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  }
  pUVar10[0x6d] = (UIWidgetImage)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initInvitedRecode(std::vector<TourismOctoberPlayerInfo,
   std::allocator<TourismOctoberPlayerInfo> >&) */

void __thiscall UITourismOctober::initInvitedRecode(UITourismOctober *this,vector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TeamMemberItem TVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  UIWidgetImage *pUVar11;
  undefined4 *puVar12;
  TeamMemberItem *pTVar13;
  ProfileMgr *pPVar14;
  long lVar15;
  PlayerInfo *this_00;
  int iVar16;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Invatation_Left");
  iVar16 = 0;
  pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar11 + 0x80))(pUVar11,1,1);
  uVar6 = FUN_04e967b8(8);
  iVar7 = FUN_04e967b8(0x2d);
  uVar8 = FUN_04e967b8(400);
  iVar9 = FUN_04e967b8(0x32);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while( true ) {
    TVar4 = (TeamMemberItem)
            __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!(bool)TVar4) break;
    puVar12 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pTVar13 = ::operator_new(0x110);
    TeamMemberItem::TeamMemberItem(pTVar13);
    iVar10 = FUN_04e967b8(0xf);
    iVar10 = (iVar10 + iVar9) * iVar16;
    iVar16 = iVar16 + 1;
    (**(code **)(*(long *)pTVar13 + 0x198))(pTVar13,uVar6,iVar7 + iVar10,uVar8,iVar9);
    uVar1 = puVar12[5];
    uVar2 = *puVar12;
    uVar3 = puVar12[6];
    TVar4 = *(TeamMemberItem *)(puVar12 + 7);
    *(undefined4 *)(pTVar13 + 0xfc) = puVar12[4];
    *(undefined4 *)(pTVar13 + 0xf0) = uVar1;
    *(undefined4 *)(pTVar13 + 0xe0) = uVar2;
    *(undefined4 *)(pTVar13 + 0x100) = uVar3;
    pTVar13[0x104] = TVar4;
    Sexy::UTF8StringToSexyString((string *)(puVar12 + 2));
    FUN_054766c8(pTVar13 + 0xe8,asStack_10);
    FUN_05476c50(asStack_10);
    TeamMemberItem::Refresh(pTVar13,1);
    lVar15 = *(long *)pUVar11;
    pTVar13[0x59] = (TeamMemberItem)0x0;
    (**(code **)(lVar15 + 0x60))(pUVar11,pTVar13);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  }
  cVar5 = std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::empty
                    ((vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *)
                     param_1);
  if (cVar5 != '\0') {
    pTVar13 = ::operator_new(0x110);
    TeamMemberItem::TeamMemberItem(pTVar13);
    iVar10 = FUN_04e967b8(0xf);
    (**(code **)(*(long *)pTVar13 + 0x198))
              (pTVar13,uVar6,iVar7 + (iVar10 + iVar9) * iVar16,uVar8,iVar9);
    pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar15 = ProfileMgr::GetCurrentProfile(pPVar14);
    uVar6 = FUN_04e952a4(*(undefined4 *)(lVar15 + 0x1138));
    *(undefined4 *)(pTVar13 + 0xf0) = uVar6;
    pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar15 = ProfileMgr::GetCurrentProfile(pPVar14);
    uVar6 = FUN_04e952a0(*(undefined4 *)(lVar15 + 0x604));
    *(undefined4 *)(pTVar13 + 0xe0) = uVar6;
    pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar14);
    uVar6 = PlayerInfo::GetCurrentRankAvatar(this_00);
    *(undefined4 *)(pTVar13 + 0x100) = 0;
    *(undefined4 *)(pTVar13 + 0xfc) = uVar6;
    pTVar13[0x104] = TVar4;
    pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar14);
    PlayerInfo::AM_GetName();
    FUN_054766c8(pTVar13 + 0xe8,asStack_10);
    FUN_05476c50(asStack_10);
    TeamMemberItem::Refresh(pTVar13,1);
    lVar15 = *(long *)pUVar11;
    pTVar13[0x59] = TVar4;
    (**(code **)(lVar15 + 0x60))(pUVar11,pTVar13);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITourismOctober::sharedImmediately() */

UITourismOctoberSharedDetail * UITourismOctober::sharedImmediately(void)

{
  UITourismOctoberSharedDetail *pUVar1;
  char cVar2;
  UITourismOctoberSharedDetail *pUVar3;
  
  pUVar1 = UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance ==
      (UITourismOctoberSharedDetail *)0x0) {
    pUVar3 = ::operator_new(0x1c8);
    UITourismOctoberSharedDetail::UITourismOctoberSharedDetail(pUVar3);
    UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance !=
          (UITourismOctoberSharedDetail *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance + 0x18))
                  ();
      }
      UISingletonDialog<UITourismOctoberSharedDetail>::m_pInstance =
           (UITourismOctoberSharedDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UITourismOctober::UITourismOctober() */

void __thiscall UITourismOctober::UITourismOctober(UITourismOctober *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UITourismOctober>::UISingletonDialog
            ((UISingletonDialog<UITourismOctober> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  Sexy::EditListener::EditListener((EditListener *)(this + 0x148));
  *(undefined ***)this = &PTR_GetClass_069ede10;
  *(undefined **)(this + 0xd8) = &DAT_069ee178;
  *(undefined **)(this + 0x138) = &DAT_069ee1c0;
  *(undefined ***)(this + 0x140) = &PTR__UITourismOctober_069ee1d8;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_069ee220;
  Set8BytesTo0(this + 0x170);
  TourismOctoberData::TourismOctoberData((TourismOctoberData *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UITourismOctober,void(UITourismOctober::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_40);
  return;
}


/* UITourismOctober::~UITourismOctober() */

void __thiscall UITourismOctober::~UITourismOctober(UITourismOctober *this)

{
  *(undefined ***)this = &PTR_GetClass_069ede10;
  *(undefined **)(this + 0xd8) = &DAT_069ee178;
  *(undefined **)(this + 0x138) = &DAT_069ee1c0;
  *(undefined ***)(this + 0x140) = &PTR__UITourismOctober_069ee1d8;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_069ee220;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<TourismOctoberShopWidget*,std::allocator<TourismOctoberShopWidget*>>::~vector
            ((vector<TourismOctoberShopWidget*,std::allocator<TourismOctoberShopWidget*>> *)
             (this + 0x210));
  TourismOctoberData::~TourismOctoberData((TourismOctoberData *)(this + 0x180));
  std::string::~string((string *)(this + 0x170));
  UISingletonDialog<UITourismOctober>::~UISingletonDialog
            ((UISingletonDialog<UITourismOctober> *)this);
  return;
}


/* non-virtual thunk to UITourismOctober::~UITourismOctober() */

void __thiscall UITourismOctober::~UITourismOctober(UITourismOctober *this)

{
  ~UITourismOctober(this + -0x140);
  return;
}


/* UITourismOctober::~UITourismOctober() */

void __thiscall UITourismOctober::~UITourismOctober(UITourismOctober *this)

{
  ~UITourismOctober(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UITourismOctober::~UITourismOctober() */

void __thiscall UITourismOctober::~UITourismOctober(UITourismOctober *this)

{
  ~UITourismOctober(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::initTasks() */

void __thiscall UITourismOctober::initTasks(UITourismOctober *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  long lVar8;
  vector *pvVar9;
  long *plVar10;
  TourismOctoberTaskWidget *this_04;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  Insets aIStack_50 [16];
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar18 = 0;
  std::string::string((string *)&local_20,"UITask2");
  iVar17 = 0;
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar1 = FUN_04e967b8(0xf);
  iVar2 = FUN_04e967b8(0x27);
  iVar3 = FUN_04e967b8(0x1e);
  Sexy::Insets::Insets
            (aIStack_50,iVar1,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,*(int *)(pUVar6 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_50);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = *(int *)(this_01 + 0x50);
  std::string::string((string *)&local_20,"UITask1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x140));
  iVar1 = FUN_04e967b8(0xf);
  iVar3 = FUN_04e967b8(0x27);
  iVar4 = FUN_04e967b8(0x1e);
  Sexy::Insets::Insets
            (aIStack_40,iVar1,iVar3,*(int *)(pUVar7 + 0x50) - iVar4,*(int *)(pUVar7 + 0x54) - iVar4)
  ;
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  iVar3 = *(int *)(this_03 + 0x50);
  iVar4 = FUN_04e967b8(0x8c);
  lVar8 = Sexy::LazySingleton<TourismOctoberGradeTaskManager>::GetInstancePtr();
  pvVar9 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(lVar8 + 8));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,pvVar9);
  uVar16 = local_20;
  lVar8 = FUN_04e95574(local_20,local_18);
  iVar1 = iVar17;
  if (lVar8 != 0) {
    do {
      plVar10 = (long *)FUN_04e95580(uVar16,uVar18);
      plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar10 + 0x20));
      lVar8 = (**(code **)(*plVar10 + 0x58))();
      FUN_04e951f8(*(undefined8 *)(lVar8 + 0x18));
      nop();
      uVar16 = local_20;
      plVar10 = (long *)FUN_04e95580(local_20,uVar18);
      iVar5 = *(int *)(*plVar10 + 0xc);
      if (iVar5 == 1) {
        iVar5 = FUN_04e967b8(10);
        Sexy::Insets::Insets(aIStack_30,0,iVar17 * (iVar5 + iVar4),iVar3,iVar4);
        (**(code **)(*(long *)this_04 + 0x1a0))(this_04,aIStack_30);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,this_04);
        puVar14 = (undefined8 *)FUN_04e95580(local_20,uVar18);
        (**(code **)(*(long *)this_04 + 0x318))(this_04,*puVar14);
        uVar16 = local_20;
        plVar10 = (long *)FUN_04e95580(local_20,uVar18);
        iVar5 = *(int *)(*plVar10 + 0xc);
        iVar17 = iVar17 + 1;
      }
      if (iVar5 == 3) {
        iVar5 = FUN_04e967b8(10);
        Sexy::Insets::Insets(aIStack_30,0,iVar1 * (iVar5 + iVar4),iVar2,iVar4);
        (**(code **)(*(long *)this_04 + 0x1a0))(this_04,aIStack_30);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
        puVar14 = (undefined8 *)FUN_04e95580(local_20,uVar18);
        (**(code **)(*(long *)this_04 + 0x318))(this_04,*puVar14);
        uVar16 = local_20;
        iVar1 = iVar1 + 1;
      }
      uVar19 = *(undefined8 *)(this + 0x1e0);
      lVar11 = FUN_04e95588(uVar19,*(undefined8 *)(this + 0x1e8));
      for (lVar8 = 0; lVar8 != lVar11; lVar8 = lVar8 + 1) {
        lVar12 = FUN_04e955b0(uVar19,lVar8);
        plVar10 = (long *)FUN_04e95580(uVar16,uVar18);
        if (*(int *)(lVar12 + 4) == *(int *)(*plVar10 + 8)) {
          TourismOctoberTaskWidget::SetTaskData(this_04,(int)lVar8);
          uVar16 = local_20;
          break;
        }
      }
      uVar18 = uVar18 + 1;
      uVar13 = FUN_04e95574(uVar16,local_18);
    } while (uVar18 < uVar13);
  }
  iVar2 = FUN_04e967b8(10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  pcVar15 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar2 + iVar4) * iVar1;
  (*pcVar15)(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  iVar1 = FUN_04e967b8(10);
  if (iVar17 < 1) {
    iVar17 = 1;
  }
  pcVar15 = *(code **)(*(long *)this_02 + 0x60);
  *(int *)(this_03 + 0x54) = (iVar1 + iVar4) * iVar17;
  (*pcVar15)(this_02,this_03);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_02);
  refreshTask(this,(vector *)(this + 0x1c8));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::sendShared() */

void __thiscall UITourismOctober::sendShared(UITourismOctober *this)

{
  char cVar1;
  ProfileMgr *this_00;
  undefined8 uVar2;
  DNetwork *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  UITourismOctober *local_68;
  undefined1 auStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x168) + 0x310))(asStack_80,*(long **)(this + 0x168));
  cVar1 = FUN_0547419c(asStack_80);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(asStack_80,(string *)(this + 0x170));
    if (cVar1 != '\0') {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(this_02,2);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[TOURISM_OCTOBER_ERROR_75524]");
      std::string::string((string *)amStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage((string *)amStack_38,false);
      UIMessageBox::SetBackground(this_02,pIVar3);
      std::string::~string((string *)amStack_38);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar4 + 0xd8,asStack_70);
      UIMessageBox::SetMessage(this_02,(wstring *)&local_68,(wstring *)asStack_78);
      FUN_05476c50((wstring *)&local_68);
      FUN_05476c50(asStack_70);
      FUN_05476c50((wstring *)asStack_78);
      std::string::~string(asStack_80);
      goto LAB_04e9d634;
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    std::string::string((string *)&local_68,"code");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,(string *)&local_68);
    thunk_FUN_05475e00(uVar2,asStack_80);
    std::string::~string((string *)&local_68);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    std::string::string(asStack_78,"V1051");
    local_68 = this;
    FUN_05475d88(auStack_60,asStack_80);
    FUN_04e96758(afStack_58,(string *)&local_68);
    std::string::string(asStack_70,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_78,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_70
               ,0);
    std::string::~string(asStack_70);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    PakRecord::~PakRecord((PakRecord *)&local_68);
    std::string::~string(asStack_78);
    nop();
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
  }
  std::string::~string(asStack_80);
LAB_04e9d634:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITourismOctober::ButtonDepress(int) */

void __thiscall UITourismOctober::ButtonDepress(UITourismOctober *this,int param_1)

{
  if (param_1 == 0x68) {
    showMainTips(this);
    return;
  }
  if (param_1 < 0x69) {
    if (param_1 == 0x66) {
      sharedImmediately();
      return;
    }
    if (0x66 < param_1) {
      showMainHelp(this);
      return;
    }
    if (param_1 == 100) {
      UISingletonDialog<UITourismOctober>::CloseDialog();
      return;
    }
  }
  else {
    if (param_1 == 0x12e) {
      ShowTaskTips(this,true);
      return;
    }
    if (param_1 == 0x12f) {
      ShowTaskTips(this,false);
      return;
    }
    if (param_1 == 0x6a) {
      sendShared(this);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UITourismOctober::ButtonDepress(int) */

void __thiscall UITourismOctober::ButtonDepress(UITourismOctober *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UITourismOctober::GetActivityData() */

TourismOctoberData * UITourismOctober::GetActivityData(void)

{
  long in_x0;
  TourismOctoberData *in_x8;
  
  TourismOctoberData::TourismOctoberData(in_x8,(TourismOctoberData *)(in_x0 + 0x180));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::removeInviteList(int, bool) */

void __thiscall UITourismOctober::removeInviteList(UITourismOctober *this,int param_1,bool param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *this_01;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  TourismOctoberPlayerData *pTVar7;
  ProfileMgr *pPVar8;
  PlayerInfo *this_02;
  wstring *extraout_x1;
  undefined8 local_40;
  Sexy aSStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_40 = FUN_04e9bbdc(uVar4,uVar5,param_1);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_28);
  if (!bVar1) goto LAB_04e9e4c0;
  if (param_2) {
    this_01 = (vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>> *)
              (this + 0x1c8);
    TourismOctoberPlayerInfo::TourismOctoberPlayerInfo((TourismOctoberPlayerInfo *)&local_28);
    local_10 = 0;
    local_c = 0;
    cVar2 = std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::empty
                      (this_01);
    if (cVar2 != '\0') {
      local_c = 1;
      pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar6 = ProfileMgr::GetCurrentProfile(pPVar8);
      local_14 = FUN_04e952a4(*(undefined4 *)(lVar6 + 0x1138));
      pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar6 = ProfileMgr::GetCurrentProfile(pPVar8);
      uVar3 = FUN_04e952a0(*(undefined4 *)(lVar6 + 0x604));
      local_28 = CONCAT44(local_28._4_4_,uVar3);
      pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
      local_18 = PlayerInfo::GetCurrentRankAvatar(this_02);
      pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(pPVar8);
      PlayerInfo::AM_GetName();
      Sexy::WStringToUTF8String(aSStack_38,extraout_x1);
      FUN_05474278(auStack_20,asStack_30);
      std::string::~string(asStack_30);
      FUN_05476c50(aSStack_38);
      std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::push_back
                (this_01,(TourismOctoberPlayerInfo *)&local_28);
      local_c = 0;
    }
    pTVar7 = (TourismOctoberPlayerData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    TourismOctoberPlayerData::operator=((TourismOctoberPlayerData *)&local_28,pTVar7);
    std::vector<TourismOctoberPlayerInfo,std::allocator<TourismOctoberPlayerInfo>>::push_back
              (this_01,(TourismOctoberPlayerInfo *)&local_28);
    initInvitedRecode(this,(vector *)this_01);
    std::_Destroy<CornucopiaRankData>((CornucopiaRankData *)&local_28);
    lVar6 = FUN_04e954f8(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d0));
    if (lVar6 == 3) goto LAB_04e9e558;
LAB_04e9e49c:
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_28,(__normal_iterator *)&local_40);
    std::vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>>::erase
              ((vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>> *)this_00,
               local_28);
  }
  else {
    lVar6 = FUN_04e954f8(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d0));
    if (lVar6 != 3) goto LAB_04e9e49c;
LAB_04e9e558:
    std::vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>>::clear
              ((vector<TourismOctoberPlayerData,std::allocator<TourismOctoberPlayerData>> *)this_00)
    ;
  }
  refreshOrder(this,(vector *)this_00);
LAB_04e9e4c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::InitShop() */

void __thiscall UITourismOctober::InitShop(UITourismOctober *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  TourismOctoberShopWidget *pTVar8;
  TourismOctoberShopData *pTVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  TourismOctoberShopWidget *local_20;
  string asStack_18 [16];
  long local_8;
  
  iVar12 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Tab3_BG");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar1 = FUN_04e967b8(0xf);
  iVar2 = FUN_04e967b8(10);
  iVar3 = FUN_04e967b8(0x1e);
  iVar5 = *(int *)(pUVar7 + 0x50);
  iVar4 = FUN_04e967b8(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar2,iVar5 - iVar3,*(int *)(pUVar7 + 0x54) - iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04e967b8(0x1e);
  iVar1 = FUN_04e967b8(10);
  iVar2 = FUN_04e967b8(0xb4);
  iVar3 = FUN_04e967b8(0xaf);
  iVar4 = FUN_04e967b8(0xf);
  iVar6 = FUN_04e967b8(0);
  uVar14 = 0;
  while( true ) {
    iVar13 = (int)uVar14;
    uVar10 = FUN_04e95544(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x200));
    if (uVar10 <= uVar14) break;
    pTVar8 = ::operator_new(0x110);
    TourismOctoberShopWidget::TourismOctoberShopWidget(pTVar8);
    local_20 = pTVar8;
    (**(code **)(*(long *)pTVar8 + 0x198))
              (pTVar8,iVar4 + (iVar2 + iVar5) * (iVar13 % 3),iVar6 + (iVar3 + iVar1) * (iVar13 / 3),
               iVar2,iVar3);
    pTVar8 = local_20;
    pTVar9 = (TourismOctoberShopData *)FUN_04e9556c(*(undefined8 *)(this + 0x1f8),uVar14);
    TourismOctoberShopWidget::InitView(pTVar8,iVar13,pTVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_20);
    iVar12 = *(int *)(local_20 + 0x4c) + *(int *)(local_20 + 0x54);
    std::vector<TourismOctoberShopWidget*,std::allocator<TourismOctoberShopWidget*>>::push_back
              ((vector<TourismOctoberShopWidget*,std::allocator<TourismOctoberShopWidget*>> *)
               (this + 0x210),&local_20);
    uVar14 = uVar14 + 1;
  }
  lVar11 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar12;
  (**(code **)(lVar11 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::OnCreate() */

void __thiscall UITourismOctober::OnCreate(UITourismOctober *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Widget *pWVar4;
  long lVar5;
  UITourismOctoberMgr *this_00;
  ulong uVar6;
  ProfileMgr *this_01;
  undefined8 uVar7;
  TourismOctoberPlayerInfo *pTVar8;
  char *pcVar9;
  TGALogMgr *this_02;
  size_t __n;
  ulong uVar10;
  DString aDStack_190 [16];
  int local_180 [7];
  char local_164;
  TGATourismOctoberData aTStack_160 [8];
  string asStack_158 [16];
  undefined1 auStack_148 [40];
  string asStack_120 [8];
  ActiveItem aAStack_118 [8];
  undefined4 local_110;
  char local_100;
  undefined8 local_c8;
  string asStack_98 [24];
  undefined1 auStack_80 [24];
  vector avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_98,"Background_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_98);
  std::string::~string(asStack_98);
  nop();
  __n = 1;
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  lVar5 = Sexy::LazySingleton<TourismOctoberGradeTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar5 + 8));
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e952b4(local_110);
  if ((cVar1 != '\0') && (local_100 != '\0')) {
    TourismOctoberData::TourismOctoberData((TourismOctoberData *)asStack_98);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_118,(RtObject *)asStack_98);
    if (cVar1 != '\0') {
      this_00 = (UITourismOctoberMgr *)Sexy::LazySingleton<UITourismOctoberMgr>::GetInstance();
      UITourismOctoberMgr::LoadData(this_00,(TourismOctoberData *)(this + 0x180));
      TourismOctoberData::operator=
                ((TourismOctoberData *)(this + 0x180),(TourismOctoberData *)asStack_98);
      thunk_FUN_05475e00(this + 0x170,auStack_80);
      initInvitedRecode(this,(vector *)&local_50);
      initInvitedCode((string *)this);
      initProgress(this);
      initOrder(this,avStack_68);
      initTasks(this);
      InitShop(this);
      initInvitedNum(this);
      RefreshTokenNum(this);
      TGATourismOctoberData::TGATourismOctoberData(aTStack_160);
      std::string::append((string *)aTStack_160,"1",__n);
      uVar7 = local_50;
      uVar6 = FUN_04e954f8(local_50,local_48);
      if (uVar6 != 0) {
        for (uVar10 = 0; uVar10 < uVar6; uVar10 = uVar10 + 1) {
          if (uVar10 == 0) {
            pTVar8 = (TourismOctoberPlayerInfo *)FUN_04e95520(uVar7,0);
            TourismOctoberPlayerInfo::TourismOctoberPlayerInfo
                      ((TourismOctoberPlayerInfo *)local_180,pTVar8);
          }
          else {
            FUN_05475ce8(auStack_148,0x3b);
            pTVar8 = (TourismOctoberPlayerInfo *)FUN_04e95520(local_50,uVar10);
            TourismOctoberPlayerInfo::TourismOctoberPlayerInfo
                      ((TourismOctoberPlayerInfo *)local_180,pTVar8);
          }
          if (local_164 != '\0') {
            DString::DString(aDStack_190,local_180[0]);
            pcVar9 = (char *)DString::c_str(aDStack_190);
            std::string::append(asStack_158,pcVar9,__n);
            DString::~DString(aDStack_190);
          }
          iVar2 = local_180[0];
          this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          lVar5 = ProfileMgr::GetCurrentProfile(this_01);
          iVar3 = FUN_04e952a0(*(undefined4 *)(lVar5 + 0x604));
          if (iVar2 != iVar3) {
            DString::DString(aDStack_190,local_180[0]);
            uVar7 = DString::c_str(aDStack_190);
            FUN_05475ad8(auStack_148,uVar7);
            DString::~DString(aDStack_190);
          }
          std::_Destroy<CornucopiaRankData>((CornucopiaRankData *)local_180);
          uVar7 = local_50;
          uVar6 = FUN_04e954f8(local_50,local_48);
        }
      }
      DString::DString((DString *)local_180,(int)uVar6);
      pcVar9 = (char *)DString::c_str((DString *)local_180);
      std::string::append(asStack_120,pcVar9,__n);
      DString::~DString((DString *)local_180);
      this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogTourismOctoberData(this_02,aTStack_160);
      TGATourismOctoberData::~TGATourismOctoberData(aTStack_160);
    }
    TourismOctoberData::~TourismOctoberData((TourismOctoberData *)asStack_98);
  }
  *(undefined8 *)(this + 0x178) = local_c8;
  ActiveItem::~ActiveItem(aAStack_118);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctober::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UITourismOctober::OnShopBuyFinish
          (UITourismOctober *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ScrollWidget *this_00;
  CommonRewardDisplay *this_01;
  Widget *pWVar5;
  TourismOctoberPlayerInfo *pTVar6;
  TGALogMgr *this_02;
  char *__s;
  size_t __n;
  ulong uVar7;
  undefined8 uVar8;
  ulong local_360 [2];
  int local_350 [7];
  char local_334;
  string asStack_330 [8];
  string asStack_328 [40];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 0x11)) && (*(int *)(param_2 + 0x20) == 0x5b33)) {
    uVar8 = *(undefined8 *)(this + 0x210);
    uVar3 = FUN_04e95530(uVar8,*(undefined8 *)(this + 0x218));
    for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
      puVar4 = (undefined8 *)FUN_04e9553c(uVar8,uVar7);
      if ((TourismOctoberShopWidget *)*puVar4 != (TourismOctoberShopWidget *)0x0) {
        cVar1 = TourismOctoberShopWidget::CheckShopItem((TourismOctoberShopWidget *)*puVar4,param_2)
        ;
        if (cVar1 != '\0') {
          puVar4 = (undefined8 *)FUN_04e9553c(*(undefined8 *)(this + 0x210),uVar7);
          TourismOctoberShopWidget::UpdateShopCommonWidget((S2C_ShopItemPurchaseInfo *)*puVar4);
          break;
        }
        uVar8 = *(undefined8 *)(this + 0x210);
        uVar3 = FUN_04e95530(uVar8,*(undefined8 *)(this + 0x218));
      }
    }
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_2e8,uVar2);
    std::string::string(asStack_330,"");
    FUN_05462980(auStack_2e8,asStack_330);
    std::string::~string(asStack_330);
    nop();
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_330,"");
    FUN_05462980(auStack_178,asStack_330);
    std::string::~string(asStack_330);
    nop();
    this_00 = (ScrollWidget *)UISingletonDialog<UITourismOctober>::GetSingletonPtr();
    uVar2 = Sexy::ScrollWidget::GetPageHorizontal(this_00);
    uVar8 = FUN_0546065c(auStack_168,uVar2);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    uVar8 = FUN_0546065c(uVar8,-*(int *)(param_2 + 0x24));
    FUN_054603b8(uVar8,&DAT_05593348);
    ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_330);
    AddIntegral(this,-*(int *)(param_2 + 0x24));
    uVar2 = Sexy::ScrollWidget::GetPageHorizontal(this_00);
    uVar8 = FUN_0546065c(auStack_168,uVar2);
    FUN_054603b8(uVar8,&DAT_05594620);
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_330);
    uVar8 = FUN_0546065c(auStack_2d8,*(undefined4 *)(param_2 + 0x18));
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(param_2 + 0x1c));
    FUN_054603b8(uVar8,&DAT_05594620);
    this_01 = (CommonRewardDisplay *)UISingletonDialog<CommonRewardDisplay>::ShowDialog();
    __n = 1;
    pWVar5 = (Widget *)
             UIRewardFrameSelect::CreateUIRewardFrame
                       (*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),true);
    CommonRewardDisplay::AddItemWidget(this_01,pWVar5);
    TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_330);
    uVar8 = *(undefined8 *)(this + 0x1c8);
    uVar3 = FUN_04e954f8(uVar8,*(undefined8 *)(this + 0x1d0));
    uVar7 = 0;
    if (uVar3 != 0) {
      while (uVar7 < uVar3) {
        pTVar6 = (TourismOctoberPlayerInfo *)FUN_04e95520(uVar8,uVar7);
        TourismOctoberPlayerInfo::TourismOctoberPlayerInfo
                  ((TourismOctoberPlayerInfo *)local_350,pTVar6);
        if (local_334 != '\0') {
          DString::DString((DString *)local_360,local_350[0]);
          __s = (char *)DString::c_str((DString *)local_360);
          std::string::append(asStack_328,__s,__n);
          DString::~DString((DString *)local_360);
          std::_Destroy<CornucopiaRankData>((CornucopiaRankData *)local_350);
          break;
        }
        std::_Destroy<CornucopiaRankData>((CornucopiaRankData *)local_350);
        uVar8 = *(undefined8 *)(this + 0x1c8);
        uVar3 = FUN_04e954f8(uVar8,*(undefined8 *)(this + 0x1d0));
        uVar7 = uVar7 + 1;
      }
    }
    std::string::append(asStack_330,"7",__n);
    FUN_05462824((TourismOctoberPlayerInfo *)local_350,auStack_178);
    FUN_05474278(auStack_300,(TourismOctoberPlayerInfo *)local_350);
    std::string::~string((string *)local_350);
    FUN_05462824((TourismOctoberPlayerInfo *)local_350,auStack_2e8);
    FUN_05474278(auStack_2f8,(TourismOctoberPlayerInfo *)local_350);
    std::string::~string((string *)local_350);
    local_360[0] = FUN_04e954f8(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d0));
    std::to_string<unsigned_long>(local_360);
    FUN_05474278(auStack_2f0,(TourismOctoberPlayerInfo *)local_350);
    std::string::~string((string *)local_350);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogTourismOctoberData(this_02,(TGATourismOctoberData *)asStack_330);
    TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_330);
    FUN_054617bc(auStack_178);
    FUN_054617bc(auStack_2e8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UITourismOctober::Update() */

void __thiscall UITourismOctober::Update(UITourismOctober *this)

{
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  UpdateTimer(this);
  return;
}

