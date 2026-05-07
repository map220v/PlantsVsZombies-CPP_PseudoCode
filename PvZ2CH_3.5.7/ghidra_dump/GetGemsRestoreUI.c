// Class: GetGemsRestoreUI


/* GetGemsRestoreUI::EditWidgetText(int, std::wstring const&) */

void GetGemsRestoreUI::EditWidgetText(int param_1,wstring *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)((ulong)(uint)param_1 + 0xf0);
  *(undefined1 *)(lVar2 + 0x16c) = 0;
  cVar1 = FUN_054765e8(lVar2 + 0xe8);
  plVar3 = *(long **)((ulong)(uint)param_1 + 0x108);
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x188))(plVar3);
    return;
  }
  (**(code **)(*plVar3 + 0x188))(plVar3,1);
  return;
}


/* non-virtual thunk to GetGemsRestoreUI::EditWidgetText(int, std::wstring const&) */

void __thiscall
GetGemsRestoreUI::EditWidgetText(GetGemsRestoreUI *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::~GetGemsRestoreUI() */

void __thiscall GetGemsRestoreUI::~GetGemsRestoreUI(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06846480;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_068464c8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06846120;
  *(undefined ***)(this + 0xe8) = &PTR_ToString_068464f8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x148);
  FUN_05476c50(this + 0x140);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetGemsRestoreUI::~GetGemsRestoreUI() */

void __thiscall GetGemsRestoreUI::~GetGemsRestoreUI(GetGemsRestoreUI *this)

{
  ~GetGemsRestoreUI(this);
  AK::FreeHook(this);
  return;
}


/* GetGemsRestoreUI::onCloseDialog() */

void GetGemsRestoreUI::onCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* GetGemsRestoreUI::onCloseDialogAndCloseSelf() */

void GetGemsRestoreUI::onCloseDialogAndCloseSelf(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillGetGemsRestoreUI(gLawnApp);
  return;
}


/* GetGemsRestoreUI::AllowChar(int, wchar_t) */

undefined8 __thiscall
GetGemsRestoreUI::AllowChar(GetGemsRestoreUI *this,int param_1,wchar_t param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = iswalnum(param_2);
  if ((iVar1 == 0) &&
     ((param_2 != L' ' || (lVar3 = FUN_054765c4(*(long *)(this + 0xf0) + 0xe8), lVar3 == 0)))) {
    uVar2 = EA::Text::IsCharAlphabetic((wchar16)param_2);
    return uVar2;
  }
  return 1;
}


/* non-virtual thunk to GetGemsRestoreUI::AllowChar(int, wchar_t) */

void __thiscall GetGemsRestoreUI::AllowChar(GetGemsRestoreUI *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0xe0,param_1,param_2);
  return;
}


/* GetGemsRestoreUI::systemBusy() */

void __thiscall GetGemsRestoreUI::systemBusy(GetGemsRestoreUI *this)

{
  code *pcVar1;
  float fVar2;
  
  this[0x120] = (GetGemsRestoreUI)0x1;
  fVar2 = (float)PVZ_RealT();
  pcVar1 = *(code **)(**(long **)(this + 0xf0) + 0x158);
  *(float *)(this + 0x124) = fVar2 + 10.0;
  (*pcVar1)(*(long **)(this + 0xf0),0);
  (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetBag(int) */

void __thiscall GetGemsRestoreUI::GetBag(GetGemsRestoreUI *this,int param_1)

{
  LawnApp *this_00;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x128] == (GetGemsRestoreUI)0x0) {
    this[0x128] = (GetGemsRestoreUI)0x1;
    this_01 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::AddGems(this_01,param_1,false);
    }
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_SUCCEED_CONTENT]");
    TodReplaceNumberString(awStack_50,L"{GEM_COUNT}",param_1);
    FUN_05476c50(awStack_50);
    this_00 = gLawnApp;
    FUN_05478178(awStack_50,L"[GEMS_RESTORE_CODE_SUCCEED_TITLE]",auStack_58);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetDoubleSpeedUp() */

void __thiscall GetGemsRestoreUI::GetDoubleSpeedUp(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  char cVar1;
  PlayerInfo *pPVar2;
  undefined8 uVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsUnlockRechargeNode(pPVar2,0x14);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockRechargeNode(pPVar2,0x14);
    }
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_SPEEDUP_SUCCEED_CONTENT]");
    uVar3 = FUN_054766ec(auStack_60);
    FUN_05478178(awStack_50,uVar3,auStack_68);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetCherryBomb() */

void __thiscall GetGemsRestoreUI::GetCherryBomb(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  char cVar1;
  PlayerInfo *pPVar2;
  undefined8 uVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsUnlockRechargeNode(pPVar2,0x1e);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockRechargeNode(pPVar2,0x1e);
    }
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_CHERRYBOMB_SUCCEED_CONTENT]");
    uVar3 = FUN_054766ec(auStack_60);
    FUN_05478178(awStack_50,uVar3,auStack_68);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetDoubleCoin() */

void __thiscall GetGemsRestoreUI::GetDoubleCoin(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  char cVar1;
  PlayerInfo *pPVar2;
  undefined8 uVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsUnlockRechargeNode(pPVar2,2);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockRechargeNode(pPVar2,2);
    }
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_DOUBLECOIN_SUCCEED_CONTENT]");
    uVar3 = FUN_054766ec(auStack_60);
    FUN_05478178(awStack_50,uVar3,auStack_68);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetDoubleLottery() */

void __thiscall GetGemsRestoreUI::GetDoubleLottery(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  char cVar1;
  PlayerInfo *pPVar2;
  undefined8 uVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsUnlockRechargeNode(pPVar2,6);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockRechargeNode(pPVar2,6);
    }
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_DOUBLELOTTERY_SUCCEED_CONTENT]");
    uVar3 = FUN_054766ec(auStack_60);
    FUN_05478178(awStack_50,uVar3,auStack_68);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetThreepeaterAvatar() */

