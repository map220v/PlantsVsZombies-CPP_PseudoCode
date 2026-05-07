// Class: LoginSDKBase


/* LoginSDKBase::HandleOpenURLFunc(SexyURL const&) */

void LoginSDKBase::HandleOpenURLFunc(SexyURL *param_1)

{
  (**(code **)(*(long *)param_1 + 0x68))();
  return;
}


/* LoginSDKBase::RequestAuthorize(Sexy::Delegate1<int> const&) */

void __thiscall LoginSDKBase::RequestAuthorize(LoginSDKBase *this,Delegate1 *param_1)

{
  nop();
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x20),(Delegate2 *)param_1);
  return;
}

