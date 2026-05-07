// Class: LimitedSummonVIP


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::GetLayoutName() */

void __thiscall LimitedSummonVIP::GetLayoutName(LimitedSummonVIP *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LimitedSummonVIP");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LimitedSummonVIP::~LimitedSummonVIP() */

void __thiscall LimitedSummonVIP::~LimitedSummonVIP(LimitedSummonVIP *this)

{
  *(undefined ***)this = &PTR_GetClass_066e1f20;
  *(undefined **)(this + 0xd8) = &DAT_066e2270;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<LimitedSummonVIP>::~UISingletonDialog
            ((UISingletonDialog<LimitedSummonVIP> *)this);
  return;
}


/* LimitedSummonVIP::~LimitedSummonVIP() */

void __thiscall LimitedSummonVIP::~LimitedSummonVIP(LimitedSummonVIP *this)

{
  ~LimitedSummonVIP(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::Refresh() */

void __thiscall LimitedSummonVIP::Refresh(LimitedSummonVIP *this)

{
  PVZ2UIButton *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_VIP");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(int *)(lVar1 + 0x24) == 0) {
    lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    if (*(char *)(lVar1 + 0x28) == '\0') {
      TodStringTranslate(L"[ENTRANCE_CLOSED]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
      *(undefined4 *)(this_00 + 0xd4) = 0xca;
    }
    else {
      TodStringTranslate(L"[BUYPLANT_BUTTON]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,0);
      *(undefined4 *)(this_00 + 0xd4) = 0xca;
    }
  }
  else {
    lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    if (*(int *)(lVar1 + 0x2c) == 0) {
      TodStringTranslate(L"[ONE_CLICK_TO_RECEIVE]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,0);
      *(undefined4 *)(this_00 + 0xd4) = 0xc9;
    }
    else {
      TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_GOT]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
      *(undefined4 *)(this_00 + 0xd4) = 0xc9;
    }
  }
  lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  *(long *)(this + 0x138) = (long)(*(int *)(lVar1 + 0x30) + 0x3f480);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::InitView() */

void __thiscall LimitedSummonVIP::InitView(LimitedSummonVIP *this)

{
  PVZ2UIButton *this_00;
  long lVar1;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_VIP");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(int *)(lVar1 + 0x24) == 0) {
    lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    if (*(char *)(lVar1 + 0x28) == '\0') {
      TodStringTranslate(L"[ENTRANCE_CLOSED]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
      *(undefined4 *)(this_00 + 0xd4) = 0xca;
    }
    else {
      TodStringTranslate(L"[BUYPLANT_BUTTON]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,0);
      *(undefined4 *)(this_00 + 0xd4) = 0xca;
    }
  }
  else {
    lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    if (*(int *)(lVar1 + 0x2c) == 0) {
      TodStringTranslate(L"[ONE_CLICK_TO_RECEIVE]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,0);
      *(undefined4 *)(this_00 + 0xd4) = 0xc9;
    }
    else {
      TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_GOT]");
      PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
      *(undefined4 *)(this_00 + 0xd4) = 0xc9;
    }
  }
  lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  *(long *)(this + 0x138) = (long)(*(int *)(lVar1 + 0x30) + 0x3f480);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::OnCreate() */

void __thiscall LimitedSummonVIP::OnCreate(LimitedSummonVIP *this)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* LimitedSummonVIP::OnBuyVIPFinish(int) */

void __thiscall LimitedSummonVIP::OnBuyVIPFinish(LimitedSummonVIP *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  LimitedSummonManager *this_00;
  
  if (param_1 != -1) {
    return;
  }
  lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  *(undefined4 *)(lVar2 + 0x24) = 1;
  lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  this_00 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  LimitedSummonManager::RecalculTickets(this_00);
  Refresh(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::Update() */

void __thiscall LimitedSummonVIP::Update(LimitedSummonVIP *this)

{
  long lVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  lVar1 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  if (*(int *)(lVar1 + 0x30) == 0) {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    std::string::string((string *)aTStack_10,"0");
    UIWidgetText::SetString(pUVar2,(string *)aTStack_10);
    std::string::~string((string *)aTStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  else {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    lVar3 = *(long *)(this + 0x138);
    lVar1 = LawnApp::GetRealServerTime(gLawnApp);
    TimeUtil::GetTimeCountdownFormat(aTStack_10,(float)(lVar3 - lVar1),0);
    PuzzleTip::SetTip(pUVar2,aTStack_10);
    FUN_05476c50(aTStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonVIP::LimitedSummonVIP() */

void __thiscall LimitedSummonVIP::LimitedSummonVIP(LimitedSummonVIP *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<LimitedSummonVIP>::UISingletonDialog
            ((UISingletonDialog<LimitedSummonVIP> *)this);
  *(undefined ***)this = &PTR_GetClass_066e1f20;
  *(undefined **)(this + 0xd8) = &DAT_066e2270;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyVIPFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LimitedSummonVIP,void(LimitedSummonVIP::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyLimitedSummon,&local_40);
  uVar2 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(this + 0x140) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::Receive() */

void __thiscall LimitedSummonVIP::Receive(LimitedSummonVIP *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2736];
  string asStack_238 [560];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a66;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 2;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0399a86c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_238,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonVIP::ButtonDepress(int) */

void __thiscall LimitedSummonVIP::ButtonDepress(LimitedSummonVIP *this,int param_1)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_039a1f44();
  if (cVar1 == '\0') {
    cVar1 = TimeUtil::IsToday(*(long *)(this + 0x140));
    if (cVar1 == '\0') {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[ACTIVITY_PASS_DAY]");
      UIMessageBox::SetMessage(this_02,awStack_18,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_20);
      FUN_05476c50(awStack_18);
      FUN_05476c50(auStack_20);
      FUN_05476c50(awStack_28);
    }
    else if (param_1 == 0xc9) {
      Receive(this);
    }
    else if (param_1 == 0xca) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_00);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.LimitedSummonVIP30");
      PurchaseBroker::RequestPayment(this_01,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    UISingletonDialog<UILimitedSummon>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitedSummonVIP::ButtonDepress(int) */

void __thiscall LimitedSummonVIP::ButtonDepress(LimitedSummonVIP *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

