// Class: Sexy::AsyncCreateFileOfSizeTask


/* Sexy::AsyncCreateFileOfSizeTask::~AsyncCreateFileOfSizeTask() */

void __thiscall
Sexy::AsyncCreateFileOfSizeTask::~AsyncCreateFileOfSizeTask(AsyncCreateFileOfSizeTask *this)

{
  *(undefined ***)this = &PTR__AsyncCreateFileOfSizeTask_06a30610;
  std::string::~string((string *)(this + 0x60));
  AsyncThreadedTask::~AsyncThreadedTask((AsyncThreadedTask *)this);
  return;
}


/* Sexy::AsyncCreateFileOfSizeTask::~AsyncCreateFileOfSizeTask() */

void __thiscall
Sexy::AsyncCreateFileOfSizeTask::~AsyncCreateFileOfSizeTask(AsyncCreateFileOfSizeTask *this)

{
  ~AsyncCreateFileOfSizeTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncCreateFileOfSizeTask::AsyncCreateFileOfSizeTask(Sexy::ResumableRequestInfo*,
   Sexy::NetworkServiceListener*, void const*, std::string const&, unsigned long) */

void __thiscall
Sexy::AsyncCreateFileOfSizeTask::AsyncCreateFileOfSizeTask
          (AsyncCreateFileOfSizeTask *this,ResumableRequestInfo *param_1,
          NetworkServiceListener *param_2,void *param_3,string *param_4,ulong param_5)

{
  AsyncThreadedTask::AsyncThreadedTask((AsyncThreadedTask *)this);
  *(NetworkServiceListener **)(this + 0x50) = param_2;
  *(void **)(this + 0x58) = param_3;
  *(undefined ***)this = &PTR__AsyncCreateFileOfSizeTask_06a30610;
  *(ResumableRequestInfo **)(this + 0x48) = param_1;
  FUN_05475d88(this + 0x60,param_4);
  *(ulong *)(this + 0x68) = param_5;
  thunk_FUN_05475e00(this + 8,&DAT_06bbda70);
  return;
}


/* Sexy::AsyncCreateFileOfSizeTask::RunImpl() */

void __thiscall Sexy::AsyncCreateFileOfSizeTask::RunImpl(AsyncCreateFileOfSizeTask *this)

{
  char cVar1;
  AsyncResumeRequestErrorTask *this_00;
  
  cVar1 = SexyAppBase::CreateFileOfSize(gSexyAppBase,(ulong)(this + 0x60));
  if (cVar1 == '\0') {
    ResumableRequestInfo::DeletePartialFiles();
    this_00 = ::operator_new(0x70);
    AsyncResumeRequestErrorTask::AsyncResumeRequestErrorTask
              (this_00,*(ResumableRequestInfo **)(this + 0x48),
               *(NetworkServiceListener **)(this + 0x50),*(void **)(this + 0x58),0x579);
    (**(code **)(*(long *)this + 0x48))(this,this_00);
  }
  return;
}

