// Class: Sexy::CritSect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CritSect::CritSect() */

void __thiscall Sexy::CritSect::CritSect(CritSect *this)

{
  pthread_mutexattr_t apStack_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_mutexattr_init(apStack_10);
  pthread_mutexattr_settype(apStack_10,1);
  pthread_mutex_init((pthread_mutex_t *)this,apStack_10);
  pthread_mutexattr_destroy(apStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::CritSect::Lock() */

int __thiscall Sexy::CritSect::Lock(CritSect *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  return iVar1;
}


/* Sexy::CritSect::Unlock() */

int __thiscall Sexy::CritSect::Unlock(CritSect *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}


/* Sexy::CritSect::TryLock() */

bool __thiscall Sexy::CritSect::TryLock(CritSect *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}

