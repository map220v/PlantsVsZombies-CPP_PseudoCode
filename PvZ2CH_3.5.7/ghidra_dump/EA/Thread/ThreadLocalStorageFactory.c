// Class: EA::Thread::ThreadLocalStorageFactory


/* EA::Thread::ThreadLocalStorageFactory::GetThreadLocalStorageSize() */

undefined8 EA::Thread::ThreadLocalStorageFactory::GetThreadLocalStorageSize(void)

{
  return 8;
}


/* EA::Thread::ThreadLocalStorageFactory::CreateThreadLocalStorage() */

ThreadLocalStorage * EA::Thread::ThreadLocalStorageFactory::CreateThreadLocalStorage(void)

{
  ThreadLocalStorage *this;
  
  if (gpAllocator == (long *)0x0) {
    this = ::operator_new(8);
  }
  else {
    (**(code **)(*gpAllocator + 0x10))(gpAllocator,8,0,0);
    this = (ThreadLocalStorage *)FUN_0541becc();
    if (this == (ThreadLocalStorage *)0x0) {
      return (ThreadLocalStorage *)0x0;
    }
  }
  ThreadLocalStorage::ThreadLocalStorage(this);
  return this;
}


/* EA::Thread::ThreadLocalStorageFactory::DestroyThreadLocalStorage(EA::Thread::ThreadLocalStorage*)
    */

void EA::Thread::ThreadLocalStorageFactory::DestroyThreadLocalStorage(ThreadLocalStorage *param_1)

{
  if (gpAllocator == (long *)0x0) {
    if (param_1 != (ThreadLocalStorage *)0x0) {
      ThreadLocalStorage::~ThreadLocalStorage(param_1);
      AK::FreeHook(param_1);
      return;
    }
  }
  else {
    ThreadLocalStorage::~ThreadLocalStorage(param_1);
    (**(code **)(*gpAllocator + 0x20))(gpAllocator,param_1,0);
  }
  return;
}


/* EA::Thread::ThreadLocalStorageFactory::ConstructThreadLocalStorage(void*) */

ThreadLocalStorage *
EA::Thread::ThreadLocalStorageFactory::ConstructThreadLocalStorage(void *param_1)

{
  ThreadLocalStorage *this;
  
  this = (ThreadLocalStorage *)FUN_0541becc();
  if (this != (ThreadLocalStorage *)0x0) {
    ThreadLocalStorage::ThreadLocalStorage(this);
  }
  return this;
}


/* EA::Thread::ThreadLocalStorageFactory::DestructThreadLocalStorage(EA::Thread::ThreadLocalStorage*)
    */

ThreadLocalStorage *
EA::Thread::ThreadLocalStorageFactory::DestructThreadLocalStorage(ThreadLocalStorage *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return param_1;
  }
  uVar1 = pthread_key_delete(*(pthread_key_t *)param_1);
  return (ThreadLocalStorage *)(ulong)uVar1;
}

