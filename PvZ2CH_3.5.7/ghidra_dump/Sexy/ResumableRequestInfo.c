// Class: Sexy::ResumableRequestInfo


/* Sexy::ResumableRequestInfo::IsValidResumableDownloadHttpStatus(int) */

bool __thiscall
Sexy::ResumableRequestInfo::IsValidResumableDownloadHttpStatus
          (ResumableRequestInfo *this,int param_1)

{
  return param_1 == 0xce || (param_1 == 0xcb || param_1 == 200);
}


/* Sexy::ResumableRequestInfo::DispatchProgressNotification(Sexy::NetworkServiceListener*, void
   const*) */

void __thiscall
Sexy::ResumableRequestInfo::DispatchProgressNotification
          (ResumableRequestInfo *this,NetworkServiceListener *param_1,void *param_2)

{
  if (*(code **)(*(long *)param_1 + 0x30) != NetworkServiceListener::ServiceProgressUpdate) {
    (**(code **)(*(long *)param_1 + 0x30))
              (param_1,(long)*(int *)(this + 0x90),*(undefined8 *)(this + 0x88),param_2);
  }
  return;
}


/* Sexy::ResumableRequestInfo::AllocateBuffers(unsigned long) */

void __thiscall
Sexy::ResumableRequestInfo::AllocateBuffers(ResumableRequestInfo *this,ulong param_1)

{
  Buffer *pBVar1;
  
  pBVar1 = ::operator_new(0x30);
  Buffer::Buffer(pBVar1);
  *(Buffer **)(this + 0x98) = pBVar1;
  pBVar1 = ::operator_new(0x30);
  Buffer::Buffer(pBVar1);
  *(Buffer **)(this + 0xa0) = pBVar1;
  Buffer::Reserve(*(Buffer **)(this + 0x98),(uint)param_1);
  Buffer::Reserve(*(Buffer **)(this + 0xa0),(uint)param_1);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x98);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::IsBufferWriting(Sexy::Buffer const*) */

void __thiscall
Sexy::ResumableRequestInfo::IsBufferWriting(ResumableRequestInfo *this,Buffer *param_1)

