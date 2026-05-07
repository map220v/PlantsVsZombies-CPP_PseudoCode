// Class: Sexy::AsyncFinalizeResumeRequestTask


/* Sexy::AsyncFinalizeResumeRequestTask::~AsyncFinalizeResumeRequestTask() */

void __thiscall
Sexy::AsyncFinalizeResumeRequestTask::~AsyncFinalizeResumeRequestTask
          (AsyncFinalizeResumeRequestTask *this)

{
  *(undefined ***)this = &PTR__AsyncFinalizeResumeRequestTask_06a306f0;
  AsyncThreadedTask::~AsyncThreadedTask((AsyncThreadedTask *)this);
  return;
}


/* Sexy::AsyncFinalizeResumeRequestTask::~AsyncFinalizeResumeRequestTask() */

void __thiscall
Sexy::AsyncFinalizeResumeRequestTask::~AsyncFinalizeResumeRequestTask
          (AsyncFinalizeResumeRequestTask *this)

{
  ~AsyncFinalizeResumeRequestTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncFinalizeResumeRequestTask::AsyncFinalizeResumeRequestTask(Sexy::NetworkServiceManager*,
   Sexy::ResumableRequestInfo*, Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::AsyncFinalizeResumeRequestTask::AsyncFinalizeResumeRequestTask
          (AsyncFinalizeResumeRequestTask *this,NetworkServiceManager *param_1,
          ResumableRequestInfo *param_2,NetworkServiceListener *param_3,void *param_4)

{
  AsyncThreadedTask::AsyncThreadedTask((AsyncThreadedTask *)this);
  *(NetworkServiceManager **)(this + 0x48) = param_1;
  *(ResumableRequestInfo **)(this + 0x50) = param_2;
  *(NetworkServiceListener **)(this + 0x58) = param_3;
  *(undefined ***)this = &PTR__AsyncFinalizeResumeRequestTask_06a306f0;
  *(void **)(this + 0x60) = param_4;
  thunk_FUN_05475e00(this + 8,&DAT_06bbda80);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncFinalizeResumeRequestTask::RunImpl() */

void __thiscall Sexy::AsyncFinalizeResumeRequestTask::RunImpl(AsyncFinalizeResumeRequestTask *this)

{
  string *psVar1;
  char cVar2;
  AsyncResumeRequestErrorTask *this_00;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = gSexyAppBase;
  local_8 = ___stack_chk_guard;
  ResumableRequestInfo::GetResumeCachedFolder((ResumableRequestInfo *)&gSexyAppBase);
  ResumableRequestInfo::GetCachedFileName();
  std::operator+(asStack_28,asStack_20);
  ResumableRequestInfo::GetTargetFilePath();
  cVar2 = SexyAppBase::RenameFile(psVar1,asStack_18);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (cVar2 == '\0') {
    this_00 = ::operator_new(0x70);
    AsyncResumeRequestErrorTask::AsyncResumeRequestErrorTask
              (this_00,*(ResumableRequestInfo **)(this + 0x50),
               *(NetworkServiceListener **)(this + 0x58),*(void **)(this + 0x60),0x57b);
    (**(code **)(*(long *)this + 0x48))(this,this_00);
  }
  else {
    ResumableRequestInfo::DeletePartialFiles();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

