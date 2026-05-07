// Class: EA::StdC::Internal::Strlcpy2Class<eastl::basic_string<char16_t,eastl::allocator>,char16_t,wchar_t>


/* EA::StdC::Internal::Strlcpy2Class<eastl::basic_string<char16_t, eastl::allocator>, char16_t,
   wchar_t>::Strlcpy2Impl(eastl::basic_string<char16_t, eastl::allocator>&, wchar_t const*, unsigned
   long) */

undefined8
EA::StdC::Internal::Strlcpy2Class<eastl::basic_string<char16_t,eastl::allocator>,char16_t,wchar_t>::
Strlcpy2Impl(basic_string *param_1,wchar_t *param_2,ulong param_3)

{
  int iVar1;
  wchar16 *pwVar2;
  long lVar3;
  undefined8 uVar4;
  
  pwVar2 = (wchar16 *)FUN_05357138(*(undefined8 *)param_1);
  iVar1 = Strlcpy(pwVar2,param_2,0,param_3);
  if (-1 < iVar1) {
    eastl::basic_string<char16_t,eastl::allocator>::resize
              ((basic_string<char16_t,eastl::allocator> *)param_1,(long)iVar1);
    uVar4 = *(undefined8 *)param_1;
    pwVar2 = (wchar16 *)FUN_05357138(uVar4);
    lVar3 = FUN_05357114(uVar4,*(undefined8 *)(param_1 + 8));
    Strlcpy(pwVar2,param_2,lVar3 + 1,param_3);
    return 1;
  }
  FUN_05357120(*(undefined8 *)param_1,param_1 + 8);
  return 0;
}


/* EA::StdC::Internal::Strlcpy2Class<EA::IO::Path::PathString8, char, wchar_t
   const>::Strlcpy2Impl(EA::IO::Path::PathString8&, wchar_t const*, unsigned long) */

undefined8
EA::StdC::Internal::Strlcpy2Class<EA::IO::Path::PathString8,char,wchar_t_const>::Strlcpy2Impl
          (PathString8 *param_1,wchar_t *param_2,ulong param_3)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  pcVar2 = (char *)FUN_053f7074(*(undefined8 *)param_1);
  iVar1 = Strlcpy(pcVar2,param_2,0,param_3);
  if (-1 < iVar1) {
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_1,(long)iVar1);
    uVar4 = *(undefined8 *)param_1;
    pcVar2 = (char *)FUN_053f7074(uVar4);
    lVar3 = FUN_053f6f84(uVar4,*(undefined8 *)(param_1 + 8));
    Strlcpy(pcVar2,param_2,lVar3 + 1,param_3);
    return 1;
  }
  FUN_053f7054(param_1,param_1 + 8);
  return 0;
}

