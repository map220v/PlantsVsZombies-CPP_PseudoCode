// Class: eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::fixed_node_allocator(void*,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_node_allocator
          (fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1,CoreAllocatorAdapter *param_2)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,param_1,0x60,0x18,8,0,param_2);
  return;
}


/* eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::fixed_node_allocator(void*,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_node_allocator
          (fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1,CoreAllocatorAdapter *param_2)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,param_1,0x5a0,0x168,8,0,param_2);
  return;
}


/* eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::reset(void*) */

void __thiscall
eastl::
fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::reset(fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this,void *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::init
            (this,(ulong)param_1,0x77,0x18,8);
  return;
}


/* eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::reset(void*) */

void __thiscall
eastl::
fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::reset(fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this,void *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::init
            (this,(ulong)param_1,0x707,0x168,8);
  return;
}


/* eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::copy_overflow_allocator(eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::copy_overflow_allocator
          (fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,fixed_node_allocator *param_1)

{
  FUN_0535a7ac(this + 0x20,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  return;
}


/* eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_node_allocator(eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_node_allocator
          (fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,fixed_node_allocator *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(void **)(param_1 + 8),0x60,0x18,8,0,(CoreAllocatorAdapter *)(param_1 + 0x20))
  ;
  return;
}


/* eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_node_allocator(eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_node_allocator
          (fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,fixed_node_allocator *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(void **)(param_1 + 8),0x5a0,0x168,8,0,
             (CoreAllocatorAdapter *)(param_1 + 0x20));
  return;
}


/* eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::fixed_node_allocator(void*)
    */

void __thiscall
eastl::
fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_node_allocator
          (fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow(this,(ulong)param_1,0x5a0,0x168,8);
  return;
}


/* eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>::fixed_node_allocator(void*) */

void __thiscall
eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_node_allocator
          (fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> *this,void *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
            (this,(ulong)param_1,0x140,0x28,8,(allocator *)0x0);
  return;
}


/* eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator>::fixed_node_allocator(void*) */

void __thiscall
eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>::fixed_node_allocator
          (fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator> *this,void *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
            (this,(ulong)param_1,0x180,0x18,4,(allocator *)0x0);
  return;
}


/* eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true, eastl::allocator>::reset(void*) */

void __thiscall
eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::reset
          (fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> *this,void *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::init(this,(ulong)param_1,0x167,0x28,8);
  return;
}


/* eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true, eastl::allocator>::reset(void*) */

void __thiscall
eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>::reset
          (fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator> *this,void *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::init(this,(ulong)param_1,0x197,0x18,4);
  return;
}


/* eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>::fixed_node_allocator(eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_node_allocator
          (fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> *this,
          fixed_node_allocator *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
            (this,*(ulong *)(param_1 + 8),0x140,0x28,8,(allocator *)0x0);
  return;
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator>::fixed_node_allocator(eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> const&) */

void eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>::fixed_node_allocator
               (fixed_node_allocator *param_1)

{
  long in_x1;
  
  fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
            (param_1,*(ulong *)(in_x1 + 8),0x180,0x18,4,(allocator *)0x0);
  return;
}

