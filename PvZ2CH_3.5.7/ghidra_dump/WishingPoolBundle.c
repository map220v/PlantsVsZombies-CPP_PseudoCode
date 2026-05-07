// Class: WishingPoolBundle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolBundle::DrawBundleTitle(Sexy::Graphics*) */

void __thiscall WishingPoolBundle::DrawBundleTitle(WishingPoolBundle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf8) != 0) {
    iVar1 = FUN_03451b10(0x1e);
    iVar2 = FUN_03451b10(0);
    iVar3 = FUN_03451b10(0x3c);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50) - iVar3,iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolBundle::OnPurchaseButtonDepress() */

void __thiscall WishingPoolBundle::OnPurchaseButtonDepress(WishingPoolBundle *this)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var2);
    std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.TreviFountain06");
    PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    if (iVar1 == 1) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.TreviFountain68";
    }
    else if (iVar1 == 2) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.TreviFountain328";
    }
    else {
      if (iVar1 != 3) goto LAB_0345251c;
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.TreviFountain648";
    }
    std::string::string(asStack_10,__s);
    PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_0345251c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WishingPoolBundle::WishingPoolBundle() */

void __thiscall WishingPoolBundle::WishingPoolBundle(WishingPoolBundle *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  TemplateBundleWidget::TemplateBundleWidget((TemplateBundleWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06634f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066352f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyWishBundle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WishingPoolBundle,void(WishingPoolBundle::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyWishingPool,&local_40);
  return;
}


/* WishingPoolBundle::~WishingPoolBundle() */

void __thiscall WishingPoolBundle::~WishingPoolBundle(WishingPoolBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_06634f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066352f8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x118));
  TemplateBundleWidget::~TemplateBundleWidget((TemplateBundleWidget *)this);
  return;
}


/* WishingPoolBundle::~WishingPoolBundle() */

void __thiscall WishingPoolBundle::~WishingPoolBundle(WishingPoolBundle *this)

{
  ~WishingPoolBundle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolBundle::SetData(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall WishingPoolBundle::SetData(WishingPoolBundle *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  UIWidgetText *this_00;
  ulong uVar10;
  UIWidgetImage *this_01;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  code *pcVar14;
  string asStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xe4) = param_1;
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x118),param_2);
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x118);
    uVar10 = FUN_03450f08(uVar11,*(undefined8 *)(this + 0x120));
    if (uVar10 <= uVar13) break;
    piVar7 = (int *)FUN_03450f1c(uVar11,uVar13);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,0,false);
    iVar1 = FUN_03451b10(0x14);
    iVar2 = FUN_03451b10(0x5a);
    uVar3 = FUN_03451b10(0xc3);
    uVar4 = FUN_03451b10(0x1e);
    iVar12 = (int)uVar13;
    (**(code **)(*plVar8 + 0x198))(plVar8,iVar1 + iVar2 * iVar12,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,plVar8);
    lVar9 = FUN_03450f1c(*(undefined8 *)(this + 0x118),uVar13);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar9 + 4));
    Sexy::ToWString(asStack_20);
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,awStack_18);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    iVar1 = FUN_03451b10(0x37);
    iVar2 = FUN_03451b10(0x5a);
    uVar3 = FUN_03451b10(0xc3);
    uVar4 = FUN_03451b10(0x3c);
    uVar5 = FUN_03451b10(0x1e);
    uVar13 = uVar13 + 1;
    (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar1 + iVar2 * iVar12,uVar3,uVar4,uVar5);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    FUN_03450d18(this_00 + 0xe8,uVar11);
    FUN_03450d20(this_00 + 0xe0,3);
    pcVar14 = *(code **)(*(long *)this_00 + 0x170);
    Sexy::Color::Color((Color *)awStack_18,1);
    (*pcVar14)(this_00,0,awStack_18);
    lVar9 = *(long *)this;
    this_00[0x6d] = (UIWidgetText)0x0;
    (**(code **)(lVar9 + 0x60))(this,this_00);
  }
  std::string::string((string *)awStack_18,"IMAGE_UI_WISHINGPOOL_GIFT");
  this_01 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_01,(string *)awStack_18);
  std::string::~string((string *)awStack_18);
  nop();
  uVar3 = FUN_03451b10(0xa0);
  uVar4 = FUN_03451b10(0xa5);
  uVar5 = FUN_03451b10(0x27);
  uVar6 = FUN_03451b10(0x26);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  (**(code **)(*(long *)this + 0x348))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WishingPoolBundle::OnBuyWishBundle(int) */

void __thiscall WishingPoolBundle::OnBuyWishBundle(WishingPoolBundle *this,int param_1)

{
  int iVar1;
  UIWishingPool *this_00;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
  }
  this_00 = (UIWishingPool *)UISingletonDialog<UIWishingPool>::GetSingletonPtr();
  UIWishingPool::Refresh(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolBundle::Init(int) */

void __thiscall WishingPoolBundle::Init(WishingPoolBundle *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  PVZ2UIButton *this_00;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  int local_80 [2];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::Init((TemplateBundleWidget *)this,param_1);
  FUN_05476574(awStack_88);
  iVar2 = *(int *)(this + 0xe0);
  if (iVar2 == 0) {
    FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar2 = 6;
  }
  else if (iVar2 == 1) {
    FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar2 = 0x44;
  }
  else if (iVar2 == 2) {
    FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar2 = 0x148;
  }
  else {
    if (iVar2 != 3) goto LAB_03459b34;
    FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar2 = 0x288;
  }
  TodReplaceNumberString((wstring *)local_80,L"{NUMBER}",iVar2);
  TodStringTranslate((wstring *)asStack_78);
  FUN_054766c8(awStack_88,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50((wstring *)asStack_78);
  FUN_05476c50((ActivityTypeID *)local_80);
  nop();
LAB_03459b34:
  PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x110),awStack_88);
  this_00 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06aa1140,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06aa11f8,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  std::string::string(asStack_40,"IMAGE_UI_WISHINGPOOL_BUNDLE_BG");
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xf0) = uVar1;
  std::string::~string(asStack_40);
  nop();
  local_80[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("IMAGE_UI_WISHINGPOOL_BUNDLE_TITLE",asStack_78);
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xf8) = uVar1;
  std::string::~string(asStack_40);
  std::string::~string(asStack_78);
  local_80[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("IMAGE_UI_WISHINGPOOL_BUNDLE",asStack_78);
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0x100) = uVar1;
  std::string::~string(asStack_40);
  std::string::~string(asStack_78);
  std::string::string(asStack_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_WISHING_COIN");
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0x108) = uVar1;
  std::string::~string(asStack_40);
  nop();
  FUN_05476c50(awStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

