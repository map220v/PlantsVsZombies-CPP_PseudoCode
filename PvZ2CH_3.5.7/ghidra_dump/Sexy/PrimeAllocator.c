// Class: Sexy::PrimeAllocator


/* Sexy::PrimeAllocator::Alloc(unsigned long, char const*, unsigned int, unsigned int, unsigned int)
    */

void Sexy::PrimeAllocator::Alloc(ulong param_1,char *param_2,uint param_3,uint param_4,uint param_5)

{
  operator_new__((ulong)param_2);
  return;
}


/* Sexy::PrimeAllocator::Free(void*, unsigned long) */

void Sexy::PrimeAllocator::Free(void *param_1,ulong param_2)

{
  if (param_2 != 0) {
    EATextSquish::ColourFit::~ColourFit((ColourFit *)param_2);
    return;
  }
  return;
}


/* Sexy::PrimeAllocator::PrimeAllocator() */

void __thiscall Sexy::PrimeAllocator::PrimeAllocator(PrimeAllocator *this)

{
  EA::Allocator::ICoreAllocator::ICoreAllocator((ICoreAllocator *)this);
  *(undefined ***)this = &PTR_nop_06a366a0;
  return;
}

