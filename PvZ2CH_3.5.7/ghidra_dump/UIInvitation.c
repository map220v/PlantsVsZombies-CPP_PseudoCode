// Class: UIInvitation


/* UIInvitation::GetCurrentIntegral() */

undefined4 __thiscall UIInvitation::GetCurrentIntegral(UIInvitation *this)

{
  return *(undefined4 *)(this + 0x230);
}


/* UIInvitation::GetCurrentGemCost() */

undefined4 __thiscall UIInvitation::GetCurrentGemCost(UIInvitation *this)

{
  return *(undefined4 *)(this + 0x210);
}


/* UIInvitation::TabSelectionChanged(int) */

int UIInvitation::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UIInvitation::TabSelectionChanged(int) */

void __thiscall UIInvitation::TabSelectionChanged(UIInvitation *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* UIInvitation::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIInvitation::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIInvitation::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIInvitation::ScrollTargetReached(UIInvitation *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIInvitation::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIInvitation::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIInvitation::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIInvitation::ScrollTargetInterrupted(UIInvitation *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::GetLayoutName() */

void __thiscall UIInvitation::GetLayoutName(UIInvitation *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIInvitation");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIInvitation::closeMainTips() */

void __thiscall UIInvitation::closeMainTips(UIInvitation *this)

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


/* UIInvitation::closeMainHelp() */

void __thiscall UIInvitation::closeMainHelp(UIInvitation *this)

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


/* UIInvitation::CanLottery() */

bool __thiscall UIInvitation::CanLottery(UIInvitation *this)

{
  return *(int *)(this + 0x210) <= *(int *)(this + 0x230);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::initInvitedCode(std::string const&) */

void __thiscall UIInvitation::initInvitedCode(UIInvitation *this,string *param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Invatation_PlayerCode");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidgetText::SetString(pUVar1,param_1);
  std::string::string(asStack_10,"UIText_Invatation_Platform");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"(android)");
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::RefreshTokenNum() */

void __thiscall UIInvitation::RefreshTokenNum(UIInvitation *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Token_Num");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x230));
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIInvitation::AddIntegral(int) */

void __thiscall UIInvitation::AddIntegral(UIInvitation *this,int param_1)

{
  *(int *)(this + 0x230) = *(int *)(this + 0x230) + param_1;
  RefreshTokenNum(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::UpdateTimer() */

void __thiscall UIInvitation::UpdateTimer(UIInvitation *this)

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
  lVar2 = *(long *)(this + 0x170) - lVar2;
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
/* UIInvitation::initInvitedNum() */

void __thiscall UIInvitation::initInvitedNum(UIInvitation *this)

{
  UIWidgetText *pUVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Invited_num");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x178));
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
/* UIInvitation::showMainTips() */

void __thiscall UIInvitation::showMainTips(UIInvitation *this)

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
    TodStringTranslate(L"[INVITATION_MAIN_TIPS_INFO]");
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x150);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeMainTips);
    Sexy::Delegate0::Delegate0<UIInvitation,void(UIInvitation::*)()>(aDStack_38,awStack_50);
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
/* UIInvitation::showMainHelp() */

void __thiscall UIInvitation::showMainHelp(UIInvitation *this)

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
    TodStringTranslate(L"[INVITATION_MAIN_TIPS_INFO]");
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x158);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeMainHelp);
    Sexy::Delegate0::Delegate0<UIInvitation,void(UIInvitation::*)()>(aDStack_38,awStack_50);
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
/* UIInvitation::copyInvitatedCode() */

void __thiscall UIInvitation::copyInvitatedCode(UIInvitation *this)

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
  cVar1 = FUN_0547419c(this + 0x168);
  if (cVar1 == '\0') {
    Sexy::SexyAppBase::CopyToClipboard(gLawnApp);
    this_00 = (LawnApp *)gLawnApp;
    iVar2 = FUN_04e67c24(300);
    iVar3 = FUN_04e67c24(0xdc);
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
/* UIInvitation::initOrder(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&) */

void __thiscall UIInvitation::initOrder(UIInvitation *this,vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  EditWidget *this_00;
  undefined8 uVar8;
  int *piVar9;
  UIRewardFrame *pUVar10;
  code *pcVar11;
  long *plVar12;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UITab_1");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  uVar2 = FUN_04e67c24(0x28);
  iVar3 = FUN_04e67c24(0x1e);
  uVar4 = FUN_04e67c24(200);
  uVar5 = FUN_04e67c24(300);
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,0,(EditListener *)(this + 0x148));
  *(EditWidget **)(this + 0x160) = this_00;
  pcVar11 = *(code **)(*(long *)this_00 + 0x330);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar11)(this_00,uVar8,0);
  TodStringTranslate(L"[INVATATION_DEFAULT_TEXT2]");
  if (this[0x1a0] != (UIInvitation)0x0) {
    TodStringTranslate(L"[INVATATION_DEFAULT_TEXT1]");
    FUN_054766c8(auStack_38,asStack_18);
    FUN_05476c50(asStack_18);
    if (this[0x1a2] == (UIInvitation)0x0) goto LAB_04e69724;
    TodStringTranslate(L"[INVATATION_DEFAULT_TEXT3]");
    FUN_054766c8(auStack_38,asStack_18);
    FUN_05476c50(asStack_18);
  }
  std::string::string(asStack_18,"UIButton_OK");
  plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar12 + 0x188))(plVar12,1);
  std::string::~string(asStack_18);
  nop();
LAB_04e69724:
  pcVar11 = *(code **)(**(long **)(this + 0x160) + 0x340);
  (*pcVar11)(*(long **)(this + 0x160),auStack_38,1,pcVar11,auStack_40);
  plVar12 = *(long **)(this + 0x160);
  *(undefined1 *)((long)plVar12 + 0x16c) = 1;
  iVar6 = FUN_04e67c24(0x14);
  (**(code **)(*plVar12 + 0x198))(plVar12,iVar3 - iVar6,uVar4,uVar5,uVar2);
  (**(code **)(*plVar7 + 0x60))(plVar7,*(undefined8 *)(this + 0x160));
  local_3c = 1;
  local_30 = FUN_04e69544(*(undefined8 *)param_1);
  local_28 = FUN_04e69594(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
    std::operator+("UIWidget_Reward",asStack_18);
    std::string::~string(asStack_18);
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
    pUVar10 = (UIRewardFrame *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar9,piVar9[1],true);
    pcVar11 = *(code **)(*(long *)pUVar10 + 0x1a0);
    iVar3 = FUN_04e67c24(0);
    iVar6 = FUN_04e67c24(0x50);
    Sexy::Insets::Insets((Insets *)asStack_18,iVar3,iVar3,iVar6,iVar6);
    (*pcVar11)(pUVar10,asStack_18);
    (**(code **)(*plVar7 + 0x60))(plVar7,pUVar10);
    local_3c = local_3c + 1;
    if (this[0x1a2] != (UIInvitation)0x0) {
      std::string::string(asStack_18,"IMAGE_UI_GENERIC_CHECK_MARK");
      UIRewardFrame::SetLockString(pUVar10,asStack_18);
      std::string::~string(asStack_18);
      nop();
    }
    std::string::~string(asStack_20);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIInvitation::sharedImmediately() */

UIInvitationSharedDetail * UIInvitation::sharedImmediately(void)

{
  UIInvitationSharedDetail *pUVar1;
  char cVar2;
  UIInvitationSharedDetail *pUVar3;
  
  pUVar1 = UISingletonDialog<UIInvitationSharedDetail>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UIInvitationSharedDetail>::m_pInstance == (UIInvitationSharedDetail *)0x0) {
    pUVar3 = ::operator_new(0x1f0);
    UIInvitationSharedDetail::UIInvitationSharedDetail(pUVar3);
    UISingletonDialog<UIInvitationSharedDetail>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UIInvitationSharedDetail>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UIInvitationSharedDetail>::m_pInstance !=
          (UIInvitationSharedDetail *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UIInvitationSharedDetail>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UIInvitationSharedDetail>::m_pInstance = (UIInvitationSharedDetail *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* UIInvitation::UIInvitation() */

void __thiscall UIInvitation::UIInvitation(UIInvitation *this)

{
  UISingletonDialog<UIInvitation>::UISingletonDialog((UISingletonDialog<UIInvitation> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  Sexy::EditListener::EditListener((EditListener *)(this + 0x148));
  *(undefined ***)this = &PTR_GetClass_069e4100;
  *(undefined **)(this + 0xd8) = &DAT_069e4468;
  *(undefined **)(this + 0x138) = &DAT_069e44b0;
  *(undefined ***)(this + 0x140) = &PTR__UIInvitation_069e44c8;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_069e4510;
  Set8BytesTo0(this + 0x168);
  InvitationData::InvitationData((InvitationData *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  return;
}


/* UIInvitation::~UIInvitation() */

void __thiscall UIInvitation::~UIInvitation(UIInvitation *this)

{
  *(undefined ***)this = &PTR_GetClass_069e4100;
  *(undefined **)(this + 0xd8) = &DAT_069e4468;
  *(undefined **)(this + 0x138) = &DAT_069e44b0;
  *(undefined ***)(this + 0x140) = &PTR__UIInvitation_069e44c8;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_069e4510;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<recordData,std::allocator<recordData>>::~vector
            ((vector<recordData,std::allocator<recordData>> *)(this + 0x240));
  InvitationData::~InvitationData((InvitationData *)(this + 0x180));
  std::string::~string((string *)(this + 0x168));
  UISingletonDialog<UIInvitation>::~UISingletonDialog((UISingletonDialog<UIInvitation> *)this);
  return;
}


/* non-virtual thunk to UIInvitation::~UIInvitation() */

void __thiscall UIInvitation::~UIInvitation(UIInvitation *this)

{
  ~UIInvitation(this + -0x140);
  return;
}


/* UIInvitation::~UIInvitation() */

void __thiscall UIInvitation::~UIInvitation(UIInvitation *this)

{
  ~UIInvitation(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIInvitation::~UIInvitation() */

void __thiscall UIInvitation::~UIInvitation(UIInvitation *this)

{
  ~UIInvitation(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::initTasks() */

void __thiscall UIInvitation::initTasks(UIInvitation *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar6;
  vector *pvVar7;
  long *plVar8;
  long *extraout_x0;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_Task_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar2 = FUN_04e67c24(0xf);
  iVar3 = FUN_04e67c24(0x1e);
  Sexy::Insets::Insets
            (aIStack_40,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,*(int *)(pUVar5 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = *(int *)(this_01 + 0x50);
  iVar3 = FUN_04e67c24(0x8c);
  lVar6 = Sexy::LazySingleton<InvitationGradeTaskManager>::GetInstancePtr();
  pvVar7 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(lVar6 + 8));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,pvVar7);
  uVar12 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar10 = FUN_04e66000(local_20,local_18);
    if (uVar10 <= uVar12) break;
    plVar8 = (long *)FUN_04e6600c(uVar1,uVar12);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar8 + 0x20));
    lVar6 = (**(code **)(*plVar8 + 0x58))();
    FUN_04e65dc4(*(undefined8 *)(lVar6 + 0x18));
    nop();
    iVar4 = FUN_04e67c24(10);
    Sexy::Insets::Insets(aIStack_30,0,(iVar4 + iVar3) * (int)uVar12,iVar2,iVar3);
    (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,aIStack_30);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
    puVar9 = (undefined8 *)FUN_04e6600c(local_20,uVar12);
    (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar9);
    uVar12 = uVar12 + 1;
  }
  iVar2 = FUN_04e67c24(10);
  pcVar11 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar2 + iVar3) * (int)uVar10;
  (*pcVar11)(this_00,this_01);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::sendShared() */

void __thiscall UIInvitation::sendShared(UIInvitation *this)

{
  int iVar1;
  ProfileMgr *this_00;
  undefined8 uVar2;
  DNetwork *this_01;
  string asStack_80 [8];
  undefined4 local_78 [2];
  string asStack_70 [8];
  UIInvitation *local_68;
  undefined1 auStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x160) + 0x310))(asStack_80,*(long **)(this + 0x160));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this_00);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_70,"star");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_70);
  local_78[0] = PlayerInfo::GetNumStars(iVar1);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_78);
  FUN_05474278(uVar2,(string *)&local_68);
  std::string::~string((string *)&local_68);
  std::string::~string(asStack_70);
  nop();
  std::string::string((string *)&local_68,"code");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,(string *)&local_68);
  thunk_FUN_05475e00(uVar2,asStack_80);
  std::string::~string((string *)&local_68);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string((string *)local_78,"V876");
  local_68 = this;
  FUN_05475d88(auStack_60,asStack_80);
  FUN_04e67bc4(afStack_58,(string *)&local_68);
  std::string::string(asStack_70,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,(string *)local_78,(map *)amStack_38,30.0,(function *)afStack_58,true,true,
             asStack_70,0);
  std::string::~string(asStack_70);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  PakRecord::~PakRecord((PakRecord *)&local_68);
  std::string::~string((string *)local_78);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIInvitation::ButtonDepress(int) */

void __thiscall UIInvitation::ButtonDepress(UIInvitation *this,int param_1)

{
  switch(param_1) {
  case 100:
    UISingletonDialog<UIInvitation>::CloseDialog();
    return;
  default:
    return;
  case 0x66:
    sharedImmediately();
    return;
  case 0x67:
    showMainHelp(this);
    return;
  case 0x68:
    showMainTips(this);
    return;
  case 0x69:
    copyInvitatedCode(this);
    return;
  case 0x6a:
    sendShared(this);
    return;
  }
}


/* non-virtual thunk to UIInvitation::ButtonDepress(int) */

void __thiscall UIInvitation::ButtonDepress(UIInvitation *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::initInvitedRecode(std::vector<InvitationPlayerInfo,
   std::allocator<InvitationPlayerInfo> >&) */

void __thiscall UIInvitation::initInvitedRecode(UIInvitation *this,vector *param_1)

{
  vector<recordData,std::allocator<recordData>> *this_00;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetImage *pUVar8;
  UIWidgetText *this_01;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  long lVar9;
  char *__s;
  undefined8 uVar10;
  undefined8 uVar11;
  recordData *prVar12;
  UIInvitationRecordItem *this_04;
  long lVar13;
  uint uVar14;
  code *pcVar15;
  wstring awStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  Insets aIStack_68 [16];
  undefined8 local_58;
  undefined1 auStack_50 [8];
  time_t local_48;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<recordData,std::allocator<recordData>> *)(this + 0x240);
  std::string::string((string *)&local_40,"UIImage_Invatation_Left");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
  TodStringTranslate(L"[INVATATION_TAB1_RECORD]");
  this_01 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_01,awStack_80);
  FUN_04e66604(this_01 + 0xe0);
  UIWidgetText::SetFontIndex(this_01,5);
  (**(code **)(*(long *)this_01 + 0x170))(this_01,0,&PrimeText_Game::Color_Description_Brown);
  pcVar15 = *(code **)(*(long *)this_01 + 0x1a0);
  iVar3 = FUN_04e67c24(10);
  iVar4 = FUN_04e67c24(0x14);
  iVar7 = *(int *)(pUVar8 + 0x50);
  iVar5 = FUN_04e67c24(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar3,iVar7 - iVar4,iVar5);
  (*pcVar15)(this_01,&local_40);
  (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,this_01);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x140));
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  iVar3 = FUN_04e67c24(10);
  iVar4 = FUN_04e67c24(0x32);
  iVar5 = FUN_04e67c24(0x14);
  iVar7 = *(int *)(pUVar8 + 0x50);
  iVar6 = FUN_04e67c24(0x3c);
  Sexy::Insets::Insets(aIStack_68,iVar3,iVar4,iVar7 - iVar5,*(int *)(pUVar8 + 0x54) - iVar6);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_68);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  (**(code **)(*(long *)this_03 + 0x1a0))(this_03,aIStack_68);
  iVar7 = FUN_04e67c24(0);
  uVar1 = *(undefined4 *)(this_02 + 0x50);
  iVar3 = FUN_04e67c24(0x2d);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    uVar14 = (uint)bVar2;
    if (!bVar2) break;
    lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    lVar13 = lVar9 + 0x18;
    std::pair<std::string,std::string>::pair((pair<std::string,std::string> *)&local_58);
    thunk_FUN_05475e00((pair<std::string,std::string> *)&local_58,lVar9 + 8);
    thunk_FUN_05475e00(auStack_50,lVar13);
    local_40.tm_zone = (char *)0x0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40.tm_hour = 0;
    local_40.tm_mday = 0;
    local_40.tm_mon = 0;
    local_40.tm_year = 0;
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    __s = (char *)FUN_0547429c(lVar13);
    sscanf(__s,"%d-%d-%d %d:%d:%d",&local_40.tm_year,&local_40.tm_mon,&local_40.tm_mday,
           &local_40.tm_hour,&local_40.tm_min,&local_40);
    uVar10 = FUN_0547429c(lVar13);
    Sexy::OutputDebugStrF
              ((wchar_t *)"Record timestamp info %s; %d-%d-%d %d:%d:%d\n",uVar10,
               (ulong)local_40._16_8_ >> 0x20,local_40._16_8_ & 0xffffffff,
               (ulong)local_40._8_8_ >> 0x20,local_40._8_8_ & 0xffffffff,
               (ulong)local_40._0_8_ >> 0x20,local_40._0_8_ & 0xffffffff);
    local_40.tm_year = local_40.tm_year + -0x76c;
    local_40.tm_mon = local_40.tm_mon + -1;
    local_48 = mktime(&local_40);
    std::vector<recordData,std::allocator<recordData>>::push_back(this_00,(recordData *)&local_58);
    Sexy::PACommand::~PACommand((PACommand *)&local_58);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_78);
  }
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)this_00);
  FUN_04e6f424(uVar10,uVar11);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_40._0_8_ =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)this_00);
  iVar4 = 0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_40), bVar2) {
    prVar12 = (recordData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_04 = ::operator_new(0xf8);
    memset(this_04,0,0xf8);
    UIInvitationRecordItem::UIInvitationRecordItem(this_04);
    iVar4 = FUN_04e67c24(5);
    iVar4 = (iVar4 + iVar3) * uVar14;
    uVar14 = uVar14 + 1;
    (**(code **)(*(long *)this_04 + 0x198))(this_04,iVar7,iVar7 + iVar4,uVar1,iVar3);
    UIInvitationRecordItem::InitView(this_04,prVar12);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,this_04);
    iVar4 = iVar3 + *(int *)(this_04 + 0x4c);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
  }
  lVar13 = *(long *)pUVar8;
  *(int *)(this_03 + 0x54) = iVar4;
  (**(code **)(lVar13 + 0x60))(pUVar8,this_02);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::initLottery() */

