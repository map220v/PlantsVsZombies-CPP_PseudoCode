// Class: EA::IO::Path::PathString32


/* EA::IO::Path::PathString32::~PathString32() */

void __thiscall EA::IO::Path::PathString32::~PathString32(PathString32 *this)

{
  if ((long)(*(long *)(this + 0x10) - *(ulong *)this) < 8) {
    return;
  }
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::DoFree((wchar32 *)this,*(ulong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString32::PathString32() */

void __thiscall EA::IO::Path::PathString32::PathString32(PathString32 *this)

{
  PathString32 *pPVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString32 **)(this + 8) = pPVar1;
  lVar2 = ___stack_chk_guard;
  *(PathString32 **)(this + 0x10) = this + 0x1b0;
  *(PathString32 **)this = pPVar1;
  *(undefined4 *)(this + 0x30) = 0;
  if (lStack_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathString32::TEMPNAMEPLACEHOLDERVALUE(char32_t const*) */

PathString32 * __thiscall EA::IO::Path::PathString32::operator=(PathString32 *this,wchar32 *param_1)

{
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::assign((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString32::PathString32(char32_t const*) */

void __thiscall EA::IO::Path::PathString32::PathString32(PathString32 *this,wchar32 *param_1)

{
  PathString32 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString32 **)(this + 8) = pPVar1;
  *(PathString32 **)this = pPVar1;
  *(PathString32 **)(this + 0x10) = this + 0x1b0;
  *(undefined4 *)(this + 0x30) = 0;
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathString32::TEMPNAMEPLACEHOLDERVALUE(char32_t const*) */

PathString32 * __thiscall
EA::IO::Path::PathString32::operator+=(PathString32 *this,wchar32 *param_1)

{
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::operator+=((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString32::PathString32(char32_t const*, unsigned long) */

void __thiscall
EA::IO::Path::PathString32::PathString32(PathString32 *this,wchar32 *param_1,ulong param_2)

{
  PathString32 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString32 **)(this + 8) = pPVar1;
  *(PathString32 **)(this + 0x10) = this + 0x1b0;
  *(PathString32 **)this = pPVar1;
  *(undefined4 *)(this + 0x30) = 0;
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1,param_2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

