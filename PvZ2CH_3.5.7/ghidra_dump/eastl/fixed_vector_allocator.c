// Class: eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>


/* eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator>::fixed_vector_allocator(void*) */

void __thiscall
eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
          (fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *this,void *param_1)

{
  *(void **)(this + 8) = param_1;
  return;
}


/* eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator>::fixed_vector_allocator(eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
          (fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *this,
          fixed_vector_allocator *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return;
}


/* eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_vector_allocator(void*) */

void __thiscall
eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
fixed_vector_allocator
          (fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
           *this,void *param_1)

{
  EA::Allocator::EAIOPathStringCoreAllocator::EAIOPathStringCoreAllocator
            ((EAIOPathStringCoreAllocator *)this,(char *)0x0);
  *(void **)(this + 0x10) = param_1;
  return;
}


/* eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_vector_allocator(eastl::fixed_vector_allocator<4ul,
   96ul, 4ul, 0ul, true, EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
fixed_vector_allocator
          (fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
           *this,fixed_vector_allocator *param_1)

{
  EA::Allocator::EAIOPathStringCoreAllocator::EAIOPathStringCoreAllocator
            ((EAIOPathStringCoreAllocator *)this,(EAIOPathStringCoreAllocator *)param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::copy_overflow_allocator(eastl::fixed_vector_allocator<4ul,
   96ul, 4ul, 0ul, true, EA::Allocator::EAIOPathStringCoreAllocator> const&) */

fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator> *
__thiscall
eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
copy_overflow_allocator
          (fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
           *this,fixed_vector_allocator *param_1)

{
  FUN_0533e448(this,*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8));
  return this;
}


/* eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator>::fixed_vector_allocator(void*) */

void __thiscall
eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::
fixed_vector_allocator
          (fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator> *this
          ,void *param_1)

{
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)this,(char *)0x0);
  *(void **)(this + 0x10) = param_1;
  return;
}


/* eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_vector_allocator(eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_vector_allocator
          (fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,fixed_vector_allocator *param_1)

{
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)this,(EAIOEASTLCoreAllocator *)param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator>::deallocate(void*, unsigned long) */

void eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::
     deallocate(void *param_1,ulong param_2)

{
  if (*(ulong *)((long)param_1 + 0x10) != param_2) {
    FUN_0533e47c(*(undefined8 *)param_1);
    return;
  }
  return;
}


/* eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_vector_allocator(void*,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_vector_allocator
          (fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1,CoreAllocatorAdapter *param_2)

{
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)this,(EAIOEASTLCoreAllocator *)param_2);
  *(void **)(this + 0x10) = param_1;
  return;
}


/* eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::deallocate(void*, unsigned
   long) */

void eastl::
     fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
     ::deallocate(void *param_1,ulong param_2)

{
  if (*(ulong *)((long)param_1 + 0x10) != param_2) {
    FUN_0535a5f8(*(undefined8 *)param_1);
    return;
  }
  return;
}

