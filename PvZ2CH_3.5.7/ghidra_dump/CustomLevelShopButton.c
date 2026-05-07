// Class: CustomLevelShopButton


/* CustomLevelShopButton::~CustomLevelShopButton() */

void __thiscall CustomLevelShopButton::~CustomLevelShopButton(CustomLevelShopButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c5d90;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelShopButton_069c60f0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c6118;
  FUN_05476c50(this + 0x330);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to CustomLevelShopButton::~CustomLevelShopButton() */

void __thiscall CustomLevelShopButton::~CustomLevelShopButton(CustomLevelShopButton *this)

{
  ~CustomLevelShopButton(this + -0x198);
  return;
}


/* CustomLevelShopButton::~CustomLevelShopButton() */

void __thiscall CustomLevelShopButton::~CustomLevelShopButton(CustomLevelShopButton *this)

{
  ~CustomLevelShopButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelShopButton::~CustomLevelShopButton() */

void __thiscall CustomLevelShopButton::~CustomLevelShopButton(CustomLevelShopButton *this)

{
  ~CustomLevelShopButton(this + -0x198);
  return;
}


/* CustomLevelShopButton::ButtonDepress(int) */

void __thiscall CustomLevelShopButton::ButtonDepress(CustomLevelShopButton *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0xd4) == param_1) &&
     (iVar1 = FUN_04dd31fc(*(undefined8 *)(this + 0x340),*(undefined8 *)(this + 0x350)), iVar1 != 0)
     ) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x338));
    return;
  }
  return;
}


/* non-virtual thunk to CustomLevelShopButton::ButtonDepress(int) */

void __thiscall CustomLevelShopButton::ButtonDepress(CustomLevelShopButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopButton::InitView() */

void __thiscall CustomLevelShopButton::InitView(CustomLevelShopButton *this)

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
  iVar3 = FUN_04dd3ea0(6);
  iVar5 = iVar5 + iVar3 * -2;
  iVar4 = FUN_04dd3ea0(3);
  iVar1 = iVar3 * 2 + iVar5;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar3,iVar3,iVar5,iVar5);
  *(undefined8 *)(this + 0x308) = local_18;
  *(undefined8 *)(this + 0x310) = uStack_10;
  iVar5 = FUN_04dd3ea0(5);
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
/* CustomLevelShopButton::CustomLevelShopButton(int) */

void __thiscall
CustomLevelShopButton::CustomLevelShopButton(CustomLevelShopButton *this,int param_1)

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
  *(undefined ***)this = &PTR_GetClass_069c5d90;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelShopButton_069c60f0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c6118;
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


/* CustomLevelShopButton::BuyConfirm(UIMessageBox*, int) */

void __thiscall
CustomLevelShopButton::BuyConfirm(CustomLevelShopButton *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (iVar1 = FUN_04dd31fc(*(undefined8 *)(this + 0x340),*(undefined8 *)(this + 0x350)), iVar1 != 0)
     ) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x338));
    return;
  }
  return;
}

