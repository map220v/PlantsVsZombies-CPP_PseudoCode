// Class: NetworkRequestor


/* NetworkRequestor::~NetworkRequestor() */

void __thiscall NetworkRequestor::~NetworkRequestor(NetworkRequestor *this)

{
  *(undefined **)this = &DAT_0675c970;
  std::string::~string((string *)(this + 0x18));
  return;
}


/* NetworkRequestor::~NetworkRequestor() */

void __thiscall NetworkRequestor::~NetworkRequestor(NetworkRequestor *this)

{
  ~NetworkRequestor(this);
  AK::FreeHook(this);
  return;
}


/* NetworkRequestor::sendRequest(Sexy::StructuredData*, PvZ2NetworkServiceListener*) */

void __thiscall
NetworkRequestor::sendRequest
          (NetworkRequestor *this,StructuredData *param_1,PvZ2NetworkServiceListener *param_2)

{
  NetworkServiceManager *this_00;
  
  PvZ2NetworkServiceListener::SetBlocked(param_2);
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  Sexy::NetworkServiceManager::MakeRequest
            (this_00,param_1,(NetworkServiceListener *)param_2,param_2);
  return;
}


/* NetworkRequestor::NetworkRequestor(ServerConfigGetter&, std::string const&) */

void __thiscall
NetworkRequestor::NetworkRequestor
          (NetworkRequestor *this,ServerConfigGetter *param_1,string *param_2)

{
  undefined8 uVar1;
  
  *(undefined **)this = &DAT_0675c970;
  uVar1 = FakeHttpDriver::GetInstance();
  *(ServerConfigGetter **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  FUN_05475d88(this + 0x18,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRequestor::makeRequest(PvZ2NetworkServiceListener&) */

void __thiscall
NetworkRequestor::makeRequest(NetworkRequestor *this,PvZ2NetworkServiceListener *param_1)

{
  char cVar1;
  char *pcVar2;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x10))();
  if (cVar1 == '\0') {
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    ServerConfigGetter::IP(*(ServerConfigGetter **)(this + 0x10));
    pcVar2 = (char *)FUN_0547429c();
    Sexy::StructuredData::AddString(aSStack_80,"url",pcVar2);
    Sexy::StructuredData::BeginObject(aSStack_80,"postData");
    pcVar2 = (char *)FUN_0547429c(this + 0x18);
    Sexy::StructuredData::AddString(aSStack_80,"execute",pcVar2);
    (**(code **)(*(long *)this + 0x18))(this,aSStack_80);
    Sexy::StructuredData::EndObject(aSStack_80);
    Sexy::StructuredData::EndObject(aSStack_80);
    sendRequest(this,aSStack_80,param_1);
    Sexy::StructuredData::~StructuredData(aSStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

