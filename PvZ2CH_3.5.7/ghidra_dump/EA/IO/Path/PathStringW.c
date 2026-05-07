// Class: EA::IO::Path::PathStringW


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathStringW::PathStringW() */

void __thiscall EA::IO::Path::PathStringW::PathStringW(PathStringW *this)

{
  PathStringW *pPVar1;
  long lVar2;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathStringW **)(this + 8) = pPVar1;
  lVar2 = ___stack_chk_guard;
  *(PathStringW **)(this + 0x10) = this + 0x1b0;
  *(PathStringW **)this = pPVar1;
  *(undefined4 *)(this + 0x30) = 0;
  if (lStack_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathStringW::PathStringW(wchar_t const*, wchar_t const*) */

void __thiscall
EA::IO::Path::PathStringW::PathStringW(PathStringW *this,wchar_t *param_1,wchar_t *param_2)

{
  PathStringW *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathStringW **)(this + 8) = pPVar1;
  *(PathStringW **)(this + 0x10) = this + 0x1b0;
  *(PathStringW **)this = pPVar1;
  *(undefined4 *)(this + 0x30) = 0;
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1,param_2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathStringW::PathStringW(wchar_t const*) */

void __thiscall EA::IO::Path::PathStringW::PathStringW(PathStringW *this,wchar_t *param_1)

{
  PathStringW *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  *(PathStringW **)(this + 8) = pPVar1;
  *(PathStringW **)this = pPVar1;
  *(PathStringW **)(this + 0x10) = this + 0x1b0;
  *(undefined4 *)(this + 0x30) = 0;
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,param_1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::PathStringW::PathStringW(EA::IO::Path::PathStringW const&) */

void __thiscall EA::IO::Path::PathStringW::PathStringW(PathStringW *this,PathStringW *param_1)

{
  PathStringW *pPVar1;
  fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
  afStack_20 [24];
  long lStack_8;
  
  pPVar1 = this + 0x30;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  fixed_vector_allocator(afStack_20,pPVar1);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::basic_string((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)this,(fixed_vector_allocator *)afStack_20);
  eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>::
  copy_overflow_allocator
            ((fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>
              *)(this + 0x18),(fixed_vector_allocator *)(param_1 + 0x18));
  *(PathStringW **)(this + 8) = pPVar1;
  *(PathStringW **)this = pPVar1;
  *(PathStringW **)(this + 0x10) = this + 0x1b0;
  *(undefined4 *)(this + 0x30) = 0;
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,*(wchar_t **)param_1,*(wchar_t **)(param_1 + 8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::PathStringW::TEMPNAMEPLACEHOLDERVALUE(EA::IO::Path::PathStringW const&) */

PathStringW * __thiscall
EA::IO::Path::PathStringW::operator=(PathStringW *this,PathStringW *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)param_1;
  pwVar1 = (wchar_t *)FUN_053496a0(uVar3);
  uVar2 = FUN_053496a4(uVar3,*(undefined8 *)(param_1 + 8));
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,pwVar1,uVar2);
  return this;
}


/* EA::IO::Path::PathStringW::PathStringW(EA::IO::Path::PathString32 const&) */

void __thiscall EA::IO::Path::PathStringW::PathStringW(PathStringW *this,PathString32 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  eastl::fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator>::fixed_string
            ((fixed_string<wchar_t,96,true,EA::Allocator::EAIOPathStringCoreAllocator> *)this);
  uVar2 = FUN_05349ab4(*(undefined8 *)param_1);
  iVar1 = FUN_0534966c(0,uVar2,0);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)this,(long)iVar1);
  uVar2 = FUN_05349ab8(*(undefined8 *)this);
  uVar3 = FUN_05349ab4(*(undefined8 *)param_1);
  FUN_0534966c(uVar2,uVar3,(long)iVar1 + 1);
  return;
}

