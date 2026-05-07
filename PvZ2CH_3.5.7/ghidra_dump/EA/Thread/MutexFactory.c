// Class: EA::Thread::MutexFactory


/* EA::Thread::MutexFactory::CreateMutex() */

Mutex * EA::Thread::MutexFactory::CreateMutex(void)

{
  Mutex *pMVar1;
  
  if (gpAllocator != (long *)0x0) {
    (**(code **)(*gpAllocator + 0x10))(gpAllocator,0x2c,0,0);
    pMVar1 = (Mutex *)FUN_0538295c();
    if (pMVar1 != (Mutex *)0x0) {
      Mutex::Mutex(pMVar1,(MutexParameters *)0x0,true);
    }
    return pMVar1;
  }
  pMVar1 = ::operator_new(0x2c);
  Mutex::Mutex(pMVar1,(MutexParameters *)0x0,true);
  return pMVar1;
}


/* EA::Thread::MutexFactory::DestroyMutex(EA::Thread::Mutex*) */

void EA::Thread::MutexFactory::DestroyMutex(Mutex *param_1)

{
  if (gpAllocator == (long *)0x0) {
    if (param_1 != (Mutex *)0x0) {
      Mutex::~Mutex(param_1);
      AK::FreeHook(param_1);
      return;
    }
  }
  else {
    Mutex::~Mutex(param_1);
    (**(code **)(*gpAllocator + 0x20))(gpAllocator,param_1,0);
  }
  return;
}


/* EA::Thread::MutexFactory::GetMutexSize() */

undefined8 EA::Thread::MutexFactory::GetMutexSize(void)

{
  return 0x2c;
}


/* EA::Thread::MutexFactory::ConstructMutex(void*) */

Mutex * EA::Thread::MutexFactory::ConstructMutex(void *param_1)

{
  Mutex *this;
  
  this = (Mutex *)FUN_0538295c();
  if (this != (Mutex *)0x0) {
    Mutex::Mutex(this,(MutexParameters *)0x0,true);
  }
  return this;
}


/* EA::Thread::MutexFactory::DestructMutex(EA::Thread::Mutex*) */

int EA::Thread::MutexFactory::DestructMutex(Mutex *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)param_1);
  return iVar1;
}

