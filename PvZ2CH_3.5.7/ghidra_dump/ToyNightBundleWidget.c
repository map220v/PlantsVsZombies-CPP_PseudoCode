// Class: ToyNightBundleWidget


/* ToyNightBundleWidget::~ToyNightBundleWidget() */

void __thiscall ToyNightBundleWidget::~ToyNightBundleWidget(ToyNightBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066b82b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b85d8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ToyNightBundleWidget::~ToyNightBundleWidget() */

void __thiscall ToyNightBundleWidget::~ToyNightBundleWidget(ToyNightBundleWidget *this)

{
  ~ToyNightBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall ToyNightBundleWidget::Draw(ToyNightBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0xe8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (*(uint *)(this + 0xe4) < 99) {
    FUN_05478178(awStack_38,L"[SECRET_BUY_LEFT_STR]",auStack_40);
    TodReplaceNumberString(awStack_38,L"{NUMBER}",*(int *)(this + 0xe4));
    iVar1 = FUN_038c310c(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar1,*(int *)(this + 0x50),iVar1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleWidget::ButtonDepress(int) */

void __thiscall ToyNightBundleWidget::ButtonDepress(ToyNightBundleWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6e) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.WonderfulNight6");
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
        __s = "com.popcap.ios.chs.PVZ2.WonderfulNight30";
      }
      else if (iVar1 == 3) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.WonderfulNight45";
      }
      else if (iVar1 == 2) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.WonderfulNight98";
      }
      else {
        if (iVar1 != 4) goto LAB_038c5dac;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.WonderfulNight198";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_038c5dac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ToyNightBundleWidget::ButtonDepress(int) */

void __thiscall ToyNightBundleWidget::ButtonDepress(ToyNightBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ToyNightBundleWidget::OnBuyToyNight(int) */

void __thiscall ToyNightBundleWidget::OnBuyToyNight(ToyNightBundleWidget *this,int param_1)

{
  int iVar1;
  ToyNightMgr *this_00;
  long lVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  this_00 = (ToyNightMgr *)Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  ToyNightMgr::UpdateTokens(this_00);
  lVar2 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  puVar3 = (undefined4 *)FUN_038c1dd4(*(undefined8 *)(lVar2 + 0x38),(long)*(int *)(this + 0xe0));
  *puVar3 = *(undefined4 *)(this + 0xe4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightBundleWidget::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&, int) */

void __thiscall
ToyNightBundleWidget::InitView(ToyNightBundleWidget *this,int param_1,vector *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  Image *pIVar12;
  UIWidgetImage *this_00;
  PVZ2UIButton *pPVar13;
  long *plVar14;
  ulong uVar15;
  code *pcVar16;
  undefined1 auStack_a0 [8];
  wstring awStack_98 [8];
  int local_90 [6];
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_3;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("IMAGE_UI_TOYNIGHT_BUNDLE%d",(string *)local_40,(ulong)(param_1 + 1));
  uVar9 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0xe8) = uVar9;
  std::string::~string((string *)local_40);
  uVar1 = FUN_038c310c(0x2d);
  iVar2 = FUN_038c310c(7);
  iVar3 = FUN_038c310c(0x37);
  iVar4 = FUN_038c310c(0xa0);
  uVar15 = 0;
  while( true ) {
    iVar2 = iVar2 + iVar3;
    uVar9 = *(undefined8 *)param_2;
    uVar11 = FUN_038c1e0c(uVar9,*(undefined8 *)(param_2 + 8));
    if (uVar11 <= uVar15) break;
    piVar10 = (int *)FUN_038c1e88(uVar9,uVar15);
    plVar14 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,piVar10[1],false);
    (**(code **)(*plVar14 + 0x198))(plVar14,iVar2,iVar4,uVar1,uVar1);
    (**(code **)(*(long *)this + 0x60))(this,plVar14);
    uVar15 = uVar15 + 1;
  }
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7278);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,pIVar12);
  iVar3 = FUN_038c310c(0x28);
  iVar2 = *(int *)(this + 0x50);
  iVar5 = FUN_038c310c(0x14);
  uVar1 = FUN_038c310c(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar2 - iVar3,iVar4 - iVar5,uVar1,uVar1);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(string *)local_40,0.0);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  local_90[1] = 0x1e;
  local_90[0] = 6;
  local_90[2] = 0x62;
  local_90[3] = 0x2d;
  local_90[4] = 0xc6;
  FUN_05478178(awStack_98,L"[MONTHLY_CARD_PRICE]",auStack_a0);
  TodReplaceNumberString(awStack_98,L"{NUM}",local_90[*(int *)(this + 0xe0)]);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar13,0x6e,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar13;
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_98);
  nop();
  pPVar13 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab7418,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab7610,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar14 = *(long **)(this + 0xf0);
  uVar1 = FUN_038c310c(0x1e);
  uVar6 = FUN_038c310c(0xcb);
  uVar7 = FUN_038c310c(0x78);
  uVar8 = FUN_038c310c(0x2d);
  (**(code **)(*plVar14 + 0x198))(plVar14,uVar1,uVar6,uVar7,uVar8);
  plVar14 = *(long **)(this + 0xf0);
  pcVar16 = *(code **)(*plVar14 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar16)(plVar14,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (*(int *)(this + 0xe4) < 1) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToyNightBundleWidget::ToyNightBundleWidget() */

void __thiscall ToyNightBundleWidget::ToyNightBundleWidget(ToyNightBundleWidget *this)

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
  *(undefined ***)this = &PTR_GetClass_066b82b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b85d8;
  *(undefined8 *)(this + 0xf0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyToyNight);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ToyNightBundleWidget,void(ToyNightBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnBuyToyNight,&local_40);
  return;
}

