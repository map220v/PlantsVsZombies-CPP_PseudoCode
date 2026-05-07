// Class: EA::Thread::Thread


/* EA::Thread::Thread::GetGlobalRunnableFunctionUserWrapper() */

undefined8 EA::Thread::Thread::GetGlobalRunnableFunctionUserWrapper(void)

{
  return sGlobalRunnableFunctionUserWrapper;
}


/* EA::Thread::Thread::SetGlobalRunnableFunctionUserWrapper(long (*)(long (*)(void*), void*)) */

void EA::Thread::Thread::SetGlobalRunnableFunctionUserWrapper
               (_func_long__func_long_void_ptr_ptr_void_ptr *param_1)

{
  if (sGlobalRunnableFunctionUserWrapper != (_func_long__func_long_void_ptr_ptr_void_ptr *)0x0) {
    return;
  }
  sGlobalRunnableFunctionUserWrapper = param_1;
  return;
}


/* EA::Thread::Thread::GetGlobalRunnableClassUserWrapper() */

undefined8 EA::Thread::Thread::GetGlobalRunnableClassUserWrapper(void)

{
  return sGlobalRunnableClassUserWrapper;
}


/* EA::Thread::Thread::SetGlobalRunnableClassUserWrapper(long (*)(EA::Thread::IRunnable*, void*)) */

void EA::Thread::Thread::SetGlobalRunnableClassUserWrapper
               (_func_long_IRunnable_ptr_void_ptr *param_1)

{
  if (sGlobalRunnableClassUserWrapper != (_func_long_IRunnable_ptr_void_ptr *)0x0) {
    return;
  }
  sGlobalRunnableClassUserWrapper = param_1;
  return;
}


/* EA::Thread::Thread::Thread(EA::Thread::Thread const&) */

void __thiscall EA::Thread::Thread::Thread(Thread *this,Thread *param_1)

{
  EAThreadDynamicData *this_00;
  
  this_00 = *(EAThreadDynamicData **)param_1;
  *(EAThreadDynamicData **)this = this_00;
  if (this_00 != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::AddRef(this_00);
    return;
  }
  return;
}


/* EA::Thread::Thread::TEMPNAMEPLACEHOLDERVALUE(EA::Thread::Thread const&) */

Thread * __thiscall EA::Thread::Thread::operator=(Thread *this,Thread *param_1)

