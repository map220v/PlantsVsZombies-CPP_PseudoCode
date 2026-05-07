// Class: UIUpdateNews


/* UIUpdateNews::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIUpdateNews::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIUpdateNews::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIUpdateNews::ScrollTargetReached(UIUpdateNews *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIUpdateNews::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIUpdateNews::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIUpdateNews::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIUpdateNews::ScrollTargetInterrupted(UIUpdateNews *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateNews::GetLayoutName() */

void __thiscall UIUpdateNews::GetLayoutName(UIUpdateNews *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIUpdateNews");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIUpdateNews::~UIUpdateNews() */

void __thiscall UIUpdateNews::~UIUpdateNews(UIUpdateNews *this)

{
  *(undefined ***)this = &PTR_GetClass_06641830;
  *(undefined **)(this + 0xd8) = &DAT_06641b90;
  *(undefined **)(this + 0x138) = &DAT_06641bd8;
  *(undefined ***)(this + 0x140) = &PTR__UIUpdateNews_06641bf0;
  UISingletonDialog<UIUpdateNews>::~UISingletonDialog((UISingletonDialog<UIUpdateNews> *)this);
  return;
}


/* non-virtual thunk to UIUpdateNews::~UIUpdateNews() */

void __thiscall UIUpdateNews::~UIUpdateNews(UIUpdateNews *this)

{
  ~UIUpdateNews(this + -0x140);
  return;
}


/* UIUpdateNews::~UIUpdateNews() */

void __thiscall UIUpdateNews::~UIUpdateNews(UIUpdateNews *this)

{
  ~UIUpdateNews(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIUpdateNews::~UIUpdateNews() */

void __thiscall UIUpdateNews::~UIUpdateNews(UIUpdateNews *this)

{
  ~UIUpdateNews(this + -0x140);
  return;
}


/* UIUpdateNews::UIUpdateNews() */

void __thiscall UIUpdateNews::UIUpdateNews(UIUpdateNews *this)

{
  UISingletonDialog<UIUpdateNews>::UISingletonDialog((UISingletonDialog<UIUpdateNews> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_06641830;
  *(undefined **)(this + 0xd8) = &DAT_06641b90;
  *(undefined **)(this + 0x138) = &DAT_06641bd8;
  *(undefined ***)(this + 0x140) = &PTR__UIUpdateNews_06641bf0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateNews::ButtonDepress(int) */

void __thiscall UIUpdateNews::ButtonDepress(UIUpdateNews *this,int param_1)

{
  int iVar1;
  ScrollWidget *pSVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x152) {
    *(undefined4 *)(this + 0x148) = 2;
    iVar1 = *(int *)(*(long *)(this + 0x150) + 0x50) << 1;
  }
  else if (param_1 < 0x153) {
    if (param_1 == 0x58) {
      UISingletonDialog<UIUpdateNews>::CloseDialog();
      goto LAB_0348be2c;
    }
    if (param_1 != 0x151) goto LAB_0348be2c;
    *(undefined4 *)(this + 0x148) = 3;
    iVar1 = *(int *)(*(long *)(this + 0x150) + 0x50) * 3;
  }
  else {
    if (param_1 == 1000) {
      iVar1 = *(int *)(this + 0x148);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 0x148) = 5;
        Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x150) + 0x50) * 5,0);
        Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0x150),aPStack_10,false);
        iVar1 = *(int *)(this + 0x148);
      }
      pSVar2 = *(ScrollWidget **)(this + 0x150);
      *(int *)(this + 0x148) = iVar1 + -1;
      Sexy::Point::Point(aPStack_10,(iVar1 + -1) * *(int *)(pSVar2 + 0x50),0);
      Sexy::ScrollWidget::ScrollToPoint(pSVar2,aPStack_10,true);
      goto LAB_0348be2c;
    }
    if (param_1 == 0x3e9) {
      iVar1 = *(int *)(this + 0x148);
      if (iVar1 == 5) {
        *(undefined4 *)(this + 0x148) = 0;
        pSVar2 = *(ScrollWidget **)(this + 0x150);
        Sexy::Point::Point(aPStack_10,0,0);
        Sexy::ScrollWidget::ScrollToPoint(pSVar2,aPStack_10,false);
        iVar1 = *(int *)(this + 0x148);
      }
      *(int *)(this + 0x148) = iVar1 + 1;
      iVar1 = (iVar1 + 1) * *(int *)(*(long *)(this + 0x150) + 0x50);
    }
    else {
      if (param_1 != 0x153) goto LAB_0348be2c;
      *(undefined4 *)(this + 0x148) = 4;
      iVar1 = *(int *)(*(long *)(this + 0x150) + 0x50) << 2;
    }
  }
  Sexy::Point::Point(aPStack_10,iVar1,0);
  Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0x150),aPStack_10,true);
