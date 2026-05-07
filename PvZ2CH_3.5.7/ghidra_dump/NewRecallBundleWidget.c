// Class: NewRecallBundleWidget


/* NewRecallBundleWidget::~NewRecallBundleWidget() */

void __thiscall NewRecallBundleWidget::~NewRecallBundleWidget(NewRecallBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0670bed0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670c1f8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewRecallBundleWidget::~NewRecallBundleWidget() */

void __thiscall NewRecallBundleWidget::~NewRecallBundleWidget(NewRecallBundleWidget *this)

{
  ~NewRecallBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleWidget::buySuccess(int) */

void __thiscall NewRecallBundleWidget::buySuccess(NewRecallBundleWidget *this,int param_1)

{
  long *plVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x29) {
    plVar1 = *(long **)(this + 0xe8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1,1);
      this_00 = *(PVZ2UIButton **)(this + 0xe8);
      TodStringTranslate(L"[PLANT_OBTAINED]");
      PVZ2UIButton::SetLabelText(this_00,awStack_10);
      FUN_05476c50(awStack_10);
    }
  }
  else if ((param_1 != 0) && (this[0xe0] == (NewRecallBundleWidget)0x0)) {
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleWidget::ButtonDepress(int) */

void __thiscall NewRecallBundleWidget::ButtonDepress(NewRecallBundleWidget *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3c) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.bearberryBundle128");
    PurchaseBroker::RequestPayment(this_01,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewRecallBundleWidget::ButtonDepress(int) */

void __thiscall NewRecallBundleWidget::ButtonDepress(NewRecallBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* NewRecallBundleWidget::NewRecallBundleWidget() */

void __thiscall NewRecallBundleWidget::NewRecallBundleWidget(NewRecallBundleWidget *this)

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
  *(undefined ***)this = &PTR_GetClass_0670bed0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670c1f8;
  this[0xe0] = (NewRecallBundleWidget)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,buySuccess);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewRecallBundleWidget,void(NewRecallBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BundleBuySuccess,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleWidget::init(NewRecallBundleData const&) */

void __thiscall
NewRecallBundleWidget::init(NewRecallBundleWidget *this,NewRecallBundleData *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UITabControl *this_00;
  Image *pIVar10;
  UITabContent *this_01;
  UITabContent *this_02;
  UITabContent *this_03;
  Widget *this_04;
  Widget *this_05;
  Widget *this_06;
  long lVar11;
  ulong uVar12;
  PVZ2UIButton *this_07;
  NewRecallBundleItem *this_08;
  NewRecallBundleReward *pNVar13;
  int iVar14;
  ulong uVar15;
  code *pcVar16;
  int iVar17;
  undefined8 uVar18;
  Widget *pWVar19;
  undefined1 auStack_80 [8];
  Insets local_78 [56];
  string local_40 [56];
  long local_8;
  
  uVar15 = 0;
  iVar14 = 0;
  iVar8 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = ::operator_new(0x110);
  UITabControl::UITabControl(this_00);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5ff8);
  AccessoryContent::SetDisplayImage((AccessoryContent *)this_00,pIVar10);
  UITabControl::SetType(this_00,4);
  uVar3 = FUN_03a55578(0);
  uVar4 = FUN_03a55578(100);
  iVar5 = FUN_03a55578(0xaa);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar3,uVar4,*(undefined4 *)(this + 0x50),*(int *)(this + 0x54) - iVar5);
  UITabControl::AddTab(this_00,1,(string *)&StringHelper::Empty);
  UITabControl::AddTab(this_00,2,(string *)&StringHelper::Empty);
  UITabControl::AddTab(this_00,3,(string *)&StringHelper::Empty);
  this_01 = (UITabContent *)UITabControl::GetTab(this_00,1);
  std::string::string(local_40,"HORIZONTAL");
  UITabContent::SetTabImage(this_01,local_40,true);
  std::string::~string(local_40);
  nop();
  TodStringTranslate(L"[RECALL_OFFER_BUNDLE_1]");
  UITabContent::SetTabName(this_01,(wstring *)local_40);
  FUN_05476c50(local_40);
  this_02 = (UITabContent *)UITabControl::GetTab(this_00,2);
  std::string::string(local_40,"HORIZONTAL");
  UITabContent::SetTabImage(this_02,local_40,true);
  std::string::~string(local_40);
  nop();
  TodStringTranslate(L"[RECALL_OFFER_BUNDLE_2]");
  UITabContent::SetTabName(this_02,(wstring *)local_40);
  FUN_05476c50(local_40);
  this_03 = (UITabContent *)UITabControl::GetTab(this_00,3);
  std::string::string(local_40,"HORIZONTAL");
  UITabContent::SetTabImage(this_03,local_40,true);
  std::string::~string(local_40);
  nop();
  TodStringTranslate(L"[RECALL_OFFER_BUNDLE_3]");
  UITabContent::SetTabName(this_03,(wstring *)local_40);
  FUN_05476c50(local_40);
  this_04 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_04);
  (**(code **)(*(long *)this_04 + 0x198))
            (this_04,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  this_05 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_05);
  (**(code **)(*(long *)this_05 + 0x198))
            (this_05,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  this_06 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_06);
  (**(code **)(*(long *)this_06 + 0x198))
            (this_06,0,0,*(undefined4 *)(this_03 + 0x50),*(undefined4 *)(this_03 + 0x54));
  iVar6 = FUN_03a55578(0xf);
  iVar7 = FUN_03a55578(10);
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  iVar9 = iVar6 * -2 + *(int *)(this_01 + 0x54);
  iVar2 = (*(int *)(this_01 + 0x50) + iVar7 * -2 + iVar6 * -2) / 3;
  iVar7 = iVar2 + iVar7;
  lVar11 = FUN_03a54224(uVar18,*(undefined8 *)(param_1 + 0x20));
  iVar5 = iVar14;
  iVar17 = iVar8;
  if (lVar11 != 0) {
    do {
      lVar11 = FUN_03a54254(uVar18,uVar15);
      if (*(char *)(lVar11 + 0x18) != '\0') {
        iVar17 = 1;
      }
      Sexy::Insets::Insets(local_78);
      uVar18 = *(undefined8 *)(param_1 + 0x18);
      lVar11 = FUN_03a54254(uVar18,uVar15);
      iVar1 = *(int *)(lVar11 + 0x20);
      if (iVar1 - 10U < 10) {
        iVar1 = iVar7 * iVar14;
        iVar14 = iVar14 + 1;
        Sexy::Insets::Insets((Insets *)local_40,iVar6 + iVar1,iVar6,iVar2,iVar9);
        pWVar19 = this_04;
LAB_03a5a16c:
        this_08 = ::operator_new(0x118);
        NewRecallBundleItem::NewRecallBundleItem(this_08);
        (**(code **)(*(long *)this_08 + 0x1a0))(this_08,local_78);
        pNVar13 = (NewRecallBundleReward *)FUN_03a54254(*(undefined8 *)(param_1 + 0x18),uVar15);
        NewRecallBundleItem::init(this_08,pNVar13);
        (**(code **)(*(long *)pWVar19 + 0x60))(pWVar19,this_08);
        uVar18 = *(undefined8 *)(param_1 + 0x18);
      }
      else {
        if (iVar1 - 0x14U < 10) {
          iVar1 = iVar7 * iVar5;
          iVar5 = iVar5 + 1;
          Sexy::Insets::Insets((Insets *)local_40,iVar6 + iVar1,iVar6,iVar2,iVar9);
          pWVar19 = this_05;
          goto LAB_03a5a16c;
        }
        if (iVar1 - 0x1eU < 10) {
          iVar1 = iVar7 * iVar8;
          iVar8 = iVar8 + 1;
          Sexy::Insets::Insets((Insets *)local_40,iVar6 + iVar1,iVar6,iVar2,iVar9);
          pWVar19 = this_06;
          goto LAB_03a5a16c;
        }
        if (iVar1 == 0x29) {
          this[0xe0] = *(NewRecallBundleWidget *)(lVar11 + 0x18);
        }
      }
      uVar15 = uVar15 + 1;
      uVar12 = FUN_03a54224(uVar18,*(undefined8 *)(param_1 + 0x20));
    } while (uVar15 < uVar12);
  }
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_05);
  (**(code **)(*(long *)this_03 + 0x60))(this_03,this_06);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178(local_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  this_07 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_07,0x3c,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)local_40);
  FUN_05476c50(local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5970,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ac5d10,3);
  PVZ2UIButton::SetDialogStates(this_07,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
  TodStringTranslate(L"[RECALL_OFFER_BEAR_BUNDLE_BUY]");
  PVZ2UIButton::SetLabelText(this_07,(wstring *)local_40);
  FUN_05476c50(local_40);
  pcVar16 = *(code **)(*(long *)this_07 + 800);
  uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  (*pcVar16)(this_07,uVar18);
  iVar8 = FUN_03a55578(0x78);
  iVar14 = *(int *)(this + 0x50);
  iVar9 = FUN_03a55578(0x39);
  iVar5 = *(int *)(this + 0x54);
  uVar3 = FUN_03a55578(0x32);
  (**(code **)(*(long *)this_07 + 0x198))(this_07,iVar14 - iVar8,iVar5 - iVar9,iVar8,uVar3);
  if (this[0xe0] == (NewRecallBundleWidget)0x0) {
    if (iVar17 == 0) {
      (**(code **)(*(long *)this_07 + 0x188))(this_07,1);
    }
  }
  else {
    (**(code **)(*(long *)this_07 + 0x188))(this_07,1);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_07,(wstring *)local_40);
    FUN_05476c50(local_40);
  }
  *(PVZ2UIButton **)(this + 0xe8) = this_07;
  (**(code **)(*(long *)this + 0x60))(this,this_07);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall NewRecallBundleWidget::Draw(NewRecallBundleWidget *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  Color aCStack_a8 [16];
  Insets aIStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5c08);
  iVar2 = FUN_03a55578(0x46);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),iVar2);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5d90);
  iVar3 = FUN_03a55578(200);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_03a55578(0x28);
  iVar5 = FUN_03a55578(0xb4);
  iVar6 = FUN_03a55578(0x19);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2 - iVar3,iVar4,iVar5,iVar6);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a53f58(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    TodStringTranslate(L"[TOTAL_LOGIN_DAYS]");
    iVar2 = ActiveItem::GetLeftDays(aAStack_88);
    TodReplaceNumberString((wstring *)aIStack_98,L"{DAY_COUNT}",iVar2);
    FUN_05476c50((wstring *)aIStack_98);
    iVar3 = FUN_03a55578(0x6e);
    iVar2 = *(int *)(this + 0x50);
    iVar4 = FUN_03a55578(0x28);
    iVar5 = FUN_03a55578(0x5a);
    iVar6 = FUN_03a55578(0x19);
    Sexy::Insets::Insets((Insets *)aCStack_a8,iVar2 - iVar3,iVar4,iVar5,iVar6);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_98,1);
    WriteWordInRect(param_1,auStack_b0,(Insets *)aCStack_a8,uVar8,(wstring *)aIStack_98,5,1);
    FUN_05476c50(auStack_b0);
  }
  iVar3 = FUN_03a55578(0x41);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = FUN_03a55578(0xf0);
  Sexy::Insets::Insets(aIStack_98,0,iVar2 - iVar3,iVar4,iVar3);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5cc0);
  Draw3SliceImage(param_1,aIStack_98,uVar8);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5810);
  iVar3 = FUN_03a55578(0x19);
  iVar4 = FUN_03a55578(0x3e);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_03a55578(0xbe);
  iVar6 = FUN_03a55578(0x3a);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3,iVar2 - iVar4,iVar5,iVar6);
  TodStringTranslate(L"[RECALL_OFFER_BEAR_BUY]");
  iVar3 = FUN_03a55578(0xdc);
  iVar4 = FUN_03a55578(0x41);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_03a55578(200);
  Sexy::Insets::Insets(aIStack_98,iVar3,iVar2 - iVar4,iVar5,iVar4);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_a8,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_b0,aIStack_98,uVar8,aCStack_a8,5,1);
  FUN_05476c50(auStack_b0);
  nop();
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

