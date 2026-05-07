// Class: EA::Thread::Mutex


/* EA::Thread::Mutex::~Mutex() */

int __thiscall EA::Thread::Mutex::~Mutex(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


/* EA::Thread::Mutex::GetLockCount() const */

undefined4 __thiscall EA::Thread::Mutex::GetLockCount(Mutex *this)

{
  return *(undefined4 *)(this + 0x28);
}


/* EA::Thread::Mutex::HasLock() const */

bool __thiscall EA::Thread::Mutex::HasLock(Mutex *this)

{
  return 0 < *(int *)(this + 0x28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Mutex::Init(EA::Thread::MutexParameters const*) */

void __thiscall EA::Thread::Mutex::Init(Mutex *this,MutexParameters *param_1)

{
  bool bVar1;
  int iVar2;
  pthread_mutexattr_t apStack_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (MutexParameters *)0x0) {
    bVar1 = false;
  }
  else {
    *(undefined4 *)(this + 0x28) = 0;
    pthread_mutexattr_init(apStack_10);
    pthread_mutexattr_settype(apStack_10,1);
    if (*param_1 == (MutexParameters)0x0) {
      pthread_mutexattr_setpshared(apStack_10,1);
    }
    else {
      pthread_mutexattr_setpshared(apStack_10,0);
    }
    iVar2 = pthread_mutex_init((pthread_mutex_t *)this,apStack_10);
    pthread_mutexattr_destroy(apStack_10);
    bVar1 = iVar2 != -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Mutex::Mutex(EA::Thread::MutexParameters const*, bool) */

void __thiscall EA::Thread::Mutex::Mutex(Mutex *this,MutexParameters *param_1,bool param_2)

{
  MutexParameters aMStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EAMutexData::EAMutexData((EAMutexData *)this);
  if ((param_1 == (MutexParameters *)0x0) && (param_2)) {
    MutexParameters::MutexParameters(aMStack_90,true,(char *)0x0);
    Init(this,aMStack_90);
  }
  else {
    Init(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Mutex::Lock(EA::Thread::ThreadTime const&) */

void __thiscall EA::Thread::Mutex::Lock(Mutex *this,ThreadTime *param_1)

{
  char cVar1;
  int iVar2;
  ThreadTime *extraout_x1;
  undefined1 auVar3 [16];
  long local_20;
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Thread::operator==(param_1,(ThreadTime *)&DAT_06be0938);
  if (cVar1 == '\0') {
    cVar1 = Thread::operator==(param_1,(ThreadTime *)&DAT_06be0948);
    if (cVar1 == '\0') {
      while (iVar2 = pthread_mutex_trylock((pthread_mutex_t *)this), iVar2 != 0) {
        auVar3 = GetThreadTime();
        local_18 = auVar3;
        cVar1 = Thread::operator<((ThreadTime *)local_18,param_1);
        if (cVar1 == '\0') {
          if (iVar2 == 0x10) goto LAB_05382c60;
          goto LAB_05382c50;
        }
        local_20 = 1;
        ThreadTime::ThreadTime((ThreadTime *)local_18,&local_20);
        ThreadSleep((Thread *)local_18,extraout_x1);
      }
    }
    else {
      iVar2 = pthread_mutex_trylock((pthread_mutex_t *)this);
      if (iVar2 != 0) {
        if (iVar2 == 0x10) {
LAB_05382c60:
          iVar2 = -2;
        }
        else {
          iVar2 = -1;
        }
        goto LAB_05382be0;
      }
    }
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
    if (iVar2 != 0) {
LAB_05382c50:
      iVar2 = -1;
      goto LAB_05382be0;
    }
  }
  iVar2 = *(int *)(this + 0x28) + 1;
  *(int *)(this + 0x28) = iVar2;
LAB_05382be0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* EA::Thread::Mutex::Unlock() */

int __thiscall EA::Thread::Mutex::Unlock(Mutex *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x28);
  iVar2 = iVar1 + -1;
  *(int *)(this + 0x28) = iVar2;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)this);
  if (iVar3 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}

