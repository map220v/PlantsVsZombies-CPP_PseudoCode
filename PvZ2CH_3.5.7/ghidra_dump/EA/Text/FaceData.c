// Class: EA::Text::FaceData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FaceData::~FaceData() */

void __thiscall EA::Text::FaceData::~FaceData(FaceData *this)

{
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 8) != 0) {
    Delete_InputStream(*(long *)(this + 8),&local_c);
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(long *)this != 0) {
    tsi_DeleteMemhandler();
    *(undefined8 *)this = 0;
  }
  Thread::Futex::~Futex((Futex *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::FaceData::Release() */

int __thiscall EA::Text::FaceData::Release(FaceData *this)

{
  int iVar1;
  
  iVar1 = Thread::AtomicInt<int>::Decrement((AtomicInt<int> *)(this + 0x40));
  if (iVar1 == 0) {
    ~FaceData(this);
    (**(code **)(**(long **)(this + 0x38) + 0x20))(*(long **)(this + 0x38),this,0);
  }
  return iVar1;
}


/* EA::Text::FaceData::FaceData(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::FaceData::FaceData(FaceData *this,ICoreAllocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  Thread::Futex::Futex((Futex *)(this + 0x10));
  *(ICoreAllocator **)(this + 0x38) = param_1;
  Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x40),0);
  return;
}


/* EA::Text::FaceData::AddRef() */

void __thiscall EA::Text::FaceData::AddRef(FaceData *this)

{
  Thread::AtomicInt<int>::operator++((AtomicInt<int> *)(this + 0x40));
  return;
}

