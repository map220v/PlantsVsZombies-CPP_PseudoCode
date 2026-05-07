// Class: Sexy::AsyncTaskManager


/* Sexy::AsyncTaskManager::DefaultAsyncTaskManager() */

void Sexy::AsyncTaskManager::DefaultAsyncTaskManager(void)

{
  ProfileManager *this;
  
  this = (ProfileManager *)NetworkServiceManager::TryDefaultNetworkServiceManager();
  if (this != (ProfileManager *)0x0) {
    ProfileManager::GetListener(this);
    return;
  }
  return;
}


/* Sexy::AsyncTaskManager::startWorkerThread() */

void __thiscall Sexy::AsyncTaskManager::startWorkerThread(AsyncTaskManager *this)

{
  LaunchThread(workerThreadProc,this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::moveToNextQueue() */

void __thiscall Sexy::AsyncTaskManager::moveToNextQueue(AsyncTaskManager *this)

{
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  _List_const_iterator<Sexy::FontLayer> *this_01;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_10;
  long local_8;
  
  this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 8);
  local_8 = ___stack_chk_guard;
  cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_00);
  bVar2 = false;
  if (cVar1 == '\0') {
    this_01 = (_List_const_iterator<Sexy::FontLayer> *)(this + 0x18);
    std::_List_const_iterator<Sexy::FontLayer>::operator++(this_01);
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_00);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)this_01,(exception_ptr *)&local_10);
    if (cVar1 != '\0') {
      uVar3 = FUN_051b35bc(*(undefined8 *)(this + 8));
      *(undefined8 *)(this + 0x18) = uVar3;
    }
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)this_01,(rbtree_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::moveToPrevQueue() */

void __thiscall Sexy::AsyncTaskManager::moveToPrevQueue(AsyncTaskManager *this)

{
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  exception_ptr *this_01;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_10;
  long local_8;
  
  this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 8);
  local_8 = ___stack_chk_guard;
  cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_00);
  bVar2 = false;
  if (cVar1 == '\0') {
    this_01 = (exception_ptr *)(this + 0x18);
    local_10 = FUN_051b35bc(*(undefined8 *)(this + 8));
    cVar1 = std::__exception_ptr::operator==(this_01,(exception_ptr *)&local_10);
    if (cVar1 != '\0') {
      uVar3 = std::
              __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                        ((TaskResource **)this_00);
      *(undefined8 *)(this + 0x18) = uVar3;
    }
    eastl::
    ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
    ::operator--((ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
                  *)this_01);
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)this_01,(rbtree_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::GetQueueByName(std::string const&) const */

void __thiscall Sexy::AsyncTaskManager::GetQueueByName(AsyncTaskManager *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051b37a0(*(undefined8 *)(this + 8));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = 0;
LAB_051b3898:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    (**(code **)(*(long *)*puVar3 + 0x10))((string *)&local_10,(long *)*puVar3);
    iVar2 = FUN_054748a4((string *)&local_10,param_1);
    std::string::~string((string *)&local_10);
    if (iVar2 == 0) {
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      uVar4 = *puVar3;
      goto LAB_051b3898;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* Sexy::AsyncTaskManager::IsQueueEmpty(std::string const&) const */

undefined8 __thiscall Sexy::AsyncTaskManager::IsQueueEmpty(AsyncTaskManager *this,string *param_1)

{
  AsyncTaskQueue *this_00;
  undefined8 uVar1;
  
  this_00 = (AsyncTaskQueue *)GetQueueByName(this,param_1);
  if (this_00 != (AsyncTaskQueue *)0x0) {
    uVar1 = AsyncTaskQueue::IsQueueEmpty(this_00);
    return uVar1;
  }
  return 1;
}


/* Sexy::AsyncTaskManager::AsyncTaskManager() */

void __thiscall Sexy::AsyncTaskManager::AsyncTaskManager(AsyncTaskManager *this)

{
  undefined8 uVar1;
  _func_void *extraout_x1;
  
  *(undefined ***)this = &PTR__AsyncTaskManager_06a305f0;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 8));
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x18),extraout_x1);
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x20));
  CritSect::CritSect((CritSect *)(this + 0x30));
  Condition::Condition((Condition *)(this + 0x58));
  uVar1 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)(this + 8));
  *(undefined8 *)(this + 0x18) = uVar1;
  startWorkerThread(this);
  return;
}


/* Sexy::AsyncTaskManager::~AsyncTaskManager() */

void __thiscall Sexy::AsyncTaskManager::~AsyncTaskManager(AsyncTaskManager *this)

{
  *(undefined ***)this = &PTR__AsyncTaskManager_06a305f0;
  nop();
  Condition::~Condition((Condition *)(this + 0x58));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x30));
  std::list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::~list
            ((list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *)
             (this + 0x20));
  std::list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>>::~list
            ((list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>> *)(this + 8));
  return;
}


/* Sexy::AsyncTaskManager::~AsyncTaskManager() */

void __thiscall Sexy::AsyncTaskManager::~AsyncTaskManager(AsyncTaskManager *this)

