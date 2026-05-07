// Class: ContentDownloader


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::ToString(Sexy::NetworkServiceListener::ErrorNum) */

void ContentDownloader::ToString(string *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  switch(param_3) {
  case 0x579:
  case 0x57a:
  case 0x57b:
    std::string::string(param_1,"[DOWNLOAD_FAILED_SPACE_BODY]");
    nop();
    break;
  case 0x57c:
    std::string::string(param_1,"target_file_path_is_empty_or_invalid");
    nop();
    break;
  default:
    Sexy::NetworkServiceListener::ToString();
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* ContentDownloader::ServiceProgressUpdate(unsigned long, unsigned long, void const*) */

void __thiscall
ContentDownloader::ServiceProgressUpdate
          (ContentDownloader *this,ulong param_1,ulong param_2,void *param_3)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  float fVar4;
  
  if (param_3 == this) {
    fVar4 = 0.0;
    if (param_2 != 0) {
      fVar4 = (float)param_1 / (float)param_2;
    }
    iVar1 = *(int *)((long)param_3 + 0x34);
    uVar2 = FUN_043f2b0c(*(undefined8 *)((long)param_3 + 0x38),*(undefined8 *)((long)param_3 + 0x40)
                        );
    *(float *)((long)param_3 + 0x24) = (fVar4 + (float)iVar1) / (float)uVar2;
    if (*(long **)((long)param_3 + 8) != (long *)0x0) {
      pcVar3 = *(code **)(**(long **)((long)param_3 + 8) + 0x20);
      if (pcVar3 != ContentDownloaderDelegateProtocol::ContentDownProgress) {
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}


/* ContentDownloader::IsActive() */

bool __thiscall ContentDownloader::IsActive(ContentDownloader *this)

{
  return *(int *)(this + 0x30) != -1;
}


/* ContentDownloader::SetAllowRetries(bool) */

void __thiscall ContentDownloader::SetAllowRetries(ContentDownloader *this,bool param_1)

{
  undefined4 uVar1;
  
  this[0x2c] = (ContentDownloader)param_1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::onDownloadFailed(std::wstring const&, int) */

void __thiscall
ContentDownloader::onDownloadFailed(ContentDownloader *this,wstring *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05477b9c(this + 0x10);
  std::string::string(asStack_10,"failed");
  ReportPatchingEvent(asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  this[0x20] = (ContentDownloader)0x0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  Sexy::StrFormat("ContentDownloader::onDownloadFailed[%d]",asStack_18,(ulong)(uint)param_2);
  Sexy::LazySingleton<DebugLog>::GetInstancePtr();
  operator|(2,4);
  std::string::string(asStack_10,"PvZ2Debug");
  nop();
  std::string::~string(asStack_10);
  nop();
  plVar4 = *(long **)(this + 8);
  if (plVar4 != (long *)0x0) {
    iVar1 = *(int *)(this + 0x34);
    if (-1 < iVar1) {
      uVar5 = *(undefined8 *)(this + 0x38);
      uVar2 = FUN_043f2b0c(uVar5,*(undefined8 *)(this + 0x40));
      if ((ulong)(long)iVar1 < uVar2) {
        pcVar3 = *(code **)(*plVar4 + 0x28);
        uVar5 = FUN_043f2b04(uVar5,(long)iVar1);
        std::string::string(asStack_10,"failed");
        if (pcVar3 != ContentDownloaderDelegateProtocol::ContentDownloaderFailed) {
          (*pcVar3)(plVar4,uVar5,asStack_10,(ulong)(uint)param_2);
        }
        std::string::~string(asStack_10);
        nop();
      }
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
ContentDownloader::ServiceRequestCompleted
          (ContentDownloader *this,StructuredData *param_1,void *param_2)

{
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    FUN_05478178(awStack_10,L"Unexpected content from server (got JSON).",auStack_18);
    onDownloadFailed(param_2,awStack_10,-0x186a1);
    FUN_05476c50(awStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void __thiscall
ContentDownloader::ServiceRequestCompleted(ContentDownloader *this,Image **param_1,void *param_2)

{
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    FUN_05478178(awStack_10,L"Unexpected content from server (got an image).",auStack_18);
    onDownloadFailed(param_2,awStack_10,-0x186a2);
    FUN_05476c50(awStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
ContentDownloader::ServiceRequestCompleted(ContentDownloader *this,Buffer *param_1,void *param_2)

{
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    FUN_05478178(awStack_10,L"Should not get here. Should be using resumable download.",auStack_18);
    onDownloadFailed(param_2,awStack_10,-0x186a4);
    FUN_05476c50(awStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
ContentDownloader::ServiceRequestFailed
          (ContentDownloader *this,StructuredData *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  string *extraout_x1;
  string asStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    uVar1 = Sexy::StructuredData::IntegerForPath(param_1,"$.errorID",0);
    __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.error","unknown error");
    std::string::string(asStack_30,__s);
    nop();
    uVar3 = FUN_0547429c(asStack_30);
    Sexy::StrFormat("ContentDownloader::ServiceRequestFailed[%d][%s]",asStack_28,(ulong)uVar1,uVar3)
    ;
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string(asStack_10,"PvZ2Debug");
    nop();
    std::string::~string(asStack_10);
    nop();
    iVar2 = (**(code **)(**(long **)(Sexy::gSexyApp + 0x48) + 0x20))
                      (*(long **)(Sexy::gSexyApp + 0x48));
    if (iVar2 == 0) {
      FUN_05478178(asStack_10,L"[DOWNLOAD_FAILED_BODY]",awStack_18);
      onDownloadFailed(param_2,(wstring *)asStack_10,-0x186a3);
      FUN_05476c50(asStack_10);
      nop();
    }
    else if ((int)uVar1 < 1) {
      TodStringTranslate(L"[DOWNLOAD_FAILED_BODY]");
      Sexy::StrFormat(L" (%d)",awStack_18,(ulong)uVar1);
      std::operator+(awStack_20,awStack_18);
      onDownloadFailed(param_2,(wstring *)asStack_10,uVar1 + 10000);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
    }
    else {
      Sexy::UTF8StringToWString((Sexy *)asStack_30,extraout_x1);
      onDownloadFailed(param_2,(wstring *)asStack_10,uVar1 + 10000);
      FUN_05476c50(asStack_10);
    }
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::ServiceRequestCanceled(void const*) */

void ContentDownloader::ServiceRequestCanceled(void *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)((long)param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"canceled");
  ReportPatchingEvent(asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ContentDownloader::Reset() */

void __thiscall ContentDownloader::Reset(ContentDownloader *this)

{
  NetworkServiceManager *this_00;
  size_t in_x2;
  undefined4 uVar1;
  
  this[0x20] = (ContentDownloader)0x0;
  this[0x21] = (ContentDownloader)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  uVar1 = PVZ_EOT();
  this[0x2c] = (ContentDownloader)0x1;
  *(undefined4 *)(this + 0x28) = uVar1;
  std::vector<DownloadPath,std::allocator<DownloadPath>>::clear
            ((vector<DownloadPath,std::allocator<DownloadPath>> *)(this + 0x38));
  FUN_054772c4(this + 0x10,&DAT_056f11a8);
  std::string::append((string *)(this + 0x18),"",in_x2);
  if (*(int *)(this + 0x30) != -1) {
    this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::CancelRequest(this_00,*(int *)(this + 0x30));
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return;
}


/* ContentDownloader::ContentDownloader() */

void __thiscall ContentDownloader::ContentDownloader(ContentDownloader *this)

{
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_ToString_068476c0;
  FUN_05476574(this + 0x10);
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  Reset(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::downloadPath(DownloadPath const&) */

void __thiscall ContentDownloader::downloadPath(ContentDownloader *this,DownloadPath *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  NetworkServiceManager *this_00;
  undefined4 uVar4;
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x18);
  FUN_054772c4(this + 0x10,&DAT_056f11a8);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar4;
  cVar1 = Sexy::SexyAppBase::FileExists(gLawnApp,(string *)(param_1 + 8));
  if (cVar1 == '\0') {
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    Sexy::StructuredData::AddString(aSStack_80,"url",(string *)param_1);
    Sexy::StructuredData::AddBoolean(aSStack_80,"resumable",true);
    Sexy::StructuredData::AddString(aSStack_80,"targetFilePath",(string *)(param_1 + 8));
    Sexy::StructuredData::AddBoolean(aSStack_80,"disableIfRangeHeader",true);
    Sexy::StructuredData::AddBoolean(aSStack_80,"slackCerts",true);
    uVar2 = FUN_0547429c(param_1);
    Sexy::StrFormat("downloading %s...",asStack_88,uVar2);
    pcVar3 = (char *)FUN_0547429c(asStack_88);
    Sexy::StructuredData::AddString(aSStack_80,"trace",pcVar3);
    std::string::~string(asStack_88);
    Sexy::StructuredData::EndObject(aSStack_80);
    this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    uVar4 = Sexy::NetworkServiceManager::MakeRequest
                      (this_00,aSStack_80,(NetworkServiceListener *)this,this);
    *(undefined4 *)(this + 0x30) = uVar4;
    Sexy::StructuredData::~StructuredData(aSStack_80);
  }
  else {
    onDownloadCompleted((string *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::StartDownload(std::vector<DownloadPath, std::allocator<DownloadPath> > const&)
    */

void __thiscall ContentDownloader::StartDownload(ContentDownloader *this,vector *param_1)

{
  char cVar1;
  DownloadPath *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  this[0x21] = (ContentDownloader)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<DownloadPath,std::allocator<DownloadPath>>::empty
                    ((vector<DownloadPath,std::allocator<DownloadPath>> *)param_1);
  if (cVar1 == '\0') {
    std::vector<DownloadPath,std::allocator<DownloadPath>>::operator=
              ((vector<DownloadPath,std::allocator<DownloadPath>> *)(this + 0x38),param_1);
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    pDVar2 = (DownloadPath *)FUN_043f2b04(*(undefined8 *)(this + 0x38),0);
    downloadPath(this,pDVar2);
    std::string::string(asStack_10,"downloading");
    ReportPatchingEvent(asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    FUN_054772c4(this + 0x10,L"[DOWNLOAD_ERROR_UPDATE_UNAVAILABLE]");
    std::string::string(asStack_10,"failed");
    ReportPatchingEvent(asStack_10,-0x186a5);
    std::string::~string(asStack_10);
    nop();
    this[0x20] = (ContentDownloader)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContentDownloader::onDownloadCompleted(std::string const&) */

void ContentDownloader::onDownloadCompleted(string *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  DownloadPath *pDVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  string asStack_10 [8];
  long local_8;
  
  plVar7 = *(long **)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (plVar7 == (long *)0x0) {
    iVar5 = *(int *)(param_1 + 0x34);
LAB_043f56a4:
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = FUN_043f2b0c(uVar6,*(undefined8 *)(param_1 + 0x40));
LAB_043f5554:
    *(int *)(param_1 + 0x34) = iVar5 + 1;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    if ((ulong)(long)(iVar5 + 1) < uVar1) {
LAB_043f5680:
      pDVar3 = (DownloadPath *)FUN_043f2b04(uVar6);
      downloadPath((ContentDownloader *)param_1,pDVar3);
      goto LAB_043f55f0;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar5 < 0) goto LAB_043f56a4;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = FUN_043f2b0c(uVar6,*(undefined8 *)(param_1 + 0x40));
    if (uVar1 <= (ulong)(long)iVar5) goto LAB_043f5554;
    pcVar4 = *(code **)(*plVar7 + 0x10);
    uVar2 = FUN_043f2b04(uVar6,(long)iVar5);
    if (pcVar4 == ContentDownloaderDelegateProtocol::FileDownloadSuccess) goto LAB_043f5554;
    (*pcVar4)(plVar7,uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x34);
    uVar1 = FUN_043f2b0c(uVar6,*(undefined8 *)(param_1 + 0x40));
    *(int *)(param_1 + 0x34) = iVar5 + 1;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    if ((ulong)(long)(iVar5 + 1) < uVar1) goto LAB_043f5680;
  }
  param_1[0x20] = (string)0x1;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  std::string::string(asStack_10,"downloaded");
  ReportPatchingEvent(asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    pcVar4 = *(code **)(**(long **)(param_1 + 8) + 0x18);
    if (pcVar4 != ContentDownloaderDelegateProtocol::ContentDownloaderFinished) {
      (*pcVar4)();
    }
  }
LAB_043f55f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ContentDownloader::ServiceResumableRequestCompleted(std::string const&, void const*) */

void __thiscall
ContentDownloader::ServiceResumableRequestCompleted
          (ContentDownloader *this,string *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  onDownloadCompleted((string *)this);
  return;
}


/* ContentDownloader::Update() */

void __thiscall ContentDownloader::Update(ContentDownloader *this)

{
  char cVar1;
  DownloadPath *pDVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (this[0x2c] == (ContentDownloader)0x0) {
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar4;
    return;
  }
  cVar1 = FUN_054765e8(this + 0x10);
  if ((cVar1 == '\0') && (fVar3 = (float)PVZ_EOT(), *(float *)(this + 0x28) == fVar3)) {
    fVar3 = (float)PVZ_RealT();
    *(float *)(this + 0x28) = fVar3 + 30.0;
  }
  fVar3 = (float)PVZ_RealT();
  if (*(float *)(this + 0x28) < fVar3) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      pDVar2 = (DownloadPath *)
               FUN_043f2b04(*(undefined8 *)(this + 0x38),(long)*(int *)(this + 0x34));
      downloadPath(this,pDVar2);
      return;
    }
    fVar3 = (float)PVZ_RealT();
    *(float *)(this + 0x28) = fVar3 + 30.0;
  }
  return;
}


/* ContentDownloader::~ContentDownloader() */

void __thiscall ContentDownloader::~ContentDownloader(ContentDownloader *this)

{
  *(undefined ***)this = &PTR_ToString_068476c0;
  std::vector<DownloadPath,std::allocator<DownloadPath>>::~vector
            ((vector<DownloadPath,std::allocator<DownloadPath>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x18));
  FUN_05476c50(this + 0x10);
  return;
}

