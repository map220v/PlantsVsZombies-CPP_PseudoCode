// Class: BattleOrderBundleWidget


/* BattleOrderBundleWidget::UpdateButtonState() */

void __thiscall BattleOrderBundleWidget::UpdateButtonState(BattleOrderBundleWidget *this)

{
  TemplateBundleWidget::UpdateButtonState((TemplateBundleWidget *)this);
  if (*(int *)(this + 0xe0) == 0) {
    (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110));
  }
  return;
}


/* BattleOrderBundleWidget::DrawBundleLimit(Sexy::Graphics*) */

void __thiscall
BattleOrderBundleWidget::DrawBundleLimit(BattleOrderBundleWidget *this,Graphics *param_1)

{
  if (*(int *)(this + 0xe0) == 0) {
    return;
  }
  TemplateBundleWidget::DrawBundleLimit((TemplateBundleWidget *)this,param_1);
  return;
}


/* BattleOrderBundleWidget::~BattleOrderBundleWidget() */

void __thiscall BattleOrderBundleWidget::~BattleOrderBundleWidget(BattleOrderBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06701da0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06702108;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  TemplateBundleWidget::~TemplateBundleWidget((TemplateBundleWidget *)this);
  return;
}


/* BattleOrderBundleWidget::~BattleOrderBundleWidget() */

void __thiscall BattleOrderBundleWidget::~BattleOrderBundleWidget(BattleOrderBundleWidget *this)

{
  ~BattleOrderBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderBundleWidget::DrawBundleCenter(Sexy::Graphics*) */

void __thiscall
BattleOrderBundleWidget::DrawBundleCenter(BattleOrderBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_40,L"[BATTLE_ORDER_GET_REWARD_LEAST]",auStack_48);
  TodReplaceNumberString(awStack_40,L"{NUM}",*(int *)(this + 0x118));
  TodStringTranslate(awStack_38);
  iVar1 = FUN_03a2d914(0x37);
  iVar2 = FUN_03a2d914(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aCStack_18,5,0);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  FUN_05476c50(awStack_40);
  nop();
  TemplateBundleWidget::DrawBundleCenterOffSet((TemplateBundleWidget *)this,param_1,0x28,0.8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderBundleWidget::OnPurchaseButtonDepress() */

void __thiscall BattleOrderBundleWidget::OnPurchaseButtonDepress(BattleOrderBundleWidget *this)

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
    std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.summercamp6");
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
      __s = "com.popcap.ios.chs.PVZ2.summercamp8";
    }
    else if (iVar1 == 2) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.summercamp18";
    }
    else if (iVar1 == 3) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.summercamp45";
    }
    else {
      if (iVar1 != 4) goto LAB_03a2f6dc;
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.summercamp78";
    }
    std::string::string(asStack_10,__s);
    PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03a2f6dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderBundleWidget::BattleOrderBundleWidget() */

