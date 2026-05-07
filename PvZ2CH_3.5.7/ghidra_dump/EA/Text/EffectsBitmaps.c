// Class: EA::Text::EffectsBitmaps


/* EA::Text::EffectsBitmaps::~EffectsBitmaps() */

void __thiscall EA::Text::EffectsBitmaps::~EffectsBitmaps(EffectsBitmaps *this)

{
  Thread::Futex::~Futex((Futex *)(this + 0x70));
  Bitmap8::~Bitmap8((Bitmap8 *)(this + 0x40));
  Bitmap8::~Bitmap8((Bitmap8 *)(this + 0x20));
  Bitmap8::~Bitmap8((Bitmap8 *)this);
  return;
}


/* EA::Text::EffectsBitmaps::IsInUse() const */

bool __thiscall EA::Text::EffectsBitmaps::IsInUse(EffectsBitmaps *this)

{
  return *(long *)(this + 0x60) != 0;
}


/* EA::Text::EffectsBitmaps::BeginUse(void*, EA::Allocator::ICoreAllocator*) */

void __thiscall
EA::Text::EffectsBitmaps::BeginUse(EffectsBitmaps *this,void *param_1,ICoreAllocator *param_2)

{
  Thread::Futex::Lock((Futex *)(this + 0x70));
  *(void **)(this + 0x60) = param_1;
  if (*(ICoreAllocator **)(this + 0x18) != param_2) {
    Bitmap8::Shutdown((Bitmap8 *)this);
    *(ICoreAllocator **)(this + 0x18) = param_2;
    Bitmap8::Shutdown((Bitmap8 *)(this + 0x20));
    *(ICoreAllocator **)(this + 0x38) = param_2;
    Bitmap8::Shutdown((Bitmap8 *)(this + 0x40));
    *(ICoreAllocator **)(this + 0x58) = param_2;
  }
  return;
}


/* EA::Text::EffectsBitmaps::EndUse(void*) */

void EA::Text::EffectsBitmaps::EndUse(void *param_1)

{
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  Thread::Futex::Unlock((Futex *)((long)param_1 + 0x70));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsBitmaps::IsInUse(void*) */

void __thiscall EA::Text::EffectsBitmaps::IsInUse(EffectsBitmaps *this,void *param_1)

{
  void *pvVar1;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x70));
  pvVar1 = *(void **)(this + 0x60);
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar1 == param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsBitmaps::Reset() */

void __thiscall EA::Text::EffectsBitmaps::Reset(EffectsBitmaps *this)

{
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x70));
  Bitmap8::Shutdown((Bitmap8 *)this);
  Bitmap8::Shutdown((Bitmap8 *)(this + 0x20));
  Bitmap8::Shutdown((Bitmap8 *)(this + 0x40));
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::EffectsBitmaps::EffectsBitmaps() */

void __thiscall EA::Text::EffectsBitmaps::EffectsBitmaps(EffectsBitmaps *this)

{
  Bitmap8::Bitmap8((Bitmap8 *)this,(ICoreAllocator *)0x0,0,0);
  Bitmap32::Bitmap32((Bitmap32 *)(this + 0x20),(ICoreAllocator *)0x0,0,0);
  Bitmap32::Bitmap32((Bitmap32 *)(this + 0x40),(ICoreAllocator *)0x0,0,0);
  *(undefined8 *)(this + 0x60) = 0;
  Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x68),0);
  Thread::Futex::Futex((Futex *)(this + 0x70));
  return;
}

