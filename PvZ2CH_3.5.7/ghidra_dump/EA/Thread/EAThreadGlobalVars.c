// Class: EA::Thread::EAThreadGlobalVars


/* EA::Thread::EAThreadGlobalVars::~EAThreadGlobalVars() */

void __thiscall EA::Thread::EAThreadGlobalVars::~EAThreadGlobalVars(EAThreadGlobalVars *this)

{
  Mutex::~Mutex((Mutex *)(this + 0x1b80));
  return;
}


/* EA::Thread::EAThreadGlobalVars::EAThreadGlobalVars() */

void __thiscall EA::Thread::EAThreadGlobalVars::EAThreadGlobalVars(EAThreadGlobalVars *this)

{
  Mutex::Mutex((Mutex *)(this + 0x1b80),(MutexParameters *)0x0,true);
  return;
}

