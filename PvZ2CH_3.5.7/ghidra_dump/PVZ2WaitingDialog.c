// Class: PVZ2WaitingDialog


/* PVZ2WaitingDialog::~PVZ2WaitingDialog() */

void __thiscall PVZ2WaitingDialog::~PVZ2WaitingDialog(PVZ2WaitingDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_068380a0;
  *(undefined **)(this + 0xd8) = &DAT_068383e8;
  PVZ2UIDialog::~PVZ2UIDialog((PVZ2UIDialog *)this);
  return;
}


/* PVZ2WaitingDialog::~PVZ2WaitingDialog() */

void __thiscall PVZ2WaitingDialog::~PVZ2WaitingDialog(PVZ2WaitingDialog *this)

{
  ~PVZ2WaitingDialog(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2WaitingDialog::OnClose() */

void __thiscall PVZ2WaitingDialog::OnClose(PVZ2WaitingDialog *this)

{
  int iVar1;
  
  iVar1 = FUN_04373ba8(*(undefined8 *)(this + 0x208),*(undefined8 *)(this + 0x218));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x200));
  }
  LawnApp::KillWaitingDialog(gLawnApp);
  return;
}


/* PVZ2WaitingDialog::SetCloseCallBack(Sexy::Delegate0) */

void __thiscall PVZ2WaitingDialog::SetCloseCallBack(PVZ2WaitingDialog *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x200),param_2);
  return;
}


/* PVZ2WaitingDialog::SetShowWaiting(bool) */

void __thiscall PVZ2WaitingDialog::SetShowWaiting(PVZ2WaitingDialog *this,bool param_1)

{
  this[0x1f9] = (PVZ2WaitingDialog)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2WaitingDialog::PVZ2WaitingDialog(std::wstring const&, int) */

void __thiscall
PVZ2WaitingDialog::PVZ2WaitingDialog(PVZ2WaitingDialog *this,wstring *param_1,int param_2)

{
  time_t tVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIDialog::PVZ2UIDialog((PVZ2UIDialog *)this);
  *(undefined ***)this = &PTR_GetClass_068380a0;
  *(undefined **)(this + 0xd8) = &DAT_068383e8;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x200),(DummyInit *)0x0);
  PVZ2UIDialog::SetHeaderLabel((PVZ2UIDialog *)this,param_1);
  *(int *)(this + 0x1e8) = param_2;
  tVar1 = time((time_t *)0x0);
  this[0x1f8] = (PVZ2WaitingDialog)0x0;
  *(time_t *)(this + 0x1f0) = tVar1;
  this[0x1f9] = (PVZ2WaitingDialog)0x1;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x200),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2WaitingDialog::Update() */

void __thiscall PVZ2WaitingDialog::Update(PVZ2WaitingDialog *this)

{
  time_t __time1;
  int iVar1;
  wchar_t *pwVar2;
  double dVar3;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1f8] == (PVZ2WaitingDialog)0x0) {
    __time1 = time((time_t *)0x0);
    dVar3 = difftime(__time1,*(time_t *)(this + 0x1f0));
    if ((double)*(int *)(this + 0x1e8) <= dVar3) {
      this[0x1f8] = (PVZ2WaitingDialog)0x1;
      TodStringTranslate(L"[DIALOG_WAITING_OVERTIME]");
      PVZ2UIDialog::SetFooterLabel((PVZ2UIDialog *)this,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05478178(awStack_58,L"[DIALOG_WAITING_FAIL_BACK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnClose);
      Sexy::Delegate0::Delegate0<PVZ2WaitingDialog,void(PVZ2WaitingDialog::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton((PVZ2UIDialog *)this,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
    else if ((*(int *)(this + 0x40) == (*(int *)(this + 0x40) / 10) * 10) &&
            (this[0x1f9] != (PVZ2WaitingDialog)0x0)) {
      iVar1 = (int)dVar3;
      if (iVar1 % 3 == 1) {
        TodStringTranslate(L"[DIALOG_WAITING]");
        pwVar2 = L"..";
      }
      else if (iVar1 % 3 == 2) {
        TodStringTranslate(L"[DIALOG_WAITING]");
        pwVar2 = L"...";
      }
      else {
        if (iVar1 != (iVar1 / 3) * 3) {
          TodStringTranslate(L"[DIALOG_WAITING]");
          PVZ2UIDialog::SetFooterLabel((PVZ2UIDialog *)this,awStack_50);
          FUN_05476c50(awStack_50);
          goto LAB_0437576c;
        }
        TodStringTranslate(L"[DIALOG_WAITING]");
        pwVar2 = L".";
      }
      std::operator+(awStack_58,pwVar2);
      PVZ2UIDialog::SetFooterLabel((PVZ2UIDialog *)this,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05476c50(awStack_58);
    }
  }
LAB_0437576c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2WaitingDialog::SetError() */

void __thiscall PVZ2WaitingDialog::SetError(PVZ2WaitingDialog *this)

{
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x1f8] = (PVZ2WaitingDialog)0x1;
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[DIALOG_WAITING_FAIL_BACK]");
  std::operator+(awStack_58,L".");
  PVZ2UIDialog::SetFooterLabel((PVZ2UIDialog *)this,awStack_50);
  FUN_05476c50(awStack_50);
  FUN_05476c50(awStack_58);
  FUN_05478178(awStack_58,L"[DIALOG_WAITING_FAIL_BACK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnClose);
  Sexy::Delegate0::Delegate0<PVZ2WaitingDialog,void(PVZ2WaitingDialog::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton((PVZ2UIDialog *)this,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

