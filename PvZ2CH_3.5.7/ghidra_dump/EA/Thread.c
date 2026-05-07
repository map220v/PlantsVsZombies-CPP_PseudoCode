// Class: EA::Thread


/* EA::Thread::GetModuleHandleFromAddress(void const*) */

undefined8 EA::Thread::GetModuleHandleFromAddress(void *param_1)

{
  return 0;
}


/* EA::Thread::GetThreadId() */

void EA::Thread::GetThreadId(void)

{
  pthread_self();
  return;
}


/* EA::Thread::__atomic_inc_ex2(int volatile*) */

int EA::Thread::__atomic_inc_ex2(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return iVar1;
}


/* EA::Thread::__atomic_dec_ex2(int volatile*) */

int EA::Thread::__atomic_dec_ex2(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return iVar1;
}


/* EA::Thread::TEMPNAMEPLACEHOLDERVALUE(EA::Thread::ThreadTime const&, EA::Thread::ThreadTime
   const&) */

bool EA::Thread::operator==(ThreadTime *param_1,ThreadTime *param_2)

{
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return false;
  }
  return *(long *)param_1 == *(long *)param_2;
}


/* EA::Thread::SetAllocator(EA::Allocator::ICoreAllocator*) */

void EA::Thread::SetAllocator(ICoreAllocator *param_1)

{
  gpAllocator = param_1;
  return;
}


/* EA::Thread::GetAllocator() */

undefined8 EA::Thread::GetAllocator(void)

{
  return gpAllocator;
}


/* EA::Thread::GetThreadId(long) */

