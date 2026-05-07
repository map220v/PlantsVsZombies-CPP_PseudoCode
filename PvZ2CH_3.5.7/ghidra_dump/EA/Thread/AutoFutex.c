// Class: EA::Thread::AutoFutex


/* EA::Thread::AutoFutex::AutoFutex(EA::Thread::Futex&) */

void __thiscall EA::Thread::AutoFutex::AutoFutex(AutoFutex *this,Futex *param_1)

{
  *(Futex **)this = param_1;
  Futex::Lock(param_1);
  return;
}


/* EA::Thread::AutoFutex::~AutoFutex() */

void __thiscall EA::Thread::AutoFutex::~AutoFutex(AutoFutex *this)

{
  Futex::Unlock(*(Futex **)this);
  return;
}

