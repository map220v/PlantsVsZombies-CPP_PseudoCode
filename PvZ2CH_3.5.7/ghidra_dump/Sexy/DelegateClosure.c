// Class: Sexy::DelegateClosure<Sexy::AndroidHttpTransaction::ReceivedDataCallback,Sexy::Delegate0>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DelegateClosure<Sexy::AndroidHttpTransaction::ReceivedDataCallback,
   Sexy::Delegate0>::DelegateClosure() */

void __thiscall
Sexy::DelegateClosure<Sexy::AndroidHttpTransaction::ReceivedDataCallback,Sexy::Delegate0>::
DelegateClosure(DelegateClosure<Sexy::AndroidHttpTransaction::ReceivedDataCallback,Sexy::Delegate0>
                *this)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Delegate0::Delegate0((Delegate0 *)this,(DummyInit *)0x0);
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AndroidHttpTransaction::ReceivedDataCallback::Func);
  Delegate0::
  Delegate0<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (aDStack_38,aCStack_50);
  Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)this,(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

