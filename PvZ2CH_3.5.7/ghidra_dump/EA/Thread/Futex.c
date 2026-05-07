// Class: EA::Thread::Futex


/* EA::Thread::Futex::~Futex() */

int __thiscall EA::Thread::Futex::~Futex(Futex *this)

{
  int iVar1;
  
  iVar1 = sem_destroy((sem_t *)(this + 0x18));
  return iVar1;
}


/* EA::Thread::Futex::Futex() */

void __thiscall EA::Thread::Futex::Futex(Futex *this)

{
  AtomicInt<unsigned_long>::AtomicInt((AtomicInt<unsigned_long> *)this,0);
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0x100;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  CreateFSemaphore(this);
  return;
}


/* EA::Thread::Futex::Lock() */

void __thiscall EA::Thread::Futex::Lock(Futex *this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = GetThreadId();
  if (*(short *)(this + 10) != 0) {
    cVar1 = AtomicInt<unsigned_long>::SetValueConditional((AtomicInt<unsigned_long> *)this,1,0);
    if (cVar1 != '\0') goto LAB_053592fc;
    if (*(long *)(this + 0x10) != lVar2) {
      uVar5 = (ulong)*(ushort *)(this + 10);
      while ((uVar5 != 0 &&
             (uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this), uVar3 < 2)
             )) {
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this);
        if ((lVar4 == 0) &&
           (cVar1 = AtomicInt<unsigned_long>::SetValueConditional
                              ((AtomicInt<unsigned_long> *)this,1,0), cVar1 != '\0'))
        goto LAB_053592fc;
        uVar5 = uVar5 - 1;
      }
    }
  }
  uVar5 = AtomicInt<unsigned_long>::operator++((AtomicInt<unsigned_long> *)this);
  if (1 < uVar5) {
    if (*(long *)(this + 0x10) == lVar2) {
      *(short *)(this + 8) = *(short *)(this + 8) + 1;
      return;
    }
    WaitFSemaphore(this);
  }
LAB_053592fc:
  *(long *)(this + 0x10) = lVar2;
  *(undefined2 *)(this + 8) = 1;
  return;
}


/* EA::Thread::Futex::Unlock() */

void __thiscall EA::Thread::Futex::Unlock(Futex *this)

{
  short sVar1;
  long lVar2;
  
  sVar1 = *(short *)(this + 8);
  *(short *)(this + 8) = sVar1 + -1;
  if (sVar1 != 1) {
    AtomicInt<unsigned_long>::operator--((AtomicInt<unsigned_long> *)this);
    return;
  }
  *(undefined8 *)(this + 0x10) = 0;
  lVar2 = AtomicInt<unsigned_long>::operator--((AtomicInt<unsigned_long> *)this);
  if (lVar2 == 0) {
    return;
  }
  SignalFSemaphore(this);
  return;
}


/* EA::Thread::Futex::CreateFSemaphore() */

int __thiscall EA::Thread::Futex::CreateFSemaphore(Futex *this)

{
  int iVar1;
  
  iVar1 = sem_init((sem_t *)(this + 0x18),0,0);
  return iVar1;
}


/* EA::Thread::Futex::DestroyFSemaphore() */

int __thiscall EA::Thread::Futex::DestroyFSemaphore(Futex *this)

{
  int iVar1;
  
  iVar1 = sem_destroy((sem_t *)(this + 0x18));
  return iVar1;
}


/* EA::Thread::Futex::SignalFSemaphore() */

int __thiscall EA::Thread::Futex::SignalFSemaphore(Futex *this)

{
  int iVar1;
  
  iVar1 = sem_post((sem_t *)(this + 0x18));
  return iVar1;
}


/* EA::Thread::Futex::WaitFSemaphore() */

void __thiscall EA::Thread::Futex::WaitFSemaphore(Futex *this)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = sem_wait((sem_t *)(this + 0x18));
    if (iVar1 != -1) {
      return;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return;
}


/* EA::Thread::Futex::WaitFSemaphore(EA::Thread::ThreadTime const&) */

undefined8 EA::Thread::Futex::WaitFSemaphore(ThreadTime *param_1)

{
  WaitFSemaphore((Futex *)param_1);
  return 1;
}

