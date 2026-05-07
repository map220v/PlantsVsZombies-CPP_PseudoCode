// Class: eastl::basic_string<char16_t,eastl::allocator>


/* eastl::basic_string<char16_t, eastl::allocator>::~basic_string() */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::~basic_string
          (basic_string<char16_t,eastl::allocator> *this)

{
  FUN_0533a124(*(undefined8 *)this,*(undefined8 *)(this + 0x10));
  return;
}


/* eastl::basic_string<char16_t, eastl::allocator>::AllocateSelf() */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::AllocateSelf
          (basic_string<char16_t,eastl::allocator> *this)

{
  long lVar1;
  
  lVar1 = FUN_0533a07c();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 2;
  return;
}


/* eastl::basic_string<char16_t, eastl::allocator>::basic_string() */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::basic_string
          (basic_string<char16_t,eastl::allocator> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char16_t, eastl::allocator>::set_capacity(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::set_capacity
          (basic_string<char16_t,eastl::allocator> *this,ulong param_1)

{
  long lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)this;
  if (param_1 == 0xffffffffffffffff) {
    param_1 = *(long *)(this + 8) - lVar1 >> 1;
  }
  else if (param_1 < (ulong)(*(long *)(this + 8) - lVar1 >> 1)) {
    *(ulong *)(this + 8) = lVar1 + param_1 * 2;
  }
  if ((*(long *)(this + 0x10) - lVar1 >> 1) - 1U != param_1) {
    if (param_1 == 0) {
      FUN_0533a124(lVar1,*(long *)(this + 0x10));
      AllocateSelf(this);
      return;
    }
    pwVar2 = (wchar_t *)FUN_0533a110(param_1 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar4 = *(undefined8 *)this;
    *(undefined2 *)pwVar3 = 0;
    FUN_0533a124(uVar4,uVar5);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(ulong *)(this + 0x10) = (long)pwVar2 + (param_1 + 1) * 2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::allocator>::reserve(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::reserve
          (basic_string<char16_t,eastl::allocator> *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 1;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 1) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::allocator>::append(unsigned long, char16_t) */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::append
          (basic_string<char16_t,eastl::allocator> *this,ulong param_1,wchar16 param_2)

{
  ulong uVar1;
  wchar16 *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 1);
  if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar1) {
    local_18 = FUN_0533a0fc();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar16 *)(*(long *)(this + 8) + 2),param_1 - 1,param_2);
    pwVar2 = *(wchar16 **)(this + 8);
    *pwVar2 = param_2;
    *(wchar16 **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::allocator>::resize(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,eastl::allocator>::resize
          (basic_string<char16_t,eastl::allocator> *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  if (param_1 < uVar1) {
    FUN_0533a09c(this + 8,*(long *)this + param_1 * 2);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFree(char16_t*, unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoFree(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,wchar16 *param_1,ulong param_2)

{
  if (param_1 != (wchar16 *)0x0) {
    FUN_0533bcb4(*(undefined8 *)(this + 0x18),param_1,param_2 << 1);
    return;
  }
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DeallocateSelf() */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DeallocateSelf(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10) - (long)*(wchar16 **)this;
  if (lVar1 < 4) {
    return;
  }
  DoFree(this,*(wchar16 **)this,lVar1 >> 1);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::~basic_string() */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
~basic_string(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10) - (long)*(wchar16 **)this;
  if (lVar1 < 4) {
    return;
  }
  DoFree(this,*(wchar16 **)this,lVar1 >> 1);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoAllocate(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoAllocate(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1)

{
  FUN_0533bd44(*(undefined8 *)(this + 0x18),*(undefined4 *)(this + 0x20),param_1 << 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::append(char16_t const*, char16_t const*) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
append(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 1) + (lVar6 >> 1);
    if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar5) {
      local_18 = FUN_0533bd30();
      local_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate(this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined2 *)pwVar4 = 0;
      DeallocateSelf(this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + (uVar5 + 1) * 2;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(*(long *)(this + 8) + 2));
      pwVar1 = *(wchar16 **)(this + 8);
      *(undefined2 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::assign(char16_t const*, char16_t const*) */

basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
__thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
assign(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,wchar16 *param_1,wchar16 *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 1) < (ulong)((long)__n >> 1)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar16 *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0533bcd0(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
__thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
operator=(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,basic_string *param_1)

{
  if (param_1 != (basic_string *)this) {
    assign(this,*(wchar16 **)param_1,*(wchar16 **)(param_1 + 8));
  }
  return this;
}


/* eastl::basic_string<wchar_t, eastl::allocator>::~basic_string() */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::~basic_string
          (basic_string<wchar_t,eastl::allocator> *this)

{
  FUN_0533e63c(*(undefined8 *)this,*(undefined8 *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::erase(unsigned long, unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::erase(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
        *this,ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_8 = ___stack_chk_guard;
  local_10 = (*(long *)(this + 8) - lVar2 >> 1) - param_1;
  local_18 = param_2;
  puVar1 = min_alt<unsigned_long>(&local_18,&local_10);
  FUN_0533e588(this + 8,lVar2 + param_1 * 2,lVar2 + (param_1 + *puVar1) * 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::AllocateSelf() */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::AllocateSelf(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this)

{
  long lVar1;
  
  lVar1 = FUN_0533e498();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 1;
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<1ul,
   96ul, 1ul, 0ul, true, EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),param_1);
  basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::AllocateSelf((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::DoAllocate(unsigned long) */

void eastl::
     basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
     ::DoAllocate(ulong param_1)

{
  FUN_0533e820(param_1 + 0x18);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::AllocateSelf() */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::AllocateSelf(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this)

{
  long lVar1;
  
  lVar1 = FUN_0533e4a4();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 2;
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<2ul,
   96ul, 2ul, 0ul, true, EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::basic_string(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),param_1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::AllocateSelf((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::DoAllocate(unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::DoAllocate(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *this,ulong param_1)

{
  FUN_0533e834(this + 0x18,param_1 << 1);
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::AllocateSelf() */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::AllocateSelf(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this)

{
  long lVar1;
  
  lVar1 = FUN_0533e4bc();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 4;
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<4ul,
   96ul, 4ul, 0ul, true, EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::basic_string(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),param_1);
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::AllocateSelf((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this);
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::DoAllocate(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::DoAllocate(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *this,ulong param_1)

{
  FUN_0533e848(this + 0x18,param_1 << 2);
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::AllocateSelf() */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::AllocateSelf(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this)

{
  long lVar1;
  
  lVar1 = FUN_0533e4b0();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 4;
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<4ul, 20ul,
   4ul, 0ul, true, EA::Allocator::EAIOEASTLCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::basic_string(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<2ul, 20ul,
   2ul, 0ul, true, EA::Allocator::EAIOEASTLCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::basic_string(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<1ul, 20ul,
   1ul, 0ul, true, EA::Allocator::EAIOEASTLCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<4ul, 20ul,
   4ul, 0ul, true, EA::Allocator::EAIOEASTLCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::basic_string(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::CharTypeStringFindFirstNotOf(char16_t const*,
   char16_t const*, char16_t const*, char16_t const*) */

wchar16 * eastl::
          basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          ::CharTypeStringFindFirstNotOf
                    (wchar16 *param_1,wchar16 *param_2,wchar16 *param_3,wchar16 *param_4)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  
  if (param_1 != param_2) {
    while (param_3 != param_4) {
      wVar2 = *param_3;
      pwVar1 = param_3;
      while (wVar2 != *param_1) {
        pwVar1 = pwVar1 + 1;
        if (param_4 == pwVar1) {
          return param_1;
        }
        wVar2 = *pwVar1;
      }
      param_1 = param_1 + 1;
      if (param_2 == param_1) {
        return param_2;
      }
    }
  }
  return param_1;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::find_first_not_of(char16_t const*, unsigned long)
   const */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::find_first_not_of(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                    *this,wchar16 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_05340988(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::find(char16_t const*, unsigned long) const */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::find(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
       *this,wchar16 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_05340ac4(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::CharTypeStringFindFirstOf(char16_t const*,
   char16_t const*, char16_t const*, char16_t const*) */

wchar16 * eastl::
          basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          ::CharTypeStringFindFirstOf
                    (wchar16 *param_1,wchar16 *param_2,wchar16 *param_3,wchar16 *param_4)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  
  pwVar1 = param_1;
  do {
    if (param_1 == param_2) {
      return pwVar1;
    }
    if (param_3 != param_4) {
      wVar2 = *param_3;
      pwVar1 = param_3;
      while( true ) {
        if (wVar2 == *param_1) {
          return param_1;
        }
        pwVar1 = pwVar1 + 1;
        if (param_4 == pwVar1) break;
        wVar2 = *pwVar1;
      }
    }
    param_1 = param_1 + 1;
    pwVar1 = param_2;
  } while( true );
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::find_first_of(char16_t const*, unsigned long)
   const */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::find_first_of(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *this,wchar16 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_05340be0(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DoFree(char*, unsigned long) */

void eastl::
     basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
     ::DoFree(char *param_1,ulong param_2)

{
  if (param_2 != 0) {
    fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::deallocate
              (param_1 + 0x18,param_2);
    return;
  }
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DeallocateSelf() */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::DeallocateSelf(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                 *this)

{
  if (1 < (long)(*(long *)(this + 0x10) - *(ulong *)this)) {
    DoFree((char *)this,*(ulong *)this);
    return;
  }
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::~basic_string() */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::~basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                *this)

{
  if (1 < (long)(*(long *)(this + 0x10) - *(ulong *)this)) {
    DoFree((char *)this,*(ulong *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char const*, char const*) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,char *param_1,char *param_2)

{
  long lVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  long lVar5;
  ulong uVar6;
  ulong local_18;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar1 = *(long *)this;
    lVar5 = *(long *)(this + 8);
    if ((char *)((*(long *)(this + 0x10) - lVar1) - 1U) <
        param_2 + ((lVar5 - lVar1) - (long)param_1)) {
      local_18 = FUN_0533e5f4();
      local_10 = param_2 + ((lVar5 - lVar1) - (long)param_1);
      puVar2 = max_alt<unsigned_long>(&local_18,(ulong *)&local_10);
      uVar6 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate((ulong)this);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined1 *)pwVar4 = 0;
      basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::DeallocateSelf((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + uVar6 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(lVar5 + 1));
      param_2[*(long *)(this + 8) - (long)param_1] = '\0';
      **(char **)(this + 8) = *param_1;
      *(char **)(this + 8) = param_2 + (*(long *)(this + 8) - (long)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char const*) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,char *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::TEMPNAMEPLACEHOLDERVALUE(char const*) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::operator+=(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *this,char *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DoFree(char16_t*, unsigned long) */

void eastl::
     basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
     ::DoFree(wchar16 *param_1,ulong param_2)

{
  if (param_2 != 0) {
    fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::deallocate
              (param_1 + 0xc,param_2);
    return;
  }
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DeallocateSelf() */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::DeallocateSelf(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                 *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 4) {
    return;
  }
  DoFree((wchar16 *)this,*(ulong *)this);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::~basic_string() */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::~basic_string(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 4) {
    return;
  }
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::DoFree((wchar16 *)this,*(ulong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char16_t const*, char16_t const*) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 1) + (lVar6 >> 1);
    if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar5) {
      local_18 = FUN_0533e608();
      local_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate(this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined2 *)pwVar4 = 0;
      basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::DeallocateSelf((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + (uVar5 + 1) * 2;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(*(long *)(this + 8) + 2));
      pwVar1 = *(wchar16 **)(this + 8);
      *(undefined2 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char16_t const*) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar16 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char16_t const*, unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar16 *param_1,ulong param_2)

{
  append(this,param_1,param_1 + param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong uStack_18;
  ulong uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 1) + (lVar6 >> 1);
    if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar5) {
      uStack_18 = FUN_0533e608();
      uStack_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&uStack_18,&uStack_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate(this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined2 *)pwVar4 = 0;
      basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::DeallocateSelf((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + (uVar5 + 1) * 2;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(*(long *)(this + 8) + 2));
      pwVar1 = *(wchar16 **)(this + 8);
      *(undefined2 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(char16_t const*, char16_t const*) */

basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
* __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar16 *param_1,wchar16 *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 1) < (ulong)((long)__n >> 1)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar16 *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0533e588(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::DoFree(char32_t*, unsigned long) */

void eastl::
     basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
     ::DoFree(wchar32 *param_1,ulong param_2)

{
  if (param_2 != 0) {
    fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::deallocate
              (param_1 + 6,param_2);
    return;
  }
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::DeallocateSelf() */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::DeallocateSelf(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 8) {
    return;
  }
  DoFree((wchar32 *)this,*(ulong *)this);
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::~basic_string() */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::~basic_string(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 8) {
    return;
  }
  DoFree((wchar32 *)this,*(ulong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(wchar_t const*, wchar_t const*) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar5 = (long)param_2 - (long)param_1;
    uVar4 = (*(long *)(this + 8) - *(long *)this >> 2) + (lVar5 >> 2);
    if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar4) {
      local_18 = FUN_0533e61c();
      local_10 = uVar4;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar4 = *puVar2;
      pwVar1 = (wchar_t *)DoAllocate(this,uVar4 + 1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>(param_1,param_2,pwVar3);
      *pwVar3 = L'\0';
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar1;
      *(wchar_t **)(this + 8) = pwVar3;
      *(wchar_t **)(this + 0x10) = pwVar1 + uVar4 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>(param_1 + 1,param_2,(wchar_t *)(*(long *)(this + 8) + 4))
      ;
      pwVar1 = *(wchar_t **)(this + 8);
      *(undefined4 *)((long)pwVar1 + lVar5) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(wchar_t const*) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar_t *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  ulong uStack_18;
  ulong uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar5 = (long)param_2 - (long)param_1;
    uVar4 = (*(long *)(this + 8) - *(long *)this >> 2) + (lVar5 >> 2);
    if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar4) {
      uStack_18 = FUN_0533e61c();
      uStack_10 = uVar4;
      puVar2 = max_alt<unsigned_long>(&uStack_18,&uStack_10);
      uVar4 = *puVar2;
      pwVar1 = (wchar_t *)DoAllocate(this,uVar4 + 1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>(param_1,param_2,pwVar3);
      *pwVar3 = L'\0';
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar1;
      *(wchar_t **)(this + 8) = pwVar3;
      *(wchar_t **)(this + 0x10) = pwVar1 + uVar4 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>(param_1 + 1,param_2,(wchar_t *)(*(long *)(this + 8) + 4))
      ;
      pwVar1 = *(wchar_t **)(this + 8);
      *(undefined4 *)((long)pwVar1 + lVar5) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar5;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DoAllocate(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::DoAllocate(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
             *this,ulong param_1)

{
  FUN_0533e8ac(this + 0x18,param_1 << 2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::append(char32_t const*, char32_t const*) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::append(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar32 *param_1,wchar32 *param_2)

{
  wchar32 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 2) + (lVar6 >> 2);
    if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar5) {
      local_18 = FUN_0533e85c();
      local_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)
               basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               ::DoAllocate((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                             *)this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>(param_1,param_2,pwVar4);
      *pwVar4 = L'\0';
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(wchar_t **)(this + 0x10) = pwVar3 + uVar5 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>(param_1 + 1,param_2,(wchar_t *)(*(long *)(this + 8) + 4))
      ;
      pwVar1 = *(wchar32 **)(this + 8);
      *(undefined4 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(char32_t const*, char32_t const*) */

basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
* __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar32 *param_1,wchar32 *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 2) < (ulong)((long)__n >> 2)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar32 *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0533e650(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(char32_t const*) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar32 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DoAllocate(unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::DoAllocate(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
             *this,ulong param_1)

{
  FUN_0533e8c0(this + 0x18,param_1 << 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::append(char16_t const*, char16_t const*) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 1) + (lVar6 >> 1);
    if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar5) {
      local_18 = FUN_0533e870();
      local_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate(this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined2 *)pwVar4 = 0;
      DeallocateSelf(this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + (uVar5 + 1) * 2;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(*(long *)(this + 8) + 2));
      pwVar1 = *(wchar16 **)(this + 8);
      *(undefined2 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(char16_t const*, char16_t const*) */

basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
* __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar16 *param_1,wchar16 *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 1) < (ulong)((long)__n >> 1)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar16 *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0533e6b0(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 20ul, 2ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(char16_t const*) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar16 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::DoAllocate(unsigned long) */

void eastl::
     basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
     ::DoAllocate(ulong param_1)

{
  FUN_0533e8d4(param_1 + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::append(char const*, char const*) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::append(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,char *param_1,char *param_2)

{
  long lVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  long lVar5;
  ulong uVar6;
  ulong local_18;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar1 = *(long *)this;
    lVar5 = *(long *)(this + 8);
    if ((char *)((*(long *)(this + 0x10) - lVar1) - 1U) <
        param_2 + ((lVar5 - lVar1) - (long)param_1)) {
      local_18 = FUN_0533e884();
      local_10 = param_2 + ((lVar5 - lVar1) - (long)param_1);
      puVar2 = max_alt<unsigned_long>(&local_18,(ulong *)&local_10);
      uVar6 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate((ulong)this);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined1 *)pwVar4 = 0;
      DeallocateSelf(this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + uVar6 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(lVar5 + 1));
      param_2[*(long *)(this + 8) - (long)param_1] = '\0';
      **(char **)(this + 8) = *param_1;
      *(char **)(this + 8) = param_2 + (*(long *)(this + 8) - (long)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(char const*, char const*) */

basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
* __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,char *param_1,char *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest) < __n) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,param_1 + (*(long *)(this + 8) - *(long *)this),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0533e710(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(char const*) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,char *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::append(wchar_t const*, wchar_t const*) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::append(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar5 = (long)param_2 - (long)param_1;
    uVar4 = (*(long *)(this + 8) - *(long *)this >> 2) + (lVar5 >> 2);
    if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar4) {
      local_18 = FUN_0533e898();
      local_10 = uVar4;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar4 = *puVar2;
      pwVar1 = (wchar_t *)DoAllocate(this,uVar4 + 1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>(param_1,param_2,pwVar3);
      *pwVar3 = L'\0';
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      *(wchar_t **)this = pwVar1;
      *(wchar_t **)(this + 8) = pwVar3;
      *(wchar_t **)(this + 0x10) = pwVar1 + uVar4 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>(param_1 + 1,param_2,(wchar_t *)(*(long *)(this + 8) + 4))
      ;
      pwVar1 = *(wchar_t **)(this + 8);
      *(undefined4 *)((long)pwVar1 + lVar5) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(wchar_t const*, wchar_t const*) */

basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
* __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar_t *param_1,wchar_t *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 2) < (ulong)((long)__n >> 2)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar_t *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0533e76c(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::assign(wchar_t const*) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::assign(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,wchar_t *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::CharTypeStringRFindFirstNotOf(char16_t const*, char16_t const*, char16_t const*, char16_t
   const*) */

wchar16 * eastl::
          basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::CharTypeStringRFindFirstNotOf
                    (wchar16 *param_1,wchar16 *param_2,wchar16 *param_3,wchar16 *param_4)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  
  if (param_1 != param_2) {
    while (param_3 != param_4) {
      wVar2 = *param_3;
      pwVar1 = param_3;
      while (wVar2 != param_1[-1]) {
        pwVar1 = pwVar1 + 1;
        if (param_4 == pwVar1) {
          return param_1;
        }
        wVar2 = *pwVar1;
      }
      param_1 = param_1 + -1;
      if (param_2 == param_1) {
        return param_2;
      }
    }
  }
  return param_1;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::find_last_not_of(char16_t const*, unsigned long)
   const */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::find_last_not_of(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                   *this,wchar16 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_0534545c(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::rtrim() */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::rtrim(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
        *this)

{
  long lVar1;
  wchar16 local_10 [4];
  long local_8;
  
  local_10[0] = L' ';
  local_10[1] = 9;
  local_10[2] = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = find_last_not_of(this,local_10,0xffffffffffffffff);
  erase(this,lVar1 + 1,0xffffffffffffffff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::set_capacity(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 2;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 4;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 2) - 1U != uVar4) {
    if (uVar4 == 0) {
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      AllocateSelf(this);
      return;
    }
    pwVar2 = (wchar_t *)
             basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
             ::DoAllocate((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                           *)this,uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *pwVar3 = L'\0';
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                      *)this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(wchar_t **)(this + 0x10) = pwVar2 + uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::reserve(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::reserve(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 2;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::append(unsigned long, char32_t) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::append(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,ulong param_1,wchar32 param_2)

{
  ulong uVar1;
  wchar32 *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 2);
  if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar1) {
    local_18 = FUN_0533e85c();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar_t *)(*(long *)(this + 8) + 4),param_1 - 1,param_2);
    pwVar2 = *(wchar32 **)(this + 8);
    *pwVar2 = param_2;
    *(wchar32 **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::resize(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  if (param_1 < uVar1) {
    FUN_0533e650(this + 8,*(long *)this + param_1 * 4);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::set_capacity(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 2;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 4;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 2) - 1U != uVar4) {
    if (uVar4 == 0) {
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      AllocateSelf(this);
      return;
    }
    pwVar2 = (wchar_t *)DoAllocate(this,uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *pwVar3 = L'\0';
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                      *)this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(wchar_t **)(this + 0x10) = pwVar2 + uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::reserve(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::reserve(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 2;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::append(unsigned long, wchar_t) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::append(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,ulong param_1,wchar_t param_2)

{
  ulong uVar1;
  wchar_t *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 2);
  if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar1) {
    local_18 = FUN_0533e898();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar_t *)(*(long *)(this + 8) + 4),param_1 - 1,param_2);
    pwVar2 = *(wchar_t **)(this + 8);
    *pwVar2 = param_2;
    *(wchar_t **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 20ul, 4ul, 0ul, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::resize(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  if (param_1 < uVar1) {
    FUN_0533e76c(this + 8,*(long *)this + param_1 * 4);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::AllocateSelf() */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::AllocateSelf(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this)

{
  long lVar1;
  
  lVar1 = FUN_05347f5c();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 4;
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::DoAllocate(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::DoAllocate(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *this,ulong param_1)

{
  FUN_05348184(this + 0x18,param_1 << 2);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::set_capacity(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,ulong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (param_1 == 0xffffffffffffffff) {
    param_1 = *(long *)(this + 8) - lVar3;
  }
  else if (param_1 < (ulong)(*(long *)(this + 8) - lVar3)) {
    *(ulong *)(this + 8) = lVar3 + param_1;
  }
  if ((*(long *)(this + 0x10) - lVar3) - 1U != param_1) {
    if (param_1 == 0) {
      basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::DeallocateSelf((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                        *)this);
      basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::AllocateSelf((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                      *)this);
      return;
    }
    pwVar1 = (wchar_t *)DoAllocate((ulong)this);
    pwVar2 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
    *(undefined1 *)pwVar2 = 0;
    basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::DeallocateSelf((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                      *)this);
    *(wchar_t **)this = pwVar1;
    *(wchar_t **)(this + 8) = pwVar2;
    *(ulong *)(this + 0x10) = (long)pwVar1 + param_1 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::reserve(unsigned long) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::reserve(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_8 = ___stack_chk_guard;
  local_10 = *(long *)(this + 8) - lVar2;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(unsigned long, char) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this);
  if ((*(long *)(this + 0x10) - *(long *)this) - 1U < uVar1) {
    local_18 = FUN_05348134();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((char *)(*(long *)(this + 8) + 1),param_1 - 1,param_2);
    **(char **)(this + 8) = param_2;
    lVar2 = *(long *)(this + 8);
    *(ulong *)(this + 8) = lVar2 + param_1;
    *(undefined1 *)(lVar2 + param_1) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::resize(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this;
  if (param_1 < uVar1) {
    FUN_05347fb8(this + 8,*(long *)this + param_1);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,'\0');
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::set_capacity(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 1;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 2;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 1) - 1U != uVar4) {
    if (uVar4 == 0) {
      basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::DeallocateSelf((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                        *)this);
      basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::AllocateSelf((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                      *)this);
      return;
    }
    pwVar2 = (wchar_t *)DoAllocate(this,uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *(undefined2 *)pwVar3 = 0;
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::DeallocateSelf((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                      *)this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(ulong *)(this + 0x10) = (long)pwVar2 + (uVar4 + 1) * 2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::reserve(unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::reserve(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 1;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 1) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(unsigned long, char16_t) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1,wchar16 param_2)

{
  ulong uVar1;
  wchar16 *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 1);
  if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar1) {
    local_18 = FUN_05348148();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar16 *)(*(long *)(this + 8) + 2),param_1 - 1,param_2);
    pwVar2 = *(wchar16 **)(this + 8);
    *pwVar2 = param_2;
    *(wchar16 **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::resize(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  if (param_1 < uVar1) {
    FUN_05348014(this + 8,*(long *)this + param_1 * 2);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::set_capacity(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 2;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 4;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 2) - 1U != uVar4) {
    if (uVar4 == 0) {
      DeallocateSelf(this);
      AllocateSelf(this);
      return;
    }
    pwVar2 = (wchar_t *)DoAllocate(this,uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *pwVar3 = L'\0';
    DeallocateSelf(this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(wchar_t **)(this + 0x10) = pwVar2 + uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::reserve(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::reserve(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 2;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(unsigned long, char32_t) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1,wchar32 param_2)

{
  ulong uVar1;
  wchar32 *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 2);
  if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar1) {
    local_18 = FUN_0534815c();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar_t *)(*(long *)(this + 8) + 4),param_1 - 1,param_2);
    pwVar2 = *(wchar32 **)(this + 8);
    *pwVar2 = param_2;
    *(wchar32 **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::resize(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  if (param_1 < uVar1) {
    FUN_05348074(this + 8,*(long *)this + param_1 * 4);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::set_capacity(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 2;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 4;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 2) - 1U != uVar4) {
    if (uVar4 == 0) {
      basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                        *)this);
      basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
      ::AllocateSelf((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                      *)this);
      return;
    }
    pwVar2 = (wchar_t *)DoAllocate(this,uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *pwVar3 = L'\0';
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::DeallocateSelf((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                      *)this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(wchar_t **)(this + 0x10) = pwVar2 + uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::reserve(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::reserve(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 2;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(unsigned long, wchar_t) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1,wchar_t param_2)

{
  ulong uVar1;
  wchar_t *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 2);
  if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar1) {
    local_18 = FUN_05348170();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar_t *)(*(long *)(this + 8) + 4),param_1 - 1,param_2);
    pwVar2 = *(wchar_t **)(this + 8);
    *pwVar2 = param_2;
    *(wchar_t **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::resize(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  if (param_1 < uVar1) {
    FUN_053480d4(this + 8,*(long *)this + param_1 * 4);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::basic_string(eastl::fixed_vector_allocator<4ul,
   96ul, 4ul, 0ul, true, EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::basic_string(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),param_1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(char const*, char const*) */

basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
* __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,char *param_1,char *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest) < __n) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,param_1 + (*(long *)(this + 8) - *(long *)this),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_05349760(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(char const*) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,char *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::push_back(char) */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::push_back(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *this,char param_1)

{
  char *pcVar1;
  ulong *puVar2;
  char *pcVar3;
  long lVar4;
  ulong local_18;
  char *local_10;
  long local_8;
  
  pcVar3 = *(char **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar1 = pcVar3 + 1;
  if (pcVar1 == *(char **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_0534992c(pcVar1 + (-1 - lVar4));
    local_10 = pcVar3 + (1 - lVar4);
    puVar2 = max_alt<unsigned_long>(&local_18,(ulong *)&local_10);
    reserve(this,*puVar2);
    pcVar3 = *(char **)(this + 8);
    pcVar1 = pcVar3 + 1;
  }
  *(char **)(this + 8) = pcVar1;
  *pcVar3 = param_1;
  **(undefined1 **)(this + 8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(char16_t const*) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar16 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::TEMPNAMEPLACEHOLDERVALUE(char16_t const*) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::operator+=(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *this,wchar16 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::push_back(char16_t) */

void __thiscall
eastl::
basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::push_back(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *this,wchar16 param_1)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar16 *pwVar3;
  long lVar4;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  pwVar3 = *(wchar16 **)(this + 8);
  local_8 = ___stack_chk_guard;
  pwVar1 = pwVar3 + 1;
  if (pwVar1 == *(wchar16 **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_05349940(((long)pwVar1 - lVar4 >> 1) + -1);
    local_10 = ((long)pwVar3 - lVar4 >> 1) + 1;
    puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar2);
    pwVar3 = *(wchar16 **)(this + 8);
    pwVar1 = pwVar3 + 1;
  }
  *(wchar16 **)(this + 8) = pwVar1;
  *pwVar3 = param_1;
  pwVar3[1] = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char32_t const*, char32_t const*) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar32 *param_1,wchar32 *param_2)

{
  wchar32 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 2) + (lVar6 >> 2);
    if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar5) {
      local_18 = FUN_05349954();
      local_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate(this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>(param_1,param_2,pwVar4);
      *pwVar4 = L'\0';
      DeallocateSelf(this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(wchar_t **)(this + 0x10) = pwVar3 + uVar5 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>(param_1 + 1,param_2,(wchar_t *)(*(long *)(this + 8) + 4))
      ;
      pwVar1 = *(wchar32 **)(this + 8);
      *(undefined4 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(char32_t const*, char32_t const*) */

basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
* __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar32 *param_1,wchar32 *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 2) < (ulong)((long)__n >> 2)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar32 *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_0534981c(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(char32_t const*) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar32 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char32_t const*) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar32 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::TEMPNAMEPLACEHOLDERVALUE(char32_t const*) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::operator+=(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *this,wchar32 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(wchar_t const*, wchar_t const*) */

basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
* __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar_t *param_1,wchar_t *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 2) < (ulong)((long)__n >> 2)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar_t *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_053498b4(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(wchar_t const*, unsigned long) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar_t *param_1,ulong param_2)

{
  assign(this,param_1,param_1 + param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::push_back(wchar_t) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::push_back(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  long lVar4;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  pwVar3 = *(wchar_t **)(this + 8);
  local_8 = ___stack_chk_guard;
  pwVar1 = pwVar3 + 1;
  if (pwVar1 == *(wchar_t **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_05349a9c(((long)pwVar1 - lVar4 >> 2) + -1);
    local_10 = ((long)pwVar3 - lVar4 >> 2) + 1;
    puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar2);
    pwVar3 = *(wchar_t **)(this + 8);
    pwVar1 = pwVar3 + 1;
  }
  *(wchar_t **)(this + 8) = pwVar1;
  *pwVar3 = param_1;
  pwVar3[1] = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::push_back(char32_t) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::push_back(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *this,wchar32 param_1)

{
  wchar32 *pwVar1;
  ulong *puVar2;
  wchar32 *pwVar3;
  long lVar4;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  pwVar3 = *(wchar32 **)(this + 8);
  local_8 = ___stack_chk_guard;
  pwVar1 = pwVar3 + 1;
  if (pwVar1 == *(wchar32 **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_05349954(((long)pwVar1 - lVar4 >> 2) + -1);
    local_10 = ((long)pwVar3 - lVar4 >> 2) + 1;
    puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar2);
    pwVar3 = *(wchar32 **)(this + 8);
    pwVar1 = pwVar3 + 1;
  }
  *(wchar32 **)(this + 8) = pwVar1;
  *pwVar3 = param_1;
  pwVar3[1] = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 48ul, 2ul, 0ul, true,
   eastl::allocator> >::DeallocateSelf() */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
::DeallocateSelf(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
                 *this)

{
  if (*(long *)(this + 0x10) - *(long *)this < 4) {
    return;
  }
  FUN_0535a79c();
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 48ul, 2ul, 0ul, true,
   eastl::allocator> >::~basic_string() */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
::~basic_string(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
                *this)

{
  if (*(long *)(this + 0x10) - *(long *)this < 4) {
    return;
  }
  FUN_0535a79c();
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::DeallocateSelf() */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::DeallocateSelf(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                 *this)

{
  if (*(long *)(this + 0x10) - *(long *)this < 4) {
    return;
  }
  FUN_0535a7ec();
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::~basic_string() */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::~basic_string(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                *this)

{
  if (*(long *)(this + 0x10) - *(long *)this < 4) {
    return;
  }
  FUN_0535a7ec();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::insert(char16_t*, char16_t const*, char16_t const*) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::insert(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
         *this,wchar16 *param_1,wchar16 *param_2,wchar16 *param_3)

{
  void *__dest;
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulong *puVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  long lVar8;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  __n = (long)param_3 - (long)param_2;
  local_8 = ___stack_chk_guard;
  lVar6 = (long)__n >> 1;
  if (lVar6 != 0) {
    pwVar5 = *(wchar16 **)(this + 8);
    pwVar4 = *(wchar16 **)this;
    lVar8 = *(long *)(this + 0x10) - (long)pwVar5 >> 1;
    if ((param_3 < pwVar4) || (pwVar5 < param_2)) {
      if (lVar6 + 1 <= lVar8) {
        lVar8 = (long)pwVar5 - (long)param_1 >> 1;
        if (lVar8 < lVar6) {
          __n = (lVar8 + 1) * 2;
          memmove(pwVar5 + 1,param_2 + lVar8 + 1,(long)param_3 - (long)(param_2 + lVar8 + 1));
          __dest = (void *)(*(long *)(this + 8) + (lVar6 - lVar8) * 2);
          *(void **)(this + 8) = __dest;
          memmove(__dest,param_1,__n);
          *(long *)(this + 8) = *(long *)(this + 8) + ((long)pwVar5 - (long)param_1);
          if (local_8 == ___stack_chk_guard) {
LAB_0535b678:
            memmove(param_1,param_2,__n);
            return;
          }
        }
        else {
          memmove(pwVar5 + 1,pwVar5 + (1 - lVar6),__n);
          *(size_t *)(this + 8) = *(long *)(this + 8) + __n;
          memmove((void *)((long)param_1 + __n),param_1,((lVar8 + 1) - lVar6) * 2);
          if (local_8 == ___stack_chk_guard) goto LAB_0535b678;
        }
        goto LAB_0535b6ec;
      }
      lVar7 = (long)pwVar5 - (long)pwVar4 >> 1;
LAB_0535b704:
      local_18 = FUN_0535a6ac((*(long *)(this + 0x10) - (long)pwVar4 >> 1) + -1);
      local_10 = lVar7 + lVar6;
      puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
      lVar6 = *puVar3 + 1;
    }
    else {
      lVar7 = (long)pwVar5 - (long)pwVar4 >> 1;
      if (lVar8 < lVar6 + 1) goto LAB_0535b704;
      lVar6 = lVar7 + 1 + lVar6;
    }
    pwVar1 = (wchar_t *)FUN_0535a800(lVar6);
    pwVar2 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,(wchar_t *)param_1,pwVar1);
    pwVar2 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_2,(wchar_t *)param_3,pwVar2);
    pwVar2 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,*(wchar_t **)(this + 8),pwVar2)
    ;
    *(undefined2 *)pwVar2 = 0;
    DeallocateSelf(this);
    *(wchar_t **)this = pwVar1;
    *(wchar_t **)(this + 8) = pwVar2;
    *(long *)(this + 0x10) = (long)pwVar1 + lVar6 * 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_0535b6ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::AllocateSelf() */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
AllocateSelf(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this)

{
  long lVar1;
  
  lVar1 = FUN_0535a4b0();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 2;
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::basic_string(eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::basic_string(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
               *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)(this + 0x18),param_1)
  ;
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  AllocateSelf((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 48ul, 2ul, 0ul, true,
   eastl::allocator> >::append(char16_t const*, char16_t const*) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
         *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 1) + (lVar6 >> 1);
    if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar5) {
      local_18 = FUN_0535a774();
      local_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)FUN_0535a83c(uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined2 *)pwVar4 = 0;
      DeallocateSelf(this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + (uVar5 + 1) * 2;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(*(long *)(this + 8) + 2));
      pwVar1 = *(wchar16 **)(this + 8);
      *(undefined2 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 48ul, 2ul, 0ul, true,
   eastl::allocator> >::append(char16_t const*) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
         *this,wchar16 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  append(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::set_capacity(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
               *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 1;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 2;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 1) - 1U != uVar4) {
    if (uVar4 == 0) {
      DeallocateSelf(this);
      basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      AllocateSelf((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)this);
      return;
    }
    pwVar2 = (wchar_t *)FUN_0535a800(uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *(undefined2 *)pwVar3 = 0;
    DeallocateSelf(this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(ulong *)(this + 0x10) = (long)pwVar2 + (uVar4 + 1) * 2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::reserve(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::reserve(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
          *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 1;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 1) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::append(unsigned long, char16_t) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::append(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
         *this,ulong param_1,wchar16 param_2)

{
  ulong uVar1;
  wchar16 *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 1);
  if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar1) {
    local_18 = FUN_0535a6ac();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar16 *)(*(long *)(this + 8) + 2),param_1 - 1,param_2);
    pwVar2 = *(wchar16 **)(this + 8);
    *pwVar2 = param_2;
    *(wchar16 **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::resize(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  if (param_1 < uVar1) {
    FUN_0535a594(this + 8,*(long *)this + param_1 * 2);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::AllocateSelf(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
AllocateSelf(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  long lVar1;
  
  if (1 < param_1) {
    lVar1 = DoAllocate(this,param_1);
    *(long *)this = lVar1;
    *(long *)(this + 8) = lVar1;
    *(ulong *)(this + 0x10) = lVar1 + param_1 * 2;
    return;
  }
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::RangeInitialize(char16_t const*, char16_t const*) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
RangeInitialize(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar_t *pwVar1;
  
  AllocateSelf(this,((long)param_2 - (long)param_1 >> 1) + 1);
  pwVar1 = CharStringUninitializedCopy<wchar_t>
                     ((wchar_t *)param_1,(wchar_t *)param_2,*(wchar_t **)this);
  *(wchar_t **)(this + 8) = pwVar1;
  *(undefined2 *)pwVar1 = 0;
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::RangeInitialize(char16_t const*) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
RangeInitialize(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *this,wchar16 *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  RangeInitialize(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::basic_string(char16_t const*,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
basic_string(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,wchar16 *param_1,CoreAllocatorAdapter *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)param_2);
  RangeInitialize(this,param_1);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::basic_string(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
basic_string(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,basic_string *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)(param_1 + 0x18));
  RangeInitialize(this,*(wchar16 **)param_1,*(wchar16 **)(param_1 + 8));
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::DeallocateSelf() */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
DeallocateSelf(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
               *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_05368718();
    return;
  }
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::~basic_string() */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
~basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
              *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_05368718();
    return;
  }
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::AllocateSelf() */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
AllocateSelf(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
             *this)

{
  long lVar1;
  
  lVar1 = FUN_05368564();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 1;
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::basic_string(eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
             *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)(this + 0x18),param_1)
  ;
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::CharTypeStringFindFirstNotOf(char const*, char const*, char const*, char
   const*) */

char * eastl::
       basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
       CharTypeStringFindFirstNotOf(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != param_2) {
    while (param_3 != param_4) {
      cVar2 = *param_3;
      pcVar1 = param_3;
      while (cVar2 != *param_1) {
        pcVar1 = pcVar1 + 1;
        if (param_4 == pcVar1) {
          return param_1;
        }
        cVar2 = *pcVar1;
      }
      param_1 = param_1 + 1;
      if (param_2 == param_1) {
        return param_2;
      }
    }
  }
  return param_1;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::find_first_not_of(char const*, unsigned long) const */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
find_first_not_of(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
                  *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_0536a210(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
set_capacity(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
             *this,ulong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (param_1 == 0xffffffffffffffff) {
    param_1 = *(long *)(this + 8) - lVar3;
  }
  else if (param_1 < (ulong)(*(long *)(this + 8) - lVar3)) {
    *(ulong *)(this + 8) = lVar3 + param_1;
  }
  if ((*(long *)(this + 0x10) - lVar3) - 1U != param_1) {
    if (param_1 == 0) {
      DeallocateSelf(this);
      AllocateSelf(this);
      return;
    }
    pwVar1 = operator_new__(param_1 + 1);
    pwVar2 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
    *(undefined1 *)pwVar2 = 0;
    DeallocateSelf(this);
    *(wchar_t **)this = pwVar1;
    *(wchar_t **)(this + 8) = pwVar2;
    *(ulong *)(this + 0x10) = (long)pwVar1 + param_1 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::reserve(unsigned long) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
reserve(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
        *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_8 = ___stack_chk_guard;
  local_10 = *(long *)(this + 8) - lVar2;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::append(unsigned long, char) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
append(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
       *this,ulong param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this);
  if ((*(long *)(this + 0x10) - *(long *)this) - 1U < uVar1) {
    local_18 = FUN_05368634();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((char *)(*(long *)(this + 8) + 1),param_1 - 1,param_2);
    **(char **)(this + 8) = param_2;
    lVar2 = *(long *)(this + 8);
    *(ulong *)(this + 8) = lVar2 + param_1;
    *(undefined1 *)(lVar2 + param_1) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
resize(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
       *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this;
  if (param_1 < uVar1) {
    FUN_053685d8(this + 8,*(long *)this + param_1);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,'\0');
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
   eastl::allocator> >::push_back(char) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
push_back(basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
          *this,char param_1)

{
  char *pcVar1;
  ulong *puVar2;
  char *pcVar3;
  long lVar4;
  ulong local_18;
  char *local_10;
  long local_8;
  
  pcVar3 = *(char **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar1 = pcVar3 + 1;
  if (pcVar1 == *(char **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_05368634(pcVar1 + (-1 - lVar4));
    local_10 = pcVar3 + (1 - lVar4);
    puVar2 = max_alt<unsigned_long>(&local_18,(ulong *)&local_10);
    reserve(this,*puVar2);
    pcVar3 = *(char **)(this + 8);
    pcVar1 = pcVar3 + 1;
  }
  *(char **)(this + 8) = pcVar1;
  *pcVar3 = param_1;
  **(undefined1 **)(this + 8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::basic_string(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
basic_string(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,CoreAllocatorAdapter *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)param_1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::basic_string() */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
basic_string(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this)

{
  ICoreAllocator *pIVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pIVar1 = (ICoreAllocator *)EA::Allocator::ICoreAllocator::GetDefaultAllocator();
  EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            ((CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> *)(this + 0x18),
             "EASTL basic_string",pIVar1);
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::find_last_not_of(char16_t const*, unsigned long) const */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
find_last_not_of(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,wchar16 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_053719d8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::assign(char16_t const*, unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
assign(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,wchar16 *param_1,ulong param_2)

{
  assign(this,param_1,param_1 + param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
append(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  long lVar6;
  ulong uStack_18;
  ulong uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    uVar5 = (*(long *)(this + 8) - *(long *)this >> 1) + (lVar6 >> 1);
    if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar5) {
      uStack_18 = FUN_0533bd30();
      uStack_10 = uVar5;
      puVar2 = max_alt<unsigned_long>(&uStack_18,&uStack_10);
      uVar5 = *puVar2;
      pwVar3 = (wchar_t *)DoAllocate(this,uVar5 + 1);
      pwVar4 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar3);
      pwVar4 = CharStringUninitializedCopy<wchar_t>((wchar_t *)param_1,(wchar_t *)param_2,pwVar4);
      *(undefined2 *)pwVar4 = 0;
      DeallocateSelf(this);
      *(wchar_t **)this = pwVar3;
      *(wchar_t **)(this + 8) = pwVar4;
      *(ulong *)(this + 0x10) = (long)pwVar3 + (uVar5 + 1) * 2;
    }
    else {
      CharStringUninitializedCopy<wchar_t>
                ((wchar_t *)(param_1 + 1),(wchar_t *)param_2,(wchar_t *)(*(long *)(this + 8) + 2));
      pwVar1 = *(wchar16 **)(this + 8);
      *(undefined2 *)((long)pwVar1 + lVar6) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar6;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
operator+=(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,basic_string *param_1)

{
  append(this,*(wchar16 **)param_1,*(wchar16 **)(param_1 + 8));
  return;
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::set_capacity(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
set_capacity(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)this;
  uVar4 = *(long *)(this + 8) - lVar5 >> 1;
  if ((param_1 != 0xffffffffffffffff) && (bVar1 = param_1 < uVar4, uVar4 = param_1, bVar1)) {
    *(ulong *)(this + 8) = lVar5 + param_1 * 2;
  }
  if ((*(long *)(this + 0x10) - lVar5 >> 1) - 1U != uVar4) {
    if (uVar4 == 0) {
      DeallocateSelf(this);
      AllocateSelf(this);
      return;
    }
    pwVar2 = (wchar_t *)DoAllocate(this,uVar4 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar2);
    *(undefined2 *)pwVar3 = 0;
    DeallocateSelf(this);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(ulong *)(this + 0x10) = (long)pwVar2 + (uVar4 + 1) * 2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::reserve(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
reserve(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_10 = *(long *)(this + 8) - lVar2 >> 1;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2 >> 1) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::append(unsigned long, char16_t) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
append(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ulong param_1,wchar16 param_2)

{
  ulong uVar1;
  wchar16 *pwVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this >> 1);
  if ((*(long *)(this + 0x10) - *(long *)this >> 1) - 1U < uVar1) {
    local_18 = FUN_0536f564();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((wchar16 *)(*(long *)(this + 8) + 2),param_1 - 1,param_2);
    pwVar2 = *(wchar16 **)(this + 8);
    *pwVar2 = param_2;
    *(wchar16 **)(this + 8) = pwVar2 + param_1;
    pwVar2[param_1] = L'\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::resize(unsigned long) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
resize(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  if (param_1 < uVar1) {
    FUN_0536f504(this + 8,*(long *)this + param_1 * 2);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,L'\0');
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::push_back(char16_t) */

void __thiscall
eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
push_back(basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,wchar16 param_1)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar16 *pwVar3;
  long lVar4;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  pwVar3 = *(wchar16 **)(this + 8);
  local_8 = ___stack_chk_guard;
  pwVar1 = pwVar3 + 1;
  if (pwVar1 == *(wchar16 **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_0536f564(((long)pwVar1 - lVar4 >> 1) + -1);
    local_10 = ((long)pwVar3 - lVar4 >> 1) + 1;
    puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar2);
    pwVar3 = *(wchar16 **)(this + 8);
    pwVar1 = pwVar3 + 1;
  }
  *(wchar16 **)(this + 8) = pwVar1;
  *pwVar3 = param_1;
  pwVar3[1] = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<wchar_t, eastl::allocator>::AllocateSelf() */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::AllocateSelf
          (basic_string<wchar_t,eastl::allocator> *this)

{
  long lVar1;
  
  lVar1 = FUN_053f6f74();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 4;
  return;
}


/* eastl::basic_string<wchar_t, eastl::allocator>::basic_string(eastl::allocator const&) */

void eastl::basic_string<wchar_t,eastl::allocator>::basic_string(allocator *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  AllocateSelf((basic_string<wchar_t,eastl::allocator> *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::allocator>::erase(unsigned long, unsigned long) */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::erase
          (basic_string<wchar_t,eastl::allocator> *this,ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_8 = ___stack_chk_guard;
  local_10 = (*(long *)(this + 8) - lVar2 >> 2) - param_1;
  local_18 = param_2;
  puVar1 = min_alt<unsigned_long>(&local_18,&local_10);
  FUN_053f6fb8(this + 8,lVar2 + param_1 * 4,lVar2 + (param_1 + *puVar1) * 4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::allocator>::insert(wchar_t*, wchar_t const*, wchar_t const*)
    */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::insert
          (basic_string<wchar_t,eastl::allocator> *this,wchar_t *param_1,wchar_t *param_2,
          wchar_t *param_3)

{
  void *__dest;
  undefined8 uVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  long lVar8;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  __n = (long)param_3 - (long)param_2;
  local_8 = ___stack_chk_guard;
  lVar6 = (long)__n >> 2;
  if (lVar6 != 0) {
    pwVar5 = *(wchar_t **)(this + 8);
    pwVar3 = *(wchar_t **)this;
    lVar8 = *(long *)(this + 0x10) - (long)pwVar5 >> 2;
    if ((param_3 < pwVar3) || (pwVar5 < param_2)) {
      if (lVar6 + 1 <= lVar8) {
        lVar8 = (long)pwVar5 - (long)param_1 >> 2;
        if (lVar8 < lVar6) {
          __n = (lVar8 + 1) * 4;
          memmove(pwVar5 + 1,param_2 + lVar8 + 1,(long)param_3 - (long)(param_2 + lVar8 + 1));
          __dest = (void *)(*(long *)(this + 8) + (lVar6 - lVar8) * 4);
          *(void **)(this + 8) = __dest;
          memmove(__dest,param_1,__n);
          *(long *)(this + 8) = *(long *)(this + 8) + ((long)pwVar5 - (long)param_1);
          if (local_8 == ___stack_chk_guard) {
LAB_053f77f4:
            memmove(param_1,param_2,__n);
            return;
          }
        }
        else {
          memmove(pwVar5 + 1,pwVar5 + (1 - lVar6),__n);
          *(size_t *)(this + 8) = *(long *)(this + 8) + __n;
          memmove((void *)((long)param_1 + __n),param_1,((lVar8 + 1) - lVar6) * 4);
          if (local_8 == ___stack_chk_guard) goto LAB_053f77f4;
        }
        goto LAB_053f7868;
      }
      lVar7 = (long)pwVar5 - (long)pwVar3 >> 2;
LAB_053f7880:
      local_18 = FUN_053f7038((*(long *)(this + 0x10) - (long)pwVar3 >> 2) + -1);
      local_10 = lVar7 + lVar6;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      lVar6 = *puVar2 + 1;
    }
    else {
      lVar7 = (long)pwVar5 - (long)pwVar3 >> 2;
      if (lVar8 < lVar6 + 1) goto LAB_053f7880;
      lVar6 = lVar7 + 1 + lVar6;
    }
    pwVar3 = (wchar_t *)FUN_053f704c(lVar6);
    pwVar5 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,param_1,pwVar3);
    pwVar5 = CharStringUninitializedCopy<wchar_t>(param_2,param_3,pwVar5);
    pwVar5 = CharStringUninitializedCopy<wchar_t>(param_1,*(wchar_t **)(this + 8),pwVar5);
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar1 = *(undefined8 *)this;
    *pwVar5 = L'\0';
    FUN_053f7024(uVar1,uVar4);
    *(wchar_t **)this = pwVar3;
    *(wchar_t **)(this + 8) = pwVar5;
    *(wchar_t **)(this + 0x10) = pwVar3 + lVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_053f7868:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<wchar_t, eastl::allocator>::insert(unsigned long, wchar_t const*) */

basic_string<wchar_t,eastl::allocator> * __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::insert
          (basic_string<wchar_t,eastl::allocator> *this,ulong param_1,wchar_t *param_2)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_2);
  insert(this,(wchar_t *)(*(long *)this + param_1 * 4),param_2,param_2 + lVar1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::allocator>::insert(wchar_t*, unsigned long, wchar_t) */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::insert
          (basic_string<wchar_t,eastl::allocator> *this,wchar_t *param_1,ulong param_2,
          wchar_t param_3)

{
  ulong *puVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 0) {
    lVar6 = *(long *)(this + 8);
    if (param_2 + 1 <= (ulong)(*(long *)(this + 0x10) - lVar6 >> 2)) {
      uVar7 = lVar6 - (long)param_1 >> 2;
      if (uVar7 < param_2) {
        CharStringUninitializedFillN((wchar_t *)(lVar6 + 4),(param_2 - uVar7) - 1,param_3);
        pwVar2 = (wchar_t *)(*(long *)(this + 8) + (param_2 - uVar7) * 4);
        *(wchar_t **)(this + 8) = pwVar2;
        CharStringUninitializedCopy<wchar_t>(param_1,(wchar_t *)(lVar6 + 4),pwVar2);
        lVar8 = ___stack_chk_guard;
        *(long *)(this + 8) = *(long *)(this + 8) + (lVar6 - (long)param_1);
        if (local_8 == lVar8) {
          CharTypeAssignN(param_1,uVar7 + 1,param_3);
          return;
        }
      }
      else {
        CharStringUninitializedCopy<wchar_t>
                  ((wchar_t *)(lVar6 + param_2 * -4 + 4),(wchar_t *)(lVar6 + 4),
                   (wchar_t *)(lVar6 + 4));
        *(ulong *)(this + 8) = *(long *)(this + 8) + param_2 * 4;
        memmove(param_1 + param_2,param_1,((uVar7 - param_2) + 1) * 4);
        if (local_8 == ___stack_chk_guard) {
          CharTypeAssignN(param_1,param_2,param_3);
          return;
        }
      }
      goto LAB_053f7b28;
    }
    lVar8 = *(long *)this;
    local_18 = FUN_053f7038((*(long *)(this + 0x10) - lVar8 >> 2) + -1);
    local_10 = param_2 + (lVar6 - lVar8 >> 2);
    puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
    uVar7 = *puVar1;
    pwVar2 = (wchar_t *)FUN_053f704c(uVar7 + 1);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,param_1,pwVar2);
    pwVar3 = (wchar_t *)CharStringUninitializedFillN(pwVar3,param_2,param_3);
    pwVar3 = CharStringUninitializedCopy<wchar_t>(param_1,*(wchar_t **)(this + 8),pwVar3);
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar4 = *(undefined8 *)this;
    *pwVar3 = L'\0';
    FUN_053f7024(uVar4,uVar5);
    *(wchar_t **)this = pwVar2;
    *(wchar_t **)(this + 8) = pwVar3;
    *(wchar_t **)(this + 0x10) = pwVar2 + uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_053f7b28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<wchar_t, eastl::allocator>::insert(unsigned long, unsigned long, wchar_t) */

basic_string<wchar_t,eastl::allocator> * __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::insert
          (basic_string<wchar_t,eastl::allocator> *this,ulong param_1,ulong param_2,wchar_t param_3)

{
  insert(this,(wchar_t *)(*(long *)this + param_1 * 4),param_2,param_3);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<wchar_t, eastl::allocator>::append(wchar_t const*, wchar_t const*) */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::append
          (basic_string<wchar_t,eastl::allocator> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != param_2) {
    lVar7 = (long)param_2 - (long)param_1;
    uVar6 = (*(long *)(this + 8) - *(long *)this >> 2) + (lVar7 >> 2);
    if ((*(long *)(this + 0x10) - *(long *)this >> 2) - 1U < uVar6) {
      local_18 = FUN_053f7038();
      local_10 = uVar6;
      puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
      uVar6 = *puVar2;
      pwVar1 = (wchar_t *)FUN_053f704c(uVar6 + 1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>
                         (*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
      pwVar3 = CharStringUninitializedCopy<wchar_t>(param_1,param_2,pwVar3);
      uVar5 = *(undefined8 *)(this + 0x10);
      uVar4 = *(undefined8 *)this;
      *pwVar3 = L'\0';
      FUN_053f7024(uVar4,uVar5);
      *(wchar_t **)this = pwVar1;
      *(wchar_t **)(this + 8) = pwVar3;
      *(wchar_t **)(this + 0x10) = pwVar1 + uVar6 + 1;
    }
    else {
      CharStringUninitializedCopy<wchar_t>(param_1 + 1,param_2,(wchar_t *)(*(long *)(this + 8) + 4))
      ;
      pwVar1 = *(wchar_t **)(this + 8);
      *(undefined4 *)((long)pwVar1 + lVar7) = 0;
      *pwVar1 = *param_1;
      *(long *)(this + 8) = (long)pwVar1 + lVar7;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<wchar_t, eastl::allocator>::assign(wchar_t const*, wchar_t const*) */

basic_string<wchar_t,eastl::allocator> * __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::assign
          (basic_string<wchar_t,eastl::allocator> *this,wchar_t *param_1,wchar_t *param_2)

{
  void *__dest;
  size_t __n;
  
  __dest = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if ((ulong)(*(long *)(this + 8) - (long)__dest >> 2) < (ulong)((long)__n >> 2)) {
    memmove(__dest,param_1,*(long *)(this + 8) - (long)__dest);
    append(this,(wchar_t *)((long)param_1 + (*(long *)(this + 8) - *(long *)this)),param_2);
    return this;
  }
  memmove(__dest,param_1,__n);
  FUN_053f6fb8(this + 8,*(long *)this + __n,*(undefined8 *)(this + 8));
  return this;
}


/* eastl::basic_string<wchar_t, eastl::allocator>::TEMPNAMEPLACEHOLDERVALUE(wchar_t const*) */

void __thiscall
eastl::basic_string<wchar_t,eastl::allocator>::operator=
          (basic_string<wchar_t,eastl::allocator> *this,wchar_t *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<wchar_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::assign(wchar_t const*) */

void __thiscall
eastl::
basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::assign(basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar_t *param_1)

{
  long lVar1;
  
  lVar1 = CharStrlen(param_1);
  assign(this,param_1,param_1 + lVar1);
  return;
}


/* eastl::basic_string<char32_t, eastl::fixed_vector_allocator<4ul, 96ul, 4ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::append(char32_t const*, unsigned long) */

void __thiscall
eastl::
basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::append(basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
         *this,wchar32 *param_1,ulong param_2)

{
  append(this,param_1,param_1 + param_2);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 96ul, 1ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::find(char const*, unsigned long) const */

void __thiscall
eastl::
basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
::find(basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
       *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_053fadfc(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::DeallocateSelf() */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
DeallocateSelf(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
               *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_0540ef40();
    return;
  }
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::~basic_string() */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
~basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_0540ef40();
    return;
  }
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::AllocateSelf() */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
AllocateSelf(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
             *this)

{
  long lVar1;
  
  lVar1 = FUN_0540ec9c();
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1 + 1;
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::basic_string(eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
basic_string(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
             *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)(this + 0x18),param_1)
  ;
  AllocateSelf(this);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::find_first_not_of(char const*, unsigned long) const */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
find_first_not_of(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
                  *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = CharStrlen(param_1);
  FUN_05410d70(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1,param_2,uVar1);
  return;
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::set_capacity(unsigned long) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
set_capacity(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
             *this,ulong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (param_1 == 0xffffffffffffffff) {
    param_1 = *(long *)(this + 8) - lVar3;
  }
  else if (param_1 < (ulong)(*(long *)(this + 8) - lVar3)) {
    *(ulong *)(this + 8) = lVar3 + param_1;
  }
  if ((*(long *)(this + 0x10) - lVar3) - 1U != param_1) {
    if (param_1 == 0) {
      DeallocateSelf(this);
      AllocateSelf(this);
      return;
    }
    pwVar1 = operator_new__(param_1 + 1);
    pwVar2 = CharStringUninitializedCopy<wchar_t>(*(wchar_t **)this,*(wchar_t **)(this + 8),pwVar1);
    *(undefined1 *)pwVar2 = 0;
    DeallocateSelf(this);
    *(wchar_t **)this = pwVar1;
    *(wchar_t **)(this + 8) = pwVar2;
    *(ulong *)(this + 0x10) = (long)pwVar1 + param_1 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::reserve(unsigned long) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
reserve(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
        *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  lVar2 = *(long *)this;
  local_8 = ___stack_chk_guard;
  local_10 = *(long *)(this + 8) - lVar2;
  local_18 = param_1;
  puVar1 = max_alt<unsigned_long>(&local_18,&local_10);
  local_18 = *puVar1;
  if ((ulong)(*(long *)(this + 0x10) - lVar2) <= local_18) {
    set_capacity(this,local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::append(unsigned long, char) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
append(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
       *this,ulong param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_1 + (*(long *)(this + 8) - *(long *)this);
  if ((*(long *)(this + 0x10) - *(long *)this) - 1U < uVar1) {
    local_18 = FUN_0540ee90();
    local_10 = uVar1;
    puVar3 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar3);
  }
  if (param_1 != 0) {
    CharStringUninitializedFillN((char *)(*(long *)(this + 8) + 1),param_1 - 1,param_2);
    **(char **)(this + 8) = param_2;
    lVar2 = *(long *)(this + 8);
    *(ulong *)(this + 8) = lVar2 + param_1;
    *(undefined1 *)(lVar2 + param_1) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 513ul, 1ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
resize(basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
       *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this;
  if (param_1 < uVar1) {
    FUN_0540ede0(this + 8,*(long *)this + param_1);
    return;
  }
  if (param_1 <= uVar1) {
    return;
  }
  append(this,param_1 - uVar1,'\0');
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::push_back(char16_t) */

void __thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::push_back(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
            *this,wchar16 param_1)

{
  wchar16 *pwVar1;
  ulong *puVar2;
  wchar16 *pwVar3;
  long lVar4;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  pwVar3 = *(wchar16 **)(this + 8);
  local_8 = ___stack_chk_guard;
  pwVar1 = pwVar3 + 1;
  if (pwVar1 == *(wchar16 **)(this + 0x10)) {
    lVar4 = *(long *)this;
    local_18 = FUN_0540eea4(((long)pwVar1 - lVar4 >> 1) + -1);
    local_10 = ((long)pwVar3 - lVar4 >> 1) + 1;
    puVar2 = max_alt<unsigned_long>(&local_18,&local_10);
    reserve(this,*puVar2);
    pwVar3 = *(wchar16 **)(this + 8);
    pwVar1 = pwVar3 + 1;
  }
  *(wchar16 **)(this + 8) = pwVar1;
  *pwVar3 = param_1;
  pwVar3[1] = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::basic_string<char16_t, eastl::fixed_vector_allocator<2ul, 129ul, 2ul, 0ul, true,
   eastl::allocator> >::TEMPNAMEPLACEHOLDERVALUE(char16_t) */

basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>> *
__thiscall
eastl::basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
::operator+=(basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
             *this,wchar16 param_1)

{
  push_back(this,param_1);
  return this;
}

