// Class: EA::IO


/* EA::IO::IsFilePathSeparator(int) */

bool EA::IO::IsFilePathSeparator(int param_1)

{
  return param_1 == 0x2f;
}


/* EA::IO::GetTempDirectory(char*, unsigned int) */

ulong EA::IO::GetTempDirectory(char *param_1,uint param_2)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_2;
  if (gpTempDirectory == 0) {
    __s = (char *)AssetManagerJNI::GetTempRoot();
    sVar1 = strlen(__s);
    StdC::Strlcpy(param_1,__s,uVar2);
    Path::EnsureTrailingSeparator(param_1,uVar2);
    return sVar1 & 0xffffffff;
  }
  uVar2 = StdC::Strlcpy(param_1,&gpTempDirectory,uVar2,0xffffffffffffffff);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetTempDirectory(char32_t*, unsigned int) */

void EA::IO::GetTempDirectory(wchar32 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetTempDirectory(acStack_408,0x400);
  uVar3 = (ulong)iVar1;
  if (-1 < iVar1) {
    uVar2 = StdC::Strlcpy(param_1,acStack_408,(ulong)param_2,uVar3);
    if ((int)param_2 <= (int)uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar3 = (ulong)uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetTempDirectory(char16_t*, unsigned int) */

void EA::IO::GetTempDirectory(wchar16 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (gpTempDirectory == 0) {
    iVar1 = GetTempDirectory(acStack_408,0x400);
    if ((-1 < iVar1) &&
       ((iVar2 = StdC::Strlcpy(param_1,acStack_408,(ulong)param_2,0xffffffffffffffff),
        (int)param_2 < iVar2 || (iVar2 < 0)))) {
      iVar1 = -1;
    }
  }
  else {
    StdC::Strlcpy(param_1,&gpTempDirectory,(ulong)param_2);
    iVar1 = StdC::Strlen(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* EA::IO::GetDriveName(char16_t const*, char16_t*) */

int EA::IO::GetDriveName(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  int iVar2;
  long lVar3;
  
  *param_2 = *param_1;
  lVar3 = 2;
  iVar2 = 1;
  wVar1 = param_1[1];
  while (wVar1 != L'/') {
    *(wchar16 *)((long)param_2 + lVar3) = wVar1;
    lVar3 = lVar3 + 2;
    iVar2 = iVar2 + 1;
    wVar1 = *(wchar16 *)((long)param_1 + lVar3);
  }
  *(undefined2 *)((long)param_2 + lVar3) = 0;
  return iVar2;
}


/* EA::IO::GetDriveSerialNumber(char16_t const*, char16_t*) */

undefined8 EA::IO::GetDriveSerialNumber(wchar16 *param_1,wchar16 *param_2)

{
  *param_2 = L'\0';
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveSerialNumber(char32_t const*, char32_t*) */

void EA::IO::GetDriveSerialNumber(wchar32 *param_1,wchar32 *param_2)

{
  undefined4 uVar1;
  wchar16 awStack_1008 [1024];
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_1008,param_1,0x400,0xffffffffffffffff);
  uVar1 = GetDriveSerialNumber(awStack_1008,awStack_808);
  StdC::Strlcpy(param_2,awStack_1008,0x400,0xffffffffffffffff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveSerialNumber(char const*, char*) */

void EA::IO::GetDriveSerialNumber(char *param_1,char *param_2)

{
  int iVar1;
  wchar16 awStack_a08 [256];
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_808,param_1,0x400,0xffffffffffffffff);
  iVar1 = GetDriveSerialNumber(awStack_808,awStack_a08);
  if (iVar1 < 1) {
    *param_2 = '\0';
  }
  else {
    StdC::Strlcpy(param_2,awStack_a08,0xff,0xffffffffffffffff);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetSpecialDirectory(EA::IO::SpecialDirectory, char*, bool, unsigned int) */

void EA::IO::GetSpecialDirectory(undefined4 param_1,char *param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = getenv("HOME");
  pcVar4 = getenv("TMPDIR");
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "/tmp/";
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = pcVar4;
  }
  uVar5 = 0xffffffff;
  switch(param_1) {
  case 1:
    uVar5 = StdC::Strlen(pcVar4);
    cVar1 = Path::GetHasTrailingSeparator(pcVar4,uVar5);
    if (cVar1 == '\0') {
      uVar2 = snprintf(param_2,(ulong)param_4,"%s/",pcVar4);
      uVar5 = (ulong)uVar2;
    }
    else {
      uVar5 = StdC::Strlcpy(param_2,pcVar4,(ulong)param_4);
    }
    break;
  case 2:
    uVar5 = StdC::Strlcpy(param_2,"/System/",(ulong)param_4);
    break;
  case 3:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/.Trash/",pcVar3);
    uVar5 = (ulong)uVar2;
    break;
  case 4:
    uVar5 = StdC::Strlcpy(param_2,"/Library/Fonts/",(ulong)param_4);
    break;
  case 5:
    uVar5 = StdC::GetCurrentProcessDirectory(acStack_408,0x400);
    if (uVar5 < param_4) {
      uVar5 = StdC::Strlcpy(param_2,acStack_408,(ulong)param_4);
      break;
    }
    goto LAB_0533fb40;
  case 6:
LAB_0533fb40:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Desktop/",pcVar3);
    uVar5 = (ulong)uVar2;
    break;
  case 7:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Desktop/","/Users/Shared");
    uVar5 = (ulong)uVar2;
    break;
  case 8:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Library/",pcVar3);
    uVar5 = (ulong)uVar2;
    break;
  case 9:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Library/","/Users/Shared");
    uVar5 = (ulong)uVar2;
    break;
  case 10:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Documents/",pcVar3);
    uVar5 = (ulong)uVar2;
    break;
  case 0xb:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Documents/","/Users/Shared");
    uVar5 = (ulong)uVar2;
    break;
  case 0xc:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Music/",pcVar3);
    uVar5 = (ulong)uVar2;
    break;
  case 0xd:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Music/","/Users/Shared");
    uVar5 = (ulong)uVar2;
    break;
  case 0xe:
    uVar2 = snprintf(param_2,(ulong)param_4,"%s/Applications/",pcVar3);
    uVar5 = (ulong)uVar2;
    break;
  case 0xf:
    uVar5 = StdC::Strlcpy(param_2,"/Applications/",(ulong)param_4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetSpecialDirectory(EA::IO::SpecialDirectory, char32_t*, bool, unsigned int) */

void EA::IO::GetSpecialDirectory
               (undefined8 param_1,wchar32 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetSpecialDirectory(param_1,acStack_408,param_3,0x400);
  if (0 < iVar1) {
    uVar2 = StdC::Strlcpy(param_2,acStack_408,(ulong)param_4,0xffffffffffffffff);
    if (((int)uVar2 < (int)param_4) && (0 < (int)uVar2)) goto LAB_0533fcbc;
  }
  uVar2 = 0xffffffff;
LAB_0533fcbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetSpecialDirectory(EA::IO::SpecialDirectory, char16_t*, bool, unsigned int) */

void EA::IO::GetSpecialDirectory
               (undefined8 param_1,wchar16 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = L'\0';
  iVar1 = GetSpecialDirectory(param_1,acStack_408,param_3,0x400);
  if (0 < iVar1) {
    uVar2 = StdC::Strlcpy(param_2,acStack_408,(ulong)param_4,0xffffffffffffffff);
    if (((int)uVar2 < (int)param_4) && (-1 < (int)uVar2)) goto LAB_0533fd58;
  }
  *param_2 = L'\0';
  uVar2 = 0xffffffff;
LAB_0533fd58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::IsFileNameCharValid(char32_t, EA::IO::FileSystem) */

bool EA::IO::IsFileNameCharValid(uint param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  switch(param_2) {
  case 0:
  case 1:
  case 7:
  case 8:
  case 9:
    return param_1 != 0x2f;
  }
  bVar2 = (param_1 & 0xffffffbf) != 0x3c;
  bVar1 = 1 < param_1 - 0x3e;
  bVar3 = bVar2 && bVar1;
  if ((bVar2 && bVar1) &&
     (bVar3 = param_1 != 0x3a && param_1 != 0x5c, param_1 != 0x3a && param_1 != 0x5c)) {
    bVar3 = (param_1 & 0xfffffff7) != 0x22 && param_1 != 0x2f;
  }
  return bVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetTempDirectory(wchar_t*, unsigned int) */

void EA::IO::GetTempDirectory(wchar_t *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char acStack_408 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = GetTempDirectory(acStack_408,0x400);
  uVar3 = (ulong)iVar1;
  if (-1 < iVar1) {
    uVar2 = StdC::Strlcpy(param_1,acStack_408,(ulong)param_2,uVar3);
    if ((int)param_2 <= (int)uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar3 = (ulong)uVar2;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveSerialNumber(wchar_t const*, wchar_t*) */

void EA::IO::GetDriveSerialNumber(wchar_t *param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  wchar16 awStack_1008 [1024];
  wchar16 awStack_808 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_1008,param_1,0x400,0xffffffffffffffff);
  uVar1 = GetDriveSerialNumber(awStack_1008,awStack_808);
  StdC::Strlcpy(param_2,awStack_1008,0x400,0xffffffffffffffff);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetSpecialDirectory(EA::IO::SpecialDirectory, wchar_t*, bool, unsigned int) */

void EA::IO::GetSpecialDirectory
               (undefined8 param_1,wchar32 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  char acStack_408 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = GetSpecialDirectory(param_1,acStack_408,param_3,0x400);
  if (0 < iVar1) {
    uVar2 = StdC::Strlcpy(param_2,acStack_408,(ulong)param_4,0xffffffffffffffff);
    if (((int)uVar2 < (int)param_4) && (0 < (int)uVar2)) goto LAB_0533fcbc;
  }
  uVar2 = 0xffffffff;
LAB_0533fcbc:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsVolumeAvailable(char32_t const*, int) */

void EA::IO::IsVolumeAvailable(wchar32 *param_1,int param_2)

{
  undefined4 uVar1;
  TextureInfo *pTVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pTVar2 = (TextureInfo *)FUN_0533e4ec(local_98[0]);
  uVar1 = Text::GlyphCache_Memory::EndUpdate(pTVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsVolumeAvailable(wchar_t const*, int) */

void EA::IO::IsVolumeAvailable(wchar_t *param_1,int param_2)

{
  undefined4 uVar1;
  TextureInfo *pTVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pTVar2 = (TextureInfo *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = Text::GlyphCache_Memory::EndUpdate(pTVar2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsVolumeAvailable(char16_t const*, int) */

void EA::IO::IsVolumeAvailable(wchar16 *param_1,int param_2)

{
  undefined4 uVar1;
  TextureInfo *pTVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pTVar2 = (TextureInfo *)FUN_0533e4ec(local_98[0]);
  uVar1 = Text::GlyphCache_Memory::EndUpdate(pTVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveName(char32_t const*, char32_t*) */

void EA::IO::GetDriveName(wchar32 *param_1,wchar32 *param_2)

{
  int iVar1;
  wchar16 *pwVar2;
  undefined8 local_2f8 [30];
  wchar16 awStack_208 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_2f8);
  ConvertPath((PathString16 *)local_2f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_2f8[0]);
  iVar1 = GetDriveName(pwVar2,awStack_208);
  if (iVar1 < 1) {
    *param_2 = L'\0';
  }
  else {
    StdC::Strlcpy(param_2,awStack_208,0xff,0xffffffffffffffff);
  }
  Path::PathString16::~PathString16((PathString16 *)local_2f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveName(wchar_t const*, wchar_t*) */

void EA::IO::GetDriveName(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar16 *pwVar2;
  undefined8 auStack_2f8 [30];
  wchar16 awStack_208 [256];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)auStack_2f8);
  ConvertPath((PathString16 *)auStack_2f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(auStack_2f8[0]);
  iVar1 = GetDriveName(pwVar2,awStack_208);
  if (iVar1 < 1) {
    *param_2 = L'\0';
  }
  else {
    StdC::Strlcpy(param_2,awStack_208,0xff,0xffffffffffffffff);
  }
  Path::PathString16::~PathString16((PathString16 *)auStack_2f8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveName(char const*, char*) */

void EA::IO::GetDriveName(char *param_1,char *param_2)

{
  int iVar1;
  wchar16 *pwVar2;
  undefined8 local_2f8 [30];
  wchar16 awStack_208 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_2f8);
  ConvertPath((PathString16 *)local_2f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_2f8[0]);
  iVar1 = GetDriveName(pwVar2,awStack_208);
  if (iVar1 < 1) {
    *param_2 = '\0';
  }
  else {
    StdC::Strlcpy(param_2,awStack_208,0xff,0xffffffffffffffff);
  }
  Path::PathString16::~PathString16((PathString16 *)local_2f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveTypeValue(char const*) */

void EA::IO::GetDriveTypeValue(char *param_1)

{
  undefined4 uVar1;
  TextureInfo *pTVar2;
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_f8,param_1);
  pTVar2 = (TextureInfo *)FUN_0533e4f4(local_f8[0]);
  uVar1 = Text::GlyphCache_Memory::EndUpdate(pTVar2);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveTypeValue(char32_t const*) */

void EA::IO::GetDriveTypeValue(wchar32 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = GetDriveTypeValue(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveTypeValue(wchar_t const*) */

void EA::IO::GetDriveTypeValue(wchar_t *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = GetDriveTypeValue(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsFilePathStringValid(char16_t const*, EA::IO::FileSystem) */

void EA::IO::IsFilePathStringValid(wchar16 *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  wchar16 *pwVar8;
  ulong uVar9;
  ushort *puVar10;
  short *psVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  short sVar15;
  undefined **ppuVar16;
  value_type *pvVar17;
  wchar16 local_898 [4];
  long local_890;
  wchar16 local_888 [8];
  undefined8 local_878;
  undefined8 local_870;
  PathString16 aPStack_788 [240];
  PathString16 aPStack_698 [240];
  PathString16 aPStack_5a8 [240];
  PathString16 aPStack_4b8 [240];
  PathString16 aPStack_3c8 [240];
  wchar16 local_2d8 [120];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_8;
  
  uVar14 = 0;
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)&local_878,param_1);
  builtin_memcpy(local_888,L"<>:\"|*?",0x10);
  lVar7 = FUN_0533e4d8(local_878,local_870);
  if (0x3ff < lVar7 - 1U) goto LAB_05342a84;
  Path::PathString16::PathString16(aPStack_788);
  Path::PathString16::PathString16(aPStack_698);
  Path::PathString16::PathString16(aPStack_5a8);
  Path::PathString16::PathString16(aPStack_4b8);
  pwVar8 = (wchar16 *)FUN_0533e4f4(local_878);
  Path::PathString16::PathString16((PathString16 *)&local_f8,pwVar8);
  Path::Split((PathString16 *)&local_f8,aPStack_788,aPStack_698,aPStack_5a8,aPStack_4b8);
  Path::PathString16::~PathString16((PathString16 *)&local_f8);
  if ((param_2 - 5U < 2) || (uVar14 = 1, param_2 - 2U < 2)) {
    local_890 = 0;
    local_898[0] = L'\\';
    local_898[1] = 0x5c;
    local_898[2] = 0;
    lVar7 = eastl::
            basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            ::find((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                    *)&local_878,local_898,0);
    if (lVar7 == 0) {
      uVar12 = FUN_053401b4(local_878,local_870,0x5c,2);
      uVar9 = uVar12 + 1;
      uVar13 = FUN_053401b4(local_878,local_870,0x5c,uVar9);
      if ((uVar9 < uVar13) && (2 < uVar12)) {
        Path::PathString16::PathString16(aPStack_3c8,(PathString16 *)&local_878,2,uVar12 - 1);
        Path::PathString16::PathString16
                  ((PathString16 *)local_2d8,(PathString16 *)&local_878,uVar9,uVar13 - uVar12);
        lVar7 = eastl::
                basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                ::find_first_of((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                                 *)aPStack_3c8,local_888,0);
        if ((lVar7 == -1) &&
           (lVar7 = eastl::
                    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                    ::find_first_of((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                                     *)local_2d8,local_888,0), lVar7 == -1)) {
          Path::PathString16::PathString16((PathString16 *)&local_1e8,aPStack_3c8);
          Path::PathString16::PathString16((PathString16 *)&local_f8,(PathString16 *)local_2d8);
          FUN_0533e950(local_1e8,local_1e0);
          uVar9 = FUN_053401b4(local_1e8,local_1e0,0x2e,0);
          if (uVar9 != 0xffffffffffffffff) {
            eastl::
            basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            ::erase((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                     *)&local_1e8,uVar9,0xffffffffffffffff);
          }
          FUN_0533e950(local_f8,local_f0);
          uVar9 = FUN_053401b4(local_f8,local_f0,0x2e,0);
          if (uVar9 != 0xffffffffffffffff) {
            eastl::
            basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            ::erase((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                     *)&local_f8,uVar9,0xffffffffffffffff);
          }
          ppuVar16 = &PTR_DAT_065fd450;
          do {
            pvVar17 = (value_type *)*ppuVar16;
            bVar6 = eastl::operator==((basic_string *)&local_1e8,pvVar17);
            if ((bVar6) || (bVar6 = eastl::operator==((basic_string *)&local_f8,pvVar17), bVar6)) {
              local_890 = uVar13 + 1;
              Path::PathString16::~PathString16((PathString16 *)&local_f8);
              Path::PathString16::~PathString16((PathString16 *)&local_1e8);
              goto LAB_05342d38;
            }
            ppuVar16 = ppuVar16 + 1;
          } while (ppuVar16 != (undefined **)&UNK_065fd508);
          local_890 = uVar13 + 1;
          Path::PathString16::~PathString16((PathString16 *)&local_f8);
          Path::PathString16::~PathString16((PathString16 *)&local_1e8);
          Path::PathString16::~PathString16((PathString16 *)local_2d8);
          Path::PathString16::~PathString16(aPStack_3c8);
          goto LAB_05342c4c;
        }
LAB_05342d38:
        Path::PathString16::~PathString16((PathString16 *)local_2d8);
        Path::PathString16::~PathString16(aPStack_3c8);
      }
    }
    else {
      uVar9 = FUN_0533e4d8(local_878,local_870);
      if (2 < uVar9) {
        puVar10 = (ushort *)FUN_0533e4f8(local_878,0);
        uVar2 = *puVar10;
        if (uVar2 < 0x61) {
          if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
LAB_05342c0c:
            psVar11 = (short *)FUN_0533e4f8(local_878,1);
            if ((*psVar11 == 0x3a) &&
               (psVar11 = (short *)FUN_0533e4f8(local_878,2), *psVar11 == 0x5c)) {
              local_890 = 3;
LAB_05342c4c:
              Path::PathString16::PathString16((PathString16 *)&local_1e8);
LAB_05342c6c:
              cVar5 = FUN_053428e0((PathString16 *)&local_878,(PathString16 *)&local_1e8,&local_890)
              ;
              uVar4 = local_1e0;
              uVar3 = local_1e8;
              if (cVar5 == '\0') {
                uVar14 = 1;
              }
              else {
                cVar5 = FUN_0533e57c(local_1e8,local_1e0);
                if (cVar5 != '\0') goto LAB_05342e14;
                uVar9 = FUN_0533e4d8(uVar3,uVar4);
                uVar14 = 0;
                if (uVar9 < 0x401) goto code_r0x05342da0;
              }
              goto LAB_05342c88;
            }
          }
        }
        else if (uVar2 < 0x7b) goto LAB_05342c0c;
      }
    }
    uVar14 = 0;
    Path::PathString16::~PathString16(aPStack_4b8);
    Path::PathString16::~PathString16(aPStack_5a8);
    Path::PathString16::~PathString16(aPStack_698);
    Path::PathString16::~PathString16(aPStack_788);
    goto LAB_05342a84;
  }
  goto LAB_05342b74;
code_r0x05342da0:
  Path::PathString16::PathString16((PathString16 *)&local_f8,(PathString16 *)&local_1e8);
  FUN_0533e950(local_f8,local_f0);
  uVar9 = FUN_053401b4(local_f8,local_f0,0x2e,0);
  ppuVar16 = &PTR_DAT_065fd450;
  if (uVar9 != 0xffffffffffffffff) {
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::erase((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
             *)&local_f8,uVar9,0xffffffffffffffff);
  }
  do {
    bVar6 = eastl::operator==((basic_string *)&local_f8,(value_type *)*ppuVar16);
    if (bVar6) {
      Path::PathString16::~PathString16((PathString16 *)&local_f8);
      goto LAB_05342e14;
    }
    ppuVar16 = ppuVar16 + 1;
  } while (ppuVar16 != (undefined **)&UNK_065fd508);
  local_2d8[1] = 0x20;
  local_2d8[0] = L'.';
  local_2d8[2] = 0;
  lVar7 = eastl::
          basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          ::find_first_not_of((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                               *)&local_1e8,local_2d8,0);
  Path::PathString16::~PathString16((PathString16 *)&local_f8);
  uVar4 = local_1e0;
  uVar3 = local_1e8;
  if (lVar7 != -1) {
    bVar6 = true;
    lVar7 = FUN_053401b4(local_1e8,local_1e0,0,0);
    sVar15 = 1;
    if (lVar7 == -1) goto LAB_05342eb8;
    while (sVar15 != 0x20) {
      bVar6 = false;
      while( true ) {
        sVar1 = sVar15 + 1;
        lVar7 = FUN_053401b4(uVar3,uVar4,sVar15,0);
        sVar15 = sVar1;
        if (lVar7 != -1) break;
LAB_05342eb8:
        if (sVar15 == 0x20) {
          if (!bVar6) goto LAB_05342e14;
          lVar7 = eastl::
                  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  ::find_first_of((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                                   *)&local_1e8,local_888,0);
          if (lVar7 == -1) goto LAB_05342c6c;
          uVar14 = 0;
          goto LAB_05342c88;
        }
      }
    }
  }
LAB_05342e14:
  uVar14 = 0;
LAB_05342c88:
  Path::PathString16::~PathString16((PathString16 *)&local_1e8);
LAB_05342b74:
  Path::PathString16::~PathString16(aPStack_4b8);
  Path::PathString16::~PathString16(aPStack_5a8);
  Path::PathString16::~PathString16(aPStack_698);
  Path::PathString16::~PathString16(aPStack_788);
LAB_05342a84:
  Path::PathString16::~PathString16((PathString16 *)&local_878);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsFilePathStringValid(char32_t const*, EA::IO::FileSystem) */

void EA::IO::IsFilePathStringValid(wchar32 *param_1,undefined4 param_2)

{
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_808,param_1,0x400,0xffffffffffffffff);
  IsFilePathStringValid(awStack_808,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsFilePathStringValid(wchar_t const*, EA::IO::FileSystem) */

void EA::IO::IsFilePathStringValid(wchar32 *param_1,undefined4 param_2)

{
  wchar16 awStack_808 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_808,param_1,0x400,0xffffffffffffffff);
  IsFilePathStringValid(awStack_808,param_2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveFreeSpace(char16_t const*) */

void EA::IO::GetDriveFreeSpace(wchar16 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  statfs sStack_480;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(acStack_408,param_1,0x400,0xffffffffffffffff);
  cVar1 = Directory::Exists(acStack_408);
  if (cVar1 == '\0') {
    cVar1 = File::Exists(acStack_408);
    lVar4 = -1;
    if (cVar1 == '\0') goto LAB_05343d28;
    pcVar3 = strstr(acStack_408,"appbundle:/");
  }
  else {
    pcVar3 = strstr(acStack_408,"appbundle:/");
  }
  if (acStack_408 == pcVar3) {
    lVar4 = 0;
  }
  else {
    iVar2 = statfs(acStack_408,&sStack_480);
    lVar4 = -1;
    if (iVar2 == 0) {
      lVar4 = sStack_480.f_bfree * sStack_480.f_frsize;
    }
  }
LAB_05343d28:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveFreeSpace(char const*) */

void EA::IO::GetDriveFreeSpace(char *param_1)

{
  wchar16 *pwVar1;
  undefined8 uVar2;
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_f8,param_1);
  pwVar1 = (wchar16 *)FUN_0533e4f4(local_f8[0]);
  uVar2 = GetDriveFreeSpace(pwVar1);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveFreeSpace(char32_t const*) */

void EA::IO::GetDriveFreeSpace(wchar32 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar1 = (char *)FUN_0533e4ec(local_98[0]);
  uVar2 = GetDriveFreeSpace(pcVar1);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::SetTempDirectory(char16_t const*) */

ulong EA::IO::SetTempDirectory(wchar16 *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = StdC::Strlen(param_1);
  if (0x401 < lVar2 + 2U) {
    return 0;
  }
  if (*param_1 == L'\0') {
    uVar3 = 1;
    gpTempDirectory = 0;
  }
  else {
    StdC::Strlcpy(&gpTempDirectory,param_1,0x401);
    Path::EnsureTrailingSeparator(&gpTempDirectory,0x401);
    bVar1 = Directory::Exists(&gpTempDirectory);
    uVar3 = (ulong)bVar1;
    if (bVar1 == 0) {
      uVar3 = Directory::Create(&gpTempDirectory);
      return uVar3;
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::SetTempDirectory(char const*) */

void EA::IO::SetTempDirectory(char *param_1)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  undefined8 local_f8 [30];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString16::PathString16((PathString16 *)local_f8);
  ConvertPath((PathString16 *)local_f8,param_1);
  pwVar2 = (wchar16 *)FUN_0533e4f4(local_f8[0]);
  uVar1 = SetTempDirectory(pwVar2);
  Path::PathString16::~PathString16((PathString16 *)local_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::SetTempDirectory(char32_t const*) */

void EA::IO::SetTempDirectory(wchar32 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 local_98 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)local_98);
  ConvertPath((PathString8 *)local_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(local_98[0]);
  uVar1 = SetTempDirectory(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::SetTempDirectory(wchar_t const*) */

void EA::IO::SetTempDirectory(wchar_t *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 auStack_98 [18];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Path::PathString8::PathString8((PathString8 *)auStack_98);
  ConvertPath((PathString8 *)auStack_98,param_1);
  pcVar2 = (char *)FUN_0533e4ec(auStack_98[0]);
  uVar1 = SetTempDirectory(pcVar2);
  Path::PathString8::~PathString8((PathString8 *)auStack_98);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveInfo(EA::IO::DriveInfo16*, unsigned long) */

void EA::IO::GetDriveInfo(DriveInfo16 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  DriveInfo8 *pDVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  DriveInfo16 *this;
  undefined1 *puVar7;
  undefined4 *puVar8;
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = -(param_2 * 0x50 + 0x10);
  puVar7 = &stack0xfffffffffffff7a0 + lVar2;
  if (param_2 == 0) {
    uVar4 = Thread::GetModuleHandleFromAddress(&stack0xfffffffffffff7a0 + lVar2);
  }
  else {
    uVar6 = 0;
    do {
      pDVar3 = (DriveInfo8 *)FUN_0533e438(puVar7);
      if (pDVar3 != (DriveInfo8 *)0x0) {
        DriveInfo8::DriveInfo8(pDVar3,0,0);
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 0x50;
    } while (uVar6 != param_2);
    uVar4 = Thread::GetModuleHandleFromAddress(&stack0xfffffffffffff7a0 + lVar2);
    uVar1 = uVar4;
    if (uVar6 < uVar4) {
      uVar1 = uVar6;
    }
    if (uVar1 != 0) {
      uVar6 = 0;
      this = param_1 + 8;
      puVar8 = (undefined4 *)(&stack0xfffffffffffff7a0 + lVar2);
      do {
        uVar6 = uVar6 + 1;
        pcVar5 = (char *)FUN_0533e500(*(undefined8 *)(puVar8 + 2));
        StrlcpyUTF8ToUTF16(awStack_808,0x400,pcVar5,0xffffffffffffffff);
        eastl::
        basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
        ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                  *)this,awStack_808);
        *(undefined4 *)(this + -8) = *puVar8;
        this = (DriveInfo16 *)(this + 0x60);
        puVar8 = puVar8 + 0x14;
      } while (uVar6 != uVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsFileNameStringValid(char16_t const*, EA::IO::FileSystem) */

void EA::IO::IsFileNameStringValid(wchar16 *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined2 local_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined8 local_f0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  Path::PathString16::PathString16((PathString16 *)&local_1e8,param_1);
  uVar4 = local_1e8;
  uVar3 = FUN_0533e4d8(local_1e8,local_1e0);
  if (uVar3 < 0x400) {
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        puVar5 = (undefined2 *)FUN_0533e4f8(uVar4,uVar7);
        cVar2 = IsFileNameCharValid(*puVar5,param_2);
        bVar1 = false;
        if (cVar2 == '\0') goto LAB_05345654;
        uVar7 = uVar7 + 1;
        uVar4 = local_1e8;
      } while (uVar7 != uVar3);
    }
    if ((param_2 - 5U < 2) || (param_2 - 2U < 2)) {
      Path::PathString16::PathString16((PathString16 *)&local_f8,(PathString16 *)&local_1e8);
      FUN_0533e950(CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,local_f8))),local_f0);
      uVar3 = FUN_053401b4(CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,local_f8))),
                           local_f0,0x2e,0);
      if (uVar3 != 0xffffffffffffffff) {
        eastl::
        basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
        ::erase((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *)&local_f8,uVar3,0xffffffffffffffff);
      }
      ppuVar8 = &PTR_DAT_065fd450;
      eastl::
      basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::rtrim((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *)&local_f8);
      do {
        bVar1 = eastl::operator==((basic_string *)&local_f8,(value_type *)*ppuVar8);
        if (bVar1) {
          bVar1 = false;
          Path::PathString16::~PathString16((PathString16 *)&local_f8);
          goto LAB_05345654;
        }
        ppuVar8 = ppuVar8 + 1;
      } while (ppuVar8 != (undefined **)&UNK_065fd508);
      Path::PathString16::~PathString16((PathString16 *)&local_f8);
    }
    local_f8 = 0x2e;
    uStack_f6 = 0x20;
    uStack_f4 = 0;
    lVar6 = eastl::
            basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            ::find_first_not_of((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                                 *)&local_1e8,(wchar16 *)&local_f8,0);
    bVar1 = lVar6 != -1;
  }
LAB_05345654:
  Path::PathString16::~PathString16((PathString16 *)&local_1e8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsFileNameStringValid(char32_t const*, EA::IO::FileSystem) */

void EA::IO::IsFileNameStringValid(wchar32 *param_1,undefined4 param_2)

{
  wchar16 awStack_808 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_808,param_1,0x400,0xffffffffffffffff);
  IsFileNameStringValid(awStack_808,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsFileNameStringValid(wchar_t const*, EA::IO::FileSystem) */

void EA::IO::IsFileNameStringValid(wchar32 *param_1,undefined4 param_2)

{
  wchar16 awStack_808 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_808,param_1,0x400,0xffffffffffffffff);
  IsFileNameStringValid(awStack_808,param_2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsDirectoryNameStringValid(wchar_t const*, EA::IO::FileSystem) */

void EA::IO::IsDirectoryNameStringValid(wchar32 *param_1,undefined4 param_2)

{
  wchar16 awStack_808 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  StdC::Strlcpy(awStack_808,param_1,0x400,0xffffffffffffffff);
  IsFileNameStringValid(awStack_808,param_2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::IsDirectoryNameStringValid(char16_t const*, EA::IO::FileSystem) */

void EA::IO::IsDirectoryNameStringValid(wchar16 *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  bVar1 = false;
  Path::PathString16::PathString16((PathString16 *)&uStack_1e8,param_1);
  uVar4 = uStack_1e8;
  uVar3 = FUN_0533e4d8(uStack_1e8,uStack_1e0);
  if (uVar3 < 0x400) {
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        puVar5 = (undefined2 *)FUN_0533e4f8(uVar4,uVar7);
        cVar2 = IsFileNameCharValid(*puVar5,param_2);
        bVar1 = false;
        if (cVar2 == '\0') goto LAB_05345654;
        uVar7 = uVar7 + 1;
        uVar4 = uStack_1e8;
      } while (uVar7 != uVar3);
    }
    if ((param_2 - 5U < 2) || (param_2 - 2U < 2)) {
      Path::PathString16::PathString16((PathString16 *)&uStack_f8,(PathString16 *)&uStack_1e8);
      FUN_0533e950(CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,uStack_f8))),uStack_f0);
      uVar3 = FUN_053401b4(CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,uStack_f8))),
                           uStack_f0,0x2e,0);
      if (uVar3 != 0xffffffffffffffff) {
        eastl::
        basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
        ::erase((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *)&uStack_f8,uVar3,0xffffffffffffffff);
      }
      ppuVar8 = &PTR_DAT_065fd450;
      eastl::
      basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
      ::rtrim((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
               *)&uStack_f8);
      do {
        bVar1 = eastl::operator==((basic_string *)&uStack_f8,(value_type *)*ppuVar8);
        if (bVar1) {
          bVar1 = false;
          Path::PathString16::~PathString16((PathString16 *)&uStack_f8);
          goto LAB_05345654;
        }
        ppuVar8 = ppuVar8 + 1;
      } while (ppuVar8 != (undefined **)&UNK_065fd508);
      Path::PathString16::~PathString16((PathString16 *)&uStack_f8);
    }
    uStack_f8 = 0x2e;
    uStack_f6 = 0x20;
    uStack_f4 = 0;
    lVar6 = eastl::
            basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            ::find_first_not_of((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                                 *)&uStack_1e8,(wchar16 *)&uStack_f8,0);
    bVar1 = lVar6 != -1;
  }
LAB_05345654:
  Path::PathString16::~PathString16((PathString16 *)&uStack_1e8);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveInfo(EA::IO::DriveInfo32*, unsigned long) */

void EA::IO::GetDriveInfo(DriveInfo32 *param_1,ulong param_2)

{
  DriveInfo8 *pDVar1;
  ulong uVar2;
  DriveInfo32 *pDVar3;
  DriveInfo8 *pDVar4;
  fixed_string *pfVar5;
  ulong uVar6;
  DriveInfo8 local_328 [8];
  fixed_string afStack_320 [792];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar4 = local_328;
  do {
    pDVar1 = pDVar4 + 0x50;
    DriveInfo8::DriveInfo8(pDVar4,0,0);
    pDVar4 = pDVar1;
  } while (pDVar1 != (DriveInfo8 *)&local_8);
  uVar2 = Thread::GetModuleHandleFromAddress(local_328);
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  if (uVar2 != 0) {
    pfVar5 = afStack_320;
    uVar6 = 0;
    pDVar3 = param_1 + 8;
    do {
      *(undefined4 *)(pDVar3 + -8) = *(undefined4 *)(pfVar5 + -8);
      uVar6 = uVar6 + 1;
      StdC::
      Strlcpy<eastl::fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                ((fixed_string *)pDVar3,pfVar5);
      pfVar5 = pfVar5 + 0x50;
      pDVar3 = (DriveInfo32 *)(pDVar3 + 0x88);
    } while (uVar6 != uVar2);
  }
  pDVar4 = (DriveInfo8 *)&local_8;
  do {
    pDVar4 = pDVar4 + -0x50;
    DriveInfo8::~DriveInfo8(pDVar4);
  } while (pDVar4 != local_328);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::GetDriveInfo(EA::IO::DriveInfoW*, unsigned long) */

void EA::IO::GetDriveInfo(DriveInfoW *param_1,ulong param_2)

{
  DriveInfo8 *pDVar1;
  ulong uVar2;
  DriveInfoW *pDVar3;
  DriveInfo8 *pDVar4;
  fixed_string *pfVar5;
  ulong uVar6;
  DriveInfo8 local_328 [8];
  fixed_string afStack_320 [792];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar4 = local_328;
  do {
    pDVar1 = pDVar4 + 0x50;
    DriveInfo8::DriveInfo8(pDVar4,0,0);
    pDVar4 = pDVar1;
  } while (pDVar1 != (DriveInfo8 *)&local_8);
  uVar2 = Thread::GetModuleHandleFromAddress(local_328);
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  if (uVar2 != 0) {
    pfVar5 = afStack_320;
    uVar6 = 0;
    pDVar3 = param_1 + 8;
    do {
      *(undefined4 *)(pDVar3 + -8) = *(undefined4 *)(pfVar5 + -8);
      uVar6 = uVar6 + 1;
      StdC::
      Strlcpy<eastl::fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>
                ((fixed_string *)pDVar3,pfVar5);
      pfVar5 = pfVar5 + 0x50;
      pDVar3 = (DriveInfoW *)(pDVar3 + 0x88);
    } while (uVar6 != uVar2);
  }
  pDVar4 = (DriveInfo8 *)&local_8;
  do {
    pDVar4 = pDVar4 + -0x50;
    DriveInfo8::~DriveInfo8(pDVar4);
  } while (pDVar4 != local_328);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::Move(char16_t const*, char16_t const*, bool) */

void EA::IO::Move(wchar16 *param_1,wchar16 *param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = Directory::Exists(param_1);
  if (cVar1 == '\0') {
    return;
  }
  File::Move(param_1,param_2,param_3);
  return;
}


/* EA::IO::Move(char32_t const*, char32_t const*, bool) */

void EA::IO::Move(wchar32 *param_1,wchar32 *param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = Directory::Exists(param_1);
  if (cVar1 == '\0') {
    return;
  }
  File::Move(param_1,param_2,param_3);
  return;
}


/* EA::IO::Move(char const*, char const*, bool) */

void EA::IO::Move(char *param_1,char *param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = Directory::Exists(param_1);
  if (cVar1 == '\0') {
    return;
  }
  File::Move(param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::MakeTempPathName(char*, char const*, char const*, char const*, unsigned int) */

void EA::IO::MakeTempPathName(char *param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 local_588;
  undefined8 local_580;
  FileStream aFStack_4f8 [216];
  char acStack_420 [24];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (char *)0x0) {
    cVar2 = '\0';
  }
  else {
    uVar3 = FUN_0533e398();
    uVar4 = FUN_0533e3a0();
    if (param_3 == (char *)0x0) {
      param_3 = "temp";
    }
    if (param_4 == (char *)0x0) {
      param_4 = ".tmp";
    }
    if (param_2 == (char *)0x0) {
      param_2 = acStack_408;
      cVar2 = '\0';
      iVar5 = GetTempDirectory(param_2,0x400);
      if (iVar5 == 0) goto LAB_053470c0;
    }
    lVar7 = 100000;
    do {
      Path::PathString8::PathString8((PathString8 *)&local_588,param_2);
      Path::Append((PathString8 *)&local_588,param_3,(char *)0x0);
      pcVar6 = (char *)StdC::U32toa(uVar4 ^ uVar3,acStack_420,10);
      Path::PathString8::operator+=((PathString8 *)&local_588,pcVar6);
      Path::PathString8::operator+=((PathString8 *)&local_588,param_4);
      uVar1 = local_588;
      uVar4 = FUN_0533e4cc(local_588,local_580);
      if (param_5 < uVar4) {
        Path::PathString8::~PathString8((PathString8 *)&local_588);
        break;
      }
      pcVar6 = (char *)FUN_0533e4ec(uVar1);
      StdC::Strlcpy(param_1,pcVar6,(ulong)param_5);
      FileStream::FileStream(aFStack_4f8,param_1);
      cVar2 = FileStream::Open(aFStack_4f8,3,1,1,0);
      if (cVar2 != '\0') {
        FileStream::Close(aFStack_4f8);
        FileStream::~FileStream(aFStack_4f8);
        Path::PathString8::~PathString8((PathString8 *)&local_588);
        goto LAB_053470c0;
      }
      iVar5 = FileStream::GetState(aFStack_4f8);
      if (iVar5 == -9) {
        FileStream::~FileStream(aFStack_4f8);
        Path::PathString8::~PathString8((PathString8 *)&local_588);
        break;
      }
      FileStream::~FileStream(aFStack_4f8);
      Path::PathString8::~PathString8((PathString8 *)&local_588);
      uVar4 = FUN_0533e3a0();
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    cVar2 = '\0';
  }
LAB_053470c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::MakeTempPathName(char32_t*, char32_t const*, char32_t const*, char32_t const*, unsigned
   int) */

void EA::IO::MakeTempPathName
               (wchar32 *param_1,wchar32 *param_2,wchar32 *param_3,wchar32 *param_4,uint param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char local_1008 [1024];
  char local_c08 [1024];
  char local_808 [1024];
  char local_408 [1024];
  long local_8;
  
  pcVar1 = local_c08;
  pcVar2 = local_808;
  pcVar3 = local_408;
  local_8 = ___stack_chk_guard;
  local_1008[0] = '\0';
  local_c08[0] = '\0';
  local_808[0] = '\0';
  local_408[0] = '\0';
  if (param_2 != (wchar32 *)0x0) {
    StdC::Strlcpy(pcVar1,param_2,0x400,0xffffffffffffffff);
  }
  if (param_3 != (wchar32 *)0x0) {
    StdC::Strlcpy(pcVar2,param_3,0x400,0xffffffffffffffff);
  }
  if (param_4 != (wchar32 *)0x0) {
    StdC::Strlcpy(pcVar3,param_4,0x400,0xffffffffffffffff);
  }
  if (param_2 == (wchar32 *)0x0) {
    pcVar1 = (char *)0x0;
  }
  if (param_3 == (wchar32 *)0x0) {
    pcVar2 = (char *)0x0;
  }
  if (param_4 == (wchar32 *)0x0) {
    pcVar3 = (char *)0x0;
  }
  cVar4 = MakeTempPathName(local_1008,pcVar1,pcVar2,pcVar3,0x400);
  bVar5 = false;
  if (cVar4 != '\0') {
    iVar6 = StdC::Strlcpy(param_1,local_1008,(ulong)param_5,0xffffffffffffffff);
    bVar5 = iVar6 < (int)param_5 && 0 < iVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::MakeTempPathName(wchar_t*, wchar_t const*, wchar_t const*, wchar_t const*, unsigned int)
    */

void EA::IO::MakeTempPathName
               (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,uint param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char acStack_1008 [1024];
  char acStack_c08 [1024];
  char acStack_808 [1024];
  char acStack_408 [1024];
  long lStack_8;
  
  pcVar1 = acStack_c08;
  pcVar2 = acStack_808;
  pcVar3 = acStack_408;
  lStack_8 = ___stack_chk_guard;
  acStack_1008[0] = '\0';
  acStack_c08[0] = '\0';
  acStack_808[0] = '\0';
  acStack_408[0] = '\0';
  if (param_2 != (wchar_t *)0x0) {
    StdC::Strlcpy(pcVar1,param_2,0x400,0xffffffffffffffff);
  }
  if (param_3 != (wchar_t *)0x0) {
    StdC::Strlcpy(pcVar2,param_3,0x400,0xffffffffffffffff);
  }
  if (param_4 != (wchar_t *)0x0) {
    StdC::Strlcpy(pcVar3,param_4,0x400,0xffffffffffffffff);
  }
  if (param_2 == (wchar_t *)0x0) {
    pcVar1 = (char *)0x0;
  }
  if (param_3 == (wchar_t *)0x0) {
    pcVar2 = (char *)0x0;
  }
  if (param_4 == (wchar_t *)0x0) {
    pcVar3 = (char *)0x0;
  }
  cVar4 = MakeTempPathName(acStack_1008,pcVar1,pcVar2,pcVar3,0x400);
  bVar5 = false;
  if (cVar4 != '\0') {
    iVar6 = StdC::Strlcpy(param_1,acStack_1008,(ulong)param_5,0xffffffffffffffff);
    bVar5 = iVar6 < (int)param_5 && 0 < iVar6;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::MakeTempPathName(char16_t*, char16_t const*, char16_t const*, char16_t const*, unsigned
   int) */

void EA::IO::MakeTempPathName
               (wchar16 *param_1,wchar16 *param_2,wchar16 *param_3,wchar16 *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char acStack_1008 [1024];
  char acStack_c08 [1024];
  char acStack_808 [1024];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (wchar16 *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = acStack_c08;
    StdC::Strlcpy(pcVar5,param_2,0x400,0xffffffffffffffff);
  }
  pcVar4 = (char *)0x0;
  if (param_3 != (wchar16 *)0x0) {
    pcVar4 = acStack_808;
    StdC::Strlcpy(pcVar4,param_3,0x400,0xffffffffffffffff);
  }
  if (param_4 == (wchar16 *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = acStack_408;
    StdC::Strlcpy(pcVar3,param_4,0x400,0xffffffffffffffff);
  }
  uVar1 = MakeTempPathName(acStack_1008,pcVar5,pcVar4,pcVar3,0x400);
  uVar2 = uVar1 & 0xff;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = StdC::Strlcpy(param_1,acStack_1008,(ulong)param_5,0xffffffffffffffff);
    uVar2 = ((uint)((int)param_5 < (int)uVar2) | uVar2 >> 0x1f) ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::StrEq(char16_t const*, char16_t const*) */

undefined8 EA::IO::StrEq(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  
  wVar1 = *param_2;
  if (wVar1 == *param_1) {
    do {
      if (wVar1 == L'\0') {
        return 1;
      }
      param_2 = param_2 + 1;
      wVar1 = *param_2;
      param_1 = param_1 + 1;
    } while (wVar1 == *param_1);
  }
  return 0;
}


/* EA::IO::StrEq(wchar_t const*, wchar_t const*) */

undefined8 EA::IO::StrEq(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  
  wVar1 = *param_1;
  if (wVar1 == *param_2) {
    do {
      if (wVar1 == L'\0') {
        return 1;
      }
      param_1 = param_1 + 1;
      wVar1 = *param_1;
      param_2 = param_2 + 1;
    } while (wVar1 == *param_2);
  }
  return 0;
}


/* EA::IO::StrlcpyUTF16ToUTF8(char*, unsigned long, char16_t const*, unsigned long) */

long EA::IO::StrlcpyUTF16ToUTF8(char *param_1,ulong param_2,wchar16 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = StdC::Strlcpy(param_1,param_3,param_2,param_4);
  return (long)iVar1;
}


/* EA::IO::StrlcpyUTF8ToUTF16(char16_t*, unsigned long, char const*, unsigned long) */

long EA::IO::StrlcpyUTF8ToUTF16(wchar16 *param_1,ulong param_2,char *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = StdC::Strlcpy(param_1,param_3,param_2,param_4);
  return (long)iVar1;
}


/* EA::IO::StrEq16(char16_t const*, char16_t const*) */

undefined8 EA::IO::StrEq16(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  
  wVar1 = *param_2;
  if (wVar1 == *param_1) {
    do {
      if (wVar1 == L'\0') {
        return 1;
      }
      param_2 = param_2 + 1;
      wVar1 = *param_2;
      param_1 = param_1 + 1;
    } while (wVar1 == *param_1);
  }
  return 0;
}


/* EA::IO::EAIOStrlen8(char const*) */

long EA::IO::EAIOStrlen8(char *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)param_1;
  if (((ulong)param_1 & 7) == 0) {
LAB_05351178:
    do {
      puVar2 = puVar1;
      puVar1 = puVar2 + 1;
    } while ((*puVar2 + 0xfefefefefefefeff & (*puVar2 ^ 0xffffffffffffffff) & 0x8080808080808080) ==
             0);
    if ((char)*puVar2 == '\0') {
      return (long)puVar2 - (long)param_1;
    }
    do {
      puVar2 = (ulong *)((long)puVar2 + 1);
    } while (*(char *)puVar2 != '\0');
  }
  else {
    puVar2 = (ulong *)param_1;
    if (*param_1 == '\0') {
      return 0;
    }
    do {
      puVar2 = (ulong *)((long)puVar2 + 1);
      puVar1 = puVar2;
      if (((ulong)puVar2 & 7) == 0) goto LAB_05351178;
    } while (*(char *)puVar2 != '\0');
  }
  return (long)puVar2 - (long)param_1;
}


/* EA::IO::EAIOStrlen16(char16_t const*) */

long EA::IO::EAIOStrlen16(wchar16 *param_1)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  
  pwVar2 = param_1;
  if (((ulong)param_1 & 7) != 0) {
    if (*param_1 == L'\0') {
      return 0;
    }
    while (pwVar2 = pwVar2 + 1, ((ulong)pwVar2 & 7) != 0) {
      if (*pwVar2 == L'\0') {
        return (long)pwVar2 - (long)param_1 >> 1;
      }
    }
  }
  do {
    pwVar3 = pwVar2;
    pwVar2 = pwVar3 + 4;
  } while ((*(ulong *)pwVar3 + 0xfffefffefffeffff & (*(ulong *)pwVar3 ^ 0xffffffffffffffff) &
           0x8000800080008000) == 0);
  wVar1 = *pwVar3;
  while (wVar1 != L'\0') {
    pwVar3 = pwVar3 + 1;
    wVar1 = *pwVar3;
  }
  return (long)pwVar3 - (long)param_1 >> 1;
}


/* EA::IO::EAIOStrlcpy8(char*, char const*, unsigned long) */

char * EA::IO::EAIOStrlcpy8(char *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if (param_3 == 0) {
LAB_05350894:
    do {
      pcVar3 = pcVar2 + 1;
      pcVar4 = pcVar3;
      if (*pcVar2 == '\0') break;
      pcVar4 = pcVar2 + 2;
      pcVar2 = pcVar4;
    } while (*pcVar3 != '\0');
  }
  else {
    do {
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        *param_1 = '\0';
        goto LAB_05350894;
      }
      cVar1 = *pcVar2;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar4 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return pcVar4 + (-1 - (long)param_2);
}


/* EA::IO::EAIOStrlcat16(char16_t*, char16_t const*, unsigned long) */

long EA::IO::EAIOStrlcat16(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  
  pwVar2 = param_2;
  if (param_3 == 0) {
LAB_053508dc:
    do {
      pwVar4 = pwVar2 + 1;
      pwVar3 = pwVar4;
      if (*pwVar2 == L'\0') break;
      pwVar3 = pwVar2 + 2;
      pwVar2 = pwVar3;
    } while (*pwVar4 != L'\0');
  }
  else {
    do {
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        *param_1 = L'\0';
        goto LAB_053508dc;
      }
      wVar1 = *pwVar2;
      *param_1 = wVar1;
      param_1 = param_1 + 1;
      pwVar3 = pwVar2 + 1;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
  }
  return ((long)pwVar3 - (long)param_2 >> 1) + -1;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString8&, char16_t const*) */

void EA::IO::ConvertPath(PathString8 *param_1,wchar16 *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = StdC::Strlcpy((char *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pcVar2 = (char *)FUN_053481a0(*(undefined8 *)param_1);
  StdC::Strlcpy(pcVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPathUTF16ToUTF8(EA::IO::Path::PathString8&, char16_t const*) */

void EA::IO::ConvertPathUTF16ToUTF8(PathString8 *param_1,wchar16 *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = StdC::Strlcpy((char *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pcVar2 = (char *)FUN_053481a0(*(undefined8 *)param_1);
  StdC::Strlcpy(pcVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString8&, char32_t const*) */

void EA::IO::ConvertPath(PathString8 *param_1,wchar32 *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = StdC::Strlcpy((char *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pcVar2 = (char *)FUN_053481a0(*(undefined8 *)param_1);
  StdC::Strlcpy(pcVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString8&, wchar_t const*) */

void EA::IO::ConvertPath(PathString8 *param_1,wchar_t *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = StdC::Strlcpy((char *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pcVar2 = (char *)FUN_053481a0(*(undefined8 *)param_1);
  StdC::Strlcpy(pcVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString16&, char const*) */

void EA::IO::ConvertPath(PathString16 *param_1,char *param_2)

{
  uint uVar1;
  wchar16 *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar16 *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar16 *)FUN_0534819c(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPathUTF8ToUTF16(EA::IO::Path::PathString16&, char const*) */

void EA::IO::ConvertPathUTF8ToUTF16(PathString16 *param_1,char *param_2)

{
  uint uVar1;
  wchar16 *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar16 *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar16 *)FUN_0534819c(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString16&, char32_t const*) */

void EA::IO::ConvertPath(PathString16 *param_1,wchar32 *param_2)

{
  uint uVar1;
  wchar16 *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar16 *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar16 *)FUN_0534819c(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString16&, wchar_t const*) */

void EA::IO::ConvertPath(PathString16 *param_1,wchar_t *param_2)

{
  uint uVar1;
  wchar16 *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar16 *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar16 *)FUN_0534819c(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString32&, char const*) */

void EA::IO::ConvertPath(PathString32 *param_1,char *param_2)

{
  uint uVar1;
  wchar32 *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar32 *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar32 *)FUN_05348198(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString32&, char16_t const*) */

void EA::IO::ConvertPath(PathString32 *param_1,wchar16 *param_2)

{
  uint uVar1;
  wchar32 *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar32 *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar32 *)FUN_05348198(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathString32&, wchar_t const*) */

void EA::IO::ConvertPath(PathString32 *param_1,wchar_t *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_05347fa4(0,param_2,0);
  eastl::
  basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  uVar2 = FUN_05348198(*(undefined8 *)param_1);
  FUN_05347fa4(uVar2,param_2,uVar1 + 1);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathStringW&, char const*) */

void EA::IO::ConvertPath(PathStringW *param_1,char *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar_t *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar_t *)FUN_053481a4(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathStringW&, char16_t const*) */

void EA::IO::ConvertPath(PathStringW *param_1,wchar16 *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  uVar1 = StdC::Strlcpy((wchar_t *)0x0,param_2,0,0xffffffffffffffff);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  pwVar2 = (wchar_t *)FUN_053481a4(*(undefined8 *)param_1);
  StdC::Strlcpy(pwVar2,param_2,(ulong)(uVar1 + 1),0xffffffffffffffff);
  return;
}


/* EA::IO::ConvertPath(EA::IO::Path::PathStringW&, char32_t const*) */

void EA::IO::ConvertPath(PathStringW *param_1,wchar32 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_05347f90(0,param_2,0);
  eastl::
  basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
  ::resize((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
            *)param_1,(ulong)uVar1);
  uVar2 = FUN_053481a4(*(undefined8 *)param_1);
  FUN_05347f90(uVar2,param_2,uVar1 + 1);
  return;
}


/* EA::IO::GetAllocator() */

void EA::IO::GetAllocator(void)

{
  if (gpCoreAllocator != 0) {
    return;
  }
  gpCoreAllocator = Allocator::ICoreAllocator::GetDefaultAllocator();
  return;
}


/* EA::IO::SetAllocator(EA::Allocator::ICoreAllocator*) */

void EA::IO::SetAllocator(ICoreAllocator *param_1)

{
  gpCoreAllocator = param_1;
  return;
}


/* EA::IO::FnMatch(wchar_t const*, wchar_t const*, int) */

uint EA::IO::FnMatch(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  uint uVar1;
  wchar32 wVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  wchar32 *pwVar6;
  long lVar7;
  wchar32 wVar8;
  wchar32 *pwVar9;
  wchar32 wVar10;
  
  wVar10 = L'\\';
  if (((uint)param_3 >> 6 & 1) == 0) {
    param_3 = param_3 | 0x80;
    wVar10 = L'/';
  }
  uVar1 = param_3 & 1;
  pwVar6 = param_2;
LAB_053fbca8:
  do {
    while( true ) {
      wVar8 = *param_1;
      pwVar9 = param_1 + 1;
      if (wVar8 != L'?') break;
      wVar8 = *pwVar6;
      if (wVar8 == L'\0') {
        return 0;
      }
      if (wVar10 == wVar8) {
        if (uVar1 != 0) {
          return 0;
        }
        pwVar6 = pwVar6 + 1;
        param_1 = pwVar9;
      }
      else {
        if ((wVar8 == L'.') && ((param_3 & 4U) != 0)) {
          if (pwVar6 == param_2) {
            return 0;
          }
          if ((uVar1 != 0) && (wVar10 == pwVar6[-1])) {
            return 0;
          }
        }
LAB_053fbe24:
        pwVar6 = pwVar6 + 1;
        param_1 = pwVar9;
      }
    }
    if (0x3f < (uint)wVar8) {
      if (wVar8 != L'[') {
        if ((((wVar8 == L'\\') && (wVar10 != L'\\')) && ((param_3 & 2U) == 0)) &&
           (param_1[1] != L'\0')) {
          pwVar9 = param_1 + 2;
          wVar8 = param_1[1];
        }
LAB_053fbd54:
        wVar2 = *pwVar6;
        if (wVar2 != wVar8) {
          if ((param_3 & 0x20U) == 0) {
LAB_053fbd88:
            if (((uint)param_3 >> 4 & 1) == 0) {
              return param_3 & 0x10;
            }
            if (wVar2 != L'\0') {
              return 0;
            }
            if (pwVar6 != param_2 && wVar8 == wVar10) {
              return 1;
            }
            if (pwVar6 != param_2 + 1) {
              return 0;
            }
            if (wVar10 != *param_2) {
              return 0;
            }
            return 1;
          }
          iVar4 = StdC::Tolower(wVar8);
          iVar5 = StdC::Tolower(wVar2);
          if (iVar4 != iVar5) goto LAB_053fbd88;
        }
        goto LAB_053fbe24;
      }
      wVar8 = *pwVar6;
      if (wVar8 == L'\0') {
        return 0;
      }
      if ((wVar10 == wVar8) && (uVar1 != 0)) {
        return 0;
      }
      param_1 = (wchar_t *)FUN_053fb428(pwVar9,wVar10,wVar8,param_3);
      if (param_1 == (wchar32 *)0x0) {
        return 0;
      }
      pwVar6 = pwVar6 + 1;
      goto LAB_053fbca8;
    }
    if (wVar8 == L'\0') {
      if (((uint)param_3 >> 3 & 1) == 0) {
        wVar8 = *pwVar6;
      }
      else {
        wVar8 = *pwVar6;
        if (wVar10 == wVar8) {
          return 1;
        }
      }
      return (uint)(wVar8 == L'\0');
    }
    if (wVar8 != L'*') goto LAB_053fbd54;
    wVar8 = param_1[1];
    while (wVar8 == L'*') {
      pwVar9 = pwVar9 + 1;
      wVar8 = *pwVar9;
    }
    wVar2 = *pwVar6;
    if ((wVar2 == L'.') && ((param_3 & 4U) != 0)) {
      if (pwVar6 == param_2) {
        return 0;
      }
      if ((uVar1 != 0) && (wVar10 == pwVar6[-1])) {
        return 0;
      }
    }
    if (wVar8 == L'\0') {
      if (uVar1 == 0) {
        return 1;
      }
      if (((uint)param_3 >> 3 & 1) != 0) {
        return 1;
      }
      lVar7 = StdC::Strchr(pwVar6,wVar10);
      return (uint)(lVar7 == 0);
    }
    if (wVar8 != wVar10) {
      if (wVar2 == L'\0') {
        return 0;
      }
      if (uVar1 != 0) {
        while( true ) {
          cVar3 = FnMatch(pwVar9,pwVar6,param_3 & 0xfffffffb);
          if (cVar3 != '\0') {
            return 1;
          }
          if (wVar10 == wVar2) break;
          pwVar6 = pwVar6 + 1;
          wVar2 = *pwVar6;
          if (wVar2 == L'\0') {
            return 0;
          }
        }
        return 0;
      }
LAB_053fbf1c:
      do {
        cVar3 = FnMatch(pwVar9,pwVar6,param_3 & 0xfffffffb);
        if (cVar3 != '\0') {
          return 1;
        }
        pwVar6 = pwVar6 + 1;
      } while (*pwVar6 != L'\0');
      return 0;
    }
    if (uVar1 == 0) {
      if (wVar2 == L'\0') {
        return 0;
      }
      goto LAB_053fbf1c;
    }
    pwVar6 = (wchar32 *)StdC::Strchr(pwVar6,wVar10);
    param_1 = pwVar9;
    if (pwVar6 == (wchar32 *)0x0) {
      return 0;
    }
  } while( true );
}


/* EA::IO::EntryFindFinish(EA::IO::EntryFindData*) */

void EA::IO::EntryFindFinish(EntryFindData *param_1)

{
  ICoreAllocator *pIVar1;
  DIR *__dirp;
  
  if (param_1 != (EntryFindData *)0x0) {
    __dirp = *(DIR **)(param_1 + 0x3020);
    if (__dirp == (DIR *)&DAT_06c45400) {
      FUN_053f7334();
      return;
    }
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
    if (param_1[0x1005] != (EntryFindData)0x0) {
      pIVar1 = (ICoreAllocator *)GetAllocator();
      Internal::Free<EA::IO::EntryFindData>(pIVar1,param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindNext(EA::IO::EntryFindData*) */

void EA::IO::EntryFindNext(EntryFindData *param_1)

{
  EntryFindData EVar1;
  char cVar2;
  int iVar3;
  EntryFindData *pEVar4;
  char *pcVar5;
  DIR *__dirp;
  dirent *local_2c8;
  undefined1 auStack_2c0 [128];
  long local_240;
  undefined8 local_1b0 [18];
  dirent dStack_120;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar4 = param_1;
  if (param_1 != (EntryFindData *)0x0) {
    __dirp = *(DIR **)(param_1 + 0x3020);
    if (__dirp == (DIR *)&DAT_06c45400) {
      pEVar4 = (EntryFindData *)FUN_053f7280();
    }
    else {
      iVar3 = readdir_r(__dirp,&dStack_120,&local_2c8);
      pEVar4 = (EntryFindData *)0x0;
      if (iVar3 == 0) {
        Path::PathString8::PathString8((PathString8 *)&local_240);
        do {
          if (local_2c8 == (dirent *)0x0) {
            Path::PathString8::~PathString8((PathString8 *)&local_240);
            pEVar4 = (EntryFindData *)0x0;
            goto LAB_053f7fb0;
          }
          if ((*(int *)(param_1 + 0x2020) == 0) ||
             (StdC::Strlcpy<EA::IO::Path::PathString8,wchar_t_const>
                        ((PathString8 *)&local_240,(wchar_t *)(param_1 + 0x2020),0xffffffffffffffff)
             , *(int *)(param_1 + 0x2020) == 0)) {
LAB_053f8014:
            StdC::Strlcpy((wchar_t *)(param_1 + 4),local_2c8->d_name,0x400,0xffffffffffffffff);
            EVar1 = (EntryFindData)(local_2c8->d_type == '\x04');
            param_1[0x1004] = EVar1;
            if ((bool)EVar1) {
              Path::EnsureTrailingSeparator((wchar_t *)(param_1 + 4),0x400);
            }
            *(undefined8 *)(param_1 + 0x1008) = 0;
            *(undefined8 *)(param_1 + 0x1010) = 0;
            *(undefined8 *)(param_1 + 0x1018) = 0;
            if (*param_1 != (EntryFindData)0x0) {
              Path::PathString8::PathString8((PathString8 *)local_1b0);
              ConvertPath((PathString8 *)local_1b0,(wchar_t *)(param_1 + 0x1020));
              Path::PathString8::operator+=((PathString8 *)local_1b0,local_2c8->d_name);
              pcVar5 = (char *)FUN_053f6fb4(local_1b0[0]);
              iVar3 = stat(pcVar5,(stat *)auStack_2c0);
              if (iVar3 == 0) {
                *(undefined8 *)(param_1 + 0x1008) = auStack_2c0._104_8_;
                *(undefined8 *)(param_1 + 0x1010) = auStack_2c0._88_8_;
                *(undefined8 *)(param_1 + 0x1018) = auStack_2c0._48_8_;
              }
              Path::PathString8::~PathString8((PathString8 *)local_1b0);
            }
            goto LAB_053f8120;
          }
          pcVar5 = (char *)FUN_053f6fb4(local_240);
          cVar2 = FnMatch(pcVar5,local_2c8->d_name,0);
          if (cVar2 != '\0') goto LAB_053f8014;
          iVar3 = readdir_r(__dirp,&dStack_120,&local_2c8);
        } while (iVar3 == 0);
        param_1 = (EntryFindData *)0x0;
LAB_053f8120:
        Path::PathString8::~PathString8((PathString8 *)&local_240);
        pEVar4 = param_1;
      }
    }
  }
LAB_053f7fb0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pEVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindFirst(wchar_t const*, wchar_t const*, EA::IO::EntryFindData*) */

void EA::IO::EntryFindFirst(wchar_t *param_1,wchar_t *param_2,EntryFindData *param_3)

{
  EntryFindData EVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  DIR *__dirp;
  ICoreAllocator *pIVar6;
  dirent *local_358;
  undefined1 auStack_350 [128];
  long local_2d0;
  undefined8 local_240 [18];
  undefined8 local_1b0 [18];
  dirent dStack_120;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*param_1 == L'\0') && (param_2 != (wchar_t *)0x0)) && (*param_2 == L'\0')) {
    param_3 = (EntryFindData *)0x0;
  }
  else {
    Path::PathString8::PathString8((PathString8 *)&local_2d0);
    Path::PathString8::PathString8((PathString8 *)local_240);
    iVar3 = StdC::Strlcpy((char *)0x0,param_1,0,0xffffffffffffffff);
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)&local_2d0,(long)iVar3);
    pcVar4 = (char *)FUN_053f7074(local_2d0);
    StdC::Strlcpy(pcVar4,param_1,(long)iVar3 + 1,0xffffffffffffffff);
    pcVar4 = (char *)FUN_053f6fb4(local_2d0);
    pcVar5 = strstr(pcVar4,"appbundle:/");
    if (pcVar4 == pcVar5) {
      param_3 = (EntryFindData *)FUN_053f7450(param_1,param_2,param_3);
    }
    else {
      __dirp = opendir(pcVar4);
      if (__dirp == (DIR *)0x0) {
        param_3 = (EntryFindData *)0x0;
      }
      else if (param_2 == (wchar_t *)0x0) {
        while (iVar3 = readdir_r(__dirp,&dStack_120,&local_358), iVar3 == 0) {
          while( true ) {
            if (local_358 == (dirent *)0x0) goto LAB_053f83fc;
            pcVar4 = local_358->d_name;
            iVar3 = strcmp(pcVar4,".");
            if (iVar3 == 0) break;
            iVar3 = strcmp(pcVar4,"..");
            if (iVar3 != 0) goto LAB_053f82d0;
            iVar3 = readdir_r(__dirp,&dStack_120,&local_358);
            if (iVar3 != 0) goto LAB_053f83fc;
          }
        }
LAB_053f83fc:
        param_3 = (EntryFindData *)0x0;
        closedir(__dirp);
      }
      else {
        do {
          do {
            iVar3 = readdir_r(__dirp,&dStack_120,&local_358);
            if ((iVar3 != 0) || (local_358 == (dirent *)0x0)) goto LAB_053f83fc;
            pcVar4 = local_358->d_name;
            iVar3 = strcmp(pcVar4,".");
          } while ((iVar3 == 0) || (iVar3 = strcmp(pcVar4,".."), iVar3 == 0));
          StdC::Strlcpy<EA::IO::Path::PathString8,wchar_t_const>
                    ((PathString8 *)local_240,param_2,0xffffffffffffffff);
          pcVar4 = (char *)FUN_053f6fb4(local_240[0]);
          cVar2 = FnMatch(pcVar4,local_358->d_name,0);
        } while (cVar2 == '\0');
LAB_053f82d0:
        if (param_3 == (EntryFindData *)0x0) {
          pIVar6 = (ICoreAllocator *)GetAllocator();
          param_3 = Internal::Allocate<EA::IO::EntryFindData>
                              (pIVar6,"EAIO/EAFileDirectory/EntryFindData");
          param_3[0x1005] = (EntryFindData)0x1;
        }
        StdC::Strlcpy((wchar_t *)(param_3 + 4),local_358->d_name,0x400,0xffffffffffffffff);
        EVar1 = (EntryFindData)(local_358->d_type == '\x04');
        param_3[0x1004] = EVar1;
        if ((bool)EVar1) {
          Path::EnsureTrailingSeparator((wchar_t *)(param_3 + 4),0x400);
        }
        StdC::Strlcpy((wchar_t *)(param_3 + 0x1020),param_1,0x400);
        *(undefined8 *)(param_3 + 0x1008) = 0;
        *(undefined8 *)(param_3 + 0x1010) = 0;
        *(undefined8 *)(param_3 + 0x1018) = 0;
        if (*param_3 != (EntryFindData)0x0) {
          Path::PathString8::PathString8((PathString8 *)local_1b0);
          ConvertPath((PathString8 *)local_1b0,(wchar_t *)(param_3 + 0x1020));
          Path::PathString8::operator+=((PathString8 *)local_1b0,local_358->d_name);
          pcVar4 = (char *)FUN_053f6fb4(local_1b0[0]);
          iVar3 = stat(pcVar4,(stat *)auStack_350);
          if (iVar3 == 0) {
            *(undefined8 *)(param_3 + 0x1008) = auStack_350._104_8_;
            *(undefined8 *)(param_3 + 0x1010) = auStack_350._88_8_;
            *(undefined8 *)(param_3 + 0x1018) = auStack_350._48_8_;
          }
          Path::PathString8::~PathString8((PathString8 *)local_1b0);
        }
        Internal::FilterEntries(param_3,param_2);
        *(DIR **)(param_3 + 0x3020) = __dirp;
      }
    }
    Path::PathString8::~PathString8((PathString8 *)local_240);
    Path::PathString8::~PathString8((PathString8 *)&local_2d0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindData* EA::IO::EntryFindFirstImpl<char>(char const*, char const*,
   EA::IO::EntryFindData*) */

EntryFindData * EA::IO::EntryFindFirstImpl<char>(char *param_1,char *param_2,EntryFindData *param_3)

{
  uint uVar1;
  uint uVar2;
  EntryFindData *pEVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,param_1,0x400,0xffffffffffffffff);
  pwVar4 = (wchar_t *)0x0;
  if (param_2 == (char *)0x0) {
LAB_053f8558:
    if (uVar1 < 0x400) {
      pEVar3 = (EntryFindData *)EntryFindFirst(awStack_2008,pwVar4,param_3);
      goto LAB_053f8568;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,param_2,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto LAB_053f8558;
  }
  pEVar3 = (EntryFindData *)0x0;
LAB_053f8568:
  if (local_8 == ___stack_chk_guard) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindFirst(char const*, char const*, EA::IO::EntryFindData*) */

void EA::IO::EntryFindFirst(char *param_1,char *param_2,EntryFindData *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,param_1,0x400,0xffffffffffffffff);
  pwVar4 = (wchar_t *)0x0;
  if (param_2 == (char *)0x0) {
LAB_053f8558:
    if (uVar1 < 0x400) {
      uVar3 = EntryFindFirst(awStack_2008,pwVar4,param_3);
      goto LAB_053f8568;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,param_2,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto LAB_053f8558;
  }
  uVar3 = 0;
LAB_053f8568:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindData* EA::IO::EntryFindFirstImpl<char16_t>(char16_t const*, char16_t const*,
   EA::IO::EntryFindData*) */

EntryFindData *
EA::IO::EntryFindFirstImpl<char16_t>(wchar16 *param_1,wchar16 *param_2,EntryFindData *param_3)

{
  uint uVar1;
  uint uVar2;
  EntryFindData *pEVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,param_1,0x400,0xffffffffffffffff);
  pwVar4 = (wchar_t *)0x0;
  if (param_2 == (wchar16 *)0x0) {
LAB_053f8630:
    if (uVar1 < 0x400) {
      pEVar3 = (EntryFindData *)EntryFindFirst(awStack_2008,pwVar4,param_3);
      goto LAB_053f8640;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,param_2,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto LAB_053f8630;
  }
  pEVar3 = (EntryFindData *)0x0;
LAB_053f8640:
  if (local_8 == ___stack_chk_guard) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindFirst(char16_t const*, char16_t const*, EA::IO::EntryFindData*) */

void EA::IO::EntryFindFirst(wchar16 *param_1,wchar16 *param_2,EntryFindData *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,param_1,0x400,0xffffffffffffffff);
  pwVar4 = (wchar_t *)0x0;
  if (param_2 == (wchar16 *)0x0) {
LAB_053f8630:
    if (uVar1 < 0x400) {
      uVar3 = EntryFindFirst(awStack_2008,pwVar4,param_3);
      goto LAB_053f8640;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,param_2,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto LAB_053f8630;
  }
  uVar3 = 0;
LAB_053f8640:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindData* EA::IO::EntryFindFirstImpl<char32_t>(char32_t const*, char32_t const*,
   EA::IO::EntryFindData*) */

EntryFindData *
EA::IO::EntryFindFirstImpl<char32_t>(wchar32 *param_1,wchar32 *param_2,EntryFindData *param_3)

{
  uint uVar1;
  uint uVar2;
  EntryFindData *pEVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_053f7078(awStack_2008,param_1);
  pwVar4 = (wchar_t *)0x0;
  if (param_2 == (wchar32 *)0x0) {
LAB_053f8700:
    if (uVar1 < 0x400) {
      pEVar3 = (EntryFindData *)EntryFindFirst(awStack_2008,pwVar4,param_3);
      goto LAB_053f870c;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = FUN_053f7078(pwVar4);
    if (uVar2 < 0x400) goto LAB_053f8700;
  }
  pEVar3 = (EntryFindData *)0x0;
LAB_053f870c:
  if (local_8 == ___stack_chk_guard) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::EntryFindFirst(char32_t const*, char32_t const*, EA::IO::EntryFindData*) */

void EA::IO::EntryFindFirst(wchar32 *param_1,wchar32 *param_2,EntryFindData *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = FUN_053f7078(awStack_2008,param_1);
  pwVar4 = (wchar_t *)0x0;
  if (param_2 == (wchar32 *)0x0) {
LAB_053f8700:
    if (uVar1 < 0x400) {
      uVar3 = EntryFindFirst(awStack_2008,pwVar4,param_3);
      goto LAB_053f870c;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = FUN_053f7078(pwVar4);
    if (uVar2 < 0x400) goto LAB_053f8700;
  }
  uVar3 = 0;
LAB_053f870c:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long EA::IO::ReadRecursiveImpl<char>(EA::IO::DirectoryIterator*, char const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, char
   const*, int, bool, bool, unsigned long, bool) */

ulong EA::IO::ReadRecursiveImpl<char>
                (DirectoryIterator *param_1,char *param_2,list *param_3,char *param_4,int param_5,
                bool param_6,bool param_7,ulong param_8,bool param_9)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,param_2,0x400,0xffffffffffffffff);
  if (param_4 == (char *)0x0) {
    pwVar4 = (wchar_t *)0x0;
joined_r0x053f9008:
    if (uVar1 < 0x400) {
      uVar3 = DirectoryIterator::ReadRecursive
                        (param_1,awStack_2008,param_3,pwVar4,param_5,param_6,param_7,param_8,param_9
                        );
      goto LAB_053f8fc8;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,param_4,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto joined_r0x053f9008;
  }
  uVar3 = 0;
LAB_053f8fc8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long EA::IO::ReadRecursiveImpl<char16_t>(EA::IO::DirectoryIterator*, char16_t const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, char16_t
   const*, int, bool, bool, unsigned long, bool) */

ulong EA::IO::ReadRecursiveImpl<char16_t>
                (DirectoryIterator *param_1,wchar16 *param_2,list *param_3,wchar16 *param_4,
                int param_5,bool param_6,bool param_7,ulong param_8,bool param_9)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = StdC::Strlcpy(awStack_2008,param_2,0x400,0xffffffffffffffff);
  if (param_4 == (wchar16 *)0x0) {
    pwVar4 = (wchar_t *)0x0;
joined_r0x053f9130:
    if (uVar1 < 0x400) {
      uVar3 = DirectoryIterator::ReadRecursive
                        (param_1,awStack_2008,param_3,pwVar4,param_5,param_6,param_7,param_8,param_9
                        );
      goto LAB_053f90f0;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = StdC::Strlcpy(pwVar4,param_4,0x400,0xffffffffffffffff);
    if (uVar2 < 0x400) goto joined_r0x053f9130;
  }
  uVar3 = 0;
LAB_053f90f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long EA::IO::ReadRecursiveImpl<char32_t>(EA::IO::DirectoryIterator*, char32_t const*,
   eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>&, char32_t
   const*, int, bool, bool, unsigned long, bool) */

ulong EA::IO::ReadRecursiveImpl<char32_t>
                (DirectoryIterator *param_1,wchar32 *param_2,list *param_3,wchar32 *param_4,
                int param_5,bool param_6,bool param_7,ulong param_8,bool param_9)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  wchar_t awStack_2008 [1024];
  wchar_t awStack_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_053f7078(awStack_2008);
  pwVar4 = (wchar_t *)0x0;
  if (param_4 == (wchar32 *)0x0) {
LAB_053f91d8:
    if (uVar1 < 0x400) {
      uVar3 = DirectoryIterator::ReadRecursive
                        (param_1,awStack_2008,param_3,pwVar4,param_5,param_6,param_7,param_8,param_9
                        );
      goto LAB_053f9218;
    }
  }
  else {
    pwVar4 = awStack_1008;
    uVar2 = FUN_053f7078(pwVar4,param_4);
    if (uVar2 < 0x400) goto LAB_053f91d8;
  }
  uVar3 = 0;
LAB_053f9218:
  if (local_8 == ___stack_chk_guard) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::PushFileErrorHandler(EA::IO::ErrorResponse (*)(EA::IO::FileErrorInfo const&, void*),
   void*) */

bool EA::IO::PushFileErrorHandler
               (_func_ErrorResponse_FileErrorInfo_ptr_void_ptr *param_1,void *param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = gErrorHandlingFunctionArraySize;
  bVar3 = gErrorHandlingFunctionArraySize < 8;
  if (bVar3) {
    lVar1 = gErrorHandlingFunctionArraySize * 2;
    gErrorHandlingFunctionArraySize = gErrorHandlingFunctionArraySize + 1;
    (&gErrorHandlingFunctionArray)[lVar1] = param_1;
    (&DAT_06c45848)[uVar2 * 2] = param_2;
  }
  return bVar3;
}


/* EA::IO::RemoveFileErrorHandler(EA::IO::ErrorResponse (*)(EA::IO::FileErrorInfo const&, void*),
   void*) */

undefined8
EA::IO::RemoveFileErrorHandler
          (_func_ErrorResponse_FileErrorInfo_ptr_void_ptr *param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  
  if (gErrorHandlingFunctionArraySize == 0) {
    return 0;
  }
  if ((gErrorHandlingFunctionArray == param_1) && (DAT_06c45848 == param_2)) {
    lVar1 = 0;
  }
  else {
    if (gErrorHandlingFunctionArraySize < 2) {
      return 0;
    }
    if ((DAT_06c45850 == param_1) && (DAT_06c45858 == param_2)) {
      lVar1 = 1;
    }
    else {
      if (gErrorHandlingFunctionArraySize == 2) {
        return 0;
      }
      if ((DAT_06c45860 == param_1) && (DAT_06c45868 == param_2)) {
        lVar1 = 2;
      }
      else {
        if (gErrorHandlingFunctionArraySize == 3) {
          return 0;
        }
        if ((DAT_06c45870 == param_1) && (DAT_06c45878 == param_2)) {
          lVar1 = 3;
        }
        else {
          if (gErrorHandlingFunctionArraySize == 4) {
            return 0;
          }
          if ((DAT_06c45880 == param_1) && (DAT_06c45888 == param_2)) {
            lVar1 = 4;
          }
          else {
            if (gErrorHandlingFunctionArraySize == 5) {
              return 0;
            }
            if ((DAT_06c45890 == param_1) && (DAT_06c45898 == param_2)) {
              lVar1 = 5;
            }
            else {
              if (gErrorHandlingFunctionArraySize == 6) {
                return 0;
              }
              if ((DAT_06c458a0 == param_1) && (DAT_06c458a8 == param_2)) {
                lVar1 = 6;
              }
              else {
                if (gErrorHandlingFunctionArraySize == 7) {
                  return 0;
                }
                if ((DAT_06c458b0 != param_1) || (DAT_06c458b8 != param_2)) {
                  return 0;
                }
                lVar1 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar2 = gErrorHandlingFunctionArraySize - 1;
  memcpy(&gErrorHandlingFunctionArray + lVar1 * 2,&DAT_06c45850 + lVar1 * 2,(lVar2 - lVar1) * 0x10);
  gErrorHandlingFunctionArraySize = lVar2;
  return 1;
}


/* EA::IO::GetFileErrorHandler(EA::IO::ErrorResponse (*&)(EA::IO::FileErrorInfo const&, void*),
   void*&) */

void EA::IO::GetFileErrorHandler
               (_func_ErrorResponse_FileErrorInfo_ptr_void_ptr *param_1,void **param_2)

{
  long lVar1;
  
  if (gErrorHandlingFunctionArraySize == 0) {
    *(code **)param_1 = FUN_053f92ec;
    *param_2 = (void *)0x0;
    return;
  }
  lVar1 = gErrorHandlingFunctionArraySize + -1;
  *(undefined8 *)param_1 = (&gErrorHandlingFunctionArray)[lVar1 * 2];
  *param_2 = (void *)(&DAT_06c45848)[lVar1 * 2];
  return;
}


/* EA::IO::FnMatch(char const*, char const*, int) */

uint EA::IO::FnMatch(char *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0x5c;
  if (((uint)param_3 >> 6 & 1) == 0) {
    param_3 = param_3 | 0x80;
    uVar10 = 0x2f;
  }
  uVar5 = param_3 & 1;
  pbVar6 = (byte *)param_2;
LAB_053fb618:
  do {
    while( true ) {
      bVar1 = *param_1;
      uVar9 = (uint)bVar1;
      pbVar8 = (byte *)(param_1 + 1);
      if (bVar1 != 0x3f) break;
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        return 0;
      }
      if (uVar10 == bVar1) {
        if (uVar5 != 0) {
          return 0;
        }
        pbVar6 = pbVar6 + 1;
        param_1 = (char *)pbVar8;
      }
      else {
        if ((bVar1 == 0x2e) && ((param_3 & 4U) != 0)) {
          if (pbVar6 == (byte *)param_2) {
            return 0;
          }
          if ((uVar5 != 0) && (pbVar6[-1] == uVar10)) {
            return 0;
          }
        }
LAB_053fb794:
        pbVar6 = pbVar6 + 1;
        param_1 = (char *)pbVar8;
      }
    }
    if (0x3f < bVar1) {
      if (uVar9 != 0x5b) {
        if ((((uVar9 == 0x5c) && (uVar10 != 0x5c)) && ((param_3 & 2U) == 0)) &&
           ((byte)param_1[1] != 0)) {
          pbVar8 = (byte *)(param_1 + 2);
          uVar9 = (uint)(byte)param_1[1];
        }
LAB_053fb6c4:
        bVar1 = *pbVar6;
        if (bVar1 != uVar9) {
          if ((param_3 & 0x20U) == 0) {
LAB_053fb6f8:
            if (((uint)param_3 >> 4 & 1) == 0) {
              return param_3 & 0x10;
            }
            if (bVar1 != 0) {
              return 0;
            }
            if (pbVar6 != (byte *)param_2 && uVar9 == uVar10) {
              return 1;
            }
            if (pbVar6 != (byte *)(param_2 + 1)) {
              return 0;
            }
            if ((byte)*param_2 != uVar10) {
              return 0;
            }
            return 1;
          }
          cVar4 = StdC::Tolower((char)uVar9);
          cVar3 = StdC::Tolower(bVar1);
          if (cVar4 != cVar3) goto LAB_053fb6f8;
        }
        goto LAB_053fb794;
      }
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        return 0;
      }
      if ((uVar10 == bVar1) && (uVar5 != 0)) {
        return 0;
      }
      param_1 = (char *)FUN_053fb0e8(pbVar8,uVar10,bVar1,param_3);
      if ((byte *)param_1 == (byte *)0x0) {
        return 0;
      }
      pbVar6 = pbVar6 + 1;
      goto LAB_053fb618;
    }
    if (uVar9 == 0) {
      if (((uint)param_3 >> 3 & 1) == 0) {
        uVar5 = (uint)*pbVar6;
      }
      else {
        uVar5 = (uint)*pbVar6;
        if (uVar10 == uVar5) {
          return 1;
        }
      }
      return (uint)(uVar5 == 0);
    }
    if (uVar9 != 0x2a) goto LAB_053fb6c4;
    bVar1 = param_1[1];
    while (bVar1 == 0x2a) {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
    }
    bVar2 = *pbVar6;
    uVar9 = (uint)bVar2;
    if ((uVar9 == 0x2e) && ((param_3 & 4U) != 0)) {
      if (pbVar6 == (byte *)param_2) {
        return 0;
      }
      if ((uVar5 != 0) && (pbVar6[-1] == uVar10)) {
        return 0;
      }
    }
    if (bVar1 == 0) {
      if (uVar5 == 0) {
        return 1;
      }
      if (((uint)param_3 >> 3 & 1) != 0) {
        return 1;
      }
      lVar7 = StdC::Strchr((char *)pbVar6,uVar10);
      return (uint)(lVar7 == 0);
    }
    if (bVar1 != uVar10) {
      if (bVar2 == 0) {
        return 0;
      }
      if (uVar5 != 0) {
        while( true ) {
          cVar4 = FnMatch((char *)pbVar8,(char *)pbVar6,param_3 & 0xfffffffb);
          if (cVar4 != '\0') {
            return 1;
          }
          if (uVar10 == uVar9) break;
          pbVar6 = pbVar6 + 1;
          uVar9 = (uint)*pbVar6;
          if (uVar9 == 0) {
            return 0;
          }
        }
        return 0;
      }
LAB_053fb88c:
      do {
        cVar4 = FnMatch((char *)pbVar8,(char *)pbVar6,param_3 & 0xfffffffb);
        if (cVar4 != '\0') {
          return 1;
        }
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 != 0);
      return 0;
    }
    if (uVar5 == 0) {
      if (bVar2 == 0) {
        return 0;
      }
      goto LAB_053fb88c;
    }
    pbVar6 = (byte *)StdC::Strchr((char *)pbVar6,uVar10);
    param_1 = (char *)pbVar8;
    if (pbVar6 == (byte *)0x0) {
      return 0;
    }
  } while( true );
}


/* EA::IO::FnMatch(char16_t const*, char16_t const*, int) */

uint EA::IO::FnMatch(wchar16 *param_1,wchar16 *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  wchar16 *pwVar5;
  long lVar6;
  wchar16 wVar7;
  wchar16 wVar8;
  wchar16 *pwVar9;
  wchar16 wVar10;
  
  wVar10 = L'\\';
  if (((uint)param_3 >> 6 & 1) == 0) {
    param_3 = param_3 | 0x80;
    wVar10 = L'/';
  }
  uVar1 = param_3 & 1;
  pwVar5 = param_2;
LAB_053fb960:
  do {
    while( true ) {
      wVar7 = *param_1;
      pwVar9 = param_1 + 1;
      if (wVar7 != L'?') break;
      wVar7 = *pwVar5;
      if (wVar7 == L'\0') {
        return 0;
      }
      if (wVar10 == wVar7) {
        if (uVar1 != 0) {
          return 0;
        }
        pwVar5 = pwVar5 + 1;
        param_1 = pwVar9;
      }
      else {
        if ((wVar7 == L'.') && ((param_3 & 4U) != 0)) {
          if (pwVar5 == param_2) {
            return 0;
          }
          if ((uVar1 != 0) && (pwVar5[-1] == wVar10)) {
            return 0;
          }
        }
LAB_053fbadc:
        pwVar5 = pwVar5 + 1;
        param_1 = pwVar9;
      }
    }
    if (0x3f < (ushort)wVar7) {
      if (wVar7 != L'[') {
        if ((((wVar7 == L'\\') && (wVar10 != L'\\')) && ((param_3 & 2U) == 0)) &&
           (param_1[1] != L'\0')) {
          pwVar9 = param_1 + 2;
          wVar7 = param_1[1];
        }
LAB_053fba0c:
        wVar8 = *pwVar5;
        if (wVar8 != wVar7) {
          if ((param_3 & 0x20U) == 0) {
LAB_053fba40:
            if (((uint)param_3 >> 4 & 1) == 0) {
              return param_3 & 0x10;
            }
            if (wVar8 != L'\0') {
              return 0;
            }
            if (pwVar5 != param_2 && wVar7 == wVar10) {
              return 1;
            }
            if (pwVar5 != param_2 + 1) {
              return 0;
            }
            if (*param_2 != wVar10) {
              return 0;
            }
            return 1;
          }
          sVar3 = StdC::Tolower(wVar7);
          sVar4 = StdC::Tolower(wVar8);
          if (sVar3 != sVar4) goto LAB_053fba40;
        }
        goto LAB_053fbadc;
      }
      wVar7 = *pwVar5;
      if (wVar7 == L'\0') {
        return 0;
      }
      if ((wVar10 == wVar7) && (uVar1 != 0)) {
        return 0;
      }
      param_1 = (wchar16 *)FUN_053fb288(pwVar9,wVar10,wVar7,param_3);
      if (param_1 == (wchar16 *)0x0) {
        return 0;
      }
      pwVar5 = pwVar5 + 1;
      goto LAB_053fb960;
    }
    if (wVar7 == L'\0') {
      if (((uint)param_3 >> 3 & 1) == 0) {
        wVar7 = *pwVar5;
      }
      else {
        wVar7 = *pwVar5;
        if (wVar10 == wVar7) {
          return 1;
        }
      }
      return (uint)(wVar7 == L'\0');
    }
    if (wVar7 != L'*') goto LAB_053fba0c;
    wVar7 = param_1[1];
    while (wVar7 == L'*') {
      pwVar9 = pwVar9 + 1;
      wVar7 = *pwVar9;
    }
    wVar8 = *pwVar5;
    if ((wVar8 == L'.') && ((param_3 & 4U) != 0)) {
      if (pwVar5 == param_2) {
        return 0;
      }
      if ((uVar1 != 0) && (pwVar5[-1] == wVar10)) {
        return 0;
      }
    }
    if (wVar7 == L'\0') {
      if (uVar1 == 0) {
        return 1;
      }
      if (((uint)param_3 >> 3 & 1) != 0) {
        return 1;
      }
      lVar6 = StdC::Strchr(pwVar5,wVar10);
      return (uint)(lVar6 == 0);
    }
    if (wVar7 != wVar10) {
      if (wVar8 == L'\0') {
        return 0;
      }
      if (uVar1 != 0) {
        while( true ) {
          cVar2 = FnMatch(pwVar9,pwVar5,param_3 & 0xfffffffb);
          if (cVar2 != '\0') {
            return 1;
          }
          if (wVar10 == wVar8) break;
          pwVar5 = pwVar5 + 1;
          wVar8 = *pwVar5;
          if (wVar8 == L'\0') {
            return 0;
          }
        }
        return 0;
      }
LAB_053fbbd4:
      do {
        cVar2 = FnMatch(pwVar9,pwVar5,param_3 & 0xfffffffb);
        if (cVar2 != '\0') {
          return 1;
        }
        pwVar5 = pwVar5 + 1;
      } while (*pwVar5 != L'\0');
      return 0;
    }
    if (uVar1 == 0) {
      if (wVar8 == L'\0') {
        return 0;
      }
      goto LAB_053fbbd4;
    }
    pwVar5 = (wchar16 *)StdC::Strchr(pwVar5,wVar10);
    param_1 = pwVar9;
    if (pwVar5 == (wchar16 *)0x0) {
      return 0;
    }
  } while( true );
}


/* EA::IO::FnMatch(char32_t const*, char32_t const*, int) */

uint EA::IO::FnMatch(wchar32 *param_1,wchar32 *param_2,int param_3)

{
  uint uVar1;
  wchar32 wVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  wchar32 *pwVar6;
  long lVar7;
  wchar32 wVar8;
  wchar32 *pwVar9;
  wchar32 wVar10;
  
  wVar10 = L'\\';
  if (((uint)param_3 >> 6 & 1) == 0) {
    param_3 = param_3 | 0x80;
    wVar10 = L'/';
  }
  uVar1 = param_3 & 1;
  pwVar6 = param_2;
LAB_053fbca8:
  do {
    while( true ) {
      wVar8 = *param_1;
      pwVar9 = param_1 + 1;
      if (wVar8 != L'?') break;
      wVar8 = *pwVar6;
      if (wVar8 == L'\0') {
        return 0;
      }
      if (wVar10 == wVar8) {
        if (uVar1 != 0) {
          return 0;
        }
        pwVar6 = pwVar6 + 1;
        param_1 = pwVar9;
      }
      else {
        if ((wVar8 == L'.') && ((param_3 & 4U) != 0)) {
          if (pwVar6 == param_2) {
            return 0;
          }
          if ((uVar1 != 0) && (wVar10 == pwVar6[-1])) {
            return 0;
          }
        }
LAB_053fbe24:
        pwVar6 = pwVar6 + 1;
        param_1 = pwVar9;
      }
    }
    if (0x3f < (uint)wVar8) {
      if (wVar8 != L'[') {
        if ((((wVar8 == L'\\') && (wVar10 != L'\\')) && ((param_3 & 2U) == 0)) &&
           (param_1[1] != L'\0')) {
          pwVar9 = param_1 + 2;
          wVar8 = param_1[1];
        }
LAB_053fbd54:
        wVar2 = *pwVar6;
        if (wVar2 != wVar8) {
          if ((param_3 & 0x20U) == 0) {
LAB_053fbd88:
            if (((uint)param_3 >> 4 & 1) == 0) {
              return param_3 & 0x10;
            }
            if (wVar2 != L'\0') {
              return 0;
            }
            if (pwVar6 != param_2 && wVar8 == wVar10) {
              return 1;
            }
            if (pwVar6 != param_2 + 1) {
              return 0;
            }
            if (wVar10 != *param_2) {
              return 0;
            }
            return 1;
          }
          iVar4 = StdC::Tolower(wVar8);
          iVar5 = StdC::Tolower(wVar2);
          if (iVar4 != iVar5) goto LAB_053fbd88;
        }
        goto LAB_053fbe24;
      }
      wVar8 = *pwVar6;
      if (wVar8 == L'\0') {
        return 0;
      }
      if ((wVar10 == wVar8) && (uVar1 != 0)) {
        return 0;
      }
      param_1 = (wchar32 *)FUN_053fb428(pwVar9,wVar10,wVar8,param_3);
      if (param_1 == (wchar32 *)0x0) {
        return 0;
      }
      pwVar6 = pwVar6 + 1;
      goto LAB_053fbca8;
    }
    if (wVar8 == L'\0') {
      if (((uint)param_3 >> 3 & 1) == 0) {
        wVar8 = *pwVar6;
      }
      else {
        wVar8 = *pwVar6;
        if (wVar10 == wVar8) {
          return 1;
        }
      }
      return (uint)(wVar8 == L'\0');
    }
    if (wVar8 != L'*') goto LAB_053fbd54;
    wVar8 = param_1[1];
    while (wVar8 == L'*') {
      pwVar9 = pwVar9 + 1;
      wVar8 = *pwVar9;
    }
    wVar2 = *pwVar6;
    if ((wVar2 == L'.') && ((param_3 & 4U) != 0)) {
      if (pwVar6 == param_2) {
        return 0;
      }
      if ((uVar1 != 0) && (wVar10 == pwVar6[-1])) {
        return 0;
      }
    }
    if (wVar8 == L'\0') {
      if (uVar1 == 0) {
        return 1;
      }
      if (((uint)param_3 >> 3 & 1) != 0) {
        return 1;
      }
      lVar7 = StdC::Strchr(pwVar6,wVar10);
      return (uint)(lVar7 == 0);
    }
    if (wVar8 != wVar10) {
      if (wVar2 == L'\0') {
        return 0;
      }
      if (uVar1 != 0) {
        while( true ) {
          cVar3 = FnMatch(pwVar9,pwVar6,param_3 & 0xfffffffb);
          if (cVar3 != '\0') {
            return 1;
          }
          if (wVar10 == wVar2) break;
          pwVar6 = pwVar6 + 1;
          wVar2 = *pwVar6;
          if (wVar2 == L'\0') {
            return 0;
          }
        }
        return 0;
      }
LAB_053fbf1c:
      do {
        cVar3 = FnMatch(pwVar9,pwVar6,param_3 & 0xfffffffb);
        if (cVar3 != '\0') {
          return 1;
        }
        pwVar6 = pwVar6 + 1;
      } while (*pwVar6 != L'\0');
      return 0;
    }
    if (uVar1 == 0) {
      if (wVar2 == L'\0') {
        return 0;
      }
      goto LAB_053fbf1c;
    }
    pwVar6 = (wchar32 *)StdC::Strchr(pwVar6,wVar10);
    param_1 = pwVar9;
    if (pwVar6 == (wchar32 *)0x0) {
      return 0;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::CopyStream(EA::IO::IStream*, EA::IO::IStream*, unsigned long) */

void EA::IO::CopyStream(IStream *param_1,IStream *param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = (**(code **)(*(long *)param_1 + 0x40))();
  if (uVar3 != 0xffffffffffffffff) {
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    if (uVar3 == 0) {
      lVar4 = 0;
      goto LAB_053fc108;
    }
  }
  uVar5 = uVar3;
  do {
    uVar1 = uVar5;
    if (0x800 < uVar5) {
      uVar1 = 0x800;
    }
    lVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1,auStack_808,uVar1);
    if ((lVar4 == -1) ||
       (cVar2 = (**(code **)(*(long *)param_2 + 0x78))(param_2,auStack_808,lVar4), cVar2 == '\0')) {
      lVar4 = -1;
      goto LAB_053fc108;
    }
  } while ((lVar4 != 0) && (uVar5 = uVar5 - lVar4, uVar5 != 0));
  lVar4 = uVar3 - uVar5;
LAB_053fc108:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadBool8(EA::IO::IStream*, bool&) */

void EA::IO::ReadBool8(IStream *param_1,bool *param_2)

{
  long lVar1;
  char local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1,&local_9,1);
  if (lVar1 == 1) {
    *param_2 = local_9 != '\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 == 1);
}


/* EA::IO::ReadUint8(EA::IO::IStream*, unsigned char*, unsigned long) */

bool EA::IO::ReadUint8(IStream *param_1,uchar *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x68))();
  return param_3 == uVar1;
}


/* EA::IO::ReadUint8(EA::IO::IStream*, unsigned char&) */

bool EA::IO::ReadUint8(IStream *param_1,uchar *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1,param_2,1);
  return lVar1 == 1;
}


/* EA::IO::ReadUint16(EA::IO::IStream*, unsigned short&, EA::IO::Endian) */

undefined8 EA::IO::ReadUint16(long *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,2);
  uVar3 = 0;
  if (lVar2 == 2) {
    if (param_3 != 1) {
      uVar1 = FUN_053fbf9c(*param_2);
      *param_2 = uVar1;
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* EA::IO::ReadUint16(EA::IO::IStream*, unsigned short*, unsigned long, EA::IO::Endian) */

undefined8 EA::IO::ReadUint16(long *param_1,long param_2,long param_3,int param_4)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3 * 2);
  if (param_3 * 2 - lVar2 != 0) {
    return 0;
  }
  if ((param_4 != 1) && (param_3 != 0)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_053fbf9c(*(undefined2 *)(param_2 + lVar2 * 2));
      *(undefined2 *)(param_2 + lVar2 * 2) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
  return 1;
}


/* EA::IO::ReadInt16(EA::IO::IStream*, short&, EA::IO::Endian) */

undefined8 EA::IO::ReadInt16(long *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,2);
  uVar3 = 0;
  if (lVar2 == 2) {
    if (param_3 != 1) {
      uVar1 = FUN_053fbf9c(*param_2);
      *param_2 = uVar1;
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* EA::IO::ReadInt16(EA::IO::IStream*, short*, unsigned long, EA::IO::Endian) */

undefined8 EA::IO::ReadInt16(long *param_1,long param_2,long param_3,int param_4)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3 * 2);
  if (param_3 * 2 - lVar2 != 0) {
    return 0;
  }
  if ((param_4 != 1) && (param_3 != 0)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_053fbf9c(*(undefined2 *)(param_2 + lVar2 * 2));
      *(undefined2 *)(param_2 + lVar2 * 2) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
  return 1;
}


/* EA::IO::ReadUint32(EA::IO::IStream*, unsigned int&, EA::IO::Endian) */

undefined8 EA::IO::ReadUint32(long *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,4);
  uVar3 = 0;
  if (lVar2 == 4) {
    if (param_3 != 1) {
      uVar1 = FUN_053fbfac(*param_2);
      *param_2 = uVar1;
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* EA::IO::ReadUint32(EA::IO::IStream*, unsigned int*, unsigned long, EA::IO::Endian) */

undefined8 EA::IO::ReadUint32(long *param_1,long param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3 * 4);
  if (param_3 * 4 - lVar2 != 0) {
    return 0;
  }
  if ((param_4 != 1) && (param_3 != 0)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_053fbfac(*(undefined4 *)(param_2 + lVar2 * 4));
      *(undefined4 *)(param_2 + lVar2 * 4) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
  return 1;
}


/* EA::IO::ReadInt32(EA::IO::IStream*, int&, EA::IO::Endian) */

undefined8 EA::IO::ReadInt32(long *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,4);
  uVar3 = 0;
  if (lVar2 == 4) {
    if (param_3 != 1) {
      uVar1 = FUN_053fbfac(*param_2);
      *param_2 = uVar1;
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* EA::IO::ReadFloat(EA::IO::IStream*, float*, unsigned long, EA::IO::Endian) */

undefined8 EA::IO::ReadFloat(long *param_1,long param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3 * 4);
  if (param_3 * 4 - lVar2 != 0) {
    return 0;
  }
  if ((param_4 != 1) && (param_3 != 0)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_053fbfac(*(undefined4 *)(param_2 + lVar2 * 4));
      *(undefined4 *)(param_2 + lVar2 * 4) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
  return 1;
}


/* EA::IO::ReadUint64(EA::IO::IStream*, unsigned long&, EA::IO::Endian) */

undefined8 EA::IO::ReadUint64(long *param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,8);
  uVar2 = 0;
  if (lVar1 == 8) {
    if (param_3 != 1) {
      uVar2 = FUN_053fbfb4(*param_2);
      *param_2 = uVar2;
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* EA::IO::ReadUint64(EA::IO::IStream*, unsigned long*, unsigned long, EA::IO::Endian) */

undefined8 EA::IO::ReadUint64(long *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3 * 8);
  if (param_3 * 8 - lVar1 != 0) {
    return 0;
  }
  if ((param_4 != 1) && (param_3 != 0)) {
    lVar1 = 0;
    do {
      uVar2 = FUN_053fbfb4(*(undefined8 *)(param_2 + lVar1 * 8));
      *(undefined8 *)(param_2 + lVar1 * 8) = uVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_3);
  }
  return 1;
}


/* EA::IO::ReadInt64(EA::IO::IStream*, long&, EA::IO::Endian) */

undefined8 EA::IO::ReadInt64(long *param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,8);
  uVar2 = 0;
  if (lVar1 == 8) {
    if (param_3 != 1) {
      uVar2 = FUN_053fbfb4(*param_2);
      *param_2 = uVar2;
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* EA::IO::ReadDouble(EA::IO::IStream*, double*, unsigned long, EA::IO::Endian) */

undefined8 EA::IO::ReadDouble(long *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3 * 8);
  if (param_3 * 8 - lVar1 != 0) {
    return 0;
  }
  if ((param_4 != 1) && (param_3 != 0)) {
    lVar1 = 0;
    do {
      uVar2 = FUN_053fbfb4(*(undefined8 *)(param_2 + lVar1 * 8));
      *(undefined8 *)(param_2 + lVar1 * 8) = uVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_3);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadFloat(EA::IO::IStream*, float&, EA::IO::Endian) */

void EA::IO::ReadFloat(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ReadUint32(param_1,local_10);
  if (cVar1 != '\0') {
    *param_2 = local_10[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadDouble(EA::IO::IStream*, double&, EA::IO::Endian) */

void EA::IO::ReadDouble(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ReadUint64(param_1,&local_10);
  if (cVar1 != '\0') {
    *param_2 = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadString(EA::IO::IStream*, char*, unsigned long, EA::IO::Endian) */

void EA::IO::ReadString(long *param_1,undefined1 *param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_d;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1,0);
  local_c = 0;
  cVar1 = ReadUint32(param_1,&local_c,param_4);
  uVar3 = 0xffffffffffffffff;
  if (cVar1 != '\0') {
    if (param_2 == (undefined1 *)0x0) {
      (**(code **)(*param_1 + 0x58))(param_1,lVar2,0);
      uVar3 = (ulong)local_c;
    }
    else {
      uVar5 = (ulong)local_c;
      uVar3 = param_3 - 1U;
      if (uVar5 < param_3 - 1U) {
        uVar3 = uVar5;
      }
      if (uVar3 == 0) {
        (**(code **)(*param_1 + 0x58))(param_1,lVar2 + 4 + uVar5,0);
      }
      else {
        puVar7 = param_2;
        do {
          lVar4 = (**(code **)(*param_1 + 0x68))(param_1,&local_d,1);
          puVar6 = puVar7;
          if (lVar4 != 1) break;
          puVar6 = puVar7 + 1;
          *puVar7 = local_d;
          puVar7 = puVar6;
        } while ((ulong)((long)puVar6 - (long)param_2) < uVar3);
        (**(code **)(*param_1 + 0x58))(param_1,lVar2 + 4 + (ulong)local_c,0);
        param_2 = puVar6;
      }
      uVar3 = (ulong)local_c;
      *param_2 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadString(EA::IO::IStream*, char16_t*, unsigned long, EA::IO::Endian) */

void EA::IO::ReadString(long *param_1,undefined2 *param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined2 local_e;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1,0);
  local_c = 0;
  cVar1 = ReadUint32(param_1,&local_c,param_4);
  uVar3 = 0xffffffffffffffff;
  if (cVar1 != '\0') {
    if (param_2 == (undefined2 *)0x0) {
      (**(code **)(*param_1 + 0x58))(param_1,lVar2,0);
      uVar3 = (ulong)local_c;
    }
    else {
      uVar3 = param_3 - 1U;
      if ((ulong)local_c < param_3 - 1U) {
        uVar3 = (ulong)local_c;
      }
      if (uVar3 == 0) {
        (**(code **)(*param_1 + 0x58))(param_1,lVar2 + 4 + (ulong)local_c * 2,0);
      }
      else {
        uVar5 = 0;
        puVar6 = param_2;
        do {
          cVar1 = ReadUint16(param_1,&local_e,param_4);
          if (cVar1 == '\0') {
            lVar4 = *param_1;
            param_2 = puVar6;
            goto LAB_053fc850;
          }
          uVar5 = uVar5 + 1;
          param_2 = puVar6 + 1;
          *puVar6 = local_e;
          puVar6 = param_2;
        } while (uVar5 < uVar3);
        lVar4 = *param_1;
LAB_053fc850:
        (**(code **)(lVar4 + 0x58))(param_1,lVar2 + 4 + (ulong)local_c * 2,0);
      }
      uVar3 = (ulong)local_c;
      *param_2 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadString(EA::IO::IStream*, char32_t*, unsigned long, EA::IO::Endian) */

void EA::IO::ReadString(long *param_1,undefined4 *param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1,0);
  local_c = 0;
  cVar1 = ReadUint32(param_1,&local_c,param_4);
  uVar3 = 0xffffffffffffffff;
  if (cVar1 != '\0') {
    if (param_2 == (undefined4 *)0x0) {
      (**(code **)(*param_1 + 0x58))(param_1,lVar2,0);
      uVar3 = (ulong)local_c;
    }
    else {
      uVar3 = param_3 - 1U;
      if ((ulong)local_c < param_3 - 1U) {
        uVar3 = (ulong)local_c;
      }
      if (uVar3 == 0) {
        (**(code **)(*param_1 + 0x58))(param_1,lVar2 + 4 + (ulong)local_c * 4,0);
      }
      else {
        uVar5 = 0;
        puVar6 = param_2;
        do {
          cVar1 = ReadUint32(param_1,&local_10,param_4);
          if (cVar1 == '\0') {
            lVar4 = *param_1;
            param_2 = puVar6;
            goto LAB_053fc9b8;
          }
          uVar5 = uVar5 + 1;
          param_2 = puVar6 + 1;
          *puVar6 = local_10;
          puVar6 = param_2;
        } while (uVar5 < uVar3);
        lVar4 = *param_1;
LAB_053fc9b8:
        (**(code **)(lVar4 + 0x58))(param_1,lVar2 + 4 + (ulong)local_c * 4,0);
      }
      uVar3 = (ulong)local_c;
      *param_2 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadLine(EA::IO::IStream*, char*, unsigned long) */

void EA::IO::ReadLine(IStream *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char local_a;
  char local_9;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (param_2 == (char *)0x0) {
    uVar3 = (**(code **)(*(long *)param_1 + 0x50))();
  }
  uVar2 = 0;
  lVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1,&local_a,1);
  do {
    if (lVar1 != 1) {
      if (uVar2 == 0) {
        uVar2 = 0xfffffffffffffffe;
      }
joined_r0x053fcb4c:
      if (param_2 == (char *)0x0) {
        (**(code **)(*(long *)param_1 + 0x58))(param_1,uVar3,0);
      }
      else {
        *param_2 = '\0';
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    if ((local_a == '\n') || (local_a == '\r')) {
      local_9 = local_a;
      if (((local_a != '\r') ||
          (lVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1,&local_9,1), lVar1 == 1)) &&
         (local_9 != '\n')) {
        (**(code **)(*(long *)param_1 + 0x58))(param_1,0xffffffffffffffff,1);
      }
      goto joined_r0x053fcb4c;
    }
    if ((param_2 != (char *)0x0) && (uVar2 < param_3 - 1)) {
      *param_2 = local_a;
      param_2 = param_2 + 1;
    }
    uVar2 = uVar2 + 1;
    lVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1,&local_a,1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadLine(EA::IO::IStream*, char16_t*, unsigned long, EA::IO::Endian) */

void EA::IO::ReadLine(long *param_1,ushort *param_2,long param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  ushort local_c;
  ushort local_a;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  if (param_2 == (ushort *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1,0);
  }
  if (param_4 == 1) {
    uVar4 = 0;
    while (lVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_c,2), lVar3 == 2) {
      if (local_c == 0xd) {
        uVar2 = 10;
        uVar1 = 0xd;
        goto LAB_053fcce0;
      }
      if (local_c == 10) goto joined_r0x053fcd20;
      if ((param_2 != (ushort *)0x0) && (uVar4 < param_3 - 1U)) {
        *param_2 = local_c;
        param_2 = param_2 + 1;
      }
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = 0;
    uVar1 = FUN_053fbf9c(0xd);
    uVar2 = FUN_053fbf9c(10);
    lVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_c,2);
    while (lVar3 == 2) {
      if (uVar1 == local_c) goto LAB_053fcce0;
      if (uVar2 == local_c) goto joined_r0x053fcd20;
      puVar5 = param_2;
      if ((param_2 != (ushort *)0x0) && (uVar4 < param_3 - 1U)) {
        puVar5 = param_2 + 1;
        local_c = FUN_053fbf9c();
        *param_2 = local_c;
      }
      uVar4 = uVar4 + 1;
      lVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_c,2);
      param_2 = puVar5;
    }
  }
  if (uVar4 == 0) {
    uVar4 = 0xfffffffffffffffe;
  }
joined_r0x053fcd20:
  if (param_2 == (ushort *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1,uVar6,0);
  }
  else {
    *param_2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
LAB_053fcce0:
  local_a = uVar1;
  (**(code **)(*param_1 + 0x68))(param_1,&local_a,2);
  if (local_a != uVar2) {
    (**(code **)(*param_1 + 0x58))(param_1,0xfffffffffffffffe,1);
  }
  goto joined_r0x053fcd20;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::ReadLine(EA::IO::IStream*, char32_t*, unsigned long, EA::IO::Endian) */

void EA::IO::ReadLine(long *param_1,int *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_10;
  int local_c;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  if (param_2 == (int *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1,0);
  }
  if (param_4 == 1) {
    uVar4 = 0;
    while (lVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_10,4), lVar3 == 4) {
      if (local_10 == 0xd) {
        iVar2 = 10;
        iVar1 = 0xd;
        goto LAB_053fcef4;
      }
      if (local_10 == 10) goto joined_r0x053fcf34;
      if ((param_2 != (int *)0x0) && (uVar4 < param_3 - 1U)) {
        *param_2 = local_10;
        param_2 = param_2 + 1;
      }
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = 0;
    iVar1 = FUN_053fbfac(0xd);
    iVar2 = FUN_053fbfac(10);
    lVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_10,4);
    while (lVar3 == 4) {
      if (iVar1 == local_10) goto LAB_053fcef4;
      if (iVar2 == local_10) goto joined_r0x053fcf34;
      piVar5 = param_2;
      if ((param_2 != (int *)0x0) && (uVar4 < param_3 - 1U)) {
        piVar5 = param_2 + 1;
        local_10 = FUN_053fbfac();
        *param_2 = local_10;
      }
      uVar4 = uVar4 + 1;
      lVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_10,4);
      param_2 = piVar5;
    }
  }
  if (uVar4 == 0) {
    uVar4 = 0xfffffffffffffffe;
  }
joined_r0x053fcf34:
  if (param_2 == (int *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1,uVar6,0);
  }
  else {
    *param_2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
LAB_053fcef4:
  local_c = iVar1;
  (**(code **)(*param_1 + 0x68))(param_1,&local_c,4);
  if (iVar2 != local_c) {
    (**(code **)(*param_1 + 0x58))(param_1,0xfffffffffffffffc,1);
  }
  goto joined_r0x053fcf34;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteBool8(EA::IO::IStream*, bool) */

void EA::IO::WriteBool8(IStream *param_1,bool param_2)

{
  undefined1 local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_9 = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_9,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::WriteUint8(EA::IO::IStream*, unsigned char const*, unsigned long) */

void EA::IO::WriteUint8(IStream *param_1,uchar *param_2,ulong param_3)

{
  (**(code **)(*(long *)param_1 + 0x78))();
  return;
}


/* EA::IO::WriteUint8(EA::IO::IStream*, unsigned char) */

void EA::IO::WriteUint8(IStream *param_1,uchar param_2)

{
  uchar local_1;
  
  local_1 = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_1,1);
  return;
}


/* EA::IO::WriteUint16(EA::IO::IStream*, unsigned short, EA::IO::Endian) */

void EA::IO::WriteUint16(long *param_1,undefined4 param_2,int param_3)

{
  undefined2 local_2;
  
  local_2 = (undefined2)param_2;
  if (param_3 != 1) {
    local_2 = FUN_053fbf9c(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&local_2,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteUint16(EA::IO::IStream*, unsigned short const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteUint16(long *param_1,undefined2 *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == 1) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 << 1);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      local_a = FUN_053fbf9c(*param_2);
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,&local_a,2);
      uVar2 = 0;
      if (cVar1 == '\0') goto LAB_053fd140;
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
LAB_053fd140:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::WriteInt16(EA::IO::IStream*, short, EA::IO::Endian) */

void EA::IO::WriteInt16(long *param_1,undefined4 param_2,int param_3)

{
  undefined2 uStack_2;
  
  uStack_2 = (undefined2)param_2;
  if (param_3 != 1) {
    uStack_2 = FUN_053fbf9c(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&uStack_2,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteInt16(EA::IO::IStream*, short const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteInt16(long *param_1,undefined2 *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uStack_a;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_4 == 1) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 << 1);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uStack_a = FUN_053fbf9c(*param_2);
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,&uStack_a,2);
      uVar2 = 0;
      if (cVar1 == '\0') goto LAB_053fd140;
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
LAB_053fd140:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::WriteUint32(EA::IO::IStream*, unsigned int, EA::IO::Endian) */

void EA::IO::WriteUint32(long *param_1,undefined4 param_2,int param_3)

{
  undefined4 local_4;
  
  local_4 = param_2;
  if (param_3 != 1) {
    local_4 = FUN_053fbfac(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&local_4,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteUint32(EA::IO::IStream*, unsigned int const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteUint32(long *param_1,undefined4 *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == 1) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 << 2);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      local_c = FUN_053fbfac(*param_2);
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,&local_c,4);
      uVar2 = 0;
      if (cVar1 == '\0') goto LAB_053fd258;
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
LAB_053fd258:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::WriteInt32(EA::IO::IStream*, int, EA::IO::Endian) */

void EA::IO::WriteInt32(long *param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  if (param_3 != 1) {
    uStack_4 = FUN_053fbfac(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&uStack_4,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteFloat(EA::IO::IStream*, float const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteFloat(long *param_1,undefined4 *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_4 == 1) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 << 2);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uStack_c = FUN_053fbfac(*param_2);
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,&uStack_c,4);
      uVar2 = 0;
      if (cVar1 == '\0') goto LAB_053fd258;
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
LAB_053fd258:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::WriteUint64(EA::IO::IStream*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteUint64(long *param_1,undefined8 param_2,int param_3)

{
  undefined8 local_8;
  
  local_8 = param_2;
  if (param_3 != 1) {
    local_8 = FUN_053fbfb4(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&local_8,8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteUint64(EA::IO::IStream*, unsigned long const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteUint64(long *param_1,undefined8 *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == 1) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 << 3);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      local_10 = FUN_053fbfb4(*param_2);
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,&local_10,8);
      uVar2 = 0;
      if (cVar1 == '\0') goto LAB_053fd370;
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
LAB_053fd370:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::WriteInt64(EA::IO::IStream*, long, EA::IO::Endian) */

void EA::IO::WriteInt64(long *param_1,undefined8 param_2,int param_3)

{
  undefined8 uStack_8;
  
  uStack_8 = param_2;
  if (param_3 != 1) {
    uStack_8 = FUN_053fbfb4(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&uStack_8,8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteDouble(EA::IO::IStream*, double const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteDouble(long *param_1,undefined8 *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_4 == 1) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 << 3);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uStack_10 = FUN_053fbfb4(*param_2);
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,&uStack_10,8);
      uVar2 = 0;
      if (cVar1 == '\0') goto LAB_053fd370;
      param_2 = param_2 + 1;
    }
    uVar2 = 1;
  }
LAB_053fd370:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::IO::WriteFloat(EA::IO::IStream*, float, EA::IO::Endian) */

void EA::IO::WriteFloat(undefined4 param_2,undefined8 param_1,undefined4 param_3)

{
  undefined4 local_4;
  
  local_4 = param_2;
  WriteFloat(param_1,&local_4,1,param_3);
  return;
}


/* EA::IO::WriteDouble(EA::IO::IStream*, double, EA::IO::Endian) */

void EA::IO::WriteDouble(undefined8 param_2,undefined8 param_1,undefined4 param_3)

{
  undefined8 local_8;
  
  local_8 = param_2;
  WriteDouble(param_1,&local_8,1,param_3);
  return;
}


/* EA::IO::WriteString(EA::IO::IStream*, char const*, unsigned long, EA::IO::Endian) */

ulong EA::IO::WriteString(long *param_1,char *param_2,ulong param_3,undefined4 param_4)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_3 == 0xffffffffffffffff) {
    if (*param_2 == '\0') {
      uVar2 = WriteUint32(param_1,0,param_4);
      return uVar2;
    }
    param_3 = 0;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != '\0');
  }
  bVar1 = WriteUint32(param_1,param_3 & 0xffffffff,param_4);
  uVar2 = (ulong)bVar1;
  if ((param_3 != 0) && (bVar1 != 0)) {
    bVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    uVar2 = (ulong)bVar1;
  }
  return uVar2;
}


/* EA::IO::WriteString(EA::IO::IStream*, char16_t const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteString(undefined8 param_1,short *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  
  if (param_3 == 0xffffffffffffffff) {
    if (*param_2 == 0) {
      WriteUint32(param_1,0,param_4 & 0xffffffff);
      return;
    }
    param_3 = 0;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != 0);
  }
  cVar1 = WriteUint32(param_1,param_3 & 0xffffffff,param_4 & 0xffffffff);
  if ((param_3 != 0) && (cVar1 != '\0')) {
    WriteUint16(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


/* EA::IO::WriteString(EA::IO::IStream*, char32_t const*, unsigned long, EA::IO::Endian) */

void EA::IO::WriteString(undefined8 param_1,int *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  
  if (param_3 == 0xffffffffffffffff) {
    if (*param_2 == 0) {
      WriteUint32(param_1,0,param_4 & 0xffffffff);
      return;
    }
    param_3 = 0;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != 0);
  }
  cVar1 = WriteUint32(param_1,param_3 & 0xffffffff,param_4 & 0xffffffff);
  if ((param_3 != 0) && (cVar1 != '\0')) {
    WriteUint32(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteLine(EA::IO::IStream*, char const*, unsigned long, EA::IO::LineEnd) */

void EA::IO::WriteLine(long *param_1,char *param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_10;
  undefined1 local_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == -1) {
    if (*param_2 != '\0') {
      param_3 = 0;
      do {
        param_3 = param_3 + 1;
      } while (param_2[param_3] != '\0');
      if (param_3 != 0) goto LAB_053fd688;
    }
LAB_053fd62c:
    if (param_4 != 1) {
LAB_053fd634:
      if (param_4 == 3) {
        local_10 = 0xd;
        local_f = 10;
        uVar2 = (**(code **)(*param_1 + 0x78))(param_1,&local_10,2);
        goto LAB_053fd648;
      }
      if (param_4 != 2) goto LAB_053fd644;
    }
LAB_053fd6d0:
    local_10 = 10;
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1,&local_10,1);
  }
  else {
    if (param_3 == 0) goto LAB_053fd62c;
LAB_053fd688:
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_053fd648;
    if (param_4 != 1) goto LAB_053fd634;
    if ((param_2[param_3 + -1] != '\r') && (param_2[param_3 + -1] != '\n')) goto LAB_053fd6d0;
LAB_053fd644:
    uVar2 = 1;
  }
LAB_053fd648:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteLine(EA::IO::IStream*, char16_t const*, unsigned long, EA::IO::LineEnd,
   EA::IO::Endian) */

void EA::IO::WriteLine(undefined8 param_1,short *param_2,long param_3,int param_4,undefined4 param_5
                      )

{
  char cVar1;
  undefined1 uVar2;
  undefined2 local_10;
  undefined2 local_e;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == -1) {
    if (*param_2 != 0) {
      param_3 = 0;
      do {
        param_3 = param_3 + 1;
      } while (param_2[param_3] != 0);
      if (param_3 != 0) goto LAB_053fd7cc;
    }
LAB_053fd76c:
    if (param_4 != 1) {
LAB_053fd774:
      if (param_4 == 3) {
        local_10 = 0xd;
        local_e = 10;
        uVar2 = WriteUint16(param_1,&local_10,2,param_5);
        goto LAB_053fd788;
      }
      if (param_4 != 2) goto LAB_053fd784;
    }
LAB_053fd810:
    local_10 = 10;
    uVar2 = WriteUint16(param_1,&local_10,param_5,0);
  }
  else {
    if (param_3 == 0) goto LAB_053fd76c;
LAB_053fd7cc:
    cVar1 = WriteUint16(param_1,param_2,param_3,param_5);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_053fd788;
    if (param_4 != 1) goto LAB_053fd774;
    if ((param_2[param_3 + -1] != 0xd) && (param_2[param_3 + -1] != 10)) goto LAB_053fd810;
LAB_053fd784:
    uVar2 = 1;
  }
LAB_053fd788:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::WriteLine(EA::IO::IStream*, char32_t const*, unsigned long, EA::IO::LineEnd,
   EA::IO::Endian) */

void EA::IO::WriteLine(undefined8 param_1,int *param_2,long param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == -1) {
    if (*param_2 != 0) {
      param_3 = 0;
      do {
        param_3 = param_3 + 1;
      } while (param_2[param_3] != 0);
      if (param_3 != 0) goto LAB_053fd904;
    }
LAB_053fd8a4:
    if (param_4 != 1) {
LAB_053fd8ac:
      if (param_4 == 3) {
        local_10 = 0xd;
        local_c = 10;
        uVar2 = WriteUint32(param_1,&local_10,2,param_5);
        goto LAB_053fd8c0;
      }
      if (param_4 != 2) goto LAB_053fd8bc;
    }
LAB_053fd948:
    local_10 = 10;
    uVar2 = WriteUint32(param_1,&local_10,param_5,0);
  }
  else {
    if (param_3 == 0) goto LAB_053fd8a4;
LAB_053fd904:
    cVar1 = WriteUint32(param_1,param_2,param_3,param_5);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_053fd8c0;
    if (param_4 != 1) goto LAB_053fd8ac;
    if ((param_2[param_3 + -1] != 0xd) && (param_2[param_3 + -1] != 10)) goto LAB_053fd948;
LAB_053fd8bc:
    uVar2 = 1;
  }
LAB_053fd8c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

