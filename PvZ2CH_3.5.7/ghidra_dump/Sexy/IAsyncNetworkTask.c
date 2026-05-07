// Class: Sexy::IAsyncNetworkTask


/* Sexy::IAsyncNetworkTask::GetName() */

undefined8 Sexy::IAsyncNetworkTask::GetName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IAsyncNetworkTask::SetParentQueue(Sexy::AsyncTaskQueue*) */

void __thiscall
Sexy::IAsyncNetworkTask::SetParentQueue(IAsyncNetworkTask *this,AsyncTaskQueue *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x10));
  *(AsyncTaskQueue **)(this + 0x38) = param_1;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IAsyncNetworkTask::setState(Sexy::IAsyncNetworkTask::State) */

void __thiscall Sexy::IAsyncNetworkTask::setState(IAsyncNetworkTask *this,undefined4 param_2)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x10));
  *(undefined4 *)(this + 0x40) = param_2;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::IAsyncNetworkTask::IAsyncNetworkTask() */

void __thiscall Sexy::IAsyncNetworkTask::IAsyncNetworkTask(IAsyncNetworkTask *this)

{
  size_t in_x2;
  
  *(undefined **)this = &DAT_06a30500;
  Set8BytesTo0((string *)(this + 8));
  CritSect::CritSect((CritSect *)(this + 0x10));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}


/* Sexy::IAsyncNetworkTask::~IAsyncNetworkTask() */

void __thiscall Sexy::IAsyncNetworkTask::~IAsyncNetworkTask(IAsyncNetworkTask *this)

{
  *(undefined **)this = &DAT_06a30500;
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* Sexy::IAsyncNetworkTask::~IAsyncNetworkTask() */

void __thiscall Sexy::IAsyncNetworkTask::~IAsyncNetworkTask(IAsyncNetworkTask *this)

{
  ~IAsyncNetworkTask(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IAsyncNetworkTask::GetState() const */

void __thiscall Sexy::IAsyncNetworkTask::GetState(IAsyncNetworkTask *this)

{
  undefined4 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x10));
  uVar1 = *(undefined4 *)(this + 0x40);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::IAsyncNetworkTask::SetPendingRunState() */

void __thiscall Sexy::IAsyncNetworkTask::SetPendingRunState(IAsyncNetworkTask *this)

{
  (**(code **)(*(long *)this + 0x50))(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IAsyncNetworkTask::getParentQueueName() const */

void Sexy::IAsyncNetworkTask::getParentQueueName(void)

{
  long in_x0;
  string *in_x8;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(in_x0 + 0x10));
  if (*(long **)(in_x0 + 0x38) == (long *)0x0) {
    std::string::string(in_x8,"<no parent queue>");
    nop();
  }
  else {
    (**(code **)(**(long **)(in_x0 + 0x38) + 0x10))();
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::IAsyncNetworkTask::Run() */

void __thiscall Sexy::IAsyncNetworkTask::Run(IAsyncNetworkTask *this)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x50))(this,2);
  (**(code **)(*(long *)this + 0x18))(this);
  iVar2 = GetState(this);
  if (iVar2 != 4) {
    (**(code **)(*(long *)this + 0x50))(this,3);
  }
  cVar1 = (**(code **)(*(long *)this + 0x40))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x38))(this), cVar1 == '\0')) {
    return;
  }
  AsyncTaskQueue::QueueFinished(*(AsyncTaskQueue **)(this + 0x38));
  return;
}


/* Sexy::IAsyncNetworkTask::notifyTaskError(Sexy::IAsyncNetworkTask*) */

void __thiscall
Sexy::IAsyncNetworkTask::notifyTaskError(IAsyncNetworkTask *this,IAsyncNetworkTask *param_1)

{
  (**(code **)(*(long *)this + 0x50))(this,4);
  if (param_1 != (IAsyncNetworkTask *)0x0) {
    AsyncTaskQueue::AddErrorTask(*(AsyncTaskQueue **)(this + 0x38),param_1);
    return;
  }
  return;
}

