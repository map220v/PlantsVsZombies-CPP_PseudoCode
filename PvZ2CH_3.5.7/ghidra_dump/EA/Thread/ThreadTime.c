// Class: EA::Thread::ThreadTime


/* EA::Thread::ThreadTime::ThreadTime(int, int) */

void __thiscall EA::Thread::ThreadTime::ThreadTime(ThreadTime *this,int param_1,int param_2)

{
  *(long *)this = (long)param_1;
  *(long *)(this + 8) = (long)param_2;
  return;
}


/* EA::Thread::ThreadTime::ThreadTime(long const&) */

void __thiscall EA::Thread::ThreadTime::ThreadTime(ThreadTime *this,long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)this = lVar1 / 1000;
  *(long *)(this + 8) = (*param_1 + (lVar1 / 1000) * -1000) * 1000000;
  return;
}

