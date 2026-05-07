// Class: EA::Thread::ThreadFactory


/* EA::Thread::ThreadFactory::CreateThread() */

exception_ptr * EA::Thread::ThreadFactory::CreateThread(void)

{
  void *pvVar1;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  
  if (gpAllocator == (long *)0x0) {
    pvVar1 = ::operator_new(8);
    auVar2._8_8_ = extraout_x1;
    auVar2._0_8_ = pvVar1;
  }
  else {
    (**(code **)(*gpAllocator + 0x10))(gpAllocator,8,0,0);
    auVar2 = FUN_05382f84();
    if (auVar2._0_8_ == 0) {
      return (exception_ptr *)0x0;
    }
  }
  std::__exception_ptr::exception_ptr::exception_ptr(auVar2._0_8_,auVar2._8_8_);
  return auVar2._0_8_;
}


/* EA::Thread::ThreadFactory::DestroyThread(EA::Thread::Thread*) */

void EA::Thread::ThreadFactory::DestroyThread(Thread *param_1)

{
  if (gpAllocator == (long *)0x0) {
    if (param_1 != (Thread *)0x0) {
      Thread::~Thread(param_1);
      AK::FreeHook(param_1);
      return;
    }
  }
  else {
    Thread::~Thread(param_1);
    (**(code **)(*gpAllocator + 0x20))(gpAllocator,param_1,0);
  }
  return;
}


/* EA::Thread::ThreadFactory::ConstructThread(void*) */

exception_ptr * EA::Thread::ThreadFactory::ConstructThread(void *param_1)

{
  exception_ptr *this;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_05382f84();
  this = auVar1._0_8_;
  if (this != (exception_ptr *)0x0) {
    std::__exception_ptr::exception_ptr::exception_ptr(this,auVar1._8_8_);
  }
  return this;
}


/* EA::Thread::ThreadFactory::DestructThread(EA::Thread::Thread*) */

void EA::Thread::ThreadFactory::DestructThread(Thread *param_1)

{
  if (*(EAThreadDynamicData **)param_1 != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::Release(*(EAThreadDynamicData **)param_1);
    return;
  }
  return;
}

