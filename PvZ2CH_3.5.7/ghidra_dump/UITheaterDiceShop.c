// Class: UITheaterDiceShop


/* UITheaterDiceShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void UITheaterDiceShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITheaterDiceShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UITheaterDiceShop::ScrollTargetReached(UITheaterDiceShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UITheaterDiceShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UITheaterDiceShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITheaterDiceShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UITheaterDiceShop::ScrollTargetInterrupted(UITheaterDiceShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterDiceShop::GetLayoutName() */

void __thiscall UITheaterDiceShop::GetLayoutName(UITheaterDiceShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITheaterDiceShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITheaterDiceShop::~UITheaterDiceShop() */

void __thiscall UITheaterDiceShop::~UITheaterDiceShop(UITheaterDiceShop *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06715920;
  *(undefined ***)this = &PTR_GetClass_067155c0;
  *(undefined ***)(this + 0x138) = &PTR__UITheaterDiceShop_06715968;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<UITheaterDiceShop>::~UISingletonDialog
            ((UISingletonDialog<UITheaterDiceShop> *)this);
  return;
}


/* non-virtual thunk to UITheaterDiceShop::~UITheaterDiceShop() */

void __thiscall UITheaterDiceShop::~UITheaterDiceShop(UITheaterDiceShop *this)

{
  ~UITheaterDiceShop(this + -0x138);
  return;
}


/* UITheaterDiceShop::~UITheaterDiceShop() */

void __thiscall UITheaterDiceShop::~UITheaterDiceShop(UITheaterDiceShop *this)

{
  ~UITheaterDiceShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UITheaterDiceShop::~UITheaterDiceShop() */

void __thiscall UITheaterDiceShop::~UITheaterDiceShop(UITheaterDiceShop *this)

{
  ~UITheaterDiceShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterDiceShop::OnCreate() */

void __thiscall UITheaterDiceShop::OnCreate(UITheaterDiceShop *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetBackground *pUVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  UITheaterDiceShopItem *this_02;
  long lVar8;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_18,"Background_0");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(int *)(pUVar6 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar6 + 0x50)) / 2;
  std::string::string(asStack_18,"UIImage_BG");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar1 = FUN_03ab60a0(0);
  iVar2 = FUN_03ab60a0(0x239);
  iVar3 = FUN_03ab60a0(0x125);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,iVar2,iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  do {
    iVar2 = FUN_03ab60a0(0);
    iVar3 = FUN_03ab60a0(0x11c);
    iVar1 = iVar3 * iVar5;
    iVar4 = FUN_03ab60a0(0x122);
    iVar5 = iVar5 + 1;
    Sexy::Insets::Insets((Insets *)asStack_18,iVar2 + iVar1,iVar2,iVar3,iVar4);
    this_02 = ::operator_new(0xe0);
    UITheaterDiceShopItem::UITheaterDiceShopItem(this_02,(ButtonListener *)(this + 0xd8));
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
    UITheaterDiceShopItem::SetIndex(this_02,iVar5);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  } while (iVar5 != 5);
  iVar5 = FUN_03ab60a0(0x11c);
  lVar8 = *(long *)pUVar7;
  *(int *)(this_01 + 0x50) = iVar5 * 5;
  (**(code **)(lVar8 + 0x60))(pUVar7,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UITheaterDiceShop::UITheaterDiceShop() */

void __thiscall UITheaterDiceShop::UITheaterDiceShop(UITheaterDiceShop *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UITheaterDiceShop>::UISingletonDialog
            ((UISingletonDialog<UITheaterDiceShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined **)(this + 0xd8) = &DAT_06715920;
  *(undefined ***)(this + 0x138) = &PTR__UITheaterDiceShop_06715968;
  *(undefined ***)this = &PTR_GetClass_067155c0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBillingReward);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_BillingReward_const*,Sexy::CBMemberTranslatorX<UITheaterDiceShop,void(UITheaterDiceShop::*)(bool,S2C_BillingReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBillingReward,&local_40);
  return;
}


/* UITheaterDiceShop::OnNotifyBillingReward(bool, S2C_BillingReward const*) */

UITheaterDiceShop * __thiscall
UITheaterDiceShop::OnNotifyBillingReward
          (UITheaterDiceShop *this,bool param_1,S2C_BillingReward *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  UITheaterDiceShop *extraout_x0;
  
  if (param_1) {
    bVar2 = std::vector<LotteryBonus,std::allocator<LotteryBonus>>::empty
                      ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(param_2 + 0x18));
    this = (UITheaterDiceShop *)(ulong)bVar2;
    if (bVar2 == 0) {
      lVar3 = FUN_03ab5b10(*(undefined8 *)(param_2 + 0x18));
      uVar1 = *(uint *)(lVar3 + 4);
      Sexy::OutputDebugStrF((wchar_t *)"RichmanDiceShopBuyFinish %d",(ulong)uVar1);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::RichmanDiceShopBuyFinish,uVar1);
      return extraout_x0;
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterDiceShop::ButtonDepress(int) */

void __thiscall UITheaterDiceShop::ButtonDepress(UITheaterDiceShop *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  PurchaseBroker *this_00;
  TGALogMgr *this_01;
  char *__s;
  int iVar2;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xca) {
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var1);
    __s = "com.popcap.ios.chs.PVZ2.Richman12";
    iVar2 = 0xc;
  }
  else if (param_1 < 0xcb) {
    if (param_1 == 0x58) {
      UISingletonDialog<UITheaterDiceShop>::CloseDialog();
      iVar2 = 0;
      goto LAB_03aba2b0;
    }
    if (param_1 != 0xc9) {
LAB_03aba348:
      iVar2 = 0;
      goto LAB_03aba2b0;
    }
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var1);
    __s = "com.popcap.ios.chs.PVZ2.Richman1";
    iVar2 = 1;
  }
  else if (param_1 == 0xcc) {
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var1);
    __s = "com.popcap.ios.chs.PVZ2.Richman168";
    iVar2 = 0xa8;
  }
  else if (param_1 < 0xcc) {
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var1);
    __s = "com.popcap.ios.chs.PVZ2.Richman88";
    iVar2 = 0x58;
  }
  else {
    if (param_1 != 0xcd) goto LAB_03aba348;
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var1);
    __s = "com.popcap.ios.chs.PVZ2.Richman248";
    iVar2 = 0xf8;
  }
  std::string::string(asStack_18,__s);
  PurchaseBroker::RequestPayment(this_00,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
LAB_03aba2b0:
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  DString::DString((DString *)asStack_18,iVar2);
  DString::operator_cast_to_string((DString *)asStack_18);
  TGALogMgr::LogSegments(this_01,0x273e,0,asStack_20);
  std::string::~string(asStack_20);
  DString::~DString((DString *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UITheaterDiceShop::ButtonDepress(int) */

void __thiscall UITheaterDiceShop::ButtonDepress(UITheaterDiceShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

