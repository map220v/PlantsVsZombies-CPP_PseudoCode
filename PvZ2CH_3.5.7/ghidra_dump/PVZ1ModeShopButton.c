// Class: PVZ1ModeShopButton


/* PVZ1ModeShopButton::~PVZ1ModeShopButton() */

void __thiscall PVZ1ModeShopButton::~PVZ1ModeShopButton(PVZ1ModeShopButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4df0;
  *(undefined ***)(this + 0x198) = &PTR__PVZ1ModeShopButton_069c5150;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c5178;
  FUN_05476c50(this + 0x330);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeShopButton::~PVZ1ModeShopButton() */

void __thiscall PVZ1ModeShopButton::~PVZ1ModeShopButton(PVZ1ModeShopButton *this)

{
  ~PVZ1ModeShopButton(this + -0x198);
  return;
}


/* PVZ1ModeShopButton::~PVZ1ModeShopButton() */

void __thiscall PVZ1ModeShopButton::~PVZ1ModeShopButton(PVZ1ModeShopButton *this)

{
  ~PVZ1ModeShopButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeShopButton::~PVZ1ModeShopButton() */

void __thiscall PVZ1ModeShopButton::~PVZ1ModeShopButton(PVZ1ModeShopButton *this)

{
  ~PVZ1ModeShopButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopButton::InitView() */

void __thiscall PVZ1ModeShopButton::InitView(PVZ1ModeShopButton *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(this + 0x54);
  if (*(int *)(this + 0x50) < *(int *)(this + 0x54)) {
    iVar5 = *(int *)(this + 0x50);
  }
  iVar3 = FUN_04dceedc(6);
  iVar5 = iVar5 + iVar3 * -2;
  iVar4 = FUN_04dceedc(3);
  iVar1 = iVar3 * 2 + iVar5;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar3,iVar3,iVar5,iVar5);
  *(undefined8 *)(this + 0x308) = local_18;
  *(undefined8 *)(this + 0x310) = uStack_10;
  iVar5 = FUN_04dceedc(5);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 - iVar5,0,*(int *)(this + 0x50) - iVar1,*(int *)(this + 0x54)
            );
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x318) = local_18;
  *(undefined8 *)(this + 800) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopButton::PVZ1ModeShopButton(int) */

void __thiscall PVZ1ModeShopButton::PVZ1ModeShopButton(PVZ1ModeShopButton *this,int param_1)

{
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color((Color *)&local_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,
             (Color *)&local_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_069c4df0;
  *(undefined ***)(this + 0x198) = &PTR__PVZ1ModeShopButton_069c5150;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c5178;
  Sexy::Insets::Insets((Insets *)(this + 0x308));
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  FUN_05476574(this + 0x330);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x338),(DummyInit *)0x0);
  Sexy::Insets::Insets((Insets *)&local_48);
  *(undefined8 *)(this + 0x308) = local_48;
  *(undefined8 *)(this + 0x310) = uStack_40;
  Sexy::Insets::Insets((Insets *)&local_48);
  *(undefined8 *)(this + 0x318) = local_48;
  *(undefined8 *)(this + 800) = uStack_40;
  *(undefined8 *)(this + 0x328) = 0;
  FUN_054772c4(this + 0x330,&DAT_056f11a8);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x338),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeShopButton::BuyConfirm(UIMessageBox*, int) */

void __thiscall
PVZ1ModeShopButton::BuyConfirm(PVZ1ModeShopButton *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (iVar1 = FUN_04dce670(*(undefined8 *)(this + 0x340),*(undefined8 *)(this + 0x350)), iVar1 != 0)
     ) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x338));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopButton::ButtonDepress(int) */

void __thiscall PVZ1ModeShopButton::ButtonDepress(PVZ1ModeShopButton *this,int param_1)

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
    TodStringTranslate(L"[PVZ1MODE_SHOP_BUY_CONFIRM]");
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
              ((ReceivedDataCallback *)this,BuyConfirm);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<PVZ1ModeShopButton,void(PVZ1ModeShopButton::*)(UIMessageBox*,int)>
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


/* non-virtual thunk to PVZ1ModeShopButton::ButtonDepress(int) */

void __thiscall PVZ1ModeShopButton::ButtonDepress(PVZ1ModeShopButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

