// Class: Sexy::AsyncRemakeRequestTask


/* Sexy::AsyncRemakeRequestTask::OnPriorTaskError() */

void __thiscall Sexy::AsyncRemakeRequestTask::OnPriorTaskError(AsyncRemakeRequestTask *this)

{
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* Sexy::AsyncRemakeRequestTask::RunImpl() */

void __thiscall Sexy::AsyncRemakeRequestTask::RunImpl(AsyncRemakeRequestTask *this)

{
  NetworkServiceManager *pNVar1;
  
  pNVar1 = (NetworkServiceManager *)NetworkServiceManager::TryDefaultNetworkServiceManager();
  if (pNVar1 != (NetworkServiceManager *)0x0) {
    ResumableRequestInfo::RemakeRequest
              (*(ResumableRequestInfo **)(this + 0x48),pNVar1,
               *(NetworkServiceListener **)(this + 0x50),*(void **)(this + 0x58));
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* Sexy::AsyncRemakeRequestTask::~AsyncRemakeRequestTask() */

void __thiscall Sexy::AsyncRemakeRequestTask::~AsyncRemakeRequestTask(AsyncRemakeRequestTask *this)

{
  *(undefined ***)this = &PTR__AsyncRemakeRequestTask_06a307d0;
  AsyncMainThreadTask::~AsyncMainThreadTask((AsyncMainThreadTask *)this);
  return;
}


/* Sexy::AsyncRemakeRequestTask::~AsyncRemakeRequestTask() */

void __thiscall Sexy::AsyncRemakeRequestTask::~AsyncRemakeRequestTask(AsyncRemakeRequestTask *this)

{
  ~AsyncRemakeRequestTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncRemakeRequestTask::AsyncRemakeRequestTask(Sexy::ResumableRequestInfo*,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::AsyncRemakeRequestTask::AsyncRemakeRequestTask
          (AsyncRemakeRequestTask *this,ResumableRequestInfo *param_1,
          NetworkServiceListener *param_2,void *param_3)

{
  AsyncMainThreadTask::AsyncMainThreadTask((AsyncMainThreadTask *)this);
  *(ResumableRequestInfo **)(this + 0x48) = param_1;
  *(NetworkServiceListener **)(this + 0x50) = param_2;
  *(void **)(this + 0x58) = param_3;
  *(undefined ***)this = &PTR__AsyncRemakeRequestTask_06a307d0;
  thunk_FUN_05475e00(this + 8,&DAT_06bbda90);
  return;
}

