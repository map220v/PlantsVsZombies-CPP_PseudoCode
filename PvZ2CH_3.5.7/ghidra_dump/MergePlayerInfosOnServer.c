// Class: MergePlayerInfosOnServer


/* MergePlayerInfosOnServer::onBindAskForMerge(Sexy::StructuredData const*) */

void __thiscall
MergePlayerInfosOnServer::onBindAskForMerge(MergePlayerInfosOnServer *this,StructuredData *param_1)

{
  char *pcVar1;
  undefined1 *__n;
  undefined1 *__n_00;
  
  __n_00 = &DAT_055923fe;
  __n = __n_00;
  pcVar1 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.boundpcpid","");
  std::string::append((string *)(this + 0x38),pcVar1,(size_t)__n);
  pcVar1 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.requestedpcpid","");
  std::string::append((string *)(this + 0x40),pcVar1,(size_t)__n_00);
  return;
}


/* MergePlayerInfosOnServer::isWaitingForResponse() */

void __thiscall MergePlayerInfosOnServer::isWaitingForResponse(MergePlayerInfosOnServer *this)

{
  PvZ2NetworkServiceListener::IsBlocked((PvZ2NetworkServiceListener *)(this + 0x20));
  return;
}


/* MergePlayerInfosOnServer::~MergePlayerInfosOnServer() */

void __thiscall MergePlayerInfosOnServer::~MergePlayerInfosOnServer(MergePlayerInfosOnServer *this)

{
  *(undefined ***)this = &PTR__MergePlayerInfosOnServer_06792350;
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  NetworkRequestor::~NetworkRequestor((NetworkRequestor *)this);
  return;
}


/* MergePlayerInfosOnServer::~MergePlayerInfosOnServer() */

void __thiscall MergePlayerInfosOnServer::~MergePlayerInfosOnServer(MergePlayerInfosOnServer *this)

{
  ~MergePlayerInfosOnServer(this);
  AK::FreeHook(this);
  return;
}


/* MergePlayerInfosOnServer::addArguments(Sexy::StructuredData&) */

void __thiscall
MergePlayerInfosOnServer::addArguments(MergePlayerInfosOnServer *this,StructuredData *param_1)

{
  char *pcVar1;
  
  Sexy::StructuredData::BeginArray(param_1,"pcpids");
  pcVar1 = (char *)FUN_0547429c(this + 0x38);
  Sexy::StructuredData::AddString(param_1,pcVar1);
  pcVar1 = (char *)FUN_0547429c(this + 0x40);
  Sexy::StructuredData::AddString(param_1,pcVar1);
  Sexy::StructuredData::EndArray(param_1);
  return;
}


/* MergePlayerInfosOnServer::MergePlayerInfosOnServer(MessageRouter&, ServerConfigGetter&) */

void __thiscall
MergePlayerInfosOnServer::MergePlayerInfosOnServer
          (MergePlayerInfosOnServer *this,MessageRouter *param_1,ServerConfigGetter *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  NetworkRequestor::NetworkRequestor((NetworkRequestor *)this,param_2,(string *)&DAT_06ae1090);
  *(undefined ***)this = &PTR__MergePlayerInfosOnServer_06792350;
  MergeNetworkServiceListener::MergeNetworkServiceListener
            ((MergeNetworkServiceListener *)(this + 0x20),param_1);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBindAskForMerge);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::StructuredData_const*,Sexy::CBMemberTranslatorX<MergePlayerInfosOnServer,void(MergePlayerInfosOnServer::*)(Sexy::StructuredData_const*)>>
            (param_1,Message::BindAskForMerge,&local_40);
  return;
}

