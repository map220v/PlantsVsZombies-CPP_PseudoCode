// Class: EmptyDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EmptyDialog::GetLayoutName() */

void __thiscall EmptyDialog::GetLayoutName(EmptyDialog *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"EmptyDialog");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* EmptyDialog::~EmptyDialog() */

void __thiscall EmptyDialog::~EmptyDialog(EmptyDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06652370;
  *(undefined **)(this + 0xd8) = &DAT_066526c0;
  UISingletonDialog<EmptyDialog>::~UISingletonDialog((UISingletonDialog<EmptyDialog> *)this);
  return;
}


/* EmptyDialog::~EmptyDialog() */

void __thiscall EmptyDialog::~EmptyDialog(EmptyDialog *this)

{
  ~EmptyDialog(this);
  AK::FreeHook(this);
  return;
}


/* EmptyDialog::EmptyDialog() */

void __thiscall EmptyDialog::EmptyDialog(EmptyDialog *this)

{
  UISingletonDialog<EmptyDialog>::UISingletonDialog((UISingletonDialog<EmptyDialog> *)this);
  *(undefined ***)this = &PTR_GetClass_06652370;
  *(undefined **)(this + 0xd8) = &DAT_066526c0;
  return;
}

