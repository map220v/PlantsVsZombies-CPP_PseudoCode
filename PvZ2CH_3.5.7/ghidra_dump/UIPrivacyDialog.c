// Class: UIPrivacyDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPrivacyDialog::GetLayoutName() */

void __thiscall UIPrivacyDialog::GetLayoutName(UIPrivacyDialog *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPrivacyDialog");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPrivacyDialog::onDisagreeConfirm() */

void UIPrivacyDialog::onDisagreeConfirm(void)

{
  LawnApp::onConfirmExitGame();
  return;
}


/* UIPrivacyDialog::~UIPrivacyDialog() */

void __thiscall UIPrivacyDialog::~UIPrivacyDialog(UIPrivacyDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_067734d0;
  *(undefined **)(this + 0xd8) = &DAT_06773820;
  UISingletonDialog<UIPrivacyDialog>::~UISingletonDialog((UISingletonDialog<UIPrivacyDialog> *)this)
  ;
  return;
}


/* UIPrivacyDialog::~UIPrivacyDialog() */

void __thiscall UIPrivacyDialog::~UIPrivacyDialog(UIPrivacyDialog *this)

{
  ~UIPrivacyDialog(this);
  AK::FreeHook(this);
  return;
}


/* UIPrivacyDialog::UIPrivacyDialog() */

void __thiscall UIPrivacyDialog::UIPrivacyDialog(UIPrivacyDialog *this)

{
  UISingletonDialog<UIPrivacyDialog>::UISingletonDialog((UISingletonDialog<UIPrivacyDialog> *)this);
  *(undefined ***)this = &PTR_GetClass_067734d0;
  *(undefined **)(this + 0xd8) = &DAT_06773820;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPrivacyDialog::OnCreate() */

void __thiscall UIPrivacyDialog::OnCreate(UIPrivacyDialog *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  UIScrollControl *this_00;
  UIWidgetImage *pUVar6;
  UIWidgetText *this_01;
  undefined8 uVar7;
  long lVar8;
  PVZ2UIButton *pPVar9;
  long *plVar10;
  uint uVar11;
  code *pcVar12;
  wstring awStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_18,"UIImage_0");
  pWVar5 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  UI::Dialog::SetCenter((Dialog *)this,pWVar5,true);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"UIScroll_0");
  this_00 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (UIScrollControl *)0x0) {
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    UIScrollControl::SetAutoArrange(this_00,false);
    Sexy::Insets::Insets((Insets *)&local_28);
    std::string::string((string *)&local_18,"UIImage_1");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (pUVar6 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar6 + 0x48))((string *)&local_18,pUVar6);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 1;
      Sexy::StrFormat(L"[PRIVACY_RULE_TXT_%d]",awStack_30,(ulong)uVar11);
      TodStringTranslate(awStack_30);
      this_01 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(this_01,(wstring *)&local_18);
      FUN_05476c50((string *)&local_18);
      FUN_05476c50(awStack_30);
      uVar1 = FUN_03d99248(0x1d);
      uVar2 = FUN_03d99248(0x69);
      uVar3 = FUN_03d99248(0x20b);
      uVar4 = FUN_03d99248(0x21d);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar1,uVar2,uVar3,uVar4);
      this_01[0x59] = (UIWidgetText)0x0;
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      FUN_03d990e8(this_01 + 0xe8,uVar7);
      FUN_03d990fc(this_01 + 0xe0);
      pcVar12 = *(code **)(*(long *)this_01 + 0x170);
      Sexy::Insets::Insets((Insets *)&local_18,0x60,0x42,0x1e,0xff);
      (*pcVar12)(this_01,0,(string *)&local_18);
      UIWidgetText::FormatByWidth(this_01);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
      UIWidgetText::SetViewRect(this_01,(string *)&local_18);
      FUN_03d990f0(this_01 + 0xf0);
      lVar8 = AccessoryContent::GetDisplayImage((AccessoryContent *)this_00);
      plVar10 = *(long **)(this_01 + 0x20);
      *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(this_00 + 0x50);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x68))(plVar10,this_01);
      }
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
    } while (uVar11 != 0x19);
    UIScrollControl::SetAutoArrange(this_00,true);
  }
  std::string::string((string *)&local_18,"Btn_Close");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (pPVar9 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPrivacyDialog::SetType(int) */

void UIPrivacyDialog::SetType(int param_1)

{
  Dialog *this;
  PVZ2UIButton *pPVar1;
  PVZ2UIButton *pPVar2;
  PVZ2UIButton *pPVar3;
  string asStack_10 [8];
  long local_8;
  
  this = (Dialog *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Btn_Disagree");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Btn_Agree");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Btn_Close");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
  }
  if (pPVar2 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,0);
  }
  if (pPVar3 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar3 + 0x158))(pPVar3,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPrivacyDialog::onAgreeBtn() */

void UIPrivacyDialog::onAgreeBtn(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"AgreePravicy");
  UserPrefs::SetBool(asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  UISingletonDialog<UIPrivacyDialog>::CloseDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPrivacyDialog::showDisagreeConfirm() */

void __thiscall UIPrivacyDialog::showDisagreeConfirm(UIPrivacyDialog *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03d99248(400);
  this_00 = gLawnApp;
  iVar2 = FUN_03d99248(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[PRIVACY_CONFIRM_DIALOG_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PRIVACY_CONFIRM_DIALOG_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_DISAGREE_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_DISAGREE_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDisagreeConfirm);
  Sexy::Delegate0::Delegate0<UIPrivacyDialog,void(UIPrivacyDialog::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPrivacyDialog::onDisagreeBtn() */

void __thiscall UIPrivacyDialog::onDisagreeBtn(UIPrivacyDialog *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = FUN_03d99248(400);
  this_00 = gLawnApp;
  iVar2 = FUN_03d99248(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[PRIVACY_CONFIRM_DIALOG_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PRIVACY_CONFIRM_DIALOG_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_DISAGREE_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_DISAGREE_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDisagreeConfirm);
  Sexy::Delegate0::Delegate0<UIPrivacyDialog,void(UIPrivacyDialog::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPrivacyDialog::ButtonDepress(int) */

void __thiscall UIPrivacyDialog::ButtonDepress(UIPrivacyDialog *this,int param_1)

{
  if (param_1 == 1) {
    onDisagreeBtn(this);
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 0) {
      return;
    }
    onAgreeBtn();
    return;
  }
  UISingletonDialog<UIPrivacyDialog>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPrivacyDialog::ButtonDepress(int) */

void __thiscall UIPrivacyDialog::ButtonDepress(UIPrivacyDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

