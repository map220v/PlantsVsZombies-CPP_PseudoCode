// Class: ConfirmUrlButtonExtra


/* ConfirmUrlButtonExtra::ButtonDepress(int) */

void __thiscall ConfirmUrlButtonExtra::ButtonDepress(ConfirmUrlButtonExtra *this,int param_1)

{
  if (*(int *)(this + 0xd4) != param_1) {
    return;
  }
  (**(code **)(*gLawnApp + 0x168))(gLawnApp,this + 0x310,0);
  return;
}


/* non-virtual thunk to ConfirmUrlButtonExtra::ButtonDepress(int) */

void __thiscall ConfirmUrlButtonExtra::ButtonDepress(ConfirmUrlButtonExtra *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra() */

void __thiscall ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra(ConfirmUrlButtonExtra *this)

{
  *(undefined ***)this = &PTR_GetClass_06791cc0;
  *(undefined ***)(this + 0x198) = &PTR__ConfirmUrlButtonExtra_06792028;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06792050;
  std::string::~string((string *)(this + 0x318));
  std::string::~string((string *)(this + 0x310));
  ConfirmUrlButton::~ConfirmUrlButton((ConfirmUrlButton *)this);
  return;
}


/* non-virtual thunk to ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra() */

void __thiscall ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra(ConfirmUrlButtonExtra *this)

{
  ~ConfirmUrlButtonExtra(this + -0x198);
  return;
}


/* ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra() */

void __thiscall ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra(ConfirmUrlButtonExtra *this)

{
  ~ConfirmUrlButtonExtra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra() */

void __thiscall ConfirmUrlButtonExtra::~ConfirmUrlButtonExtra(ConfirmUrlButtonExtra *this)

{
  ~ConfirmUrlButtonExtra(this + -0x198);
  return;
}


/* ConfirmUrlButtonExtra::InitView() */

void __thiscall ConfirmUrlButtonExtra::InitView(ConfirmUrlButtonExtra *this)

{
  undefined8 uVar1;
  
  uVar1 = StringHelper::ToImage((string *)(this + 0x318),false);
  *(undefined8 *)(this + 800) = uVar1;
  return;
}


/* ConfirmUrlButtonExtra::ConfirmUrlButtonExtra(int, std::string, std::string) */

void __thiscall
ConfirmUrlButtonExtra::ConfirmUrlButtonExtra
          (ConfirmUrlButtonExtra *this,int param_1,undefined8 param_3,undefined8 param_4)

{
  ConfirmUrlButton::ConfirmUrlButton((ConfirmUrlButton *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06791cc0;
  *(undefined ***)(this + 0x198) = &PTR__ConfirmUrlButtonExtra_06792028;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06792050;
  Set8BytesTo0(this + 0x310);
  Set8BytesTo0(this + 0x318);
  thunk_FUN_05475e00(this + 0x310,param_3);
  thunk_FUN_05475e00(this + 0x318,param_4);
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfirmUrlButtonExtra::Draw(Sexy::Graphics*) */

void __thiscall ConfirmUrlButtonExtra::Draw(ConfirmUrlButtonExtra *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 800) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 800));
    this_00 = *(SalesProgressBar **)(this + 800);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

