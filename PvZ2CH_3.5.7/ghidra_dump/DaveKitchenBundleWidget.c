// Class: DaveKitchenBundleWidget


/* DaveKitchenBundleWidget::~DaveKitchenBundleWidget() */

void __thiscall DaveKitchenBundleWidget::~DaveKitchenBundleWidget(DaveKitchenBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06642810;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06642b38;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveKitchenBundleWidget::~DaveKitchenBundleWidget() */

void __thiscall DaveKitchenBundleWidget::~DaveKitchenBundleWidget(DaveKitchenBundleWidget *this)

{
  ~DaveKitchenBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* DaveKitchenBundleWidget::OnBuyDaveKitchenBundle(int) */

void __thiscall
DaveKitchenBundleWidget::OnBuyDaveKitchenBundle(DaveKitchenBundleWidget *this,int param_1)

{
  UIDaveKitchen *this_00;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  this_00 = (UIDaveKitchen *)UISingletonDialog<UIDaveKitchen>::GetSingletonPtr();
  UIDaveKitchen::RefreshInfo(this_00);
  return;
}


/* DaveKitchenBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall DaveKitchenBundleWidget::Draw(DaveKitchenBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2b00);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2ab0;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2b28;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* DaveKitchenBundleWidget::DaveKitchenBundleWidget() */

void __thiscall DaveKitchenBundleWidget::DaveKitchenBundleWidget(DaveKitchenBundleWidget *this)

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
  *(undefined ***)this = &PTR_GetClass_06642810;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06642b38;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyDaveKitchenBundle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DaveKitchenBundleWidget,void(DaveKitchenBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyDaveKitchen,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenBundleWidget::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall
DaveKitchenBundleWidget::InitView(DaveKitchenBundleWidget *this,int param_1,vector *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  Image *pIVar11;
  UIWidgetImage *pUVar12;
  int *piVar13;
  long lVar14;
  UIWidgetText *pUVar15;
  ulong uVar16;
  long *plVar17;
  code *pcVar18;
  ulong uVar19;
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  int local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,300,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar9;
  FUN_05476c50(asStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06aa2930,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06aa2a58,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar17 = *(long **)(this + 0xe8);
  uVar2 = FUN_03494b84(0x21);
  uVar3 = FUN_03494b84(0xd8);
  uVar4 = FUN_03494b84(0x6e);
  uVar5 = FUN_03494b84(0x37);
  (**(code **)(*plVar17 + 0x198))(plVar17,uVar2,uVar3,uVar4,uVar5);
  plVar17 = *(long **)(this + 0xe8);
  pcVar18 = *(code **)(*plVar17 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar18)(plVar17,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  iVar6 = *(int *)(this + 0xe0);
  if (iVar6 == 0) {
    std::string::string(asStack_78,"50");
    Sexy::ToWString(asStack_78);
    pUVar15 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar15,(wstring *)local_40);
    FUN_05476c50((wstring *)local_40);
    std::string::~string(asStack_78);
    nop();
    uVar2 = FUN_03494b84(0x32);
    (**(code **)(*(long *)pUVar15 + 0x198))(pUVar15,5,0,uVar2,uVar2);
    UIWidgetText::SetFontIndex(pUVar15,0xd4);
    FUN_0349455c(pUVar15 + 0xe0);
    pcVar18 = *(code **)(*(long *)pUVar15 + 0x170);
    Sexy::Color::Color((Color *)local_40,1);
    (*pcVar18)(pUVar15,0,(wstring *)local_40);
    plVar17 = *(long **)(this + 0xe8);
    pUVar15[0x6d] = (UIWidgetText)0x0;
    (**(code **)(*plVar17 + 0x60))(plVar17,pUVar15);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2a10);
    pUVar12 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar12,pIVar11);
    uVar2 = FUN_03494b84(0x3c);
    uVar3 = FUN_03494b84(10);
    uVar4 = FUN_03494b84(0x1e);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar2,uVar3,uVar4,uVar4);
    local_40[0] = 2;
    UIWidgetImage::SetImageType(pUVar12,(wstring *)local_40,0.0);
    plVar17 = *(long **)(this + 0xe8);
    pUVar12[0x6d] = (UIWidgetImage)0x0;
    (**(code **)(*plVar17 + 0x60))(plVar17,pUVar12);
    cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)param_2);
    if (cVar1 == '\0') {
      piVar13 = (int *)FUN_03494384(*(undefined8 *)param_2,0);
      plVar17 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar13,0,false);
      uVar2 = FUN_03494b84(0x34);
      uVar3 = FUN_03494b84(0xa0);
      uVar4 = FUN_03494b84(0x23);
      (**(code **)(*plVar17 + 0x198))(plVar17,uVar2,uVar3,uVar4,uVar4);
      (**(code **)(*(long *)this + 0x60))(this,plVar17);
      lVar14 = FUN_03494384(*(undefined8 *)param_2,0);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar14 + 4));
      Sexy::ToWString(asStack_78);
      pUVar15 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar15,(wstring *)local_40);
      FUN_05476c50((wstring *)local_40);
      std::string::~string(asStack_78);
      uVar2 = FUN_03494b84(0x57);
      uVar3 = FUN_03494b84(0xa0);
      uVar4 = FUN_03494b84(0x23);
      (**(code **)(*(long *)pUVar15 + 0x198))(pUVar15,uVar2,uVar3,uVar4,uVar4);
      FUN_0349455c(pUVar15 + 0xe0);
      pcVar18 = *(code **)(*(long *)pUVar15 + 0x170);
      Sexy::Color::Color((Color *)local_40,1);
      (*pcVar18)(pUVar15,0,(wstring *)local_40);
      (**(code **)(*(long *)this + 0x60))(this,pUVar15);
    }
  }
  else if (iVar6 == 1) {
    pPVar9 = *(PVZ2UIButton **)(this + 0xe8);
    FUN_05478178(asStack_78,L"[MONTHLY_CARD_PRICE]",auStack_80);
    TodReplaceNumberString((wstring *)asStack_78,L"{NUM}",6);
    PVZ2UIButton::SetLabelText(pPVar9,(wstring *)local_40);
    FUN_05476c50((wstring *)local_40);
    FUN_05476c50(asStack_78);
    nop();
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2b80);
    pUVar12 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar12,pIVar11);
    uVar2 = FUN_03494b84(0x87);
    uVar3 = FUN_03494b84(0x82);
    uVar4 = FUN_03494b84(0x1e);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar2,uVar3,uVar4,uVar4);
    local_40[0] = 2;
    UIWidgetImage::SetImageType(pUVar12,(wstring *)local_40,0.0);
    uVar19 = 0;
    while( true ) {
      (**(code **)(*(long *)this + 0x60))(this,pUVar12);
      uVar10 = *(undefined8 *)param_2;
      uVar16 = FUN_0349435c(uVar10,*(undefined8 *)(param_2 + 8));
      if (uVar16 <= uVar19) break;
      piVar13 = (int *)FUN_03494384(uVar10,uVar19);
      plVar17 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar13,0,false);
      iVar6 = FUN_03494b84(10);
      iVar7 = FUN_03494b84(0x46);
      iVar8 = FUN_03494b84(0xf);
      uVar2 = FUN_03494b84(0xa0);
      uVar3 = FUN_03494b84(0x23);
      (**(code **)(*plVar17 + 0x198))
                (plVar17,iVar6 + (iVar7 + iVar8) * (int)uVar19,uVar2,uVar3,uVar3);
      (**(code **)(*(long *)this + 0x60))(this,plVar17);
      lVar14 = FUN_03494384(*(undefined8 *)param_2,uVar19);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar14 + 4));
      Sexy::ToWString(asStack_78);
      pUVar12 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText((UIWidgetText *)pUVar12,(wstring *)local_40);
      FUN_05476c50((wstring *)local_40);
      std::string::~string(asStack_78);
      iVar6 = FUN_03494b84(0x2d);
      iVar7 = FUN_03494b84(0x46);
      iVar8 = FUN_03494b84(0xf);
      uVar2 = FUN_03494b84(0xa0);
      uVar3 = FUN_03494b84(0x23);
      (**(code **)(*(long *)pUVar12 + 0x198))
                (pUVar12,iVar6 + (iVar7 + iVar8) * (int)uVar19,uVar2,uVar3,uVar3);
      FUN_0349455c((UIWidgetText *)(pUVar12 + 0xe0));
      pcVar18 = *(code **)(*(long *)pUVar12 + 0x170);
      Sexy::Color::Color((Color *)local_40,1);
      (*pcVar18)(pUVar12,0,(wstring *)local_40);
      uVar19 = uVar19 + 1;
    }
  }
  else if (iVar6 == 2) {
    pPVar9 = *(PVZ2UIButton **)(this + 0xe8);
    FUN_05478178(asStack_78,L"[MONTHLY_CARD_PRICE]",auStack_80);
    TodReplaceNumberString((wstring *)asStack_78,L"{NUM}",0x44);
    PVZ2UIButton::SetLabelText(pPVar9,(wstring *)local_40);
    FUN_05476c50((wstring *)local_40);
    FUN_05476c50(asStack_78);
    nop();
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2b80);
    pUVar12 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar12,pIVar11);
    uVar2 = FUN_03494b84(0x87);
    uVar3 = FUN_03494b84(0x82);
    uVar4 = FUN_03494b84(0x1e);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar2,uVar3,uVar4,uVar4);
    local_40[0] = iVar6;
    UIWidgetImage::SetImageType(pUVar12,(wstring *)local_40,0.0);
    (**(code **)(*(long *)this + 0x60))(this,pUVar12);
    uVar19 = 0;
    while( true ) {
      uVar10 = *(undefined8 *)param_2;
      uVar16 = FUN_0349435c(uVar10,*(undefined8 *)(param_2 + 8));
      if (uVar16 <= uVar19) break;
      piVar13 = (int *)FUN_03494384(uVar10,uVar19);
      plVar17 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar13,0,false);
      iVar6 = FUN_03494b84(10);
      iVar7 = FUN_03494b84(0x46);
      iVar8 = FUN_03494b84(0xf);
      uVar2 = FUN_03494b84(0xa0);
      uVar3 = FUN_03494b84(0x23);
      (**(code **)(*plVar17 + 0x198))
                (plVar17,iVar6 + (iVar7 + iVar8) * (int)uVar19,uVar2,uVar3,uVar3);
      (**(code **)(*(long *)this + 0x60))(this,plVar17);
      lVar14 = FUN_03494384(*(undefined8 *)param_2,uVar19);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar14 + 4));
      Sexy::ToWString(asStack_78);
      pUVar15 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar15,(wstring *)local_40);
      FUN_05476c50((wstring *)local_40);
      std::string::~string(asStack_78);
      iVar6 = FUN_03494b84(0x2d);
      iVar7 = FUN_03494b84(0x46);
      iVar8 = FUN_03494b84(0xf);
      uVar2 = FUN_03494b84(0xa0);
      uVar3 = FUN_03494b84(0x23);
      (**(code **)(*(long *)pUVar15 + 0x198))
                (pUVar15,iVar6 + (iVar7 + iVar8) * (int)uVar19,uVar2,uVar3,uVar3);
      FUN_0349455c(pUVar15 + 0xe0);
      pcVar18 = *(code **)(*(long *)pUVar15 + 0x170);
      Sexy::Color::Color((Color *)local_40,1);
      (*pcVar18)(pUVar15,0,(wstring *)local_40);
      (**(code **)(*(long *)this + 0x60))(this,pUVar15);
      uVar19 = uVar19 + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenBundleWidget::BuyBundleByGems() */

void __thiscall DaveKitchenBundleWidget::BuyBundleByGems(DaveKitchenBundleWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3080];
  string asStack_e0 [216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"key");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03494b28(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_e0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* DaveKitchenBundleWidget::ButtonDepress(int) */

void __thiscall DaveKitchenBundleWidget::ButtonDepress(DaveKitchenBundleWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 300) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      BuyBundleByGems(this);
    }
    else {
      if (iVar1 == 1) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.DaveKitchen6";
      }
      else {
        if (iVar1 != 2) goto LAB_034984d4;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.DaveKitchen68";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(this_00,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_034984d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DaveKitchenBundleWidget::ButtonDepress(int) */

void __thiscall DaveKitchenBundleWidget::ButtonDepress(DaveKitchenBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

