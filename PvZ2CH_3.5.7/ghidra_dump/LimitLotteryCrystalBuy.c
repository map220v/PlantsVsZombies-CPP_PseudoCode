// Class: LimitLotteryCrystalBuy


/* LimitLotteryCrystalBuy::ScrollTargetReached(Sexy::ScrollWidget*) */

void LimitLotteryCrystalBuy::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitLotteryCrystalBuy::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LimitLotteryCrystalBuy::ScrollTargetReached(LimitLotteryCrystalBuy *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* LimitLotteryCrystalBuy::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LimitLotteryCrystalBuy::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitLotteryCrystalBuy::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LimitLotteryCrystalBuy::ScrollTargetInterrupted(LimitLotteryCrystalBuy *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCrystalBuy::GetLayoutName() */

void __thiscall LimitLotteryCrystalBuy::GetLayoutName(LimitLotteryCrystalBuy *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitLotteryCrystalBuy");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy() */

void __thiscall LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy(LimitLotteryCrystalBuy *this)

{
  *(undefined ***)this = &PTR_GetClass_066df440;
  *(undefined **)(this + 0xd8) = &DAT_066df7a0;
  *(undefined ***)(this + 0x138) = &PTR__LimitLotteryCrystalBuy_066df7e8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<LimitLotteryCrystalBuy>::~UISingletonDialog
            ((UISingletonDialog<LimitLotteryCrystalBuy> *)this);
  return;
}


/* non-virtual thunk to LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy() */

void __thiscall LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy(LimitLotteryCrystalBuy *this)

{
  ~LimitLotteryCrystalBuy(this + -0x138);
  return;
}


/* LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy() */

void __thiscall LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy(LimitLotteryCrystalBuy *this)

{
  ~LimitLotteryCrystalBuy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy() */

void __thiscall LimitLotteryCrystalBuy::~LimitLotteryCrystalBuy(LimitLotteryCrystalBuy *this)

{
  ~LimitLotteryCrystalBuy(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCrystalBuy::OnCreate() */

void __thiscall LimitLotteryCrystalBuy::OnCreate(LimitLotteryCrystalBuy *this)

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
  LimitLotteryCrystalBuyItem *this_02;
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
  iVar1 = FUN_0398a1f8(0);
  iVar2 = FUN_0398a1f8(0x239);
  iVar3 = FUN_0398a1f8(0x125);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,iVar2,iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  do {
    iVar2 = FUN_0398a1f8(0);
    iVar3 = FUN_0398a1f8(0x11c);
    iVar1 = iVar3 * iVar5;
    iVar5 = iVar5 + 1;
    iVar4 = FUN_0398a1f8(0x122);
    Sexy::Insets::Insets((Insets *)asStack_18,iVar2 + iVar1,iVar2,iVar3,iVar4);
    this_02 = ::operator_new(0xe0);
    LimitLotteryCrystalBuyItem::LimitLotteryCrystalBuyItem(this_02,(ButtonListener *)(this + 0xd8));
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
    LimitLotteryCrystalBuyItem::SetIndex(this_02,iVar5);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  } while (iVar5 != 3);
  iVar5 = FUN_0398a1f8(0x11c);
  lVar8 = *(long *)pUVar7;
  *(int *)(this_01 + 0x50) = iVar5 * 3;
  (**(code **)(lVar8 + 0x60))(pUVar7,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* LimitLotteryCrystalBuy::LimitLotteryCrystalBuy() */

void __thiscall LimitLotteryCrystalBuy::LimitLotteryCrystalBuy(LimitLotteryCrystalBuy *this)

{
  UISingletonDialog<LimitLotteryCrystalBuy>::UISingletonDialog
            ((UISingletonDialog<LimitLotteryCrystalBuy> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066df440;
  *(undefined **)(this + 0xd8) = &DAT_066df7a0;
  *(undefined ***)(this + 0x138) = &PTR__LimitLotteryCrystalBuy_066df7e8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCrystalBuy::ButtonDepress(int) */

void __thiscall LimitLotteryCrystalBuy::ButtonDepress(LimitLotteryCrystalBuy *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  PurchaseBroker *this_00;
  TGALogMgr *this_01;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xc9) {
    p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var1);
    __s = "com.popcap.ios.chs.PVZ2.Lottery6";
  }
  else {
    if (param_1 < 0xca) {
      if (param_1 == 0x58) {
        UISingletonDialog<LimitLotteryCrystalBuy>::CloseDialog();
      }
      goto LAB_0398d094;
    }
    if (param_1 == 0xca) {
      p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var1);
      __s = "com.popcap.ios.chs.PVZ2.Lottery25";
    }
    else {
      if (param_1 != 0xcb) goto LAB_0398d094;
      p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var1);
      __s = "com.popcap.ios.chs.PVZ2.Lottery328";
    }
  }
  std::string::string(asStack_10,__s);
  PurchaseBroker::RequestPayment(this_00,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string(asStack_10,__s);
  TGALogMgr::LogSegments(this_01,0x2734,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_0398d094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitLotteryCrystalBuy::ButtonDepress(int) */

void __thiscall LimitLotteryCrystalBuy::ButtonDepress(LimitLotteryCrystalBuy *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

