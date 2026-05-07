// Class: EA::Thread::FutexFactory


/* EA::Thread::FutexFactory::DestroyFutex(EA::Thread::Futex*) */

void EA::Thread::FutexFactory::DestroyFutex(Futex *param_1)

{
  if (gpAllocator == (long *)0x0) {
    if (param_1 != (Futex *)0x0) {
      Futex::~Futex(param_1);
      AK::FreeHook(param_1);
      return;
    }
  }
  else {
    Futex::~Futex(param_1);
    (**(code **)(*gpAllocator + 0x20))(gpAllocator,param_1,0);
  }
  return;
}


/* EA::Thread::FutexFactory::GetFutexSize() */

undefined8 EA::Thread::FutexFactory::GetFutexSize(void)

{
  return 0x28;
}


/* EA::Thread::FutexFactory::DestructFutex(EA::Thread::Futex*) */

int EA::Thread::FutexFactory::DestructFutex(Futex *param_1)

{
  int iVar1;
  
  iVar1 = sem_destroy((sem_t *)(param_1 + 0x18));
  return iVar1;
}


/* EA::Thread::FutexFactory::CreateFutex() */

Futex * EA::Thread::FutexFactory::CreateFutex(void)

{
  Futex *this;
  
  if (gpAllocator == (long *)0x0) {
    this = ::operator_new(0x28);
  }
  else {
    (**(code **)(*gpAllocator + 0x10))(gpAllocator,0x28,0,0);
    this = (Futex *)FUN_053827d8();
    if (this == (Futex *)0x0) {
      return (Futex *)0x0;
    }
  }
  Futex::Futex(this);
  return this;
}


/* EA::Thread::FutexFactory::ConstructFutex(void*) */

Futex * EA::Thread::FutexFactory::ConstructFutex(void *param_1)

{
  Futex *this;
  
  this = (Futex *)FUN_053827d8();
  if (this != (Futex *)0x0) {
    Futex::Futex(this);
  }
  return this;
}

