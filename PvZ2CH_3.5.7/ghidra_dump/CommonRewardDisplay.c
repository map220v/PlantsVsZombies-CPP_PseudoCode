// Class: CommonRewardDisplay


/* CommonRewardDisplay::SetCloseFuction(std::function<void ()>) */

void __thiscall CommonRewardDisplay::SetCloseFuction(CommonRewardDisplay *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x150),param_2);
  return;
}


/* CommonRewardDisplay::ScrollTargetReached(Sexy::ScrollWidget*) */

void CommonRewardDisplay::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CommonRewardDisplay::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CommonRewardDisplay::ScrollTargetReached(CommonRewardDisplay *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* CommonRewardDisplay::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CommonRewardDisplay::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CommonRewardDisplay::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CommonRewardDisplay::ScrollTargetInterrupted(CommonRewardDisplay *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardDisplay::GetLayoutName() */

void __thiscall CommonRewardDisplay::GetLayoutName(CommonRewardDisplay *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"CommonRewardDisplay");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CommonRewardDisplay::~CommonRewardDisplay() */

void __thiscall CommonRewardDisplay::~CommonRewardDisplay(CommonRewardDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_06a29590;
  *(undefined **)(this + 0xd8) = &DAT_06a298f0;
  *(undefined ***)(this + 0x138) = &PTR__CommonRewardDisplay_06a29938;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x150));
  UISingletonDialog<CommonRewardDisplay>::~UISingletonDialog
            ((UISingletonDialog<CommonRewardDisplay> *)this);
  return;
}


/* non-virtual thunk to CommonRewardDisplay::~CommonRewardDisplay() */

void __thiscall CommonRewardDisplay::~CommonRewardDisplay(CommonRewardDisplay *this)

{
  ~CommonRewardDisplay(this + -0x138);
  return;
}


/* CommonRewardDisplay::~CommonRewardDisplay() */

void __thiscall CommonRewardDisplay::~CommonRewardDisplay(CommonRewardDisplay *this)

{
  ~CommonRewardDisplay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CommonRewardDisplay::~CommonRewardDisplay() */

void __thiscall CommonRewardDisplay::~CommonRewardDisplay(CommonRewardDisplay *this)

{
  ~CommonRewardDisplay(this + -0x138);
  return;
}


/* CommonRewardDisplay::AddItemWidget(Sexy::Widget*) */

void __thiscall CommonRewardDisplay::AddItemWidget(CommonRewardDisplay *this,Widget *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = FUN_04fada68(0x55);
  iVar2 = FUN_04fada68(0xf);
  iVar2 = iVar1 + iVar2;
  (**(code **)(*(long *)param_1 + 0x198))
            (param_1,(*(int *)(this + 0x140) % 5) * iVar2,iVar2 * (*(int *)(this + 0x140) / 5),iVar1
             ,iVar1);
  plVar3 = (long *)AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
  lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  *(int *)(lVar4 + 0x54) = iVar1 + iVar2 * (*(int *)(this + 0x140) / 5);
  Sexy::ScrollWidget::ClientSizeChanged(*(ScrollWidget **)(this + 0x148));
  *(int *)(this + 0x140) = *(int *)(this + 0x140) + 1;
  return;
}


/* CommonRewardDisplay::ButtonDepress(int) */

void __thiscall CommonRewardDisplay::ButtonDepress(CommonRewardDisplay *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x150));
  return;
}


/* non-virtual thunk to CommonRewardDisplay::ButtonDepress(int) */

void __thiscall CommonRewardDisplay::ButtonDepress(CommonRewardDisplay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardDisplay::OnCreate() */

void __thiscall CommonRewardDisplay::OnCreate(CommonRewardDisplay *this)

{
  int iVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  UIWidgetImage *pUVar4;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_18,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(int *)(pUVar3 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  std::string::string(asStack_18,"UIImage_Main");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x148) = this_00;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar1 = FUN_04fada68(0x19);
  iVar2 = FUN_04fada68(0x32);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar1,*(int *)(pUVar4 + 0x50) - iVar2,
             *(int *)(pUVar4 + 0x54) - iVar2);
  (**(code **)(**(long **)(this + 0x148) + 0x1a0))(*(long **)(this + 0x148),asStack_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x148),2);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,*(undefined8 *)(this + 0x148));
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* CommonRewardDisplay::CommonRewardDisplay() */

void __thiscall CommonRewardDisplay::CommonRewardDisplay(CommonRewardDisplay *this)

{
  UISingletonDialog<CommonRewardDisplay>::UISingletonDialog
            ((UISingletonDialog<CommonRewardDisplay> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06a29590;
  *(undefined **)(this + 0xd8) = &DAT_06a298f0;
  *(undefined ***)(this + 0x138) = &PTR__CommonRewardDisplay_06a29938;
  *(undefined8 *)(this + 0x148) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x150));
  FUN_04fb1058((function<void(Sexy::Graphics*)> *)(this + 0x150));
  return;
}

