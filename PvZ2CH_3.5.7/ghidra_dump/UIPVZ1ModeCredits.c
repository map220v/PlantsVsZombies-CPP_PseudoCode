// Class: UIPVZ1ModeCredits


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeCredits::GetLayoutName() */

void __thiscall UIPVZ1ModeCredits::GetLayoutName(UIPVZ1ModeCredits *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ1ModeCredits");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1ModeCredits::OnCreate() */

void __thiscall UIPVZ1ModeCredits::OnCreate(UIPVZ1ModeCredits *this)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(lVar2 + 0x48) = (*(int *)(gLawnApp + 0x724) - *(int *)(lVar2 + 0x50)) / 2;
  std::string::string(asStack_10,"PlayBtn");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar3 + 0x158))(plVar3,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* UIPVZ1ModeCredits::~UIPVZ1ModeCredits() */

void __thiscall UIPVZ1ModeCredits::~UIPVZ1ModeCredits(UIPVZ1ModeCredits *this)

{
  *(undefined ***)this = &PTR_GetClass_069cb3d0;
  *(undefined **)(this + 0xd8) = &DAT_069cb720;
  UISingletonDialog<UIPVZ1ModeCredits>::~UISingletonDialog
            ((UISingletonDialog<UIPVZ1ModeCredits> *)this);
  return;
}


/* UIPVZ1ModeCredits::~UIPVZ1ModeCredits() */

void __thiscall UIPVZ1ModeCredits::~UIPVZ1ModeCredits(UIPVZ1ModeCredits *this)

{
  ~UIPVZ1ModeCredits(this);
  AK::FreeHook(this);
  return;
}


/* UIPVZ1ModeCredits::UIPVZ1ModeCredits() */

void __thiscall UIPVZ1ModeCredits::UIPVZ1ModeCredits(UIPVZ1ModeCredits *this)

{
  UISingletonDialog<UIPVZ1ModeCredits>::UISingletonDialog
            ((UISingletonDialog<UIPVZ1ModeCredits> *)this);
  *(undefined ***)this = &PTR_GetClass_069cb3d0;
  *(undefined **)(this + 0xd8) = &DAT_069cb720;
  return;
}


/* UIPVZ1ModeCredits::ButtonDepress(int) */

void __thiscall UIPVZ1ModeCredits::ButtonDepress(UIPVZ1ModeCredits *this,int param_1)

{
  if (param_1 != 0x3e9) {
    return;
  }
  UISingletonDialog<UIPVZ1ModeCredits>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPVZ1ModeCredits::ButtonDepress(int) */

void __thiscall UIPVZ1ModeCredits::ButtonDepress(UIPVZ1ModeCredits *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

