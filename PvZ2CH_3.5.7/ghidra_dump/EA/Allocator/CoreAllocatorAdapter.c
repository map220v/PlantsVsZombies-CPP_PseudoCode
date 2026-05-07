// Class: EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>


/* EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter(char
   const*, EA::Allocator::ICoreAllocator*) */

void __thiscall
EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
          (CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> *this,char *param_1,
          ICoreAllocator *param_2)

{
  *(ICoreAllocator **)this = param_2;
  *(undefined4 *)(this + 8) = 0;
  return;
}

