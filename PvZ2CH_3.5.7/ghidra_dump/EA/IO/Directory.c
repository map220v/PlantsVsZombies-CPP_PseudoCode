// Class: EA::IO::Directory


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Rename(char16_t const*, char16_t const*) */

void EA::IO::Directory::Rename(wchar16 *param_1,wchar16 *param_2)

{
  int iVar1;
  char acStack_808 [1024];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(acStack_808,param_1,0x400,0xffffffffffffffff);
  StdC::Strlcpy(acStack_408,param_2,0x400,0xffffffffffffffff);
  iVar1 = rename(acStack_808,acStack_408);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* EA::IO::Directory::Rename(char const*, char const*) */

bool EA::IO::Directory::Rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = rename(param_1,param_2);
  return iVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::GetTime(char const*, EA::IO::FileTimeType) */

void EA::IO::Directory::GetTime(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  __time_t _Var4;
  __time_t _Stack_40;
  __time_t _Stack_30;
  __time_t _Stack_20;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pcVar3 = strstr(param_1,"appbundle:/");
  if (pcVar3 == param_1) {
    _Var4 = 0;
    AutoJNIEnv::AutoJNIEnv((AutoJNIEnv *)&stack0xffffffffffffff78);
    cVar1 = AssetManagerJNI::Exists((AutoJNIEnv *)&stack0xffffffffffffff78,pcVar3 + 0xb);
    if (cVar1 != '\0') {
      _Var4 = 0x4ea99bfd;
    }
    AutoJNIEnv::~AutoJNIEnv((AutoJNIEnv *)&stack0xffffffffffffff78);
  }
  else {
    iVar2 = stat(param_1,(stat *)&stack0xffffffffffffff78);
    _Var4 = 0;
    if ((((iVar2 == 0) && (_Var4 = _Stack_20, param_2 != 1)) && (_Var4 = _Stack_30, param_2 != 2))
       && (_Var4 = 0, param_2 == 4)) {
      _Var4 = _Stack_40;
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(_Var4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetTime(char const*, int, long) */

void EA::IO::Directory::SetTime(char *param_1,int param_2,long param_3)

{
  int iVar1;
  utimbuf uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18.modtime = param_3;
  if (((uint)param_2 >> 1 & 1) == 0) {
    uStack_18.modtime = File::GetTime(param_1,2);
  }
  uStack_18.actime = param_3;
  if (((uint)param_2 >> 2 & 1) == 0) {
    uStack_18.actime = File::GetTime(param_1,4);
  }
  iVar1 = utime(param_1,&uStack_18);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 == 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::GetCurrentWorkingDirectory(char16_t*, unsigned int) */

void EA::IO::Directory::GetCurrentWorkingDirectory(wchar16 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = getcwd(acStack_408,0x3fa);
  if (pcVar3 == (char *)0x0) {
    *param_1 = L'\0';
    iVar2 = 0;
  }
  else {
    iVar2 = StdC::Strlcpy(param_1,acStack_408,0x3fe,0xffffffffffffffff);
    cVar1 = Path::EnsureTrailingSeparator(param_1,(ulong)param_2);
    if (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* EA::IO::Directory::GetCurrentWorkingDirectory(char*, unsigned int) */

void EA::IO::Directory::GetCurrentWorkingDirectory(char *param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = getcwd(param_1,(ulong)param_2);
  if (pcVar1 != (char *)0x0) {
    Path::EnsureTrailingSeparator(param_1,(ulong)param_2);
    strlen(param_1);
    return;
  }
  *param_1 = '\0';
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::GetCurrentWorkingDirectory(char32_t*, unsigned int) */

void EA::IO::Directory::GetCurrentWorkingDirectory(wchar32 *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentWorkingDirectory(acStack_408,0x400);
  if (0 < iVar1) {
    uVar2 = StdC::Strlcpy(param_1,acStack_408,(ulong)param_2,0xffffffffffffffff);
    if (((int)uVar2 < (int)param_2) && (0 < (int)uVar2)) goto LAB_0533f868;
  }
  uVar2 = 0;
LAB_0533f868:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetCurrentWorkingDirectory(char16_t const*) */

void EA::IO::Directory::SetCurrentWorkingDirectory(wchar16 *param_1)

{
  int iVar1;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
  iVar1 = chdir(acStack_408);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* EA::IO::Directory::SetCurrentWorkingDirectory(char const*) */

bool EA::IO::Directory::SetCurrentWorkingDirectory(char *param_1)

{
  int iVar1;
  
  iVar1 = chdir(param_1);
  return iVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetCurrentWorkingDirectory(char32_t const*) */

void EA::IO::Directory::SetCurrentWorkingDirectory(wchar32 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
  uVar1 = 0;
  if (iVar2 - 1U < 0x3ff) {
    uVar1 = SetCurrentWorkingDirectory(acStack_408);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::GetCurrentWorkingDirectory(wchar_t*, unsigned int) */

void EA::IO::Directory::GetCurrentWorkingDirectory(wchar_t *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  char acStack_408 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = GetCurrentWorkingDirectory(acStack_408,0x400);
  if (0 < iVar1) {
    uVar2 = StdC::Strlcpy(param_1,acStack_408,(ulong)param_2,0xffffffffffffffff);
    if (((int)uVar2 < (int)param_2) && (0 < (int)uVar2)) goto LAB_0533f868;
  }
  uVar2 = 0;
LAB_0533f868:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetCurrentWorkingDirectory(wchar_t const*) */

void EA::IO::Directory::SetCurrentWorkingDirectory(wchar_t *param_1)

{
  undefined1 uVar1;
  int iVar2;
  char acStack_408 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
  uVar1 = 0;
  if (iVar2 - 1U < 0x3ff) {
    uVar1 = SetCurrentWorkingDirectory(acStack_408);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::GetTime(wchar_t const*, EA::IO::FileTimeType) */

void EA::IO::Directory::GetTime(wchar32 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  uVar1 = FUN_0533e4ec(auStack_98[0]);
  uVar1 = File::GetTime(uVar1,param_2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::GetTime(char16_t const*, EA::IO::FileTimeType) */

void EA::IO::Directory::GetTime(wchar16 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  uVar1 = FUN_0533e4ec(auStack_98[0]);
  uVar1 = File::GetTime(uVar1,param_2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetTime(wchar_t const*, int, long) */

void EA::IO::Directory::SetTime(wchar_t *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = File::SetTime(pcVar2,param_2,param_3);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetTime(char16_t const*, int, long) */

void EA::IO::Directory::SetTime(wchar16 *param_1,int param_2,long param_3)

{
  int iVar1;
  char *__file;
  utimbuf uStack_a8;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_a8.modtime = param_3;
  if (((uint)param_2 >> 1 & 1) == 0) {
    uStack_a8.modtime = File::GetTime(param_1,2);
  }
  uStack_a8.actime = param_3;
  if (((uint)param_2 >> 2 & 1) == 0) {
    uStack_a8.actime = File::GetTime(param_1,4);
  }
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  __file = (char *)FUN_0533e4ec(auStack_98[0]);
  iVar1 = utime(__file,&uStack_a8);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 == 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Remove(char16_t const*, bool) */

void EA::IO::Directory::Remove(wchar16 *param_1,bool param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_808 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    StdC::Strlcpy((wchar16 *)local_808,param_1,0x400);
    uVar5 = StdC::Strlen((wchar16 *)local_808);
    uVar1 = FUN_05342074(local_808,uVar5);
  }
  else {
    Path::PathString8::PathString8((PathString8 *)local_808);
    uVar3 = ConvertPath((PathString8 *)local_808,param_1);
    pcVar4 = (char *)FUN_0533e8f0(local_808[0]);
    Path::StripTrailingSeparator(pcVar4,uVar3 & 0xffffffff);
    pcVar4 = (char *)FUN_0533e4ec(local_808[0]);
    iVar2 = rmdir(pcVar4);
    uVar1 = iVar2 == 0;
    Path::PathString8::~PathString8((PathString8 *)local_808);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Remove(char32_t const*, bool) */

void EA::IO::Directory::Remove(wchar32 *param_1,bool param_2)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_f8[0]);
  uVar1 = Remove(pwVar2,param_2);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Remove(wchar_t const*, bool) */

void EA::IO::Directory::Remove(wchar_t *param_1,bool param_2)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 auStack_f8 [30];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)auStack_f8);
  ConvertPath((PathString16 *)auStack_f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(auStack_f8[0]);
  uVar1 = Remove(pwVar2,param_2);
  Path::PathString16::~PathString16((PathString16 *)auStack_f8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Remove(char const*, bool) */

void EA::IO::Directory::Remove(char *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  wchar16 *pwVar6;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    Path::PathString16::PathString16((PathString16 *)&local_f8);
    ConvertPath((PathString16 *)&local_f8,param_1);
    pwVar6 = (wchar16 *)FUN_0533e4f4(local_f8);
    uVar2 = Remove(pwVar6,true);
    Path::PathString16::~PathString16((PathString16 *)&local_f8);
  }
  else {
    Path::PathString8::PathString8((PathString8 *)&local_f8,param_1);
    uVar1 = local_f8;
    pcVar4 = (char *)FUN_0533e8f0(local_f8);
    uVar5 = FUN_0533e4cc(uVar1,local_f0);
    Path::StripTrailingSeparator(pcVar4,uVar5);
    pcVar4 = (char *)FUN_0533e4ec(local_f8);
    iVar3 = rmdir(pcVar4);
    uVar2 = iVar3 == 0;
    Path::PathString8::~PathString8((PathString8 *)&local_f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::IsDirectoryEmpty(char32_t const*, int, bool) */

void EA::IO::Directory::IsDirectoryEmpty(wchar32 *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  uVar2 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_0534080c(uVar2,param_2,param_3);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::IsDirectoryEmpty(wchar_t const*, int, bool) */

void EA::IO::Directory::IsDirectoryEmpty(wchar_t *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 auStack_1b8 [54];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)auStack_1b8);
  ConvertPath((PathStringW *)auStack_1b8,param_1);
  uVar2 = FUN_0533e4f0(auStack_1b8[0]);
  uVar1 = FUN_0534080c(uVar2,param_2,param_3);
  Path::PathString32::~PathString32((PathString32 *)auStack_1b8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::IsDirectoryEmpty(char16_t const*, int, bool) */

void EA::IO::Directory::IsDirectoryEmpty(wchar16 *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  uVar2 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_0534080c(uVar2,param_2,param_3);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::IsDirectoryEmpty(char const*, int, bool) */

void EA::IO::Directory::IsDirectoryEmpty(char *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  uVar2 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_0534080c(uVar2,param_2,param_3);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Exists(char16_t const*) */

void EA::IO::Directory::Exists(wchar16 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  long lVar8;
  DirectoryIterator aDStack_808 [32];
  undefined1 auStack_7e8 [128];
  long local_768;
  long local_760 [53];
  undefined8 local_5b8 [54];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar16 *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (*param_1 != L'\0') {
      uVar2 = StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
      if (uVar2 < 0x400) {
        pcVar4 = strstr(acStack_408,"appbundle:/");
        if (acStack_408 == pcVar4) {
          DirectoryIterator::DirectoryIterator(aDStack_808);
          eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::list
                    ((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *
                     )auStack_7e8);
          Path::PathStringW::PathStringW((PathStringW *)&local_768);
          ConvertPath((PathStringW *)&local_768,param_1);
          Path::EnsureTrailingSeparator((PathStringW *)&local_768);
          pwVar5 = (wchar_t *)FUN_0533e4f0(local_768);
          pwVar5 = (wchar_t *)Path::FindComponentRvs(pwVar5,(wchar_t *)0x0);
          Path::PathStringW::PathStringW((PathStringW *)local_5b8,pwVar5);
          uVar6 = FUN_0533e504(local_760[0]);
          FUN_0533e508(local_760,pwVar5,uVar6);
          pwVar5 = (wchar_t *)FUN_0533e4f0(local_768);
          pwVar7 = (wchar_t *)FUN_0533e4f0(local_5b8[0]);
          lVar8 = DirectoryIterator::Read(aDStack_808,pwVar5,(list *)auStack_7e8,pwVar7,1,1,true);
          bVar1 = lVar8 != 0;
          Path::PathString32::~PathString32((PathString32 *)local_5b8);
          Path::PathString32::~PathString32((PathString32 *)&local_768);
          eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::~list
                    ((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *
                     )auStack_7e8);
          goto LAB_05343810;
        }
        iVar3 = stat(acStack_408,(stat *)auStack_7e8);
        if (iVar3 == 0) {
          bVar1 = (auStack_7e8._16_4_ & 0xf000) == 0x4000;
          goto LAB_05343810;
        }
      }
      bVar1 = false;
    }
  }
LAB_05343810:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Exists(char const*) */

void EA::IO::Directory::Exists(char *param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  wchar16 *pwVar4;
  undefined1 auStack_178 [128];
  long local_f8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*param_1 != '\0') {
      pcVar3 = strstr(param_1,"appbundle:/");
      if (pcVar3 == param_1) {
        Path::PathString16::PathString16((PathString16 *)&local_f8);
        ConvertPath((PathString16 *)&local_f8,pcVar3);
        pwVar4 = (wchar16 *)FUN_0533e4f4(local_f8);
        uVar1 = Exists(pwVar4);
        Path::PathString16::~PathString16((PathString16 *)&local_f8);
      }
      else {
        iVar2 = stat(param_1,(stat *)auStack_178);
        if ((iVar2 == 0) || (iVar2 = stat(param_1,(stat *)auStack_178), iVar2 == 0)) {
          uVar1 = (auStack_178._16_4_ & 0xf000) == 0x4000;
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Exists(char32_t const*) */

void EA::IO::Directory::Exists(wchar32 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = Exists(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Exists(wchar_t const*) */

void EA::IO::Directory::Exists(wchar_t *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = Exists(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Create(char16_t const*) */

void EA::IO::Directory::Create(wchar16 *param_1)

{
  uint uVar1;
  char cVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  long lVar5;
  undefined8 uVar6;
  wchar16 *pwVar7;
  undefined8 local_8f8;
  undefined8 local_8f0;
  wchar16 awStack_808 [1024];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  if (*param_1 != L'\0') {
    pwVar7 = (wchar16 *)0x0;
    Path::PathString16::PathString16((PathString16 *)&local_8f8,param_1);
    Path::EnsureTrailingSeparator((PathString16 *)&local_8f8);
    pwVar3 = (wchar16 *)FUN_0533e568(local_8f8);
    pwVar4 = (wchar16 *)FUN_0533e56c(local_8f0);
    for (pwVar3 = (wchar16 *)Path::GetPathComponentEnd(pwVar3,pwVar4,1);
        pwVar4 = (wchar16 *)FUN_0533e56c(local_8f0), uVar6 = local_8f8, pwVar3 != pwVar4;
        pwVar3 = (wchar16 *)Path::GetPathComponentEnd(pwVar3,pwVar4,1)) {
      lVar5 = FUN_0533e568(local_8f8);
      uVar1 = (int)((long)pwVar3 - lVar5 >> 1) + 1;
      if (0x3ff < uVar1) {
LAB_05344068:
        uVar6 = 0;
        if (pwVar7 == (wchar16 *)0x0) goto LAB_0534405c;
        pwVar3 = (wchar16 *)FUN_0533e4f4(local_8f8);
        lVar5 = FUN_0533e568(local_8f8);
        StdC::Strlcpy(awStack_808,pwVar3,((long)pwVar7 - lVar5 >> 1) + 1);
        Remove(awStack_808,true);
        Path::PathString16::~PathString16((PathString16 *)&local_8f8);
        goto LAB_05343f4c;
      }
      pwVar4 = (wchar16 *)FUN_0533e4f4(uVar6);
      StdC::Strlcpy(awStack_808,pwVar4,(ulong)uVar1);
      cVar2 = Exists(awStack_808);
      if (cVar2 == '\0') {
        cVar2 = FUN_05341424(awStack_808);
        if (cVar2 == '\0') goto LAB_05344068;
        if (pwVar7 == (wchar16 *)0x0) {
          pwVar7 = pwVar3;
        }
      }
      pwVar4 = (wchar16 *)FUN_0533e56c(local_8f0);
    }
    uVar6 = 1;
LAB_0534405c:
    Path::PathString16::~PathString16((PathString16 *)&local_8f8);
  }
LAB_05343f4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Create(char32_t const*) */

void EA::IO::Directory::Create(wchar32 *param_1)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_f8[0]);
  uVar1 = Create(pwVar2);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::IO::Directory::EnsureExists(char32_t const*) */

ulong EA::IO::Directory::EnsureExists(wchar32 *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_1 == (wchar32 *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (*param_1 != L'\0') {
    bVar1 = Exists(param_1);
    uVar2 = (ulong)bVar1;
    if (bVar1 == 0) {
      uVar2 = Create(param_1);
      return uVar2;
    }
  }
  return uVar2;
}


/* EA::IO::Directory::EnsureExists(wchar_t const*) */

ulong EA::IO::Directory::EnsureExists(wchar_t *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (*param_1 != L'\0') {
    bVar1 = Exists(param_1);
    uVar2 = (ulong)bVar1;
    if (bVar1 == 0) {
      uVar2 = Create(param_1);
      return uVar2;
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Create(wchar_t const*) */

void EA::IO::Directory::Create(wchar_t *param_1)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 auStack_f8 [30];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)auStack_f8);
  ConvertPath((PathString16 *)auStack_f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(auStack_f8[0]);
  uVar1 = Create(pwVar2);
  Path::PathString16::~PathString16((PathString16 *)auStack_f8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Create(char const*) */

void EA::IO::Directory::Create(char *param_1)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_f8[0]);
  uVar1 = Create(pwVar2);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::IO::Directory::EnsureExists(char const*) */

ulong EA::IO::Directory::EnsureExists(char *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (*param_1 != '\0') {
    bVar1 = Exists(param_1);
    uVar2 = (ulong)bVar1;
    if (bVar1 == 0) {
      uVar2 = Create(param_1);
      return uVar2;
    }
  }
  return uVar2;
}


/* EA::IO::Directory::EnsureExists(char16_t const*) */

ulong EA::IO::Directory::EnsureExists(wchar16 *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_1 == (wchar16 *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (*param_1 != L'\0') {
    bVar1 = Exists(param_1);
    uVar2 = (ulong)bVar1;
    if (bVar1 == 0) {
      uVar2 = Create(param_1);
      return uVar2;
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetAttributes(char32_t const*, int, bool, bool, bool) */

void EA::IO::Directory::SetAttributes
               (wchar32 *param_1,int param_2,bool param_3,bool param_4,bool param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  uVar2 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_05344520(uVar2,param_2,param_3,param_4,param_5);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetAttributes(wchar_t const*, int, bool, bool, bool) */

void EA::IO::Directory::SetAttributes
               (wchar_t *param_1,int param_2,bool param_3,bool param_4,bool param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 auStack_1b8 [54];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)auStack_1b8);
  ConvertPath((PathStringW *)auStack_1b8,param_1);
  uVar2 = FUN_0533e4f0(auStack_1b8[0]);
  uVar1 = FUN_05344520(uVar2,param_2,param_3,param_4,param_5);
  Path::PathString32::~PathString32((PathString32 *)auStack_1b8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetAttributes(char const*, int, bool, bool, bool) */

void EA::IO::Directory::SetAttributes
               (char *param_1,int param_2,bool param_3,bool param_4,bool param_5)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  pwVar2 = (wchar_t *)FUN_0533e4f0(local_1b8[0]);
  uVar1 = SetAttributes(pwVar2,param_2,param_3,param_4,param_5);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::SetAttributes(char16_t const*, int, bool, bool, bool) */

void EA::IO::Directory::SetAttributes
               (wchar16 *param_1,int param_2,bool param_3,bool param_4,bool param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  uVar2 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_05344520(uVar2,param_2,param_3,param_4,param_5);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Rename(char32_t const*, char32_t const*) */

void EA::IO::Directory::Rename(wchar32 *param_1,wchar32 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 local_128 [18];
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_128);
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_128,param_1);
  ConvertPath((PathString8 *)local_98,param_2);
  pcVar2 = (char *)FUN_0533e4ec(local_128[0]);
  pcVar3 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = File::Rename(pcVar2,pcVar3,true);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  Path::PathString8::~PathString8((PathString8 *)local_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Rename(wchar_t const*, wchar_t const*) */

void EA::IO::Directory::Rename(wchar_t *param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 auStack_128 [18];
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_128);
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_128,param_1);
  ConvertPath((PathString8 *)auStack_98,param_2);
  pcVar2 = (char *)FUN_0533e4ec(auStack_128[0]);
  pcVar3 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = File::Rename(pcVar2,pcVar3,true);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  Path::PathString8::~PathString8((PathString8 *)auStack_128);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Copy(char32_t const*, char32_t const*, bool, bool) */

void EA::IO::Directory::Copy(wchar32 *param_1,wchar32 *param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_368 [54];
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_368);
  ConvertPath((PathStringW *)local_368,param_1);
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_2);
  uVar2 = FUN_0533e4f0(local_368[0]);
  uVar3 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_05346850(uVar2,uVar3,param_3,param_4);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  Path::PathString32::~PathString32((PathString32 *)local_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Copy(wchar_t const*, wchar_t const*, bool, bool) */

void EA::IO::Directory::Copy(wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_368 [54];
  undefined8 auStack_1b8 [54];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)auStack_368);
  ConvertPath((PathStringW *)auStack_368,param_1);
  Path::PathStringW::PathStringW((PathStringW *)auStack_1b8);
  ConvertPath((PathStringW *)auStack_1b8,param_2);
  uVar2 = FUN_0533e4f0(auStack_368[0]);
  uVar3 = FUN_0533e4f0(auStack_1b8[0]);
  uVar1 = FUN_05346850(uVar2,uVar3,param_3,param_4);
  Path::PathString32::~PathString32((PathString32 *)auStack_1b8);
  Path::PathString32::~PathString32((PathString32 *)auStack_368);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Copy(char16_t const*, char16_t const*, bool, bool) */

void EA::IO::Directory::Copy(wchar16 *param_1,wchar16 *param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_368 [54];
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_368);
  ConvertPath((PathStringW *)local_368,param_1);
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_2);
  uVar2 = FUN_0533e4f0(local_368[0]);
  uVar3 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_05346850(uVar2,uVar3,param_3,param_4);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  Path::PathString32::~PathString32((PathString32 *)local_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Directory::Copy(char const*, char const*, bool, bool) */

void EA::IO::Directory::Copy(char *param_1,char *param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_368 [54];
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_368);
  ConvertPath((PathStringW *)local_368,param_1);
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_2);
  uVar2 = FUN_0533e4f0(local_368[0]);
  uVar3 = FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_05346850(uVar2,uVar3,param_3,param_4);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  Path::PathString32::~PathString32((PathString32 *)local_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

