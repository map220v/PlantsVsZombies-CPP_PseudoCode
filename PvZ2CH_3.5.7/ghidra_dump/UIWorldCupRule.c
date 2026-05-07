// Class: UIWorldCupRule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupRule::GetLayoutName() */

void __thiscall UIWorldCupRule::GetLayoutName(UIWorldCupRule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWorldCupRule");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIWorldCupRule::~UIWorldCupRule() */

void __thiscall UIWorldCupRule::~UIWorldCupRule(UIWorldCupRule *this)

{
  *(undefined ***)this = &PTR_GetClass_066d24f0;
  *(undefined **)(this + 0xd8) = &DAT_066d2840;
  UISingletonDialog<UIWorldCupRule>::~UISingletonDialog((UISingletonDialog<UIWorldCupRule> *)this);
  return;
}


/* UIWorldCupRule::~UIWorldCupRule() */

void __thiscall UIWorldCupRule::~UIWorldCupRule(UIWorldCupRule *this)

{
  ~UIWorldCupRule(this);
  AK::FreeHook(this);
  return;
}


/* UIWorldCupRule::UIWorldCupRule() */

void __thiscall UIWorldCupRule::UIWorldCupRule(UIWorldCupRule *this)

{
  UISingletonDialog<UIWorldCupRule>::UISingletonDialog((UISingletonDialog<UIWorldCupRule> *)this);
  *(undefined ***)this = &PTR_GetClass_066d24f0;
  *(undefined **)(this + 0xd8) = &DAT_066d2840;
  return;
}


/* UIWorldCupRule::ButtonDepress(int) */

void __thiscall UIWorldCupRule::ButtonDepress(UIWorldCupRule *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UIWorldCupRule>::CloseDialog();
  return;
}


/* non-virtual thunk to UIWorldCupRule::ButtonDepress(int) */

void __thiscall UIWorldCupRule::ButtonDepress(UIWorldCupRule *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

