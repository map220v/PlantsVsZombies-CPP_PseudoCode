// Class: Sexy::NetworkServiceManager::Slot


/* Sexy::NetworkServiceManager::Slot::Slot() */

void __thiscall Sexy::NetworkServiceManager::Slot::Slot(Slot *this)

{
  *(undefined8 *)this = 0;
  NetworkServiceRequest::NetworkServiceRequest
            ((NetworkServiceRequest *)(this + 8),(ResumableRequestInfo *)0x0,-1);
  StructuredData::StructuredData((StructuredData *)(this + 0x68));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* Sexy::NetworkServiceManager::Slot::IsFree() */

bool __thiscall Sexy::NetworkServiceManager::Slot::IsFree(Slot *this)

{
  int iVar1;
  
  iVar1 = NetworkServiceRequest::GetCancelState((NetworkServiceRequest *)(this + 8));
  if (*(long *)(this + 8) != 0) {
    return false;
  }
  return 1 < iVar1 - 1U;
}


/* Sexy::NetworkServiceManager::Slot::Slot(Sexy::NetworkServiceManager::Slot const&) */

void __thiscall Sexy::NetworkServiceManager::Slot::Slot(Slot *this,Slot *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  NetworkServiceRequest::NetworkServiceRequest
            ((NetworkServiceRequest *)(this + 8),(NetworkServiceRequest *)(param_1 + 8));
  StructuredData::StructuredData((StructuredData *)(this + 0x68),(StructuredData *)(param_1 + 0x68))
  ;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  return;
}


/* Sexy::NetworkServiceManager::Slot::~Slot() */

void __thiscall Sexy::NetworkServiceManager::Slot::~Slot(Slot *this)

{
  StructuredData::~StructuredData((StructuredData *)(this + 0x68));
  NetworkServiceRequest::~NetworkServiceRequest((NetworkServiceRequest *)(this + 8));
  return;
}

