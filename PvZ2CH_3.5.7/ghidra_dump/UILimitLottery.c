// Class: UILimitLottery


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::GetLayoutName() */

void __thiscall UILimitLottery::GetLayoutName(UILimitLottery *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitLottery");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::~UILimitLottery() */

void __thiscall UILimitLottery::~UILimitLottery(UILimitLottery *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_066dd4b0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066dd150;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LimitLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LimitLotteryEffect");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UISingletonDialog<UILimitLottery>::~UISingletonDialog((UISingletonDialog<UILimitLottery> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitLottery::~UILimitLottery() */

void __thiscall UILimitLottery::~UILimitLottery(UILimitLottery *this)

{
  ~UILimitLottery(this);
  AK::FreeHook(this);
  return;
}


/* UILimitLottery::Refresh() */

void __thiscall UILimitLottery::Refresh(UILimitLottery *this)

{
  (**(code **)(*(long *)this + 0x340))(this,1);
  return;
}


/* UILimitLottery::CloseBonusEffect() */

void __thiscall UILimitLottery::CloseBonusEffect(UILimitLottery *this)

{
  if (*(LimitLotteryPanel **)(this + 0x140) != (LimitLotteryPanel *)0x0) {
    LimitLotteryPanel::CloseBonusEffect(*(LimitLotteryPanel **)(this + 0x140));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::UpdateViewInfo() */

void __thiscall UILimitLottery::UpdateViewInfo(UILimitLottery *this)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x13c));
    UIWidgetText::SetString(pUVar1,asStack_10);
    std::string::~string(asStack_10);
  }
  std::string::string(asStack_10,"UIText_Luck");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    FUN_05476574(auStack_20);
    FUN_05478178(awStack_18,L"[LUCK_VALUE]",auStack_28);
    TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(this + 0x138));
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    nop();
    PuzzleTip::SetTip(pUVar1,auStack_20);
    LuckyProgressUtil::SetProgerss
              ((LuckyProgressUtil *)(this + 0x1b0),(float)*(int *)(this + 0x138) * 0.01,true);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::OnStartLottery() */

void __thiscall UILimitLottery::OnStartLottery(UILimitLottery *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  }
  std::string::string(asStack_10,"UIButton_CupShop");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  }
  std::string::string(asStack_10,"UIButton_CRYSTALBUY");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::OnFinishLottery() */

void __thiscall UILimitLottery::OnFinishLottery(UILimitLottery *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  }
  std::string::string(asStack_10,"UIButton_CupShop");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  }
  std::string::string(asStack_10,"UIButton_CRYSTALBUY");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::UILimitLottery() */