{
  ResumableRequestInfo RVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  if (*(Buffer **)(this + 0x98) == param_1) {
    RVar1 = this[0x108];
  }
  else {
    RVar1 = (ResumableRequestInfo)0x0;
    if (*(Buffer **)(this + 0xa0) == param_1) {
      RVar1 = this[0x109];
    }
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::SetIsBufferWriting(Sexy::Buffer const*, bool) */

void __thiscall
Sexy::ResumableRequestInfo::SetIsBufferWriting
          (ResumableRequestInfo *this,Buffer *param_1,bool param_2)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  if (*(Buffer **)(this + 0x98) == param_1) {
    this[0x108] = (ResumableRequestInfo)param_2;
  }
  else if (*(Buffer **)(this + 0xa0) == param_1) {
    this[0x109] = (ResumableRequestInfo)param_2;
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResumableRequestInfo::SwapBuffers() */

bool __thiscall Sexy::ResumableRequestInfo::SwapBuffers(ResumableRequestInfo *this)

{
  char cVar1;
  Buffer *pBVar2;
  
  pBVar2 = *(Buffer **)(this + 0x98);
  if (*(Buffer **)(this + 0xa8) == pBVar2) {
    pBVar2 = *(Buffer **)(this + 0xa0);
  }
  *(Buffer **)(this + 0xa8) = pBVar2;
  cVar1 = IsBufferWriting(this,pBVar2);
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0xa8) = 0;
  }
  return cVar1 == '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::ReadResumeFile(std::string const&, int&, std::string&) */

void Sexy::ResumableRequestInfo::ReadResumeFile(string *param_1,int *param_2,string *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  FILE *__stream;
  long lVar4;
  FILE *__n;
  long *plVar5;
  int local_54;
  string asStack_50 [8];
  char acStack_48 [64];
  long local_8;
  
  plVar5 = *(long **)(gSexyAppBase + 0x28);
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar5 + 0x20))(asStack_50,plVar5,param_1);
  cVar1 = (**(code **)(*plVar5 + 0x110))(plVar5,asStack_50,0);
  if (cVar1 != '\0') {
    pcVar3 = (char *)FUN_0547429c(asStack_50);
    __stream = fopen(pcVar3,"rb");
    if (__stream != (FILE *)0x0) {
      iVar2 = fscanf(__stream,"%u",&local_54);
      if (iVar2 == 1) {
        fgetc(__stream);
        __n = __stream;
        pcVar3 = fgets(acStack_48,0x40,__stream);
        if (pcVar3 == (char *)0x0) {
          cVar1 = '\0';
          fclose(__stream);
        }
        else {
          *param_2 = local_54;
          std::string::append(param_3,acStack_48,(size_t)__n);
          lVar4 = FUN_05474178(param_3);
          FUN_0547500c(param_3,lVar4 + -1,0xffffffffffffffff);
          fclose(__stream);
        }
      }
      else {
        cVar1 = '\0';
        fclose(__stream);
      }
      goto LAB_051b0714;
    }
  }
  cVar1 = '\0';
LAB_051b0714:
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::GetPos() */

void __thiscall Sexy::ResumableRequestInfo::GetPos(ResumableRequestInfo *this)

{
  undefined4 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  uVar1 = *(undefined4 *)(this + 0xe0);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::ClearPos() */

void __thiscall Sexy::ResumableRequestInfo::ClearPos(ResumableRequestInfo *this)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  *(undefined4 *)(this + 0xe0) = 0;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::IncrPos(int) */

void __thiscall Sexy::ResumableRequestInfo::IncrPos(ResumableRequestInfo *this,int param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + param_1;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::GetTargetFilePath() const */

void Sexy::ResumableRequestInfo::GetTargetFilePath(void)

{
  long in_x0;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(in_x0 + 0xb0));
  FUN_05475d88();
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::GetCachedFileName() const */

void Sexy::ResumableRequestInfo::GetCachedFileName(void)

{
  long in_x0;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(in_x0 + 0xb0));
  FUN_05475d88();
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::TakeResumableInfoAndMarkForCancellation(bool) */

void __thiscall
Sexy::ResumableRequestInfo::TakeResumableInfoAndMarkForCancellation
          (ResumableRequestInfo *this,bool param_1)

{
  undefined8 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  if (*(NetworkServiceRequest **)(this + 0xd8) == (NetworkServiceRequest *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = NetworkServiceRequest::TakeResumableInfoAndMarkForCancellation
                      (*(NetworkServiceRequest **)(this + 0xd8),param_1);
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::SetParentRequest(Sexy::NetworkServiceRequest*) */

void __thiscall
Sexy::ResumableRequestInfo::SetParentRequest
          (ResumableRequestInfo *this,NetworkServiceRequest *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  *(NetworkServiceRequest **)(this + 0xd8) = param_1;
  if (param_1 != (NetworkServiceRequest *)0x0) {
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x44);
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::getQueueName() const */

void Sexy::ResumableRequestInfo::getQueueName(void)

{
  long in_x0;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(in_x0 + 0xb0));
  FUN_05475d88();
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::MarkQueueForDelete() */

void Sexy::ResumableRequestInfo::MarkQueueForDelete(void)

{
  int iVar1;
  AsyncTaskManager *this;
  IAsyncNetworkTask *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
  getQueueName();
  this_00 = (IAsyncNetworkTask *)AsyncTaskManager::GetQueueByName(this,asStack_10);
  std::string::~string(asStack_10);
  iVar1 = IAsyncNetworkTask::GetState(this_00);
  if ((iVar1 != 4) && (iVar1 = IAsyncNetworkTask::GetState(this_00), iVar1 != 3)) {
    AsyncTaskQueue::QueueFinished((AsyncTaskQueue *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::IsQueueEmpty() const */

void Sexy::ResumableRequestInfo::IsQueueEmpty(void)

{
  undefined4 uVar1;
  AsyncTaskManager *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
  getQueueName();
  uVar1 = AsyncTaskManager::IsQueueEmpty(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::setLastModifiedTimeStamp(std::string const&) */

void __thiscall
Sexy::ResumableRequestInfo::setLastModifiedTimeStamp(ResumableRequestInfo *this,string *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  thunk_FUN_05475e00(this + 0x100,param_1);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::getLastModifiedTimeStamp() const */

void Sexy::ResumableRequestInfo::getLastModifiedTimeStamp(void)

{
  long in_x0;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(in_x0 + 0xb0));
  FUN_05475d88();
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::getParentRequest() const */

void __thiscall Sexy::ResumableRequestInfo::getParentRequest(ResumableRequestInfo *this)

{
  undefined8 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0xb0));
  uVar1 = *(undefined8 *)(this + 0xd8);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::ResumableRequestInfo::RemakeRequest(Sexy::NetworkServiceManager*,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::ResumableRequestInfo::RemakeRequest
          (ResumableRequestInfo *this,NetworkServiceManager *param_1,NetworkServiceListener *param_2
          ,void *param_3)

{
  NetworkServiceManager::MakeRequest
            (param_1,(StructuredData *)(this + 8),*(int *)(this + 0x80),param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::GetResumeCachedFolder() */

void __thiscall Sexy::ResumableRequestInfo::GetResumeCachedFolder(ResumableRequestInfo *this)

{
  string *psVar1;
  long lVar2;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  lVar2 = gSexyAppBase;
  psVar1 = (string *)(gSexyAppBase + 0xb0);
  lVar3 = FUN_05474178(psVar1);
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x48))(asStack_18,*(long **)(lVar2 + 0x28),3);
    std::operator+(asStack_18,"resumableDownload/cacheArea/");
    FUN_05474278();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  else {
    std::operator+(psVar1,"resumableDownload/cacheArea/");
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::ResumableRequestInfo(Sexy::StructuredData const&, unsigned int,
   std::string const&, int, bool) */

void __thiscall
Sexy::ResumableRequestInfo::ResumableRequestInfo
          (ResumableRequestInfo *this,StructuredData *param_1,uint param_2,string *param_3,
          int param_4,bool param_5)

{
  ResumableRequestInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__ResumableRequestInfo_06a30400;
  StructuredData::StructuredData((StructuredData *)(this + 8),param_1);
  *(uint *)(this + 0x94) = param_2;
  this[0x84] = (ResumableRequestInfo)param_5;
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  CritSect::CritSect((CritSect *)(this + 0xb0));
  *(int *)(this + 0xe0) = param_4;
  FUN_05475d88(this + 0xe8,param_3);
  std::string::string((string *)(this + 0xf0),"");
  nop();
  Set8BytesTo0(this + 0xf8);
  std::string::string((string *)(this + 0x100),"");
  nop();
  this[0x108] = (ResumableRequestInfo)0x0;
  this[0x109] = (ResumableRequestInfo)0x0;
  GetResumeCachedFolder(this_00);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::HandleReceivedData(void*, unsigned long) */

void __thiscall
Sexy::ResumableRequestInfo::HandleReceivedData
          (ResumableRequestInfo *this,void *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  NetworkServiceRequest *this_00;
  AsyncWriteBytesToFileAtTask *this_01;
  AsyncTaskManager *pAVar4;
  ResumableRequestInfo *pRVar5;
  AsyncRemakeRequestTask *this_02;
  Buffer *this_03;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkServiceRequest *)getParentRequest(this);
  if (this_00 != (NetworkServiceRequest *)0x0) {
    iVar2 = Buffer::GetDataLen(*(Buffer **)(this + 0xa8));
    this_03 = *(Buffer **)(this + 0xa8);
    iVar3 = FUN_051b0428(*(undefined8 *)(this_03 + 8),*(undefined8 *)(this_03 + 0x18));
    if ((ulong)(long)(iVar3 - iVar2) < param_2) {
      GetResumeCachedFolder((ResumableRequestInfo *)(ulong)(uint)(iVar3 - iVar2));
      GetCachedFileName();
      std::operator+(asStack_20,asStack_18);
      this_01 = ::operator_new(0x78);
      AsyncWriteBytesToFileAtTask::AsyncWriteBytesToFileAtTask
                (this_01,this,*(NetworkServiceListener **)(this_00 + 0x18),
                 *(void **)(this_00 + 0x10),asStack_10,*(Buffer **)(this + 0xa8));
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      pAVar4 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
      getQueueName();
      AsyncTaskManager::AddTaskToQueue(pAVar4,(IAsyncNetworkTask *)this_01,asStack_10);
      std::string::~string(asStack_10);
      cVar1 = SwapBuffers(this);
      if (cVar1 == '\0') {
        pRVar5 = (ResumableRequestInfo *)
                 NetworkServiceRequest::TakeResumableInfoAndMarkForCancellation(this_00,false);
        this_02 = ::operator_new(0x60);
        AsyncRemakeRequestTask::AsyncRemakeRequestTask
                  (this_02,pRVar5,*(NetworkServiceListener **)(this_00 + 0x18),
                   *(void **)(this_00 + 0x10));
        pAVar4 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
        getQueueName();
        AsyncTaskManager::AddTaskToQueue(pAVar4,(IAsyncNetworkTask *)this_02,asStack_10);
        std::string::~string(asStack_10);
        goto LAB_051b10b0;
      }
      this_03 = *(Buffer **)(this + 0xa8);
    }
    *(int *)(this + 0x90) = *(int *)(this + 0x90) + (int)param_2;
    Buffer::WriteBytes(this_03,param_1,param_2);
  }
LAB_051b10b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::HandleHttpComplete(Sexy::NetworkServiceManager*) */

void __thiscall
Sexy::ResumableRequestInfo::HandleHttpComplete
          (ResumableRequestInfo *this,NetworkServiceManager *param_1)

{
  NetworkServiceRequest *this_00;
  undefined8 uVar1;
  ResumableRequestInfo *pRVar2;
  AsyncWriteBytesToFileAtTask *this_01;
  AsyncTaskManager *pAVar3;
  AsyncFinalizeResumeRequestTask *this_02;
  AsyncQueueCompletedSuccessfullyTask *this_03;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkServiceRequest *)getParentRequest(this);
  if (this_00 == (NetworkServiceRequest *)0x0) {
    uVar1 = 1;
  }
  else {
    Buffer::GetDataLen(*(Buffer **)(this + 0xa8));
    uVar1 = 0;
    if (*(long *)(this + 0x88) == (long)*(int *)(this + 0x90)) {
      pRVar2 = (ResumableRequestInfo *)Buffer::GetDataLen(*(Buffer **)(this + 0xa8));
      if (0 < (int)pRVar2) {
        GetResumeCachedFolder(pRVar2);
        GetCachedFileName();
        std::operator+(asStack_20,asStack_18);
        this_01 = ::operator_new(0x78);
        AsyncWriteBytesToFileAtTask::AsyncWriteBytesToFileAtTask
                  (this_01,this,*(NetworkServiceListener **)(this_00 + 0x18),
                   *(void **)(this_00 + 0x10),asStack_10,*(Buffer **)(this + 0xa8));
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        std::string::~string(asStack_20);
        pAVar3 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
        getQueueName();
        AsyncTaskManager::AddTaskToQueue(pAVar3,(IAsyncNetworkTask *)this_01,asStack_10);
        std::string::~string(asStack_10);
      }
      this_02 = ::operator_new(0x68);
      AsyncFinalizeResumeRequestTask::AsyncFinalizeResumeRequestTask
                (this_02,param_1,this,*(NetworkServiceListener **)(this_00 + 0x18),
                 *(void **)(this_00 + 0x10));
      pAVar3 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
      getQueueName();
      AsyncTaskManager::AddTaskToQueue(pAVar3,(IAsyncNetworkTask *)this_02,asStack_10);
      std::string::~string(asStack_10);
      pRVar2 = (ResumableRequestInfo *)
               NetworkServiceRequest::TakeResumableInfoAndMarkForCancellation(this_00,false);
      this_03 = ::operator_new(0x60);
      AsyncQueueCompletedSuccessfullyTask::AsyncQueueCompletedSuccessfullyTask
                (this_03,pRVar2,*(NetworkServiceListener **)(this_00 + 0x18),
                 *(void **)(this_00 + 0x10));
      pAVar3 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
      getQueueName();
      AsyncTaskManager::AddTaskToQueue(pAVar3,(IAsyncNetworkTask *)this_03,asStack_10);
      std::string::~string(asStack_10);
      uVar1 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::SaveResumeRequestData() */

void __thiscall Sexy::ResumableRequestInfo::SaveResumeRequestData(ResumableRequestInfo *this)

{
  char *__filename;
  FILE *__stream;
  ulong uVar1;
  undefined8 uVar2;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  ResumableRequestInfo *local_8;
  
  local_8 = ___stack_chk_guard;
  GetResumeCachedFolder(___stack_chk_guard);
  GetCachedFileName();
  std::operator+(asStack_20,asStack_18);
  std::operator+(asStack_10,".txt");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  (**(code **)(**(long **)(gSexyAppBase + 0x28) + 0x20))
            (asStack_18,*(long **)(gSexyAppBase + 0x28),asStack_28);
  __filename = (char *)FUN_0547429c(asStack_18);
  __stream = fopen(__filename,"w+b");
  if (__stream != (FILE *)0x0) {
    uVar1 = GetPos(this);
    fprintf(__stream,"%u\n",uVar1 & 0xffffffff);
    getLastModifiedTimeStamp();
    uVar2 = FUN_0547429c(asStack_10);
    fprintf(__stream,"%s\n",uVar2);
    std::string::~string(asStack_10);
    fclose(__stream);
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__stream != (FILE *)0x0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::DeletePartialFiles() */

void Sexy::ResumableRequestInfo::DeletePartialFiles(void)

{
  string *psVar1;
  char cVar2;
  char cVar3;
  ResumableRequestInfo *this;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  ResumableRequestInfo *local_8;
  
  psVar1 = gSexyAppBase;
  local_8 = ___stack_chk_guard;
  GetResumeCachedFolder(___stack_chk_guard);
  GetCachedFileName();
  std::operator+(asStack_20,asStack_18);
  cVar2 = SexyAppBase::EraseFile(psVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  psVar1 = gSexyAppBase;
  GetResumeCachedFolder(this);
  GetCachedFileName();
  std::operator+(asStack_28,asStack_20);
  std::operator+(asStack_18,".txt");
  cVar3 = SexyAppBase::EraseFile(psVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3 != '\0' && cVar2 != '\0');
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::HandleReceivedResponse(Sexy::NetworkServiceListener*, void const*,
   std::string&, std::string&, int, int) */

void __thiscall
Sexy::ResumableRequestInfo::HandleReceivedResponse
          (ResumableRequestInfo *this,NetworkServiceListener *param_1,void *param_2,string *param_3,
          string *param_4,int param_5,int param_6)

{
  char cVar1;
  undefined4 uVar2;
  ResumableRequestInfo *this_00;
  AsyncCreateFileOfSizeTask *this_01;
  AsyncTaskManager *this_02;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AllocateBuffers(this,(ulong)*(uint *)(this + 0x94));
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    uVar2 = GetPos(this);
    *(undefined4 *)(this + 0x90) = uVar2;
  }
  else {
    if (param_5 == 200) {
      DeletePartialFiles();
    }
    setLastModifiedTimeStamp(this,param_4);
    *(long *)(this + 0x88) = (long)param_6;
    this_00 = (ResumableRequestInfo *)ClearPos(this);
    *(undefined4 *)(this + 0x90) = 0;
    GetResumeCachedFolder(this_00);
    GetCachedFileName();
    std::operator+(asStack_20,asStack_18);
    this_01 = ::operator_new(0x70);
    AsyncCreateFileOfSizeTask::AsyncCreateFileOfSizeTask
              (this_01,this,param_1,param_2,asStack_10,*(ulong *)(this + 0x88));
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    this_02 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
    getQueueName();
    AsyncTaskManager::AddTaskToQueue(this_02,(IAsyncNetworkTask *)this_01,asStack_10);
    std::string::~string(asStack_10);
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResumableRequestInfo::~ResumableRequestInfo() */

void __thiscall Sexy::ResumableRequestInfo::~ResumableRequestInfo(ResumableRequestInfo *this)

{
  *(undefined ***)this = &PTR__ResumableRequestInfo_06a30400;
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  if (*(long **)(this + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
  }
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  StructuredData::Clear((StructuredData *)(this + 8));
  std::string::~string((string *)(this + 0x100));
  std::string::~string((string *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0xb0));
  StructuredData::~StructuredData((StructuredData *)(this + 8));
  return;
}


/* Sexy::ResumableRequestInfo::~ResumableRequestInfo() */

void __thiscall Sexy::ResumableRequestInfo::~ResumableRequestInfo(ResumableRequestInfo *this)

{
  ~ResumableRequestInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::ResumeRequestError(Sexy::NetworkServiceListener*, void const*, int)
    */

void __thiscall
Sexy::ResumableRequestInfo::ResumeRequestError
          (ResumableRequestInfo *this,NetworkServiceListener *param_1,void *param_2,int param_3)

{
  char *pcVar1;
  string asStack_90 [8];
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"ResumeRequestError: ");
  nop();
  StructuredData::StructuredData(aSStack_80);
  StructuredData::Clear(aSStack_80);
  StructuredData::BeginObject(aSStack_80);
  StructuredData::AddInteger(aSStack_80,"errorID",(long)param_3);
  (*(code *)**(undefined8 **)param_1)(asStack_88,param_1,param_3);
  pcVar1 = (char *)FUN_0547429c(asStack_88);
  StructuredData::AddString(aSStack_80,"error",pcVar1);
  std::string::~string(asStack_88);
  StructuredData::EndObject(aSStack_80);
  if (*(code **)(*(long *)param_1 + 0x38) != DummyNetworkServiceListener::ServiceRequestFailed) {
    (**(code **)(*(long *)param_1 + 0x38))(param_1,aSStack_80,param_2);
  }
  StructuredData::~StructuredData(aSStack_80);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::Prepare(Sexy::NetworkServiceManager*, std::string const&) */

void __thiscall
Sexy::ResumableRequestInfo::Prepare
          (ResumableRequestInfo *this,NetworkServiceManager *param_1,string *param_2)

{
  string *psVar1;
  char cVar2;
  undefined4 uVar3;
  NetworkServiceRequest *this_00;
  AsyncTaskManager *this_01;
  undefined8 uVar4;
  long lVar5;
  ResumableRequestInfo *pRVar6;
  ulong uVar7;
  AsyncFinalizeResumeRequestTask *this_02;
  AsyncQueueCompletedSuccessfullyTask *this_03;
  long *plVar8;
  int iVar9;
  code *pcVar10;
  int local_1ac;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkServiceRequest *)getParentRequest(this);
  GetTargetFilePath();
  GetFileName(asStack_180,true);
  std::string::~string(asStack_180);
  GetTargetFilePath();
  cVar2 = FUN_0547419c(asStack_188);
  if (cVar2 == '\0') {
    cVar2 = FUN_0547419c(asStack_1a8);
    if (cVar2 != '\0') goto LAB_051b1ab0;
    plVar8 = *(long **)(gSexyAppBase + 0x28);
    pcVar10 = *(code **)(*plVar8 + 0x78);
    GetTargetFilePath();
    cVar2 = (*pcVar10)(plVar8,asStack_180);
    std::string::~string(asStack_180);
    std::string::~string(asStack_188);
    if (cVar2 != '\0') {
      FUN_031f5e7c(asStack_198,"partial_",asStack_1a8);
      psVar1 = (string *)(this + 0xf8);
      std::operator+(asStack_198,"_");
      GetMD5(param_2);
      std::operator+(asStack_190,asStack_188);
      FUN_05474278(this + 0xf0,asStack_180);
      std::string::~string(asStack_180);
      std::string::~string(asStack_188);
      std::string::~string(asStack_190);
      std::string::~string(asStack_198);
      this_01 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
      uVar3 = operator|(0x10,8);
      iVar9 = 0;
      while( true ) {
        FUN_05462470(auStack_178,uVar3);
        uVar4 = FUN_0545ec84(auStack_168,this + 0xf0);
        uVar4 = FUN_054603b8(uVar4,&DAT_055a8370);
        FUN_0546065c(uVar4,iVar9);
        FUN_05462824(asStack_180,auStack_178);
        FUN_05474278(psVar1,asStack_180);
        std::string::~string(asStack_180);
        lVar5 = AsyncTaskManager::GetQueueByName(this_01,psVar1);
        if (lVar5 == 0) break;
        iVar9 = iVar9 + 1;
        FUN_054617bc(auStack_178);
      }
      AsyncTaskManager::CreateQueue(this_01,psVar1);
      FUN_054617bc(auStack_178);
      pRVar6 = (ResumableRequestInfo *)GetPos(this);
      if ((int)pRVar6 == -1) {
LAB_051b1cb8:
        DeletePartialFiles();
        ClearPos(this);
      }
      else {
        GetResumeCachedFolder(pRVar6);
        GetCachedFileName();
        std::operator+(asStack_188,asStack_180);
        std::string::~string(asStack_180);
        std::string::~string(asStack_188);
        cVar2 = SexyAppBase::FileExists(gSexyAppBase,asStack_1a0);
        if (cVar2 == '\0') {
LAB_051b1d2c:
          std::string::~string(asStack_1a0);
          goto LAB_051b1cb8;
        }
        uVar7 = (**(code **)(**(long **)(gSexyAppBase + 0x28) + 0xd0))
                          (*(long **)(gSexyAppBase + 0x28),asStack_1a0);
        *(ulong *)(this + 0x88) = uVar7;
        std::operator+(asStack_1a0,".txt");
        local_1ac = 0;
        std::string::string(asStack_190,"");
        nop();
        cVar2 = ReadResumeFile(asStack_198,&local_1ac,asStack_190);
        if (((cVar2 == '\0') || (local_1ac < 1)) || (uVar7 < (ulong)(long)local_1ac)) {
          std::string::~string(asStack_190);
          std::string::~string(asStack_198);
          goto LAB_051b1d2c;
        }
        if (uVar7 == (long)local_1ac) {
          this_02 = ::operator_new(0x68);
          AsyncFinalizeResumeRequestTask::AsyncFinalizeResumeRequestTask
                    (this_02,param_1,this,*(NetworkServiceListener **)(this_00 + 0x18),
                     *(void **)(this_00 + 0x10));
          getQueueName();
          AsyncTaskManager::AddTaskToQueue(this_01,(IAsyncNetworkTask *)this_02,asStack_180);
          std::string::~string(asStack_180);
          pRVar6 = (ResumableRequestInfo *)
                   NetworkServiceRequest::TakeResumableInfoAndMarkForCancellation(this_00,false);
          this_03 = ::operator_new(0x60);
          AsyncQueueCompletedSuccessfullyTask::AsyncQueueCompletedSuccessfullyTask
                    (this_03,pRVar6,*(NetworkServiceListener **)(this_00 + 0x18),
                     *(void **)(this_00 + 0x10));
          getQueueName();
          AsyncTaskManager::AddTaskToQueue(this_01,(IAsyncNetworkTask *)this_03,asStack_180);
          std::string::~string(asStack_180);
        }
        else {
          ClearPos(this);
          IncrPos(this,local_1ac);
          setLastModifiedTimeStamp(this,asStack_190);
          FUN_05462470(auStack_178,uVar3);
          uVar4 = FUN_054603b8(auStack_168,"bytes=");
          uVar3 = GetPos(this);
          uVar4 = FUN_0546065c(uVar4,uVar3);
          FUN_054603b8(uVar4,&DAT_055cff18);
          plVar8 = *(long **)this_00;
          pcVar10 = *(code **)(*plVar8 + 0x10);
          std::string::string(asStack_180,"Range");
          FUN_05462824(asStack_188,auStack_178);
          (*pcVar10)(plVar8,asStack_180,asStack_188);
          std::string::~string(asStack_188);
          std::string::~string(asStack_180);
          nop();
          if (this[0x84] != (ResumableRequestInfo)0x0) {
            plVar8 = *(long **)this_00;
            pcVar10 = *(code **)(*plVar8 + 0x10);
            std::string::string(asStack_180,"If-Range");
            getLastModifiedTimeStamp();
            (*pcVar10)(plVar8,asStack_180,asStack_188);
            std::string::~string(asStack_188);
            std::string::~string(asStack_180);
            nop();
          }
          FUN_054617bc(auStack_178);
        }
        std::string::~string(asStack_190);
        std::string::~string(asStack_198);
        std::string::~string(asStack_1a0);
      }
      std::string::~string(asStack_1a8);
      goto LAB_051b1ae4;
    }
  }
  else {
LAB_051b1ab0:
    std::string::~string(asStack_188);
  }
  ResumeRequestError(this,*(NetworkServiceListener **)(this_00 + 0x18),*(void **)(this_00 + 0x10),
                     0x57c);
  NetworkServiceRequest::MarkForCancellation(this_00,false);
  std::string::~string(asStack_1a8);
LAB_051b1ae4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResumableRequestInfo::FinalizeResumeRequest(Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::ResumableRequestInfo::FinalizeResumeRequest
          (ResumableRequestInfo *this,NetworkServiceListener *param_1,void *param_2)

{
  string *psVar1;
  uint uVar2;
  ResumableRequestInfo *this_00;
  long *plVar3;
  code *pcVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = *(long **)(gSexyAppBase + 0x28);
  pcVar4 = *(code **)(*plVar3 + 0x140);
  GetTargetFilePath();
  (*pcVar4)(plVar3,asStack_10);
  std::string::~string(asStack_10);
  GetTargetFilePath();
  GetFileDir(asStack_18,false);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar1 = gSexyAppBase;
  GetResumeCachedFolder(this_00);
  GetCachedFileName();
  std::operator+(asStack_28,asStack_20);
  GetTargetFilePath();
  uVar2 = SexyAppBase::RenameFile(psVar1,asStack_18);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if ((uVar2 & 0xff) == 0) {
    ResumeRequestError(this,param_1,param_2,0x57b);
  }
  else {
    DeletePartialFiles();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

