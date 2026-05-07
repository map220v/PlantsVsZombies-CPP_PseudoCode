// Class: NetworkStatusDecider


/* NetworkStatusDecider::ShouldSendNetworkRequest() const */

undefined8 __thiscall NetworkStatusDecider::ShouldSendNetworkRequest(NetworkStatusDecider *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 8))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x10))(this), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


/* NetworkStatusDecider::networkReachable() const */

bool NetworkStatusDecider::networkReachable(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x48) + 0x20))
                    (*(long **)(Sexy::gSexyAppBase + 0x48));
  return iVar1 != 0;
}


/* NetworkStatusDecider::NetworkStatusDecider(std::ostream&) */

void __thiscall
NetworkStatusDecider::NetworkStatusDecider(NetworkStatusDecider *this,ostream *param_1)

{
  *(ostream **)(this + 8) = param_1;
  *(undefined ***)this = &PTR_ShouldSendNetworkRequest_06792d70;
  return;
}

