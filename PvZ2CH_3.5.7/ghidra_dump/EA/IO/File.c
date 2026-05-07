// Class: EA::IO::File


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Create(char16_t const*, bool) */

void EA::IO::File::Create(wchar16 *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (wchar16 *)0x0) && (*param_1 != L'\0')) {
    uVar1 = StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
    if (uVar1 < 0x400) {
      iVar2 = 0x242;
      if (!param_2) {
        iVar2 = 0x42;
      }
      iVar2 = open(acStack_408,iVar2,0x1ff);
      if (-1 < iVar2) {
        close(iVar2);
        uVar3 = 1;
        goto LAB_0533ebec;
      }
    }
  }
  uVar3 = 0;
LAB_0533ebec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* EA::IO::File::Create(char const*, bool) */

undefined8 EA::IO::File::Create(char *param_1,bool param_2)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = 0x242;
    if (!param_2) {
      iVar1 = 0x42;
    }
    iVar1 = open(param_1,iVar1,0x1ff);
    if (-1 < iVar1) {
      close(iVar1);
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Exists(char16_t const*) */

void EA::IO::File::Exists(wchar16 *param_1)

{
  long *__haystack;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  stat asStack_488 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar16 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*param_1 != L'\0') {
      __haystack = asStack_488[0].__unused + 1;
      uVar2 = StdC::Strlcpy((char *)__haystack,param_1,0x400,0xffffffffffffffff);
      if (uVar2 < 0x400) {
        pcVar4 = strstr((char *)__haystack,"appbundle:/");
        if ((long *)pcVar4 == __haystack) {
          AutoJNIEnv::AutoJNIEnv((AutoJNIEnv *)asStack_488);
          uVar1 = AssetManagerJNI::Exists((AutoJNIEnv *)asStack_488,pcVar4 + 0xb);
          AutoJNIEnv::~AutoJNIEnv((AutoJNIEnv *)asStack_488);
          goto LAB_0533ecf0;
        }
        iVar3 = stat((char *)__haystack,asStack_488);
        if ((iVar3 == 0) && (((uint)asStack_488[0].st_nlink & 0xf000) == 0x8000)) {
          uVar1 = 1;
          goto LAB_0533ecf0;
        }
      }
      uVar1 = 0;
    }
  }
LAB_0533ecf0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Exists(char const*) */