void __thiscall BattleOrderBundleWidget::BattleOrderBundleWidget(BattleOrderBundleWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  TemplateBundleWidget::TemplateBundleWidget((TemplateBundleWidget *)this);
  *(undefined4 *)(this + 0x118) = 2;
  *(undefined ***)this = &PTR_GetClass_06701da0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06702108;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyExp);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<BattleOrderBundleWidget,void(BattleOrderBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyBattleOrderBundle,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderBundleWidget::DrawBundleRewards(Sexy::Graphics*) */

void __thiscall
BattleOrderBundleWidget::DrawBundleRewards(BattleOrderBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  long lVar9;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  GraphicsAutoState aGStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  pIVar8 = *(Image **)(this + 0x108);
  local_8 = ___stack_chk_guard;
  lVar9 = 0;
  if (pIVar8 != (Image *)0x0) {
    iVar6 = *(int *)(pIVar8 + 0x38);
    iVar1 = FUN_03a2d914(0xe6);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,(*(int *)(this + 0x50) - iVar6) / 2,
               iVar1 - *(int *)(pIVar8 + 0x3c) / 2,iVar6,*(int *)(pIVar8 + 0x3c));
    lVar9 = *(long *)(this + 0x108);
  }
  iVar2 = FUN_03a2d914(0x3c);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_03a2d914(0xe6);
  iVar1 = *(int *)(lVar9 + 0x3c);
  iVar4 = FUN_03a2d914(0x78);
  iVar5 = FUN_03a2d914(0x28);
  Sexy::Insets::Insets((Insets *)&local_28,iVar6 / 2 - iVar2,iVar3 + iVar1 / 2,iVar4,iVar5);
  iVar6 = *(int *)(this + 0xe0);
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      iVar1 = 10;
    }
    else if (iVar6 == 2) {
      iVar1 = 0x19;
    }
    else if (iVar6 == 3) {
      iVar1 = 0x4b;
    }
    else {
      iVar1 = 999;
      if (iVar6 == 4) {
        iVar1 = 0x96;
      }
    }
    FUN_05478178(awStack_40,L"[SECRET_BUY_STR]",auStack_48);
    TodReplaceNumberString(awStack_40,L"{NUMBER}",iVar1);
    TodStringTranslate(awStack_38);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,aGStack_30,(Insets *)&local_28,uVar7,aCStack_18,5,0);
    FUN_05476c50(aGStack_30);
    FUN_05476c50(awStack_38);
    FUN_05476c50(awStack_40);
    nop();
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Color::Color(aCStack_18,2);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3e88);
    iVar6 = FUN_03a2d914(8);
    iVar1 = FUN_03a2d914(2);
    iVar2 = FUN_03a2d914(0x10);
    iVar3 = FUN_03a2d914(3);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,local_28 + iVar6,(local_24 + local_1c / 2) - iVar1,local_20 - iVar2,
               iVar3);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BattleOrderBundleWidget::OnBuyExp(int) */

void __thiscall BattleOrderBundleWidget::OnBuyExp(BattleOrderBundleWidget *this,int param_1)

{
  int iVar1;
  UIBattleOrder *this_00;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xe0);
  if (iVar2 != param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if ((iVar1 + -1 < 1) && (iVar2 != 0)) {
    (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
    iVar2 = *(int *)(this + 0xe0);
  }
  this_00 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  UIBattleOrder::BuyBundleIndex(this_00,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderBundleWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
BattleOrderBundleWidget::DrawAll
          (BattleOrderBundleWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  int iVar6;
  Image *local_30;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar1 = *(int *)(this + 0x50);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac43a8);
  iVar6 = *(int *)(lVar5 + 0x38);
  iVar2 = FUN_03a2d914(0xe6);
  iVar4 = *(int *)(*(long *)(this + 0x108) + 0x3c);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac43a8);
  iVar3 = FUN_03a2d914(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 - iVar6,iVar2 + iVar4 / 2,*(int *)(lVar5 + 0x38),iVar3);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 1) {
    local_30 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac43a8);
    iVar6 = local_14;
    iVar1 = local_18;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3fa0;
    if ((iVar1 != 2) && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3d70, iVar1 != 3)) {
      if (iVar1 != 4) goto LAB_03a31450;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3ff8;
    }
    local_30 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar6 = local_14;
    iVar1 = local_18;
  }
  iVar4 = FUN_03a2d914(10);
  Sexy::Graphics::DrawImage(param_2,local_30,iVar1,iVar6 - iVar4);
LAB_03a31450:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderBundleWidget::Init(int) */