{
  ~AsyncTaskManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::workerThreadMainLoop() */

void __thiscall Sexy::AsyncTaskManager::workerThreadMainLoop(AsyncTaskManager *this)

{
  list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *this_00;
  char cVar1;
  undefined8 *puVar2;
  IAsyncNetworkTask *this_01;
  AutoCrit aAStack_10 [8];
  undefined8 local_8;
  
  this_00 = (list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *)(this + 0x20)
  ;
  local_8 = ___stack_chk_guard;
  do {
    while( true ) {
      AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
      cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                         this_00);
      if (cVar1 == '\0') break;
      Condition::Reset((Condition *)(this + 0x58));
      AutoCrit::~AutoCrit(aAStack_10);
LAB_051b3bd8:
      Condition::Wait((Condition *)(this + 0x58),100000);
    }
    puVar2 = (undefined8 *)
             std::list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::front
                       (this_00);
    this_01 = (IAsyncNetworkTask *)*puVar2;
    AutoCrit::~AutoCrit(aAStack_10);
    if (this_01 == (IAsyncNetworkTask *)0x0) goto LAB_051b3bd8;
    IAsyncNetworkTask::Run(this_01);
    AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
    std::list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::pop_front(this_00)
    ;
    AutoCrit::~AutoCrit(aAStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::workerThreadProc(void*) */

void Sexy::AsyncTaskManager::workerThreadProc(void *param_1)

{
  list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *this;
  char cVar1;
  undefined8 *puVar2;
  IAsyncNetworkTask *this_00;
  AutoCrit aAStack_10 [8];
  undefined8 uStack_8;
  
  this = (list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *)
         ((long)param_1 + 0x20);
  uStack_8 = ___stack_chk_guard;
  do {
    while( true ) {
      AutoCrit::AutoCrit(aAStack_10,(CritSect *)((long)param_1 + 0x30));
      cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)this);
      if (cVar1 == '\0') break;
      Condition::Reset((Condition *)((long)param_1 + 0x58));
      AutoCrit::~AutoCrit(aAStack_10);
LAB_051b3bd8:
      Condition::Wait((Condition *)((long)param_1 + 0x58),100000);
    }
    puVar2 = (undefined8 *)
             std::list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::front
                       (this);
    this_00 = (IAsyncNetworkTask *)*puVar2;
    AutoCrit::~AutoCrit(aAStack_10);
    if (this_00 == (IAsyncNetworkTask *)0x0) goto LAB_051b3bd8;
    IAsyncNetworkTask::Run(this_00);
    AutoCrit::AutoCrit(aAStack_10,(CritSect *)((long)param_1 + 0x30));
    std::list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::pop_front(this);
    AutoCrit::~AutoCrit(aAStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::CreateQueue(std::string const&) */

void __thiscall Sexy::AsyncTaskManager::CreateQueue(AsyncTaskManager *this,string *param_1)

{
  int iVar1;
  AsyncTaskQueue *pAVar2;
  undefined8 uVar3;
  AsyncTaskQueue *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar2 = (AsyncTaskQueue *)GetQueueByName(this,param_1);
  if (pAVar2 == (AsyncTaskQueue *)0x0) {
    pAVar2 = ::operator_new(0x118);
    AsyncTaskQueue::AsyncTaskQueue(pAVar2,param_1);
    local_10 = pAVar2;
    std::list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>>::push_back
              ((list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>> *)(this + 8),
               &local_10);
    iVar1 = std::list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>>::size
                      ((list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>> *)
                       (this + 8));
    pAVar2 = local_10;
    if (iVar1 == 1) {
      uVar3 = FUN_051b35bc(*(undefined8 *)(this + 8));
      *(undefined8 *)(this + 0x18) = uVar3;
      pAVar2 = local_10;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pAVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::addWorkerThreadTask(Sexy::IAsyncNetworkTask*) */

void __thiscall
Sexy::AsyncTaskManager::addWorkerThreadTask(AsyncTaskManager *this,IAsyncNetworkTask *param_1)

{
  IAsyncNetworkTask *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
  std::list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::push_back
            ((list<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *)
             (this + 0x20),&local_18);
  IAsyncNetworkTask::SetPendingRunState(local_18);
  Condition::Notify((Condition *)(this + 0x58));
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AsyncTaskManager::AddTaskToQueue(Sexy::IAsyncNetworkTask*, Sexy::AsyncTaskQueue*) */

void __thiscall
Sexy::AsyncTaskManager::AddTaskToQueue
          (AsyncTaskManager *this,IAsyncNetworkTask *param_1,AsyncTaskQueue *param_2)

{
  if (param_1 != (IAsyncNetworkTask *)0x0) {
    AsyncTaskQueue::AddTask(param_2,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::AddTaskToQueue(Sexy::IAsyncNetworkTask*, std::string const&) */

void __thiscall
Sexy::AsyncTaskManager::AddTaskToQueue
          (AsyncTaskManager *this,IAsyncNetworkTask *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051b35bc(*(undefined8 *)(this + 8));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_051b49fc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    (**(code **)(*(long *)*puVar3 + 0x10))((string *)&local_10,(long *)*puVar3);
    iVar2 = FUN_054748a4((string *)&local_10,param_2);
    std::string::~string((string *)&local_10);
    if (iVar2 == 0) {
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      AddTaskToQueue(this,param_1,(AsyncTaskQueue *)*puVar3);
      goto LAB_051b49fc;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::RequestQueueDelete(Sexy::AsyncTaskQueue*) */

void __thiscall
Sexy::AsyncTaskManager::RequestQueueDelete(AsyncTaskManager *this,AsyncTaskQueue *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  AsyncTaskQueue *local_28 [2];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)(this + 0x18));
  if ((AsyncTaskQueue *)*plVar2 == local_28[0]) {
    moveToPrevQueue(this);
  }
  AsyncTaskQueue::Clear(local_28[0]);
  this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 8);
  uVar3 = FUN_051b35bc(*(undefined8 *)this_00);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)this_00);
  local_18 = (TextureInfo **)
             std::find<std::_List_iterator<Sexy::AsyncTaskQueue*>,Sexy::AsyncTaskQueue*>
                       (uVar3,uVar4,local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  FUN_051b3934(local_10);
  cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_00);
  if (cVar1 != '\0') {
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)this_00);
    *(undefined8 *)(this + 0x18) = uVar3;
  }
  if (local_28[0] != (AsyncTaskQueue *)0x0) {
    (**(code **)(*(long *)local_28[0] + 8))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncTaskManager::Update() */

void __thiscall Sexy::AsyncTaskManager::Update(AsyncTaskManager *this)

{
  _List_const_iterator<Sexy::ActiveFontLayer> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
  *this_01;
  int iVar5;
  undefined8 local_30;
  IAsyncNetworkTask *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  this_00 = (_List_const_iterator<Sexy::ActiveFontLayer> *)(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = std::list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>>::size
                    ((list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>> *)(this + 8)
                    );
  if (0 < iVar3) {
    do {
      moveToNextQueue(this);
      puVar4 = (undefined8 *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
      (**(code **)(*(long *)*puVar4 + 0x68))((long *)*puVar4);
      puVar4 = (undefined8 *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
      iVar3 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)*puVar4);
      if (iVar3 - 3U < 2) {
        puVar4 = (undefined8 *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
        RequestQueueDelete(this,(AsyncTaskQueue *)*puVar4);
      }
      else {
        puVar4 = (undefined8 *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
        cVar1 = (**(code **)(*(long *)*puVar4 + 0x58))((long *)*puVar4);
        if (cVar1 == '\0') {
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
          AsyncTaskQueue::RemoveCompletedTasks((AsyncTaskQueue *)*puVar4);
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
          local_28 = (IAsyncNetworkTask *)AsyncTaskQueue::GetNextTask((AsyncTaskQueue *)*puVar4);
          if (local_28 != (IAsyncNetworkTask *)0x0) {
            cVar1 = (**(code **)(*(long *)local_28 + 0x20))();
            if (cVar1 == '\0') {
              addWorkerThreadTask(this,local_28);
            }
            else {
              IAsyncNetworkTask::SetPendingRunState(local_28);
              std::vector<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::
              push_back((vector<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *
                        )avStack_20,&local_28);
            }
          }
        }
        else {
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
          this_01 = (queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                     *)AsyncTaskQueue::GetTasks((AsyncTaskQueue *)*puVar4);
          cVar1 = std::
                  queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                  ::empty(this_01);
          if (cVar1 == '\0') {
            puVar4 = (undefined8 *)
                     std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
            AsyncTaskQueue::GetTasks((AsyncTaskQueue *)*puVar4);
            puVar4 = (undefined8 *)
                     std::
                     queue<Sexy::IAsyncNetworkTask*,std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>>
                     ::front();
            iVar3 = IAsyncNetworkTask::GetState((IAsyncNetworkTask *)*puVar4);
            if (1 < iVar3 - 3U) goto LAB_051b4fc8;
          }
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
          AsyncTaskQueue::RemoveCompletedTasks((AsyncTaskQueue *)*puVar4);
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
          AsyncTaskQueue::NotifyPendingTasksOfError((AsyncTaskQueue *)*puVar4);
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(this_00);
          local_28 = (IAsyncNetworkTask *)(**(code **)(*(long *)*puVar4 + 0x60))((long *)*puVar4);
          std::vector<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::push_back
                    ((vector<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *)
                     avStack_20,&local_28);
        }
      }
LAB_051b4fc8:
      iVar5 = iVar5 + 1;
      iVar3 = std::list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>>::size
                        ((list<Sexy::AsyncTaskQueue*,std::allocator<Sexy::AsyncTaskQueue*>> *)
                         (this + 8));
    } while (iVar5 < iVar3);
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = (IAsyncNetworkTask *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    IAsyncNetworkTask::Run((IAsyncNetworkTask *)*puVar4);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::~vector
            ((vector<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>> *)avStack_20
            );
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

