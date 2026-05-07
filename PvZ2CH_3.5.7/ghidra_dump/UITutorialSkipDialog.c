// Class: UITutorialSkipDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITutorialSkipDialog::GetLayoutName() */

void __thiscall UITutorialSkipDialog::GetLayoutName(UITutorialSkipDialog *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITutorialSkipDialog");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITutorialSkipDialog::~UITutorialSkipDialog() */

void __thiscall UITutorialSkipDialog::~UITutorialSkipDialog(UITutorialSkipDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06853880;
  *(undefined **)(this + 0xd8) = &DAT_06853bd0;
  UISingletonDialog<UITutorialSkipDialog>::~UISingletonDialog
            ((UISingletonDialog<UITutorialSkipDialog> *)this);
  return;
}


/* UITutorialSkipDialog::~UITutorialSkipDialog() */

void __thiscall UITutorialSkipDialog::~UITutorialSkipDialog(UITutorialSkipDialog *this)

{
  ~UITutorialSkipDialog(this);
  AK::FreeHook(this);
  return;
}


/* UITutorialSkipDialog::UITutorialSkipDialog() */

void __thiscall UITutorialSkipDialog::UITutorialSkipDialog(UITutorialSkipDialog *this)

{
  UISingletonDialog<UITutorialSkipDialog>::UISingletonDialog
            ((UISingletonDialog<UITutorialSkipDialog> *)this);
  *(undefined ***)this = &PTR_GetClass_06853880;
  *(undefined **)(this + 0xd8) = &DAT_06853bd0;
  Sexy::Delegate2<UITutorialSkipDialog*,int>::Delegate2((DummyInit *)(this + 0x138));
  Sexy::Delegate2<UITutorialSkipDialog*,int>::Delegate2((DummyInit *)(this + 0x168));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITutorialSkipDialog::OnCreate() */

void __thiscall UITutorialSkipDialog::OnCreate(UITutorialSkipDialog *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Widget *pWVar4;
  UIWidgetImage *this_00;
  long lVar5;
  long *plVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_1");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_1");
  lVar5 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  iVar1 = *(int *)(*(long *)(lVar5 + 0x20) + 0x50);
  std::string::~string(asStack_10);
  nop();
  lVar5 = PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_00);
  iVar2 = *(int *)(lVar5 + 0x38);
  std::string::string(asStack_10,"UIImage_1");
  lVar5 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  uVar3 = *(undefined4 *)(lVar5 + 0x4c);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_1");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar6 + 0x1a8))(plVar6,(iVar1 - iVar2) / 2,uVar3);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UITutorialSkipDialog::ButtonDepress(int) */

void __thiscall UITutorialSkipDialog::ButtonDepress(UITutorialSkipDialog *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_044b9c50(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150));
    if (iVar1 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x138),(char *)this);
      UISingletonDialog<UITutorialSkipDialog>::CloseDialog();
      return;
    }
  }
  else {
    if (param_1 != 1) {
      return;
    }
    iVar1 = FUN_044b9c50(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x180));
    if (iVar1 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x168),(char *)this);
    }
  }
  UISingletonDialog<UITutorialSkipDialog>::CloseDialog();
  return;
}


/* non-virtual thunk to UITutorialSkipDialog::ButtonDepress(int) */

void __thiscall UITutorialSkipDialog::ButtonDepress(UITutorialSkipDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

