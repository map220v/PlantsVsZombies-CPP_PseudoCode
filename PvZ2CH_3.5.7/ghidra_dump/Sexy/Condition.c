// Class: Sexy::Condition


/* Sexy::Condition::Condition() */

int __thiscall Sexy::Condition::Condition(Condition *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0x58) = 0;
  pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  iVar1 = pthread_cond_init((pthread_cond_t *)(this + 0x28),(pthread_condattr_t *)0x0);
  return iVar1;
}


/* Sexy::Condition::~Condition() */

int __thiscall Sexy::Condition::~Condition(Condition *this)

{
  int iVar1;
  
  pthread_cond_destroy((pthread_cond_t *)(this + 0x28));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


/* Sexy::Condition::Notify() */

int __thiscall Sexy::Condition::Notify(Condition *this)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
  *(undefined4 *)(this + 0x58) = 1;
  pthread_cond_signal((pthread_cond_t *)(this + 0x28));
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}


/* Sexy::Condition::Reset() */

void __thiscall Sexy::Condition::Reset(Condition *this)

{
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Condition::Wait(unsigned int) */

void __thiscall Sexy::Condition::Wait(Condition *this,uint param_1)

{
  ulong uVar1;
  timespec local_28;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)this);
  if (*(int *)(this + 0x58) == 0) {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    uVar1 = (ulong)param_1 * 1000000 >> 9;
    local_28.tv_sec = local_18.tv_sec + uVar1 / 0x1dcd65;
    local_28.tv_nsec =
         (ulong)param_1 * 1000000 + (uVar1 / 0x1dcd65) * -1000000000 + local_18.tv_usec * 1000;
    pthread_cond_timedwait((pthread_cond_t *)(this + 0x28),(pthread_mutex_t *)this,&local_28);
  }
  *(undefined4 *)(this + 0x58) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

