// Class: eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>


/* eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false,
   eastl::allocator>::fixed_hashtable_allocator(void*, void*) */

void __thiscall
eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>::
fixed_hashtable_allocator
          (fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator> *this,
          void *param_1,void *param_2)

{
  fixed_pool::fixed_pool((fixed_pool *)this,param_1,0x29f,0x10,2,0);
  *(void **)(this + 0x20) = param_2;
  return;
}


/* eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false,
   eastl::allocator>::reset(void*) */

void __thiscall
eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>::reset
          (fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator> *this,
          void *param_1)

{
  fixed_pool_base::init(this,(ulong)param_1,0x29f,0x10,2);
  return;
}


/* eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_hashtable_allocator(void*, void*,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_hashtable_allocator
          (fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1,void *param_2,CoreAllocatorAdapter *param_3)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,param_1,0x4607,0x7c8,8,0,param_3);
  *(void **)(this + 0x38) = param_2;
  return;
}


/* eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_hashtable_allocator(void*, void*,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_hashtable_allocator
          (fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1,void *param_2,CoreAllocatorAdapter *param_3)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,param_1,0x1b7,0x58,8,0,param_3);
  *(void **)(this + 0x38) = param_2;
  return;
}


/* eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::reset(void*) */

void __thiscall
eastl::
fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::reset(fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this,void *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::init
            (this,(ulong)param_1,0x4607,0x7c8,8);
  return;
}


/* eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::reset(void*) */

void __thiscall
eastl::
fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::reset(fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this,void *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::init
            (this,(ulong)param_1,0x1b7,0x58,8);
  return;
}


/* eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_hashtable_allocator(eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_hashtable_allocator
          (fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,fixed_hashtable_allocator *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(void **)param_1,0x4607,0x7c8,8,0,(CoreAllocatorAdapter *)(param_1 + 0x20));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  return;
}


/* eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false,
   eastl::allocator>::fixed_hashtable_allocator(eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul,
   2ul, 0ul, false, eastl::allocator> const&) */

void __thiscall
eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>::
fixed_hashtable_allocator
          (fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator> *this,
          fixed_hashtable_allocator *param_1)

{
  fixed_pool::fixed_pool((fixed_pool *)this,*(void **)param_1,0x29f,0x10,2,0);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  return;
}


/* eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_hashtable_allocator(eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_hashtable_allocator
          (fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,fixed_hashtable_allocator *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  fixed_pool_with_overflow
            ((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(void **)param_1,0x1b7,0x58,8,0,(CoreAllocatorAdapter *)(param_1 + 0x20));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  return;
}


/* eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>::fixed_hashtable_allocator(void*, void*) */

void __thiscall
eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>::
fixed_hashtable_allocator
          (fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator> *this,
          void *param_1,void *param_2)

{
  fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
            (this,(ulong)param_1,0xd7,0x18,8,(allocator *)0x0);
  *(void **)(this + 0x30) = param_2;
  return;
}


/* eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true, eastl::allocator>::reset(void*)
    */

void __thiscall
eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>::reset
          (fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator> *this,
          void *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::init(this,(ulong)param_1,0xd7,0x18,8);
  return;
}


/* eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>::fixed_hashtable_allocator(eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul,
   8ul, 0ul, true, eastl::allocator> const&) */

void __thiscall
eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>::
fixed_hashtable_allocator
          (fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator> *this,
          fixed_hashtable_allocator *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
            (this,*(ulong *)param_1,0xd7,0x18,8,(allocator *)0x0);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  return;
}

