// Class: eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_pool_with_overflow(void*, unsigned long, unsigned long, unsigned long, unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_pool_with_overflow
          (fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
          CoreAllocatorAdapter *param_6)

{
  fixed_pool_base::fixed_pool_base((fixed_pool_base *)this,(void *)0x0);
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x20),(EAIOEASTLCoreAllocator *)param_6);
  fixed_pool_base::init(this,(ulong)param_1,param_2,param_3,param_4);
  *(void **)(this + 0x30) = param_1;
  return;
}


/* eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::init(void*, unsigned long, unsigned long, unsigned long, unsigned long) */

void eastl::
     fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
     init(void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  fixed_pool_base::init(param_1,param_2,param_3,param_4,param_5);
  *(ulong *)((long)param_1 + 0x30) = param_2;
  return;
}


/* eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::deallocate(void*) */

void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::deallocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,void *param_1)

{
  if ((*(void **)(this + 0x30) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0535a5f8(*(undefined8 *)(this + 0x20),param_1,*(undefined8 *)(this + 0x18));
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::deallocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,void *param_1)

{
  if ((*(void **)(this + 0x30) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0535a5f8(*(undefined8 *)(this + 0x20),param_1,*(undefined8 *)(this + 0x18));
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::deallocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,void *param_1)

{
  if ((*(void **)(this + 0x30) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0535a5f8(*(undefined8 *)(this + 0x20),param_1,*(undefined8 *)(this + 0x18));
  return;
}


/* eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_pool_with_overflow(void*, unsigned long, unsigned long, unsigned long, unsigned long) */

void eastl::
     fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
     fixed_pool_with_overflow(void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ICoreAllocator *pIVar1;
  
  fixed_pool_base::fixed_pool_base(param_1,(void *)0x0);
  pIVar1 = (ICoreAllocator *)EA::Allocator::ICoreAllocator::GetDefaultAllocator();
  EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            ((CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> *)((long)param_1 + 0x20),
             "EASTL fixed_pool",pIVar1);
  fixed_pool_base::init(param_1,param_2,param_3,param_4,param_5);
  *(ulong *)((long)param_1 + 0x30) = param_2;
  return;
}


/* eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::allocate() */

void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::allocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    *(undefined8 *)this = **(undefined8 **)this;
    return;
  }
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(this + 0x18);
    return;
  }
  FUN_0535a844(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),
               *(undefined8 *)(this + 0x18));
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::allocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    *(undefined8 *)this = **(undefined8 **)this;
    return;
  }
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(this + 0x18);
    return;
  }
  FUN_0535a844(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),
               *(undefined8 *)(this + 0x18));
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::allocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    *(undefined8 *)this = **(undefined8 **)this;
    return;
  }
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(this + 0x18);
    return;
  }
  FUN_0535a844(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),
               *(undefined8 *)(this + 0x18));
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::allocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    *(undefined8 *)this = **(undefined8 **)this;
    return;
  }
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(this + 0x18);
    return;
  }
  FUN_0535a844(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),
               *(undefined8 *)(this + 0x18));
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::allocate(fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    *(undefined8 *)this = **(undefined8 **)this;
    return;
  }
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(this + 0x18);
    return;
  }
  FUN_0535a844(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),
               *(undefined8 *)(this + 0x18));
  return;
}


/* eastl::fixed_pool_with_overflow<eastl::allocator>::allocate() */

undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}


undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}


undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}


/* eastl::fixed_pool_with_overflow<eastl::allocator>::deallocate(void*) */

void __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::deallocate
          (fixed_pool_with_overflow<eastl::allocator> *this,void *param_1)

{
  if ((*(void **)(this + 0x28) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0536184c(param_1);
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::deallocate
          (fixed_pool_with_overflow<eastl::allocator> *this,void *param_1)

{
  if ((*(void **)(this + 0x28) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0536184c(param_1);
  return;
}


/* eastl::fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow(void*, unsigned long,
   unsigned long, unsigned long, unsigned long, eastl::allocator const&) */

void eastl::fixed_pool_with_overflow<eastl::allocator>::fixed_pool_with_overflow
               (void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
               allocator *param_6)

{
  fixed_pool_base::fixed_pool_base(param_1,(void *)0x0);
  fixed_pool_base::init(param_1,param_2,param_3,param_4,param_5);
  *(ulong *)((long)param_1 + 0x28) = param_2;
  return;
}


/* eastl::fixed_pool_with_overflow<eastl::allocator>::init(void*, unsigned long, unsigned long,
   unsigned long, unsigned long) */

void eastl::fixed_pool_with_overflow<eastl::allocator>::init
               (void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  fixed_pool_base::init(param_1,param_2,param_3,param_4,param_5);
  *(ulong *)((long)param_1 + 0x28) = param_2;
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::deallocate
          (fixed_pool_with_overflow<eastl::allocator> *this,void *param_1)

{
  if ((*(void **)(this + 0x28) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0536184c(param_1);
  return;
}


void __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::deallocate
          (fixed_pool_with_overflow<eastl::allocator> *this,void *param_1)

{
  if ((*(void **)(this + 0x28) <= param_1) && (param_1 < *(void **)(this + 0x10))) {
    *(undefined8 *)param_1 = *(undefined8 *)this;
    *(void **)this = param_1;
    return;
  }
  FUN_0536184c(param_1);
  return;
}


undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}


undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}


undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}


undefined8 * __thiscall
eastl::fixed_pool_with_overflow<eastl::allocator>::allocate
          (fixed_pool_with_overflow<eastl::allocator> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)this = *puVar1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    *(long *)(this + 8) = (long)puVar1 + *(long *)(this + 0x18);
    return puVar1;
  }
  puVar1 = operator_new__(*(ulong *)(this + 0x18));
  return puVar1;
}

