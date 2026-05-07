// Class: CServerTimeHandler_LoginReward


/* CServerTimeHandler_LoginReward::CServerTimeHandler_LoginReward() */

void __thiscall
CServerTimeHandler_LoginReward::CServerTimeHandler_LoginReward(CServerTimeHandler_LoginReward *this)

{
  CServerTimeHandler::CServerTimeHandler((CServerTimeHandler *)this);
  *(undefined ***)this = &PTR_nop_06934750;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CServerTimeHandler_LoginReward::OnServerTimeGet(bool, long) */

void __thiscall
CServerTimeHandler_LoginReward::OnServerTimeGet
          (CServerTimeHandler_LoginReward *this,bool param_1,long param_2)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    FUN_05478178(awStack_58,L"[DAILY_REWARD_ERROR_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[DAILY_REWARD_ERROR_CONTENT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    cVar1 = LawnApp::ShowDailySignReward(gLawnApp,false);
    if (cVar1 != '\0') goto LAB_04a4bf74;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
LAB_04a4bf74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