void __thiscall GetGemsRestoreUI::GetThreepeaterAvatar(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  PlayerInfo *pPVar1;
  undefined8 uVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar1 != (PlayerInfo *)0x0) {
    std::string::string(asStack_50,"threepeater");
    PlayerInfo::UnlockPlantAvatar(pPVar1,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"threepeater");
    PlayerInfo::SetPlantAvatar(pPVar1,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_THREEPEATER_AVATAR_SUCCEED_CONTENT]");
    uVar2 = FUN_054766ec(auStack_60);
    FUN_05478178(asStack_50,uVar2,auStack_68);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetCherryBombAvatar() */

void __thiscall GetGemsRestoreUI::GetCherryBombAvatar(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  PlayerInfo *pPVar1;
  undefined8 uVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar1 != (PlayerInfo *)0x0) {
    std::string::string(asStack_50,"cherry_bomb");
    PlayerInfo::UnlockPlantAvatar(pPVar1,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"cherry_bomb");
    PlayerInfo::SetPlantAvatar(pPVar1,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_CHERRYBOMB_AVATAR_SUCCEED_CONTENT]");
    uVar2 = FUN_054766ec(auStack_60);
    FUN_05478178(asStack_50,uVar2,auStack_68);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetIceburgAvatar() */

void __thiscall GetGemsRestoreUI::GetIceburgAvatar(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  PlayerInfo *pPVar1;
  undefined8 uVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar1 != (PlayerInfo *)0x0) {
    std::string::string(asStack_50,"iceburg");
    PlayerInfo::UnlockPlantAvatar(pPVar1,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"iceburg");
    PlayerInfo::SetPlantAvatar(pPVar1,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_ICEBURG_AVATAR_SUCCEED_CONTENT]");
    uVar2 = FUN_054766ec(auStack_60);
    FUN_05478178(asStack_50,uVar2,auStack_68);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetCarrotLauncherPiece() */

void __thiscall GetGemsRestoreUI::GetCarrotLauncherPiece(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  string *psVar1;
  undefined8 uVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)ProfileUtils::Profile();
  if (psVar1 != (string *)0x0) {
    std::string::string(asStack_50,"carrotlauncher");
    PlayerInfo::AddPlantPieceCount(psVar1,(int)asStack_50,true);
    std::string::~string(asStack_50);
    nop();
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_70);
    TodStringTranslate(L"[GEMS_RESTORE_CODE_RECHARGE_CARROTLAUNCHER_PIECE_SUCCEED_CONTENT]");
    uVar2 = FUN_054766ec(auStack_60);
    FUN_05478178(asStack_50,uVar2,auStack_68);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetPlantAvatarAndLevel(RestorePlantType, RestorePlantLevel) */

void __thiscall
GetGemsRestoreUI::GetPlantAvatarAndLevel(GetGemsRestoreUI *this,undefined4 param_2,int param_3)

{
  LawnApp *this_00;
  char cVar1;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar2;
  wstring *__n;
  undefined1 auStack_78 [8];
  string asStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_01 != (PlayerInfo *)0x0) {
    __n = awStack_50;
    std::string::string(asStack_70,"");
    nop();
    FUN_05476574(awStack_68);
    switch(param_2) {
    case 0:
      std::string::append(asStack_70,"wintermelon",(size_t)__n);
      FUN_054772c4(awStack_68,
                   L"[GEMS_RESTORE_CODE_RECHARGE_WINTERMELON_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 1:
      std::string::append(asStack_70,"citron",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_CITRON_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 2:
      std::string::append(asStack_70,"peapod",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_PEAPOD_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 3:
      std::string::append(asStack_70,"snowpea",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_SNOWPEA_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 4:
      std::string::append(asStack_70,"holonut",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_HOLONUT_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 5:
      std::string::append(asStack_70,"turnip",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_TURNIP_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 6:
      std::string::append(asStack_70,"starfruit",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_STARFRUIT_AVATAR_LEVEL_SUCCEED_CONTENT]"
                  );
      break;
    case 7:
      std::string::append(asStack_70,"torchwood",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_TORCHWOOD_AVATAR_LEVEL_SUCCEED_CONTENT]"
                  );
      break;
    case 8:
      std::string::append(asStack_70,"lightningreed",(size_t)__n);
      FUN_054772c4(awStack_68,
                   L"[GEMS_RESTORE_CODE_RECHARGE_LIGHTNINGREED_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 9:
      std::string::append(asStack_70,"bonkchoy",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_BONKCHOY_AVATAR_LEVEL_SUCCEED_CONTENT]")
      ;
      break;
    case 10:
      std::string::append(asStack_70,"laser_bean",(size_t)__n);
      FUN_054772c4(awStack_68,
                   L"[GEMS_RESTORE_CODE_RECHARGE_LASER_BEAN_AVATAR_LEVEL_SUCCEED_CONTENT]");
      break;
    case 0xb:
      std::string::append(asStack_70,"snapdragon",(size_t)__n);
      FUN_054772c4(awStack_68,L"[GEMS_RESTORE_CODE_RECHARGE_FIREGOURD_AVATAR_LEVEL_SUCCEED_CONTENT]"
                  );
    }
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_70);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockPlant(this_01,asStack_70,true);
    }
    PlayerInfo::UnlockPlantAvatar(this_01,asStack_70,0);
    PlayerInfo::SetPlantAvatar(this_01,asStack_70,0);
    PlayerInfo::PlantLevelUpCurrentLevel(this_01,asStack_70,param_3,false);
    PlayerInfo::saveCurrentProfile(this_01);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
    TodStringTranslate(awStack_68);
    TodReplaceNumberString(awStack_50,L"{LEVEL_NUMBER}",param_3);
    FUN_05476c50(awStack_50);
    this_00 = gLawnApp;
    FUN_05478178(awStack_50,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]",auStack_58);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
    std::string::~string(asStack_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::onServiceRequestCompleted(int, int, RestoreType) */

void __thiscall
GetGemsRestoreUI::onServiceRequestCompleted
          (GetGemsRestoreUI *this,int param_1,int param_2,undefined4 param_4)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    FUN_05478178(awStack_58,L"[GEMS_RESTORE_CODE_ERROR_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[GEMS_RESTORE_CODE_ERROR_CONTENT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialog);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    systemBusy(this);
  }
  else {
    switch(param_4) {
    case 0:
      GetDoubleSpeedUp(this);
      break;
    case 1:
      GetCherryBomb(this);
      break;
    case 2:
      GetDoubleCoin(this);
      break;
    case 3:
      GetDoubleLottery(this);
      break;
    case 4:
      nop();
      break;
    case 5:
      GetThreepeaterAvatar(this);
      break;
    case 6:
      GetCherryBombAvatar(this);
      break;
    case 7:
      GetIceburgAvatar(this);
      break;
    case 8:
      GetCarrotLauncherPiece(this);
      break;
    case 0xb:
      GetPlantAvatarAndLevel(this,0,2);
      break;
    case 0xc:
      GetPlantAvatarAndLevel(this,0,3);
      break;
    case 0xd:
      GetPlantAvatarAndLevel(this,1,2);
      break;
    case 0xe:
      GetPlantAvatarAndLevel(this,1,3);
      break;
    case 0xf:
      GetPlantAvatarAndLevel(this,2,2);
      break;
    case 0x10:
      GetPlantAvatarAndLevel(this,2,3);
      break;
    case 0x11:
      GetPlantAvatarAndLevel(this,3,2);
      break;
    case 0x12:
      GetPlantAvatarAndLevel(this,3,3);
      break;
    case 0x13:
      GetPlantAvatarAndLevel(this,4,2);
      break;
    case 0x14:
      GetPlantAvatarAndLevel(this,4,3);
      break;
    case 0x15:
      GetPlantAvatarAndLevel(this,5,2);
      break;
    case 0x16:
      GetPlantAvatarAndLevel(this,5,3);
      break;
    case 0x17:
      GetPlantAvatarAndLevel(this,6,2);
      break;
    case 0x18:
      GetPlantAvatarAndLevel(this,6,3);
      break;
    case 0x19:
      GetPlantAvatarAndLevel(this,7,2);
      break;
    case 0x1a:
      GetPlantAvatarAndLevel(this,7,3);
      break;
    case 0x1b:
      GetPlantAvatarAndLevel(this,8,2);
      break;
    case 0x1c:
      GetPlantAvatarAndLevel(this,8,3);
      break;
    case 0x1d:
      GetPlantAvatarAndLevel(this,9,2);
      break;
    case 0x1e:
      GetPlantAvatarAndLevel(this,9,3);
      break;
    case 0x1f:
      GetPlantAvatarAndLevel(this,10,2);
      break;
    case 0x20:
      GetPlantAvatarAndLevel(this,10,3);
      break;
    case 0x21:
      GetPlantAvatarAndLevel(this,0xb,2);
      break;
    case 0x22:
      GetPlantAvatarAndLevel(this,0xb,3);
      break;
    case 0xffffffff:
      GetBag(this,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::setupScreen() */

void __thiscall GetGemsRestoreUI::setupScreen(GetGemsRestoreUI *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  SalesProgressBar *this_00;
  PVZ2UIEditWidget *this_01;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_043c8b10(0x208);
  iVar3 = FUN_043c8b10(100);
  iVar4 = FUN_043c8b10(0x1c2);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::Insets::Insets((Insets *)&local_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,iVar4);
  *(undefined8 *)(this + 0x110) = local_40;
  *(undefined8 *)(this + 0x118) = uStack_38;
  FUN_05478178(awStack_80,&DAT_056f11a8,(Insets *)&local_40);
  nop();
  iVar3 = FUN_043c8b10(0x121);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_043c8b10(0x1c8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04bd8);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar2 - iVar3) / 2,iVar4,iVar3,iVar5);
  this_01 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (this_01,(TRect *)&local_40,0,(EditListener *)(this + 0xe0),awStack_80,true);
  lVar9 = *(long *)this_01;
  *(PVZ2UIEditWidget **)(this + 0xf0) = this_01;
  (**(code **)(lVar9 + 0x170))(this_01,2,&PrimeText_Game::Color_Description_Brown);
  plVar10 = *(long **)(this + 0xf0);
  pcVar11 = *(code **)(*plVar10 + 0x170);
  Sexy::Color::Color((Color *)&local_40,1);
  (*pcVar11)(plVar10,0,(Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_78,L"[BUTTON_CANCEL]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,1000,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  plVar10 = *(long **)(this + 0xf8);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar3 = FUN_043c8b10(100);
  iVar4 = FUN_043c8b10(0x55);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_043c8b10(0x208);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c28);
  (*pcVar11)(plVar10,(iVar2 - iVar3) / 2 - iVar4,uVar6,iVar3,*(undefined4 *)(lVar9 + 0x3c));
  pPVar7 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b04d50,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04bd8,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar10 = *(long **)(this + 0xf8);
  pcVar11 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar11)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  FUN_05478178(awStack_78,L"[PLANT_OBTAIN]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x3e9,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  plVar10 = *(long **)(this + 0x108);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar3 = FUN_043c8b10(100);
  iVar4 = FUN_043c8b10(0x55);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_043c8b10(0x208);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c28);
  (*pcVar11)(plVar10,iVar4 + (iVar2 - iVar3) / 2,uVar6,iVar3,*(undefined4 *)(lVar9 + 0x3c));
  pPVar7 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b04d50,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04bd8,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar10 = *(long **)(this + 0x108);
  pcVar11 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar11)(plVar10,uVar8);
  (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x3ea,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  plVar10 = *(long **)(this + 0x100);
  pcVar11 = *(code **)(*plVar10 + 0x198);
  iVar3 = FUN_043c8b10(100);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_043c8b10(0x208);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c28);
  (*pcVar11)(plVar10,(iVar2 - iVar3) / 2,uVar6,iVar3,*(undefined4 *)(lVar9 + 0x3c));
  pPVar7 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b04d50,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b04bd8,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar10 = *(long **)(this + 0x100);
  pcVar11 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar11)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::GetGemsRestoreUI() */

void __thiscall GetGemsRestoreUI::GetGemsRestoreUI(GetGemsRestoreUI *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)(this + 0xe8));
  *(undefined ***)this = &PTR_GetClass_06846120;
  *(undefined **)(this + 0xd8) = &DAT_06846480;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_068464c8;
  *(undefined ***)(this + 0xe8) = &PTR_ToString_068464f8;
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  this[0x121] = (GetGemsRestoreUI)0x0;
  FUN_05476574(this + 0x140);
  FUN_05476574(this + 0x148);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0x120] = (GetGemsRestoreUI)0x0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 300) = 0;
  this[0x128] = (GetGemsRestoreUI)0x0;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04da8);
  *(undefined8 *)(this + 0x138) = uVar1;
  TodStringTranslate(L"[GEMS_RESTORE_TITLE]");
  FUN_054766c8(this + 0x140,asStack_10);
  FUN_05476c50(asStack_10);
  TodStringTranslate(L"[GEMS_RESTORE_TIP]");
  FUN_054766c8(this + 0x148,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  setupScreen(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::drawShadedBox(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
GetGemsRestoreUI::drawShadedBox(undefined8 param_1_00,Graphics *param_1,Insets *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Image *pIVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04cb8);
  iVar1 = *(int *)(lVar5 + 0x38);
  Sexy::Insets::Insets((Insets *)&local_18);
  fVar10 = (float)(iVar1 / 3);
  local_14 = *(int *)(param_3 + 4) + (int)(fVar10 * 0.35);
  local_18 = *(int *)param_3 + (int)(fVar10 * 0.43);
  local_10 = *(int *)(param_3 + 8) + (int)(fVar10 * 0.43) * -2;
  local_c = (*(int *)(param_3 + 0xc) - (int)(fVar10 * 0.35)) - (int)(fVar10 * 0.4);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  iVar1 = *(int *)(param_3 + 0xc);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e30);
  iVar8 = *(int *)(param_3 + 8);
  iVar4 = 0;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    iVar4 = iVar1 / *(int *)(lVar5 + 0x3c);
  }
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e30);
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x38) != 0) {
    iVar1 = iVar8 / *(int *)(lVar5 + 0x38);
  }
  if (-1 < iVar1) {
    do {
      if (-2 < iVar4) {
        iVar8 = 0;
        do {
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e30);
          iVar2 = *(int *)(lVar5 + 0x38);
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e30);
          iVar3 = iVar8 * *(int *)(lVar5 + 0x3c);
          iVar8 = iVar8 + 1;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e30);
          Sexy::Graphics::DrawImage(param_1,pIVar6,iVar9 * iVar2,iVar3);
        } while (iVar8 != iVar4 + 2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  Sexy::Insets::Insets((Insets *)&local_18,param_3);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04cb8);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::Draw(Sexy::Graphics*) */

void __thiscall GetGemsRestoreUI::Draw(GetGemsRestoreUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0x110),*(int *)(this + 0x114));
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x118),*(int *)(this + 0x11c));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  drawShadedBox(this,param_1,aIStack_18);
  Sexy::Graphics::Translate(param_1,-*(int *)(this + 0x110),-*(int *)(this + 0x114));
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04cb8);
  iVar1 = *(int *)(this + 0x110);
  iVar6 = *(int *)(this + 0x11c);
  iVar4 = *(int *)(this + 0x114);
  fVar14 = (float)(*(int *)(lVar8 + 0x38) / 3);
  iVar13 = (int)(fVar14 * 0.43);
  iVar2 = FUN_043c8b10(0x88);
  iVar3 = FUN_043c8b10(3);
  Sexy::Insets::Insets
            (aIStack_18,iVar13 + iVar1,(((iVar4 + iVar6) - iVar2) - (int)(fVar14 * 0.4)) - iVar3,
             *(int *)(this + 0x118) + iVar13 * -2,iVar2);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c50);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04d80);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04d80);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar6 = *(int *)(this + 0x54);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04d80);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar3 = FUN_043c8b10(0x23);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04d80);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04d80);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(iVar1 - iVar4) / 2,(iVar6 - iVar2) / 2 - iVar3,iVar13,iVar5);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04da8);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04da8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar6 = *(int *)(this + 0x54);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04da8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar3 = FUN_043c8b10(0x23);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04da8);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04da8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(iVar1 - iVar4) / 2,(iVar6 - iVar2) / 2 - iVar3,iVar13,iVar5);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c00);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c00);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = FUN_043c8b10(0x41);
  iVar6 = *(int *)(this + 0x114);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c00);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04c00);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar1 - iVar4) / 2,iVar6 - iVar2,iVar3,iVar13);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e60);
  iVar1 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e60);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = FUN_043c8b10(0x12);
  iVar6 = *(int *)(this + 0x114);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e60);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b04e60);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar1 - iVar4) / 2,iVar6 - iVar2,iVar3,iVar13);
  iVar6 = FUN_043c8b10(0x12);
  iVar1 = *(int *)(this + 0x114);
  iVar4 = FUN_043c8b10(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0x110),iVar1 - iVar6,*(int *)(this + 0x118),iVar4)
  ;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x140,aIStack_28,uVar9,aIStack_18,5,1);
  if (this[0x120] == (GetGemsRestoreUI)0x0) {
    TodStringTranslate(L"[GEMS_RESTORE_TIP]");
    iVar1 = *(int *)(this + 0x114);
    iVar6 = *(int *)(this + 0x11c);
    iVar4 = FUN_043c8b10(0x88);
    iVar2 = FUN_043c8b10(0xc);
    iVar3 = FUN_043c8b10(0x37);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x110),((iVar1 + iVar6) - iVar4) - iVar2,
               *(int *)(this + 0x118),iVar3);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  else {
    TodStringTranslate(L"[GEMS_RESTORE_BUSY_TIP]");
    iVar3 = FUN_043c8b10(10);
    iVar1 = *(int *)(this + 0x114);
    iVar6 = *(int *)(this + 0x110);
    iVar4 = *(int *)(this + 0x11c);
    iVar13 = FUN_043c8b10(0x88);
    iVar5 = FUN_043c8b10(0x18);
    iVar2 = *(int *)(this + 0x118);
    iVar7 = FUN_043c8b10(0x69);
    Sexy::Insets::Insets(aIStack_28,iVar3 + iVar6,(iVar1 + iVar4) - iVar13,iVar2 - iVar5,iVar7);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,2,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetGemsRestoreUI::ButtonPress(int) */

void GetGemsRestoreUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to GetGemsRestoreUI::ButtonPress(int) */

void __thiscall GetGemsRestoreUI::ButtonPress(GetGemsRestoreUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* GetGemsRestoreUI::Update() */

void __thiscall GetGemsRestoreUI::Update(GetGemsRestoreUI *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((this[0x120] != (GetGemsRestoreUI)0x0) &&
     (fVar3 = (float)PVZ_RealT(), *(float *)(this + 0x124) < fVar3)) {
    this[0x120] = (GetGemsRestoreUI)0x0;
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),1);
    (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),0);
  }
  cVar1 = (**(code **)(*gLawnApp + 0x348))(gLawnApp);
  if ((cVar1 == '\0') || (this[0x121] != (GetGemsRestoreUI)0x0)) {
    cVar1 = (**(code **)(*gLawnApp + 0x348))(gLawnApp);
    if ((cVar1 == '\0') && (this[0x121] != (GetGemsRestoreUI)0x0)) {
      this[0x121] = (GetGemsRestoreUI)0x0;
      iVar2 = FUN_043c8b10(200);
      (**(code **)(*(long *)this + 0x1a8))
                (this,*(undefined4 *)(this + 0x48),iVar2 + *(int *)(this + 0x4c));
      return;
    }
  }
  else {
    this[0x121] = (GetGemsRestoreUI)0x1;
    iVar2 = FUN_043c8b10(200);
    (**(code **)(*(long *)this + 0x1a8))
              (this,*(undefined4 *)(this + 0x48),*(int *)(this + 0x4c) - iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::OnRequestFinished(std::string) */

void __thiscall GetGemsRestoreUI::OnRequestFinished(GetGemsRestoreUI *this,string *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Value *this_00;
  char *__s;
  PVZ2UIDialog *pPVar7;
  PVZDB *pPVar8;
  RtName *this_01;
  CompensatedAwardList *this_02;
  string *extraout_x1;
  undefined1 auStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  string asStack_128 [8];
  wstring awStack_120 [8];
  wstring awStack_118 [8];
  wstring awStack_110 [8];
  string asStack_108 [24];
  MD5 aMStack_f0 [112];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillNetConnectingUI(gLawnApp);
  bVar2 = std::operator==(param_2,"");
  if (bVar2) {
    *(undefined4 *)(this + 0x130) = 0;
    pLVar1 = gLawnApp;
    FUN_05478178((wstring *)asStack_108,L"[NETWORK_NOT_CONNECTED_TITLE]",awStack_118);
    FUN_05478178((wstring *)aSStack_80,L"[NETWORK_NOT_CONNECTED_TEXT]",awStack_110);
    pPVar7 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)asStack_108,(wstring *)aSStack_80);
    FUN_05476c50((wstring *)aSStack_80);
    nop();
    FUN_05476c50((wstring *)asStack_108);
    nop();
    FUN_05478178((wstring *)asStack_108,L"[BUTTON_OK]",awStack_110);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialog);
    Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>
              ((Delegate0 *)aMStack_f0,(wstring *)aSStack_80);
    PVZ2UIDialog::AddButton(pPVar7,(wstring *)asStack_108,(Delegate0 *)aMStack_f0,0);
    FUN_05476c50((wstring *)asStack_108);
    nop();
    systemBusy(this);
    goto LAB_043cc78c;
  }
  Sexy::StructuredData::StructuredData(aSStack_80);
  StringHelper::ReadJson(param_2,aSStack_80);
  this_00 = (Value *)Sexy::StructuredData::ObjectForPath(aSStack_80,"$.d");
  if (this_00 != (Value *)0x0) {
    uVar4 = Sexy::StructuredData::Value::IntegerForPath(this_00,".r",-1);
    __s = (char *)Sexy::StructuredData::Value::StringForPath(this_00,".s","");
    std::string::string(asStack_138,__s);
    nop();
    iVar5 = Sexy::StructuredData::Value::IntegerForPath(this_00,".t",0);
    iVar6 = Sexy::StructuredData::Value::IntegerForPath(this_00,".n",0);
    Sexy::StrFormat("%d%dEA82E706D5A67",asStack_130,(ulong)uVar4,(ulong)*(uint *)(this + 0x130));
    MD5::MD5(aMStack_f0,asStack_130);
    MD5::toString();
    FUN_05474278(asStack_130,asStack_108);
    std::string::~string(asStack_108);
    bVar2 = std::operator!=(asStack_138,"");
    if ((bVar2) &&
       (cVar3 = std::operator==(asStack_138,asStack_130), pLVar1 = gLawnApp, cVar3 != '\0')) {
      if ((int)uVar4 < 1) {
        if (iVar5 == 0 && iVar6 == 0) {
          FUN_05478178(awStack_110,L"[GEMS_RESTORE_CODE_ERROR_TITLE]",awStack_120);
          FUN_05478178(asStack_108,L"[GEMS_RESTORE_CODE_ERROR_CONTENT]",awStack_118);
          pPVar7 = (PVZ2UIDialog *)
                   LawnApp::ShowPVZ2Dialog(pLVar1,awStack_110,(wstring *)asStack_108);
          FUN_05476c50(asStack_108);
          nop();
          FUN_05476c50(awStack_110);
          nop();
          FUN_05478178(awStack_110,L"[BUTTON_OK]",awStack_118);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onCloseDialog);
          Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>
                    ((Delegate0 *)aMStack_f0,asStack_108);
          goto LAB_043cc748;
        }
        switch(iVar5) {
        case 0:
          GetDoubleSpeedUp(this);
          break;
        case 1:
          GetCherryBomb(this);
          break;
        case 2:
          GetDoubleCoin(this);
          break;
        case 3:
          GetDoubleLottery(this);
          break;
        case 4:
          nop();
          break;
        case 5:
          GetThreepeaterAvatar(this);
          break;
        case 6:
          GetCherryBombAvatar(this);
          break;
        case 7:
          GetIceburgAvatar(this);
          break;
        case 8:
          GetCarrotLauncherPiece(this);
          break;
        default:
          pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
          this_01 = (RtName *)PVZDB::GetTable(pPVar8,0x65);
          Sexy::RtName::RtName((RtName *)asStack_108,L"CompensatedAwardList");
          Sexy::RtDbTable::GetIdForAlias(this_01);
          Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_01,(RtId *)awStack_110);
          nop();
          Sexy::RtId::~RtId((RtId *)awStack_110);
          Sexy::RtName::~RtName((RtName *)asStack_108);
          Set8BytesTo0(asStack_128);
          if ((this_02 == (CompensatedAwardList *)0x0) ||
             (cVar3 = CompensatedAwardList::AddCompensatedAward(this_02,iVar5,asStack_128),
             cVar3 == '\0')) {
            Sexy::OutputDebugStrF
                      ((wchar_t *)
                       "GetGemsRestoreUI::OnRequestFinished, the recharge code type is invalid.");
          }
          else {
            (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
            (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
            (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
            (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
            FUN_05476574(awStack_120);
            FUN_05476574(awStack_118);
            cVar3 = FUN_0547419c(asStack_128);
            if (cVar3 == '\0') {
              FUN_054772c4(awStack_120,L"[GEMS_RESTORE_CODE_RECHARGE_SUCCEED_TITLE]");
              Sexy::StringToWString((Sexy *)asStack_128,extraout_x1);
              TodStringTranslate(awStack_110);
              FUN_054766c8(awStack_118,asStack_108);
              FUN_05476c50(asStack_108);
              FUN_05476c50((RtId *)awStack_110);
            }
            else {
              FUN_054772c4(awStack_120,&DAT_056f11a8);
              FUN_054772c4(awStack_118,L"[GEMS_RESTORE_CODE_SUCCEED_TITLE]");
            }
            pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(gLawnApp,awStack_120,awStack_118);
            FUN_05478178((RtId *)awStack_110,L"[BUTTON_OK]",auStack_140);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,onCloseDialogAndCloseSelf);
            Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>
                      ((Delegate0 *)aMStack_f0,asStack_108);
            PVZ2UIDialog::AddButton(pPVar7,(RtId *)awStack_110,aMStack_f0,1);
            FUN_05476c50((RtId *)awStack_110);
            nop();
            FUN_05476c50(awStack_118);
            FUN_05476c50(awStack_120);
          }
          std::string::~string(asStack_128);
          break;
        case 0xb:
          GetPlantAvatarAndLevel(this,0,2);
          break;
        case 0xc:
          GetPlantAvatarAndLevel(this,0,3);
          break;
        case 0xd:
          GetPlantAvatarAndLevel(this,1,2);
          break;
        case 0xe:
          GetPlantAvatarAndLevel(this,1,3);
          break;
        case 0xf:
          GetPlantAvatarAndLevel(this,2,2);
          break;
        case 0x10:
          GetPlantAvatarAndLevel(this,2,3);
          break;
        case 0x11:
          GetPlantAvatarAndLevel(this,3,2);
          break;
        case 0x12:
          GetPlantAvatarAndLevel(this,3,3);
          break;
        case 0x13:
          GetPlantAvatarAndLevel(this,4,2);
          break;
        case 0x14:
          GetPlantAvatarAndLevel(this,4,3);
          break;
        case 0x15:
          GetPlantAvatarAndLevel(this,5,2);
          break;
        case 0x16:
          GetPlantAvatarAndLevel(this,5,3);
          break;
        case 0x17:
          GetPlantAvatarAndLevel(this,6,2);
          break;
        case 0x18:
          GetPlantAvatarAndLevel(this,6,3);
          break;
        case 0x19:
          GetPlantAvatarAndLevel(this,7,2);
          break;
        case 0x1a:
          GetPlantAvatarAndLevel(this,7,3);
          break;
        case 0x1b:
          GetPlantAvatarAndLevel(this,8,2);
          break;
        case 0x1c:
          GetPlantAvatarAndLevel(this,8,3);
          break;
        case 0x1d:
          GetPlantAvatarAndLevel(this,9,2);
          break;
        case 0x1e:
          GetPlantAvatarAndLevel(this,9,3);
          break;
        case 0x1f:
          GetPlantAvatarAndLevel(this,10,2);
          break;
        case 0x20:
          GetPlantAvatarAndLevel(this,10,3);
          break;
        case 0x21:
          GetPlantAvatarAndLevel(this,0xb,2);
          break;
        case 0x22:
          GetPlantAvatarAndLevel(this,0xb,3);
        }
      }
      else {
        GetBag(this,uVar4);
      }
    }
    else {
      pLVar1 = gLawnApp;
      FUN_05478178(awStack_110,L"[NETWORK_NOT_CONNECTED_TITLE]",awStack_120);
      FUN_05478178(asStack_108,L"[NETWORK_NOT_CONNECTED_TEXT]",awStack_118);
      pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_110,(wstring *)asStack_108);
      FUN_05476c50(asStack_108);
      nop();
      FUN_05476c50(awStack_110);
      nop();
      FUN_05478178(awStack_110,L"[BUTTON_OK]",awStack_118);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCloseDialog);
      Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>
                ((Delegate0 *)aMStack_f0,asStack_108);
LAB_043cc748:
      PVZ2UIDialog::AddButton(pPVar7,awStack_110,aMStack_f0,1);
      FUN_05476c50(awStack_110);
      nop();
      systemBusy(this);
    }
    std::string::~string(asStack_130);
    std::string::~string(asStack_138);
  }
  *(undefined4 *)(this + 0x130) = 0;
  Sexy::StructuredData::~StructuredData(aSStack_80);