void __thiscall UILimitLottery::UILimitLottery(UILimitLottery *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UILimitLottery>::UISingletonDialog((UISingletonDialog<UILimitLottery> *)this);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066dd150;
  *(undefined **)(this + 0xd8) = &DAT_066dd4b0;
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  LuckyProgressUtil::LuckyProgressUtil((LuckyProgressUtil *)(this + 0x1b0));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_LimitLottery");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"LimitLotteryEffect");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLimitLotteryReward);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<bool,S2C_LimitLotteryReward_const*,Sexy::CBMemberTranslatorX<UILimitLottery,void(UILimitLottery::*)(bool,S2C_LimitLotteryReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyLimitLotteryReward,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyLimitLotteryBuyCrystalFinish);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<bool,S2C_LimitLotteryCrystalBuy_const*,Sexy::CBMemberTranslatorX<UILimitLottery,void(UILimitLottery::*)(bool,S2C_LimitLotteryCrystalBuy_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyLimitLotteryBuyCrystalFinish,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartLottery);
  Sexy::Delegate0::Delegate0<UILimitLottery,void(UILimitLottery::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartLimitLottery,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishLottery);
  Sexy::Delegate0::Delegate0<UILimitLottery,void(UILimitLottery::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishLottery,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::ButtonDepress(int) */

void UILimitLottery::ButtonDepress(int param_1)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_00;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  this = gLawnApp;
  iVar2 = (int)in_x1;
  local_8 = ___stack_chk_guard;
  if (iVar2 == 0x58) {
    UISingletonDialog<UILimitLottery>::CloseDialog();
  }
  else if (iVar2 < 0x59) {
    if (iVar2 == 0x2c) {
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
      if (cVar1 == '\0') {
        iVar2 = FUN_0398a1f8(0x352);
        iVar3 = FUN_0398a1f8(0x1a4);
      }
      else {
        iVar2 = FUN_0398a1f8(800);
        iVar3 = FUN_0398a1f8(0x1a4);
      }
      this_00 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
      FUN_05478178(awStack_50,L"[THE_LIMIT_LOTTERY_OVERVIEW_TITLE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_00,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[THE_LIMIT_LOTTERY_OVERVIEW_CONTENT]",auStack_58);
      PVZ2UIDialog::SetFooterLabel(this_00,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      PVZ2UIDialog::SetFooterAlign(this_00,3);
      iVar2 = FUN_0398a1f8(2);
      PVZ2UIDialog::SetFooterBottomPadding(this_00,iVar2);
      PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
      FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
      FUN_05476c50(auStack_58);
      nop();
    }
    else if (iVar2 == 0x3c) {
      FUN_05478178(awStack_50,L"Lottery_1",auStack_58);
      LawnApp::ShowProbabilityDialog(this,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
    }
  }
  else if (iVar2 == 0x65) {
    UISingletonDialog<LimitLotteryCrystalBuy>::ShowDialog();
  }
  else if (iVar2 == 0x66) {
    UISingletonDialog<LimitLotteryCupShop>::ShowDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILimitLottery::ButtonDepress(int) */

void __thiscall UILimitLottery::ButtonDepress(UILimitLottery *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::CreateLuckProgressBack() */

void __thiscall UILimitLottery::CreateLuckProgressBack(UILimitLottery *this)

{
  undefined8 uVar1;
  Widget *pWVar2;
  size_t in_x2;
  code *__n;
  undefined8 local_2d0;
  UIWidgetType aUStack_2c8 [8];
  undefined1 auStack_2c0 [12];
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4;
  string asStack_298 [24];
  undefined4 local_280;
  UIWidgetType aUStack_218 [8];
  undefined1 auStack_210 [8];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  UIWidgetType aUStack_168 [8];
  undefined1 auStack_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  string asStack_138 [24];
  undefined4 local_120;
  string asStack_b8 [8];
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_6c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_2c8);
  uVar1 = WidgetFactory<UIWidgetImage*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_2c8,uVar1);
  std::operator+((string *)&DAT_06abea78,"Progress_BG");
  FUN_05474278(auStack_2c0,asStack_b8);
  std::string::~string(asStack_b8);
  std::string::append(asStack_298,"IMAGE_UI_LIMITLOTTERY_PROGRESS_PROGRESS_BACK",in_x2);
  local_280 = 5;
  local_2b4 = 0;
  local_2a4 = 0;
  local_2b0 = 0;
  local_2ac = 0x42b40000;
  local_2a8 = 0x43820000;
  uVar1 = UIWidgetType::ToWidget(aUStack_2c8,(Widget *)0x0);
  *(undefined8 *)(this + 0x180) = uVar1;
  (**(code **)(**(long **)(this + 0x178) + 0x60))(*(long **)(this + 0x178),uVar1);
  UIWidgetType::UIWidgetType(aUStack_218);
  std::operator+((string *)&DAT_06abea78,"Progress_Clip");
  FUN_05474278(auStack_210,asStack_b8);
  std::string::~string(asStack_b8);
  uVar1 = WidgetFactory<Sexy::Widget*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_218,uVar1);
  local_280 = 5;
  local_208 = 0x2b67;
  local_204 = 0;
  local_1fc = 0x42b40000;
  local_1f8 = 0x43250000;
  local_200 = 0x42be0000;
  uVar1 = UIWidgetType::ToWidget(aUStack_218,(Widget *)0x0);
  *(undefined8 *)(this + 0x198) = uVar1;
  __n = *(code **)(**(long **)(this + 0x180) + 0x60);
  (*__n)(*(long **)(this + 0x180),uVar1);
  UIWidgetType::UIWidgetType(aUStack_168);
  uVar1 = WidgetFactory<UIWidgetImage*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_168,uVar1);
  std::operator+((string *)&DAT_06abea78,"Progress");
  FUN_05474278(auStack_160,asStack_b8);
  std::string::~string(asStack_b8);
  std::string::append(asStack_138,"IMAGE_UI_LIMITLOTTERY_PROGRESS_PROGRESS_INNER",(size_t)__n);
  local_120 = 5;
  local_148 = 0x43250000;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0x42b40000;
  uVar1 = UIWidgetType::ToWidget(aUStack_168,(Widget *)0x0);
  *(undefined8 *)(this + 0x1a0) = uVar1;
  (**(code **)(**(long **)(this + 0x198) + 0x60))(*(long **)(this + 0x198),uVar1);
  UIWidgetType::UIWidgetType((UIWidgetType *)asStack_b8);
  uVar1 = WidgetFactory<UIWidgetAnim*>::GetTypeName();
  thunk_FUN_05475e00(asStack_b8,uVar1);
  std::operator+((string *)&DAT_06abea78,"Gift_Anim");
  FUN_05474278(auStack_b0,(string *)&local_2d0);
  std::string::~string((string *)&local_2d0);
  local_94 = 0;
  local_9c = 0x43160000;
  local_a4 = 0xc1980000;
  local_a0 = 0xc2400000;
  local_98 = 0x43160000;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_2d0,0.9,0.9);
  local_6c = local_2d0;
  pWVar2 = (Widget *)UIWidgetType::ToWidget((UIWidgetType *)asStack_b8,(Widget *)0x0);
  uVar1 = WidgetFactory<UIWidgetAnim*>::GetWidget(pWVar2);
  *(undefined8 *)(this + 0x1a8) = uVar1;
  (**(code **)(**(long **)(this + 0x178) + 0x60))(*(long **)(this + 0x178),uVar1);
  uVar1 = *(undefined8 *)(this + 0x180);
  UIWidgetType::~UIWidgetType((UIWidgetType *)asStack_b8);
  UIWidgetType::~UIWidgetType(aUStack_168);
  UIWidgetType::~UIWidgetType(aUStack_218);
  UIWidgetType::~UIWidgetType(aUStack_2c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::InitLuckyWidget() */

void __thiscall UILimitLottery::InitLuckyWidget(UILimitLottery *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_Lucky");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(this + 0x178) = uVar1;
  std::string::~string(asStack_10);
  nop();
  CreateLuckProgressBack(this);
  LuckyProgressUtil::Init
            ((LuckyProgressUtil *)(this + 0x1b0),*(Widget **)(this + 0x198),
             *(Widget **)(this + 0x1a0),*(UIWidgetAnim **)(this + 0x1a8));
  LuckyProgressUtil::SetProgerss
            ((LuckyProgressUtil *)(this + 0x1b0),(float)*(int *)(this + 0x138) * 0.01,true);
  Sexy::StrFormat("POPANIM_UI_LIMITLOTTERY_EFFECT_SPECIAL_BONUS_MAT_LIMIT_LOTTERY_CUP",asStack_10);
  UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0x1a8),asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitLottery::SetBonusList(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&,
   std::vector<int, std::allocator<int> > const&) */

void __thiscall UILimitLottery::SetBonusList(UILimitLottery *this,vector *param_1,vector *param_2)

{
  LimitLotteryPanel *this_00;
  
  if (*(long *)(this + 0x140) != 0) {
    return;
  }
  this_00 = ::operator_new(0x220);
  LimitLotteryPanel::LimitLotteryPanel(this_00);
  *(LimitLotteryPanel **)(this + 0x140) = this_00;
  LimitLotteryPanel::SetBonusList(this_00,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::InitView(bool) */

void __thiscall UILimitLottery::InitView(UILimitLottery *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetBackground *pUVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"Background_0");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(pUVar8 + 0x50);
  iVar3 = *(int *)(pUVar8 + 0x48);
  iVar4 = FUN_0398a1f8(0xe6);
  iVar5 = FUN_0398a1f8(0xd2);
  iVar6 = FUN_0398a1f8(400);
  iVar7 = FUN_0398a1f8(0x122);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 - (iVar3 - (iVar1 - iVar2) / 2),iVar5,iVar6,iVar7);
  *(undefined8 *)(this + 0x148) = local_18;
  *(undefined8 *)(this + 0x150) = uStack_10;
  if ((!param_1) && (*(long **)(this + 0x140) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x140) + 0x318))();
    (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),this + 0x148);
    LimitLotteryPanel::InitLotteryItems();
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
    InitLuckyWidget(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitLottery::SetBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall UILimitLottery::SetBonus(UILimitLottery *this,vector *param_1)

{
  if (*(LimitLotteryPanel **)(this + 0x140) != (LimitLotteryPanel *)0x0) {
    LimitLotteryPanel::SetBonus(*(LimitLotteryPanel **)(this + 0x140),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::UpdateTimerLabel() */

void __thiscall UILimitLottery::UpdateTimerLabel(UILimitLottery *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIText_Time");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  FUN_05476574(auStack_a0);
  if (pUVar2 != (UIWidgetText *)0x0) {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    iVar1 = ActiveItem::GetLeftDays(aAStack_88);
    lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
    lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
    if (iVar1 < 1) {
      iVar1 = (int)(lVar3 / 0x3c);
      Sexy::StrFormat(L"%02d: %02d: %02d",asStack_90,lVar3 / 0xe10 & 0xffffffff,
                      (ulong)(uint)(iVar1 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                      (ulong)(uint)((int)lVar3 + iVar1 * -0x3c));
      FUN_054766c8(auStack_a0,asStack_90);
      FUN_05476c50(asStack_90);
    }
    else {
      FUN_05478178(asStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a8);
      TodReplaceNumberString((wstring *)asStack_90,L"{DAY_COUNT}",iVar1);
      FUN_05476c50(asStack_90);
      nop();
      Sexy::StrFormat(L"%02d:%02d",asStack_90,lVar3 / 0xe10 & 0xffffffff,
                      (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
      FUN_054766c8(auStack_a0,asStack_90);
      FUN_05476c50(asStack_90);
      FUN_0342e660(asStack_90,auStack_98,auStack_a0);
      FUN_054766c8(auStack_a0,asStack_90);
      FUN_05476c50(asStack_90);
      FUN_05476c50(auStack_98);
    }
    PuzzleTip::SetTip(pUVar2,auStack_a0);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitLottery::Update() */

void __thiscall UILimitLottery::Update(UILimitLottery *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimerLabel(this);
  LuckyProgressUtil::Update((LuckyProgressUtil *)(this + 0x1b0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::ShowWindow() */

void __thiscall UILimitLottery::ShowWindow(UILimitLottery *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<int,std::allocator<int>> avStack_118 [24];
  LimitLotteryConfig aLStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  vector avStack_c8 [48];
  int local_98;
  int local_94;
  undefined4 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039891e8(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    LimitLotteryConfig::LimitLotteryConfig(aLStack_100);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_100);
    if ((cVar1 != '\0') && (lVar4 = FUN_03989200(local_f8,local_f0), lVar4 != 0)) {
      std::vector<int,std::allocator<int>>::vector(avStack_118,avStack_c8);
      *(int *)(this + 0x13c) = local_98;
      *(undefined4 *)(this + 0x138) = local_90;
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar2 = PlayerInfo::GetMaterialNum(this_01,0x59fc);
      iVar3 = PlayerInfo::GetMaterialNum(this_01,0x59fd);
      if (local_98 != iVar2) {
        Sexy::OutputDebugStrF
                  ((wchar_t *)"limitlotteryError: local crystal amount is different from server\'s")
        ;
      }
      if (local_94 != iVar3) {
        Sexy::OutputDebugStrF
                  ((wchar_t *)"limitlotteryError: local cup amount is different from server\'s");
      }
      PlayerInfo::SetMaterialNum(this_01,0x59fc,local_98);
      PlayerInfo::SetMaterialNum(this_01,0x59fd,local_94);
      UpdateViewInfo(this);
      SetBonusList(this,(vector *)&local_f8,(vector *)avStack_118);
      (**(code **)(*(long *)this + 0x340))(this,0);
      std::vector<int,std::allocator<int>>::~vector(avStack_118);
      LimitLotteryConfig::~LimitLotteryConfig(aLStack_100);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_0399678c;
    }
    LimitLotteryConfig::~LimitLotteryConfig(aLStack_100);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)aLStack_100);
  (**(code **)(*(long *)this + 0x348))
            (this,0,(map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                     *)aLStack_100);
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)aLStack_100);
  ActiveItem::~ActiveItem(aAStack_88);
LAB_0399678c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> > const&)
    */

void __thiscall UILimitLottery::OnNotifyRefresh(UILimitLottery *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a31;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_039891e8(local_80);
      if ((cVar2 != '\0') && (local_70 != '\0')) {
        ShowWindow(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  else {
    LawnApp::ShowNetworkError(gLawnApp);
    UISingletonDialog<UILimitLottery>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::OnCreate() */

void __thiscall UILimitLottery::OnCreate(UILimitLottery *this)

{
  uint uVar1;
  UIWidgetBackground *pUVar2;
  char *__s;
  TGALogMgr *pTVar3;
  size_t __n;
  TGALuckyChestData aTStack_78 [40];
  string asStack_50 [16];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  ShowWindow(this);
  std::string::string(asStack_40,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  uVar1 = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  __n = (size_t)uVar1;
  *(uint *)(pUVar2 + 0x48) = uVar1;
  TGALuckyChestData::TGALuckyChestData(aTStack_78);
  std::string::append((string *)aTStack_78,"1",__n);
  DString::DString((DString *)asStack_40,*(int *)(this + 0x13c));
  __s = (char *)DString::c_str((DString *)asStack_40);
  std::string::append(asStack_50,__s,__n);
  DString::~DString((DString *)asStack_40);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)asStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
  TGALogMgr::LogLimitedLottery(pTVar3,asStack_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_40);
  TGALuckyChestData::~TGALuckyChestData(aTStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::OnLimitLotteryReward(bool, S2C_LimitLotteryReward const*) */

void __thiscall
UILimitLottery::OnLimitLotteryReward
          (UILimitLottery *this,bool param_1,S2C_LimitLotteryReward *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  TGALogMgr *pTVar9;
  char *__n;
  uint uVar10;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  string asStack_1e0 [8];
  string asStack_1d8 [32];
  undefined1 auStack_1b8 [8];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(LimitLotteryPanel **)(this + 0x140) != (LimitLotteryPanel *)0x0) {
    LimitLotteryPanel::UnlockLotteryButton(*(LimitLotteryPanel **)(this + 0x140));
  }
  if (param_1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_200);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    std::string::string((string *)&local_1b0,"");
    FUN_05462980(auStack_178,(string *)&local_1b0);
    std::string::~string((string *)&local_1b0);
    nop();
    local_208 = FUN_0398d118(*(undefined8 *)(param_2 + 0x18));
    local_1e8 = FUN_0398d168(*(undefined8 *)(param_2 + 0x20));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_208,(__normal_iterator *)&local_1e8),
          bVar1) {
      puVar5 = (undefined4 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_208);
      local_1a8 = 0;
      local_1b0 = *puVar5;
      local_1ac = puVar5[1];
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_200,
                 (LotteryBonus *)&local_1b0);
      uVar6 = FUN_0546065c(auStack_168,local_1b0);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar6 = FUN_0546065c(uVar6,local_1ac);
      FUN_054603b8(uVar6,&DAT_05594620);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_208);
    }
    local_208 = FUN_0398d118(*(undefined8 *)(param_2 + 0x30));
    local_1e8 = FUN_0398d168(*(undefined8 *)(param_2 + 0x38));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_208,(__normal_iterator *)&local_1e8),
          bVar1) {
      puVar5 = (undefined4 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_208);
      local_1a8 = 0;
      local_1b0 = *puVar5;
      local_1ac = puVar5[1];
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_200,
                 (LotteryBonus *)&local_1b0);
      uVar6 = FUN_0546065c(auStack_168,local_1b0);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar6 = FUN_0546065c(uVar6,local_1ac);
      FUN_054603b8(uVar6,&DAT_05594620);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_208);
    }
    local_208 = FUN_0398d118(*(undefined8 *)(param_2 + 0x48));
    local_1e8 = FUN_0398d168(*(undefined8 *)(param_2 + 0x50));
    __n = "phone";
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_208,(__normal_iterator *)&local_1e8)
      ;
      uVar10 = (uint)bVar1;
      if (!bVar1) break;
      puVar5 = (undefined4 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_208);
      local_1a8 = 0;
      local_1b0 = *puVar5;
      local_1ac = puVar5[1];
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_200,
                 (LotteryBonus *)&local_1b0);
      uVar6 = FUN_0546065c(auStack_168,local_1b0);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar6 = FUN_0546065c(uVar6,local_1ac);
      FUN_054603b8(uVar6,&DAT_05594620);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_208);
    }
    lVar7 = FUN_03989200(local_200,local_1f8);
    if (lVar7 == 1) {
      uVar10 = 0x3c;
      iVar4 = PlayerInfo::GetMaterialNum(this_01,0x59fc);
      __n = (char *)(ulong)(iVar4 - 0x3cU);
      PlayerInfo::SetMaterialNum(this_01,0x59fc,iVar4 - 0x3cU);
      *(int *)(this + 0x13c) = *(int *)(this + 0x13c) + -0x3c;
      iVar4 = *(int *)(this + 0x138) + 1;
      *(int *)(this + 0x138) = iVar4;
    }
    else if (lVar7 == 5) {
      uVar10 = 0x10e;
      iVar4 = PlayerInfo::GetMaterialNum(this_01,0x59fc);
      __n = (char *)(ulong)(iVar4 - 0x10eU);
      PlayerInfo::SetMaterialNum(this_01,0x59fc,iVar4 - 0x10eU);
      *(int *)(this + 0x13c) = *(int *)(this + 0x13c) + -0x10e;
      iVar4 = *(int *)(this + 0x138) + 5;
      *(int *)(this + 0x138) = iVar4;
    }
    else {
      Sexy::OutputDebugStrF((wchar_t *)"limitlotteryError: bonus num is error");
      iVar4 = *(int *)(this + 0x138);
    }
    if (99 < iVar4) {
      *(undefined4 *)(this + 0x138) = 0;
    }
    cVar2 = std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::empty
                      ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)
                       (param_2 + 0x48));
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x138) = 0;
    }
    iVar4 = FUN_03989200(local_200,local_1f8);
    TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_1e8);
    std::string::append((string *)&local_1e8,"2",(size_t)__n);
    DString::DString((DString *)&local_1b0,iVar4);
    pcVar8 = (char *)DString::c_str((DString *)&local_1b0);
    std::string::append(asStack_1e0,pcVar8,(size_t)__n);
    DString::~DString((DString *)&local_1b0);
    DString::DString((DString *)&local_1b0,uVar10);
    pcVar8 = (char *)DString::c_str((DString *)&local_1b0);
    std::string::append(asStack_1d8,pcVar8,(size_t)__n);
    DString::~DString((DString *)&local_1b0);
    FUN_05462824((string *)&local_1b0,auStack_178);
    FUN_05474278(auStack_1b8,(string *)&local_1b0);
    std::string::~string((string *)&local_1b0);
    pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)&local_1b0,(TGAPlantSpecialOfferData *)&local_1e8);
    TGALogMgr::LogLimitedLottery(pTVar9,(string *)&local_1b0);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_1b0);
    UpdateViewInfo(this);
    SetBonus(this,(vector *)&local_200);
    Refresh(this);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GLLimitLotteryResult,true);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_1e8);
    FUN_054617bc(auStack_178);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_200);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)&local_1b0);
    (**(code **)(*(long *)this + 0x348))
              (this,0,(map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                       *)&local_1b0);
    std::set<int,std::less<int>,std::allocator<int>>::~set
              ((set<int,std::less<int>,std::allocator<int>> *)&local_1b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLottery::OnNotifyLimitLotteryBuyCrystalFinish(bool, S2C_LimitLotteryCrystalBuy const*) */

void __thiscall
UILimitLottery::OnNotifyLimitLotteryBuyCrystalFinish
          (UILimitLottery *this,bool param_1,S2C_LimitLotteryCrystalBuy *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar4;
  TGALogMgr *pTVar5;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  long lVar8;
  MagentoProductProps *this_02;
  string *extraout_x1;
  size_t __n;
  int iVar9;
  float fVar10;
  Magento aMStack_a0 [8];
  RtMixedPtrBase aRStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  TGALuckyChestData aTStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  DString aDStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar9 = 0;
    PlayerInfo::SetMaterialNum(this_01,0x59fc,*(int *)(param_2 + 0x14));
    iVar3 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar3,0x2734);
    Magento::GetProductPtr(aMStack_a0,extraout_x1);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_98);
    if (cVar2 != '\0') {
      this_02 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      fVar10 = (float)MagentoProductProps::GetPriceInUSD(this_02,false);
      iVar9 = (int)fVar10;
    }
    uVar1 = *(uint *)(param_2 + 0x14);
    __n = (size_t)uVar1;
    iVar3 = *(int *)(this + 0x13c);
    TGALuckyChestData::TGALuckyChestData(aTStack_78);
    std::string::append((string *)aTStack_78,"3",__n);
    std::string::append(asStack_70,"",__n);
    std::string::append(asStack_68,"",__n);
    thunk_FUN_05475e00(auStack_60,aMStack_a0);
    DString::DString(aDStack_40,iVar9);
    pcVar4 = (char *)DString::c_str(aDStack_40);
    std::string::append(asStack_58,pcVar4,__n);
    DString::~DString(aDStack_40);
    DString::DString(aDStack_40,uVar1 - iVar3);
    pcVar4 = (char *)DString::c_str(aDStack_40);
    std::string::append(asStack_50,pcVar4,__n);
    DString::~DString(aDStack_40);
    std::string::append(asStack_48,"",__n);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)aDStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
    TGALogMgr::LogLimitedLottery(pTVar5,aDStack_40);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aDStack_40);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar5,0x2734);
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_2 + 0x14);
    UpdateViewInfo(this);
    pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar6 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar6,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[SALES_BUY_SUCCESS_TITLE]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar6,awStack_88,awStack_90);
      std::string::string((string *)aDStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage((string *)aDStack_40,false);
      UIMessageBox::SetBackground(pUVar6,pIVar7);
      std::string::~string((string *)aDStack_40);
      nop();
      lVar8 = UIMessageBox::GetButtonCancel(pUVar6);
      thunk_FUN_05477b9c(lVar8 + 0xd8,awStack_80);
      FUN_05476c50(awStack_80);
      FUN_05476c50(awStack_88);
      FUN_05476c50(awStack_90);
    }
    TGALuckyChestData::~TGALuckyChestData(aTStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    std::string::~string((string *)aMStack_a0);
  }
  else {
    pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar6 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar6,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[DANGERROOM_BUYLIFE_FAILED_TITLE]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar6,awStack_80,awStack_88);
      std::string::string((string *)aDStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage((string *)aDStack_40,param_1);
      UIMessageBox::SetBackground(pUVar6,pIVar7);
      std::string::~string((string *)aDStack_40);
      nop();
      lVar8 = UIMessageBox::GetButtonCancel(pUVar6);
      thunk_FUN_05477b9c(lVar8 + 0xd8,aTStack_78);
      FUN_05476c50(aTStack_78);
      FUN_05476c50(awStack_80);
      FUN_05476c50(awStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

