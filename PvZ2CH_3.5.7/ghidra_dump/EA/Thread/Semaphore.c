// Class: EA::Thread::Semaphore


/* EA::Thread::Semaphore::~Semaphore() */

int __thiscall EA::Thread::Semaphore::~Semaphore(Semaphore *this)

{
  int iVar1;
  
  iVar1 = sem_destroy((sem_t *)this);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Semaphore::Wait(EA::Thread::ThreadTime const&) */

void __thiscall EA::Thread::Semaphore::Wait(Semaphore *this,ThreadTime *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Thread::operator==(param_1,(ThreadTime *)&DAT_06c45e00);
  if (cVar1 == '\0') {
    cVar1 = Thread::operator==(param_1,(ThreadTime *)&DAT_06c45e10);
    if (cVar1 == '\0') {
      do {
        iVar2 = sem_timedwait((sem_t *)this,(timespec *)param_1);
        if (iVar2 == 0) goto LAB_0541ba4c;
        piVar4 = (int *)__errno();
      } while (*piVar4 == 4);
      if (*piVar4 == 0x6e) {
        uVar3 = 0xfffffffe;
        goto LAB_0541ba84;
      }
    }
    else {
      iVar2 = sem_trywait((sem_t *)this);
      if (iVar2 != -1) {
        if (iVar2 == 0xb) {
          uVar3 = 0xfffffffe;
        }
        else {
LAB_0541ba4c:
          uVar3 = AtomicInt<int>::Decrement((AtomicInt<int> *)(this + 0x10));
        }
        goto LAB_0541ba84;
      }
      piVar4 = (int *)__errno();
      if (*piVar4 == 0xb) {
        uVar3 = 0xfffffffe;
        goto LAB_0541ba84;
      }
    }
  }
  else {
    do {
      iVar2 = sem_wait((sem_t *)this);
      if (iVar2 == 0) {
        sem_getvalue((sem_t *)this,&iStack_c);
        goto LAB_0541ba4c;
      }
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    sem_getvalue((sem_t *)this,&iStack_c);
  }
  uVar3 = 0xffffffff;
LAB_0541ba84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* EA::Thread::Semaphore::Init(EA::Thread::SemaphoreParameters const*) */

bool __thiscall EA::Thread::Semaphore::Init(Semaphore *this,SemaphoreParameters *param_1)

{
  AtomicInt<int> *this_00;
  int iVar1;
  uint __value;
  
  if (param_1 != (SemaphoreParameters *)0x0) {
    this_00 = (AtomicInt<int> *)(this + 0x10);
    AtomicInt<int>::operator=(this_00,*(int *)param_1);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 4);
    iVar1 = AtomicInt::operator_cast_to_int((AtomicInt *)this_00);
    if (iVar1 < 0) {
      AtomicInt<int>::operator=(this_00,0);
    }
    this[0x18] = (Semaphore)0x0;
    __value = AtomicInt::operator_cast_to_int((AtomicInt *)this_00);
    iVar1 = sem_init((sem_t *)this,0,__value);
    if (iVar1 != 0) {
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
    }
    return iVar1 != -1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Thread::Semaphore::Semaphore(EA::Thread::SemaphoreParameters const*, bool) */

void __thiscall
EA::Thread::Semaphore::Semaphore(Semaphore *this,SemaphoreParameters *param_1,bool param_2)

{
  SemaphoreParameters aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EASemaphoreData::EASemaphoreData((EASemaphoreData *)this);
  if ((param_1 == (SemaphoreParameters *)0x0) && (param_2)) {
    SemaphoreParameters::SemaphoreParameters(aSStack_28,0,true,(char *)0x0);
    Init(this,aSStack_28);
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
/* EA::Thread::Semaphore::Semaphore(int) */

void __thiscall EA::Thread::Semaphore::Semaphore(Semaphore *this,int param_1)

{
  SemaphoreParameters aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EASemaphoreData::EASemaphoreData((EASemaphoreData *)this);
  SemaphoreParameters::SemaphoreParameters(aSStack_28,param_1,true,(char *)0x0);
  Init(this,aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Thread::Semaphore::Post(int) */

int __thiscall EA::Thread::Semaphore::Post(Semaphore *this,int param_1)

{
  AtomicInt *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (AtomicInt *)(this + 0x10);
  iVar1 = AtomicInt::operator_cast_to_int(this_00);
  iVar3 = param_1;
  if (*(int *)(this + 0x14) - param_1 < iVar1) {
    iVar1 = -1;
  }
  else {
    while (0 < iVar3) {
      AtomicInt<int>::operator++((AtomicInt<int> *)this_00);
      iVar2 = sem_post((sem_t *)this);
      iVar3 = iVar3 + -1;
      if (iVar2 != 0) {
        AtomicInt<int>::operator--((AtomicInt<int> *)this_00);
        return -1;
      }
    }
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}


/* EA::Thread::Semaphore::GetCount() const */

int __thiscall EA::Thread::Semaphore::GetCount(Semaphore *this)

{
  int iVar1;
  
  iVar1 = AtomicInt::operator_cast_to_int((AtomicInt *)(this + 0x10));
  return iVar1;
}

