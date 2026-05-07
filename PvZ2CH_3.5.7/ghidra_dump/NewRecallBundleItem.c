// Class: NewRecallBundleItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleItem::buySuccess(int) */

void __thiscall NewRecallBundleItem::buySuccess(NewRecallBundleItem *this,int param_1)

{
  long *plVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x110) == param_1) &&
     (plVar1 = *(long **)(this + 0xe8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
    this_00 = *(PVZ2UIButton **)(this + 0xe8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleItem::ButtonDepress(int) */

void __thiscall NewRecallBundleItem::ButtonDepress(NewRecallBundleItem *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x32) {
    iVar1 = *(int *)(this + 0x110);
    if (iVar1 == 0xb) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallGemBundle6";
    }
    else if (iVar1 == 0xc) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallGemBundle30";
    }
    else if (iVar1 == 0xd) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallGemBundle68";
    }
    else if (iVar1 == 0x15) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallLiquidBundle6";
    }
    else if (iVar1 == 0x16) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallLiquidBundle30";
    }
    else if (iVar1 == 0x17) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallLiquidBundle68";
    }
    else if (iVar1 == 0x1f) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallPlantBundle6";
    }
    else if (iVar1 == 0x20) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallPlantBundle30";
    }
    else {
      if (iVar1 != 0x21) goto LAB_03a566f4;
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.RecallPlantBundle68";
    }
    std::string::string(asStack_10,__s);
    PurchaseBroker::RequestPayment(this_00,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03a566f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewRecallBundleItem::ButtonDepress(int) */

void __thiscall NewRecallBundleItem::ButtonDepress(NewRecallBundleItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* NewRecallBundleItem::NewRecallBundleItem() */

void __thiscall NewRecallBundleItem::NewRecallBundleItem(NewRecallBundleItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0670bb60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670be88;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xf0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,buySuccess);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewRecallBundleItem,void(NewRecallBundleItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::BundleBuySuccess,&local_40);
  return;
}


/* NewRecallBundleItem::~NewRecallBundleItem() */

void __thiscall NewRecallBundleItem::~NewRecallBundleItem(NewRecallBundleItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0670bb60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670be88;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldLevelPackageItem::~WorldLevelPackageItem((WorldLevelPackageItem *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewRecallBundleItem::~NewRecallBundleItem() */

void __thiscall NewRecallBundleItem::~NewRecallBundleItem(NewRecallBundleItem *this)

{
  ~NewRecallBundleItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleItem::init(NewRecallBundleReward const&) */

void __thiscall NewRecallBundleItem::init(NewRecallBundleItem *this,NewRecallBundleReward *param_1)

{
  int iVar1;
  int iVar2;
  PVZ2UIButton *this_00;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewRecallBundleReward::operator=((NewRecallBundleReward *)(this + 0xf0),param_1);
  iVar1 = *(int *)(this + 0x110);
  if (iVar1 == 0xb) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5f58);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0xc) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5ae0);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0xd) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5e10);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0x15) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5fa8);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0x16) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5b58);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0x17) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6050);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0x1f) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6078);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0x20) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac59e8);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  else if (iVar1 == 0x21) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5848);
    *(undefined8 *)(this + 0xe0) = uVar3;
  }
  TodStringTranslate(L"[PLANTTRIAL_BUY_BUTTON_NAME_1]");
  TodReplaceNumberString(awStack_40,L"{NUMBER}",*(int *)(param_1 + 0x1c));
  FUN_05476c50(awStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)awStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x32,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac5970,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ac5d10,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
  PVZ2UIButton::SetLabelText(this_00,awStack_80);
  pcVar4 = *(code **)(*(long *)this_00 + 800);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  (*pcVar4)(this_00,uVar3);
  iVar1 = FUN_03a55578(100);
  iVar2 = FUN_03a55578(0x32);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(*(int *)(this + 0x50) - iVar1) / 2,*(int *)(this + 0x54) - iVar2,iVar1,iVar2);
  if (param_1[0x18] != (NewRecallBundleReward)0x0) {
    (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_40);
    FUN_05476c50(awStack_40);
  }
  *(PVZ2UIButton **)(this + 0xe8) = this_00;
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewRecallBundleItem::Draw(Sexy::Graphics*) */

void __thiscall NewRecallBundleItem::Draw(NewRecallBundleItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  pIVar3 = *(Image **)(this + 0xe0);
  if (pIVar3 != (Image *)0x0) {
    iVar1 = FUN_03a55578(0);
    iVar2 = FUN_03a55578(10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar3,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar2);
  }
  nop();
  return;
}

