// Class: eastl::fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char, 96, true, EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string()
    */

void __thiscall
eastl::fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this)

{
  fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  this[0x30] = (fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator>)0x0;
  *(fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x90;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this)

{
  fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0xf0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<wchar_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this)

{
  fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined4 *)(this + 0x30) = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char32_t, 20, true, EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
          (fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)this = pfVar1;
  *(undefined4 *)(this + 0x30) = 0;
  *(fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 0x10) =
       this + 0x80;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 20, true, EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
          (fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 0x10) =
       this + 0x58;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char, 20, true, EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
          (fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)this = pfVar1;
  this[0x30] = (fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>)0x0;
  *(fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 0x10) = this + 0x44;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<wchar_t, 20, true, EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
          (fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)this = pfVar1;
  *(undefined4 *)(this + 0x30) = 0;
  *(fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> **)(this + 0x10) =
       this + 0x80;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_string<char, 20, true, EA::Allocator::EAIOEASTLCoreAllocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::~fixed_string
          (fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  if (1 < (long)(*(long *)(this + 0x10) - *(ulong *)this)) {
    basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::DoFree((char *)this,*(ulong *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(char const*) */

void __thiscall
eastl::fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,char *param_1
          )

{
  fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1;
  *(fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  this[0x30] = (fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator>)0x0;
  *(fixed_string<char,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x90;
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::~fixed_string
          (fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 4) {
    return;
  }
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::DoFree((wchar16 *)this,*(ulong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(char16_t const*) */

void __thiscall
eastl::fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          wchar16 *param_1)

{
  fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0xf0;
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(char16_t const*, unsigned long) */

void __thiscall
eastl::fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          wchar16 *param_1,ulong param_2)

{
  fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0xf0;
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          fixed_string *param_1)

{
  fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  copy_overflow_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),(fixed_vector_allocator *)(param_1 + 0x18));
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0xf0;
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,*(wchar16 **)param_1,*(wchar16 **)(param_1 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(eastl::basic_string<char16_t,
   eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> > const&, unsigned long, unsigned long) */

void __thiscall
eastl::fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(fixed_string<char16_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0xf0;
  FUN_05342670(this,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_string<char32_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::~fixed_string
          (fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 8) {
    return;
  }
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::DoFree((wchar32 *)this,*(ulong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<wchar_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(wchar_t const*, wchar_t const*) */

void __thiscall
eastl::fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          wchar_t *param_1,wchar_t *param_2)

{
  fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined4 *)(this + 0x30) = 0;
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<wchar_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(wchar_t const*) */

void __thiscall
eastl::fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          wchar_t *param_1)

{
  fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(undefined4 *)(this + 0x30) = 0;
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<wchar_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(eastl::fixed_string<wchar_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator> const&) */

void __thiscall
eastl::fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          fixed_string *param_1)

{
  fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  copy_overflow_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),(fixed_vector_allocator *)(param_1 + 0x18));
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(undefined4 *)(this + 0x30) = 0;
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,*(wchar_t **)param_1,*(wchar_t **)(param_1 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char32_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this)

{
  fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined4 *)(this + 0x30) = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char32_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(char32_t const*) */

void __thiscall
eastl::fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          wchar32 *param_1)

{
  fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(undefined4 *)(this + 0x30) = 0;
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_string<char16_t, 48, true, eastl::allocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char16_t,48,true,eastl::allocator>::~fixed_string
          (fixed_string<char16_t,48,true,eastl::allocator> *this)

{
  if (*(long *)(this + 0x10) - *(long *)this < 4) {
    return;
  }
  FUN_0535a79c();
  return;
}


/* eastl::fixed_string<char16_t, 129, true, eastl::allocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char16_t,129,true,eastl::allocator>::~fixed_string
          (fixed_string<char16_t,129,true,eastl::allocator> *this)

{
  if (*(long *)(this + 0x10) - *(long *)this < 4) {
    return;
  }
  FUN_0535a7ec();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 48, true, eastl::allocator>::fixed_string(char16_t const*) */

void __thiscall
eastl::fixed_string<char16_t,48,true,eastl::allocator>::fixed_string
          (fixed_string<char16_t,48,true,eastl::allocator> *this,wchar16 *param_1)

{
  fixed_string<char16_t,48,true,eastl::allocator> *pfVar1;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>::
  basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                *)this,(fixed_vector_allocator *)afStack_18);
  *(fixed_string<char16_t,48,true,eastl::allocator> **)(this + 8) = pfVar1;
  *(fixed_string<char16_t,48,true,eastl::allocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x28) = 0;
  *(fixed_string<char16_t,48,true,eastl::allocator> **)(this + 0x10) = this + 0x88;
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>::
  append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,48ul,2ul,0ul,true,eastl::allocator>>
          *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char16_t, 129, true, eastl::allocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char16_t,129,true,eastl::allocator>::fixed_string
          (fixed_string<char16_t,129,true,eastl::allocator> *this)

{
  fixed_string<char16_t,129,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>::
  basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                *)this,(fixed_vector_allocator *)afStack_18);
  *(fixed_string<char16_t,129,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char16_t,129,true,eastl::allocator> **)(this + 0x10) = this + 0x12a;
  *(fixed_string<char16_t,129,true,eastl::allocator> **)this = pfVar1;
  *(undefined2 *)(this + 0x28) = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_string<char, 4096, true, eastl::allocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char,4096,true,eastl::allocator>::~fixed_string
          (fixed_string<char,4096,true,eastl::allocator> *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_05368718();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char, 4096, true, eastl::allocator>::fixed_string() */

void __thiscall
eastl::fixed_string<char,4096,true,eastl::allocator>::fixed_string
          (fixed_string<char,4096,true,eastl::allocator> *this)

{
  fixed_string<char,4096,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
  basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
                *)this,(fixed_vector_allocator *)afStack_18);
  *(fixed_string<char,4096,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_string<char,4096,true,eastl::allocator> **)this = pfVar1;
  *(fixed_string<char,4096,true,eastl::allocator> **)(this + 0x10) = this + 0x1028;
  this[0x28] = (fixed_string<char,4096,true,eastl::allocator>)0x0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char32_t, 96, true,
   EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string(char32_t const*, unsigned long) */

void __thiscall
eastl::fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
          (fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *this,
          wchar32 *param_1,ulong param_2)

{
  fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *pfVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pfVar1);
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 8) = pfVar1
  ;
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)(this + 0x10) =
       this + 0x1b0;
  *(fixed_string<char32_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> **)this = pfVar1;
  *(undefined4 *)(this + 0x30) = 0;
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_string<char, 513, true, eastl::allocator>::~fixed_string() */

void __thiscall
eastl::fixed_string<char,513,true,eastl::allocator>::~fixed_string
          (fixed_string<char,513,true,eastl::allocator> *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_0540ef40();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_string<char, 513, true, eastl::allocator>::fixed_string(unsigned long, char const&)
    */

void __thiscall
eastl::fixed_string<char,513,true,eastl::allocator>::fixed_string
          (fixed_string<char,513,true,eastl::allocator> *this,ulong param_1,char *param_2)

{
  fixed_string<char,513,true,eastl::allocator> *pfVar1;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
  basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
                *)this,(fixed_vector_allocator *)afStack_18);
  *(fixed_string<char,513,true,eastl::allocator> **)(this + 8) = pfVar1;
  *(fixed_string<char,513,true,eastl::allocator> **)this = pfVar1;
  *(fixed_string<char,513,true,eastl::allocator> **)(this + 0x10) = this + 0x229;
  this[0x28] = (fixed_string<char,513,true,eastl::allocator>)0x0;
  basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::append
            ((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)this,param_1,*param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

