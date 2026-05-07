// Class: MergeNetworkServiceListener


/* MergeNetworkServiceListener::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
MergeNetworkServiceListener::ServiceRequestFailed
          (MergeNetworkServiceListener *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = PvZ2NetworkServiceListener::isMyRequest((PvZ2NetworkServiceListener *)this,param_2);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x48))(this,&DAT_06ae1090,param_1);
  }
  return;
}


/* MergeNetworkServiceListener::MergeNetworkServiceListener(MessageRouter&) */

void __thiscall
MergeNetworkServiceListener::MergeNetworkServiceListener
          (MergeNetworkServiceListener *this,MessageRouter *param_1)

{
  PvZ2NetworkServiceListener::PvZ2NetworkServiceListener((PvZ2NetworkServiceListener *)this);
  *(MessageRouter **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_ToString_067922e0;
  return;
}


/* MergeNetworkServiceListener::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
MergeNetworkServiceListener::ServiceRequestCompleted
          (MergeNetworkServiceListener *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  char *__s1;
  
  cVar1 = PvZ2NetworkServiceListener::isMyRequest((PvZ2NetworkServiceListener *)this,param_2);
  if (cVar1 == '\0') {
    return;
  }
  __s1 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.status","fail");
  iVar2 = strcmp(__s1,"fail");
  if (iVar2 != 0) {
    MessageRouter::Post<Sexy::StructuredData_const*,Sexy::StructuredData_const*>
              (*(MessageRouter **)(this + 0x10),Message::UpdateAccountId,param_1);
    (**(code **)(*(long *)this + 0x50))(this,&DAT_06ae1090,param_1);
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this,&DAT_06ae1090,param_1);
  return;
}