void EA::IO::File::Exists(char *param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  uint local_78;
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
        AutoJNIEnv::AutoJNIEnv((AutoJNIEnv *)&stack0xffffffffffffff78);
        uVar1 = AssetManagerJNI::Exists((AutoJNIEnv *)&stack0xffffffffffffff78,pcVar3 + 0xb);
        AutoJNIEnv::~AutoJNIEnv((AutoJNIEnv *)&stack0xffffffffffffff78);
      }
      else {
        iVar2 = stat(param_1,(stat *)&stack0xffffffffffffff78);
        if ((iVar2 != 0) || (uVar1 = 1, (local_78 & 0xf000) != 0x8000)) {
          uVar1 = 0;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Remove(char16_t const*) */

void EA::IO::File::Remove(wchar16 *param_1)

{
  bool bVar1;
  int iVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar16 *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (*param_1 != L'\0') {
      StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
      iVar2 = unlink(acStack_408);
      bVar1 = iVar2 == 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* EA::IO::File::Remove(char const*) */

bool EA::IO::File::Remove(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((param_1 != (char *)0x0) && (bVar1 = false, *param_1 != '\0')) {
    iVar2 = unlink(param_1);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Stat(char const*, EA::IO::StatData&) */

void EA::IO::File::Stat(char *param_1,StatData *param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  __off_t local_58;
  __time_t local_40;
  __time_t local_30;
  __time_t local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = strstr(param_1,"appbundle:/");
  if (pcVar3 == param_1) {
    AutoJNIEnv::AutoJNIEnv((AutoJNIEnv *)&stack0xffffffffffffff78);
    uVar1 = AssetManagerJNI::Exists((AutoJNIEnv *)&stack0xffffffffffffff78,pcVar3 + 0xb);
    AutoJNIEnv::~AutoJNIEnv((AutoJNIEnv *)&stack0xffffffffffffff78);
  }
  else {
    iVar2 = stat(param_1,(stat *)&stack0xffffffffffffff78);
    if (iVar2 == 0) {
      *(undefined4 *)param_2 = 0x107;
      uVar1 = 1;
      *(__time_t *)(param_2 + 8) = local_20;
      *(__time_t *)(param_2 + 0x10) = local_30;
      *(__time_t *)(param_2 + 0x18) = local_40;
      *(__off_t *)(param_2 + 0x20) = local_58;
    }
    else {
      *(undefined4 *)param_2 = 0;
      uVar1 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetAttributes(char const*, int, bool) */

void EA::IO::File::SetAttributes(char *param_1,int param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_78;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
    goto LAB_0533f070;
  }
  uVar3 = 0;
  if ((*param_1 == '\0') || (iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78), iVar1 == 0))
  goto LAB_0533f070;
  uVar2 = (param_2 & 1U) << 8;
  if (((uint)param_2 >> 1 & 1) == 0) {
    if (((uint)param_2 >> 2 & 1) != 0) goto LAB_0533f0b8;
    if ((param_2 & 1U) == 0) {
      uVar3 = 1;
      goto LAB_0533f070;
    }
  }
  else {
    uVar2 = uVar2 | 0x80;
    if (((uint)param_2 >> 2 & 1) != 0) {
LAB_0533f0b8:
      uVar2 = uVar2 | 0x40;
    }
  }
  if (param_3) {
    local_78 = uVar2 | local_78;
  }
  else {
    local_78 = local_78 & (uVar2 ^ 0xffffffff);
  }
  uVar3 = 0;
  iVar1 = chmod(param_1,local_78);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
LAB_0533f070:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetTime(char const*, EA::IO::FileTimeType) */

void EA::IO::File::GetTime(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  __time_t _Var4;
  __time_t local_40;
  __time_t local_30;
  __time_t local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
    if ((((iVar2 == 0) && (_Var4 = local_20, param_2 != 1)) && (_Var4 = local_30, param_2 != 2)) &&
       (_Var4 = 0, param_2 == 4)) {
      _Var4 = local_40;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(_Var4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetTime(char const*, int, long) */

void EA::IO::File::SetTime(char *param_1,int param_2,long param_3)

{
  int iVar1;
  utimbuf local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18.modtime = param_3;
  if (((uint)param_2 >> 1 & 1) == 0) {
    local_18.modtime = GetTime(param_1,2);
  }
  local_18.actime = param_3;
  if (((uint)param_2 >> 2 & 1) == 0) {
    local_18.actime = GetTime(param_1,4);
  }
  iVar1 = utime(param_1,&local_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 == 0);
  }
  return;
}


/* EA::IO::File::ResolveAlias(char16_t const*, char16_t*, unsigned int) */

undefined1 EA::IO::File::ResolveAlias(wchar16 *param_1,wchar16 *param_2,uint param_3)

{
  undefined1 uVar1;
  
  uVar1 = Exists(param_1);
  if ((param_1 != param_2) && (param_2 != (wchar16 *)0x0)) {
    StdC::Strlcpy(param_2,param_1,(ulong)param_3);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Create(char32_t const*, bool) */

void EA::IO::File::Create(wchar32 *param_1,bool param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = Create(pcVar2,param_2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Create(wchar_t const*, bool) */

void EA::IO::File::Create(wchar_t *param_1,bool param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = Create(pcVar2,param_2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Exists(char32_t const*) */

void EA::IO::File::Exists(wchar32 *param_1)

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
/* EA::IO::File::Exists(wchar_t const*) */

void EA::IO::File::Exists(wchar_t *param_1)

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
/* EA::IO::File::Remove(char32_t const*) */

void EA::IO::File::Remove(wchar32 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = Remove(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Remove(wchar_t const*) */

void EA::IO::File::Remove(wchar_t *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = Remove(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Stat(char32_t const*, EA::IO::StatData&) */

void EA::IO::File::Stat(wchar32 *param_1,StatData *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = Stat(pcVar2,param_2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Stat(wchar_t const*, EA::IO::StatData&) */

void EA::IO::File::Stat(wchar_t *param_1,StatData *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = Stat(pcVar2,param_2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Stat(char16_t const*, EA::IO::StatData&) */

void EA::IO::File::Stat(wchar16 *param_1,StatData *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = Stat(pcVar2,param_2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetAttributes(char32_t const*, int, bool) */

void EA::IO::File::SetAttributes(wchar32 *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = SetAttributes(pcVar2,param_2,param_3);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetAttributes(wchar_t const*, int, bool) */

void EA::IO::File::SetAttributes(wchar_t *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = SetAttributes(pcVar2,param_2,param_3);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetAttributes(char16_t const*, int, bool) */

void EA::IO::File::SetAttributes(wchar16 *param_1,int param_2,bool param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar16 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*param_1 != L'\0') {
      Path::PathString8::PathString8((PathString8 *)local_98);
      ConvertPath((PathString8 *)local_98,param_1);
      pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
      uVar1 = SetAttributes(pcVar2,param_2,param_3);
      Path::PathString8::~PathString8((PathString8 *)local_98);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetTime(char32_t const*, EA::IO::FileTimeType) */

void EA::IO::File::GetTime(wchar32 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  uVar1 = FUN_0533e4ec(local_98[0]);
  uVar1 = GetTime(uVar1,param_2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetTime(wchar_t const*, EA::IO::FileTimeType) */

void EA::IO::File::GetTime(wchar32 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  uVar1 = FUN_0533e4ec(auStack_98[0]);
  uVar1 = GetTime(uVar1,param_2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetTime(char16_t const*, EA::IO::FileTimeType) */

void EA::IO::File::GetTime(wchar16 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  uVar1 = FUN_0533e4ec(local_98[0]);
  uVar1 = GetTime(uVar1,param_2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetTime(char32_t const*, int, long) */

void EA::IO::File::SetTime(wchar32 *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = SetTime(pcVar2,param_2,param_3);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetTime(wchar_t const*, int, long) */

void EA::IO::File::SetTime(wchar_t *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = SetTime(pcVar2,param_2,param_3);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::SetTime(char16_t const*, int, long) */

void EA::IO::File::SetTime(wchar16 *param_1,int param_2,long param_3)

{
  int iVar1;
  char *__file;
  utimbuf local_a8;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a8.modtime = param_3;
  if (((uint)param_2 >> 1 & 1) == 0) {
    local_a8.modtime = GetTime(param_1,2);
  }
  local_a8.actime = param_3;
  if (((uint)param_2 >> 2 & 1) == 0) {
    local_a8.actime = GetTime(param_1,4);
  }
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  __file = (char *)FUN_0533e4ec(local_98[0]);
  iVar1 = utime(__file,&local_a8);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 == 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::ResolveAlias(char32_t const*, char32_t*, unsigned int) */

void EA::IO::File::ResolveAlias(wchar32 *param_1,wchar32 *param_2,uint param_3)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  undefined8 local_8f8 [30];
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_8f8);
  ConvertPath((PathString16 *)local_8f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_8f8[0]);
  uVar1 = ResolveAlias(pwVar2,awStack_808,0x400);
  uVar3 = StdC::Strlen(awStack_808);
  StdC::Strlcpy(param_2,awStack_808,(ulong)param_3,uVar3);
  Path::PathString16::~PathString16((PathString16 *)local_8f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::ResolveAlias(wchar_t const*, wchar_t*, unsigned int) */

void EA::IO::File::ResolveAlias(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  undefined8 auStack_8f8 [30];
  wchar16 awStack_808 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)auStack_8f8);
  ConvertPath((PathString16 *)auStack_8f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(auStack_8f8[0]);
  uVar1 = ResolveAlias(pwVar2,awStack_808,0x400);
  uVar3 = StdC::Strlen(awStack_808);
  StdC::Strlcpy(param_2,awStack_808,(ulong)param_3,uVar3);
  Path::PathString16::~PathString16((PathString16 *)auStack_8f8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::ResolveAlias(char const*, char*, unsigned int) */

void EA::IO::File::ResolveAlias(char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 local_8f8 [30];
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_8f8);
  ConvertPath((PathString16 *)local_8f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f8(local_8f8[0],0);
  uVar1 = ResolveAlias(pwVar2,awStack_808,0x400);
  StdC::Strlcpy(param_2,awStack_808,(ulong)param_3,0xffffffffffffffff);
  Path::PathString16::~PathString16((PathString16 *)local_8f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::CreateAlias(char const*, char const*, char const*, char const*) */

void __thiscall
EA::IO::File::CreateAlias(File *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *pLVar5;
  undefined8 local_3c8 [30];
  undefined8 local_2d8 [30];
  undefined8 local_1e8 [30];
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_3c8);
  Path::PathString16::PathString16((PathString16 *)local_2d8);
  Path::PathString16::PathString16((PathString16 *)local_1e8);
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_3c8,(char *)this);
  ConvertPath((PathString16 *)local_2d8,param_1);
  ConvertPath((PathString16 *)local_1e8,param_2);
  ConvertPath((PathString16 *)local_f8,param_3);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_3c8[0]);
  pwVar3 = (wchar16 *)FUN_0533e4f4(local_2d8[0]);
  pLVar4 = (LineBreakCategory *)FUN_0533e4f4(local_1e8[0]);
  pLVar5 = (LineBreakCategory *)FUN_0533e4f4(local_f8[0]);
  uVar1 = Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,pwVar3,pLVar4,pLVar5,(LineBreakCategory *)param_4);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  Path::PathString16::~PathString16((PathString16 *)local_1e8);
  Path::PathString16::~PathString16((PathString16 *)local_2d8);
  Path::PathString16::~PathString16((PathString16 *)local_3c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::CreateAlias(char32_t const*, char32_t const*, char32_t const*, char32_t const*) */

void __thiscall
EA::IO::File::CreateAlias
          (File *this,wchar32 *param_1,wchar32 *param_2,wchar32 *param_3,wchar32 *param_4)

{
  undefined4 uVar1;
  File *this_00;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_248 [18];
  undefined8 local_1b8 [18];
  undefined8 local_128 [18];
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_248);
  Path::PathString8::PathString8((PathString8 *)local_1b8);
  Path::PathString8::PathString8((PathString8 *)local_128);
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_248,(wchar32 *)this);
  ConvertPath((PathString8 *)local_1b8,param_1);
  ConvertPath((PathString8 *)local_128,param_2);
  ConvertPath((PathString8 *)local_98,param_3);
  this_00 = (File *)FUN_0533e4ec(local_248[0]);
  pcVar2 = (char *)FUN_0533e4ec(local_1b8[0]);
  pcVar3 = (char *)FUN_0533e4ec(local_128[0]);
  pcVar4 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = CreateAlias(this_00,pcVar2,pcVar3,pcVar4,(char *)param_4);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  Path::PathString8::~PathString8((PathString8 *)local_128);
  Path::PathString8::~PathString8((PathString8 *)local_1b8);
  Path::PathString8::~PathString8((PathString8 *)local_248);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::CreateAlias(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*) */

void EA::IO::File::CreateAlias(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  undefined4 uVar1;
  File *this;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_x4;
  undefined8 auStack_248 [18];
  undefined8 auStack_1b8 [18];
  undefined8 auStack_128 [18];
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_248);
  Path::PathString8::PathString8((PathString8 *)auStack_1b8);
  Path::PathString8::PathString8((PathString8 *)auStack_128);
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_248,param_1);
  ConvertPath((PathString8 *)auStack_1b8,param_2);
  ConvertPath((PathString8 *)auStack_128,param_3);
  ConvertPath((PathString8 *)auStack_98,param_4);
  this = (File *)FUN_0533e4ec(auStack_248[0]);
  pcVar2 = (char *)FUN_0533e4ec(auStack_1b8[0]);
  pcVar3 = (char *)FUN_0533e4ec(auStack_128[0]);
  pcVar4 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = CreateAlias(this,pcVar2,pcVar3,pcVar4,in_x4);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  Path::PathString8::~PathString8((PathString8 *)auStack_128);
  Path::PathString8::~PathString8((PathString8 *)auStack_1b8);
  Path::PathString8::~PathString8((PathString8 *)auStack_248);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::PatternExists(char32_t const*) */

void EA::IO::File::PatternExists(wchar32 *param_1)

{
  undefined4 uVar1;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_053434b0();
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::PatternExists(wchar_t const*) */

void EA::IO::File::PatternExists(wchar_t *param_1)

{
  undefined4 uVar1;
  undefined8 auStack_1b8 [54];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)auStack_1b8);
  ConvertPath((PathStringW *)auStack_1b8,param_1);
  FUN_0533e4f0(auStack_1b8[0]);
  uVar1 = FUN_053434b0();
  Path::PathString32::~PathString32((PathString32 *)auStack_1b8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::PatternExists(char16_t const*) */

void EA::IO::File::PatternExists(wchar16 *param_1)

{
  undefined4 uVar1;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_053434b0();
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::PatternExists(char const*) */

void EA::IO::File::PatternExists(char *param_1)

{
  undefined4 uVar1;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathStringW::PathStringW((PathStringW *)local_1b8);
  ConvertPath((PathStringW *)local_1b8,param_1);
  FUN_0533e4f0(local_1b8[0]);
  uVar1 = FUN_053434b0();
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetAttributes(char const*) */

void EA::IO::File::GetAttributes(char *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint local_78;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = strstr(param_1,"appbundle:/");
  if (param_1 == pcVar5) {
    cVar3 = Directory::Exists(pcVar5);
    uVar6 = 9;
    if (cVar3 == '\0') {
      uVar6 = 1;
    }
  }
  else {
    iVar4 = stat(param_1,(stat *)&stack0xffffffffffffff78);
    uVar6 = 0;
    if (iVar4 == 0) {
      uVar1 = local_78 >> 8 & 1;
      uVar6 = uVar1 | 2;
      if ((local_78 & 0x80) == 0) {
        uVar6 = uVar1;
      }
      uVar1 = uVar6 | 4;
      if ((local_78 & 0x40) == 0) {
        uVar1 = uVar6;
      }
      uVar2 = uVar1 | 8;
      if ((local_78 & 0x4000) == 0) {
        uVar2 = uVar1;
      }
      uVar6 = uVar2 | 0x10;
      if ((local_78 & 0xa000) != 0xa000) {
        uVar6 = uVar2;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* EA::IO::File::IsWritable(char const*) */

ulong EA::IO::File::IsWritable(char *param_1)

{
  ulong uVar1;
  
  uVar1 = GetAttributes(param_1);
  return uVar1 >> 1 & 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetAttributes(char32_t const*) */

void EA::IO::File::GetAttributes(wchar32 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = GetAttributes(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::IO::File::IsWritable(char32_t const*) */

ulong EA::IO::File::IsWritable(wchar32 *param_1)

{
  ulong uVar1;
  
  uVar1 = GetAttributes(param_1);
  return uVar1 >> 1 & 1;
}


/* EA::IO::File::IsWritable(wchar_t const*) */

ulong EA::IO::File::IsWritable(wchar_t *param_1)

{
  ulong uVar1;
  
  uVar1 = GetAttributes(param_1);
  return uVar1 >> 1 & 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetAttributes(wchar_t const*) */

void EA::IO::File::GetAttributes(wchar_t *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = GetAttributes(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetAttributes(char16_t const*) */

void EA::IO::File::GetAttributes(wchar16 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar16 *)0x0) {
    uVar1 = 0;
  }
  else {
    Path::PathString8::PathString8((PathString8 *)local_98);
    ConvertPath((PathString8 *)local_98,param_1);
    pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
    uVar1 = GetAttributes(pcVar2);
    Path::PathString8::~PathString8((PathString8 *)local_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::IO::File::IsWritable(char16_t const*) */

ulong EA::IO::File::IsWritable(wchar16 *param_1)

{
  ulong uVar1;
  
  uVar1 = GetAttributes(param_1);
  return uVar1 >> 1 & 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Copy(char16_t const*, char16_t const*, bool) */

void EA::IO::File::Copy(wchar16 *param_1,wchar16 *param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  FileStream aFStack_5b8 [216];
  FileStream aFStack_4e0 [216];
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_3) {
    cVar2 = Exists(param_2);
    cVar1 = '\0';
    if (cVar2 != '\0') goto LAB_05346134;
  }
  FileStream::FileStream(aFStack_5b8,param_1);
  cVar1 = FileStream::Open(aFStack_5b8,1,3,1,0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    FileStream::FileStream(aFStack_4e0,param_2);
    cVar2 = FileStream::Open(aFStack_4e0,2,2,2,0);
    if (cVar2 == '\0') {
      FileStream::Close(aFStack_5b8);
      cVar1 = '\0';
    }
    else {
      while (uVar4 = FileStream::Read(aFStack_5b8,auStack_408,0x400), cVar1 = cVar2, uVar4 != 0) {
        uVar7 = 0;
        lVar5 = FileStream::GetPosition(aFStack_4e0,0);
        do {
          cVar3 = FileStream::Write(aFStack_4e0,auStack_408 + uVar7,uVar4 - uVar7);
          lVar6 = FileStream::GetPosition(aFStack_4e0,0);
          cVar1 = '\0';
          if (cVar3 == '\0') goto LAB_053461d0;
          uVar7 = uVar7 + (lVar6 - lVar5);
        } while (uVar7 < uVar4);
      }
LAB_053461d0:
      FileStream::Close(aFStack_4e0);
    }
    FileStream::~FileStream(aFStack_4e0);
  }
  FileStream::~FileStream(aFStack_5b8);
LAB_05346134:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Move(char16_t const*, char16_t const*, bool) */

void EA::IO::File::Move(wchar16 *param_1,wchar16 *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  char acStack_808 [1024];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (wchar16 *)0x0) && (*param_1 != L'\0')) && (param_2 != (wchar16 *)0x0)) &&
     (*param_2 != L'\0')) {
    StdC::Strlcpy(acStack_808,param_1,0x400,0xffffffffffffffff);
    StdC::Strlcpy(acStack_408,param_2,0x400,0xffffffffffffffff);
    if ((param_3) || (cVar1 = Exists(acStack_408), cVar1 == '\0')) {
      cVar1 = '\x01';
      iVar2 = rename(acStack_808,acStack_408);
      if (iVar2 == 0) goto LAB_05346294;
      cVar1 = Copy(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        Remove(param_1);
        goto LAB_05346294;
      }
    }
  }
  cVar1 = '\0';
LAB_05346294:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Copy(char const*, char const*, bool) */

void EA::IO::File::Copy(char *param_1,char *param_2,bool param_3)

{
  char cVar1;
  ulong uVar2;
  undefined1 uVar3;
  FileStream aFStack_9b8 [216];
  FileStream aFStack_8e0 [216];
  undefined1 auStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_3) || (cVar1 = Exists(param_2), uVar3 = 0, cVar1 == '\0')) {
    FileStream::FileStream(aFStack_9b8,param_1);
    cVar1 = FileStream::Open(aFStack_9b8,1,6,1,0);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      FileStream::FileStream(aFStack_8e0,param_2);
      cVar1 = FileStream::Open(aFStack_8e0,3,2,1,0);
      if (cVar1 != '\0') {
        do {
          uVar2 = FileStream::Read(aFStack_9b8,auStack_808,0x800);
          if (uVar2 == 0xffffffffffffffff) {
            uVar3 = 0;
            goto LAB_053464a4;
          }
          if (uVar2 == 0) {
            uVar3 = 1;
            goto LAB_053464a4;
          }
          cVar1 = FileStream::Write(aFStack_8e0,auStack_808,uVar2);
        } while (cVar1 != '\0');
        uVar3 = 0;
      }
LAB_053464a4:
      FileStream::~FileStream(aFStack_8e0);
    }
    FileStream::~FileStream(aFStack_9b8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* EA::IO::File::Move(char const*, char const*, bool) */

char EA::IO::File::Move(char *param_1,char *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  
  if ((!param_3) && (cVar1 = Exists(param_2), cVar1 != '\0')) {
    return '\0';
  }
  cVar1 = '\x01';
  iVar2 = rename(param_1,param_2);
  if (iVar2 != 0) {
    cVar1 = Copy(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return '\0';
    }
    Remove(param_1);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Move(char32_t const*, char32_t const*, bool) */

void EA::IO::File::Move(wchar32 *param_1,wchar32 *param_2,bool param_3)

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
  uVar1 = Move(pcVar2,pcVar3,param_3);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  Path::PathString8::~PathString8((PathString8 *)local_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Move(wchar_t const*, wchar_t const*, bool) */

void EA::IO::File::Move(wchar_t *param_1,wchar_t *param_2,bool param_3)

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
  uVar1 = Move(pcVar2,pcVar3,param_3);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  Path::PathString8::~PathString8((PathString8 *)auStack_128);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::IO::File::Rename(char const*, char const*, bool) */

char EA::IO::File::Rename(char *param_1,char *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  
  if ((!param_3) && (cVar1 = Exists(param_2), cVar1 != '\0')) {
    return '\0';
  }
  cVar1 = '\x01';
  iVar2 = rename(param_1,param_2);
  if (iVar2 != 0) {
    cVar1 = Copy(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return '\0';
    }
    Remove(param_1);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Copy(char32_t const*, char32_t const*, bool) */

void EA::IO::File::Copy(wchar32 *param_1,wchar32 *param_2,bool param_3)

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
  uVar1 = Copy(pcVar2,pcVar3,param_3);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  Path::PathString8::~PathString8((PathString8 *)local_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::Copy(wchar_t const*, wchar_t const*, bool) */

void EA::IO::File::Copy(wchar_t *param_1,wchar_t *param_2,bool param_3)

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
  uVar1 = Copy(pcVar2,pcVar3,param_3);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  Path::PathString8::~PathString8((PathString8 *)auStack_128);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetSize(char const*) */

void EA::IO::File::GetSize(char *param_1)

{
  FileStream *this;
  char cVar1;
  int iVar2;
  char *pcVar3;
  __off_t _Var4;
  undefined1 auStack_160 [344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = strstr(param_1,"appbundle:/");
  if (pcVar3 == param_1) {
    this = (FileStream *)(auStack_160 + 0x80);
    _Var4 = -1;
    FileStream::FileStream(this,pcVar3);
    cVar1 = FileStream::Open(this,1,6,1,0);
    if (cVar1 != '\0') {
      _Var4 = FileStream::GetSize(this);
    }
    FileStream::~FileStream(this);
  }
  else {
    iVar2 = stat(param_1,(stat *)auStack_160);
    _Var4 = -1;
    if (iVar2 == 0) {
      _Var4 = auStack_160._48_8_;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(_Var4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetSize(char32_t const*) */

void EA::IO::File::GetSize(wchar32 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar1 = (char *)FUN_0533e4ec(local_98[0]);
  uVar2 = GetSize(pcVar1);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetSize(wchar_t const*) */

void EA::IO::File::GetSize(wchar_t *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar1 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar2 = GetSize(pcVar1);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::File::GetSize(char16_t const*) */

void EA::IO::File::GetSize(wchar16 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar1 = (char *)FUN_0533e4ec(local_98[0]);
  uVar2 = GetSize(pcVar1);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

