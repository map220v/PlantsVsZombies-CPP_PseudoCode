// Class: EA::StdC::Internal::Strlcpy1Class<eastl::fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>


/* EA::StdC::Internal::Strlcpy1Class<eastl::fixed_string<char32_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::Strlcpy1Impl(eastl::fixed_string<char32_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>&, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> const&) */

undefined8
EA::StdC::Internal::
Strlcpy1Class<eastl::fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::Strlcpy1Impl(fixed_string *param_1,fixed_string *param_2)

{
  int iVar1;
  wchar32 *pwVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pwVar2 = (wchar32 *)FUN_0533e8ec(*(undefined8 *)param_1);
  uVar6 = *(undefined8 *)param_2;
  pcVar3 = (char *)FUN_0533e7cc(uVar6);
  uVar4 = FUN_0533e7d0(uVar6,*(undefined8 *)(param_2 + 8));
  iVar1 = Strlcpy(pwVar2,pcVar3,0,uVar4);
  if (-1 < iVar1) {
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::resize((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
              *)param_1,(long)iVar1);
    uVar7 = *(undefined8 *)param_1;
    pwVar2 = (wchar32 *)FUN_0533e8ec(uVar7);
    uVar6 = *(undefined8 *)param_2;
    pcVar3 = (char *)FUN_0533e7cc(uVar6);
    lVar5 = FUN_0533e7d8(uVar7,*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_0533e7d0(uVar6,*(undefined8 *)(param_2 + 8));
    Strlcpy(pwVar2,pcVar3,lVar5 + 1,uVar4);
    return 1;
  }
  FUN_0533e7e4(*(undefined8 *)param_1,param_1 + 8);
  return 0;
}


/* EA::StdC::Internal::Strlcpy1Class<eastl::fixed_string<wchar_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >::Strlcpy1Impl(eastl::fixed_string<wchar_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>&, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> const&) */

undefined8
EA::StdC::Internal::
Strlcpy1Class<eastl::fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>
::Strlcpy1Impl(fixed_string *param_1,fixed_string *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pwVar2 = (wchar_t *)FUN_0533e8e8(*(undefined8 *)param_1);
  uVar6 = *(undefined8 *)param_2;
  pcVar3 = (char *)FUN_0533e7cc(uVar6);
  uVar4 = FUN_0533e7d0(uVar6,*(undefined8 *)(param_2 + 8));
  iVar1 = Strlcpy(pwVar2,pcVar3,0,uVar4);
  if (-1 < iVar1) {
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::resize((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
              *)param_1,(long)iVar1);
    uVar7 = *(undefined8 *)param_1;
    pwVar2 = (wchar_t *)FUN_0533e8e8(uVar7);
    uVar6 = *(undefined8 *)param_2;
    pcVar3 = (char *)FUN_0533e7cc(uVar6);
    lVar5 = FUN_0533e7fc(uVar7,*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_0533e7d0(uVar6,*(undefined8 *)(param_2 + 8));
    Strlcpy(pwVar2,pcVar3,lVar5 + 1,uVar4);
    return 1;
  }
  FUN_0533e808(*(undefined8 *)param_1,param_1 + 8);
  return 0;
}

