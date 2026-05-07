// Class: UINewerPresent


/* UINewerPresent::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewerPresent::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewerPresent::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UINewerPresent::ScrollTargetReached(UINewerPresent *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewerPresent::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewerPresent::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewerPresent::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UINewerPresent::ScrollTargetInterrupted(UINewerPresent *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresent::GetLayoutName() */

void __thiscall UINewerPresent::GetLayoutName(UINewerPresent *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewerPresent");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewerPresent::~UINewerPresent() */

void __thiscall UINewerPresent::~UINewerPresent(UINewerPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_06779640;
  *(undefined **)(this + 0xd8) = &DAT_067799a0;
  *(undefined ***)(this + 0x138) = &PTR__UINewerPresent_067799e8;
  UISingletonDialog<UINewerPresent>::~UISingletonDialog((UISingletonDialog<UINewerPresent> *)this);
  return;
}


/* non-virtual thunk to UINewerPresent::~UINewerPresent() */

void __thiscall UINewerPresent::~UINewerPresent(UINewerPresent *this)

{
  ~UINewerPresent(this + -0x138);
  return;
}


/* UINewerPresent::~UINewerPresent() */

void __thiscall UINewerPresent::~UINewerPresent(UINewerPresent *this)

{
  ~UINewerPresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewerPresent::~UINewerPresent() */

void __thiscall UINewerPresent::~UINewerPresent(UINewerPresent *this)

{
  ~UINewerPresent(this + -0x138);
  return;
}


/* UINewerPresent::UINewerPresent() */

void __thiscall UINewerPresent::UINewerPresent(UINewerPresent *this)

{
  UISingletonDialog<UINewerPresent>::UISingletonDialog((UISingletonDialog<UINewerPresent> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06779640;
  *(undefined **)(this + 0xd8) = &DAT_067799a0;
  *(undefined ***)(this + 0x138) = &PTR__UINewerPresent_067799e8;
  *(undefined8 *)(this + 0x148) = 0;
  return;
}


/* UINewerPresent::ButtonDepress(int) */

void __thiscall UINewerPresent::ButtonDepress(UINewerPresent *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UINewerPresent>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewerPresent::ButtonDepress(int) */

void __thiscall UINewerPresent::ButtonDepress(UINewerPresent *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewerPresent::UpdateUI() */

void __thiscall UINewerPresent::UpdateUI(UINewerPresent *this)

{
  UINewerPresentScrollPanel::UpdateUI
            (*(UINewerPresentScrollPanel **)(this + 0x148),*(PVZ2UIScrollingWidget **)(this + 0x140)
            );
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresent::OnCreate() */

void __thiscall UINewerPresent::OnCreate(UINewerPresent *this)

{
  Widget *pWVar1;
  PVZ2UIScrollingWidget *this_00;
  long *plVar2;
  undefined8 uVar3;
  TGALogMgr *pTVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_BG");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_00;
  std::string::string(asStack_10,"UIScroll");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x198))
            (*(long **)(this + 0x140),0,0,(int)plVar2[10],*(undefined4 *)((long)plVar2 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),1);
  (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined8 *)(this + 0x140));
  uVar3 = UISingletonDialog<UINewerPresentScrollPanel>::ShowDialog();
  *(undefined8 *)(this + 0x148) = uVar3;
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),uVar3);
  UpdateUI(this);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  TGALogMgr::LogNewuserPresent(pTVar4,1,asStack_18,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