LAB_0348be2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIUpdateNews::ButtonDepress(int) */

void __thiscall UIUpdateNews::ButtonDepress(UIUpdateNews *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateNews::initLowhalfBtn() */

void __thiscall UIUpdateNews::initLowhalfBtn(UIUpdateNews *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Widget *pWVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  undefined8 uVar7;
  PVZ2UIButton *this_02;
  int iVar8;
  code *pcVar9;
  undefined1 auStack_68 [8];
  Insets aIStack_60 [16];
  Color aCStack_50 [16];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  std::string::string(asStack_40,"Widget_Show2");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
  do {
    iVar1 = FUN_0348b398(0x50);
    iVar2 = FUN_0348b398(0);
    iVar3 = FUN_0348b398(100);
    iVar4 = FUN_0348b398(0x32);
    Sexy::Insets::Insets(aIStack_60,iVar1 * iVar8,iVar2,iVar3,iVar4);
    if (iVar8 == 0) {
      iVar1 = 0x152;
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa26d0);
    }
    else if (iVar8 == 1) {
      iVar1 = 0x151;
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2070);
    }
    else {
      iVar1 = 0x153;
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa22a8);
    }
    FUN_05478178(aCStack_50,&DAT_056f11a8,auStack_68);
    Sexy::Color::Color((Color *)asStack_40,1);
    this_02 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_02,iVar1,(ButtonListener *)(this + 0xd8),(wstring *)aCStack_50,
               (Color *)asStack_40);
    FUN_05476c50(aCStack_50);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar7,3);
    Sexy::Color::Color(aCStack_50,0x5a,0x5a,0x5a);
    PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)asStack_40,aCStack_50);
    pcVar9 = *(code **)(*(long *)this_02 + 0x1a0);
    iVar1 = FUN_0348b398(0x8c);
    iVar1 = iVar1 * iVar8;
    iVar8 = iVar8 + 1;
    iVar2 = FUN_0348b398(10);
    iVar3 = FUN_0348b398(0xf);
    iVar4 = FUN_0348b398(0x82);
    iVar5 = FUN_0348b398(0x46);
    Sexy::Insets::Insets((Insets *)asStack_40,iVar1 + iVar2,iVar3,iVar4,iVar5);
    (*pcVar9)(this_02,asStack_40);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  } while (iVar8 != 3);
  (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateNews::initTophalfBtn() */

void __thiscall UIUpdateNews::initTophalfBtn(UIUpdateNews *this)

{
  int iVar1;
  Widget *pWVar2;
  DaveTreasureScrollWidget *this_00;
  Widget *this_01;
  UpdateNewsDisplayWidget *this_02;
  long lVar3;
  int iVar4;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_Show1");
  pWVar2 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  DaveTreasureScrollWidget::DaveTreasureScrollWidget(this_00,(ScrollWidgetListener *)(this + 0x140))
  ;
  lVar3 = *(long *)pWVar2;
  *(DaveTreasureScrollWidget **)(this + 0x150) = this_00;
  (**(code **)(lVar3 + 0x60))(pWVar2,this_00);
  (**(code **)(**(long **)(this + 0x150) + 0x198))
            (*(long **)(this + 0x150),0,0,*(undefined4 *)(pWVar2 + 0x50),
             *(undefined4 *)(pWVar2 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x150),1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(pWVar2 + 0x50),*(undefined4 *)(pWVar2 + 0x54));
  iVar4 = 0;
  do {
    iVar1 = *(int *)(*(long *)(this + 0x150) + 0x50);
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar1 * iVar4,0,iVar1,*(int *)(*(long *)(this + 0x150) + 0x54));
    this_02 = ::operator_new(0x108);
    UpdateNewsDisplayWidget::UpdateNewsDisplayWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
    iVar1 = iVar4 + 1;
    UpdateNewsDisplayWidget::InitView(this_02,iVar4);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    *(int *)(this_01 + 0x50) = *(int *)(pWVar2 + 0x50) * 6;
    iVar4 = iVar1;
  } while (iVar1 != 6);
  (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150),this_01);
  FUN_03489fbc(*(long *)(this + 0x150) + 0x1ec);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUpdateNews::InitView() */

void __thiscall UIUpdateNews::InitView(UIUpdateNews *this)

{
  initTophalfBtn(this);
  initLowhalfBtn(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateNews::OnCreate() */

void __thiscall UIUpdateNews::OnCreate(UIUpdateNews *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

