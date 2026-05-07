// Class: EA::Thread::SemaphoreFactory


/* EA::Thread::SemaphoreFactory::DestroySemaphore(EA::Thread::Semaphore*) */

void EA::Thread::SemaphoreFactory::DestroySemaphore(Semaphore *param_1)

{
  if (gpAllocator == (long *)0x0) {
    if (param_1 != (Semaphore *)0x0) {
      Semaphore::~Semaphore(param_1);
      AK::FreeHook(param_1);
      return;
    }
  }
  else {
    Semaphore::~Semaphore(param_1);
    (**(code **)(*gpAllocator + 0x20))(gpAllocator,param_1,0);
  }
  return;
}


/* EA::Thread::SemaphoreFactory::GetSemaphoreSize() */

undefined8 EA::Thread::SemaphoreFactory::GetSemaphoreSize(void)

{
  return 0x1c;
}


/* EA::Thread::SemaphoreFactory::DestructSemaphore(EA::Thread::Semaphore*) */

int EA::Thread::SemaphoreFactory::DestructSemaphore(Semaphore *param_1)

{
  int iVar1;
  
  iVar1 = sem_destroy((sem_t *)param_1);
  return iVar1;
}


/* EA::Thread::SemaphoreFactory::CreateSemaphore() */

Semaphore * EA::Thread::SemaphoreFactory::CreateSemaphore(void)

{
  Semaphore *pSVar1;
  
  if (gpAllocator != (long *)0x0) {
    (**(code **)(*gpAllocator + 0x10))(gpAllocator,0x1c,0,0);
    pSVar1 = (Semaphore *)FUN_0541b9c8();
    if (pSVar1 != (Semaphore *)0x0) {
      Semaphore::Semaphore(pSVar1,(SemaphoreParameters *)0x0,true);
    }
    return pSVar1;
  }
  pSVar1 = ::operator_new(0x1c);
  Semaphore::Semaphore(pSVar1,(SemaphoreParameters *)0x0,true);
  return pSVar1;
}


/* EA::Thread::SemaphoreFactory::ConstructSemaphore(void*) */

Semaphore * EA::Thread::SemaphoreFactory::ConstructSemaphore(void *param_1)

{
  Semaphore *this;
  
  this = (Semaphore *)FUN_0541b9c8();
  if (this != (Semaphore *)0x0) {
    Semaphore::Semaphore(this,(SemaphoreParameters *)0x0,true);
  }
  return this;
}

