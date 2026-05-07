// Class: OnlineDataPersistor


/* OnlineDataPersistor::~OnlineDataPersistor() */

void __thiscall OnlineDataPersistor::~OnlineDataPersistor(OnlineDataPersistor *this)

{
  *(undefined ***)this = &PTR__OnlineDataPersistor_067936c0;
  *(undefined ***)(this + 8) = &PTR__OnlineDataPersistor_06793710;
  NetworkRequestor::~NetworkRequestor((NetworkRequestor *)(this + 8));
  return;
}


/* non-virtual thunk to OnlineDataPersistor::~OnlineDataPersistor() */

void __thiscall OnlineDataPersistor::~OnlineDataPersistor(OnlineDataPersistor *this)

{
  ~OnlineDataPersistor(this + -8);
  return;
}


/* OnlineDataPersistor::~OnlineDataPersistor() */

void __thiscall OnlineDataPersistor::~OnlineDataPersistor(OnlineDataPersistor *this)

{
  ~OnlineDataPersistor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OnlineDataPersistor::~OnlineDataPersistor() */

void __thiscall OnlineDataPersistor::~OnlineDataPersistor(OnlineDataPersistor *this)

{
  ~OnlineDataPersistor(this + -8);
  return;
}


/* OnlineDataPersistor::Load() */

void __thiscall OnlineDataPersistor::Load(OnlineDataPersistor *this)

{
  (**(code **)(**(long **)(this + 0x30) + 0x10))(*(long **)(this + 0x30));
  NetworkRequestor::makeRequest
            ((NetworkRequestor *)(this + 8),(PvZ2NetworkServiceListener *)(this + 0x40));
  return;
}


/* OnlineDataPersistor::Save() */

undefined4 __thiscall OnlineDataPersistor::Save(OnlineDataPersistor *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30));
  NetworkRequestor::makeRequest
            ((NetworkRequestor *)(this + 8),(PvZ2NetworkServiceListener *)(this + 0x60));
  return uVar1;
}


/* OnlineDataPersistor::isWaitingForResponse() */

void __thiscall OnlineDataPersistor::isWaitingForResponse(OnlineDataPersistor *this)

{
  char cVar1;
  
  cVar1 = PvZ2NetworkServiceListener::IsBlocked((PvZ2NetworkServiceListener *)(this + 0x40));
  if (cVar1 != '\0') {
    return;
  }
  PvZ2NetworkServiceListener::IsBlocked((PvZ2NetworkServiceListener *)(this + 0x60));
  return;
}


/* non-virtual thunk to OnlineDataPersistor::isWaitingForResponse() */

void __thiscall OnlineDataPersistor::isWaitingForResponse(OnlineDataPersistor *this)

{
  isWaitingForResponse(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OnlineDataPersistor::addArguments(Sexy::StructuredData&) */

void __thiscall OnlineDataPersistor::addArguments(OnlineDataPersistor *this,StructuredData *param_1)

{
  char *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlayerInfoDeltaHandler::CreateDelta(*(PlayerInfoDeltaHandler **)(this + 0x38));
  (**(code **)(**(long **)(this + 0x28) + 0x58))(asStack_10,*(long **)(this + 0x28));
  pcVar1 = (char *)FUN_0547429c(asStack_10);
  Sexy::StructuredData::AddString(param_1,"account",pcVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to OnlineDataPersistor::addArguments(Sexy::StructuredData&) */

void __thiscall OnlineDataPersistor::addArguments(OnlineDataPersistor *this,StructuredData *param_1)

{
  addArguments(this + -8,param_1);
  return;
}


/* OnlineDataPersistor::OnlineDataPersistor(ServerConfigGetter&, PlayerIdentityService&,
   IDataPersistor&, PlayerInfoDeltaHandler&) */

void __thiscall
OnlineDataPersistor::OnlineDataPersistor
          (OnlineDataPersistor *this,ServerConfigGetter *param_1,PlayerIdentityService *param_2,
          IDataPersistor *param_3,PlayerInfoDeltaHandler *param_4)

{
  IDataPersistor::IDataPersistor((IDataPersistor *)this);
  NetworkRequestor::NetworkRequestor((NetworkRequestor *)(this + 8),param_1,(string *)&DAT_06ae1cf0)
  ;
  *(IDataPersistor **)(this + 0x30) = param_3;
  *(PlayerInfoDeltaHandler **)(this + 0x38) = param_4;
  *(undefined ***)this = &PTR__OnlineDataPersistor_067936c0;
  *(undefined ***)(this + 8) = &PTR__OnlineDataPersistor_06793710;
  *(PlayerIdentityService **)(this + 0x28) = param_2;
  LoadNetworkServiceListener::LoadNetworkServiceListener
            ((LoadNetworkServiceListener *)(this + 0x40),param_3);
  SaveNetworkServiceListener::SaveNetworkServiceListener
            ((SaveNetworkServiceListener *)(this + 0x60),*(PlayerInfoDeltaHandler **)(this + 0x38));
  return;
}


/* OnlineDataPersistor::dataAsJson(Sexy::RtSerialRtonWriter&) */

void __thiscall
OnlineDataPersistor::dataAsJson(OnlineDataPersistor *this,RtSerialRtonWriter *param_1)

{
  uint uVar1;
  RtSerialBuffer *pRVar2;
  uchar *puVar3;
  string *in_x8;
  
  Set8BytesTo0();
  pRVar2 = (RtSerialBuffer *)FUN_03f096a8(*(undefined8 *)this);
  puVar3 = (uchar *)Sexy::RtSerialBuffer::GetDataPtr(pRVar2);
  pRVar2 = (RtSerialBuffer *)FUN_03f096a8(*(undefined8 *)this);
  uVar1 = Sexy::RtSerialBuffer::GetDataSize(pRVar2);
  Sexy::RtSerial::RtonToJson(puVar3,uVar1,in_x8,false);
  return;
}

