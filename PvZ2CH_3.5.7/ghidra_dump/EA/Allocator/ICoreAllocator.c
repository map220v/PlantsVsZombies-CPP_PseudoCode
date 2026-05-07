// Class: EA::Allocator::ICoreAllocator


/* EA::Allocator::ICoreAllocator::AllocDebug(unsigned long,
   EA::Allocator::ICoreAllocator::DebugParams, unsigned int) */

void EA::Allocator::ICoreAllocator::AllocDebug(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,*param_3);
  return;
}


/* EA::Allocator::ICoreAllocator::AllocDebug(unsigned long,
   EA::Allocator::ICoreAllocator::DebugParams, unsigned int, unsigned int, unsigned int) */

void EA::Allocator::ICoreAllocator::AllocDebug(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_2,*param_3);
  return;
}


/* EA::Allocator::ICoreAllocator::ICoreAllocator() */

void __thiscall EA::Allocator::ICoreAllocator::ICoreAllocator(ICoreAllocator *this)

{
  *(undefined **)this = &DAT_06a36650;
  return;
}


/* EA::Allocator::ICoreAllocator::GetDefaultAllocator() */

PrimeAllocator * EA::Allocator::ICoreAllocator::GetDefaultAllocator(void)

{
  PrimeAllocator *this;
  
  if (gPrimeAllocator != (PrimeAllocator *)0x0) {
    return gPrimeAllocator;
  }
  this = ::operator_new(8);
  *(undefined8 *)this = 0;
  Sexy::PrimeAllocator::PrimeAllocator(this);
  gPrimeAllocator = this;
  return this;
}

