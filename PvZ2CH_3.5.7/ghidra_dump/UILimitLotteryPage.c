// Class: UILimitLotteryPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::GetLayoutName() */

void __thiscall UILimitLotteryPage::GetLayoutName(UILimitLotteryPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitLotteryPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::~UILimitLotteryPage() */

void __thiscall UILimitLotteryPage::~UILimitLotteryPage(UILimitLotteryPage *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_066dd860;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066dd500;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
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
  UISingletonDialog<UILimitLotteryPage>::~UISingletonDialog
            ((UISingletonDialog<UILimitLotteryPage> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitLotteryPage::~UILimitLotteryPage() */

void __thiscall UILimitLotteryPage::~UILimitLotteryPage(UILimitLotteryPage *this)

{
  ~UILimitLotteryPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::OnCreate() */

void __thiscall UILimitLotteryPage::OnCreate(UILimitLotteryPage *this)

{
  char cVar1;
  UIWidgetBackground *pUVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"Background_0");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pcVar3 = *(code **)(*(long *)this + 0x340);
    *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
    (*pcVar3)(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::UpdateViewInfo() */

void __thiscall UILimitLotteryPage::UpdateViewInfo(UILimitLotteryPage *this)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Luck");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    FUN_05476574(auStack_20);
    FUN_05478178(awStack_18,L"[LUCK_VALUE]",auStack_28);
    TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(this + 0x134));
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    nop();
    PuzzleTip::SetTip(pUVar1,auStack_20);
    LuckyProgressUtil::SetProgerss
              ((LuckyProgressUtil *)(this + 0x1b0),
               (float)*(int *)(this + 0x134) / (float)*(int *)(this + 0x138),true);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::DisabledAllButtons() */

void __thiscall UILimitLotteryPage::DisabledAllButtons(UILimitLotteryPage *this)

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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::EnabledAllButtons() */

void __thiscall UILimitLotteryPage::EnabledAllButtons(UILimitLotteryPage *this)

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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::ButtonDepress(int) */

void __thiscall UILimitLotteryPage::ButtonDepress(UILimitLotteryPage *this,int param_1)

{
  LawnApp *this_00;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3c) {
    FUN_05478178(awStack_10,L"Christmas2018_Lottery",auStack_18);
    LawnApp::ShowProbabilityDialog(this_00,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UILimitLotteryPage>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILimitLotteryPage::ButtonDepress(int) */

void __thiscall UILimitLotteryPage::ButtonDepress(UILimitLotteryPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UILimitLotteryPage::OnStartLottery() */

void __thiscall UILimitLotteryPage::OnStartLottery(UILimitLotteryPage *this)

{
  RechargeWelfareUI *this_00;
  
  this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  if (this_00 != (RechargeWelfareUI *)0x0) {
    RechargeWelfareUI::DisabledAllButtons(this_00);
  }
  DisabledAllButtons(this);
  return;
}


/* UILimitLotteryPage::OnFinishLottery() */

void __thiscall UILimitLotteryPage::OnFinishLottery(UILimitLotteryPage *this)

{
  RechargeWelfareUI *this_00;
  
  this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  if (this_00 != (RechargeWelfareUI *)0x0) {
    RechargeWelfareUI::EnabledAllButtons(this_00);
  }
  EnabledAllButtons(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::UILimitLotteryPage() */

void __thiscall UILimitLotteryPage::UILimitLotteryPage(UILimitLotteryPage *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UILimitLotteryPage>::UISingletonDialog
            ((UISingletonDialog<UILimitLotteryPage> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_066dd500;
  *(undefined **)(this + 0xd8) = &DAT_066dd860;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x138) = 100;
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
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
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,S2C_SummeryLotteryData2018_const&,Sexy::CBMemberTranslatorX<UILimitLotteryPage,void(UILimitLotteryPage::*)(bool,S2C_SummeryLotteryData2018_const&)>>
            ((MessageRouter *)puVar1,Message::NotifySummeryLottery2018,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartLottery);
  Sexy::Delegate0::Delegate0<UILimitLotteryPage,void(UILimitLotteryPage::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartLimitLottery,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishLottery);
  Sexy::Delegate0::Delegate0<UILimitLotteryPage,void(UILimitLotteryPage::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishLottery,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitLotteryPage::CloseBonusEffect() */

void __thiscall UILimitLotteryPage::CloseBonusEffect(UILimitLotteryPage *this)

{
  if (*(LimitLotteryPanel **)(this + 0x140) != (LimitLotteryPanel *)0x0) {
    LimitLotteryPanel::CloseBonusEffect(*(LimitLotteryPanel **)(this + 0x140));
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyInputEnable,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::CreateLuckProgressBack() */

void __thiscall UILimitLotteryPage::CreateLuckProgressBack(UILimitLotteryPage *this)

{
  undefined8 uVar1;
  Widget *pWVar2;
  size_t in_x2;
  code *__n;
  string local_2d0 [8];
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
  local_2a4 = 0;
  local_2ac = 0x42960000;
  local_2b4 = 0x41200000;
  local_2b0 = 0x42be0000;
  local_2a8 = 0x43610000;
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
  local_1fc = 0x42960000;
  local_204 = 0;
  local_200 = 0;
  local_1f8 = 0x43610000;
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
  local_14c = 0x42960000;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0x43610000;
  uVar1 = UIWidgetType::ToWidget(aUStack_168,(Widget *)0x0);
  *(undefined8 *)(this + 0x1a0) = uVar1;
  (**(code **)(**(long **)(this + 0x198) + 0x60))(*(long **)(this + 0x198),uVar1);
  UIWidgetType::UIWidgetType((UIWidgetType *)asStack_b8);
  uVar1 = WidgetFactory<UIWidgetAnim*>::GetTypeName();
  thunk_FUN_05475e00(asStack_b8,uVar1);
  std::operator+((string *)&DAT_06abea78,"Gift_Anim");
  FUN_05474278(auStack_b0,local_2d0);
  std::string::~string(local_2d0);
  local_94 = 0;
  local_9c = 0x42be0000;
  local_a4 = 0xc1700000;
  local_a0 = 0xc2380000;
  local_98 = 0x42be0000;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_2d0,0.9,0.9);
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
/* UILimitLotteryPage::UpdateTimerLabel() */

void __thiscall UILimitLotteryPage::UpdateTimerLabel(UILimitLotteryPage *this)

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


/* UILimitLotteryPage::Update() */

void __thiscall UILimitLotteryPage::Update(UILimitLotteryPage *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimerLabel(this);
  LuckyProgressUtil::Update((LuckyProgressUtil *)(this + 0x1b0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall
UILimitLotteryPage::OnNotifyRefresh(UILimitLotteryPage *this,bool param_1,set *param_2)

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
        (**(code **)(*(long *)this + 0x340))(this,1);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  else {
    LawnApp::ShowNetworkError(gLawnApp);
    if (*(LimitLotteryPanel **)(this + 0x140) != (LimitLotteryPanel *)0x0) {
      LimitLotteryPanel::UnlockLotteryButton(*(LimitLotteryPanel **)(this + 0x140));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::InitLuckyWidget() */

void __thiscall UILimitLotteryPage::InitLuckyWidget(UILimitLotteryPage *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  UIWidgetImage *pUVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_100 [8];
  string asStack_f8 [8];
  Sexy aSStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [24];
  undefined8 local_b8;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_d0,"Widget_Lucky");
  uVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_d0);
  *(undefined8 *)(this + 0x178) = uVar3;
  std::string::~string(asStack_d0);
  nop();
  CreateLuckProgressBack(this);
  LuckyProgressUtil::Init
            ((LuckyProgressUtil *)(this + 0x1b0),*(Widget **)(this + 0x198),
             *(Widget **)(this + 0x1a0),*(UIWidgetAnim **)(this + 0x1a8));
  LuckyProgressUtil::SetProgerss
            ((LuckyProgressUtil *)(this + 0x1b0),(float)*(int *)(this + 0x134) * 0.01,true);
  std::string::string(asStack_100,"IMAGE_UI_LIMITLOTTERY_PAGEBANNER_");
  nop();
  std::string::string(asStack_f8,
                      "POPANIM_UI_LIMITLOTTERY_EFFECT_SPECIAL_BONUS_MAT_EVENT_LOTTERY_CUP");
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039891e8(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData
              ((BossChallengeMedalLotteryServerData *)asStack_d0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d0);
    if (cVar1 != '\0') {
      FUN_0398922c(local_b8,0);
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      std::string::string(asStack_e8,"POPANIM_UI_LIMITLOTTERY_EFFECT_SPECIAL_BONUS_");
      Sexy::StringToUpper(aSStack_f0,extraout_x1);
      std::operator+(asStack_e8,asStack_e0);
      FUN_05474278(asStack_f8,asStack_d8);
      std::string::~string(asStack_d8);
      std::string::~string(asStack_e0);
      std::string::~string(asStack_e8);
      nop();
      Sexy::StringToUpper(aSStack_f0,extraout_x1_00);
      std::operator+(asStack_100,asStack_e0);
      FUN_05474278(asStack_100,asStack_d8);
      std::string::~string(asStack_d8);
      std::string::~string(asStack_e0);
      std::string::~string((string *)aSStack_f0);
    }
    BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData
              ((BossChallengeMedalLotteryServerData *)asStack_d0);
  }
  UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0x1a8),asStack_f8);
  std::string::string(asStack_d0,"UIImage_Banner");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  if (pUVar4 != (UIWidgetImage *)0x0) {
    UIWidgetImage::SetImage(pUVar4,asStack_100);
  }
  std::string::string(asStack_d0,"UIImage_Timmer");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  if (pUVar4 != (UIWidgetImage *)0x0) {
    std::string::string(asStack_d0,"IMAGE_UI_NATIONALCENTER_TIME_LEFT");
    UIWidgetImage::SetImage(pUVar4,asStack_d0);
    std::string::~string(asStack_d0);
    nop();
  }
  ActiveItem::~ActiveItem(aAStack_88);
  std::string::~string(asStack_f8);
  std::string::~string(asStack_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::Refresh() */

void __thiscall UILimitLotteryPage::Refresh(UILimitLotteryPage *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  LimitLotteryPanel *this_00;
  undefined8 local_100 [3];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e8 [24];
  BossChallengeMedalLotteryServerData aBStack_d0 [12];
  undefined4 local_c4;
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_039891e8(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData(aBStack_d0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aBStack_d0);
    if ((cVar2 != '\0') && (lVar4 = FUN_03989214(local_a0,local_98), lVar4 != 0)) {
      *(undefined4 *)(this + 0x134) = local_c4;
      if (*(long *)(this + 0x140) != 0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_100);
        uVar5 = FUN_03989214(local_a0,local_98);
        std::vector<LotteryBonus,std::allocator<LotteryBonus>>::resize
                  ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_100,uVar5);
        lVar6 = FUN_03989214(local_a0,local_98);
        lVar4 = 0;
        while (lVar4 + 1 != lVar6 + 1) {
          puVar7 = (undefined4 *)FUN_03989220(local_100[0],lVar4);
          lVar8 = FUN_0398922c(local_a0,lVar4);
          uVar1 = *(undefined4 *)(lVar8 + 0x14);
          puVar7[1] = *(undefined4 *)(lVar8 + 0x18);
          *puVar7 = uVar1;
          lVar4 = lVar4 + 1;
        }
        this_00 = *(LimitLotteryPanel **)(this + 0x140);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e8);
        LimitLotteryPanel::SetBonusList(this_00,(vector *)local_100,(vector *)avStack_e8);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_e8)
        ;
        std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
                  ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_100);
      }
      BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData(aBStack_d0);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_03996dbc;
    }
    BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData(aBStack_d0);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)aBStack_d0);
  (**(code **)(*(long *)this + 0x348))
            (this,0,(map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                     *)aBStack_d0);
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)aBStack_d0);
  ActiveItem::~ActiveItem(aAStack_88);
LAB_03996dbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::InitView(bool) */

void __thiscall UILimitLotteryPage::InitView(UILimitLotteryPage *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  TGALogMgr *pTVar7;
  long *plVar8;
  LimitLotteryPagePanel *this_00;
  UIWidgetImage *pUVar9;
  long lVar10;
  BossChallengeMedalLotteryServerData *__n;
  code *pcVar11;
  string asStack_138 [8];
  string asStack_130 [8];
  TGAAnniversaryTreasureData aTStack_128 [8];
  string asStack_120 [16];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [48];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) == 0) {
    std::string::string((string *)&local_d8,"Background_0");
    plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_d8);
    std::string::~string((string *)&local_d8);
    nop();
    (**(code **)(*plVar8 + 0x198))
              (plVar8,(*(int *)(gLawnApp + 0x724) - (int)plVar8[10]) / 2,
               *(undefined4 *)((long)plVar8 + 0x4c),(int)plVar8[10],
               *(undefined4 *)((long)plVar8 + 0x54));
    this_00 = ::operator_new(0x220);
    LimitLotteryPagePanel::LimitLotteryPagePanel(this_00);
    *(LimitLotteryPagePanel **)(this + 0x140) = this_00;
    std::string::string((string *)&local_d8,"UIImage_BG");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_d8);
    std::string::~string((string *)&local_d8);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,*(undefined8 *)(this + 0x140));
  }
  if (param_1) {
    Refresh(this);
    (**(code **)(**(long **)(this + 0x140) + 0x318))(*(long **)(this + 0x140));
    iVar2 = FUN_0398a1f8(0x2d);
    iVar3 = FUN_0398a1f8(5);
    iVar4 = FUN_0398a1f8(0x16f);
    iVar5 = FUN_0398a1f8(0x147);
    Sexy::Insets::Insets((Insets *)&local_d8,iVar2,iVar3,iVar4,iVar5);
    pcVar11 = *(code **)(**(long **)(this + 0x140) + 0x1a0);
    *(undefined8 *)(this + 0x148) = local_d8;
    *(undefined8 *)(this + 0x150) = uStack_d0;
    (*pcVar11)(*(long **)(this + 0x140),this + 0x148);
    LimitLotteryPanel::InitLotteryItems();
    InitLuckyWidget(this);
    UpdateViewInfo(this);
  }
  std::string::string(asStack_138,"");
  nop();
  __n = (BossChallengeMedalLotteryServerData *)&local_d8;
  std::string::string(asStack_130,"");
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039891e8(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData
              ((BossChallengeMedalLotteryServerData *)&local_d8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_d8);
    if (cVar1 != '\0') {
      FUN_0398922c(local_c0,0);
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      FUN_05474278(asStack_138,aTStack_128);
      std::string::~string((string *)aTStack_128);
      lVar10 = FUN_0398922c(local_c0,0);
      DString::DString((DString *)aTStack_128,*(int *)(lVar10 + 0x18));
      pcVar6 = (char *)DString::c_str((DString *)aTStack_128);
      std::string::append(asStack_130,pcVar6,(size_t)__n);
      DString::~DString((DString *)aTStack_128);
    }
    BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData
              ((BossChallengeMedalLotteryServerData *)&local_d8);
  }
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_128);
  std::string::append((string *)aTStack_128,"1",(size_t)__n);
  DString::DString((DString *)&local_d8,*(int *)(this + 0x134));
  pcVar6 = (char *)DString::c_str((DString *)&local_d8);
  std::string::append(asStack_120,pcVar6,(size_t)__n);
  DString::~DString((DString *)&local_d8);
  thunk_FUN_05475e00(auStack_110,asStack_138);
  thunk_FUN_05475e00(auStack_108,asStack_130);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
            ((TGAAnniversaryTreasureData *)&local_d8,aTStack_128);
  TGALogMgr::LogMinorLottery(pTVar7,(BossChallengeMedalLotteryServerData *)&local_d8);
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)&local_d8);
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_128);
  ActiveItem::~ActiveItem(aAStack_88);
  std::string::~string(asStack_130);
  std::string::~string(asStack_138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitLotteryPage::OnLimitLotteryReward(bool, S2C_SummeryLotteryData2018 const&) */

void __thiscall
UILimitLotteryPage::OnLimitLotteryReward
          (UILimitLotteryPage *this,bool param_1,S2C_SummeryLotteryData2018 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  char *__s;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  DString aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    PlayerInfo::GetNumGems(this_01,false);
    PlayerInfo::SetGems(this_01,*(int *)(param_2 + 0x50));
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(this + 0x134) = uVar1;
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    DString::DString(aDStack_38,*(int *)(this + 0x134));
    __s = (char *)DString::c_str(aDStack_38);
    std::string::string((string *)&local_48,__s);
    TGALogMgr::LogSegments(this_02,0x273a,0,(string *)&local_48);
    std::string::~string((string *)&local_48);
    nop();
    DString::~DString(aDStack_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_38);
    local_58 = FUN_0398d1f4(*(undefined8 *)(param_2 + 0x18));
    local_50 = FUN_0398d244(*(undefined8 *)(param_2 + 0x20));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      local_40 = 0;
      local_48 = *(undefined4 *)(lVar3 + 0x14);
      local_44 = *(undefined4 *)(lVar3 + 0x18);
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aDStack_38,
                 (LotteryBonus *)&local_48);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_58);
    }
    UpdateViewInfo(this);
    if (*(LimitLotteryPanel **)(this + 0x140) != (LimitLotteryPanel *)0x0) {
      LimitLotteryPanel::SetBonus(*(LimitLotteryPanel **)(this + 0x140),(vector *)aDStack_38);
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GLLimitLotteryResult,true);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aDStack_38);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)aDStack_38);
    (**(code **)(*(long *)this + 0x348))
              (this,0,(map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                       *)aDStack_38);
    std::set<int,std::less<int>,std::allocator<int>>::~set
              ((set<int,std::less<int>,std::allocator<int>> *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

