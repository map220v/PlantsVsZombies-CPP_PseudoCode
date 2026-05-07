// Class: Sexy::AsyncTaskQueue


/* Sexy::AsyncTaskQueue::GetTasks() */

AsyncTaskQueue * __thiscall Sexy::AsyncTaskQueue::GetTasks(AsyncTaskQueue *this)

{
  return this + 0x48;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskQueue::HasPendingErrorTask() const */

void __thiscall Sexy::AsyncTaskQueue::HasPendingErrorTask(AsyncTaskQueue *this)

{
  AsyncTaskQueue AVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x98));
  AVar1 = this[0x110];
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(AVar1);
}


/* Sexy::AsyncTaskQueue::QueueFinished() */

void __thiscall Sexy::AsyncTaskQueue::QueueFinished(AsyncTaskQueue *this)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0x50);
  cVar1 = (**(code **)(*(long *)this + 0x58))();
  uVar2 = 4;
  if (cVar1 == '\0') {
    uVar2 = 3;
  }
  (*pcVar3)(this,uVar2);
  return;
}


/* Sexy::AsyncTaskQueue::IsQueueEmpty() const */

undefined8 __thiscall Sexy::AsyncTaskQueue::IsQueueEmpty(AsyncTaskQueue *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)this);
  if ((iVar1 != 4) && (iVar1 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)this), iVar1 != 3))
  {
    uVar2 = std::
            queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
            ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                     *)(this + 0x48));
    return uVar2;
  }
  return 1;
}


/* Sexy::AsyncTaskQueue::GetNextTask() */

IAsyncNetworkTask * __thiscall Sexy::AsyncTaskQueue::GetNextTask(AsyncTaskQueue *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  IAsyncNetworkTask *this_00;
  
  cVar1 = std::
          queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
          ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                   *)(this + 0x48));
  if (((cVar1 == '\0') &&
      (iVar2 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)this), iVar2 != 4)) &&
     (iVar2 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)this), iVar2 != 3)) {
    puVar3 = (undefined8 *)
             std::
             queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
             ::front();
    this_00 = (IAsyncNetworkTask *)*puVar3;
    iVar2 = IAsyncNetworkTask::GetState(this_00);
    if (iVar2 != 0) {
      this_00 = (IAsyncNetworkTask *)0x0;
    }
    return this_00;
  }
  return (IAsyncNetworkTask *)0x0;
}


/* Sexy::AsyncTaskQueue::GetPendingErrorTask() */

undefined8 Sexy::AsyncTaskQueue::GetPendingErrorTask(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           std::
           queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
           ::front();
  return *puVar1;
}


/* Sexy::AsyncTaskQueue::RemoveTask() */

void __thiscall Sexy::AsyncTaskQueue::RemoveTask(AsyncTaskQueue *this)

{
  long *plVar1;
  
  plVar1 = (long *)std::
                   queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                   ::front();
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 8))();
  }
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::pop((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
         *)(this + 0x48));
  return;
}


/* Sexy::AsyncTaskQueue::RemoveCompletedTasks() */

queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
* __thiscall Sexy::AsyncTaskQueue::RemoveCompletedTasks(AsyncTaskQueue *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  while( true ) {
    cVar1 = std::
            queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
            ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                     *)(this + 0x48));
    if (cVar1 != '\0') {
      return (queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
              *)(this + 0x48);
    }
    puVar3 = (undefined8 *)
             std::
             queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
             ::front();
    iVar2 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)*puVar3);
    if (1 < iVar2 - 3U) break;
    RemoveTask(this);
  }
  return (queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
          *)this;
}


/* Sexy::AsyncTaskQueue::NotifyPendingTasksOfError() */

queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
* __thiscall Sexy::AsyncTaskQueue::NotifyPendingTasksOfError(AsyncTaskQueue *this)

