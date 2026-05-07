// Class: EASemaphoreData


/* EASemaphoreData::EASemaphoreData() */

void __thiscall EASemaphoreData::EASemaphoreData(EASemaphoreData *this)

{
  EA::Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x10),0);
  *(undefined4 *)(this + 0x14) = 0x7fffffff;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

