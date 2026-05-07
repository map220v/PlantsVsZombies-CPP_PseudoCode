// Class: EA::Thread::ThreadEnumData


/* EA::Thread::ThreadEnumData::Release() */

void __thiscall EA::Thread::ThreadEnumData::Release(ThreadEnumData *this)

{
  if (*(EAThreadDynamicData **)this != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::Release(*(EAThreadDynamicData **)this);
    *(undefined8 *)this = 0;
  }
  return;
}


/* EA::Thread::ThreadEnumData::~ThreadEnumData() */

void __thiscall EA::Thread::ThreadEnumData::~ThreadEnumData(ThreadEnumData *this)

{
  if (*(EAThreadDynamicData **)this != (EAThreadDynamicData *)0x0) {
    EAThreadDynamicData::Release(*(EAThreadDynamicData **)this);
    *(undefined8 *)this = 0;
  }
  return;
}

