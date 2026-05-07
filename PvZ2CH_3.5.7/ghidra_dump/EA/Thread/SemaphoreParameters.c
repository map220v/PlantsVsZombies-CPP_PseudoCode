// Class: EA::Thread::SemaphoreParameters


/* EA::Thread::SemaphoreParameters::SemaphoreParameters(int, bool, char const*) */

void __thiscall
EA::Thread::SemaphoreParameters::SemaphoreParameters
          (SemaphoreParameters *this,int param_1,bool param_2,char *param_3)

{
  *(int *)this = param_1;
  this[8] = (SemaphoreParameters)param_2;
  *(undefined4 *)(this + 4) = 0x7fffffff;
  return;
}

