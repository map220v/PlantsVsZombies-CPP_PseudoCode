// Class: NetWorkEvent


/* NetWorkEvent::NetWorkEvent() */

void __thiscall NetWorkEvent::NetWorkEvent(NetWorkEvent *this)

{
  *(undefined ***)this = &PTR_nop_0660f750;
  return;
}


/* NetWorkEvent::IsTimeOut(long) */

char __thiscall NetWorkEvent::IsTimeOut(NetWorkEvent *this,long param_1)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  if (*(code **)(*(long *)this_01 + 0x28) == INetworkMsgProcess::IsLogined) {
    cVar1 = INetworkMsgProcess::IsLogined(this_01);
  }
  else {
    cVar1 = (**(code **)(*(long *)this_01 + 0x28))();
  }
  if (cVar1 != '\0') {
    if (*(long *)(this + 0x10) <= *(long *)(this + 8)) {
      return '\0';
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  return cVar1;
}

