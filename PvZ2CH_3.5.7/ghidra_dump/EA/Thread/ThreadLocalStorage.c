// Class: EA::Thread::ThreadLocalStorage


/* EA::Thread::ThreadLocalStorage::ThreadLocalStorage() */

void __thiscall EA::Thread::ThreadLocalStorage::ThreadLocalStorage(ThreadLocalStorage *this)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  iVar1 = pthread_key_create((pthread_key_t *)this,(__destr_function *)0x0);
  *(int *)(this + 4) = iVar1;
  return;
}


/* EA::Thread::ThreadLocalStorage::~ThreadLocalStorage() */

ThreadLocalStorage * __thiscall
EA::Thread::ThreadLocalStorage::~ThreadLocalStorage(ThreadLocalStorage *this)

{
  uint uVar1;
  
  if (*(int *)(this + 4) != 0) {
    return this;
  }
  uVar1 = pthread_key_delete(*(pthread_key_t *)this);
  return (ThreadLocalStorage *)(ulong)uVar1;
}


/* EA::Thread::ThreadLocalStorage::GetValue() */

void __thiscall EA::Thread::ThreadLocalStorage::GetValue(ThreadLocalStorage *this)

{
  pthread_getspecific(*(pthread_key_t *)this);
  return;
}


/* EA::Thread::ThreadLocalStorage::SetValue(void const*) */

bool __thiscall EA::Thread::ThreadLocalStorage::SetValue(ThreadLocalStorage *this,void *param_1)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(*(pthread_key_t *)this,param_1);
  return iVar1 == 0;
}

