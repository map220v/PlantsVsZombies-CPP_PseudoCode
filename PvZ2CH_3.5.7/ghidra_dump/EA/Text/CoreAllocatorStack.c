// Class: EA::Text::CoreAllocatorStack


/* EA::Text::CoreAllocatorStack::Free(void*, unsigned long) */

void EA::Text::CoreAllocatorStack::Free(void *param_1,ulong param_2)

{
  return;
}


/* EA::Text::CoreAllocatorStack::Alloc(unsigned long, char const*, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
EA::Text::CoreAllocatorStack::Alloc
          (CoreAllocatorStack *this,ulong param_1,char *param_2,uint param_3,uint param_4,
          uint param_5)

{
  Allocator::StackAllocator::MallocAligned
            (*(StackAllocator **)(this + 8),param_1,(ulong)param_4,(ulong)param_5,true);
  return;
}


/* EA::Text::CoreAllocatorStack::Alloc(unsigned long, char const*, unsigned int) */

void EA::Text::CoreAllocatorStack::Alloc(ulong param_1,char *param_2,uint param_3)

{
  Allocator::StackAllocator::Malloc(*(StackAllocator **)(param_1 + 8),(ulong)param_2,true);
  return;
}