void __thiscall UIInvitation::initLottery(UIInvitation *this)

{
  UIWidgetImage *pUVar1;
  long *plVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Lottery_Frame");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar2 = (long *)UISingletonDialog<InvitationLotteryPanel>::ShowDialog();
  lVar3 = *plVar2;
  *(long **)(this + 0x238) = plVar2;
  (**(code **)(lVar3 + 0x198))
            (plVar2,0,0,*(undefined4 *)(pUVar1 + 0x50),*(undefined4 *)(pUVar1 + 0x54));
  InvitationLotteryPanel::InitView
            (*(InvitationLotteryPanel **)(this + 0x238),(vector *)(this + 0x218));
  (**(code **)(*(long *)pUVar1 + 0x60))(pUVar1,*(undefined8 *)(this + 0x238));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitation::OnCreate() */

void __thiscall UIInvitation::OnCreate(UIInvitation *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Widget *pWVar4;
  long lVar5;
  char *__s;
  TGALogMgr *this_00;
  size_t __n;
  DString aDStack_178 [16];
  TGANFSLinkageData aTStack_168 [16];
  string asStack_158 [24];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  undefined8 local_f0;
  string asStack_c0 [24];
  string asStack_a8 [40];
  vector avStack_80 [56];
  undefined8 local_48;
  undefined8 local_40;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_c0,"Background_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  __n = 1;
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  lVar5 = Sexy::LazySingleton<InvitationGradeTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar5 + 8));
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e65e6c(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    InvitationData::InvitationData((InvitationData *)asStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)asStack_c0);
    if (cVar1 != '\0') {
      InvitationData::operator=((InvitationData *)(this + 0x180),(InvitationData *)asStack_c0);
      thunk_FUN_05475e00(this + 0x168,asStack_a8);
      uVar3 = FUN_04e65fd8(local_48,local_40);
      *(undefined4 *)(this + 0x178) = uVar3;
      initInvitedRecode(this,(vector *)&local_48);
      initInvitedCode(this,asStack_a8);
      initOrder(this,avStack_80);
      initTasks(this);
      initLottery(this);
      initInvitedNum(this);
      RefreshTokenNum(this);
      TGANFSLinkageData::TGANFSLinkageData(aTStack_168);
      std::string::append((string *)aTStack_168,"1",__n);
      DString::DString(aDStack_178,local_10);
      __s = (char *)DString::c_str(aDStack_178);
      std::string::append(asStack_158,__s,__n);
      DString::~DString(aDStack_178);
      this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogInvitationData(this_00,(TGAInvitationData *)aTStack_168);
      TGANFSLinkageData::~TGANFSLinkageData(aTStack_168);
    }
    InvitationData::~InvitationData((InvitationData *)asStack_c0);
  }
  *(undefined8 *)(this + 0x170) = local_f0;
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIInvitation::Update() */

void __thiscall UIInvitation::Update(UIInvitation *this)

{
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  UpdateTimer(this);
  return;
}

