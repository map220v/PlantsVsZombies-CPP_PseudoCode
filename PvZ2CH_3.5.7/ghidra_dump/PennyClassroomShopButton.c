// Class: PennyClassroomShopButton


/* PennyClassroomShopButton::~PennyClassroomShopButton() */

void __thiscall PennyClassroomShopButton::~PennyClassroomShopButton(PennyClassroomShopButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069ce920;
  *(undefined ***)(this + 0x198) = &PTR__PennyClassroomShopButton_069cec80;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069ceca8;
  PVZ1ModeShopButton::~PVZ1ModeShopButton((PVZ1ModeShopButton *)this);
  return;
}


/* non-virtual thunk to PennyClassroomShopButton::~PennyClassroomShopButton() */

void __thiscall PennyClassroomShopButton::~PennyClassroomShopButton(PennyClassroomShopButton *this)

{
  ~PennyClassroomShopButton(this + -0x198);
  return;
}


/* PennyClassroomShopButton::~PennyClassroomShopButton() */

void __thiscall PennyClassroomShopButton::~PennyClassroomShopButton(PennyClassroomShopButton *this)

{
  ~PennyClassroomShopButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyClassroomShopButton::~PennyClassroomShopButton() */

void __thiscall PennyClassroomShopButton::~PennyClassroomShopButton(PennyClassroomShopButton *this)

{
  ~PennyClassroomShopButton(this + -0x198);
  return;
}


/* PennyClassroomShopButton::PennyClassroomShopButton(int) */

void __thiscall
PennyClassroomShopButton::PennyClassroomShopButton(PennyClassroomShopButton *this,int param_1)

{
  PVZ1ModeShopButton::PVZ1ModeShopButton((PVZ1ModeShopButton *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_069ce920;
  *(undefined ***)(this + 0x198) = &PTR__PennyClassroomShopButton_069cec80;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069ceca8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomShopButton::ButtonDepress(int) */

void __thiscall PennyClassroomShopButton::ButtonDepress(PennyClassroomShopButton *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == param_1) &&
     (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
     this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[PENNY_CLASSROOM_SHOP_BUY_CONFIRM]");
    TodReplaceString(awStack_50,L"{NUMS}",(wstring *)(this + 0x330));
    FUN_05476c50(awStack_50);
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string((string *)awStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PVZ1ModeShopButton::BuyConfirm);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<PennyClassroomShopButton,void(PVZ1ModeShopButton::*)(UIMessageBox*,int)>
              (aDStack_38,awStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PennyClassroomShopButton::ButtonDepress(int) */

void __thiscall PennyClassroomShopButton::ButtonDepress(PennyClassroomShopButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