LAB_043cc78c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestCompleted
          (GetGemsRestoreUI *this,StructuredData *param_1,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  MD5 aMStack_198 [112];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    pcVar2 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.i","none");
    std::string::string(asStack_1a0,pcVar2);
    bVar1 = std::operator!=("V3",asStack_1a0);
    std::string::~string(asStack_1a0);
    nop();
    if (bVar1) {
      pcVar4 = "PVZRechargeCheckServer::ServiceRequestCompleted reqId = [%s]";
    }
    else {
      pcVar3 = (char *)Sexy::StructuredData::IntegerForPath(param_1,"$.r",-1);
      if (pcVar3 == (char *)0x0) {
        pcVar4 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.e","none");
        memset(acStack_108,0,0x100);
        std::string::string(asStack_1a0,pcVar4);
        bVar1 = std::operator!=("none",asStack_1a0);
        std::string::~string(asStack_1a0);
        nop();
        if (bVar1) {
          std::string::string(asStack_1a0,pcVar2);
          std::operator+("ila&master",asStack_1a0);
          std::string::~string(asStack_1a0);
          nop();
          MD5::MD5(aMStack_198,asStack_1a8);
          MD5::toString();
          FUN_05474278(asStack_1a8,asStack_1a0);
          std::string::~string(asStack_1a0);
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          lVar5 = FUN_0547429c(asStack_1a8);
          local_128 = *(undefined8 *)(lVar5 + 3);
          uStack_120 = *(undefined8 *)(lVar5 + 0xb);
          local_118 = *(undefined8 *)(lVar5 + 0x13);
          pcVar2 = (char *)FUN_0547429c(asStack_1a8);
          PCPDecrypt(pcVar4,acStack_108,0x100,pcVar2,(char *)&local_128);
          std::string::~string(asStack_1a8);
        }
        std::string::string(asStack_1a8,acStack_108);
        nop();
        uVar6 = FUN_0547429c(asStack_1a8);
        Sexy::OutputDebugStrF((wchar_t *)"i_json[%s]",uVar6);
        FUN_05475d88(asStack_1a0,asStack_1a8);
        OnRequestFinished(param_2,asStack_1a0);
        std::string::~string(asStack_1a0);
        std::string::~string(asStack_1a8);
        goto LAB_043cce4c;
      }
      pcVar4 = "PVZRechargeCheckServer::ServiceRequestCompleted result = [%d]";
      pcVar2 = pcVar3;
    }
    Sexy::OutputDebugStrF((wchar_t *)pcVar4,pcVar2);
    (**(code **)(*(long *)param_2 + 0x328))(param_2,param_1,param_2);
  }
