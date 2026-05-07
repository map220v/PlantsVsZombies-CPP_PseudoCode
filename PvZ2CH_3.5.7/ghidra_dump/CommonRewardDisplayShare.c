// Class: CommonRewardDisplayShare


/* CommonRewardDisplayShare::ScrollTargetReached(Sexy::ScrollWidget*) */

void CommonRewardDisplayShare::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CommonRewardDisplayShare::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CommonRewardDisplayShare::ScrollTargetReached(CommonRewardDisplayShare *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* CommonRewardDisplayShare::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CommonRewardDisplayShare::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CommonRewardDisplayShare::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CommonRewardDisplayShare::ScrollTargetInterrupted
          (CommonRewardDisplayShare *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardDisplayShare::GetLayoutName() */

void __thiscall CommonRewardDisplayShare::GetLayoutName(CommonRewardDisplayShare *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"CommonRewardDisplayShare");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CommonRewardDisplayShare::~CommonRewardDisplayShare() */

void __thiscall CommonRewardDisplayShare::~CommonRewardDisplayShare(CommonRewardDisplayShare *this)

{
  *(undefined ***)this = &PTR_GetClass_069f3790;
  *(undefined **)(this + 0xd8) = &DAT_069f3af0;
  *(undefined ***)(this + 0x138) = &PTR__CommonRewardDisplayShare_069f3b38;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x150));
  UISingletonDialog<CommonRewardDisplayShare>::~UISingletonDialog
            ((UISingletonDialog<CommonRewardDisplayShare> *)this);
  return;
}


/* non-virtual thunk to CommonRewardDisplayShare::~CommonRewardDisplayShare() */

void __thiscall CommonRewardDisplayShare::~CommonRewardDisplayShare(CommonRewardDisplayShare *this)

{
  ~CommonRewardDisplayShare(this + -0x138);
  return;
}


/* CommonRewardDisplayShare::~CommonRewardDisplayShare() */

void __thiscall CommonRewardDisplayShare::~CommonRewardDisplayShare(CommonRewardDisplayShare *this)

{
  ~CommonRewardDisplayShare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CommonRewardDisplayShare::~CommonRewardDisplayShare() */

void __thiscall CommonRewardDisplayShare::~CommonRewardDisplayShare(CommonRewardDisplayShare *this)

{
  ~CommonRewardDisplayShare(this + -0x138);
  return;
}


/* CommonRewardDisplayShare::AddItemWidget(Sexy::Widget*) */

void __thiscall
CommonRewardDisplayShare::AddItemWidget(CommonRewardDisplayShare *this,Widget *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = FUN_04eb093c(0x55);
  iVar2 = FUN_04eb093c(0xf);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardDisplayShare::OnCreate() */

void __thiscall CommonRewardDisplayShare::OnCreate(CommonRewardDisplayShare *this)

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
  iVar1 = FUN_04eb093c(0x19);
  iVar2 = FUN_04eb093c(0x32);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardDisplayShare::SetTitle(std::wstring const&) */

void __thiscall CommonRewardDisplayShare::SetTitle(CommonRewardDisplayShare *this,wstring *param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Title");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardDisplayShare::Share() */

void __thiscall CommonRewardDisplayShare::Share(CommonRewardDisplayShare *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UIWidgetBackground *pUVar4;
  SocialShareMgr *pSVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pSVar5 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  iVar2 = FUN_04eb093c(0x23);
  iVar1 = *(int *)(pUVar4 + 0x4c);
  iVar3 = FUN_04eb093c(10);
  SocialShareMgr::ShareWithImage
            (pSVar5,0,*(undefined4 *)(pUVar4 + 0x48),iVar2 + iVar1,iVar3 + *(int *)(pUVar4 + 0x50),
             *(undefined4 *)(pUVar4 + 0x54));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonRewardDisplayShare::ButtonDepress(int) */

void __thiscall CommonRewardDisplayShare::ButtonDepress(CommonRewardDisplayShare *this,int param_1)

{
  if (param_1 == 100) {
    std::function<void()>::operator()((function<void()> *)(this + 0x150));
    return;
  }
  if (param_1 != 0x65) {
    return;
  }
  Share(this);
  return;
}


/* non-virtual thunk to CommonRewardDisplayShare::ButtonDepress(int) */

void __thiscall CommonRewardDisplayShare::ButtonDepress(CommonRewardDisplayShare *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* CommonRewardDisplayShare::CommonRewardDisplayShare() */

void __thiscall CommonRewardDisplayShare::CommonRewardDisplayShare(CommonRewardDisplayShare *this)

{
  UISingletonDialog<CommonRewardDisplayShare>::UISingletonDialog
            ((UISingletonDialog<CommonRewardDisplayShare> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_069f3790;
  *(undefined **)(this + 0xd8) = &DAT_069f3af0;
  *(undefined ***)(this + 0x138) = &PTR__CommonRewardDisplayShare_069f3b38;
  *(undefined8 *)(this + 0x148) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x150));
  FUN_04eb3e2c((function<void(Sexy::Graphics*)> *)(this + 0x150));
  return;
}

