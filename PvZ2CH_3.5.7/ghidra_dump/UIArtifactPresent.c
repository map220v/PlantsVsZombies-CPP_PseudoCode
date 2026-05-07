// Class: UIArtifactPresent


/* UIArtifactPresent::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIArtifactPresent::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArtifactPresent::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIArtifactPresent::ScrollTargetReached(UIArtifactPresent *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIArtifactPresent::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIArtifactPresent::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArtifactPresent::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIArtifactPresent::ScrollTargetInterrupted(UIArtifactPresent *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresent::GetLayoutName() */

void __thiscall UIArtifactPresent::GetLayoutName(UIArtifactPresent *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIArtifactPresent");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIArtifactPresent::~UIArtifactPresent() */

void __thiscall UIArtifactPresent::~UIArtifactPresent(UIArtifactPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_0677aa40;
  *(undefined **)(this + 0xd8) = &DAT_0677ada0;
  *(undefined ***)(this + 0x138) = &PTR__UIArtifactPresent_0677ade8;
  UISingletonDialog<UIArtifactPresent>::~UISingletonDialog
            ((UISingletonDialog<UIArtifactPresent> *)this);
  return;
}


/* non-virtual thunk to UIArtifactPresent::~UIArtifactPresent() */

void __thiscall UIArtifactPresent::~UIArtifactPresent(UIArtifactPresent *this)

{
  ~UIArtifactPresent(this + -0x138);
  return;
}


/* UIArtifactPresent::~UIArtifactPresent() */

void __thiscall UIArtifactPresent::~UIArtifactPresent(UIArtifactPresent *this)

{
  ~UIArtifactPresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIArtifactPresent::~UIArtifactPresent() */

void __thiscall UIArtifactPresent::~UIArtifactPresent(UIArtifactPresent *this)

{
  ~UIArtifactPresent(this + -0x138);
  return;
}


/* UIArtifactPresent::UIArtifactPresent() */

void __thiscall UIArtifactPresent::UIArtifactPresent(UIArtifactPresent *this)

{
  UISingletonDialog<UIArtifactPresent>::UISingletonDialog
            ((UISingletonDialog<UIArtifactPresent> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_0677aa40;
  *(undefined **)(this + 0xd8) = &DAT_0677ada0;
  *(undefined ***)(this + 0x138) = &PTR__UIArtifactPresent_0677ade8;
  *(undefined8 *)(this + 0x148) = 0;
  return;
}


/* UIArtifactPresent::ButtonDepress(int) */

void __thiscall UIArtifactPresent::ButtonDepress(UIArtifactPresent *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UIArtifactPresent>::CloseDialog();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to UIArtifactPresent::ButtonDepress(int) */

void __thiscall UIArtifactPresent::ButtonDepress(UIArtifactPresent *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIArtifactPresent::UpdateUI() */

void __thiscall UIArtifactPresent::UpdateUI(UIArtifactPresent *this)

{
  UIArtifactPresentScrollPanel::UpdateUI
            (*(UIArtifactPresentScrollPanel **)(this + 0x148),
             *(PVZ2UIScrollingWidget **)(this + 0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresent::OnCreate() */

void __thiscall UIArtifactPresent::OnCreate(UIArtifactPresent *this)

{
  Widget *pWVar1;
  PVZ2UIScrollingWidget *this_00;
  long *plVar2;
  undefined8 uVar3;
  TGALogMgr *pTVar4;
  code *__n;
  TGANFSLinkageData aTStack_58 [40];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_30,"UIImage_BG");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_00;
  std::string::string(asStack_30,"UIScroll");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x198))
            (*(long **)(this + 0x140),0,0,(int)plVar2[10],*(undefined4 *)((long)plVar2 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),1);
  (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined8 *)(this + 0x140));
  uVar3 = UISingletonDialog<UIArtifactPresentScrollPanel>::ShowDialog();
  *(undefined8 *)(this + 0x148) = uVar3;
  __n = *(code **)(**(long **)(this + 0x140) + 0x60);
  (*__n)(*(long **)(this + 0x140),uVar3);
  UpdateUI(this);
  TGANFSLinkageData::TGANFSLinkageData(aTStack_58);
  std::string::append((string *)aTStack_58,"1",(size_t)__n);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)asStack_30,(TGAArtifactPresentData *)aTStack_58);
  TGALogMgr::LogArtifactPresent(pTVar4,asStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_30);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

