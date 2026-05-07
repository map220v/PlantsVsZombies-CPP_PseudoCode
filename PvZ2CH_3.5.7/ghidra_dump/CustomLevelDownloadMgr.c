// Class: CustomLevelDownloadMgr


/* CustomLevelDownloadMgr::~CustomLevelDownloadMgr() */

void __thiscall CustomLevelDownloadMgr::~CustomLevelDownloadMgr(CustomLevelDownloadMgr *this)

{
  *(undefined ***)this = &PTR_ToString_0665ef80;
  std::string::~string((string *)(this + 0x10));
  return;
}


/* CustomLevelDownloadMgr::CustomLevelDownloadMgr() */

void __thiscall CustomLevelDownloadMgr::CustomLevelDownloadMgr(CustomLevelDownloadMgr *this)

{
  size_t in_x2;
  
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined ***)this = &PTR_ToString_0665ef80;
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  this[0x19] = (CustomLevelDownloadMgr)0x0;
  this[0x18] = (CustomLevelDownloadMgr)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDownloadMgr::ShowNetConnectUI() */

void __thiscall CustomLevelDownloadMgr::ShowNetConnectUI(CustomLevelDownloadMgr *this)

{
  LawnApp *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (this[0x19] == (CustomLevelDownloadMgr)0x0) {
    __s = "[NET_CONNECTING_DOWNLOAD]";
  }
  else {
    __s = "[NET_CONNECTING_FETCHING]";
  }
  std::string::string(asStack_10,__s);
  LawnApp::ShowNetConnectingUI(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelDownloadMgr::RemoveNetConnectUI() */

void CustomLevelDownloadMgr::RemoveNetConnectUI(void)

{
  LawnApp::KillNetConnectingUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDownloadMgr::OnRequestFinished(std::string) */

void __thiscall
CustomLevelDownloadMgr::OnRequestFinished(CustomLevelDownloadMgr *this,undefined8 param_2)

{
  CustomLevelMgr *pCVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  FUN_05475d88(asStack_10,param_2);
  CustomLevelMgr::CreateNetworkLevelData(pCVar1,asStack_10,this[0x18],this[0x19]);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDownloadMgr::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
CustomLevelDownloadMgr::ServiceRequestCompleted
          (CustomLevelDownloadMgr *this,StructuredData *param_1,void *param_2)

{
  long lVar1;
  char *__s;
  undefined1 *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    RemoveNetConnectUI();
    lVar1 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if ((lVar1 == 200) || (lVar1 == -1)) {
      Set8BytesTo0(asStack_18);
      __n = &DAT_055923fe;
      __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.response","");
      std::string::append(asStack_18,__s,(size_t)__n);
      FUN_05475d88(asStack_10,asStack_18);
      OnRequestFinished(param_2,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDownloadMgr::TryRequest() */

void __thiscall CustomLevelDownloadMgr::TryRequest(CustomLevelDownloadMgr *this)

{
  char cVar1;
  PVZDB *pPVar2;
  RtName *this_00;
  long lVar3;
  char *pcVar4;
  NetworkServiceManager *this_01;
  string asStack_90 [8];
  RtId aRStack_88 [8];
  RtName aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x10);
  if ((cVar1 == '\0') && (-1 < *(int *)(this + 8))) {
    pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtName *)PVZDB::GetTable(pPVar2,0x3b);
    Sexy::RtName::RtName(aRStack_80,L"CustomLevelServerConfig");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_88);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtName::~RtName(aRStack_80);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    lVar3 = FUN_05474184(asStack_90);
    pcVar4 = (char *)FUN_05474ee8(asStack_90,lVar3 + -1);
    if (*pcVar4 != '/') {
      FUN_05475ad8(asStack_90,&DAT_055a4690);
    }
    Sexy::StructuredData::StructuredData((StructuredData *)aRStack_80);
    Sexy::StructuredData::BeginObject((StructuredData *)aRStack_80);
    FUN_031dcc6c(aRStack_88,asStack_90,this + 0x10);
    Sexy::StructuredData::AddString((StructuredData *)aRStack_80,"url",(string *)aRStack_88);
    std::string::~string((string *)aRStack_88);
    Sexy::StructuredData::AddInteger((StructuredData *)aRStack_80,"timeout",10);
    Sexy::StructuredData::EndObject((StructuredData *)aRStack_80);
    this_01 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest
              (this_01,(StructuredData *)aRStack_80,(NetworkServiceListener *)this,this);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    ShowNetConnectUI(this);
    Sexy::StructuredData::~StructuredData((StructuredData *)aRStack_80);
    std::string::~string(asStack_90);
  }
  else {
    std::string::string((string *)aRStack_80,"");
    OnRequestFinished(this,(string *)aRStack_80);
    std::string::~string((string *)aRStack_80);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelDownloadMgr::Fetch(int, std::string const&, bool, bool) */

void __thiscall
CustomLevelDownloadMgr::Fetch
          (CustomLevelDownloadMgr *this,int param_1,string *param_2,bool param_3,bool param_4)

{
  *(int *)(this + 8) = param_1;
  thunk_FUN_05475e00(this + 0x10,param_2);
  this[0x18] = (CustomLevelDownloadMgr)param_3;
  this[0x19] = (CustomLevelDownloadMgr)param_4;
  TryRequest(this);
  return;
}


/* CustomLevelDownloadMgr::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
CustomLevelDownloadMgr::ServiceRequestFailed
          (CustomLevelDownloadMgr *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  RemoveNetConnectUI();
  TryRequest(param_2);
  return;
}

