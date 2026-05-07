// Class: LoadNetworkServiceListener


/* LoadNetworkServiceListener::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void LoadNetworkServiceListener::ServiceRequestCompleted(Buffer *param_1,void *param_2)

{
  (**(code **)(*(long *)param_1 + 0x38))(param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoadNetworkServiceListener::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
LoadNetworkServiceListener::ServiceRequestFailed
          (LoadNetworkServiceListener *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PvZ2NetworkServiceListener::isMyRequest((PvZ2NetworkServiceListener *)this,param_2);
  if (cVar1 != '\0') {
    pcVar2 = *(code **)(*(long *)this + 0x48);
    std::string::string(asStack_10,"load");
    (*pcVar2)(this,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoadNetworkServiceListener::LoadNetworkServiceListener(IDataPersistor&) */

void __thiscall
LoadNetworkServiceListener::LoadNetworkServiceListener
          (LoadNetworkServiceListener *this,IDataPersistor *param_1)

{
  undefined8 uVar1;
  
  PvZ2NetworkServiceListener::PvZ2NetworkServiceListener((PvZ2NetworkServiceListener *)this);
  *(IDataPersistor **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_ToString_06793640;
  uVar1 = Throttles::GetInstance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


/* LoadNetworkServiceListener::LoadNetworkServiceListener(IDataPersistor&, Throttles&) */

void __thiscall
LoadNetworkServiceListener::LoadNetworkServiceListener
          (LoadNetworkServiceListener *this,IDataPersistor *param_1,Throttles *param_2)

{
  PvZ2NetworkServiceListener::PvZ2NetworkServiceListener((PvZ2NetworkServiceListener *)this);
  *(IDataPersistor **)(this + 0x10) = param_1;
  *(Throttles **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR_ToString_06793640;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoadNetworkServiceListener::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
LoadNetworkServiceListener::ServiceRequestCompleted
          (LoadNetworkServiceListener *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  Value *pVVar4;
  char *pcVar5;
  code *pcVar6;
  string asStack_270 [8];
  string asStack_268 [8];
  JsonWriter aJStack_260 [24];
  RtSerialBuffer aRStack_248 [48];
  RtSerialRtonWriter aRStack_218 [160];
  undefined1 auStack_178 [16];
  ostream aoStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PvZ2NetworkServiceListener::isMyRequest((PvZ2NetworkServiceListener *)this,param_2);
  if (cVar1 != '\0') {
    lVar3 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if (lVar3 == -1) {
      ListenerHelpers::setThrottlesFromResponse(param_1,*(Throttles **)(this + 0x18));
      Sexy::JsonWriter::JsonWriter(aJStack_260,0);
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar2);
      pVVar4 = (Value *)Sexy::StructuredData::Root(param_1);
      Sexy::JsonWriter::Write(aJStack_260,aoStack_168,pVVar4,true);
      Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_248,(uchar *)0x0,0);
      Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_218,aRStack_248);
      Set8BytesTo0(asStack_270);
      FUN_05462824(asStack_268,auStack_178);
      pcVar5 = (char *)FUN_0547429c(asStack_268);
      Sexy::RtSerial::JsonToRton(pcVar5,aRStack_218,asStack_270);
      std::string::~string(asStack_268);
      (**(code **)(*(long *)this + 0x58))(this,aRStack_248);
      pcVar6 = *(code **)(*(long *)this + 0x50);
      std::string::string(asStack_268,"load");
      (*pcVar6)(this,asStack_268,param_1);
      std::string::~string(asStack_268);
      nop();
      (**(code **)(*(long *)this + 0x60))(this);
      std::string::~string(asStack_270);
      Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_218);
      Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_248);
      FUN_054617bc(auStack_178);
      Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aJStack_260);
    }
    else {
      (**(code **)(*(long *)this + 0x38))(this,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoadNetworkServiceListener::loadFromBuffer(Sexy::RtSerialBuffer&) */

void __thiscall
LoadNetworkServiceListener::loadFromBuffer(LoadNetworkServiceListener *this,RtSerialBuffer *param_1)

{
  undefined8 uVar1;
  OfflineDataPersistor aOStack_48 [24];
  RtSerialRtonReader aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_30,param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::LoadPackageForTableFromBuffer(uVar1,0x37,aRStack_30,0);
  OfflineDataPersistor::OfflineDataPersistor(aOStack_48,"pp.dat",0x37);
  OfflineDataPersistor::Save(aOStack_48);
  OfflineDataPersistor::~OfflineDataPersistor(aOStack_48);
  OfflineDataPersistor::OfflineDataPersistor(aOStack_48,"snapshot1.dat",0x37);
  OfflineDataPersistor::Save(aOStack_48);
  OfflineDataPersistor::~OfflineDataPersistor(aOStack_48);
  OfflineDataPersistor::OfflineDataPersistor(aOStack_48,"snapshot2.dat",0x37);
  OfflineDataPersistor::Save(aOStack_48);
  OfflineDataPersistor::~OfflineDataPersistor(aOStack_48);
  Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

