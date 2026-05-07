// Class: GrowthPackageBundle


/* GrowthPackageBundle::~GrowthPackageBundle() */

void __thiscall GrowthPackageBundle::~GrowthPackageBundle(GrowthPackageBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_067064d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067067f8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GrowthPackageBundle::~GrowthPackageBundle() */

void __thiscall GrowthPackageBundle::~GrowthPackageBundle(GrowthPackageBundle *this)

{
  ~GrowthPackageBundle(this);
  AK::FreeHook(this);
  return;
}


/* GrowthPackageBundle::OnBuyGrowthPackage(int) */

void __thiscall GrowthPackageBundle::OnBuyGrowthPackage(GrowthPackageBundle *this,int param_1)

{
  int iVar1;
  UIGrowthPackage *this_00;
  
  if (*(int *)(this + 0xe0) == param_1) {
    iVar1 = *(int *)(this + 0xe4);
    *(int *)(this + 0xe4) = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
    }
    this_00 = (UIGrowthPackage *)UISingletonDialog<UIGrowthPackage>::GetSingletonPtr();
    if (this_00 != (UIGrowthPackage *)0x0) {
      iVar1 = *(int *)(this + 0xe0);
      if (iVar1 == 0) {
        UIGrowthPackage::AddIntegral(this_00,1);
        return;
      }
      if (iVar1 == 1) {
        UIGrowthPackage::AddIntegral(this_00,8);
        return;
      }
      if (iVar1 == 2) {
        UIGrowthPackage::AddIntegral(this_00,0x23);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrowthPackageBundle::ButtonDepress(int) */

void __thiscall GrowthPackageBundle::ButtonDepress(GrowthPackageBundle *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 99) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.GrowthPackage1");
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
        __s = "com.popcap.ios.chs.PVZ2.GrowthPackage6";
      }
      else {
        if (iVar1 != 2) goto LAB_03a45720;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GrowthPackage30";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_03a45720:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GrowthPackageBundle::ButtonDepress(int) */

void __thiscall GrowthPackageBundle::ButtonDepress(GrowthPackageBundle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* GrowthPackageBundle::GrowthPackageBundle() */

void __thiscall GrowthPackageBundle::GrowthPackageBundle(GrowthPackageBundle *this)

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
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_067064d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067067f8;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyGrowthPackage);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GrowthPackageBundle,void(GrowthPackageBundle::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyGrowthPackage,&local_40);
  return;
}


/* GrowthPackageBundle::Draw(Sexy::Graphics*) */

void __thiscall GrowthPackageBundle::Draw(GrowthPackageBundle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar5;
  
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4f40);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4bf8;
  }
  else if (iVar1 == 1) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4ca0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4c20;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4ff0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4f18;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_03a44d08(0x14);
  iVar2 = FUN_03a44d08(8);
  iVar3 = FUN_03a44d08(0xa0);
  iVar4 = FUN_03a44d08(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrowthPackageBundle::InitData(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&, int) */

void __thiscall
GrowthPackageBundle::InitData(GrowthPackageBundle *this,int param_1,vector *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  PVZ2UIButton *this_00;
  undefined8 uVar7;
  UIWidgetImage *this_01;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  code *pcVar13;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  int local_80 [2];
  string asStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_3;
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)param_2);
  if (cVar1 == '\0') {
    uVar11 = 0;
    piVar8 = (int *)FUN_03a448ec(*(undefined8 *)param_2);
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,0,false);
    iVar5 = FUN_03a44d08(0x39);
    uVar2 = FUN_03a44d08(0x2b);
    uVar3 = FUN_03a44d08(0x55);
    pcVar13 = *(code **)(*plVar12 + 0x198);
    while( true ) {
      (*pcVar13)(plVar12,iVar5,uVar2,uVar3,uVar3);
      (**(code **)(*(long *)this + 0x60))(this,plVar12);
      uVar7 = *(undefined8 *)param_2;
      uVar9 = FUN_03a448f8(uVar7,*(undefined8 *)(param_2 + 8));
      if (uVar9 <= uVar11) break;
      piVar8 = (int *)FUN_03a448ec(uVar7,uVar11);
      plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
      iVar5 = FUN_03a44d08(0x3c);
      iVar6 = FUN_03a44d08(0x28);
      uVar2 = FUN_03a44d08(0x82);
      uVar3 = FUN_03a44d08(0x23);
      iVar5 = iVar5 + iVar6 * (int)uVar11;
      pcVar13 = *(code **)(*plVar12 + 0x198);
      uVar11 = uVar11 + 1;
    }
    FUN_05476574(awStack_88);
    iVar5 = *(int *)(this + 0xe0);
    if (iVar5 != 0) goto LAB_03a45bec;
LAB_03a45f38:
    FUN_05478178(local_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar5 = 1;
  }
  else {
    FUN_05476574(awStack_88);
    iVar5 = *(int *)(this + 0xe0);
    if (iVar5 == 0) goto LAB_03a45f38;
LAB_03a45bec:
    if (iVar5 == 1) {
      FUN_05478178(local_80,L"[SECRET_BUY_STR]",auStack_90);
      iVar5 = 6;
    }
    else {
      if (iVar5 != 2) goto LAB_03a45c08;
      FUN_05478178(local_80,L"[SECRET_BUY_STR]",auStack_90);
      iVar5 = 0x1e;
    }
  }
  TodReplaceNumberString((wstring *)local_80,L"{NUMBER}",iVar5);
  TodStringTranslate((wstring *)asStack_78);
  FUN_054766c8(awStack_88,local_40);
  FUN_05476c50(local_40);
  FUN_05476c50((wstring *)asStack_78);
  FUN_05476c50((wstring *)local_80);
  nop();
LAB_03a45c08:
  Sexy::Color::Color((Color *)local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,99,(ButtonListener *)(this + 0xd8),awStack_88,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xe8) = this_00;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac4fc0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ac4ef0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar12 = *(long **)(this + 0xe8);
  uVar2 = FUN_03a44d08(0x2d);
  uVar3 = FUN_03a44d08(0xaa);
  uVar4 = FUN_03a44d08(0x6e);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar2,uVar3,uVar4,uVar2);
  plVar12 = *(long **)(this + 0xe8);
  pcVar13 = *(code **)(*plVar12 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  (*pcVar13)(plVar12,uVar7);
  lVar10 = *(long *)(this + 0xe8);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar10 + 0x59) = 0;
  (*pcVar13)(this,lVar10);
  local_80[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("IMAGE_UI_ASSEMBLE_GROWTH_BUNDLE_GIFT",asStack_78);
  this_01 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_01,(string *)local_40);
  std::string::~string((string *)local_40);
  std::string::~string(asStack_78);
  uVar2 = FUN_03a44d08(0x55);
  iVar5 = FUN_03a44d08(10);
  uVar3 = FUN_03a44d08(0x3c);
  uVar4 = FUN_03a44d08(0x32);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,-iVar5,uVar3,uVar4);
  this_01[0x6d] = (UIWidgetImage)0x0;
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_01,(string *)local_40,0.0);
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_01);
  if (*(int *)(this + 0xe4) < 1) {
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  }
  FUN_05476c50(awStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