{
  if (*(EAThreadDynamicData **)param_1 != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::AddRef(*(EAThreadDynamicData **)param_1);
  }
  if (*(EAThreadDynamicData **)this != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::Release(*(EAThreadDynamicData **)this);
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}


/* EA::Thread::Thread::~Thread() */

void __thiscall EA::Thread::Thread::~Thread(Thread *this)

{
  if (*(EAThreadDynamicData **)this != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::Release(*(EAThreadDynamicData **)this);
    return;
  }
  return;
}


/* EA::Thread::Thread::GetStatus(long*) const */

int __thiscall EA::Thread::Thread::GetStatus(Thread *this,long *param_1)

{
  int iVar1;
  
  if (*(long *)this != 0) {
    iVar1 = *(int *)(*(long *)this + 0x14);
    if ((param_1 != (long *)0x0) && (iVar1 == 2)) {
      *param_1 = *(long *)(*(long *)this + 0x18);
    }
    return iVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Thread::WaitForEnd(EA::Thread::ThreadTime const&, long*) */

void __thiscall EA::Thread::Thread::WaitForEnd(Thread *this,ThreadTime *param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ThreadTime *extraout_x1;
  ulong uVar5;
  undefined1 auVar6 [16];
  long local_20;
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)this == 0) {
    do {
      auVar6 = GetThreadTime();
      local_18 = auVar6;
      cVar1 = Thread::operator<((ThreadTime *)local_18,param_1);
      if (cVar1 == '\0') {
        uVar5 = 0;
        if (*(long *)this == 0) goto LAB_05383634;
        break;
      }
      local_20 = 1;
      ThreadTime::ThreadTime((ThreadTime *)local_18,&local_20);
      ThreadSleep((Thread *)local_18,extraout_x1);
    } while ((*(long **)this == (long *)0x0) || (**(long **)this == 0));
    uVar5 = WaitForEnd(this,param_1,(long *)0x0);
    goto LAB_05383634;
  }
  uVar2 = GetStatus(this,(long *)0x0);
  uVar5 = (ulong)uVar2;
  if (uVar2 == 0) {
    iVar3 = Semaphore::Wait((Semaphore *)(*(long *)this + 0xbc),param_1);
    if (iVar3 < 0) {
      pthread_join(**(pthread_t **)this,(void **)0x0);
      **(undefined8 **)this = 0;
      goto LAB_05383634;
    }
    Semaphore::Post((Semaphore *)(*(long *)this + 0xbc),1);
LAB_05383680:
    iVar3 = Mutex::Lock((Mutex *)(*(long *)this + 0x90),param_1);
    uVar5 = 1;
    if (iVar3 < 1) goto LAB_05383634;
    pthread_join(**(pthread_t **)this,(void **)0x0);
    puVar4 = *(undefined8 **)this;
    *puVar4 = 0;
    Mutex::Unlock((Mutex *)(puVar4 + 0x12));
  }
  else {
    if (uVar2 == 1) goto LAB_05383680;
    pthread_join(**(pthread_t **)this,(void **)0x0);
    **(undefined8 **)this = 0;
    if (uVar2 != 2) goto LAB_05383634;
  }
  uVar5 = GetStatus(this,param_2);
LAB_05383634:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* EA::Thread::Thread::GetId() const */

undefined8 __thiscall EA::Thread::Thread::GetId(Thread *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)this;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Thread::GetPriority() const */

void __thiscall EA::Thread::Thread::GetPriority(Thread *this)

{
  int iVar1;
  undefined4 uVar2;
  sched_param sStack_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(pthread_t **)this == (pthread_t *)0x0) {
    uVar2 = 0x80000000;
  }
  else {
    iVar1 = pthread_getschedparam(**(pthread_t **)this,&iStack_c,&sStack_10);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = FUN_05382f7c(&sStack_10,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Thread::SetPriority(int) */

void EA::Thread::Thread::SetPriority(int param_1)

{
  bool bVar1;
  int iVar2;
  pthread_t *ppVar3;
  sched_param sStack_10;
  int local_c;
  long local_8;
  
  ppVar3 = *(pthread_t **)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (ppVar3 == (pthread_t *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = pthread_getschedparam(*ppVar3,&local_c,&sStack_10);
    if (iVar2 == 0) {
      FUN_05382ed0(&sStack_10,&local_c);
      iVar2 = pthread_setschedparam(**(pthread_t **)(ulong)(uint)param_1,local_c,&sStack_10);
    }
    bVar1 = iVar2 == 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* EA::Thread::Thread::SetProcessor(int) */

void __thiscall EA::Thread::Thread::SetProcessor(Thread *this,int param_1)

{
  if (*(long *)this != 0) {
    *(int *)(*(long *)this + 0x84) = param_1;
    FUN_05382df0();
    return;
  }
  return;
}


/* EA::Thread::Thread::SetAffinityMask(long) */

void __thiscall EA::Thread::Thread::SetAffinityMask(Thread *this,long param_1)

{
  if (**(long **)this == 0) {
    return;
  }
  SetThreadAffinityMask(*(long **)this,param_1);
  return;
}


/* EA::Thread::Thread::GetAffinityMask() */

long __thiscall EA::Thread::Thread::GetAffinityMask(Thread *this)

{
  if (**(long **)this != 0) {
    return (*(long **)this)[0x11];
  }
  return -1;
}


/* EA::Thread::Thread::GetName() const */

undefined1 * __thiscall EA::Thread::Thread::GetName(Thread *this)

{
  if (*(long *)this != 0) {
    return (undefined1 *)(*(long *)this + 0x44);
  }
  return &DAT_055923fe;
}


/* EA::Thread::Thread::SetName(char const*) */

void __thiscall EA::Thread::Thread::SetName(Thread *this,char *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != (char *)0x0) && (*(long *)this != 0)) {
    strncpy((char *)(*(long *)this + 0x44),param_1,0x40);
    *(undefined1 *)(*(long *)this + 0x83) = 0;
    lVar1 = GetId(this);
    lVar2 = GetThreadId();
    if (lVar1 == lVar2) {
      FUN_05382e64(param_1);
      return;
    }
  }
  return;
}


/* EA::Thread::Thread::Begin(long (*)(void*), void*, EA::Thread::ThreadParameters const*, long
   (*)(long (*)(void*), void*)) */

undefined8
EA::Thread::Thread::Begin
          (_func_long_void_ptr *param_1,void *param_2,ThreadParameters *param_3,
          _func_long__func_long_void_ptr_ptr_void_ptr *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_05383b10();
  if (param_4 != (_func_long__func_long_void_ptr_ptr_void_ptr *)0x0) {
    if (*(int *)(param_4 + 0x14) == -2) {
      SetAffinityMask((Thread *)param_1,*(long *)(param_4 + 0x28));
    }
    if (*(char **)(param_4 + 0x20) != (char *)0x0) {
      SetName((Thread *)param_1,*(char **)(param_4 + 0x20));
    }
  }
  return uVar1;
}


/* EA::Thread::Thread::Begin(EA::Thread::IRunnable*, void*, EA::Thread::ThreadParameters const*,
   long (*)(EA::Thread::IRunnable*, void*)) */

undefined8
EA::Thread::Thread::Begin
          (IRunnable *param_1,void *param_2,ThreadParameters *param_3,
          _func_long_IRunnable_ptr_void_ptr *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_05383b10();
  if (param_4 != (_func_long_IRunnable_ptr_void_ptr *)0x0) {
    if (*(int *)(param_4 + 0x14) == -2) {
      SetAffinityMask((Thread *)param_1,*(long *)(param_4 + 0x28));
    }
    if (*(char **)(param_4 + 0x20) != (char *)0x0) {
      SetName((Thread *)param_1,*(char **)(param_4 + 0x20));
    }
  }
  return uVar1;
}

