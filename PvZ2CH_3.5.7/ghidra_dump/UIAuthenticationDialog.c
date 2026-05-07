// Class: UIAuthenticationDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAuthenticationDialog::GetLayoutName() */

void __thiscall UIAuthenticationDialog::GetLayoutName(UIAuthenticationDialog *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"AuthenticationDialog");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIAuthenticationDialog::~UIAuthenticationDialog() */

void __thiscall UIAuthenticationDialog::~UIAuthenticationDialog(UIAuthenticationDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_066d0570;
  *(undefined **)(this + 0xd8) = &DAT_066d08c0;
  UISingletonDialog<UIAuthenticationDialog>::~UISingletonDialog
            ((UISingletonDialog<UIAuthenticationDialog> *)this);
  return;
}


/* UIAuthenticationDialog::~UIAuthenticationDialog() */

void __thiscall UIAuthenticationDialog::~UIAuthenticationDialog(UIAuthenticationDialog *this)

{
  ~UIAuthenticationDialog(this);
  AK::FreeHook(this);
  return;
}


/* UIAuthenticationDialog::setDialogTxt(std::wstring const&) */

void UIAuthenticationDialog::setDialogTxt(wstring *param_1)

{
  if (*(long *)(param_1 + 0x138) != 0) {
    PuzzleTip::SetTip();
    return;
  }
  return;
}


/* UIAuthenticationDialog::UIAuthenticationDialog() */

void __thiscall UIAuthenticationDialog::UIAuthenticationDialog(UIAuthenticationDialog *this)

{
  UISingletonDialog<UIAuthenticationDialog>::UISingletonDialog
            ((UISingletonDialog<UIAuthenticationDialog> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_066d0570;
  *(undefined **)(this + 0xd8) = &DAT_066d08c0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAuthenticationDialog::OnCreate() */

void __thiscall UIAuthenticationDialog::OnCreate(UIAuthenticationDialog *this)

{
  Widget *pWVar1;
  UIWidgetText *pUVar2;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,false);
  *(int *)(pWVar1 + 0x4c) = *(int *)(pWVar1 + 0x4c) + -0x14;
  std::string::string(asStack_10,"UIText_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x138) = pUVar2;
  std::string::~string(asStack_10);
  nop();
  uVar3 = *(undefined8 *)(this + 0x138);
  TodStringTranslate(L"[AUTHENTICATION_ERROR1]");
  PuzzleTip::SetTip(uVar3,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIAuthenticationDialog::ButtonDepress(int) */

void __thiscall UIAuthenticationDialog::ButtonDepress(UIAuthenticationDialog *this,int param_1)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    return;
  }
  UISingletonDialog<UIAuthenticationDialog>::CloseDialog();
  return;
}


/* non-virtual thunk to UIAuthenticationDialog::ButtonDepress(int) */

void __thiscall UIAuthenticationDialog::ButtonDepress(UIAuthenticationDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