LAB_043cce4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GetGemsRestoreUI::ServiceRequestCompleted(Sexy::StructuredData const*, void
   const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestCompleted
          (GetGemsRestoreUI *this,StructuredData *param_1,void *param_2)

{
  ServiceRequestCompleted(this + -0xe8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::TryRequest() */

void __thiscall GetGemsRestoreUI::TryRequest(GetGemsRestoreUI *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  PVZDB *pPVar9;
  RtName *this_00;
  long extraout_x0;
  NetworkServiceManager *this_01;
  size_t __n;
  string asStack_160 [8];
  string asStack_158 [8];
  string asStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  RtId aRStack_128 [8];
  string asStack_120 [16];
  MD5 aMStack_110 [112];
  string asStack_a0 [120];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 300) < 0) {
    std::string::string(asStack_a0,"");
    OnRequestFinished(this,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
  }
  else {
    std::string::string(asStack_160,"V3");
    nop();
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    Sexy::ToString((wstring *)(*(long *)(this + 0xf0) + 0xe8));
    uVar3 = time((time_t *)0x0);
    Sexy::SRand(uVar3);
    uVar1 = Sexy::Rand();
    __n = (size_t)uVar1;
    *(uint *)(this + 0x130) = uVar1;
    uVar4 = FUN_0547429c(asStack_158);
    uVar5 = FUN_0547429c(asStack_150);
    Sexy::StrFormat("%s%d%sA7198D8B54ABE",asStack_148,uVar4,__n,uVar5);
    MD5::MD5(aMStack_110,asStack_148);
    MD5::toString();
    FUN_05474278(asStack_148,asStack_a0);
    std::string::~string(asStack_a0);
    Set8BytesTo0(asStack_140);
    std::string::append(asStack_140,"{",__n);
    FUN_031f5e7c(asStack_120," \"uu\" : \"",asStack_158);
    std::operator+(asStack_120,"\",");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    FUN_031f5e7c(asStack_120," \"s\" : \"",asStack_148);
    std::operator+(asStack_120,"\",");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    Sexy::StrFormat(" \"r\" : %d,",asStack_a0,(ulong)*(uint *)(this + 0x130));
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    FUN_031f5e7c(asStack_120," \"c\" : \"",asStack_150);
    std::operator+(asStack_120,"\"");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    FUN_05475ad8(asStack_140,&DAT_05593340);
    FUN_031f5e7c(asStack_138,"ila&master",asStack_160);
    MD5::MD5(aMStack_110,asStack_138);
    MD5::toString();
    FUN_05474278(asStack_138,asStack_a0);
    std::string::~string(asStack_a0);
    local_28 = 0;
    uStack_20 = 0;
    uStack_10 = 0;
    lVar6 = FUN_0547429c(asStack_138);
    local_28 = *(undefined8 *)(lVar6 + 3);
    uStack_20 = *(undefined8 *)(lVar6 + 0xb);
    local_18 = *(undefined8 *)(lVar6 + 0x13);
    pcVar7 = (char *)FUN_0547429c(asStack_140);
    iVar2 = FUN_05474184(asStack_140);
    pcVar8 = (char *)FUN_0547429c(asStack_138);
    PCPEncryptStr(pcVar7,iVar2,pcVar8,(char *)&local_28);
    uVar4 = FUN_0547429c(asStack_130);
    Sexy::OutputDebugStrF((wchar_t *)"VerifyNewPlayerPackageCode encodeString=[%s]\n",uVar4);
    Sexy::StructuredData::StructuredData((StructuredData *)asStack_a0);
    Sexy::StructuredData::BeginObject((StructuredData *)asStack_a0);
    pPVar9 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtName *)PVZDB::GetTable(pPVar9,0x3b);
    Sexy::RtName::RtName((RtName *)asStack_120,L"RechargeCheckConfig");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_128);
    nop();
    Sexy::RtId::~RtId(aRStack_128);
    Sexy::RtName::~RtName((RtName *)asStack_120);
    Sexy::StructuredData::AddString
              ((StructuredData *)asStack_a0,"url",(string *)(extraout_x0 + 0x10));
    Sexy::StructuredData::AddInteger((StructuredData *)asStack_a0,"timeout",0x1e);
    Sexy::StructuredData::BeginObject((StructuredData *)asStack_a0,"formData");
    Sexy::StructuredData::AddString((StructuredData *)asStack_a0,"req",asStack_160);
    Sexy::StructuredData::AddString((StructuredData *)asStack_a0,"e",asStack_130);
    Sexy::StructuredData::EndObject((StructuredData *)asStack_a0);
    Sexy::StructuredData::EndObject((StructuredData *)asStack_a0);
    this_01 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest
              (this_01,(StructuredData *)asStack_a0,(NetworkServiceListener *)(this + 0xe8),this);
    *(int *)(this + 300) = *(int *)(this + 300) + -1;
    Sexy::StructuredData::~StructuredData((StructuredData *)asStack_a0);
    std::string::~string(asStack_130);
    std::string::~string(asStack_138);
    std::string::~string(asStack_140);
    std::string::~string(asStack_148);
    std::string::~string(asStack_150);
    std::string::~string(asStack_158);
    std::string::~string(asStack_160);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetGemsRestoreUI::RequestRechargeCheck(int) */

void __thiscall GetGemsRestoreUI::RequestRechargeCheck(GetGemsRestoreUI *this,int param_1)

{
  if (*(int *)(this + 0x130) != 0) {
    return;
  }
  *(int *)(this + 300) = param_1;
  TryRequest(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetGemsRestoreUI::ButtonDepress(int) */

void __thiscall GetGemsRestoreUI::ButtonDepress(GetGemsRestoreUI *this,int param_1)

{
  LawnApp *this_00;
  char *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
    this_00 = gLawnApp;
    std::string::string(asStack_10,"[NET_CONNECTING]");
    LawnApp::ShowNetConnectingUI(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    RequestRechargeCheck(this,0);
  }
  else if ((param_1 == 0x3ea) || (param_1 == 1000)) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
    LawnApp::KillGetGemsRestoreUI(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GetGemsRestoreUI::ButtonDepress(int) */

void __thiscall GetGemsRestoreUI::ButtonDepress(GetGemsRestoreUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* GetGemsRestoreUI::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestFailed(GetGemsRestoreUI *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"PVZRechargeCheckServer::ServiceRequestFailed error");
  TryRequest(param_2);
  return;
}


/* non-virtual thunk to GetGemsRestoreUI::ServiceRequestFailed(Sexy::StructuredData const*, void
   const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestFailed(GetGemsRestoreUI *this,StructuredData *param_1,void *param_2)

{
  ServiceRequestFailed(this + -0xe8,param_1,param_2);
  return;
}


/* GetGemsRestoreUI::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestCompleted(GetGemsRestoreUI *this,Image **param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this);
  return;
}


/* non-virtual thunk to GetGemsRestoreUI::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestCompleted(GetGemsRestoreUI *this,Image **param_1,void *param_2)

{
  ServiceRequestCompleted(this + -0xe8,param_1,param_2);
  return;
}


/* GetGemsRestoreUI::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
GetGemsRestoreUI::ServiceRequestCompleted(GetGemsRestoreUI *this,Buffer *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this);
  return;
}


/* non-virtual thunk to GetGemsRestoreUI::ServiceRequestCompleted(Sexy::Buffer const*, void const*)
    */

void __thiscall
GetGemsRestoreUI::ServiceRequestCompleted(GetGemsRestoreUI *this,Buffer *param_1,void *param_2)

{
  ServiceRequestCompleted(this + -0xe8,param_1,param_2);
  return;
}

