// Class: UITest


/* UITest::ButtonDepress(int) */

int UITest::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UITest::ButtonDepress(int) */

void __thiscall UITest::ButtonDepress(UITest *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITest::GetLayoutName() */

void __thiscall UITest::GetLayoutName(UITest *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"uitest");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITest::~UITest() */

void __thiscall UITest::~UITest(UITest *this)

{
  *(undefined ***)this = &PTR_GetClass_0696f680;
  *(undefined **)(this + 0xd8) = &DAT_0696f9d0;
  UISingletonDialog<UITest>::~UISingletonDialog((UISingletonDialog<UITest> *)this);
  return;
}


/* UITest::~UITest() */

void __thiscall UITest::~UITest(UITest *this)

{
  ~UITest(this);
  AK::FreeHook(this);
  return;
}


/* UITest::UITest() */

void __thiscall UITest::UITest(UITest *this)

{
  UISingletonDialog<UITest>::UISingletonDialog((UISingletonDialog<UITest> *)this);
  *(undefined ***)this = &PTR_GetClass_0696f680;
  *(undefined **)(this + 0xd8) = &DAT_0696f9d0;
  return;
}

