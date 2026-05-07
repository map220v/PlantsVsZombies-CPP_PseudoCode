// Class: EA::IO::Path::PathString16


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString16::PathString16() */

void __thiscall EA::IO::Path::PathString16::PathString16(PathString16 *this)

{
  PathString16 *pPVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString16 **)(this + 8) = pPVar1;
  lVar2 = ___stack_chk_guard;
  *(PathString16 **)this = pPVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(PathString16 **)(this + 0x10) = this + 0xf0;
  if (lStack_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathString16::~PathString16() */

void __thiscall EA::IO::Path::PathString16::~PathString16(PathString16 *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 4) {
    return;
  }
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
  ::DoFree((wchar16 *)this,*(ulong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString16::PathString16(char16_t const*) */

void __thiscall EA::IO::Path::PathString16::PathString16(PathString16 *this,wchar16 *param_1)

{
  PathString16 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString16 **)(this + 8) = pPVar1;
  *(PathString16 **)this = pPVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(PathString16 **)(this + 0x10) = this + 0xf0;
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString16::PathString16(char16_t const*, unsigned long) */

void __thiscall
EA::IO::Path::PathString16::PathString16(PathString16 *this,wchar16 *param_1,ulong param_2)

{
  PathString16 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString16 **)(this + 8) = pPVar1;
  *(PathString16 **)this = pPVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(PathString16 **)(this + 0x10) = this + 0xf0;
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1,param_2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString16::PathString16(EA::IO::Path::PathString16 const&) */

void __thiscall EA::IO::Path::PathString16::PathString16(PathString16 *this,PathString16 *param_1)

{
  PathString16 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  copy_overflow_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),(fixed_vector_allocator *)(param_1 + 0x18));
  *(PathString16 **)(this + 8) = pPVar1;
  *(PathString16 **)this = pPVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(PathString16 **)(this + 0x10) = this + 0xf0;
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,*(wchar16 **)param_1,*(wchar16 **)(param_1 + 8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString16::PathString16(EA::IO::Path::PathString16 const&, unsigned long,
   unsigned long) */

void __thiscall
EA::IO::Path::PathString16::PathString16
          (PathString16 *this,PathString16 *param_1,ulong param_2,ulong param_3)

{
  PathString16 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString16 **)(this + 8) = pPVar1;
  *(PathString16 **)this = pPVar1;
  *(undefined2 *)(this + 0x30) = 0;
  *(PathString16 **)(this + 0x10) = this + 0xf0;
  FUN_05342670(this,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathString16::TEMPNAMEPLACEHOLDERVALUE(char16_t const*) */

PathString16 * __thiscall EA::IO::Path::PathString16::operator=(PathString16 *this,wchar16 *param_1)

{
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  return this;
}


/* EA::IO::Path::PathString16::TEMPNAMEPLACEHOLDERVALUE(char16_t const*) */

PathString16 * __thiscall
EA::IO::Path::PathString16::operator+=(PathString16 *this,wchar16 *param_1)

{
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::operator+=((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *)this,param_1);
  return this;
}

