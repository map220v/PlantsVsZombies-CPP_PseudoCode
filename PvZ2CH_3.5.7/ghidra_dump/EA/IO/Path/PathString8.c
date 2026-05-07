// Class: EA::IO::Path::PathString8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString8::PathString8() */

void __thiscall EA::IO::Path::PathString8::PathString8(PathString8 *this)

{
  PathString8 *pPVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString8 **)(this + 8) = pPVar1;
  lVar2 = ___stack_chk_guard;
  *(PathString8 **)this = pPVar1;
  this[0x30] = (PathString8)0x0;
  *(PathString8 **)(this + 0x10) = this + 0x90;
  if (lStack_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathString8::~PathString8() */

void __thiscall EA::IO::Path::PathString8::~PathString8(PathString8 *this)

{
  if (1 < (long)(*(long *)(this + 0x10) - *(ulong *)this)) {
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::DoFree((char *)this,*(ulong *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathString8::PathString8(char const*) */

void __thiscall EA::IO::Path::PathString8::PathString8(PathString8 *this,char *param_1)

{
  PathString8 *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathString8 **)(this + 8) = pPVar1;
  *(PathString8 **)this = pPVar1;
  this[0x30] = (PathString8)0x0;
  *(PathString8 **)(this + 0x10) = this + 0x90;
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathString8::TEMPNAMEPLACEHOLDERVALUE(char const*) */

PathString8 * __thiscall EA::IO::Path::PathString8::operator+=(PathString8 *this,char *param_1)

{
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::operator+=((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                *)this,param_1);
  return this;
}


/* EA::IO::Path::PathString8::TEMPNAMEPLACEHOLDERVALUE(char const*) */

PathString8 * __thiscall EA::IO::Path::PathString8::operator=(PathString8 *this,char *param_1)

{
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::assign((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  return this;
}

