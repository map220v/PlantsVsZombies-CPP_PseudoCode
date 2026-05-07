// Class: UIUnchartedFestivalRewardPurchase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedFestivalRewardPurchase::GetLayoutName() */

void __thiscall
UIUnchartedFestivalRewardPurchase::GetLayoutName(UIUnchartedFestivalRewardPurchase *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIUnchartedFestivalRewardPurchase");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIUnchartedFestivalRewardPurchase::~UIUnchartedFestivalRewardPurchase() */

void __thiscall
UIUnchartedFestivalRewardPurchase::~UIUnchartedFestivalRewardPurchase
          (UIUnchartedFestivalRewardPurchase *this)

{
  *(undefined ***)this = &PTR_GetClass_0677c9f0;
  *(undefined **)(this + 0xd8) = &DAT_0677cd40;
  UISingletonDialog<UIUnchartedFestivalRewardPurchase>::~UISingletonDialog
            ((UISingletonDialog<UIUnchartedFestivalRewardPurchase> *)this);
  return;
}


/* UIUnchartedFestivalRewardPurchase::~UIUnchartedFestivalRewardPurchase() */

void __thiscall
UIUnchartedFestivalRewardPurchase::~UIUnchartedFestivalRewardPurchase
          (UIUnchartedFestivalRewardPurchase *this)

{
  ~UIUnchartedFestivalRewardPurchase(this);
  AK::FreeHook(this);
  return;
}


/* UIUnchartedFestivalRewardPurchase::UIUnchartedFestivalRewardPurchase() */

void __thiscall
UIUnchartedFestivalRewardPurchase::UIUnchartedFestivalRewardPurchase
          (UIUnchartedFestivalRewardPurchase *this)

{
  UISingletonDialog<UIUnchartedFestivalRewardPurchase>::UISingletonDialog
            ((UISingletonDialog<UIUnchartedFestivalRewardPurchase> *)this);
  *(undefined ***)this = &PTR_GetClass_0677c9f0;
  *(undefined **)(this + 0xd8) = &DAT_0677cd40;
  return;
}


/* UIUnchartedFestivalRewardPurchase::ButtonDepress(int) */

void __thiscall
UIUnchartedFestivalRewardPurchase::ButtonDepress
          (UIUnchartedFestivalRewardPurchase *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  
  if (param_1 != 1000) {
    if (param_1 != 0x3e9) {
      return;
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    PurchaseBroker::RequestPayment(this_01,(string *)&DAT_06ada838,0);
  }
  UISingletonDialog<UIUnchartedFestivalRewardPurchase>::CloseDialog();
  return;
}


/* non-virtual thunk to UIUnchartedFestivalRewardPurchase::ButtonDepress(int) */

void __thiscall
UIUnchartedFestivalRewardPurchase::ButtonDepress
          (UIUnchartedFestivalRewardPurchase *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

