// Class: CServerTimeHandler_DailyReward


/* CServerTimeHandler_DailyReward::CServerTimeHandler_DailyReward() */

void __thiscall
CServerTimeHandler_DailyReward::CServerTimeHandler_DailyReward(CServerTimeHandler_DailyReward *this)

{
  CServerTimeHandler::CServerTimeHandler((CServerTimeHandler *)this);
  *(undefined ***)this = &PTR_nop_06934720;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CServerTimeHandler_DailyReward::OnServerTimeGet(bool, long) */

void __thiscall
CServerTimeHandler_DailyReward::OnServerTimeGet
          (CServerTimeHandler_DailyReward *this,bool param_1,long param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    FUN_05478178(awStack_58,L"[DAILY_REWARD_ERROR_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[DAILY_REWARD_ERROR_CONTENT]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    cVar2 = LawnApp::ShowDailySignReward(gLawnApp,false);
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_58,L"[DAILY_REWARD_ERROR_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[DAILY_REWARD_ERROR_CONTENT]",auStack_60);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