{
  char cVar1;
  undefined8 *puVar2;
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  *pqVar3;
  
  while( true ) {
    cVar1 = std::
            queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
            ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                     *)(this + 0x48));
    if (cVar1 != '\0') {
      return (queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
              *)(this + 0x48);
    }
    puVar2 = (undefined8 *)
             std::
             queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
             ::front();
    pqVar3 = (queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
              *)*puVar2;
    cVar1 = (**(code **)(*(long *)pqVar3 + 0x38))(pqVar3);
    if (cVar1 != '\0') break;
    (**(code **)(*(long *)pqVar3 + 0x28))(pqVar3);
    RemoveTask(this);
  }
  return pqVar3;
}


/* Sexy::AsyncTaskQueue::~AsyncTaskQueue() */

void __thiscall Sexy::AsyncTaskQueue::~AsyncTaskQueue(AsyncTaskQueue *this)

{
  *(undefined ***)this = &PTR__AsyncTaskQueue_06a30570;
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::~queue((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
            *)(this + 0xc0));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x98));
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::~queue((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
            *)(this + 0x48));
  IAsyncNetworkTask::~IAsyncNetworkTask((IAsyncNetworkTask *)this);
  return;
}


/* Sexy::AsyncTaskQueue::~AsyncTaskQueue() */

void __thiscall Sexy::AsyncTaskQueue::~AsyncTaskQueue(AsyncTaskQueue *this)

{
  ~AsyncTaskQueue(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskQueue::AsyncTaskQueue(std::string const&) */

void __thiscall Sexy::AsyncTaskQueue::AsyncTaskQueue(AsyncTaskQueue *this,string *param_1)

{
  deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> adStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IAsyncNetworkTask::IAsyncNetworkTask((IAsyncNetworkTask *)this);
  *(undefined ***)this = &PTR__AsyncTaskQueue_06a30570;
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::deque();
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::queue((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
           *)(this + 0x48),(deque *)adStack_58);
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::~deque(adStack_58);
  CritSect::CritSect((CritSect *)(this + 0x98));
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::deque();
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::queue((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
           *)(this + 0xc0),(deque *)adStack_58);
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::~deque(adStack_58);
  this[0x110] = (AsyncTaskQueue)0x0;
  thunk_FUN_05475e00(this + 8,param_1);
  IAsyncNetworkTask::setState((IAsyncNetworkTask *)this,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskQueue::AddTask(Sexy::IAsyncNetworkTask*) */

void __thiscall Sexy::AsyncTaskQueue::AddTask(AsyncTaskQueue *this,IAsyncNetworkTask *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x30))(param_1,this);
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x98));
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::push((IAsyncNetworkTask **)(this + 0xc0));
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskQueue::AddErrorTask(Sexy::IAsyncNetworkTask*) */

void __thiscall Sexy::AsyncTaskQueue::AddErrorTask(AsyncTaskQueue *this,IAsyncNetworkTask *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x30))(param_1,this);
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x98));
  std::
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  ::push((IAsyncNetworkTask **)(this + 0xc0));
  this[0x110] = (AsyncTaskQueue)0x1;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskQueue::addPendingTasks() */

void __thiscall Sexy::AsyncTaskQueue::addPendingTasks(AsyncTaskQueue *this)

{
  char cVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x98));
  while (cVar1 = std::
                 queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                 ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                          *)(this + 0xc0)), cVar1 == '\0') {
    std::
    queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
    ::front();
    std::
    queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
    ::push((IAsyncNetworkTask **)(this + 0x48));
    std::
    queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
    ::pop((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
           *)(this + 0xc0));
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AsyncTaskQueue::Clear() */

void __thiscall Sexy::AsyncTaskQueue::Clear(AsyncTaskQueue *this)

{
  char cVar1;
  
  addPendingTasks(this);
  while (cVar1 = std::
                 queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                 ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                          *)(this + 0x48)), cVar1 == '\0') {
    RemoveTask(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskQueue::Update() */

void __thiscall Sexy::AsyncTaskQueue::Update(AsyncTaskQueue *this)

{
  char cVar1;
  AutoCrit aAStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x98));
  while (cVar1 = std::
                 queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                 ::empty((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                          *)(this + 0xc0)), cVar1 == '\0') {
    std::
    queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
    ::front();
    std::
    queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
    ::push((IAsyncNetworkTask **)(this + 0x48));
    std::
    queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
    ::pop((queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
           *)(this + 0xc0));
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