undefined8 EA::Thread::GetThreadId(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FindThreadDynamicData(param_1);
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetThreadPriority() */

void EA::Thread::GetThreadPriority(void)

{
  int iVar1;
  pthread_t __target_thread;
  sched_param local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __target_thread = pthread_self();
  iVar1 = pthread_getschedparam(__target_thread,&iStack_c,&local_10);
  if (iVar1 != 0) {
    local_10.__sched_priority = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10.__sched_priority);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::SetThreadPriority(int) */

void EA::Thread::SetThreadPriority(int param_1)

{
  int iVar1;
  pthread_t __target_thread;
  sched_param local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __target_thread = pthread_self();
  iVar1 = 2;
  if (param_1 < 1) {
    param_1 = 0;
    iVar1 = 0;
  }
  local_10[0].__sched_priority = param_1;
  iVar1 = pthread_setschedparam(__target_thread,iVar1,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetThreadStackBase() */

void EA::Thread::GetThreadStackBase(void)

{
  pthread_t __th;
  void *local_50;
  size_t local_48;
  pthread_attr_t pStack_40;
  long local_8;
  
  local_50 = (void *)0x0;
  local_48 = 0;
  local_8 = ___stack_chk_guard;
  __th = pthread_self();
  pthread_attr_init(&pStack_40);
  pthread_getattr_np(__th,&pStack_40);
  pthread_attr_getstack(&pStack_40,&local_50,&local_48);
  pthread_attr_destroy(&pStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((long)local_50 + local_48);
}


/* EA::Thread::SetThreadAffinityMask(long const&, long) */

void EA::Thread::SetThreadAffinityMask(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FindThreadDynamicData(*param_1);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x88) = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::SetThreadAffinityMask(long) */

void EA::Thread::SetThreadAffinityMask(long param_1)

{
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = GetThreadId();
  SetThreadAffinityMask(&local_10,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Thread::GetThreadAffinityMask(long const&) */

undefined8 EA::Thread::GetThreadAffinityMask(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FindThreadDynamicData(*param_1);
  if (lVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetThreadAffinityMask() */

void EA::Thread::GetThreadAffinityMask(void)

{
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = GetThreadId();
  GetThreadAffinityMask(&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Thread::GetProcessorCount() */

void EA::Thread::GetProcessorCount(void)

{
  sysconf(0x61);
  return;
}


/* EA::Thread::ThreadSleep(EA::Thread::ThreadTime const&) */

int __thiscall EA::Thread::ThreadSleep(Thread *this,ThreadTime *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = operator==((ThreadTime *)this,(ThreadTime *)&DAT_06be08e8);
  if (cVar1 == '\0') {
    iVar2 = nanosleep((timespec *)this,(timespec *)0x0);
    return iVar2;
  }
  iVar2 = sched_yield();
  return iVar2;
}


/* EA::Thread::ThreadEnd(long) */

void __thiscall EA::Thread::ThreadEnd(Thread *this,long param_1)

{
  long lVar1;
  EAThreadDynamicData *this_00;
  
  lVar1 = GetThreadId();
  this_00 = (EAThreadDynamicData *)FindThreadDynamicData(lVar1);
  if (this_00 != (EAThreadDynamicData *)0x0) {
    *(Thread **)(this_00 + 0x18) = this;
    *(undefined4 *)(this_00 + 0x14) = 2;
    Mutex::Unlock((Mutex *)(this_00 + 0x90));
    EAThreadDynamicData::Release(this_00);
  }
                    /* WARNING: Subroutine does not return */
  pthread_exit(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetThreadTime() */

void EA::Thread::GetThreadTime(void)

{
  timespec local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyURL::Range::clear((Range_conflict *)&local_18);
  clock_gettime(0,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18.tv_sec,local_18.tv_nsec);
}


/* EA::Thread::SetAssertionFailureFunction(void (*)(char const*, void*), void*) */

void EA::Thread::SetAssertionFailureFunction(_func_void_char_ptr_void_ptr *param_1,void *param_2)

{
  gpAssertionFailureFunction = param_1;
  gpAssertionFailureContext = param_2;
  return;
}


/* EA::Thread::AssertionFailure(char const*) */

char * EA::Thread::AssertionFailure(char *param_1)

{
  if (gpAssertionFailureFunction != (code *)0x0) {
    param_1 = (char *)(*gpAssertionFailureFunction)(param_1,gpAssertionFailureContext);
  }
  return param_1;
}


/* EA::Thread::android_fake_atomic_swap_64(long, long volatile*) */

long EA::Thread::android_fake_atomic_swap_64(long param_1,long *param_2)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_06be03d0 + ((ulong)param_2 >> 3 & 0x1f) * 0x28));
  lVar1 = *param_2;
  *param_2 = param_1;
  pthread_mutex_unlock((pthread_mutex_t *)(&DAT_06be03d0 + ((ulong)param_2 >> 3 & 0x1f) * 0x28));
  return lVar1;
}


/* EA::Thread::android_fake_atomic_cmpxchg_64(long, long, long volatile*) */

bool EA::Thread::android_fake_atomic_cmpxchg_64(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_06be03d0 + ((ulong)param_3 >> 3 & 0x1f) * 0x28));
  lVar1 = *param_3;
  if (lVar1 == param_1) {
    *param_3 = param_2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(&DAT_06be03d0 + ((ulong)param_3 >> 3 & 0x1f) * 0x28));
  return lVar1 != param_1;
}


/* EA::Thread::android_fake_atomic_read_64(long volatile*) */

long EA::Thread::android_fake_atomic_read_64(long *param_1)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_06be03d0 + ((ulong)param_1 >> 3 & 0x1f) * 0x28));
  lVar1 = *param_1;
  pthread_mutex_unlock((pthread_mutex_t *)(&DAT_06be03d0 + ((ulong)param_1 >> 3 & 0x1f) * 0x28));
  return lVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::AssertionFailureV(char const*, ...) */

void EA::Thread::AssertionFailureV(char *param_1,...)

{
  int iVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined1 *local_310;
  undefined1 *puStack_308;
  undefined1 *local_300;
  undefined8 uStack_2f8;
  char acStack_2c8 [511];
  undefined1 local_c9;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_300 = auStack_40;
  uStack_2f8 = 0xffffff80ffffffc8;
  local_c8 = ___stack_chk_guard;
  local_310 = (undefined1 *)register0x00000008;
  puStack_308 = (undefined1 *)register0x00000008;
  local_c0 = in_d0;
  local_b0 = in_d1;
  local_a0 = in_d2;
  local_90 = in_d3;
  local_80 = in_d4;
  local_70 = in_d5;
  local_60 = in_d6;
  local_50 = in_d7;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  iVar1 = snprintf(acStack_2c8,0x200,param_1,&local_310);
  if (0 < iVar1) {
    local_c9 = 0;
    AssertionFailure(acStack_2c8);
  }
  if (local_c8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Thread::TEMPNAMEPLACEHOLDERVALUE(EA::Thread::ThreadTime const&, EA::Thread::ThreadTime
   const&) */

bool EA::Thread::operator<(ThreadTime *param_1,ThreadTime *param_2)

{
  if (*(long *)param_1 != *(long *)param_2) {
    return *(long *)param_1 < *(long *)param_2;
  }
  return *(long *)(param_1 + 8) < *(long *)(param_2 + 8);
}


/* EA::Thread::GetSysThreadId() */

void EA::Thread::GetSysThreadId(void)

{
  pthread_self();
  return;
}


/* EA::Thread::__atomic_cmpxchg_ex2(int, int, int volatile*) */

bool EA::Thread::__atomic_cmpxchg_ex2(int param_1,int param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_3;
    if (iVar1 != param_1) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar3) {
      *param_3 = param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return iVar1 != param_1;
}


/* EA::Thread::AllocateThreadDynamicData() */

undefined8 * EA::Thread::AllocateThreadDynamicData(void)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  AtomicInt<int> *this;
  
  lVar3 = 0;
  this = (AtomicInt<int> *)&DAT_06be24b0;
  do {
    cVar1 = AtomicInt<int>::SetValueConditional(this,1,0);
    if (cVar1 != '\0') {
      return &gEAThreadGlobalVars + lVar3 * 0x1b;
    }
    lVar3 = lVar3 + 1;
    this = this + 4;
  } while (lVar3 != 0x20);
  if (gpAllocator != (long *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*gpAllocator + 0x10))(gpAllocator,0xd8,0);
    return puVar2;
  }
  puVar2 = operator_new__(0xd8);
  return puVar2;
}


/* EA::Thread::FindThreadDynamicData(long) */

long * EA::Thread::FindThreadDynamicData(long param_1)

{
  long *plVar1;
  
  plVar1 = &gEAThreadGlobalVars;
  do {
    if (*plVar1 == param_1) {
      return plVar1;
    }
    plVar1 = plVar1 + 0x1b;
  } while (plVar1 != (long *)&DAT_06be24b0);
  return (long *)0x0;
}


/* EA::Thread::FreeThreadDynamicData(EAThreadDynamicData*) */

void EA::Thread::FreeThreadDynamicData(EAThreadDynamicData *param_1)

{
  if (((EAThreadDynamicData *)((long)&DAT_06be09a8 + 7U) < param_1) &&
     (param_1 < (EAThreadDynamicData *)&DAT_06be24b0)) {
    EAThreadDynamicData::~EAThreadDynamicData(param_1);
    Sexy::AtomicSet((int *)((long)&gEAThreadGlobalVars +
                           (((long)(param_1 + -0x6be09b0) >> 3) * -0x7b425ed097b425ed + 0x6c0) * 4),
                    0);
    return;
  }
  EAThreadDynamicData::~EAThreadDynamicData(param_1);
  if (gpAllocator == (long *)0x0) {
    if (param_1 != (EAThreadDynamicData *)0x0) {
      EATextSquish::ColourFit::~ColourFit((ColourFit *)param_1);
      return;
    }
  }
  else {
    (**(code **)(*gpAllocator + 0x20))(gpAllocator,param_1,0);
  }
  return;
}


/* EA::Thread::EnumerateThreads(EA::Thread::ThreadEnumData*, unsigned long) */

long EA::Thread::EnumerateThreads(ThreadEnumData *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  EAThreadDynamicData *this;
  AtomicInt<int> *this_00;
  long lVar4;
  
  this = (EAThreadDynamicData *)&gEAThreadGlobalVars;
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  Mutex::Lock((Mutex *)&DAT_06be2530,(ThreadTime *)&DAT_06be0968);
  lVar4 = 0;
  uVar3 = 0;
  this_00 = (AtomicInt<int> *)&DAT_06be24b0;
  do {
    iVar2 = AtomicInt<int>::GetValue(this_00);
    uVar1 = uVar3 + 1;
    if (iVar2 != 0) {
      if (uVar3 < param_2) {
        *(EAThreadDynamicData **)(param_1 + lVar4 * 8) = this;
        EAThreadDynamicData::AddRef(this);
      }
      lVar4 = lVar4 + 1;
    }
    this = this + 0xd8;
    uVar3 = uVar1;
    this_00 = this_00 + 4;
  } while (uVar1 != 0x20);
  Mutex::Unlock((Mutex *)&DAT_06be2530);
  return lVar4;
}


/* EA::Thread::GetInstructionPointer(void*&) */

void EA::Thread::GetInstructionPointer(void **param_1)

{
  void *unaff_x30;
  
  *param_1 = unaff_x30;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetCallstack(void**, unsigned long, EA::Thread::CallstackContext const*) */

void EA::Thread::GetCallstack(void **param_1,ulong param_2,CallstackContext *param_3)

{
  undefined8 uVar1;
  void **local_20;
  ulong local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (param_3 == (CallstackContext *)0x0) {
    local_10 = 0;
    local_20 = param_1;
    local_18 = param_2;
    _Unwind_Backtrace(FUN_0541b648,&local_20);
    uVar1 = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetCallstackContext(EA::Thread::CallstackContext&, long) */

void EA::Thread::GetCallstackContext(CallstackContext *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 unaff_x30;
  void *local_10;
  long local_8;
  
  bVar2 = param_2 == 0x7fffffff || param_2 == 0;
  local_8 = ___stack_chk_guard;
  if ((param_2 == 0x7fffffff || param_2 == 0) || (lVar1 = GetThreadId(), lVar1 == param_2)) {
    *(undefined1 **)(param_1 + 0x20) = &stack0xffffffffffffffb0;
    *(undefined8 *)(param_1 + 0x28) = unaff_x30;
    bVar2 = true;
    GetInstructionPointer(&local_10);
    *(void **)(param_1 + 0x30) = local_10;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetCallstackContextSysThreadId(EA::Thread::CallstackContext&, long) */

void EA::Thread::GetCallstackContextSysThreadId(CallstackContext *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 unaff_x30;
  void *pvStack_10;
  long lStack_8;
  
  bVar2 = param_2 == 0x7fffffff || param_2 == 0;
  lStack_8 = ___stack_chk_guard;
  if ((param_2 == 0x7fffffff || param_2 == 0) || (lVar1 = GetThreadId(), lVar1 == param_2)) {
    *(undefined1 **)(param_1 + 0x20) = &stack0xffffffffffffffb0;
    *(undefined8 *)(param_1 + 0x28) = unaff_x30;
    bVar2 = true;
    GetInstructionPointer(&pvStack_10);
    *(void **)(param_1 + 0x30) = pvStack_10;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* EA::Thread::GetCallstackContext(EA::Thread::CallstackContext&, EA::Thread::Context const*) */

void EA::Thread::GetCallstackContext(CallstackContext *param_1,Context *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}


/* EA::Thread::GetModuleFromAddress(void const*, char*, unsigned long) */

undefined8 EA::Thread::GetModuleFromAddress(void *param_1,char *param_2,ulong param_3)

{
  if (param_3 != 0) {
    *param_2 = '\0';
  }
  return 0;
}


/* EA::Thread::SetStackBase(void*) */

void EA::Thread::SetStackBase(void *param_1)

{
  if (param_1 == (void *)0x0) {
    param_1 = &stack0xfffffffffffffff0;
  }
  ThreadLocalStorage::SetValue((ThreadLocalStorage *)&sStackBase,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetPthreadStackInfo(void**, void**) */

void EA::Thread::GetPthreadStackInfo(void **param_1,void **param_2)

{
  int iVar1;
  pthread_t __th;
  void *pvVar2;
  undefined8 uVar3;
  void *local_50;
  size_t local_48;
  pthread_attr_t pStack_40;
  long local_8;
  
  local_50 = (void *)0x0;
  local_8 = ___stack_chk_guard;
  pthread_attr_init(&pStack_40);
  __th = pthread_self();
  iVar1 = pthread_getattr_np(__th,&pStack_40);
  if (iVar1 == 0) {
    iVar1 = pthread_attr_getstack(&pStack_40,&local_50,&local_48);
    if ((iVar1 == 0) && (local_50 != (void *)0x0)) {
      uVar3 = 1;
      pvVar2 = (void *)((long)local_50 + local_48);
    }
    else {
      pvVar2 = (void *)0x0;
      local_50 = (void *)0x0;
      uVar3 = 0;
    }
  }
  else {
    pvVar2 = (void *)0x0;
    uVar3 = 0;
  }
  pthread_attr_destroy(&pStack_40);
  if (param_1 != (void **)0x0) {
    *param_1 = pvVar2;
  }
  if (param_2 != (void **)0x0) {
    *param_2 = local_50;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetStackBase() */

void EA::Thread::GetStackBase(void)

{
  char cVar1;
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GetPthreadStackInfo(&local_10,(void **)0x0);
  if ((cVar1 == '\0') &&
     (local_10 = (void *)ThreadLocalStorage::GetValue((ThreadLocalStorage *)&sStackBase),
     local_10 == (void *)0x0)) {
    local_10 = (void *)((ulong)&stack0x00000fef & 0xfffffffffffff000);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::GetStackLimit() */

void EA::Thread::GetStackLimit(void)

{
  char cVar1;
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GetPthreadStackInfo((void **)0x0,&local_10);
  if (cVar1 == '\0') {
    local_10 = (void *)((ulong)&stack0xffffffffffffffd0 & 0xfffffffffffff000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}

