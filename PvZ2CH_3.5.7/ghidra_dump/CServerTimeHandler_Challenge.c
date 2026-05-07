// Class: CServerTimeHandler_Challenge


/* CServerTimeHandler_Challenge::CServerTimeHandler_Challenge(int) */

void __thiscall
CServerTimeHandler_Challenge::CServerTimeHandler_Challenge
          (CServerTimeHandler_Challenge *this,int param_1)

{
  CServerTimeHandler::CServerTimeHandler((CServerTimeHandler *)this);
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &PTR_nop_069346f0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CServerTimeHandler_Challenge::OnServerTimeGet(bool, long) */

void CServerTimeHandler_Challenge::OnServerTimeGet(bool param_1,long param_2)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xffU) == 0) {
    FUN_05478178(awStack_58,L"[DAILY_REWARD_ERROR_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NET_WORK_FAILD]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,param_2 & 0xff);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    LawnApp::ShowStarLevelChallengeUINow(gLawnApp,*(int *)((ulong)param_1 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

