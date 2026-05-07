// Class: Sexy::AndroidHttpTransaction::ReceivedDataCallback


/* Sexy::AndroidHttpTransaction::ReceivedDataCallback::Func() */

void __thiscall Sexy::AndroidHttpTransaction::ReceivedDataCallback::Func(ReceivedDataCallback *this)

{
  OnReceivedData(*(AndroidHttpTransaction **)(this + 0x30),*(void **)(this + 0x38),
                 *(ulong *)(this + 0x40));
  ReleaseReceivedDataCallback(*(AndroidHttpTransaction **)(this + 0x30),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::ReceivedDataCallback::ReceivedDataCallback() */

void __thiscall
Sexy::AndroidHttpTransaction::ReceivedDataCallback::ReceivedDataCallback(ReceivedDataCallback *this)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Delegate0::Delegate0((Delegate0 *)this,(DummyInit *)0x0);
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (this,Func);
  Delegate0::
  Delegate0<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (aDStack_38,aCStack_50);
  Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)this,(Delegate2 *)aDStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

