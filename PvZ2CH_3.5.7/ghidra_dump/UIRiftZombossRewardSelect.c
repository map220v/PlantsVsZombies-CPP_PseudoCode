// Class: UIRiftZombossRewardSelect


/* UIRiftZombossRewardSelect::SetFunctionOne(Sexy::Delegate0) */

void __thiscall
UIRiftZombossRewardSelect::SetFunctionOne(UIRiftZombossRewardSelect *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x140),param_2);
  return;
}


/* UIRiftZombossRewardSelect::SetFunctionTwo(Sexy::Delegate0) */

void __thiscall
UIRiftZombossRewardSelect::SetFunctionTwo(UIRiftZombossRewardSelect *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x170),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRiftZombossRewardSelect::GetLayoutName() */

void __thiscall UIRiftZombossRewardSelect::GetLayoutName(UIRiftZombossRewardSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRiftZombossRewardSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRiftZombossRewardSelect::OnCreate() */

void __thiscall UIRiftZombossRewardSelect::OnCreate(UIRiftZombossRewardSelect *this)

{
  char cVar1;
  undefined4 uVar2;
  Widget *pWVar3;
  long *plVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_0");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar3,true);
  cVar1 = RiftUtils::IsSpecialBossEvent();
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"UIImage_2");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    (**(code **)(*plVar4 + 0x158))(plVar4,1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_1");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    lVar5 = *plVar4;
  }
  else {
    std::string::string(asStack_10,"UIImage_2");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_1");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    lVar5 = *plVar4;
  }
  (**(code **)(lVar5 + 0x158))(plVar4,cVar1 == '\0');
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* UIRiftZombossRewardSelect::~UIRiftZombossRewardSelect() */

void __thiscall
UIRiftZombossRewardSelect::~UIRiftZombossRewardSelect(UIRiftZombossRewardSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_066857c0;
  *(undefined **)(this + 0xd8) = &DAT_06685b10;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_06685b58;
  UISingletonDialog<UIRiftZombossRewardSelect>::~UISingletonDialog
            ((UISingletonDialog<UIRiftZombossRewardSelect> *)this);
  return;
}


/* UIRiftZombossRewardSelect::~UIRiftZombossRewardSelect() */

void __thiscall
UIRiftZombossRewardSelect::~UIRiftZombossRewardSelect(UIRiftZombossRewardSelect *this)

{
  ~UIRiftZombossRewardSelect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRiftZombossRewardSelect::UIRiftZombossRewardSelect() */

void __thiscall
UIRiftZombossRewardSelect::UIRiftZombossRewardSelect(UIRiftZombossRewardSelect *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIRiftZombossRewardSelect>::UISingletonDialog
            ((UISingletonDialog<UIRiftZombossRewardSelect> *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066857c0;
  *(undefined **)(this + 0xd8) = &DAT_06685b10;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_06685b58;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x140),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x170),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x140),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x170),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRiftZombossRewardSelect::ButtonDepress(int) */

void __thiscall
UIRiftZombossRewardSelect::ButtonDepress(UIRiftZombossRewardSelect *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3e9) {
    iVar1 = FUN_036e0e3c(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x158));
    if (iVar1 != 0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x140));
    }
  }
  else if (param_1 == 0x3ea) {
    iVar1 = FUN_036e0e3c(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x188));
    if (iVar1 != 0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x170));
    }
  }
  else if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<UIRiftZombossRewardSelect>::CloseDialog();
  return;
}


/* non-virtual thunk to UIRiftZombossRewardSelect::ButtonDepress(int) */

void __thiscall
UIRiftZombossRewardSelect::ButtonDepress(UIRiftZombossRewardSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