void __thiscall BattleOrderBundleWidget::Init(BattleOrderBundleWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UIBattleOrder *this_00;
  undefined8 uVar4;
  int local_3c;
  wstring awStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  int local_20 [2];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::Init((TemplateBundleWidget *)this,param_1);
  this[0x59] = (BattleOrderBundleWidget)0x0;
  FUN_05476574(awStack_38);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    FUN_05478178((ActivityTypeID *)local_20,L"[SECRET_BUY_STR]",asStack_28);
    TodReplaceNumberString((wstring *)local_20,L"{NUMBER}",6);
    TodStringTranslate((wstring *)asStack_18);
    FUN_054766c8(awStack_38,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
    FUN_05476c50((ActivityTypeID *)local_20);
    nop();
    *(undefined4 *)(this + 0x118) = 2;
  }
  else if (iVar1 == 1) {
    FUN_05478178((ActivityTypeID *)local_20,L"[SECRET_BUY_STR]",asStack_28);
    TodReplaceNumberString((wstring *)local_20,L"{NUMBER}",8);
    TodStringTranslate((wstring *)asStack_18);
    FUN_054766c8(awStack_38,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
    FUN_05476c50((ActivityTypeID *)local_20);
    nop();
    *(undefined4 *)(this + 0x118) = 4;
  }
  else if (iVar1 == 2) {
    FUN_05478178((ActivityTypeID *)local_20,L"[SECRET_BUY_STR]",asStack_28);
    TodReplaceNumberString((wstring *)local_20,L"{NUMBER}",0x12);
    TodStringTranslate((wstring *)asStack_18);
    FUN_054766c8(awStack_38,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
    FUN_05476c50((ActivityTypeID *)local_20);
    nop();
    *(undefined4 *)(this + 0x118) = 10;
  }
  else if (iVar1 == 3) {
    FUN_05478178((ActivityTypeID *)local_20,L"[SECRET_BUY_STR]",asStack_28);
    TodReplaceNumberString((wstring *)local_20,L"{NUMBER}",0x2d);
    TodStringTranslate((wstring *)asStack_18);
    FUN_054766c8(awStack_38,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
    FUN_05476c50((ActivityTypeID *)local_20);
    nop();
    *(undefined4 *)(this + 0x118) = 0x1e;
  }
  else if (iVar1 == 4) {
    FUN_05478178((ActivityTypeID *)local_20,L"[SECRET_BUY_STR]",asStack_28);
    TodReplaceNumberString((wstring *)local_20,L"{NUMBER}",0x4e);
    TodStringTranslate((wstring *)asStack_18);
    FUN_054766c8(awStack_38,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
    FUN_05476c50((ActivityTypeID *)local_20);
    nop();
    *(undefined4 *)(this + 0x118) = 0x3c;
  }
  PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x110),awStack_38);
  iVar1 = *(int *)(this + 0x118);
  this_00 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  iVar3 = UIBattleOrder::GetExperienceBase(this_00);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = 1000 / iVar3;
  }
  *(int *)(this + 0x118) = iVar1 * iVar2;
  std::string::string(asStack_10,"IMAGE_UI_BATTLEORDER_BUNDLE_BACKGROUND");
  uVar4 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xf0) = uVar4;
  std::string::~string(asStack_10);
  nop();
  local_20[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_20);
  std::operator+("IMAGE_UI_BATTLEORDER_BUNDLE_TITLE",asStack_18);
  uVar4 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xf8) = uVar4;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  local_20[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_20);
  std::operator+("IMAGE_UI_BATTLEORDER_BUNDLE_IMAGE",asStack_18);
  uVar4 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x100) = uVar4;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (*(int *)(this + 0xe0) == 0) {
    local_20[0] = 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_20);
    std::operator+("IMAGE_UI_BATTLEORDER_BUNDLE_DESCRIPTION",asStack_18);
    uVar4 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0x108) = uVar4;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  else {
    local_3c = *(int *)(this + 0xe0) + 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
    std::operator+("IMAGE_UI_BATTLEORDER_BUNDLE_DESCRIPTION",asStack_30);
    std::operator+(asStack_28,"_");
    UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
    UIBattleOrder::GetThemeVersionSuffixUpper();
    std::operator+((string *)local_20,asStack_18);
    uVar4 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0x108) = uVar4;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string((string *)local_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  FUN_05476c50(awStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

