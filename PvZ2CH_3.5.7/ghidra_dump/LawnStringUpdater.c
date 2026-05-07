// Class: LawnStringUpdater


/* LawnStringUpdater::~LawnStringUpdater() */

void __thiscall LawnStringUpdater::~LawnStringUpdater(LawnStringUpdater *this)

{
  *(undefined ***)this = &PTR_ToString_0661dab0;
  *(undefined ***)(this + 8) = &PTR__LawnStringUpdater_0661db18;
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  Sexy::LazySingleton<LawnStringUpdater>::~LazySingleton
            ((LazySingleton<LawnStringUpdater> *)(this + 8));
  return;
}


/* non-virtual thunk to LawnStringUpdater::~LawnStringUpdater() */

void __thiscall LawnStringUpdater::~LawnStringUpdater(LawnStringUpdater *this)

{
  ~LawnStringUpdater(this + -8);
  return;
}


/* LawnStringUpdater::~LawnStringUpdater() */

void __thiscall LawnStringUpdater::~LawnStringUpdater(LawnStringUpdater *this)

{
  ~LawnStringUpdater(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LawnStringUpdater::~LawnStringUpdater() */

void __thiscall LawnStringUpdater::~LawnStringUpdater(LawnStringUpdater *this)

{
  ~LawnStringUpdater(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnStringUpdater::Init() */

void __thiscall LawnStringUpdater::Init(LawnStringUpdater *this)

{
  LawnStringUpdater *pLVar1;
  LawnStringUpdater *pLVar2;
  PVZDB *pPVar3;
  RtName *this_00;
  long lVar4;
  char *pcVar5;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  pLVar1 = this + 0x18;
  local_8 = ___stack_chk_guard;
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtName *)PVZDB::GetTable(pPVar3,0x3b);
  Sexy::RtName::RtName(aRStack_18,L"LawnStringServerConfig");
  Sexy::RtDbTable::GetIdForAlias(this_00);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(pLVar1,aRStack_18);
  std::string::~string((string *)aRStack_18);
  lVar4 = FUN_05474184(pLVar1);
  pcVar5 = (char *)FUN_05474ee8(pLVar1,lVar4 + -1);
  if (*pcVar5 != '/') {
    FUN_05475ad8(pLVar1,&DAT_055a4690);
  }
  pLVar2 = this + 0x20;
  FUN_05475ad8(pLVar1,"file_list.txt");
  Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData();
  FUN_05474278(pLVar2,aRStack_18);
  std::string::~string((string *)aRStack_18);
  lVar4 = FUN_05474184(pLVar2);
  pcVar5 = (char *)FUN_05474ee8(pLVar2,lVar4 + -1);
  if (*pcVar5 != '/') {
    FUN_05475ad8(pLVar2,&DAT_055a4690);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnStringUpdater::LawnStringUpdater() */

void __thiscall LawnStringUpdater::LawnStringUpdater(LawnStringUpdater *this)

{
  undefined **__n;
  
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  Sexy::LazySingleton<LawnStringUpdater>::LazySingleton
            ((LazySingleton<LawnStringUpdater> *)(this + 8));
  __n = &PTR_ToString_0661dab0;
  *(undefined ***)this = &PTR_ToString_0661dab0;
  *(undefined ***)(this + 8) = &PTR__LawnStringUpdater_0661db18;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  TGAScrollbannerData::TGAScrollbannerData((TGAScrollbannerData *)(this + 0x30));
  *(undefined4 *)(this + 0x10) = 0;
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  std::string::append((string *)(this + 0x20),"",(size_t)__n);
  *(undefined4 *)(this + 0x28) = 0;
  Init(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnStringUpdater::GetLocalLawnStringMd5() */

void LawnStringUpdater::GetLocalLawnStringMd5(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  void *pvVar3;
  bool bVar4;
  string *in_x8;
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [48];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_a8,3);
  std::operator+(asStack_a8,(string *)(in_x0 + 0x30));
  std::string::~string(asStack_a8);
  Sexy::ResourceManager::GetLocaleFolder(SUB81(*(undefined8 *)(gLawnApp + 0x848),0));
  std::operator+(asStack_a8,"properties/LawnStrings.txt");
  std::string::~string(asStack_a8);
  std::string::string(in_x8,"");
  nop();
  Sexy::Buffer::Buffer((Buffer *)asStack_a8);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_c0);
  bVar4 = SUB81(asStack_a8,0);
  if (cVar1 == '\0') {
    cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_b8,bVar4);
  }
  else {
    cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_c0,bVar4);
  }
  if (cVar1 != '\0') {
    pvVar3 = (void *)Sexy::Buffer::GetDataPtr((Buffer *)asStack_a8);
    iVar2 = Sexy::Buffer::GetDataLen((Buffer *)asStack_a8);
    MD5::MD5(aMStack_78,pvVar3,(long)iVar2);
    MD5::toString();
    FUN_05474278();
    std::string::~string(asStack_b0);
  }
  Sexy::Buffer::~Buffer((Buffer *)asStack_a8);
  std::string::~string(asStack_b8);
  std::string::~string(asStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnStringUpdater::OnRequestFinished(std::string) */

void __thiscall LawnStringUpdater::OnRequestFinished(LawnStringUpdater *this,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  uchar *puVar6;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    LawnApp::LoadLocalLawnStrings(gLawnApp);
  }
  else if (*(int *)(this + 0x28) == 1) {
    std::string::string(asStack_48,"");
    nop();
    pcVar4 = (char *)FUN_0547429c(param_2);
    sVar5 = strlen(pcVar4);
    DecryptString(pcVar4,asStack_48,(long)(int)sVar5);
    NetworkLawnStringInfo::NetworkLawnStringInfo((NetworkLawnStringInfo *)asStack_38);
    cVar2 = NetworkLawnStringInfo::SerializeJson((NetworkLawnStringInfo *)asStack_38,asStack_48);
    if (cVar2 == '\0') {
      NetworkLawnStringInfo::~NetworkLawnStringInfo((NetworkLawnStringInfo *)asStack_38);
      std::string::~string(asStack_48);
    }
    else {
      thunk_FUN_05475e00(this + 0x30,auStack_30);
      thunk_FUN_05475e00((string *)(this + 0x38),auStack_28);
      GetLocalLawnStringMd5();
      bVar1 = std::operator!=(asStack_40,(string *)(this + 0x38));
      if (bVar1) {
        thunk_FUN_054757c0(this + 0x20,this + 0x30);
        TryRequest(this,2);
      }
      else {
        LawnApp::LoadLocalLawnStrings(gLawnApp);
      }
      std::string::~string(asStack_40);
      NetworkLawnStringInfo::~NetworkLawnStringInfo((NetworkLawnStringInfo *)asStack_38);
      std::string::~string(asStack_48);
    }
  }
  else {
    std::string::string(asStack_48,"");
    nop();
    pcVar4 = (char *)FUN_0547429c(param_2);
    sVar5 = strlen(pcVar4);
    DecryptString(pcVar4,asStack_48,(long)(int)sVar5);
    GetFolder(asStack_38,3);
    std::operator+(asStack_38,(string *)(this + 0x30));
    std::string::~string(asStack_38);
    Sexy::Buffer::Buffer((Buffer *)asStack_38);
    puVar6 = (uchar *)FUN_054742a4(asStack_48);
    iVar3 = FUN_05474184(asStack_48);
    Sexy::Buffer::SetData((Buffer *)asStack_38,puVar6,iVar3);
    cVar2 = Sexy::SexyAppBase::WriteBufferToFile(Sexy::gSexyAppBase,asStack_40,(Buffer *)asStack_38)
    ;
    if (cVar2 != '\0') {
      pcVar4 = (char *)FUN_0547429c(asStack_40);
      TodStringListLoad(pcVar4);
    }
    Sexy::Buffer::~Buffer((Buffer *)asStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnStringUpdater::TryRequest(LawnStringRequestStage) */

void __thiscall LawnStringUpdater::TryRequest(LawnStringUpdater *this,int param_2)

{
  LawnStringUpdater *pLVar1;
  NetworkServiceManager *this_00;
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x10) < 0) {
    std::string::string((string *)aSStack_80,"");
    OnRequestFinished(this,(string *)aSStack_80);
    std::string::~string((string *)aSStack_80);
    nop();
  }
  else {
    pLVar1 = this + 0x20;
    if (param_2 == 1) {
      pLVar1 = this + 0x18;
    }
    *(int *)(this + 0x28) = param_2;
    FUN_05475d88(asStack_88,pLVar1);
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    Sexy::StructuredData::AddString(aSStack_80,"url",asStack_88);
    Sexy::StructuredData::AddInteger(aSStack_80,"timeout",10);
    Sexy::StructuredData::EndObject(aSStack_80);
    this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest(this_00,aSStack_80,(NetworkServiceListener *)this,this)
    ;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    Sexy::StructuredData::~StructuredData(aSStack_80);
    std::string::~string(asStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnStringUpdater::CheckForUpdates(int) */

void __thiscall LawnStringUpdater::CheckForUpdates(LawnStringUpdater *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  TryRequest(this,1);
  return;
}


/* LawnStringUpdater::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
LawnStringUpdater::ServiceRequestFailed
          (LawnStringUpdater *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this,*(undefined4 *)((long)param_2 + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnStringUpdater::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
LawnStringUpdater::ServiceRequestCompleted
          (LawnStringUpdater *this,StructuredData *param_1,void *param_2)

{
  long lVar1;
  char *__s;
  undefined1 *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
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

