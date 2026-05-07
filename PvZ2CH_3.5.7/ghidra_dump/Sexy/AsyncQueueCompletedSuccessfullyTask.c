// Class: Sexy::AsyncQueueCompletedSuccessfullyTask


/* Sexy::AsyncQueueCompletedSuccessfullyTask::OnPriorTaskError() */

void __thiscall
Sexy::AsyncQueueCompletedSuccessfullyTask::OnPriorTaskError
          (AsyncQueueCompletedSuccessfullyTask *this)

{
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncQueueCompletedSuccessfullyTask::RunImpl() */

void __thiscall
Sexy::AsyncQueueCompletedSuccessfullyTask::RunImpl(AsyncQueueCompletedSuccessfullyTask *this)

{
  code *pcVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(this + 0x48);
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*plVar2 + 0x28);
  ResumableRequestInfo::GetTargetFilePath();
  if (pcVar1 != NetworkServiceListener::ServiceResumableRequestCompleted) {
    (*pcVar1)(plVar2,asStack_10,*(undefined8 *)(this + 0x58));
  }
  std::string::~string(asStack_10);
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AsyncQueueCompletedSuccessfullyTask::~AsyncQueueCompletedSuccessfullyTask() */

void __thiscall
Sexy::AsyncQueueCompletedSuccessfullyTask::~AsyncQueueCompletedSuccessfullyTask
          (AsyncQueueCompletedSuccessfullyTask *this)

{
  *(undefined ***)this = &PTR__AsyncQueueCompletedSuccessfullyTask_06a308b0;
  AsyncMainThreadTask::~AsyncMainThreadTask((AsyncMainThreadTask *)this);
  return;
}


/* Sexy::AsyncQueueCompletedSuccessfullyTask::~AsyncQueueCompletedSuccessfullyTask() */

void __thiscall
Sexy::AsyncQueueCompletedSuccessfullyTask::~AsyncQueueCompletedSuccessfullyTask
          (AsyncQueueCompletedSuccessfullyTask *this)

{
  ~AsyncQueueCompletedSuccessfullyTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncQueueCompletedSuccessfullyTask::AsyncQueueCompletedSuccessfullyTask(Sexy::ResumableRequestInfo*,
   Sexy::NetworkServiceListener*, void const*) */

void __thiscall
Sexy::AsyncQueueCompletedSuccessfullyTask::AsyncQueueCompletedSuccessfullyTask
          (AsyncQueueCompletedSuccessfullyTask *this,ResumableRequestInfo *param_1,
          NetworkServiceListener *param_2,void *param_3)

{
  AsyncMainThreadTask::AsyncMainThreadTask((AsyncMainThreadTask *)this);
  *(NetworkServiceListener **)(this + 0x48) = param_2;
  *(ResumableRequestInfo **)(this + 0x50) = param_1;
  *(void **)(this + 0x58) = param_3;
  *(undefined ***)this = &PTR__AsyncQueueCompletedSuccessfullyTask_06a308b0;
  thunk_FUN_05475e00(this + 8,&DAT_06bbdaa0);
  return;
}

