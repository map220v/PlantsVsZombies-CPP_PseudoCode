// Class: EAThreadDynamicData


/* EAThreadDynamicData::~EAThreadDynamicData() */

void __thiscall EAThreadDynamicData::~EAThreadDynamicData(EAThreadDynamicData *this)

{
  if (*(pthread_t *)this != 0) {
    pthread_detach(*(pthread_t *)this);
  }
  EA::Thread::Semaphore::~Semaphore((Semaphore *)(this + 0xbc));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x90));
  return;
}


/* EAThreadDynamicData::AddRef() */

void __thiscall EAThreadDynamicData::AddRef(EAThreadDynamicData *this)

{
  EA::Thread::AtomicInt<int>::Increment((AtomicInt<int> *)(this + 0x40));
  return;
}


/* EAThreadDynamicData::Release() */

void __thiscall EAThreadDynamicData::Release(EAThreadDynamicData *this)

{
  int iVar1;
  
  iVar1 = EA::Thread::AtomicInt<int>::Decrement((AtomicInt<int> *)(this + 0x40));
  if (iVar1 != 0) {
    return;
  }
  EA::Thread::FreeThreadDynamicData(this);
  return;
}


/* EAThreadDynamicData::EAThreadDynamicData() */

void __thiscall EAThreadDynamicData::EAThreadDynamicData(EAThreadDynamicData *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  EA::Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x40),0);
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  EA::Thread::Mutex::Mutex((Mutex *)(this + 0x90),(MutexParameters *)0x0,true);
  EA::Thread::Semaphore::Semaphore((Semaphore *)(this + 0xbc),(SemaphoreParameters *)0x0,true);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  return;
}

