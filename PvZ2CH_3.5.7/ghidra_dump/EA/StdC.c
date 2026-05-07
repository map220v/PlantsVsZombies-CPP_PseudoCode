// Class: EA::StdC


/* EA::StdC::Spawn(char16_t const*, char16_t const* const*, bool) */

undefined8 EA::StdC::Spawn(wchar16 *param_1,wchar16 **param_2,bool param_3)

{
  return 0xffffffff;
}


/* EA::StdC::Strlcpy(char16_t*, wchar_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar16 *param_1,wchar_t *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  wchar_t wVar3;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    wVar3 = *param_2;
    uVar1 = 1;
    if (wVar3 == L'\0') {
      uVar2 = 0;
    }
    else {
      do {
        uVar2 = uVar1;
        if ((param_1 != (wchar16 *)0x0) && (uVar2 < param_3)) {
          *param_1 = (wchar16)wVar3;
          param_1 = param_1 + 1;
        }
        if (uVar2 == param_4) goto LAB_05350eb8;
        wVar3 = param_2[uVar2];
        uVar1 = uVar2 + 1;
      } while (wVar3 != L'\0');
      uVar2 = uVar2 & 0xffffffff;
    }
  }
LAB_05350eb8:
  if ((param_1 != (wchar16 *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar2 & 0xffffffff;
}


/* EA::StdC::Strlcpy(wchar_t*, char const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar_t *param_1,char *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  wchar_t wVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = 1;
  while( true ) {
    uVar10 = param_4 - 1;
    if (param_4 == 0) break;
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    pbVar3 = (byte *)(param_2 + 1);
    wVar7 = (wchar_t)bVar1;
    if (bVar1 < 0x80) {
      if (wVar7 == L'\0') break;
      if ((param_1 != (wchar_t *)0x0) && (uVar9 < param_3)) {
        *param_1 = wVar7;
        param_1 = param_1 + 1;
      }
LAB_05350d1c:
      uVar9 = uVar9 + 1;
      param_2 = (char *)pbVar3;
      param_4 = uVar10;
    }
    else {
      bVar1 = utf8lengthTable[(uint)wVar7];
      if ((param_4 < bVar1) || (bVar1 == 0)) {
LAB_05350dd4:
        GetAssertionsEnabled();
        return 0xffffffff;
      }
      uVar8 = (uint)bVar1;
      if (uVar8 - 1 == 0) {
        uVar4 = 0;
      }
      else {
        bVar2 = param_2[1];
        if (0x3f < (byte)(bVar2 + 0x80)) goto LAB_05350dd4;
        pbVar3 = (byte *)(param_2 + 2 + (uVar8 - 2));
        pbVar5 = (byte *)(param_2 + 2);
        while (uVar6 = (uint)bVar2 + uVar6 * 0x40, pbVar5 != pbVar3) {
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (0x3f < (byte)(bVar2 + 0x80)) goto LAB_05350dd4;
        }
        uVar4 = (ulong)(uVar8 - 1);
      }
      uVar10 = uVar10 - uVar4;
      wVar7 = uVar6 - *(int *)(&DAT_0575f780 + (ulong)uVar8 * 4);
      if (((uint)wVar7 < (uint)*(wchar_t *)(&DAT_0575f7a0 + (ulong)uVar8 * 4)) ||
         ((uint)*(wchar_t *)(&DAT_0575f760 + (ulong)bVar1 * 4) <= (uint)wVar7)) break;
      if ((param_1 == (wchar_t *)0x0) || (param_3 <= uVar9)) goto LAB_05350d1c;
      *param_1 = wVar7;
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 1;
      param_2 = (char *)pbVar3;
      param_4 = uVar10;
    }
  }
  if ((param_1 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar9 - 1 & 0xffffffff;
}


/* bool EA::StdC::Strlcpy<eastl::fixed_string<char32_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >(eastl::fixed_string<char32_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>&, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> const&) */

bool EA::StdC::
     Strlcpy<eastl::fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               (fixed_string *param_1,fixed_string *param_2)

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
    return true;
  }
  FUN_0533e7e4(*(undefined8 *)param_1,param_1 + 8);
  return false;
}


/* bool EA::StdC::Strlcpy<eastl::fixed_string<wchar_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> >(eastl::fixed_string<wchar_t, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator>&, eastl::fixed_string<char, 20, true,
   EA::Allocator::EAIOEASTLCoreAllocator> const&) */

bool EA::StdC::
     Strlcpy<eastl::fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>,eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>>
               (fixed_string *param_1,fixed_string *param_2)

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
    return true;
  }
  FUN_0533e808(*(undefined8 *)param_1,param_1 + 8);
  return false;
}


/* EA::StdC::Strlcpy(wchar_t*, char16_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar_t *param_1,wchar16 *param_2,ulong param_3,ulong param_4)

{
  wchar16 wVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    wVar1 = *param_2;
    uVar2 = 1;
    if (wVar1 == L'\0') {
      uVar3 = 0;
    }
    else {
      do {
        uVar3 = uVar2;
        if ((param_1 != (wchar_t *)0x0) && (uVar3 < param_3)) {
          *param_1 = (uint)(ushort)wVar1;
          param_1 = param_1 + 1;
        }
        if (uVar3 == param_4) goto LAB_05350e48;
        wVar1 = param_2[uVar3];
        uVar2 = uVar3 + 1;
      } while (wVar1 != L'\0');
      uVar3 = uVar3 & 0xffffffff;
    }
  }
LAB_05350e48:
  if ((param_1 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar3 & 0xffffffff;
}


/* EA::StdC::Strlcpy(char*, wchar_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(char *param_1,wchar_t *param_2,ulong param_3,ulong param_4)

{
  wchar_t wVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      wVar1 = param_2[uVar3];
      bVar2 = (byte)wVar1;
      if ((uint)wVar1 < 0x80) {
        if (wVar1 == L'\0') break;
        uVar4 = uVar4 + 1;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = bVar2;
          param_1 = param_1 + 1;
        }
      }
      else if ((uint)wVar1 < 0x800) {
        uVar4 = uVar4 + 2;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = (byte)((uint)wVar1 >> 6) | 0xc0;
          param_1[1] = bVar2 & 0x3f | 0x80;
          param_1 = param_1 + 2;
        }
      }
      else if ((uint)wVar1 < 0x10000) {
        uVar4 = uVar4 + 3;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          param_1[1] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar2 & 0x3f | 0x80;
          *param_1 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
          param_1 = param_1 + 3;
        }
      }
      else if ((uint)wVar1 < 0x200000) {
        uVar4 = uVar4 + 4;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          param_1[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
          *param_1 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
          param_1[3] = bVar2 & 0x3f | 0x80;
          param_1 = param_1 + 4;
        }
      }
      else {
        uVar4 = uVar4 + 3;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = 0xef;
          param_1[1] = 0xbf;
          param_1[2] = 0xbd;
          param_1 = param_1 + 3;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_4);
  }
  if (((byte *)param_1 != (byte *)0x0) && (param_3 != 0)) {
    *param_1 = 0;
  }
  return uVar4 & 0xffffffff;
}


/* EA::StdC::Strlen(wchar_t const*) */

void EA::StdC::Strlen(wchar_t *param_1)

{
  long lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != L'\0');
  return;
}


/* EA::StdC::Strend(char const*) */

void EA::StdC::Strend(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return;
}


/* EA::StdC::Strend(char16_t const*) */

void EA::StdC::Strend(wchar16 *param_1)

{
  wchar16 wVar1;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  }
  return;
}


/* EA::StdC::Strend(char32_t const*) */

void EA::StdC::Strend(wchar32 *param_1)

{
  wchar32 wVar1;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  }
  return;
}


/* EA::StdC::Tolower(char) */

undefined1 EA::StdC::Tolower(char param_1)

{
  return EASTDC_WLOWER_MAP[(byte)param_1];
}


/* EA::StdC::Tolower(char16_t) */

wchar16 EA::StdC::Tolower(wchar16 param_1)

{
  if ((ushort)param_1 < 0x100) {
    param_1 = (wchar16)(byte)EASTDC_WLOWER_MAP[(int)(uint)(ushort)param_1];
  }
  return param_1;
}


/* EA::StdC::Tolower(char32_t) */

wchar32 EA::StdC::Tolower(wchar32 param_1)

{
  if ((uint)param_1 < 0x100) {
    param_1 = (wchar32)(byte)EASTDC_WLOWER_MAP[param_1];
  }
  return param_1;
}


/* EA::StdC::Toupper(char) */

undefined1 EA::StdC::Toupper(char param_1)

{
  return EASTDC_WUPPER_MAP[(byte)param_1];
}


/* EA::StdC::Toupper(char16_t) */

wchar16 EA::StdC::Toupper(wchar16 param_1)

{
  if ((ushort)param_1 < 0x100) {
    param_1 = (wchar16)(byte)EASTDC_WUPPER_MAP[(int)(uint)(ushort)param_1];
  }
  return param_1;
}


/* EA::StdC::Toupper(char32_t) */

wchar32 EA::StdC::Toupper(wchar32 param_1)

{
  if ((uint)param_1 < 0x100) {
    param_1 = (wchar32)(byte)EASTDC_WUPPER_MAP[param_1];
  }
  return param_1;
}


/* EA::StdC::DJB2(void const*, unsigned long, unsigned int) */

uint EA::StdC::DJB2(void *param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  if (param_1 < (byte *)((long)param_1 + param_2)) {
    do {
      pbVar1 = pbVar2 + 1;
      param_3 = (uint)*pbVar2 + param_3 * 0x21;
      pbVar2 = pbVar1;
    } while (pbVar1 != (byte *)((long)param_1 + param_2));
  }
  return param_3;
}


/* EA::StdC::DJB2_String8(char const*, unsigned int, EA::StdC::CharCase) */

int EA::StdC::DJB2_String8(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    bVar1 = *param_1;
    if (bVar1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar2 = Tolower(bVar1);
        bVar1 = *param_1;
        param_2 = param_2 * 0x21 + (uVar2 & 0xff);
      } while (bVar1 != 0);
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar2 = (uint)*param_1;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar2 + param_2 * 0x21;
        uVar2 = (uint)*param_1;
      } while (uVar2 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    bVar1 = *param_1;
    while (bVar1 != 0) {
      param_1 = param_1 + 1;
      uVar2 = Toupper(bVar1);
      param_2 = param_2 * 0x21 + (uVar2 & 0xff);
      bVar1 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::DJB2_String16(char16_t const*, unsigned int, EA::StdC::CharCase) */

int EA::StdC::DJB2_String16(wchar16 *param_1,int param_2,int param_3)

{
  wchar16 wVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    wVar1 = *param_1;
    if (wVar1 != L'\0') {
      do {
        param_1 = param_1 + 1;
        uVar2 = Tolower(wVar1);
        wVar1 = *param_1;
        param_2 = param_2 * 0x21 + (uVar2 & 0xffff);
      } while (wVar1 != L'\0');
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar2 = (uint)(ushort)*param_1;
    if (*param_1 != L'\0') {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar2 + param_2 * 0x21;
        uVar2 = (uint)(ushort)*param_1;
      } while (uVar2 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      param_1 = param_1 + 1;
      uVar2 = Toupper(wVar1);
      param_2 = param_2 * 0x21 + (uVar2 & 0xffff);
      wVar1 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::FNV1(void const*, unsigned long, unsigned int) */

uint EA::StdC::FNV1(void *param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = param_1;
  if (param_1 < (byte *)((long)param_1 + param_2)) {
    do {
      pbVar2 = pbVar1 + 1;
      param_3 = (uint)*pbVar1 ^ param_3 * 0x1000193;
      pbVar1 = pbVar2;
    } while (pbVar2 != (byte *)((long)param_1 + param_2));
  }
  return param_3;
}


/* EA::StdC::FNV1_String8(char const*, unsigned int, EA::StdC::CharCase) */

uint EA::StdC::FNV1_String8(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    bVar1 = *param_1;
    if (bVar1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar2 = Tolower(bVar1);
        bVar1 = *param_1;
        param_2 = uVar2 & 0xff ^ param_2 * 0x1000193;
      } while (bVar1 != 0);
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar2 = (uint)*param_1;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar2 ^ param_2 * 0x1000193;
        uVar2 = (uint)*param_1;
      } while (uVar2 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    bVar1 = *param_1;
    while (bVar1 != 0) {
      param_1 = param_1 + 1;
      uVar2 = Toupper(bVar1);
      param_2 = uVar2 & 0xff ^ param_2 * 0x1000193;
      bVar1 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::FNV1_String16(char16_t const*, unsigned int, EA::StdC::CharCase) */

uint EA::StdC::FNV1_String16(wchar16 *param_1,uint param_2,int param_3)

{
  wchar16 wVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    wVar1 = *param_1;
    if (wVar1 != L'\0') {
      do {
        param_1 = param_1 + 1;
        uVar2 = Tolower(wVar1);
        wVar1 = *param_1;
        param_2 = uVar2 & 0xffff ^ param_2 * 0x1000193;
      } while (wVar1 != L'\0');
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar2 = (uint)(ushort)*param_1;
    if (*param_1 != L'\0') {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar2 ^ param_2 * 0x1000193;
        uVar2 = (uint)(ushort)*param_1;
      } while (uVar2 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      param_1 = param_1 + 1;
      uVar2 = Toupper(wVar1);
      param_2 = uVar2 & 0xffff ^ param_2 * 0x1000193;
      wVar1 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::FNV1_String32(char32_t const*, unsigned int, EA::StdC::CharCase) */

uint EA::StdC::FNV1_String32(wchar32 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  wchar32 wVar2;
  
  if (param_3 == 1) {
    wVar2 = *param_1;
    if (wVar2 != L'\0') {
      do {
        param_1 = param_1 + 1;
        uVar1 = Tolower(wVar2);
        wVar2 = *param_1;
        param_2 = uVar1 ^ param_2 * 0x1000193;
      } while (wVar2 != L'\0');
      return param_2;
    }
  }
  else if (param_3 == 0) {
    wVar2 = *param_1;
    if (wVar2 != L'\0') {
      do {
        param_1 = param_1 + 1;
        param_2 = wVar2 ^ param_2 * 0x1000193;
        wVar2 = *param_1;
      } while (wVar2 != L'\0');
      return param_2;
    }
  }
  else if (param_3 == 2) {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      param_1 = param_1 + 1;
      uVar1 = Toupper(wVar2);
      param_2 = uVar1 ^ param_2 * 0x1000193;
      wVar2 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::FNV64(void const*, unsigned long, unsigned long) */

ulong EA::StdC::FNV64(void *param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = param_1;
  if (param_1 < (byte *)((long)param_1 + param_2)) {
    do {
      pbVar2 = pbVar1 + 1;
      param_3 = (ulong)*pbVar1 ^ param_3 * 0x100000001b3;
      pbVar1 = pbVar2;
    } while (pbVar2 != (byte *)((long)param_1 + param_2));
  }
  return param_3;
}


/* EA::StdC::FNV64_String8(char const*, unsigned long, EA::StdC::CharCase) */

ulong EA::StdC::FNV64_String8(byte *param_1,ulong param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  if (param_3 == 1) {
    bVar1 = *param_1;
    if (bVar1 != 0) {
      do {
        param_1 = param_1 + 1;
        bVar2 = Tolower(bVar1);
        bVar1 = *param_1;
        param_2 = (ulong)bVar2 ^ param_2 * 0x100000001b3;
      } while (bVar1 != 0);
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar3 = (ulong)*param_1;
    if (uVar3 != 0) {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar3 ^ param_2 * 0x100000001b3;
        uVar3 = (ulong)*param_1;
      } while (uVar3 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    bVar1 = *param_1;
    while (bVar1 != 0) {
      param_1 = param_1 + 1;
      bVar1 = Toupper(bVar1);
      param_2 = (ulong)bVar1 ^ param_2 * 0x100000001b3;
      bVar1 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::FNV64_String16(char16_t const*, unsigned long, EA::StdC::CharCase) */

ulong EA::StdC::FNV64_String16(wchar16 *param_1,ulong param_2,int param_3)

{
  wchar16 wVar1;
  ushort uVar2;
  ulong uVar3;
  
  if (param_3 == 1) {
    wVar1 = *param_1;
    if (wVar1 != L'\0') {
      do {
        param_1 = param_1 + 1;
        uVar2 = Tolower(wVar1);
        wVar1 = *param_1;
        param_2 = (ulong)uVar2 ^ param_2 * 0x100000001b3;
      } while (wVar1 != L'\0');
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar3 = (ulong)(ushort)*param_1;
    if (uVar3 != 0) {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar3 ^ param_2 * 0x100000001b3;
        uVar3 = (ulong)(ushort)*param_1;
      } while (uVar3 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      param_1 = param_1 + 1;
      uVar2 = Toupper(wVar1);
      param_2 = (ulong)uVar2 ^ param_2 * 0x100000001b3;
      wVar1 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::FNV64_String32(char32_t const*, unsigned long, EA::StdC::CharCase) */

ulong EA::StdC::FNV64_String32(wchar32 *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  wchar32 wVar2;
  
  if (param_3 == 1) {
    wVar2 = *param_1;
    if (wVar2 != L'\0') {
      do {
        param_1 = param_1 + 1;
        uVar1 = Tolower(wVar2);
        wVar2 = *param_1;
        param_2 = uVar1 & 0xffffffff ^ param_2 * 0x100000001b3;
      } while (wVar2 != L'\0');
      return param_2;
    }
  }
  else if (param_3 == 0) {
    uVar1 = (ulong)(uint)*param_1;
    if (uVar1 != 0) {
      do {
        param_1 = param_1 + 1;
        param_2 = uVar1 ^ param_2 * 0x100000001b3;
        uVar1 = (ulong)(uint)*param_1;
      } while (uVar1 != 0);
      return param_2;
    }
  }
  else if (param_3 == 2) {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      param_1 = param_1 + 1;
      uVar1 = Toupper(wVar2);
      param_2 = uVar1 & 0xffffffff ^ param_2 * 0x100000001b3;
      wVar2 = *param_1;
    }
  }
  return param_2;
}


/* EA::StdC::GetCurrentProcessPath(char*, int) */

long EA::StdC::GetCurrentProcessPath(char *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = readlink("/proc/self/exe",param_1,(long)param_2);
  if (lVar1 != -1) {
    if (param_2 + -1 < lVar1) {
      lVar1 = (long)(param_2 + -1);
    }
    param_1[lVar1] = '\0';
    return lVar1;
  }
  *param_1 = '\0';
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::GetCurrentProcessPath(char16_t*, int) */

void EA::StdC::GetCurrentProcessPath(wchar16 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentProcessPath(acStack_408,0x400);
  iVar1 = Strlcpy(param_1,acStack_408,(long)param_2,0xffffffffffffffff);
  if ((iVar1 < param_2) && (-1 < iVar1)) {
    lVar2 = (long)iVar1;
  }
  else {
    *param_1 = L'\0';
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* EA::StdC::GetCurrentProcessDirectory(char*, int) */

size_t EA::StdC::GetCurrentProcessDirectory(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ssize_t sVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  
  sVar3 = readlink("/proc/self/exe",param_1,(long)param_2);
  if (sVar3 == -1) {
    *param_1 = '\0';
    return 0;
  }
  iVar2 = (int)sVar3;
  if (0 < iVar2) {
    lVar5 = (long)iVar2 + -1;
    if (param_1[lVar5] != '/') {
      lVar6 = 0;
      do {
        param_1[lVar6 + lVar5] = '\0';
        bVar1 = lVar6 == -(ulong)(iVar2 - 1);
        lVar6 = lVar6 + -1;
        if (bVar1) break;
      } while (param_1[lVar6 + iVar2 + -1] != '/');
    }
  }
  sVar4 = strlen(param_1);
  return sVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::GetCurrentProcessDirectory(char16_t*, int) */

void EA::StdC::GetCurrentProcessDirectory(wchar16 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentProcessDirectory(acStack_408,0x400);
  iVar1 = Strlcpy(param_1,acStack_408,(long)param_2,0xffffffffffffffff);
  if ((iVar1 < param_2) && (-1 < iVar1)) {
    lVar2 = (long)iVar1;
  }
  else {
    *param_1 = L'\0';
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::GetCurrentProcessPath(char32_t*, int) */

void EA::StdC::GetCurrentProcessPath(wchar32 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentProcessPath(acStack_408,0x400);
  iVar1 = Strlcpy(param_1,acStack_408,(long)param_2,0xffffffffffffffff);
  if ((iVar1 < param_2) && (-1 < iVar1)) {
    lVar2 = (long)iVar1;
  }
  else {
    *param_1 = L'\0';
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::GetCurrentProcessDirectory(char32_t*, int) */

void EA::StdC::GetCurrentProcessDirectory(wchar32 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentProcessDirectory(acStack_408,0x400);
  iVar1 = Strlcpy(param_1,acStack_408,(long)param_2,0xffffffffffffffff);
  if ((iVar1 < param_2) && (-1 < iVar1)) {
    lVar2 = (long)iVar1;
  }
  else {
    *param_1 = L'\0';
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* EA::StdC::GetEnvironmentVar(char const*, char*, unsigned long) */

undefined8 EA::StdC::GetEnvironmentVar(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if (pcVar1 != (char *)0x0) {
    uVar2 = Strlcpy(param_2,pcVar1,param_3);
    return uVar2;
  }
  return 0xffffffffffffffff;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::GetEnvironmentVar(char16_t const*, char16_t*, unsigned long) */

void EA::StdC::GetEnvironmentVar(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  char acStack_218 [264];
  char acStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Strlcpy(acStack_218,param_1,0x104,0xffffffffffffffff);
  uVar2 = GetEnvironmentVar(acStack_218,acStack_110,0x104);
  if (uVar2 < 0x104) {
    iVar1 = Strlcpy(param_2,acStack_110,param_3,uVar2);
    uVar2 = (ulong)iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::StdC::SetEnvironmentVar(char const*, char const*) */

bool EA::StdC::SetEnvironmentVar(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = setenv(param_1,param_2,1);
    return iVar1 == 0;
  }
  iVar1 = unsetenv(param_1);
  return iVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SetEnvironmentVar(char16_t const*, char16_t const*) */

void EA::StdC::SetEnvironmentVar(wchar16 *param_1,wchar16 *param_2)

{
  char acStack_218 [264];
  char acStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Strlcpy(acStack_218,param_1,0x104,0xffffffffffffffff);
  Strlcpy(acStack_110,param_2,0x104,0xffffffffffffffff);
  SetEnvironmentVar(acStack_218,acStack_110);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Spawn(char const*, char const* const*, bool) */

void EA::StdC::Spawn(char *param_1,char **param_2,bool param_3)

{
  __pid_t __pid;
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __pid = fork();
  if (__pid == 0) {
    iVar1 = execv(param_1,param_2);
    piVar2 = (int *)__errno(iVar1);
                    /* WARNING: Subroutine does not return */
    exit(*piVar2);
  }
  uVar3 = 0;
  if (param_3) {
    waitpid(__pid,(int *)&local_c,0);
    uVar3 = local_c >> 8 & 0xff;
    if ((local_c & 0x7f) != 0) {
      uVar3 = 0xffffffff;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* EA::StdC::ExecuteShellCommand(char const*) */

int EA::StdC::ExecuteShellCommand(char *param_1)

{
  int iVar1;
  
  iVar1 = system(param_1);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ExecuteShellCommand(char16_t const*) */

void EA::StdC::ExecuteShellCommand(wchar16 *param_1)

{
  char acStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Strlcpy(acStack_110,param_1,0x104,0xffffffffffffffff);
  ExecuteShellCommand(acStack_110);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SearchEnvironmentPath(char16_t const*, char16_t*, char16_t const*) */

void EA::StdC::SearchEnvironmentPath(wchar16 *param_1,wchar16 *param_2,wchar16 *param_3)

{
  undefined1 uVar1;
  LineBreakCategory *pLVar2;
  LineBreakCategory *pLVar3;
  wchar16 awStack_320 [132];
  wchar16 awStack_218 [132];
  LineBreakCategory aLStack_110 [264];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar3 = ___stack_chk_guard;
  Strlcpy((char *)awStack_320,param_2,0x104,0xffffffffffffffff);
  pLVar2 = (LineBreakCategory *)0xffffffffffffffff;
  Strlcpy((char *)awStack_218,param_1,0x104,0xffffffffffffffff);
  if (param_3 == (wchar16 *)0x0) {
    uVar1 = Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (awStack_218,awStack_320,(LineBreakCategory *)0x0,pLVar2,pLVar3);
  }
  else {
    pLVar2 = (LineBreakCategory *)0xffffffffffffffff;
    Strlcpy((char *)aLStack_110,param_3,0x104,0xffffffffffffffff);
    uVar1 = Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (awStack_218,awStack_320,aLStack_110,pLVar2,pLVar3);
  }
  Strlcpy(param_2,(char *)awStack_320,0x104,0xffffffffffffffff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::OpenFile(char16_t const*) */

void EA::StdC::OpenFile(wchar16 *param_1)

{
  wchar16 *extraout_x1;
  LineBreakCategory *pLVar1;
  LineBreakCategory *pLVar2;
  LineBreakCategory *pLVar3;
  wchar16 awStack_110 [132];
  LineBreakCategory *local_8;
  
  pLVar1 = (LineBreakCategory *)0x104;
  pLVar2 = (LineBreakCategory *)0xffffffffffffffff;
  local_8 = ___stack_chk_guard;
  pLVar3 = ___stack_chk_guard;
  Strlcpy((char *)awStack_110,param_1,0x104,0xffffffffffffffff);
  Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
            (awStack_110,extraout_x1,pLVar1,pLVar2,pLVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Isalpha(char) */

byte EA::StdC::Isalpha(char param_1)

{
  return EASTDC_WCTYPE_MAP[(byte)param_1] & 0xc0;
}


/* EA::StdC::Isalpha(char16_t) */

byte EA::StdC::Isalpha(wchar16 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((ushort)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(int)(uint)(ushort)param_1] & 0xc0;
  }
  return bVar1;
}


/* EA::StdC::Isalpha(char32_t) */

byte EA::StdC::Isalpha(wchar32 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((uint)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(uint)param_1] & 0xc0;
  }
  return bVar1;
}


/* EA::StdC::Isdigit(char) */

byte EA::StdC::Isdigit(char param_1)

{
  return EASTDC_WCTYPE_MAP[(byte)param_1] & 0x10;
}


/* EA::StdC::Isdigit(char16_t) */

bool EA::StdC::Isdigit(wchar16 param_1)

{
  return (ushort)param_1 - 0x30 < 10;
}


/* EA::StdC::Isdigit(char32_t) */

bool EA::StdC::Isdigit(wchar32 param_1)

{
  return (uint)(param_1 + L'\xffffffd0') < 10;
}


/* EA::StdC::Islower(char) */

byte EA::StdC::Islower(char param_1)

{
  return EASTDC_WCTYPE_MAP[(byte)param_1] & 0x40;
}


/* EA::StdC::Islower(char16_t) */

byte EA::StdC::Islower(wchar16 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((ushort)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(int)(uint)(ushort)param_1] & 0x40;
  }
  return bVar1;
}


/* EA::StdC::Islower(char32_t) */

byte EA::StdC::Islower(wchar32 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((uint)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(uint)param_1] & 0x40;
  }
  return bVar1;
}


/* EA::StdC::Isupper(char) */

byte EA::StdC::Isupper(char param_1)

{
  return EASTDC_WCTYPE_MAP[(byte)param_1] & 0x80;
}


/* EA::StdC::Isupper(char16_t) */

byte EA::StdC::Isupper(wchar16 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((ushort)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(int)(uint)(ushort)param_1] & 0x80;
  }
  return bVar1;
}


/* EA::StdC::Isupper(char32_t) */

byte EA::StdC::Isupper(wchar32 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((uint)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(uint)param_1] & 0x80;
  }
  return bVar1;
}


/* EA::StdC::Isspace(char) */

byte EA::StdC::Isspace(char param_1)

{
  return EASTDC_WCTYPE_MAP[(byte)param_1] & 6;
}


/* EA::StdC::Isspace(char16_t) */

byte EA::StdC::Isspace(wchar16 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((ushort)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(int)(uint)(ushort)param_1] & 6;
  }
  return bVar1;
}


/* EA::StdC::Isspace(char32_t) */

byte EA::StdC::Isspace(wchar32 param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((uint)param_1 < 0x100) {
    bVar1 = EASTDC_WCTYPE_MAP[(uint)param_1] & 6;
  }
  return bVar1;
}


/* EA::StdC::Strcpy(char*, char const*) */

void EA::StdC::Strcpy(char *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    cVar1 = param_2[lVar2];
    param_1[lVar2] = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* EA::StdC::Strcpy(char16_t*, char16_t const*) */

void EA::StdC::Strcpy(wchar16 *param_1,wchar16 *param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    sVar1 = *(short *)((long)param_2 + lVar2);
    *(short *)((long)param_1 + lVar2) = sVar1;
    lVar2 = lVar2 + 2;
  } while (sVar1 != 0);
  return;
}


/* EA::StdC::Strcpy(char32_t*, char32_t const*) */

void EA::StdC::Strcpy(wchar32 *param_1,wchar32 *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = *(int *)((long)param_2 + lVar2);
    *(int *)((long)param_1 + lVar2) = iVar1;
    lVar2 = lVar2 + 4;
  } while (iVar1 != 0);
  return;
}


/* EA::StdC::Strncpy(char*, char const*, unsigned long) */

void EA::StdC::Strncpy(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  pcVar6 = param_1;
  lVar3 = param_3 + 1;
  do {
    lVar7 = lVar3;
    if (pcVar6 == param_1 + param_3) {
      return;
    }
    cVar2 = *param_2;
    pcVar5 = pcVar6 + 1;
    *pcVar6 = cVar2;
    param_2 = param_2 + 1;
    pcVar6 = pcVar5;
    lVar3 = lVar7 + -1;
  } while (cVar2 != '\0');
  lVar3 = lVar7 + -2;
  if (lVar3 != 0) {
    uVar1 = (lVar7 - 0x12U >> 4) + 1;
    if (0xe < lVar7 - 3U) {
      uVar4 = 0;
      do {
        pcVar6[8] = '\0';
        pcVar6[9] = '\0';
        pcVar6[10] = '\0';
        pcVar6[0xb] = '\0';
        pcVar6[0xc] = '\0';
        pcVar6[0xd] = '\0';
        pcVar6[0xe] = '\0';
        pcVar6[0xf] = '\0';
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 0x10;
      } while (uVar4 < uVar1);
      lVar7 = uVar1 * 0x10 - lVar3;
      pcVar5 = pcVar5 + uVar1 * 0x10;
      lVar3 = lVar3 + uVar1 * -0x10;
      if (lVar7 == 0) {
        return;
      }
    }
    *pcVar5 = '\0';
    if (((((lVar3 != 1) && (pcVar5[1] = '\0', lVar3 != 2)) && (pcVar5[2] = '\0', lVar3 != 3)) &&
        ((((pcVar5[3] = '\0', lVar3 != 4 && (pcVar5[4] = '\0', lVar3 != 5)) &&
          ((pcVar5[5] = '\0', lVar3 != 6 &&
           ((pcVar5[6] = '\0', lVar3 != 7 && (pcVar5[7] = '\0', lVar3 != 8)))))) &&
         (pcVar5[8] = '\0', lVar3 != 9)))) &&
       ((((pcVar5[9] = '\0', lVar3 != 10 && (pcVar5[10] = '\0', lVar3 != 0xb)) &&
         (pcVar5[0xb] = '\0', lVar3 != 0xc)) &&
        ((pcVar5[0xc] = '\0', lVar3 != 0xd && (pcVar5[0xd] = '\0', lVar3 != 0xe)))))) {
      pcVar5[0xe] = '\0';
      return;
    }
  }
  return;
}


/* EA::StdC::Strncpy(char16_t*, char16_t const*, unsigned long) */

void EA::StdC::Strncpy(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  ulong uVar1;
  wchar16 wVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  wchar16 *pwVar6;
  wchar16 *pwVar7;
  
  lVar3 = param_3 + 1;
  do {
    lVar4 = lVar3;
    if (lVar4 + -1 == 0) {
      return;
    }
    wVar2 = *param_2;
    pwVar6 = param_1 + 1;
    *param_1 = wVar2;
    param_2 = param_2 + 1;
    lVar3 = lVar4 + -1;
    param_1 = pwVar6;
  } while (wVar2 != L'\0');
  lVar3 = lVar4 + -2;
  if (lVar3 != 0) {
    uVar1 = (lVar4 - 10U >> 3) + 1;
    if (6 < lVar4 - 3U) {
      uVar5 = 0;
      pwVar7 = pwVar6;
      do {
        pwVar7[4] = L'\0';
        pwVar7[5] = L'\0';
        pwVar7[6] = L'\0';
        pwVar7[7] = L'\0';
        pwVar7[0] = L'\0';
        pwVar7[1] = L'\0';
        pwVar7[2] = L'\0';
        pwVar7[3] = L'\0';
        uVar5 = uVar5 + 1;
        pwVar7 = pwVar7 + 8;
      } while (uVar5 < uVar1);
      lVar4 = uVar1 * 8 - lVar3;
      pwVar6 = pwVar6 + uVar1 * 8;
      lVar3 = lVar3 + uVar1 * -8;
      if (lVar4 == 0) {
        return;
      }
    }
    *pwVar6 = L'\0';
    if ((((lVar3 != 1) && (pwVar6[1] = L'\0', lVar3 != 2)) && (pwVar6[2] = L'\0', lVar3 != 3)) &&
       (((pwVar6[3] = L'\0', lVar3 != 4 && (pwVar6[4] = L'\0', lVar3 != 5)) &&
        (pwVar6[5] = L'\0', lVar3 != 6)))) {
      pwVar6[6] = L'\0';
      return;
    }
  }
  return;
}


/* EA::StdC::Strncpy(char32_t*, char32_t const*, unsigned long) */

void EA::StdC::Strncpy(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  ulong uVar1;
  wchar32 wVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  wchar32 *pwVar6;
  wchar32 *pwVar7;
  
  lVar4 = param_3 + 1;
  do {
    lVar3 = lVar4;
    if (lVar3 + -1 == 0) {
      return;
    }
    wVar2 = *param_2;
    pwVar6 = param_1 + 1;
    *param_1 = wVar2;
    param_2 = param_2 + 1;
    lVar4 = lVar3 + -1;
    param_1 = pwVar6;
  } while (wVar2 != L'\0');
  lVar4 = lVar3 + -2;
  if (lVar4 != 0) {
    uVar1 = (lVar3 - 6U >> 2) + 1;
    if (2 < lVar3 - 3U) {
      uVar5 = 0;
      pwVar7 = pwVar6;
      do {
        pwVar7[2] = L'\0';
        pwVar7[3] = L'\0';
        pwVar7[0] = L'\0';
        pwVar7[1] = L'\0';
        uVar5 = uVar5 + 1;
        pwVar7 = pwVar7 + 4;
      } while (uVar5 < uVar1);
      lVar3 = uVar1 * 4 - lVar4;
      pwVar6 = pwVar6 + uVar1 * 4;
      lVar4 = lVar4 + uVar1 * -4;
      if (lVar3 == 0) {
        return;
      }
    }
    *pwVar6 = L'\0';
    if ((lVar4 != 1) && (pwVar6[1] = L'\0', lVar4 != 2)) {
      pwVar6[2] = L'\0';
      return;
    }
  }
  return;
}


/* EA::StdC::StringnCopy(char*, char const*, unsigned long) */

void EA::StdC::StringnCopy(char *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_3 != 0) {
    if (*param_2 == '\0') {
      *param_1 = '\0';
    }
    else {
      lVar2 = param_3 - 2;
      do {
        bVar1 = lVar2 == -1;
        pcVar3 = param_1 + 1;
        *param_1 = *param_2;
        lVar2 = lVar2 + -1;
        if (bVar1) {
          return;
        }
        param_2 = param_2 + 1;
        param_1 = pcVar3;
      } while (*param_2 != '\0');
      *pcVar3 = '\0';
    }
  }
  return;
}


/* EA::StdC::StringnCopy(char16_t*, char16_t const*, unsigned long) */

void EA::StdC::StringnCopy(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  wchar16 *pwVar3;
  
  if (param_3 != 0) {
    if (*param_2 == L'\0') {
      *param_1 = L'\0';
    }
    else {
      lVar2 = param_3 - 2;
      do {
        bVar1 = lVar2 == -1;
        pwVar3 = param_1 + 1;
        *param_1 = *param_2;
        lVar2 = lVar2 + -1;
        if (bVar1) {
          return;
        }
        param_2 = param_2 + 1;
        param_1 = pwVar3;
      } while (*param_2 != L'\0');
      *pwVar3 = L'\0';
    }
  }
  return;
}


/* EA::StdC::StringnCopy(char32_t*, char32_t const*, unsigned long) */

void EA::StdC::StringnCopy(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  wchar32 *pwVar3;
  
  if (param_3 != 0) {
    if (*param_2 == L'\0') {
      *param_1 = L'\0';
    }
    else {
      lVar2 = param_3 - 2;
      do {
        bVar1 = lVar2 == -1;
        pwVar3 = param_1 + 1;
        *param_1 = *param_2;
        lVar2 = lVar2 + -1;
        if (bVar1) {
          return;
        }
        param_2 = param_2 + 1;
        param_1 = pwVar3;
      } while (*param_2 != L'\0');
      *pwVar3 = L'\0';
    }
  }
  return;
}


/* EA::StdC::Strlcpy(char*, char const*, unsigned long) */

char * EA::StdC::Strlcpy(char *param_1,char *param_2,ulong param_3)

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


/* EA::StdC::Strlcpy(char16_t*, char16_t const*, unsigned long) */

long EA::StdC::Strlcpy(wchar16 *param_1,wchar16 *param_2,ulong param_3)

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


/* EA::StdC::Strlcpy(char32_t*, char32_t const*, unsigned long) */

long EA::StdC::Strlcpy(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  
  pwVar2 = param_2;
  if (param_3 == 0) {
LAB_05350924:
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
        goto LAB_05350924;
      }
      wVar1 = *pwVar2;
      *param_1 = wVar1;
      param_1 = param_1 + 1;
      pwVar3 = pwVar2 + 1;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
  }
  return ((long)pwVar3 - (long)param_2 >> 2) + -1;
}


/* EA::StdC::Strlcpy(char*, char16_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(char *param_1,wchar16 *param_2,ulong param_3,ulong param_4)

{
  wchar16 wVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      wVar1 = param_2[uVar3];
      bVar2 = (byte)wVar1;
      if ((ushort)wVar1 < 0x80) {
        if (wVar1 == L'\0') break;
        uVar4 = uVar4 + 1;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = bVar2;
          param_1 = param_1 + 1;
        }
      }
      else if ((ushort)wVar1 < 0x800) {
        uVar4 = uVar4 + 2;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = (byte)((ushort)wVar1 >> 6) | 0xc0;
          param_1[1] = bVar2 & 0x3f | 0x80;
          param_1 = param_1 + 2;
        }
      }
      else {
        uVar4 = uVar4 + 3;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          param_1[1] = (byte)((ushort)wVar1 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar2 & 0x3f | 0x80;
          *param_1 = (byte)((ushort)wVar1 >> 0xc) | 0xe0;
          param_1 = param_1 + 3;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_4);
  }
  if (((byte *)param_1 != (byte *)0x0) && (param_3 != 0)) {
    *param_1 = 0;
  }
  return uVar4 & 0xffffffff;
}


/* EA::StdC::Strlcpy(char*, char32_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(char *param_1,wchar32 *param_2,ulong param_3,ulong param_4)

{
  wchar32 wVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      wVar1 = param_2[uVar3];
      bVar2 = (byte)wVar1;
      if ((uint)wVar1 < 0x80) {
        if (wVar1 == L'\0') break;
        uVar4 = uVar4 + 1;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = bVar2;
          param_1 = param_1 + 1;
        }
      }
      else if ((uint)wVar1 < 0x800) {
        uVar4 = uVar4 + 2;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = (byte)((uint)wVar1 >> 6) | 0xc0;
          param_1[1] = bVar2 & 0x3f | 0x80;
          param_1 = param_1 + 2;
        }
      }
      else if ((uint)wVar1 < 0x10000) {
        uVar4 = uVar4 + 3;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          param_1[1] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar2 & 0x3f | 0x80;
          *param_1 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
          param_1 = param_1 + 3;
        }
      }
      else if ((uint)wVar1 < 0x200000) {
        uVar4 = uVar4 + 4;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          param_1[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
          *param_1 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
          param_1[3] = bVar2 & 0x3f | 0x80;
          param_1 = param_1 + 4;
        }
      }
      else {
        uVar4 = uVar4 + 3;
        if (((byte *)param_1 != (byte *)0x0) && (uVar4 < param_3)) {
          *param_1 = 0xef;
          param_1[1] = 0xbf;
          param_1[2] = 0xbd;
          param_1 = param_1 + 3;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_4);
  }
  if (((byte *)param_1 != (byte *)0x0) && (param_3 != 0)) {
    *param_1 = 0;
  }
  return uVar4 & 0xffffffff;
}


/* EA::StdC::Strlcpy(char16_t*, char const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar16 *param_1,char *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = 1;
  while( true ) {
    uVar9 = param_4 - 1;
    if (param_4 == 0) break;
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    pbVar3 = (byte *)(param_2 + 1);
    if (bVar1 < 0x80) {
      if (bVar1 == 0) break;
      if ((param_1 != (wchar16 *)0x0) && (uVar8 < param_3)) {
        *param_1 = (ushort)bVar1;
        param_1 = param_1 + 1;
      }
LAB_05350bd8:
      uVar8 = uVar8 + 1;
      param_2 = (char *)pbVar3;
      param_4 = uVar9;
    }
    else {
      bVar1 = utf8lengthTable[(uint)bVar1];
      if ((param_4 < bVar1) || (bVar1 == 0)) {
LAB_05350c90:
        GetAssertionsEnabled();
        return 0xffffffff;
      }
      uVar7 = (uint)bVar1;
      if (uVar7 - 1 == 0) {
        uVar4 = 0;
      }
      else {
        bVar2 = param_2[1];
        if (0x3f < (byte)(bVar2 + 0x80)) goto LAB_05350c90;
        pbVar3 = (byte *)(param_2 + 2 + (uVar7 - 2));
        pbVar5 = (byte *)(param_2 + 2);
        while (uVar6 = (uint)bVar2 + uVar6 * 0x40, pbVar5 != pbVar3) {
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (0x3f < (byte)(bVar2 + 0x80)) goto LAB_05350c90;
        }
        uVar4 = (ulong)(uVar7 - 1);
      }
      uVar9 = uVar9 - uVar4;
      uVar6 = uVar6 - *(int *)(&DAT_0575f780 + (ulong)uVar7 * 4);
      if ((uVar6 < *(uint *)(&DAT_0575f7a0 + (ulong)uVar7 * 4)) ||
         (*(uint *)(&DAT_0575f760 + (ulong)bVar1 * 4) <= uVar6)) break;
      if ((param_1 == (wchar16 *)0x0) || (param_3 <= uVar8)) goto LAB_05350bd8;
      *param_1 = (wchar16)uVar6;
      uVar8 = uVar8 + 1;
      param_1 = param_1 + 1;
      param_2 = (char *)pbVar3;
      param_4 = uVar9;
    }
  }
  if ((param_1 != (wchar16 *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar8 - 1 & 0xffffffff;
}


/* EA::StdC::Strlcpy(char32_t*, char const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar32 *param_1,char *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  wchar32 wVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = 1;
  while( true ) {
    uVar10 = param_4 - 1;
    if (param_4 == 0) break;
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    pbVar3 = (byte *)(param_2 + 1);
    wVar7 = (wchar32)bVar1;
    if (bVar1 < 0x80) {
      if (wVar7 == L'\0') break;
      if ((param_1 != (wchar32 *)0x0) && (uVar9 < param_3)) {
        *param_1 = wVar7;
        param_1 = param_1 + 1;
      }
LAB_05350d1c:
      uVar9 = uVar9 + 1;
      param_2 = (char *)pbVar3;
      param_4 = uVar10;
    }
    else {
      bVar1 = utf8lengthTable[(uint)wVar7];
      if ((param_4 < bVar1) || (bVar1 == 0)) {
LAB_05350dd4:
        GetAssertionsEnabled();
        return 0xffffffff;
      }
      uVar8 = (uint)bVar1;
      if (uVar8 - 1 == 0) {
        uVar4 = 0;
      }
      else {
        bVar2 = param_2[1];
        if (0x3f < (byte)(bVar2 + 0x80)) goto LAB_05350dd4;
        pbVar3 = (byte *)(param_2 + 2 + (uVar8 - 2));
        pbVar5 = (byte *)(param_2 + 2);
        while (uVar6 = (uint)bVar2 + uVar6 * 0x40, pbVar5 != pbVar3) {
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (0x3f < (byte)(bVar2 + 0x80)) goto LAB_05350dd4;
        }
        uVar4 = (ulong)(uVar8 - 1);
      }
      uVar10 = uVar10 - uVar4;
      wVar7 = uVar6 - *(int *)(&DAT_0575f780 + (ulong)uVar8 * 4);
      if (((uint)wVar7 < (uint)*(wchar32 *)(&DAT_0575f7a0 + (ulong)uVar8 * 4)) ||
         ((uint)*(wchar32 *)(&DAT_0575f760 + (ulong)bVar1 * 4) <= (uint)wVar7)) break;
      if ((param_1 == (wchar32 *)0x0) || (param_3 <= uVar9)) goto LAB_05350d1c;
      *param_1 = wVar7;
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 1;
      param_2 = (char *)pbVar3;
      param_4 = uVar10;
    }
  }
  if ((param_1 != (wchar32 *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar9 - 1 & 0xffffffff;
}


/* EA::StdC::Strlcpy(char32_t*, char16_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar32 *param_1,wchar16 *param_2,ulong param_3,ulong param_4)

{
  wchar16 wVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    wVar1 = *param_2;
    uVar2 = 1;
    if (wVar1 == L'\0') {
      uVar3 = 0;
    }
    else {
      do {
        uVar3 = uVar2;
        if ((param_1 != (wchar32 *)0x0) && (uVar3 < param_3)) {
          *param_1 = (uint)(ushort)wVar1;
          param_1 = param_1 + 1;
        }
        if (uVar3 == param_4) goto LAB_05350e48;
        wVar1 = param_2[uVar3];
        uVar2 = uVar3 + 1;
      } while (wVar1 != L'\0');
      uVar3 = uVar3 & 0xffffffff;
    }
  }
LAB_05350e48:
  if ((param_1 != (wchar32 *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar3 & 0xffffffff;
}


/* EA::StdC::Strlcpy(char16_t*, char32_t const*, unsigned long, unsigned long) */

ulong EA::StdC::Strlcpy(wchar16 *param_1,wchar32 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  wchar32 wVar3;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    wVar3 = *param_2;
    uVar1 = 1;
    if (wVar3 == L'\0') {
      uVar2 = 0;
    }
    else {
      do {
        uVar2 = uVar1;
        if ((param_1 != (wchar16 *)0x0) && (uVar2 < param_3)) {
          *param_1 = (wchar16)wVar3;
          param_1 = param_1 + 1;
        }
        if (uVar2 == param_4) goto LAB_05350eb8;
        wVar3 = param_2[uVar2];
        uVar1 = uVar2 + 1;
      } while (wVar3 != L'\0');
      uVar2 = uVar2 & 0xffffffff;
    }
  }
LAB_05350eb8:
  if ((param_1 != (wchar16 *)0x0) && (param_3 != 0)) {
    *param_1 = L'\0';
  }
  return uVar2 & 0xffffffff;
}


/* EA::StdC::Strcat(char*, char const*) */

void EA::StdC::Strcat(char *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  do {
    pcVar3 = param_1;
    param_1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  lVar2 = 0;
  do {
    cVar1 = param_2[lVar2];
    pcVar3[lVar2] = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* EA::StdC::Strcat(char16_t*, char16_t const*) */

void EA::StdC::Strcat(wchar16 *param_1,wchar16 *param_2)

{
  short sVar1;
  long lVar2;
  wchar16 *pwVar3;
  
  do {
    pwVar3 = param_1;
    param_1 = pwVar3 + 1;
  } while (*pwVar3 != L'\0');
  lVar2 = 0;
  do {
    sVar1 = *(short *)((long)param_2 + lVar2);
    *(short *)((long)pwVar3 + lVar2) = sVar1;
    lVar2 = lVar2 + 2;
  } while (sVar1 != 0);
  return;
}


/* EA::StdC::Strcat(char32_t*, char32_t const*) */

void EA::StdC::Strcat(wchar32 *param_1,wchar32 *param_2)

{
  int iVar1;
  long lVar2;
  wchar32 *pwVar3;
  
  do {
    pwVar3 = param_1;
    param_1 = pwVar3 + 1;
  } while (*pwVar3 != L'\0');
  lVar2 = 0;
  do {
    iVar1 = *(int *)((long)param_2 + lVar2);
    *(int *)((long)pwVar3 + lVar2) = iVar1;
    lVar2 = lVar2 + 4;
  } while (iVar1 != 0);
  return;
}


/* EA::StdC::Strncat(char*, char const*, unsigned long) */

void EA::StdC::Strncat(char *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  do {
    pcVar3 = param_1;
    param_1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  pcVar2 = param_2;
  do {
    pcVar4 = pcVar3;
    if (pcVar2 == param_2 + param_3) break;
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar4 + 1;
  } while (cVar1 != '\0');
  *pcVar4 = '\0';
  return;
}


/* EA::StdC::Strncat(char16_t*, char16_t const*, unsigned long) */

void EA::StdC::Strncat(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  
  do {
    pwVar2 = param_1;
    param_1 = pwVar2 + 1;
  } while (*pwVar2 != L'\0');
  uVar4 = 0;
  do {
    pwVar3 = pwVar2;
    if (uVar4 == param_3) break;
    wVar1 = param_2[uVar4];
    uVar4 = uVar4 + 1;
    *pwVar3 = wVar1;
    pwVar2 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  *pwVar3 = L'\0';
  return;
}


/* EA::StdC::Strncat(char32_t*, char32_t const*, unsigned long) */

void EA::StdC::Strncat(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  ulong uVar4;
  
  do {
    pwVar2 = param_1;
    param_1 = pwVar2 + 1;
  } while (*pwVar2 != L'\0');
  uVar4 = 0;
  do {
    pwVar3 = pwVar2;
    if (uVar4 == param_3) break;
    wVar1 = param_2[uVar4];
    uVar4 = uVar4 + 1;
    *pwVar3 = wVar1;
    pwVar2 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  *pwVar3 = L'\0';
  return;
}


/* EA::StdC::StringnCat(char*, char const*, unsigned long) */

void EA::StdC::StringnCat(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_3 != 0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    }
    if (*param_2 != '\0') {
      pcVar1 = param_2 + (param_3 - 1);
      pcVar3 = param_1;
      do {
        param_1 = pcVar3 + 1;
        *pcVar3 = *param_2;
        if (param_2 == pcVar1) break;
        param_2 = param_2 + 1;
        pcVar3 = param_1;
      } while (*param_2 != '\0');
    }
    *param_1 = '\0';
  }
  return;
}


/* EA::StdC::StringnCat(char16_t*, char16_t const*, unsigned long) */

void EA::StdC::StringnCat(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 wVar1;
  bool bVar2;
  wchar16 *pwVar3;
  long lVar4;
  
  if (param_3 != 0) {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      param_1 = param_1 + 1;
      wVar1 = *param_1;
    }
    if (*param_2 != L'\0') {
      lVar4 = 0;
      pwVar3 = param_1;
      do {
        bVar2 = param_3 - 1 == lVar4;
        param_1 = pwVar3 + 1;
        *pwVar3 = *param_2;
        lVar4 = lVar4 + 1;
        if (bVar2) break;
        param_2 = param_2 + 1;
        pwVar3 = param_1;
      } while (*param_2 != L'\0');
    }
    *param_1 = L'\0';
  }
  return;
}


/* EA::StdC::StringnCat(char32_t*, char32_t const*, unsigned long) */

void EA::StdC::StringnCat(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 wVar1;
  bool bVar2;
  wchar32 *pwVar3;
  long lVar4;
  
  if (param_3 != 0) {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      param_1 = param_1 + 1;
      wVar1 = *param_1;
    }
    if (*param_2 != L'\0') {
      lVar4 = 0;
      pwVar3 = param_1;
      do {
        bVar2 = param_3 - 1 == lVar4;
        param_1 = pwVar3 + 1;
        *pwVar3 = *param_2;
        lVar4 = lVar4 + 1;
        if (bVar2) break;
        param_2 = param_2 + 1;
        pwVar3 = param_1;
      } while (*param_2 != L'\0');
    }
    *param_1 = L'\0';
  }
  return;
}


/* EA::StdC::Strlen(char const*) */

long EA::StdC::Strlen(char *param_1)

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


/* EA::StdC::Strlcat(char*, char const*, unsigned long) */

ulong EA::StdC::Strlcat(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    uVar1 = Strlen(param_2);
    return uVar1;
  }
  lVar2 = Strlen(param_1);
  lVar3 = Strlen(param_2);
  uVar1 = lVar3 + lVar2;
  if (param_3 <= uVar1) {
    memcpy(param_1 + lVar2,param_2,(param_3 - 1) - lVar2);
    param_1[param_3 - 1] = '\0';
    return uVar1;
  }
  memcpy(param_1 + lVar2,param_2,lVar3 + 1);
  return uVar1;
}


/* EA::StdC::Strlen(char16_t const*) */

long EA::StdC::Strlen(wchar16 *param_1)

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


/* EA::StdC::Strlcat(char16_t*, char16_t const*, unsigned long) */

ulong EA::StdC::Strlcat(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    uVar1 = Strlen(param_2);
    return uVar1;
  }
  lVar2 = Strlen(param_1);
  lVar3 = Strlen(param_2);
  uVar1 = lVar3 + lVar2;
  if (param_3 <= uVar1) {
    memcpy(param_1 + lVar2,param_2,((param_3 - 1) - lVar2) * 2);
    param_1[param_3 - 1] = L'\0';
    return uVar1;
  }
  memcpy(param_1 + lVar2,param_2,(lVar3 + 1) * 2);
  return uVar1;
}


/* EA::StdC::Strlen(char32_t const*) */

void EA::StdC::Strlen(wchar32 *param_1)

{
  long lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != L'\0');
  return;
}


/* EA::StdC::Strlcat(char32_t*, char32_t const*, unsigned long) */

ulong EA::StdC::Strlcat(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    uVar1 = Strlen(param_2);
    return uVar1;
  }
  lVar2 = Strlen(param_1);
  lVar3 = Strlen(param_2);
  uVar1 = lVar3 + lVar2;
  if (param_3 <= uVar1) {
    memcpy(param_1 + lVar2,param_2,((param_3 - 1) - lVar2) * 4);
    param_1[param_3 - 1] = L'\0';
    return uVar1;
  }
  memcpy(param_1 + lVar2,param_2,(lVar3 + 1) * 4);
  return uVar1;
}


/* EA::StdC::Strlcat(char16_t*, char32_t const*, unsigned long) */

long EA::StdC::Strlcat(wchar16 *param_1,wchar32 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Strlen(param_2);
  uVar2 = Strlen(param_1);
  if (uVar2 < param_3) {
    Strlcpy(param_1 + uVar2,param_2,param_3 - uVar2,0xffffffffffffffff);
  }
  return uVar2 + lVar1;
}


/* EA::StdC::Strlcat(char32_t*, char16_t const*, unsigned long) */

long EA::StdC::Strlcat(wchar32 *param_1,wchar16 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Strlen(param_2);
  uVar2 = Strlen(param_1);
  if (uVar2 < param_3) {
    Strlcpy(param_1 + uVar2,param_2,param_3 - uVar2,0xffffffffffffffff);
  }
  return uVar2 + lVar1;
}


/* EA::StdC::UTF8Length(char const*) */

long EA::StdC::UTF8Length(char *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *param_1;
  lVar3 = 0;
  while (bVar2 != 0) {
    bVar1 = bVar2 & 0xc0;
    param_1 = param_1 + 1;
    bVar2 = *param_1;
    if (bVar1 != 0x80) {
      lVar3 = lVar3 + 1;
    }
  }
  return lVar3;
}


/* EA::StdC::Strlcat(char16_t*, char const*, unsigned long) */

long EA::StdC::Strlcat(wchar16 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = UTF8Length(param_2);
  uVar2 = Strlen(param_1);
  if (uVar2 < param_3) {
    Strlcpy(param_1 + uVar2,param_2,param_3 - uVar2,0xffffffffffffffff);
  }
  return uVar2 + lVar1;
}


/* EA::StdC::Strlcat(char32_t*, char const*, unsigned long) */

long EA::StdC::Strlcat(wchar32 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = UTF8Length(param_2);
  uVar2 = Strlen(param_1);
  if (uVar2 < param_3) {
    Strlcpy(param_1 + uVar2,param_2,param_3 - uVar2,0xffffffffffffffff);
  }
  return uVar2 + lVar1;
}


/* EA::StdC::Strlcat(char*, char16_t const*, unsigned long) */

long EA::StdC::Strlcat(char *param_1,wchar16 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Strlen(param_2);
  uVar2 = UTF8Length(param_1);
  if (uVar2 < param_3) {
    Strlcpy(param_1 + uVar2,param_2,param_3 - uVar2,0xffffffffffffffff);
  }
  return uVar2 + lVar1;
}


/* EA::StdC::Strlcat(char*, char32_t const*, unsigned long) */

long EA::StdC::Strlcat(char *param_1,wchar32 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Strlen(param_2);
  uVar2 = UTF8Length(param_1);
  if (uVar2 < param_3) {
    Strlcpy(param_1 + uVar2,param_2,param_3 - uVar2,0xffffffffffffffff);
  }
  return uVar2 + lVar1;
}


/* EA::StdC::UTF8Length(char16_t const*) */

long EA::StdC::UTF8Length(wchar16 *param_1)

{
  wchar16 wVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  do {
    wVar1 = *param_1;
    if (wVar1 == L'\0') {
      return lVar2;
    }
    while( true ) {
      lVar3 = lVar2 + 2;
      param_1 = param_1 + 1;
      if (0x7f < (ushort)wVar1) break;
      wVar1 = *param_1;
      lVar2 = lVar2 + 1;
      if (wVar1 == L'\0') {
        return lVar2;
      }
    }
    lVar2 = lVar2 + 3;
    if ((ushort)wVar1 < 0x800) {
      lVar2 = lVar3;
    }
  } while( true );
}


/* EA::StdC::UTF8Length(char32_t const*) */

long EA::StdC::UTF8Length(wchar32 *param_1)

{
  long lVar1;
  wchar32 wVar2;
  long lVar3;
  
  lVar1 = 0;
  do {
    wVar2 = *param_1;
    if (wVar2 == L'\0') {
      return lVar1;
    }
    while( true ) {
      lVar3 = lVar1 + 2;
      param_1 = param_1 + 1;
      if (0x7f < (uint)wVar2) break;
      wVar2 = *param_1;
      lVar1 = lVar1 + 1;
      if (wVar2 == L'\0') {
        return lVar1;
      }
    }
    lVar1 = lVar1 + 3;
    if ((uint)wVar2 < 0x800) {
      lVar1 = lVar3;
    }
  } while( true );
}


/* EA::StdC::Strxfrm(char*, char const*, unsigned long) */

ulong EA::StdC::Strxfrm(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = Strlen(param_2);
  if (param_3 != 0) {
    Strncpy(param_1,param_2,param_3 - 1);
    if (param_3 < uVar1) {
      param_1[param_3 - 1] = '\0';
      return uVar1;
    }
  }
  return uVar1;
}


/* EA::StdC::Strxfrm(char16_t*, char16_t const*, unsigned long) */

ulong EA::StdC::Strxfrm(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = Strlen(param_2);
  if ((param_3 != 0) && (Strncpy(param_1,param_2,param_3 - 1), param_3 < uVar1)) {
    param_1[param_3 - 1] = L'\0';
    return uVar1;
  }
  return uVar1;
}


/* EA::StdC::Strxfrm(char32_t*, char32_t const*, unsigned long) */

ulong EA::StdC::Strxfrm(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = Strlen(param_2);
  if ((param_3 != 0) && (Strncpy(param_1,param_2,param_3 - 1), param_3 < uVar1)) {
    param_1[param_3 - 1] = L'\0';
    return uVar1;
  }
  return uVar1;
}


/* EA::StdC::Strdup(char const*) */

char * EA::StdC::Strdup(char *param_1)

{
  long lVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    lVar1 = Strlen(param_1);
    pcVar2 = operator_new__(lVar1 + 1);
    Strcpy(pcVar2,param_1);
  }
  return pcVar2;
}


/* EA::StdC::Strdup(char16_t const*) */

wchar16 * EA::StdC::Strdup(wchar16 *param_1)

{
  long lVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  
  if (param_1 == (wchar16 *)0x0) {
    pwVar2 = (wchar16 *)0x0;
  }
  else {
    lVar1 = Strlen(param_1);
    uVar3 = (lVar1 + 1U) * 2;
    if (0x3f80000000000000 < lVar1 + 1U) {
      uVar3 = 0xffffffffffffffff;
    }
    pwVar2 = operator_new__(uVar3);
    Strcpy(pwVar2,param_1);
  }
  return pwVar2;
}


/* EA::StdC::Strdup(char32_t const*) */

wchar32 * EA::StdC::Strdup(wchar32 *param_1)

{
  long lVar1;
  wchar32 *pwVar2;
  ulong uVar3;
  
  if (param_1 == (wchar32 *)0x0) {
    pwVar2 = (wchar32 *)0x0;
  }
  else {
    lVar1 = Strlen(param_1);
    uVar3 = (lVar1 + 1U) * 4;
    if (0x1fc0000000000000 < lVar1 + 1U) {
      uVar3 = 0xffffffffffffffff;
    }
    pwVar2 = operator_new__(uVar3);
    Strcpy(pwVar2,param_1);
  }
  return pwVar2;
}


/* EA::StdC::Strupr(char*) */

char * EA::StdC::Strupr(char *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)(byte)*param_1;
  pbVar3 = (byte *)param_1;
  if (*param_1 != 0) {
    do {
      if (uVar2 >> 7 == 0) {
        bVar1 = Toupper((char)uVar2);
        *pbVar3 = bVar1;
      }
      pbVar3 = pbVar3 + 1;
      uVar2 = (uint)*pbVar3;
    } while (uVar2 != 0);
  }
  return param_1;
}


/* EA::StdC::Strupr(char16_t*) */

wchar16 * EA::StdC::Strupr(wchar16 *param_1)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  
  wVar2 = *param_1;
  pwVar1 = param_1;
  while (wVar2 != L'\0') {
    wVar2 = Toupper(wVar2);
    *pwVar1 = wVar2;
    wVar2 = pwVar1[1];
    pwVar1 = pwVar1 + 1;
  }
  return param_1;
}


/* EA::StdC::Strupr(char32_t*) */

wchar32 * EA::StdC::Strupr(wchar32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  
  wVar2 = *param_1;
  pwVar1 = param_1;
  while (wVar2 != L'\0') {
    wVar2 = Toupper(wVar2);
    *pwVar1 = wVar2;
    wVar2 = pwVar1[1];
    pwVar1 = pwVar1 + 1;
  }
  return param_1;
}


/* EA::StdC::Strlwr(char*) */

char * EA::StdC::Strlwr(char *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)(byte)*param_1;
  pbVar3 = (byte *)param_1;
  if (*param_1 != 0) {
    do {
      if (uVar2 >> 7 == 0) {
        bVar1 = Tolower((char)uVar2);
        *pbVar3 = bVar1;
      }
      pbVar3 = pbVar3 + 1;
      uVar2 = (uint)*pbVar3;
    } while (uVar2 != 0);
  }
  return param_1;
}


/* EA::StdC::Strlwr(char16_t*) */

wchar16 * EA::StdC::Strlwr(wchar16 *param_1)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  
  wVar2 = *param_1;
  pwVar1 = param_1;
  while (wVar2 != L'\0') {
    wVar2 = Tolower(wVar2);
    *pwVar1 = wVar2;
    wVar2 = pwVar1[1];
    pwVar1 = pwVar1 + 1;
  }
  return param_1;
}


/* EA::StdC::Strlwr(char32_t*) */

wchar32 * EA::StdC::Strlwr(wchar32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  
  wVar2 = *param_1;
  pwVar1 = param_1;
  while (wVar2 != L'\0') {
    wVar2 = Tolower(wVar2);
    *pwVar1 = wVar2;
    wVar2 = pwVar1[1];
    pwVar1 = pwVar1 + 1;
  }
  return param_1;
}


/* EA::StdC::Strmix(char*, char const*, char const*) */

char * EA::StdC::Strmix(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  cVar4 = *param_2;
  pcVar6 = param_1;
  if (cVar4 != '\0') {
    bVar3 = true;
    pcVar7 = param_1;
    do {
      param_2 = param_2 + 1;
      if (bVar3) {
        iVar5 = Islower(cVar4);
        if (iVar5 == 0) {
          iVar5 = Isupper(cVar4);
          bVar3 = iVar5 == 0;
        }
        else {
          bVar3 = false;
          cVar4 = Toupper(cVar4);
        }
      }
      else {
        iVar5 = Isupper(cVar4);
        if (iVar5 != 0) {
          cVar4 = Tolower(cVar4);
        }
      }
      cVar1 = *param_3;
      pcVar6 = param_3;
      while (cVar1 != '\0') {
        bVar2 = cVar4 == cVar1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
        if (bVar2) {
          bVar3 = true;
        }
      }
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar4;
      cVar4 = *param_2;
      pcVar7 = pcVar6;
    } while (cVar4 != '\0');
  }
  *pcVar6 = '\0';
  return param_1;
}


/* EA::StdC::Strmix(char16_t*, char16_t const*, char16_t const*) */

wchar16 * EA::StdC::Strmix(wchar16 *param_1,wchar16 *param_2,wchar16 *param_3)

{
  wchar16 wVar1;
  bool bVar2;
  bool bVar3;
  wchar16 wVar4;
  int iVar5;
  wchar16 *pwVar6;
  wchar16 *pwVar7;
  
  wVar4 = *param_2;
  pwVar7 = param_1;
  if (wVar4 != L'\0') {
    bVar3 = true;
    pwVar6 = param_1;
    do {
      param_2 = param_2 + 1;
      if (bVar3) {
        iVar5 = Islower(wVar4);
        if (iVar5 == 0) {
          iVar5 = Isupper(wVar4);
          bVar3 = iVar5 == 0;
        }
        else {
          bVar3 = false;
          wVar4 = Toupper(wVar4);
        }
      }
      else {
        iVar5 = Isupper(wVar4);
        if (iVar5 != 0) {
          wVar4 = Tolower(wVar4);
        }
      }
      wVar1 = *param_3;
      pwVar7 = param_3;
      while (wVar1 != L'\0') {
        bVar2 = wVar4 == wVar1;
        pwVar7 = pwVar7 + 1;
        wVar1 = *pwVar7;
        if (bVar2) {
          bVar3 = true;
        }
      }
      pwVar7 = pwVar6 + 1;
      *pwVar6 = wVar4;
      wVar4 = *param_2;
      pwVar6 = pwVar7;
    } while (wVar4 != L'\0');
  }
  *pwVar7 = L'\0';
  return param_1;
}


/* EA::StdC::Strmix(char32_t*, char32_t const*, char32_t const*) */

wchar32 * EA::StdC::Strmix(wchar32 *param_1,wchar32 *param_2,wchar32 *param_3)

{
  wchar32 wVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  wchar32 wVar5;
  wchar32 *pwVar6;
  wchar32 *pwVar7;
  
  wVar5 = *param_2;
  pwVar7 = param_1;
  if (wVar5 != L'\0') {
    bVar3 = true;
    pwVar6 = param_1;
    do {
      param_2 = param_2 + 1;
      if (bVar3) {
        iVar4 = Islower(wVar5);
        if (iVar4 == 0) {
          iVar4 = Isupper(wVar5);
          bVar3 = iVar4 == 0;
        }
        else {
          bVar3 = false;
          wVar5 = Toupper(wVar5);
        }
      }
      else {
        iVar4 = Isupper(wVar5);
        if (iVar4 != 0) {
          wVar5 = Tolower(wVar5);
        }
      }
      wVar1 = *param_3;
      pwVar7 = param_3;
      while (wVar1 != L'\0') {
        bVar2 = wVar5 == wVar1;
        pwVar7 = pwVar7 + 1;
        wVar1 = *pwVar7;
        if (bVar2) {
          bVar3 = true;
        }
      }
      pwVar7 = pwVar6 + 1;
      *pwVar6 = wVar5;
      wVar5 = *param_2;
      pwVar6 = pwVar7;
    } while (wVar5 != L'\0');
  }
  *pwVar7 = L'\0';
  return param_1;
}


/* EA::StdC::Strchr(char const*, int) */

byte * EA::StdC::Strchr(char *param_1,int param_2)

{
  byte bVar1;
  
  do {
    bVar1 = *param_1;
    if ((uint)bVar1 == param_2) {
      return (byte *)param_1;
    }
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return (byte *)0x0;
}


/* EA::StdC::Strchr(char16_t const*, char16_t) */

wchar16 * EA::StdC::Strchr(wchar16 *param_1,wchar16 param_2)

{
  wchar16 wVar1;
  
  do {
    wVar1 = *param_1;
    if (wVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (wVar1 != L'\0');
  return (wchar16 *)0x0;
}


/* EA::StdC::Strchr(char32_t const*, char32_t) */

wchar32 * EA::StdC::Strchr(wchar32 *param_1,wchar32 param_2)

{
  wchar32 wVar1;
  
  do {
    wVar1 = *param_1;
    if (wVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (wVar1 != L'\0');
  return (wchar32 *)0x0;
}


/* EA::StdC::Strcspn(char const*, char const*) */

long EA::StdC::Strcspn(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return 0;
  }
  cVar1 = *param_2;
  pcVar2 = param_2;
  pcVar4 = param_1;
  do {
    while (cVar1 != '\0') {
      if (cVar3 == cVar1) goto LAB_05351e54;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    pcVar4 = pcVar4 + 1;
    cVar3 = *pcVar4;
    cVar1 = *param_2;
    pcVar2 = param_2;
  } while (cVar3 != '\0');
LAB_05351e54:
  return (long)pcVar4 - (long)param_1;
}


/* EA::StdC::Strcspn(char16_t const*, char16_t const*) */

long EA::StdC::Strcspn(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 wVar3;
  wchar16 *pwVar4;
  
  wVar3 = *param_1;
  if (wVar3 == L'\0') {
    return 0;
  }
  wVar1 = *param_2;
  pwVar2 = param_2;
  pwVar4 = param_1;
  do {
    while (wVar1 != L'\0') {
      if (wVar3 == wVar1) goto LAB_05351ea0;
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    }
    pwVar4 = pwVar4 + 1;
    wVar3 = *pwVar4;
    wVar1 = *param_2;
    pwVar2 = param_2;
  } while (wVar3 != L'\0');
LAB_05351ea0:
  return (long)pwVar4 - (long)param_1 >> 1;
}


/* EA::StdC::Strcspn(char32_t const*, char32_t const*) */

long EA::StdC::Strcspn(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  wchar32 wVar3;
  wchar32 *pwVar4;
  
  wVar3 = *param_1;
  if (wVar3 == L'\0') {
    return 0;
  }
  wVar1 = *param_2;
  pwVar2 = param_2;
  pwVar4 = param_1;
  do {
    while (wVar1 != L'\0') {
      if (wVar3 == wVar1) goto LAB_05351ef0;
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    }
    pwVar4 = pwVar4 + 1;
    wVar3 = *pwVar4;
    wVar1 = *param_2;
    pwVar2 = param_2;
  } while (wVar3 != L'\0');
LAB_05351ef0:
  return (long)pwVar4 - (long)param_1 >> 2;
}


/* EA::StdC::Strpbrk(char const*, char const*) */

char * EA::StdC::Strpbrk(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    cVar1 = *param_2;
    pcVar2 = param_2;
    do {
      while (cVar1 != '\0') {
        if (cVar1 == cVar3) {
          return param_1;
        }
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
      param_1 = param_1 + 1;
      cVar3 = *param_1;
      cVar1 = *param_2;
      pcVar2 = param_2;
    } while (cVar3 != '\0');
  }
  return (char *)0x0;
}


/* EA::StdC::Strpbrk(char16_t const*, char16_t const*) */

wchar16 * EA::StdC::Strpbrk(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 wVar3;
  
  wVar3 = *param_1;
  if (wVar3 != L'\0') {
    wVar1 = *param_2;
    pwVar2 = param_2;
    do {
      while (wVar1 != L'\0') {
        if (wVar1 == wVar3) {
          return param_1;
        }
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      param_1 = param_1 + 1;
      wVar3 = *param_1;
      wVar1 = *param_2;
      pwVar2 = param_2;
    } while (wVar3 != L'\0');
  }
  return (wchar16 *)0x0;
}


/* EA::StdC::Strpbrk(char32_t const*, char32_t const*) */

wchar32 * EA::StdC::Strpbrk(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  wchar32 wVar3;
  
  wVar3 = *param_1;
  if (wVar3 != L'\0') {
    wVar1 = *param_2;
    pwVar2 = param_2;
    do {
      while (wVar1 != L'\0') {
        if (wVar1 == wVar3) {
          return param_1;
        }
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      param_1 = param_1 + 1;
      wVar3 = *param_1;
      wVar1 = *param_2;
      pwVar2 = param_2;
    } while (wVar3 != L'\0');
  }
  return (wchar32 *)0x0;
}


/* EA::StdC::Strrchr(char const*, int) */

byte * EA::StdC::Strrchr(char *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)0x0;
  while( true ) {
    pbVar2 = (byte *)param_1;
    if (*pbVar2 == 0) break;
    param_1 = (char *)(pbVar2 + 1);
    if ((uint)*pbVar2 == param_2) {
      pbVar1 = pbVar2;
    }
  }
  if (pbVar1 == (byte *)0x0) {
    if (param_2 != 0) {
      pbVar2 = (byte *)0x0;
    }
    return pbVar2;
  }
  return pbVar1;
}


/* EA::StdC::Strrchr(char16_t const*, char16_t) */

wchar16 * EA::StdC::Strrchr(wchar16 *param_1,wchar16 param_2)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)0x0;
  while( true ) {
    pwVar2 = param_1;
    if (*pwVar2 == L'\0') break;
    param_1 = pwVar2 + 1;
    if (*pwVar2 == param_2) {
      pwVar1 = pwVar2;
    }
  }
  if (pwVar1 == (wchar16 *)0x0) {
    if (param_2 != L'\0') {
      pwVar2 = (wchar16 *)0x0;
    }
    return pwVar2;
  }
  return pwVar1;
}


/* EA::StdC::Strrchr(char32_t const*, char32_t) */

wchar32 * EA::StdC::Strrchr(wchar32 *param_1,wchar32 param_2)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)0x0;
  while( true ) {
    pwVar2 = param_1;
    if (*pwVar2 == L'\0') break;
    param_1 = pwVar2 + 1;
    if (*pwVar2 == param_2) {
      pwVar1 = pwVar2;
    }
  }
  if (pwVar1 == (wchar32 *)0x0) {
    if (param_2 != L'\0') {
      pwVar2 = (wchar32 *)0x0;
    }
    return pwVar2;
  }
  return pwVar1;
}


/* EA::StdC::Strspn(char const*, char const*) */

long EA::StdC::Strspn(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return 0;
  }
  cVar1 = *param_2;
  pcVar2 = param_2;
  pcVar4 = param_1;
  do {
    while (cVar3 != cVar1) {
      if (cVar1 == '\0') goto LAB_053520ac;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    pcVar4 = pcVar4 + 1;
    cVar3 = *pcVar4;
    cVar1 = *param_2;
    pcVar2 = param_2;
  } while (cVar3 != '\0');
LAB_053520ac:
  return (long)pcVar4 - (long)param_1;
}


/* EA::StdC::Strspn(char16_t const*, char16_t const*) */

long EA::StdC::Strspn(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 wVar3;
  wchar16 *pwVar4;
  
  wVar3 = *param_1;
  if (wVar3 == L'\0') {
    return 0;
  }
  wVar1 = *param_2;
  pwVar2 = param_2;
  pwVar4 = param_1;
  do {
    while (wVar3 != wVar1) {
      if (wVar1 == L'\0') goto LAB_053520f8;
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    }
    pwVar4 = pwVar4 + 1;
    wVar3 = *pwVar4;
    wVar1 = *param_2;
    pwVar2 = param_2;
  } while (wVar3 != L'\0');
LAB_053520f8:
  return (long)pwVar4 - (long)param_1 >> 1;
}


/* EA::StdC::Strspn(char32_t const*, char32_t const*) */

long EA::StdC::Strspn(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  wchar32 wVar3;
  wchar32 *pwVar4;
  
  wVar3 = *param_1;
  if (wVar3 == L'\0') {
    return 0;
  }
  wVar1 = *param_2;
  pwVar2 = param_2;
  pwVar4 = param_1;
  do {
    while (wVar3 != wVar1) {
      if (wVar1 == L'\0') goto LAB_05352148;
      wVar1 = pwVar2[1];
      pwVar2 = pwVar2 + 1;
    }
    pwVar4 = pwVar4 + 1;
    wVar3 = *pwVar4;
    wVar1 = *param_2;
    pwVar2 = param_2;
  } while (wVar3 != L'\0');
LAB_05352148:
  return (long)pwVar4 - (long)param_1 >> 2;
}


/* EA::StdC::Strstr(char const*, char const*) */

char * EA::StdC::Strstr(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    if (cVar1 == *param_2) {
      pcVar3 = param_2 + -1;
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != *pcVar3) break;
      } while (cVar1 != '\0');
      if (*pcVar3 == '\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}


/* EA::StdC::Strstr(char16_t const*, char16_t const*) */

wchar16 * EA::StdC::Strstr(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  
  if (*param_2 == L'\0') {
    return param_1;
  }
  wVar1 = *param_1;
  do {
    if (wVar1 == L'\0') {
      return (wchar16 *)0x0;
    }
    if (wVar1 == *param_2) {
      pwVar3 = param_2 + -1;
      pwVar2 = param_1;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
        pwVar3 = pwVar3 + 1;
        if (wVar1 != *pwVar3) break;
      } while (wVar1 != L'\0');
      if (*pwVar3 == L'\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  } while( true );
}


/* EA::StdC::Strstr(char32_t const*, char32_t const*) */

wchar32 * EA::StdC::Strstr(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  
  if (*param_2 == L'\0') {
    return param_1;
  }
  wVar1 = *param_1;
  do {
    if (wVar1 == L'\0') {
      return (wchar32 *)0x0;
    }
    if (wVar1 == *param_2) {
      pwVar3 = param_2 + -1;
      pwVar2 = param_1;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
        pwVar3 = pwVar3 + 1;
        if (wVar1 != *pwVar3) break;
      } while (wVar1 != L'\0');
      if (*pwVar3 == L'\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  } while( true );
}


/* EA::StdC::Stristr(char const*, char const*) */

char * EA::StdC::Stristr(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return param_1;
  }
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = *param_1;
    pcVar4 = param_2;
    pcVar5 = param_1;
    cVar3 = cVar1;
    if (cVar2 != '\0') {
      while( true ) {
        cVar2 = Tolower(cVar2);
        cVar3 = Tolower(cVar3);
        if (cVar2 != cVar3) break;
        cVar2 = pcVar5[1];
        pcVar4 = pcVar4 + 1;
        if (cVar2 == '\0') break;
        pcVar5 = pcVar5 + 1;
        cVar3 = *pcVar4;
        if (*pcVar4 == '\0') {
          return param_1;
        }
      }
      if (*pcVar4 == '\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  } while( true );
}


/* EA::StdC::Stristr(char16_t const*, char16_t const*) */

wchar16 * EA::StdC::Stristr(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 wVar2;
  short sVar3;
  short sVar4;
  wchar16 *pwVar5;
  wchar16 wVar6;
  wchar16 *pwVar7;
  
  wVar1 = *param_2;
  if (wVar1 == L'\0') {
    return param_1;
  }
  wVar2 = *param_1;
  do {
    if (wVar2 == L'\0') {
      return (wchar16 *)0x0;
    }
    wVar2 = *param_1;
    pwVar5 = param_2;
    pwVar7 = param_1;
    wVar6 = wVar1;
    if (wVar2 != L'\0') {
      while( true ) {
        sVar3 = Tolower(wVar2);
        sVar4 = Tolower(wVar6);
        if (sVar3 != sVar4) break;
        wVar2 = pwVar7[1];
        pwVar5 = pwVar5 + 1;
        if (wVar2 == L'\0') break;
        pwVar7 = pwVar7 + 1;
        wVar6 = *pwVar5;
        if (*pwVar5 == L'\0') {
          return param_1;
        }
      }
      if (*pwVar5 == L'\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    wVar2 = *param_1;
  } while( true );
}


/* EA::StdC::Stristr(char32_t const*, char32_t const*) */

wchar32 * EA::StdC::Stristr(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 wVar2;
  int iVar3;
  int iVar5;
  wchar32 *pwVar6;
  wchar32 *pwVar7;
  wchar32 wVar4;
  
  wVar1 = *param_2;
  if (wVar1 == L'\0') {
    return param_1;
  }
  wVar4 = *param_1;
  do {
    if (wVar4 == L'\0') {
      return (wchar32 *)0x0;
    }
    wVar4 = *param_1;
    pwVar6 = param_2;
    pwVar7 = param_1;
    wVar2 = wVar1;
    if (wVar4 != L'\0') {
      while( true ) {
        iVar3 = Tolower(wVar4);
        iVar5 = Tolower(wVar2);
        if (iVar3 != iVar5) break;
        wVar4 = pwVar7[1];
        pwVar6 = pwVar6 + 1;
        if (wVar4 == L'\0') break;
        pwVar7 = pwVar7 + 1;
        wVar2 = *pwVar6;
        if (*pwVar6 == L'\0') {
          return param_1;
        }
      }
      if (*pwVar6 == L'\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    wVar4 = *param_1;
  } while( true );
}


/* EA::StdC::Strrstr(char const*, char const*) */

char * EA::StdC::Strrstr(char *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar4;
  
  if (*param_2 != '\0') {
    lVar1 = Strlen(param_1);
    pcVar2 = param_1 + lVar1;
    while (param_1 != pcVar2) {
      pcVar2 = pcVar2 + -1;
      pcVar4 = param_2;
      pcVar5 = pcVar2;
      while( true ) {
        pcVar3 = pcVar4 + 1;
        if (*pcVar5 != *pcVar4) break;
        pcVar4 = pcVar3;
        pcVar5 = pcVar5 + 1;
        if (*pcVar3 == '\0') {
          return pcVar2;
        }
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


/* EA::StdC::Strrstr(char16_t const*, char16_t const*) */

wchar16 * EA::StdC::Strrstr(wchar16 *param_1,wchar16 *param_2)

{
  long lVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar5;
  wchar16 *pwVar4;
  
  if (*param_2 != L'\0') {
    lVar1 = Strlen(param_1);
    pwVar2 = param_1 + lVar1;
    while (param_1 != pwVar2) {
      pwVar2 = pwVar2 + -1;
      pwVar3 = param_2;
      pwVar5 = pwVar2;
      while( true ) {
        pwVar4 = pwVar3 + 1;
        if (*pwVar5 != *pwVar3) break;
        pwVar3 = pwVar4;
        pwVar5 = pwVar5 + 1;
        if (*pwVar4 == L'\0') {
          return pwVar2;
        }
      }
    }
    param_1 = (wchar16 *)0x0;
  }
  return param_1;
}


/* EA::StdC::Strrstr(char32_t const*, char32_t const*) */

wchar32 * EA::StdC::Strrstr(wchar32 *param_1,wchar32 *param_2)

{
  long lVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar5;
  wchar32 *pwVar4;
  
  if (*param_2 != L'\0') {
    lVar1 = Strlen(param_1);
    pwVar2 = param_1 + lVar1;
    while (param_1 != pwVar2) {
      pwVar2 = pwVar2 + -1;
      pwVar3 = param_2;
      pwVar5 = pwVar2;
      while( true ) {
        pwVar4 = pwVar3 + 1;
        if (*pwVar5 != *pwVar3) break;
        pwVar3 = pwVar4;
        pwVar5 = pwVar5 + 1;
        if (*pwVar4 == L'\0') {
          return pwVar2;
        }
      }
    }
    param_1 = (wchar32 *)0x0;
  }
  return param_1;
}


/* EA::StdC::Strirstr(char const*, char const*) */

char * EA::StdC::Strirstr(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (*param_2 != '\0') {
    lVar3 = Strlen(param_1);
    pcVar7 = param_1 + lVar3;
    while (param_1 != pcVar7) {
      pcVar7 = pcVar7 + -1;
      pcVar4 = param_2;
      pcVar6 = pcVar7;
      while( true ) {
        cVar1 = Tolower(*pcVar6);
        pcVar5 = pcVar4 + 1;
        cVar2 = Tolower(*pcVar4);
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar5;
        pcVar6 = pcVar6 + 1;
        if (*pcVar5 == '\0') {
          return pcVar7;
        }
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


/* EA::StdC::Strirstr(char16_t const*, char16_t const*) */

wchar16 * EA::StdC::Strirstr(wchar16 *param_1,wchar16 *param_2)

{
  short sVar1;
  short sVar2;
  long lVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar6;
  wchar16 *pwVar7;
  
  if (*param_2 != L'\0') {
    lVar3 = Strlen(param_1);
    pwVar7 = param_1 + lVar3;
    while (param_1 != pwVar7) {
      pwVar7 = pwVar7 + -1;
      pwVar4 = param_2;
      pwVar6 = pwVar7;
      while( true ) {
        sVar1 = Tolower(*pwVar6);
        pwVar5 = pwVar4 + 1;
        sVar2 = Tolower(*pwVar4);
        if (sVar1 != sVar2) break;
        pwVar4 = pwVar5;
        pwVar6 = pwVar6 + 1;
        if (*pwVar5 == L'\0') {
          return pwVar7;
        }
      }
    }
    param_1 = (wchar16 *)0x0;
  }
  return param_1;
}


/* EA::StdC::Strirstr(char32_t const*, char32_t const*) */

wchar32 * EA::StdC::Strirstr(wchar32 *param_1,wchar32 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  wchar32 *pwVar4;
  wchar32 *pwVar5;
  wchar32 *pwVar6;
  wchar32 *pwVar7;
  
  if (*param_2 != L'\0') {
    lVar3 = Strlen(param_1);
    pwVar7 = param_1 + lVar3;
    while (param_1 != pwVar7) {
      pwVar7 = pwVar7 + -1;
      pwVar4 = param_2;
      pwVar6 = pwVar7;
      while( true ) {
        iVar1 = Tolower(*pwVar6);
        pwVar5 = pwVar4 + 1;
        iVar2 = Tolower(*pwVar4);
        if (iVar1 != iVar2) break;
        pwVar4 = pwVar5;
        pwVar6 = pwVar6 + 1;
        if (*pwVar5 == L'\0') {
          return pwVar7;
        }
      }
    }
    param_1 = (wchar32 *)0x0;
  }
  return param_1;
}


/* EA::StdC::Strtok(char*, char const*, char**) */

char * EA::StdC::Strtok(char *param_1,char *param_2,char **param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 == (char *)0x0) && (param_1 = *param_3, (byte *)param_1 == (byte *)0x0)) {
    return (char *)(byte *)0x0;
  }
  uVar9 = (uint)(byte)*param_2;
  if (*param_2 == 0) {
    uVar3 = (uint)(byte)*param_1;
    if (uVar3 == 0) goto LAB_053529dc;
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    pbVar5 = (byte *)param_2;
    uVar3 = uVar9;
    do {
      uVar7 = uVar8;
      pbVar5 = pbVar5 + 1;
      uVar1 = uVar3 & 0x1f;
      uVar3 = (uint)*pbVar5;
      uVar8 = uVar7 + 1;
      uVar6 = uVar6 | 0x80000000U >> (ulong)uVar1;
    } while (*pbVar5 != 0);
    bVar2 = *param_1;
    uVar3 = (uint)bVar2;
    if (bVar2 == 0) {
LAB_053529dc:
      *param_3 = (char *)0x0;
      return (char *)(byte *)0x0;
    }
    if ((int)(uVar6 << (ulong)(bVar2 & 0x1f)) < 0) {
      do {
        pbVar5 = (byte *)param_2;
        uVar1 = uVar9;
        if (uVar8 == 0) {
LAB_05352940:
          uVar3 = (uint)(byte)*param_1;
          if (uVar3 == 0) goto LAB_053529b4;
          break;
        }
        while (uVar1 != uVar3) {
          if (pbVar5 == (byte *)(param_2 + uVar7)) goto LAB_05352940;
          pbVar5 = pbVar5 + 1;
          uVar1 = (uint)*pbVar5;
        }
        param_1 = param_1 + 1;
        uVar3 = (uint)(byte)*param_1;
        if (uVar3 == 0) goto LAB_053529dc;
      } while ((int)(uVar6 << (ulong)(uVar3 & 0x1f)) < 0);
    }
  }
  pbVar5 = (byte *)param_1;
  do {
    if (((int)(uVar6 << (ulong)(uVar3 & 0x1f)) < 0) &&
       (pbVar4 = (byte *)param_2, uVar1 = uVar9, uVar8 != 0)) {
      while( true ) {
        if (uVar1 == uVar3) {
          *pbVar5 = 0;
          *param_3 = (char *)(pbVar5 + 1);
          return param_1;
        }
        if (pbVar4 == (byte *)(param_2 + (uVar8 - 1))) break;
        pbVar4 = pbVar4 + 1;
        uVar1 = (uint)*pbVar4;
      }
    }
    pbVar5 = pbVar5 + 1;
    uVar3 = (uint)*pbVar5;
  } while (uVar3 != 0);
LAB_053529b4:
  *param_3 = (char *)0x0;
  return param_1;
}


/* EA::StdC::Strtok(char16_t*, char16_t const*, char16_t**) */

wchar16 * EA::StdC::Strtok(wchar16 *param_1,wchar16 *param_2,wchar16 **param_3)

{
  uint uVar1;
  wchar16 wVar2;
  uint uVar3;
  wchar16 *pwVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  wchar16 *pwVar8;
  uint uVar9;
  
  if ((param_1 == (wchar16 *)0x0) && (param_1 = *param_3, param_1 == (wchar16 *)0x0)) {
    return (wchar16 *)0x0;
  }
  uVar9 = (uint)(ushort)*param_2;
  if (*param_2 == L'\0') {
    uVar3 = (uint)(ushort)*param_1;
    if (uVar3 == 0) goto LAB_05352b00;
    uVar7 = 0xffffffff;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    pwVar8 = param_2;
    uVar3 = uVar9;
    do {
      uVar7 = uVar6;
      pwVar8 = pwVar8 + 1;
      uVar1 = uVar3 & 0x1f;
      uVar3 = (uint)(ushort)*pwVar8;
      uVar6 = uVar7 + 1;
      uVar5 = uVar5 | 0x80000000U >> (ulong)uVar1;
    } while (*pwVar8 != L'\0');
    wVar2 = *param_1;
    uVar3 = (uint)(ushort)wVar2;
    if ((ushort)wVar2 == 0) {
LAB_05352b00:
      *param_3 = (wchar16 *)0x0;
      return (wchar16 *)0x0;
    }
    if ((int)(uVar5 << (ulong)((ushort)wVar2 & 0x1f)) < 0) {
      do {
        pwVar8 = param_2;
        uVar1 = uVar9;
        if (uVar6 == 0) {
LAB_05352a64:
          uVar3 = (uint)(ushort)*param_1;
          if (uVar3 == 0) goto LAB_05352ad4;
          break;
        }
        while (uVar1 != uVar3) {
          if (pwVar8 == param_2 + uVar7) goto LAB_05352a64;
          pwVar8 = pwVar8 + 1;
          uVar1 = (uint)(ushort)*pwVar8;
        }
        param_1 = param_1 + 1;
        uVar3 = (uint)(ushort)*param_1;
        if (uVar3 == 0) goto LAB_05352b00;
      } while ((int)(uVar5 << (ulong)(uVar3 & 0x1f)) < 0);
    }
  }
  pwVar8 = param_1;
  do {
    if (((int)(uVar5 << (ulong)(uVar3 & 0x1f)) < 0) && (pwVar4 = param_2, uVar1 = uVar9, uVar6 != 0)
       ) {
      while( true ) {
        if (uVar1 == uVar3) {
          *pwVar8 = L'\0';
          *param_3 = pwVar8 + 1;
          return param_1;
        }
        if (pwVar4 == param_2 + uVar7) break;
        pwVar4 = pwVar4 + 1;
        uVar1 = (uint)(ushort)*pwVar4;
      }
    }
    pwVar8 = pwVar8 + 1;
    uVar3 = (uint)(ushort)*pwVar8;
  } while (uVar3 != 0);
LAB_05352ad4:
  *param_3 = (wchar16 *)0x0;
  return param_1;
}


/* EA::StdC::Strtok(char32_t*, char32_t const*, char32_t**) */

wchar32 * EA::StdC::Strtok(wchar32 *param_1,wchar32 *param_2,wchar32 **param_3)

{
  uint uVar1;
  wchar32 wVar2;
  wchar32 wVar3;
  wchar32 wVar4;
  wchar32 *pwVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar32 *pwVar9;
  
  if ((param_1 == (wchar32 *)0x0) && (param_1 = *param_3, param_1 == (wchar32 *)0x0)) {
    return (wchar32 *)0x0;
  }
  wVar2 = *param_2;
  if (wVar2 == L'\0') {
    wVar4 = *param_1;
    if (wVar4 == L'\0') goto LAB_05352c24;
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    wVar4 = wVar2;
    pwVar9 = param_2;
    do {
      uVar8 = uVar7;
      pwVar9 = pwVar9 + 1;
      uVar1 = wVar4 & 0x1f;
      wVar4 = *pwVar9;
      uVar7 = uVar8 + 1;
      uVar6 = uVar6 | 0x80000000U >> (ulong)uVar1;
    } while (wVar4 != L'\0');
    wVar4 = *param_1;
    if (wVar4 == L'\0') {
LAB_05352c24:
      *param_3 = (wchar32 *)0x0;
      return (wchar32 *)0x0;
    }
    if ((int)(uVar6 << (ulong)(uint)(wVar4 & 0x1f)) < 0) {
      do {
        pwVar9 = param_2;
        wVar3 = wVar2;
        if (uVar7 == 0) {
LAB_05352b88:
          wVar4 = *param_1;
          if (wVar4 == L'\0') goto LAB_05352bf8;
          break;
        }
        while (wVar3 != wVar4) {
          if (pwVar9 == param_2 + uVar8) goto LAB_05352b88;
          pwVar9 = pwVar9 + 1;
          wVar3 = *pwVar9;
        }
        param_1 = param_1 + 1;
        wVar4 = *param_1;
        if (wVar4 == L'\0') goto LAB_05352c24;
      } while ((int)(uVar6 << (ulong)(uint)(wVar4 & 0x1f)) < 0);
    }
  }
  pwVar9 = param_1;
  do {
    if (((int)(uVar6 << (ulong)(uint)(wVar4 & 0x1f)) < 0) &&
       (pwVar5 = param_2, wVar3 = wVar2, uVar7 != 0)) {
      while( true ) {
        if (wVar3 == wVar4) {
          *pwVar9 = L'\0';
          *param_3 = pwVar9 + 1;
          return param_1;
        }
        if (pwVar5 == param_2 + uVar8) break;
        pwVar5 = pwVar5 + 1;
        wVar3 = *pwVar5;
      }
    }
    pwVar9 = pwVar9 + 1;
    wVar4 = *pwVar9;
  } while (wVar4 != L'\0');
LAB_05352bf8:
  *param_3 = (wchar32 *)0x0;
  return param_1;
}


/* EA::StdC::Strtok2(char const*, char const*, unsigned long*, bool) */

byte * EA::StdC::Strtok2(char *param_1,char *param_2,ulong *param_3,bool param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_4) {
LAB_05352c68:
    bVar1 = *param_1;
    while (bVar1 != 0) {
      lVar2 = Strchr(param_2,(uint)bVar1);
      if (lVar2 == 0) {
        uVar3 = (uint)(byte)*param_1;
        pbVar4 = (byte *)param_1;
        if (*param_1 != 0) goto LAB_05352cc0;
        break;
      }
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    }
  }
  else {
    uVar3 = (uint)(byte)*param_1;
    if (*param_1 != 0) {
      do {
        lVar2 = Strchr(param_2,uVar3);
        if (lVar2 != 0) goto LAB_05352c68;
        param_1 = param_1 + 1;
        uVar3 = (uint)(byte)*param_1;
      } while (uVar3 != 0);
    }
  }
  goto LAB_05352c70;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
    if (uVar3 == 0) break;
LAB_05352cc0:
    lVar2 = Strchr(param_2,uVar3);
    if (lVar2 != 0) break;
  }
  if (pbVar4 != (byte *)param_1) {
    *param_3 = (long)pbVar4 - (long)param_1;
    return (byte *)param_1;
  }
LAB_05352c70:
  *param_3 = 0;
  return (byte *)0x0;
}


/* EA::StdC::Strtok2(char16_t const*, char16_t const*, unsigned long*, bool) */

wchar16 * EA::StdC::Strtok2(wchar16 *param_1,wchar16 *param_2,ulong *param_3,bool param_4)

{
  wchar16 wVar1;
  long lVar2;
  wchar16 *pwVar3;
  
  if (param_4) {
LAB_05352d34:
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      lVar2 = Strchr(param_2,wVar1);
      if (lVar2 == 0) {
        wVar1 = *param_1;
        pwVar3 = param_1;
        if (wVar1 != L'\0') goto LAB_05352d8c;
        break;
      }
      param_1 = param_1 + 1;
      wVar1 = *param_1;
    }
  }
  else {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      lVar2 = Strchr(param_2,wVar1);
      if (lVar2 != 0) goto LAB_05352d34;
      param_1 = param_1 + 1;
      wVar1 = *param_1;
    }
  }
  goto LAB_05352d3c;
  while( true ) {
    pwVar3 = pwVar3 + 1;
    wVar1 = *pwVar3;
    if (wVar1 == L'\0') break;
LAB_05352d8c:
    lVar2 = Strchr(param_2,wVar1);
    if (lVar2 != 0) break;
  }
  if (pwVar3 != param_1) {
    *param_3 = (long)pwVar3 - (long)param_1 >> 1;
    return param_1;
  }
LAB_05352d3c:
  *param_3 = 0;
  return (wchar16 *)0x0;
}


/* EA::StdC::Strtok2(char32_t const*, char32_t const*, unsigned long*, bool) */

wchar32 * EA::StdC::Strtok2(wchar32 *param_1,wchar32 *param_2,ulong *param_3,bool param_4)

{
  long lVar1;
  wchar32 wVar2;
  wchar32 *pwVar3;
  
  if (param_4) {
LAB_05352e04:
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      lVar1 = Strchr(param_2,wVar2);
      if (lVar1 == 0) {
        wVar2 = *param_1;
        pwVar3 = param_1;
        if (wVar2 != L'\0') goto LAB_05352e5c;
        break;
      }
      param_1 = param_1 + 1;
      wVar2 = *param_1;
    }
  }
  else {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      lVar1 = Strchr(param_2,wVar2);
      if (lVar1 != 0) goto LAB_05352e04;
      param_1 = param_1 + 1;
      wVar2 = *param_1;
    }
  }
  goto LAB_05352e0c;
  while( true ) {
    pwVar3 = pwVar3 + 1;
    wVar2 = *pwVar3;
    if (wVar2 == L'\0') break;
LAB_05352e5c:
    lVar1 = Strchr(param_2,wVar2);
    if (lVar1 != 0) break;
  }
  if (pwVar3 != param_1) {
    *param_3 = (long)pwVar3 - (long)param_1 >> 2;
    return param_1;
  }
LAB_05352e0c:
  *param_3 = 0;
  return (wchar32 *)0x0;
}


/* EA::StdC::Strset(char*, int) */

void EA::StdC::Strset(char *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    *param_1 = (char)param_2;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}


/* EA::StdC::Strset(char16_t*, char16_t) */

void EA::StdC::Strset(wchar16 *param_1,wchar16 param_2)

{
  wchar16 wVar1;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    *param_1 = param_2;
    wVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}


/* EA::StdC::Strset(char32_t*, char32_t) */

void EA::StdC::Strset(wchar32 *param_1,wchar32 param_2)

{
  wchar32 wVar1;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    *param_1 = param_2;
    wVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}


/* EA::StdC::Strnset(char*, int, unsigned long) */

void EA::StdC::Strnset(char *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  
  if (*param_1 != '\0') {
    uVar1 = 0;
    if (param_3 != 0) {
      do {
        param_1[uVar1] = (char)param_2;
        uVar1 = uVar1 + 1;
        if (param_1[uVar1] == '\0') {
          return;
        }
      } while (uVar1 < param_3);
    }
  }
  return;
}


/* EA::StdC::Strnset(char16_t*, char16_t, unsigned long) */

void EA::StdC::Strnset(wchar16 *param_1,wchar16 param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((*param_1 != L'\0') && (uVar1 = 0, param_3 != 0)) {
    do {
      param_1[uVar1] = param_2;
      uVar1 = uVar1 + 1;
      if (param_1[uVar1] == L'\0') {
        return;
      }
    } while (uVar1 < param_3);
  }
  return;
}


/* EA::StdC::Strnset(char32_t*, char32_t, unsigned long) */

void EA::StdC::Strnset(wchar32 *param_1,wchar32 param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((*param_1 != L'\0') && (uVar1 = 0, param_3 != 0)) {
    do {
      param_1[uVar1] = param_2;
      uVar1 = uVar1 + 1;
      if (param_1[uVar1] == L'\0') {
        return;
      }
    } while (uVar1 < param_3);
  }
  return;
}


/* EA::StdC::Strrev(char*) */

char * EA::StdC::Strrev(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  lVar2 = Strlen(param_1);
  pcVar3 = param_1 + lVar2 + -1;
  pcVar5 = param_1;
  if (param_1 < param_1 + lVar2 + -1) {
    do {
      cVar1 = *pcVar3;
      pcVar4 = pcVar3 + -1;
      *pcVar3 = *pcVar5;
      pcVar6 = pcVar5 + 1;
      *pcVar5 = cVar1;
      pcVar3 = pcVar4;
      pcVar5 = pcVar6;
    } while (pcVar6 < pcVar4);
  }
  return param_1;
}


/* EA::StdC::Strrev(char16_t*) */

wchar16 * EA::StdC::Strrev(wchar16 *param_1)

{
  wchar16 wVar1;
  long lVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar6;
  
  lVar2 = Strlen(param_1);
  pwVar3 = param_1 + lVar2 + -1;
  pwVar5 = param_1;
  if (param_1 < param_1 + lVar2 + -1) {
    do {
      wVar1 = *pwVar3;
      pwVar4 = pwVar3 + -1;
      *pwVar3 = *pwVar5;
      pwVar6 = pwVar5 + 1;
      *pwVar5 = wVar1;
      pwVar3 = pwVar4;
      pwVar5 = pwVar6;
    } while (pwVar6 < pwVar4);
  }
  return param_1;
}


/* EA::StdC::Strrev(char32_t*) */

wchar32 * EA::StdC::Strrev(wchar32 *param_1)

{
  wchar32 wVar1;
  long lVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  wchar32 *pwVar5;
  wchar32 *pwVar6;
  
  lVar2 = Strlen(param_1);
  pwVar3 = param_1 + lVar2 + -1;
  pwVar5 = param_1;
  if (param_1 < param_1 + lVar2 + -1) {
    do {
      wVar1 = *pwVar3;
      pwVar4 = pwVar3 + -1;
      *pwVar3 = *pwVar5;
      pwVar6 = pwVar5 + 1;
      *pwVar5 = wVar1;
      pwVar3 = pwVar4;
      pwVar5 = pwVar6;
    } while (pwVar6 < pwVar4);
  }
  return param_1;
}


/* EA::StdC::Strcmp(char const*, char const*) */

int EA::StdC::Strcmp(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0;
  do {
    pbVar1 = (byte *)(param_1 + lVar3);
    pbVar2 = (byte *)(param_2 + lVar3);
    lVar3 = lVar3 + 1;
    uVar4 = (uint)*pbVar1;
    if (uVar4 != *pbVar2) {
      return uVar4 - *pbVar2;
    }
  } while (uVar4 != 0);
  return 0;
}


/* EA::StdC::Strcmp(char16_t const*, char16_t const*) */

int EA::StdC::Strcmp(wchar16 *param_1,wchar16 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0;
  do {
    puVar1 = (ushort *)((long)param_1 + lVar3);
    puVar2 = (ushort *)((long)param_2 + lVar3);
    lVar3 = lVar3 + 2;
    uVar4 = (uint)*puVar1;
    if (uVar4 != *puVar2) {
      return uVar4 - *puVar2;
    }
  } while (uVar4 != 0);
  return 0;
}


/* EA::StdC::Strcmp(char32_t const*, char32_t const*) */

undefined4 EA::StdC::Strcmp(wchar32 *param_1,wchar32 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = *(uint *)((long)param_1 + lVar4);
    puVar1 = (uint *)((long)param_2 + lVar4);
    lVar4 = lVar4 + 4;
    if (uVar2 != *puVar1) {
      uVar3 = 1;
      if (uVar2 <= *puVar1) {
        uVar3 = 0xffffffff;
      }
      return uVar3;
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Strncmp(char const*, char const*, unsigned long) */

int EA::StdC::Strncmp(char *param_1,char *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == param_3) {
      return 0;
    }
    bVar2 = param_1[uVar3];
    pbVar1 = (byte *)(param_2 + uVar3);
    uVar3 = uVar3 + 1;
    if ((uint)bVar2 != (uint)*pbVar1) break;
    if (bVar2 == 0) {
      return 0;
    }
  }
  return (uint)bVar2 - (uint)*pbVar1;
}


/* EA::StdC::Strncmp(char16_t const*, char16_t const*, unsigned long) */

int EA::StdC::Strncmp(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == param_3) {
      return 0;
    }
    wVar2 = param_1[uVar3];
    pwVar1 = param_2 + uVar3;
    uVar3 = uVar3 + 1;
    if ((uint)(ushort)wVar2 != (uint)(ushort)*pwVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
  }
  return (uint)(ushort)wVar2 - (uint)(ushort)*pwVar1;
}


/* EA::StdC::Strncmp(char32_t const*, char32_t const*, unsigned long) */

undefined4 EA::StdC::Strncmp(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (uVar4 == param_3) {
      return 0;
    }
    wVar2 = param_1[uVar4];
    pwVar1 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    if (wVar2 != *pwVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
  }
  uVar3 = 1;
  if ((uint)wVar2 <= (uint)*pwVar1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* EA::StdC::Stricmp(char const*, char const*) */

int EA::StdC::Stricmp(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = Tolower(param_1[lVar4]);
    pcVar1 = param_2 + lVar4;
    lVar4 = lVar4 + 1;
    uVar3 = Tolower(*pcVar1);
    uVar2 = uVar2 & 0xff;
    if (uVar2 != (uVar3 & 0xff)) {
      return uVar2 - (uVar3 & 0xff);
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Stricmp(char16_t const*, char16_t const*) */

int EA::StdC::Stricmp(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = Tolower(*(wchar16 *)((long)param_1 + lVar4));
    pwVar1 = (wchar16 *)((long)param_2 + lVar4);
    lVar4 = lVar4 + 2;
    uVar3 = Tolower(*pwVar1);
    uVar2 = uVar2 & 0xffff;
    if (uVar2 != (uVar3 & 0xffff)) {
      return uVar2 - (uVar3 & 0xffff);
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Stricmp(char32_t const*, char32_t const*) */

undefined4 EA::StdC::Stricmp(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 *pwVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    uVar2 = Tolower(*(wchar32 *)((long)param_1 + lVar5));
    pwVar1 = (wchar32 *)((long)param_2 + lVar5);
    lVar5 = lVar5 + 4;
    uVar3 = Tolower(*pwVar1);
    if (uVar2 != uVar3) {
      uVar4 = 1;
      if (uVar2 <= uVar3) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Strnicmp(char const*, char const*, unsigned long) */

int EA::StdC::Strnicmp(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (uVar4 == param_3) {
      return 0;
    }
    bVar2 = Tolower(param_1[uVar4]);
    pcVar1 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = Tolower(*pcVar1);
    if ((uint)bVar2 != (uVar3 & 0xff)) break;
    if (bVar2 == 0) {
      return 0;
    }
  }
  return (uint)bVar2 - (uVar3 & 0xff);
}


/* EA::StdC::Strnicmp(char16_t const*, char16_t const*, unsigned long) */

int EA::StdC::Strnicmp(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 *pwVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (uVar4 == param_3) {
      return 0;
    }
    uVar2 = Tolower(param_1[uVar4]);
    pwVar1 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = Tolower(*pwVar1);
    if ((uint)uVar2 != (uVar3 & 0xffff)) break;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return (uint)uVar2 - (uVar3 & 0xffff);
}


/* EA::StdC::Strnicmp(char32_t const*, char32_t const*, unsigned long) */

undefined4 EA::StdC::Strnicmp(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 *pwVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  while( true ) {
    if (uVar5 == param_3) {
      return 0;
    }
    uVar2 = Tolower(param_1[uVar5]);
    pwVar1 = param_2 + uVar5;
    uVar5 = uVar5 + 1;
    uVar3 = Tolower(*pwVar1);
    if (uVar2 != uVar3) break;
    if (uVar2 == 0) {
      return 0;
    }
  }
  uVar4 = 1;
  if (uVar2 <= uVar3) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/* EA::StdC::Strcoll(char const*, char const*) */

int EA::StdC::Strcoll(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0;
  do {
    pbVar1 = (byte *)(param_1 + lVar3);
    pbVar2 = (byte *)(param_2 + lVar3);
    lVar3 = lVar3 + 1;
    uVar4 = (uint)*pbVar1;
    if (uVar4 != *pbVar2) {
      return uVar4 - *pbVar2;
    }
  } while (uVar4 != 0);
  return 0;
}


/* EA::StdC::Strcoll(char16_t const*, char16_t const*) */

int EA::StdC::Strcoll(wchar16 *param_1,wchar16 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0;
  do {
    puVar1 = (ushort *)((long)param_1 + lVar3);
    puVar2 = (ushort *)((long)param_2 + lVar3);
    lVar3 = lVar3 + 2;
    uVar4 = (uint)*puVar1;
    if (uVar4 != *puVar2) {
      return uVar4 - *puVar2;
    }
  } while (uVar4 != 0);
  return 0;
}


/* EA::StdC::Strcoll(char32_t const*, char32_t const*) */

undefined4 EA::StdC::Strcoll(wchar32 *param_1,wchar32 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = *(uint *)((long)param_1 + lVar4);
    puVar1 = (uint *)((long)param_2 + lVar4);
    lVar4 = lVar4 + 4;
    if (uVar2 != *puVar1) {
      uVar3 = 1;
      if (uVar2 <= *puVar1) {
        uVar3 = 0xffffffff;
      }
      return uVar3;
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Strncoll(char const*, char const*, unsigned long) */

int EA::StdC::Strncoll(char *param_1,char *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == param_3) {
      return 0;
    }
    bVar2 = param_1[uVar3];
    pbVar1 = (byte *)(param_2 + uVar3);
    uVar3 = uVar3 + 1;
    if ((uint)bVar2 != (uint)*pbVar1) break;
    if (bVar2 == 0) {
      return 0;
    }
  }
  return (uint)bVar2 - (uint)*pbVar1;
}


/* EA::StdC::Strncoll(char16_t const*, char16_t const*, unsigned long) */

int EA::StdC::Strncoll(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == param_3) {
      return 0;
    }
    wVar2 = param_1[uVar3];
    pwVar1 = param_2 + uVar3;
    uVar3 = uVar3 + 1;
    if ((uint)(ushort)wVar2 != (uint)(ushort)*pwVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
  }
  return (uint)(ushort)wVar2 - (uint)(ushort)*pwVar1;
}


/* EA::StdC::Strncoll(char32_t const*, char32_t const*, unsigned long) */

undefined4 EA::StdC::Strncoll(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (uVar4 == param_3) {
      return 0;
    }
    wVar2 = param_1[uVar4];
    pwVar1 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    if (wVar2 != *pwVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
  }
  uVar3 = 1;
  if ((uint)wVar2 <= (uint)*pwVar1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* EA::StdC::Stricoll(char const*, char const*) */

int EA::StdC::Stricoll(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = Tolower(param_1[lVar4]);
    pcVar1 = param_2 + lVar4;
    lVar4 = lVar4 + 1;
    uVar3 = Tolower(*pcVar1);
    uVar2 = uVar2 & 0xff;
    if (uVar2 != (uVar3 & 0xff)) {
      return uVar2 - (uVar3 & 0xff);
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Stricoll(char16_t const*, char16_t const*) */

int EA::StdC::Stricoll(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 *pwVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = Tolower(*(wchar16 *)((long)param_1 + lVar4));
    pwVar1 = (wchar16 *)((long)param_2 + lVar4);
    lVar4 = lVar4 + 2;
    uVar3 = Tolower(*pwVar1);
    uVar2 = uVar2 & 0xffff;
    if (uVar2 != (uVar3 & 0xffff)) {
      return uVar2 - (uVar3 & 0xffff);
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Stricoll(char32_t const*, char32_t const*) */

undefined4 EA::StdC::Stricoll(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 *pwVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    uVar2 = Tolower(*(wchar32 *)((long)param_1 + lVar5));
    pwVar1 = (wchar32 *)((long)param_2 + lVar5);
    lVar5 = lVar5 + 4;
    uVar3 = Tolower(*pwVar1);
    if (uVar2 != uVar3) {
      uVar4 = 1;
      if (uVar2 <= uVar3) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  } while (uVar2 != 0);
  return 0;
}


/* EA::StdC::Strnicoll(char const*, char const*, unsigned long) */

int EA::StdC::Strnicoll(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (uVar4 == param_3) {
      return 0;
    }
    bVar2 = Tolower(param_1[uVar4]);
    pcVar1 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = Tolower(*pcVar1);
    if ((uint)bVar2 != (uVar3 & 0xff)) break;
    if (bVar2 == 0) {
      return 0;
    }
  }
  return (uint)bVar2 - (uVar3 & 0xff);
}


/* EA::StdC::Strnicoll(char16_t const*, char16_t const*, unsigned long) */

int EA::StdC::Strnicoll(wchar16 *param_1,wchar16 *param_2,ulong param_3)

{
  wchar16 *pwVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (uVar4 == param_3) {
      return 0;
    }
    uVar2 = Tolower(param_1[uVar4]);
    pwVar1 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = Tolower(*pwVar1);
    if ((uint)uVar2 != (uVar3 & 0xffff)) break;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return (uint)uVar2 - (uVar3 & 0xffff);
}


/* EA::StdC::Strnicoll(char32_t const*, char32_t const*, unsigned long) */

undefined4 EA::StdC::Strnicoll(wchar32 *param_1,wchar32 *param_2,ulong param_3)

{
  wchar32 *pwVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  while( true ) {
    if (uVar5 == param_3) {
      return 0;
    }
    uVar2 = Tolower(param_1[uVar5]);
    pwVar1 = param_2 + uVar5;
    uVar5 = uVar5 + 1;
    uVar3 = Tolower(*pwVar1);
    if (uVar2 != uVar3) break;
    if (uVar2 == 0) {
      return 0;
    }
  }
  uVar4 = 1;
  if (uVar2 <= uVar3) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/* EA::StdC::isnan(double) */

bool EA::StdC::isnan(double param_1)

{
  return 0x7ff0000000000000 < (ulong)ABS(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::EcvtBuf(double, int, int*, int*, char*) */

void EA::StdC::EcvtBuf(double param_1,int param_2,int *param_3,int *param_4,char *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  double dVar21;
  undefined8 uVar22;
  double local_18;
  double local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_3 = 0;
  if (((ushort)((ulong)param_1 >> 0x30) & 0x7ff0) == 0x7ff0) {
    cVar8 = isnan(param_1);
    if (cVar8 == '\0') {
      builtin_strncpy(param_5,"INF",4);
    }
    else {
      builtin_strncpy(param_5,"NAN",4);
    }
    goto LAB_053539c8;
  }
  bVar7 = param_1 < 0.0;
  if (bVar7) {
    param_1 = -param_1;
  }
  uVar19 = (uint)bVar7;
  dVar21 = modf(param_1,&local_18);
  if ((param_1 < 1.0) || (local_18 == 0.0)) {
    pbVar18 = (byte *)(param_5 + 1);
    *param_5 = '\0';
    uVar15 = 0;
  }
  else {
    uVar5 = 0;
    pbVar16 = (byte *)(param_5 + 0x3e);
    do {
      pbVar20 = pbVar16;
      uVar17 = uVar5;
      local_10 = modf(local_18 * 0.1,&local_18);
      uVar15 = (int)uVar17 + 1;
      pbVar16 = pbVar20 + -1;
      *pbVar20 = (char)(int)((local_10 + 0.009999999776482582) * 10.0) + 0x30;
      uVar5 = (ulong)uVar15;
    } while (local_18 != 0.0);
    *param_5 = '\0';
    pbVar18 = (byte *)(param_5 + 1);
    uVar10 = uVar15;
    if (param_2 < (int)uVar15) {
      pbVar12 = pbVar16 + (long)param_2 + 1;
      if (0x34 < pbVar16[(long)param_2 + 1]) {
        do {
          pbVar12 = pbVar12 + -1;
          if ((byte)(*pbVar12 + 1) < 0x3a) {
            *pbVar12 = *pbVar12 + 1;
            break;
          }
          *pbVar12 = 0x30;
        } while (pbVar20 <= pbVar12);
      }
      uVar17 = (ulong)(param_2 - 1);
      if (param_2 == 0) {
        dVar21 = 0.0;
        param_2 = param_2 - uVar15;
        goto LAB_05353830;
      }
      dVar21 = 0.0;
      uVar10 = param_2;
    }
    if ((uVar10 < 0x10) || (pbVar18 < pbVar20 + 0x10 && pbVar20 < param_5 + 0x11)) {
      lVar13 = 0;
      do {
        lVar2 = lVar13 + 1;
        param_5[lVar13 + 1] = pbVar20[lVar13];
        lVar13 = lVar2;
      } while (lVar2 != uVar17 + 1);
    }
    else {
      uVar1 = ((int)uVar17 - 0xfU >> 4) + 1;
      uVar14 = 0;
      uVar3 = uVar1 * 0x10;
      pbVar16 = pbVar18;
      pbVar12 = pbVar20;
      do {
        uVar22 = *(undefined8 *)pbVar12;
        uVar14 = uVar14 + 1;
        *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)(pbVar12 + 8);
        *(undefined8 *)pbVar16 = uVar22;
        pbVar16 = pbVar16 + 0x10;
        pbVar12 = pbVar12 + 0x10;
      } while (uVar14 < uVar1);
      iVar4 = (int)uVar17 + uVar1 * -0x10;
      if (((((uVar10 != uVar3) && (pbVar18[uVar3] = pbVar20[uVar3], iVar4 != 0)) &&
           (pbVar18[(ulong)uVar3 + 1] = pbVar20[(ulong)uVar3 + 1], iVar4 != 1)) &&
          (((pbVar18[(ulong)uVar3 + 2] = pbVar20[(ulong)uVar3 + 2], iVar4 != 2 &&
            (pbVar18[(ulong)uVar3 + 3] = pbVar20[(ulong)uVar3 + 3], iVar4 != 3)) &&
           ((pbVar18[(ulong)uVar3 + 4] = pbVar20[(ulong)uVar3 + 4], iVar4 != 4 &&
            ((pbVar18[(ulong)uVar3 + 5] = pbVar20[(ulong)uVar3 + 5], iVar4 != 5 &&
             (pbVar18[(ulong)uVar3 + 6] = pbVar20[(ulong)uVar3 + 6], iVar4 != 6)))))))) &&
         ((pbVar18[(ulong)uVar3 + 7] = pbVar20[(ulong)uVar3 + 7], iVar4 != 7 &&
          (((((pbVar18[(ulong)uVar3 + 8] = pbVar20[(ulong)uVar3 + 8], iVar4 != 8 &&
              (pbVar18[(ulong)uVar3 + 9] = pbVar20[(ulong)uVar3 + 9], iVar4 != 9)) &&
             (pbVar18[(ulong)uVar3 + 10] = pbVar20[(ulong)uVar3 + 10], iVar4 != 10)) &&
            ((pbVar18[(ulong)uVar3 + 0xb] = pbVar20[(ulong)uVar3 + 0xb], iVar4 != 0xb &&
             (pbVar18[(ulong)uVar3 + 0xc] = pbVar20[(ulong)uVar3 + 0xc], iVar4 != 0xc)))) &&
           (pbVar18[(ulong)uVar3 + 0xd] = pbVar20[(ulong)uVar3 + 0xd], iVar4 != 0xd)))))) {
        pbVar18[(ulong)uVar3 + 0xe] = pbVar20[(ulong)uVar3 + 0xe];
      }
    }
    pbVar18 = pbVar18 + uVar17 + 1;
    param_2 = param_2 - uVar15;
  }
LAB_05353830:
  pbVar16 = (byte *)(param_5 + 1);
  uVar10 = (int)pbVar18 - (int)pbVar16;
  if (param_2 < 0) {
    uVar10 = uVar15;
  }
  *param_3 = uVar10;
  bVar6 = param_1 < 1.0;
  while ((dVar21 != 0.0 && (0 < param_2))) {
    dVar21 = modf(dVar21 * 10.0,&local_10);
    if ((bVar6) && ((int)local_10 == 0)) {
      *param_3 = *param_3 + -1;
    }
    else {
      param_2 = param_2 - 1;
      *pbVar18 = (char)(int)local_10 + 0x30;
      bVar6 = false;
      pbVar18 = pbVar18 + 1;
    }
  }
  if (dVar21 != 0.0) {
    pbVar20 = pbVar18 + -1;
    modf(dVar21 * 10.0,&local_10);
    if (4.0 < local_10) {
      while( true ) {
        bVar9 = *pbVar20;
        if (bVar9 == 0x2e) {
          bVar9 = pbVar20[-1];
          pbVar20 = pbVar20 + -1;
        }
        if ((byte)(bVar9 + 1) < 0x3a) {
          *pbVar20 = bVar9 + 1;
          goto LAB_053538a8;
        }
        *pbVar20 = 0x30;
        if (pbVar20 == pbVar16) break;
        pbVar20 = pbVar20 + -1;
      }
      *param_5 = '1';
      *param_3 = *param_3 + 1;
    }
    else {
      uVar19 = 0;
      if (bVar7) {
        uVar19 = 1;
        while (pbVar16 < pbVar20) {
          bVar9 = *pbVar20;
          if (bVar9 == 0x2e) {
            bVar9 = pbVar20[-1];
            pbVar20 = pbVar20 + -1;
          }
          if (bVar9 != 0x30) break;
          bVar7 = pbVar20 == pbVar16;
          pbVar20 = pbVar20 + -1;
          if (bVar7) {
            uVar19 = 0;
          }
        }
      }
    }
  }
LAB_053538a8:
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar4 = param_2 - 1;
  if (param_2 != 0) {
    uVar15 = (param_2 - 0x10U >> 4) + 1;
    pbVar20 = pbVar18;
    iVar11 = iVar4;
    if (iVar4 < 0xf) {
LAB_05353900:
      *pbVar20 = 0x30;
      if ((((iVar11 != 0) && (pbVar20[1] = 0x30, iVar11 != 1)) && (pbVar20[2] = 0x30, iVar11 != 2))
         && (((((pbVar20[3] = 0x30, iVar11 != 3 && (pbVar20[4] = 0x30, iVar11 != 4)) &&
               ((pbVar20[5] = 0x30, iVar11 != 5 &&
                ((pbVar20[6] = 0x30, iVar11 != 6 && (pbVar20[7] = 0x30, iVar11 != 7)))))) &&
              (pbVar20[8] = 0x30, iVar11 != 8)) &&
             ((((pbVar20[9] = 0x30, iVar11 != 9 && (pbVar20[10] = 0x30, iVar11 != 10)) &&
               (pbVar20[0xb] = 0x30, iVar11 != 0xb)) &&
              ((pbVar20[0xc] = 0x30, iVar11 != 0xc && (pbVar20[0xd] = 0x30, iVar11 != 0xd)))))))) {
        pbVar20[0xe] = 0x30;
      }
    }
    else {
      uVar10 = 0;
      do {
        pbVar20[8] = 0x30;
        pbVar20[9] = 0x30;
        pbVar20[10] = 0x30;
        pbVar20[0xb] = 0x30;
        pbVar20[0xc] = 0x30;
        pbVar20[0xd] = 0x30;
        pbVar20[0xe] = 0x30;
        pbVar20[0xf] = 0x30;
        pbVar20[0] = 0x30;
        pbVar20[1] = 0x30;
        pbVar20[2] = 0x30;
        pbVar20[3] = 0x30;
        pbVar20[4] = 0x30;
        pbVar20[5] = 0x30;
        pbVar20[6] = 0x30;
        pbVar20[7] = 0x30;
        uVar10 = uVar10 + 1;
        pbVar20 = pbVar20 + 0x10;
      } while (uVar10 < uVar15);
      pbVar20 = pbVar18 + uVar15 * 0x10;
      iVar11 = iVar4 + uVar15 * -0x10;
      if (uVar15 * 0x10 != param_2) goto LAB_05353900;
    }
    pbVar18 = pbVar18 + (long)iVar4 + 1;
  }
  *pbVar18 = 0;
  if (*param_5 == '\0') {
    memmove(param_5,pbVar16,(size_t)(pbVar18 + (1 - (long)pbVar16)));
  }
  *param_4 = uVar19;
LAB_053539c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::FcvtBuf(double, int, int*, int*, char*) */

void EA::StdC::FcvtBuf(double param_1,int param_2,int *param_3,int *param_4,char *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  byte *pbVar18;
  byte *__src;
  double dVar19;
  undefined8 uVar20;
  double local_18;
  double local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_3 = 0;
  if (((ushort)((ulong)param_1 >> 0x30) & 0x7ff0) == 0x7ff0) {
    cVar5 = isnan(param_1);
    if (cVar5 == '\0') {
      builtin_strncpy(param_5,"INF",4);
    }
    else {
      builtin_strncpy(param_5,"NAN",4);
    }
    goto LAB_05353fbc;
  }
  bVar4 = param_1 < 0.0;
  if (bVar4) {
    param_1 = -param_1;
  }
  uVar15 = (uint)bVar4;
  dVar19 = modf(param_1,&local_18);
  if ((param_1 < 1.0) || (local_18 == 0.0)) {
    pcVar14 = param_5 + 1;
    *param_5 = '\0';
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    pcVar9 = param_5 + 0x3e;
    while( true ) {
      local_10 = modf(local_18 * 0.1,&local_18);
      iVar16 = (int)lVar17;
      uVar7 = iVar16 + 1;
      *pcVar9 = (char)(int)((local_10 + 0.009999999776482582) * 10.0) + '0';
      if (local_18 == 0.0) break;
      lVar17 = (long)(int)uVar7;
      pcVar9 = pcVar9 + -1;
    }
    pcVar14 = param_5 + 1;
    *param_5 = '\0';
    if ((pcVar14 < pcVar9 + 0x10 && pcVar9 < param_5 + 0x11) || (uVar7 < 0x10)) {
      lVar8 = 0;
      do {
        lVar2 = lVar8 + 1;
        param_5[lVar8 + 1] = pcVar9[lVar8];
        lVar8 = lVar2;
      } while (lVar2 != lVar17 + 1);
    }
    else {
      uVar1 = (iVar16 - 0xfU >> 4) + 1;
      uVar10 = 0;
      uVar3 = uVar1 * 0x10;
      pcVar12 = pcVar14;
      pcVar13 = pcVar9;
      do {
        uVar20 = *(undefined8 *)pcVar13;
        uVar10 = uVar10 + 1;
        *(undefined8 *)(pcVar12 + 8) = *(undefined8 *)(pcVar13 + 8);
        *(undefined8 *)pcVar12 = uVar20;
        pcVar12 = pcVar12 + 0x10;
        pcVar13 = pcVar13 + 0x10;
      } while (uVar10 < uVar1);
      iVar16 = iVar16 + uVar1 * -0x10;
      if ((((((uVar7 != uVar3) && (pcVar14[uVar3] = pcVar9[uVar3], iVar16 != 0)) &&
            (pcVar14[(ulong)uVar3 + 1] = pcVar9[(ulong)uVar3 + 1], iVar16 != 1)) &&
           (((pcVar14[(ulong)uVar3 + 2] = pcVar9[(ulong)uVar3 + 2], iVar16 != 2 &&
             (pcVar14[(ulong)uVar3 + 3] = pcVar9[(ulong)uVar3 + 3], iVar16 != 3)) &&
            ((pcVar14[(ulong)uVar3 + 4] = pcVar9[(ulong)uVar3 + 4], iVar16 != 4 &&
             ((pcVar14[(ulong)uVar3 + 5] = pcVar9[(ulong)uVar3 + 5], iVar16 != 5 &&
              (pcVar14[(ulong)uVar3 + 6] = pcVar9[(ulong)uVar3 + 6], iVar16 != 6)))))))) &&
          (pcVar14[(ulong)uVar3 + 7] = pcVar9[(ulong)uVar3 + 7], iVar16 != 7)) &&
         (((((pcVar14[(ulong)uVar3 + 8] = pcVar9[(ulong)uVar3 + 8], iVar16 != 8 &&
             (pcVar14[(ulong)uVar3 + 9] = pcVar9[(ulong)uVar3 + 9], iVar16 != 9)) &&
            (pcVar14[(ulong)uVar3 + 10] = pcVar9[(ulong)uVar3 + 10], iVar16 != 10)) &&
           ((pcVar14[(ulong)uVar3 + 0xb] = pcVar9[(ulong)uVar3 + 0xb], iVar16 != 0xb &&
            (pcVar14[(ulong)uVar3 + 0xc] = pcVar9[(ulong)uVar3 + 0xc], iVar16 != 0xc)))) &&
          (pcVar14[(ulong)uVar3 + 0xd] = pcVar9[(ulong)uVar3 + 0xd], iVar16 != 0xd)))) {
        pcVar14[(ulong)uVar3 + 0xe] = pcVar9[(ulong)uVar3 + 0xe];
      }
    }
    lVar17 = lVar17 + 1;
    pcVar14 = pcVar14 + lVar17;
  }
  __src = (byte *)(param_5 + 1);
  iVar16 = param_2;
  if (0x10 < param_2) {
    iVar16 = 0x10;
  }
  *param_3 = (int)lVar17;
  if ((dVar19 != 0.0) && (iVar16 != 0)) {
    iVar16 = iVar16 - param_2;
    pcVar9 = pcVar14;
    do {
      param_2 = param_2 - 1;
      dVar19 = modf(dVar19 * 10.0,&local_10);
      pcVar14 = pcVar9 + 1;
      *pcVar9 = (char)(int)local_10 + '0';
      if (dVar19 == 0.0) break;
      pcVar9 = pcVar14;
    } while (iVar16 + param_2 != 0);
  }
  if (dVar19 != 0.0) {
    pbVar18 = (byte *)(pcVar14 + -1);
    modf(dVar19 * 10.0,&local_10);
    if (local_10 <= 4.0) {
      uVar15 = 0;
      if (bVar4) {
        uVar15 = 1;
        while (__src < pbVar18) {
          bVar6 = *pbVar18;
          if (bVar6 == 0x2e) {
            bVar6 = pbVar18[-1];
            pbVar18 = pbVar18 + -1;
          }
          if (bVar6 != 0x30) break;
          bVar4 = pbVar18 == __src;
          pbVar18 = pbVar18 + -1;
          if (bVar4) {
            uVar15 = 0;
          }
        }
      }
    }
    else {
      while( true ) {
        bVar6 = *pbVar18;
        if (bVar6 == 0x2e) {
          bVar6 = pbVar18[-1];
          pbVar18 = pbVar18 + -1;
        }
        if ((byte)(bVar6 + 1) < 0x3a) {
          *pbVar18 = bVar6 + 1;
          goto LAB_05353ea0;
        }
        *pbVar18 = 0x30;
        if (pbVar18 == __src) break;
        pbVar18 = pbVar18 + -1;
      }
      *param_5 = '1';
      *param_3 = *param_3 + 1;
    }
  }
LAB_05353ea0:
  uVar7 = param_2 - 1;
  if (param_2 != 0) {
    uVar11 = (ulong)uVar7;
    uVar1 = (param_2 - 0x10U >> 4) + 1;
    pcVar9 = pcVar14;
    if (uVar7 < 0xf) {
LAB_05353ef4:
      *pcVar9 = '0';
      if (((((uVar7 != 0) && (pcVar9[1] = '0', uVar7 != 1)) && (pcVar9[2] = '0', uVar7 != 2)) &&
          (((pcVar9[3] = '0', uVar7 != 3 && (pcVar9[4] = '0', uVar7 != 4)) &&
           ((pcVar9[5] = '0', uVar7 != 5 &&
            ((pcVar9[6] = '0', uVar7 != 6 && (pcVar9[7] = '0', uVar7 != 7)))))))) &&
         ((pcVar9[8] = '0', uVar7 != 8 &&
          ((((pcVar9[9] = '0', uVar7 != 9 && (pcVar9[10] = '0', uVar7 != 10)) &&
            (pcVar9[0xb] = '0', uVar7 != 0xb)) &&
           ((pcVar9[0xc] = '0', uVar7 != 0xc && (pcVar9[0xd] = '0', uVar7 != 0xd)))))))) {
        pcVar9[0xe] = '0';
      }
    }
    else {
      uVar10 = 0;
      do {
        builtin_strncpy(pcVar9,"0000000000000000",0x10);
        uVar10 = uVar10 + 1;
        pcVar9 = pcVar9 + 0x10;
      } while (uVar10 < uVar1);
      uVar7 = uVar7 + uVar1 * -0x10;
      pcVar9 = pcVar14 + uVar1 * 0x10;
      if (param_2 != uVar1 * 0x10) goto LAB_05353ef4;
    }
    pcVar14 = pcVar14 + uVar11 + 1;
  }
  *pcVar14 = '\0';
  if (*param_5 == '\0') {
    memmove(param_5,__src,(size_t)(pcVar14 + (1 - (long)__src)));
  }
  *param_4 = uVar15;
LAB_05353fbc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::EcvtBuf(double, int, int*, int*, char16_t*) */

void EA::StdC::EcvtBuf(double param_1,int param_2,int *param_3,int *param_4,wchar16 *param_5)

{
  wchar16 wVar1;
  byte *pbVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  byte local_168;
  byte local_167 [351];
  long local_8;
  
  pbVar2 = &local_168;
  local_8 = ___stack_chk_guard;
  EcvtBuf(param_1,param_2,param_3,param_4,(char *)pbVar2);
  wVar1 = (wchar16)local_168;
  pwVar4 = param_5;
  pwVar3 = param_5;
  if (local_168 != 0) {
    do {
      pwVar4 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pbVar2 = pbVar2 + 1;
      wVar1 = (wchar16)*pbVar2;
      pwVar3 = pwVar4;
    } while (wVar1 != L'\0');
  }
  *pwVar4 = L'\0';
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::EcvtBuf(double, int, int*, int*, char32_t*) */

void EA::StdC::EcvtBuf(double param_1,int param_2,int *param_3,int *param_4,wchar32 *param_5)

{
  wchar32 wVar1;
  byte *pbVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  byte local_168;
  byte local_167 [351];
  long local_8;
  
  pbVar2 = &local_168;
  local_8 = ___stack_chk_guard;
  EcvtBuf(param_1,param_2,param_3,param_4,(char *)pbVar2);
  wVar1 = (wchar32)local_168;
  pwVar4 = param_5;
  pwVar3 = param_5;
  if (local_168 != 0) {
    do {
      pwVar4 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pbVar2 = pbVar2 + 1;
      wVar1 = (wchar32)*pbVar2;
      pwVar3 = pwVar4;
    } while (wVar1 != L'\0');
  }
  *pwVar4 = L'\0';
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::FcvtBuf(double, int, int*, int*, char16_t*) */

void EA::StdC::FcvtBuf(double param_1,int param_2,int *param_3,int *param_4,wchar16 *param_5)

{
  wchar16 wVar1;
  byte *pbVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  byte local_168;
  byte local_167 [351];
  long local_8;
  
  pbVar2 = &local_168;
  local_8 = ___stack_chk_guard;
  FcvtBuf(param_1,param_2,param_3,param_4,(char *)pbVar2);
  wVar1 = (wchar16)local_168;
  pwVar4 = param_5;
  pwVar3 = param_5;
  if (local_168 != 0) {
    do {
      pwVar4 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pbVar2 = pbVar2 + 1;
      wVar1 = (wchar16)*pbVar2;
      pwVar3 = pwVar4;
    } while (wVar1 != L'\0');
  }
  *pwVar4 = L'\0';
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::FcvtBuf(double, int, int*, int*, char32_t*) */

void EA::StdC::FcvtBuf(double param_1,int param_2,int *param_3,int *param_4,wchar32 *param_5)

{
  wchar32 wVar1;
  byte *pbVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  byte local_168;
  byte local_167 [351];
  long local_8;
  
  pbVar2 = &local_168;
  local_8 = ___stack_chk_guard;
  FcvtBuf(param_1,param_2,param_3,param_4,(char *)pbVar2);
  wVar1 = (wchar32)local_168;
  pwVar4 = param_5;
  pwVar3 = param_5;
  if (local_168 != 0) {
    do {
      pwVar4 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pbVar2 = pbVar2 + 1;
      wVar1 = (wchar32)*pbVar2;
      pwVar3 = pwVar4;
    } while (wVar1 != L'\0');
  }
  *pwVar4 = L'\0';
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_5);
  }
  return;
}


/* EA::StdC::I32toa(int, char*, int) */

void EA::StdC::I32toa(int param_1,char *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 == 10) & (uint)param_1 >> 0x1f;
  FUN_0534f9b0((-uVar1 ^ param_1) + uVar1,param_2,param_3,uVar1);
  return;
}


/* EA::StdC::I32toa(int, char16_t*, int) */

void EA::StdC::I32toa(int param_1,wchar16 *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 == 10) & (uint)param_1 >> 0x1f;
  FUN_0534fa28((-uVar1 ^ param_1) + uVar1,param_2,param_3,uVar1);
  return;
}


/* EA::StdC::I32toa(int, char32_t*, int) */

void EA::StdC::I32toa(int param_1,wchar32 *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 == 10) & (uint)param_1 >> 0x1f;
  FUN_0534faa0((-uVar1 ^ param_1) + uVar1,param_2,param_3,uVar1);
  return;
}


/* EA::StdC::U32toa(unsigned int, char*, int) */

void EA::StdC::U32toa(uint param_1,char *param_2,int param_3)

{
  FUN_0534f9b0(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::U32toa(unsigned int, char16_t*, int) */

void EA::StdC::U32toa(uint param_1,wchar16 *param_2,int param_3)

{
  FUN_0534fa28(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::U32toa(unsigned int, char32_t*, int) */

void EA::StdC::U32toa(uint param_1,wchar32 *param_2,int param_3)

{
  FUN_0534faa0(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::I64toa(long, char*, int) */

void EA::StdC::I64toa(long param_1,char *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)(param_3 == 10) & (uint)((ulong)param_1 >> 0x3f);
  uVar2 = (ulong)(byte)uVar1;
  FUN_0534f9b0((-uVar2 ^ param_1) + uVar2,param_2,param_3,uVar1);
  return;
}


/* EA::StdC::I64toa(long, char16_t*, int) */

void EA::StdC::I64toa(long param_1,wchar16 *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)(param_3 == 10) & (uint)((ulong)param_1 >> 0x3f);
  uVar2 = (ulong)(byte)uVar1;
  FUN_0534fa28((-uVar2 ^ param_1) + uVar2,param_2,param_3,uVar1);
  return;
}


/* EA::StdC::I64toa(long, char32_t*, int) */

void EA::StdC::I64toa(long param_1,wchar32 *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)(param_3 == 10) & (uint)((ulong)param_1 >> 0x3f);
  uVar2 = (ulong)(byte)uVar1;
  FUN_0534faa0((-uVar2 ^ param_1) + uVar2,param_2,param_3,uVar1);
  return;
}


/* EA::StdC::U64toa(unsigned long, char*, int) */

void EA::StdC::U64toa(ulong param_1,char *param_2,int param_3)

{
  FUN_0534f9b0(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::U64toa(unsigned long, char16_t*, int) */

void EA::StdC::U64toa(ulong param_1,wchar16 *param_2,int param_3)

{
  FUN_0534fa28(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::U64toa(unsigned long, char32_t*, int) */

void EA::StdC::U64toa(ulong param_1,wchar32 *param_2,int param_3)

{
  FUN_0534faa0(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::StrtodEnglish(char const*, char**) */

undefined1  [16] EA::StdC::StrtodEnglish(char *param_1,char **param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  while( true ) {
    bVar7 = *param_1;
    iVar1 = Isspace(bVar7);
    if (iVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar3 = (uint)bVar7;
  if ((uVar3 - 0x2b & 0xfd) == 0) {
    uVar3 = (uint)(byte)param_1[1];
    pbVar5 = (byte *)(param_1 + 2);
    param_1 = param_1 + 1;
  }
  else {
    bVar7 = 0x2b;
    pbVar5 = (byte *)(param_1 + 1);
  }
  dVar11 = 0.0;
  while (uVar3 - 0x30 < 10) {
    dVar11 = (double)(int)(uVar3 - 0x30) + dVar11 * 10.0;
    uVar3 = (uint)*pbVar5;
    param_1 = (char *)pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  pbVar2 = pbVar5;
  if (uVar3 == 0x2e) {
    uVar3 = (uint)*pbVar5;
    pbVar2 = pbVar5 + 1;
    uVar4 = uVar3 - 0x30;
    param_1 = (char *)pbVar5;
    if (uVar4 < 10) {
      dVar8 = 1.0;
      do {
        param_1 = (char *)pbVar2;
        dVar10 = (double)(int)uVar4;
        dVar8 = dVar8 * 0.1;
        pbVar2 = (byte *)(param_1 + 1);
        uVar3 = (uint)(byte)*param_1;
        uVar4 = uVar3 - 0x30;
        dVar11 = dVar11 + dVar8 * dVar10;
      } while (uVar4 < 10);
    }
  }
  if ((uVar3 & 0xffffffdf) != 0x45) goto LAB_053545a8;
  bVar6 = *pbVar2;
  param_1 = (char *)(pbVar2 + 1);
  if ((bVar6 - 0x2b & 0xfd) == 0) {
    uVar3 = pbVar2[1] - 0x30;
    pbVar5 = pbVar2 + 2;
    if (uVar3 < 10) goto LAB_05354568;
    dVar8 = 1.0;
  }
  else {
    uVar3 = bVar6 - 0x30;
    bVar6 = 0x2b;
    pbVar5 = (byte *)param_1;
    if (9 < uVar3) {
      dVar11 = dVar11 * 1.0;
      param_1 = (char *)pbVar2;
      goto LAB_053545a8;
    }
LAB_05354568:
    iVar1 = 0;
    do {
      param_1 = (char *)pbVar5;
      iVar1 = uVar3 + iVar1 * 10;
      uVar3 = (byte)*param_1 - 0x30;
      pbVar5 = (byte *)(param_1 + 1);
    } while (uVar3 < 10);
    dVar8 = pow(10.0,(double)iVar1);
  }
  if (bVar6 == 0x2d) {
    dVar11 = dVar11 * (1.0 / dVar8);
  }
  else {
    dVar11 = dVar11 * dVar8;
  }
LAB_053545a8:
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  if (bVar7 == 0x2d) {
    dVar11 = -dVar11;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar11;
  return auVar9;
}


/* EA::StdC::StrtodEnglish(char16_t const*, char16_t**) */

undefined1  [16] EA::StdC::StrtodEnglish(wchar16 *param_1,wchar16 **param_2)

{
  wchar16 wVar1;
  int iVar2;
  uint uVar3;
  wchar16 *pwVar4;
  wchar16 wVar5;
  uint uVar6;
  wchar16 *pwVar7;
  wchar16 wVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  
  while( true ) {
    wVar5 = *param_1;
    iVar2 = Isspace(wVar5);
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  pwVar4 = param_1 + 1;
  wVar1 = wVar5;
  wVar8 = L'+';
  if ((wVar5 + L'ￕ' & 0xfffdU) == 0) {
    wVar1 = param_1[1];
    pwVar4 = param_1 + 2;
    param_1 = param_1 + 1;
    wVar8 = wVar5;
  }
  dVar12 = 0.0;
  while( true ) {
    pwVar7 = pwVar4;
    uVar6 = (uint)(ushort)wVar1;
    if (9 < uVar6 - 0x30) break;
    wVar1 = *pwVar7;
    dVar12 = (double)(int)(uVar6 - 0x30) + dVar12 * 10.0;
    pwVar4 = pwVar7 + 1;
    param_1 = pwVar7;
  }
  pwVar4 = pwVar7;
  if (uVar6 == 0x2e) {
    uVar6 = (uint)(ushort)*pwVar7;
    pwVar4 = pwVar7 + 1;
    uVar3 = uVar6 - 0x30;
    param_1 = pwVar7;
    if (uVar3 < 10) {
      dVar9 = 1.0;
      do {
        param_1 = pwVar4;
        dVar11 = (double)(int)uVar3;
        dVar9 = dVar9 * 0.1;
        pwVar4 = param_1 + 1;
        uVar6 = (uint)(ushort)*param_1;
        uVar3 = uVar6 - 0x30;
        dVar12 = dVar12 + dVar9 * dVar11;
      } while (uVar3 < 10);
    }
  }
  if ((uVar6 & 0xffffffdf) != 0x45) goto LAB_053547b0;
  wVar5 = *pwVar4;
  param_1 = pwVar4 + 1;
  if (((ushort)wVar5 - 0x2b & 0xfffd) == 0) {
    uVar6 = (ushort)pwVar4[1] - 0x30;
    pwVar7 = pwVar4 + 2;
    if (uVar6 < 10) goto LAB_05354770;
    dVar9 = 1.0;
  }
  else {
    uVar6 = (ushort)wVar5 - 0x30;
    wVar5 = L'+';
    pwVar7 = param_1;
    if (9 < uVar6) {
      dVar12 = dVar12 * 1.0;
      param_1 = pwVar4;
      goto LAB_053547b0;
    }
LAB_05354770:
    iVar2 = 0;
    do {
      param_1 = pwVar7;
      iVar2 = uVar6 + iVar2 * 10;
      uVar6 = (ushort)*param_1 - 0x30;
      pwVar7 = param_1 + 1;
    } while (uVar6 < 10);
    dVar9 = pow(10.0,(double)iVar2);
  }
  if (wVar5 == L'-') {
    dVar12 = dVar12 * (1.0 / dVar9);
  }
  else {
    dVar12 = dVar12 * dVar9;
  }
LAB_053547b0:
  if (param_2 != (wchar16 **)0x0) {
    *param_2 = param_1;
  }
  if (wVar8 == L'-') {
    dVar12 = -dVar12;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar12;
  return auVar10;
}


/* EA::StdC::StrtodEnglish(char32_t const*, char32_t**) */

undefined1  [16] EA::StdC::StrtodEnglish(wchar32 *param_1,wchar32 **param_2)

{
  int iVar1;
  uint uVar2;
  wchar32 *pwVar3;
  wchar32 wVar4;
  wchar32 wVar5;
  wchar32 wVar6;
  wchar32 *pwVar7;
  wchar32 wVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  
  while( true ) {
    wVar6 = *param_1;
    iVar1 = Isspace(wVar6);
    if (iVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  pwVar7 = param_1 + 1;
  wVar4 = wVar6;
  wVar8 = L'+';
  if ((wVar6 + L'\xffffffd5' & 0xfffffffdU) == 0) {
    wVar4 = param_1[1];
    pwVar7 = param_1 + 2;
    param_1 = param_1 + 1;
    wVar8 = wVar6;
  }
  dVar12 = 0.0;
  while ((uint)(wVar4 + L'\xffffffd0') < 10) {
    dVar12 = (double)(wVar4 + L'\xffffffd0') + dVar12 * 10.0;
    wVar4 = *pwVar7;
    param_1 = pwVar7;
    pwVar7 = pwVar7 + 1;
  }
  pwVar3 = pwVar7;
  if (wVar4 == L'.') {
    wVar4 = *pwVar7;
    pwVar3 = pwVar7 + 1;
    uVar2 = wVar4 + L'\xffffffd0';
    param_1 = pwVar7;
    if (uVar2 < 10) {
      dVar9 = 1.0;
      do {
        param_1 = pwVar3;
        dVar11 = (double)(int)uVar2;
        dVar9 = dVar9 * 0.1;
        pwVar3 = param_1 + 1;
        wVar4 = *param_1;
        uVar2 = wVar4 + L'\xffffffd0';
        dVar12 = dVar12 + dVar9 * dVar11;
      } while (uVar2 < 10);
    }
  }
  if ((wVar4 & 0xffffffdfU) != 0x45) goto LAB_053549b8;
  wVar6 = *pwVar3;
  param_1 = pwVar3 + 1;
  if ((wVar6 + L'\xffffffd5' & 0xfffffffdU) == 0) {
    wVar4 = pwVar3[1];
    pwVar3 = pwVar3 + 2;
    wVar5 = wVar6;
    if ((uint)(wVar4 + L'\xffffffd0') < 10) goto LAB_05354974;
    dVar9 = 1.0;
LAB_053549ac:
    pwVar3 = param_1;
    if (wVar6 == L'-') {
      dVar12 = dVar12 * (1.0 / dVar9);
      goto LAB_053549b8;
    }
  }
  else {
    dVar9 = 1.0;
    if ((uint)(wVar6 + L'\xffffffd0') < 10) {
      pwVar3 = param_1;
      wVar5 = L'+';
      wVar4 = wVar6;
LAB_05354974:
      iVar1 = 0;
      do {
        param_1 = pwVar3;
        iVar1 = wVar4 + iVar1 * 10;
        wVar4 = *param_1;
        iVar1 = iVar1 + -0x30;
        pwVar3 = param_1 + 1;
      } while ((uint)(wVar4 + L'\xffffffd0') < 10);
      dVar9 = pow(10.0,(double)iVar1);
      wVar6 = wVar5;
      goto LAB_053549ac;
    }
  }
  dVar12 = dVar12 * dVar9;
  param_1 = pwVar3;
LAB_053549b8:
  if (param_2 != (wchar32 **)0x0) {
    *param_2 = param_1;
  }
  if (wVar8 == L'-') {
    dVar12 = -dVar12;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar12;
  return auVar10;
}


/* EA::StdC::StrtoI32(char const*, char**, int) */

ulong EA::StdC::StrtoI32(char *param_1,char **param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar3 = 0xffffffff80000000;
  uVar1 = FUN_0534fc98(param_1,param_2,param_3,0);
  if (-0x80000001 < (long)uVar1) {
    uVar3 = 0x7fffffff;
    if ((long)uVar1 < 0x80000000) {
      return uVar1 & 0xffffffff;
    }
  }
  GetAssertionsEnabled();
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0x22;
  return uVar3 & 0xffffffff;
}


/* EA::StdC::StrcmpAlnum(char const*, char const*) */

int EA::StdC::StrcmpAlnum(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar6;
  
  pbVar6 = (byte *)param_1;
  pbVar7 = (byte *)param_2;
  pbVar9 = (byte *)param_1;
  while( true ) {
    pbVar5 = pbVar6 + 1;
    bVar1 = *pbVar6;
    pbVar8 = pbVar7 + 1;
    bVar2 = *pbVar7;
    if (((uint)bVar1 != (uint)bVar2) || (bVar1 == 0)) break;
    iVar3 = Isdigit(bVar1);
    pbVar6 = pbVar5;
    pbVar7 = pbVar8;
    if (iVar3 == 0) {
      pbVar9 = pbVar5;
    }
  }
  iVar3 = Isdigit(bVar1);
  iVar4 = Isdigit(bVar2);
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar3 = StrtoI32((char *)pbVar9,(char **)0x0,10);
    iVar4 = StrtoI32(param_2 + ((long)pbVar9 - (long)param_1),(char **)0x0,10);
    return iVar3 - iVar4;
  }
  if (iVar3 == iVar4) {
    return (uint)bVar1 - (uint)bVar2;
  }
  iVar4 = 1;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  return iVar4;
}


/* EA::StdC::StricmpAlnum(char const*, char const*) */

int EA::StdC::StricmpAlnum(char *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar6;
  
  pcVar6 = param_1;
  pcVar7 = param_2;
  pcVar9 = param_1;
  while( true ) {
    pcVar5 = pcVar6 + 1;
    bVar1 = Tolower(*pcVar6);
    pcVar8 = pcVar7 + 1;
    uVar2 = Tolower(*pcVar7);
    if (((uint)bVar1 != (uVar2 & 0xff)) || (bVar1 == 0)) break;
    iVar3 = Isdigit(bVar1);
    pcVar6 = pcVar5;
    pcVar7 = pcVar8;
    if (iVar3 == 0) {
      pcVar9 = pcVar5;
    }
  }
  iVar3 = Isdigit(bVar1);
  iVar4 = Isdigit((char)uVar2);
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar3 = StrtoI32(pcVar9,(char **)0x0,10);
    iVar4 = StrtoI32(param_2 + ((long)pcVar9 - (long)param_1),(char **)0x0,10);
    return iVar3 - iVar4;
  }
  if (iVar3 == iVar4) {
    return (uint)bVar1 - (uVar2 & 0xff);
  }
  iVar4 = 1;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  return iVar4;
}


/* EA::StdC::StrtoI32(char16_t const*, char16_t**, int) */

ulong EA::StdC::StrtoI32(wchar16 *param_1,wchar16 **param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar3 = 0xffffffff80000000;
  uVar1 = FUN_0534ff5c(param_1,param_2,param_3,0);
  if (-0x80000001 < (long)uVar1) {
    uVar3 = 0x7fffffff;
    if ((long)uVar1 < 0x80000000) {
      return uVar1 & 0xffffffff;
    }
  }
  GetAssertionsEnabled();
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0x22;
  return uVar3 & 0xffffffff;
}


/* EA::StdC::StrcmpAlnum(char16_t const*, char16_t const*) */

int EA::StdC::StrcmpAlnum(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 wVar2;
  int iVar3;
  int iVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar7;
  wchar16 *pwVar8;
  wchar16 *pwVar9;
  wchar16 *pwVar6;
  
  pwVar5 = param_1;
  pwVar7 = param_2;
  pwVar9 = param_1;
  while( true ) {
    pwVar6 = pwVar5 + 1;
    wVar1 = *pwVar5;
    pwVar8 = pwVar7 + 1;
    wVar2 = *pwVar7;
    if (((uint)(ushort)wVar1 != (uint)(ushort)wVar2) || (wVar1 == L'\0')) break;
    iVar3 = Isdigit(wVar1);
    pwVar5 = pwVar6;
    pwVar7 = pwVar8;
    if (iVar3 == 0) {
      pwVar9 = pwVar6;
    }
  }
  iVar3 = Isdigit(wVar1);
  iVar4 = Isdigit(wVar2);
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar3 = StrtoI32(pwVar9,(wchar16 **)0x0,10);
    iVar4 = StrtoI32((wchar16 *)((long)param_2 + ((long)pwVar9 - (long)param_1)),(wchar16 **)0x0,10)
    ;
    return iVar3 - iVar4;
  }
  if (iVar3 == iVar4) {
    return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
  }
  iVar4 = 1;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  return iVar4;
}


/* EA::StdC::StricmpAlnum(char16_t const*, char16_t const*) */

int EA::StdC::StricmpAlnum(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar7;
  wchar16 *pwVar8;
  wchar16 *pwVar9;
  wchar16 *pwVar6;
  
  pwVar5 = param_1;
  pwVar7 = param_2;
  pwVar9 = param_1;
  while( true ) {
    pwVar6 = pwVar5 + 1;
    wVar1 = Tolower(*pwVar5);
    pwVar8 = pwVar7 + 1;
    uVar2 = Tolower(*pwVar7);
    if (((uint)(ushort)wVar1 != (uVar2 & 0xffff)) || (wVar1 == L'\0')) break;
    iVar3 = Isdigit(wVar1);
    pwVar5 = pwVar6;
    pwVar7 = pwVar8;
    if (iVar3 == 0) {
      pwVar9 = pwVar6;
    }
  }
  iVar3 = Isdigit(wVar1);
  iVar4 = Isdigit((wchar16)uVar2);
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar3 = StrtoI32(pwVar9,(wchar16 **)0x0,10);
    iVar4 = StrtoI32((wchar16 *)((long)param_2 + ((long)pwVar9 - (long)param_1)),(wchar16 **)0x0,10)
    ;
    return iVar3 - iVar4;
  }
  if (iVar3 == iVar4) {
    return (uint)(ushort)wVar1 - (uVar2 & 0xffff);
  }
  iVar4 = 1;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  return iVar4;
}


/* EA::StdC::StrtoI32(char32_t const*, char32_t**, int) */

ulong EA::StdC::StrtoI32(wchar32 *param_1,wchar32 **param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar3 = 0xffffffff80000000;
  uVar1 = FUN_05350224(param_1,param_2,param_3,0);
  if (-0x80000001 < (long)uVar1) {
    uVar3 = 0x7fffffff;
    if ((long)uVar1 < 0x80000000) {
      return uVar1 & 0xffffffff;
    }
  }
  GetAssertionsEnabled();
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0x22;
  return uVar3 & 0xffffffff;
}


/* EA::StdC::StrtoU32(char const*, char**, int) */

ulong EA::StdC::StrtoU32(char *param_1,char **param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar1 = FUN_0534fc98(param_1,param_2,param_3,1);
  uVar3 = uVar1 & 0xffffffff;
  if (0xffffffff < uVar1) {
    GetAssertionsEnabled();
    puVar2 = (undefined4 *)__errno();
    uVar3 = 0xffffffff;
    *puVar2 = 0x22;
  }
  return uVar3;
}


/* EA::StdC::StrtoU32(char16_t const*, char16_t**, int) */

ulong EA::StdC::StrtoU32(wchar16 *param_1,wchar16 **param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar1 = FUN_0534ff5c(param_1,param_2,param_3,1);
  uVar3 = uVar1 & 0xffffffff;
  if (0xffffffff < uVar1) {
    GetAssertionsEnabled();
    puVar2 = (undefined4 *)__errno();
    uVar3 = 0xffffffff;
    *puVar2 = 0x22;
  }
  return uVar3;
}


/* EA::StdC::StrtoU32(char32_t const*, char32_t**, int) */

ulong EA::StdC::StrtoU32(wchar32 *param_1,wchar32 **param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar1 = FUN_05350224(param_1,param_2,param_3,1);
  uVar3 = uVar1 & 0xffffffff;
  if (0xffffffff < uVar1) {
    GetAssertionsEnabled();
    puVar2 = (undefined4 *)__errno();
    uVar3 = 0xffffffff;
    *puVar2 = 0x22;
  }
  return uVar3;
}


/* EA::StdC::StrtoI64(char const*, char**, int) */

void EA::StdC::StrtoI64(char *param_1,char **param_2,int param_3)

{
  FUN_0534fc98(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::StrtoI64(char16_t const*, char16_t**, int) */

void EA::StdC::StrtoI64(wchar16 *param_1,wchar16 **param_2,int param_3)

{
  FUN_0534ff5c(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::StrtoI64(char32_t const*, char32_t**, int) */

void EA::StdC::StrtoI64(wchar32 *param_1,wchar32 **param_2,int param_3)

{
  FUN_05350224(param_1,param_2,param_3,0);
  return;
}


/* EA::StdC::StrtoU64(char const*, char**, int) */

void EA::StdC::StrtoU64(char *param_1,char **param_2,int param_3)

{
  FUN_0534fc98(param_1,param_2,param_3,1);
  return;
}


/* EA::StdC::StrtoU64(char16_t const*, char16_t**, int) */

void EA::StdC::StrtoU64(wchar16 *param_1,wchar16 **param_2,int param_3)

{
  FUN_0534ff5c(param_1,param_2,param_3,1);
  return;
}


/* EA::StdC::StrtoU64(char32_t const*, char32_t**, int) */

void EA::StdC::StrtoU64(wchar32 *param_1,wchar32 **param_2,int param_3)

{
  FUN_05350224(param_1,param_2,param_3,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::FtoaEnglish(double, char*, int, int, bool) */

void EA::StdC::FtoaEnglish(double param_1,char *param_2,int param_3,int param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  int local_170;
  int local_16c;
  char acStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 < 1) goto LAB_053553e8;
  if (param_5) {
    if (param_1 == 0.0) {
      if (0 < param_4) {
        dVar17 = 0.0;
        pcVar5 = (char *)FcvtBuf(param_1,param_4,&local_170,&local_16c,acStack_168);
        if (local_16c != 0) {
          *param_2 = '-';
          goto LAB_053552ac;
        }
        goto LAB_0535516c;
      }
      lVar12 = FtoaEnglish(param_1,param_2,param_3 + -3,param_4,false);
      if (lVar12 != 0) {
        uVar16 = 0;
        lVar12 = Strlen(param_2);
        cVar7 = '+';
        param_2[lVar12] = 'e';
        goto LAB_0535538c;
      }
    }
    else {
      dVar17 = log10(ABS(param_1));
      uVar16 = (uint)dVar17;
      if ((-5 < (int)uVar16) && ((int)uVar16 < param_4)) goto LAB_05355140;
      iVar15 = 10;
      iVar13 = 1;
      if (9 < (int)uVar16) {
        do {
          iVar13 = iVar13 + 1;
          iVar15 = iVar15 * 10;
        } while (iVar15 <= (int)uVar16);
      }
      dVar17 = pow(10.0,(double)(int)-uVar16);
      lVar12 = FtoaEnglish(dVar17 * param_1,param_2,(param_3 - iVar13) + -2,param_4,false);
      if (lVar12 != 0) {
        lVar12 = Strlen(param_2);
        param_2[lVar12] = 'e';
        cVar7 = '-';
        if (-1 < (int)uVar16) {
          cVar7 = '+';
        }
LAB_0535538c:
        param_2[lVar12 + 1] = cVar7;
        I32toa((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f),param_2 + lVar12 + 2,10);
        goto LAB_053553a8;
      }
    }
    goto LAB_053553e8;
  }
LAB_05355140:
  dVar17 = ABS(param_1);
  pcVar5 = (char *)FcvtBuf(param_1,param_4,&local_170,&local_16c,acStack_168);
  if (local_16c != 0) {
    *param_2 = '-';
    uVar16 = 1;
    if (1.0 <= dVar17) goto LAB_0535517c;
LAB_053552ac:
    lVar12 = 1;
    uVar16 = 2;
    if (param_3 != 1) goto LAB_053552bc;
LAB_05355514:
    *param_2 = '\0';
    param_2 = (char *)0x0;
    goto LAB_053553a8;
  }
LAB_0535516c:
  if (dVar17 < 1.0) {
    lVar12 = 0;
    uVar16 = 1;
LAB_053552bc:
    param_2[lVar12] = '0';
    if (local_170 < 1) goto LAB_05355424;
LAB_05355188:
    uVar8 = (ulong)(int)uVar16;
    lVar12 = 0;
    uVar16 = uVar16 + local_170;
    uVar11 = uVar8;
    do {
      uVar10 = (uint)uVar11;
      if (pcVar5[lVar12] == '\0') goto LAB_05355280;
      if (param_3 <= (int)uVar10) goto LAB_05355440;
      uVar10 = uVar10 + 1;
      uVar11 = (ulong)uVar10;
      iVar13 = (int)lVar12 + 1;
      param_2[lVar12 + uVar8] = pcVar5[lVar12];
      lVar12 = lVar12 + 1;
    } while (uVar10 != uVar16);
    cVar7 = pcVar5[iVar13];
    pcVar9 = pcVar5 + iVar13;
    if (cVar7 == '\0') goto LAB_05355280;
LAB_053551d8:
    iVar15 = iVar13 + 1;
    pcVar6 = pcVar5 + iVar13;
    iVar1 = iVar15;
    iVar3 = iVar13;
    do {
      bVar4 = cVar7 == '0';
      pcVar6 = pcVar6 + 1;
      cVar7 = *pcVar6;
      iVar2 = iVar1;
      if (bVar4) {
        iVar2 = iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar2;
    } while (cVar7 != '\0');
    uVar10 = uVar16;
    if ((iVar2 <= iVar13) || (param_4 < 1)) goto LAB_05355280;
    if ((int)uVar16 < param_3) {
      param_2[(int)uVar16] = '.';
      uVar16 = uVar16 + 1;
      uVar10 = uVar16;
      if (local_170 < 0) {
        if ((int)uVar16 < param_3) {
          local_170 = param_4 + local_170;
          pcVar6 = param_2 + (int)uVar16;
          do {
            param_4 = param_4 + -1;
            *pcVar6 = '0';
            uVar10 = uVar10 + 1;
            if (param_4 == local_170) {
              if (0 < param_4) goto LAB_05355228;
              goto LAB_05355280;
            }
            pcVar6 = pcVar6 + 1;
            uVar16 = param_3;
          } while (uVar10 != param_3);
        }
        if (uVar16 == 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = (long)(int)(uVar16 - 1);
        }
        param_2[lVar12] = '\0';
        param_2 = (char *)0x0;
        goto LAB_053553a8;
      }
LAB_05355228:
      cVar7 = *pcVar9;
      if (cVar7 != '\0') {
        if (param_3 <= (int)uVar10) {
LAB_05355474:
          if (uVar10 == 1) goto LAB_05355514;
          iVar13 = uVar10 - 2;
          param_2[(int)(uVar10 - 1)] = '\0';
          if (0 < iVar13) {
            pcVar5 = param_2 + iVar13;
            if (param_2[iVar13] == '0') {
              do {
                *pcVar5 = '\0';
                if (pcVar5 == param_2 + ((long)iVar13 - (ulong)(uVar10 - 3))) goto LAB_053553e8;
                pcVar5 = pcVar5 + -1;
              } while (*pcVar5 == '0');
              param_2 = (char *)0x0;
              goto LAB_053553a8;
            }
          }
          goto LAB_053553e8;
        }
        lVar12 = 0;
        lVar14 = (long)(int)uVar10;
        uVar16 = uVar10;
        while( true ) {
          uVar16 = uVar16 + 1;
          param_2[lVar12 + lVar14] = cVar7;
          uVar10 = uVar16;
          if (((param_4 <= (int)lVar12 + 1) || (iVar2 <= iVar15)) ||
             (cVar7 = (pcVar5 + iVar13)[lVar12 + 1], cVar7 == '\0')) break;
          lVar12 = lVar12 + 1;
          uVar10 = param_3;
          if (uVar16 == param_3) goto LAB_05355474;
          iVar15 = iVar15 + 1;
        }
      }
      goto LAB_05355280;
    }
    if (uVar16 == 1) goto LAB_05355464;
    param_2[(int)(uVar16 - 1)] = '\0';
  }
  else {
    uVar16 = 0;
LAB_0535517c:
    if (0 < local_170) goto LAB_05355188;
LAB_05355424:
    cVar7 = *pcVar5;
    uVar10 = uVar16;
    if (cVar7 != '\0') {
      iVar13 = 0;
      pcVar9 = pcVar5;
      goto LAB_053551d8;
    }
LAB_05355280:
    if ((int)uVar10 < param_3) {
      param_2[(int)uVar10] = '\0';
      goto LAB_053553a8;
    }
LAB_05355440:
    if (uVar10 == 1) {
LAB_05355464:
      *param_2 = '\0';
    }
    else {
      param_2[(int)(uVar10 - 1)] = '\0';
    }
  }
LAB_053553e8:
  param_2 = (char *)0x0;
LAB_053553a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::FtoaEnglish(double, char16_t*, int, int, bool) */

void EA::StdC::FtoaEnglish(double param_1,wchar16 *param_2,int param_3,int param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  byte *pbVar5;
  short *psVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  wchar16 wVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  int local_170;
  int local_16c;
  char acStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 < 1) goto LAB_05355864;
  if (param_5) {
    if (param_1 == 0.0) {
      if (0 < param_4) {
        dVar21 = 0.0;
        pbVar5 = (byte *)FcvtBuf(param_1,param_4,&local_170,&local_16c,acStack_168);
        if (local_16c != 0) {
          *param_2 = L'-';
          goto LAB_05355720;
        }
        goto LAB_053555ec;
      }
      lVar12 = FtoaEnglish(param_1,param_2,param_3 + -3,param_4,false);
      if (lVar12 != 0) {
        uVar20 = 0;
        lVar12 = Strlen(param_2);
        lVar14 = lVar12 * 2;
        uVar11 = 0x2b;
        param_2[lVar12] = L'e';
        goto LAB_05355808;
      }
    }
    else {
      dVar21 = log10(ABS(param_1));
      uVar20 = (uint)dVar21;
      if ((-5 < (int)uVar20) && ((int)uVar20 < param_4)) goto LAB_053555c0;
      iVar17 = 10;
      iVar16 = 1;
      if (9 < (int)uVar20) {
        do {
          iVar16 = iVar16 + 1;
          iVar17 = iVar17 * 10;
        } while (iVar17 <= (int)uVar20);
      }
      dVar21 = pow(10.0,(double)(int)-uVar20);
      lVar12 = FtoaEnglish(dVar21 * param_1,param_2,(param_3 - iVar16) + -2,param_4,false);
      if (lVar12 != 0) {
        lVar12 = Strlen(param_2);
        lVar14 = lVar12 * 2;
        param_2[lVar12] = L'e';
        uVar11 = 0x2d;
        if (-1 < (int)uVar20) {
          uVar11 = 0x2b;
        }
LAB_05355808:
        *(undefined2 *)((long)param_2 + lVar14 + 2) = uVar11;
        I32toa((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f),
               (wchar16 *)((long)param_2 + lVar14 + 4),10);
        goto LAB_05355824;
      }
    }
    goto LAB_05355864;
  }
LAB_053555c0:
  dVar21 = ABS(param_1);
  pbVar5 = (byte *)FcvtBuf(param_1,param_4,&local_170,&local_16c,acStack_168);
  if (local_16c != 0) {
    *param_2 = L'-';
    uVar20 = 1;
    if (1.0 <= dVar21) goto LAB_053555fc;
LAB_05355720:
    lVar12 = 2;
    uVar20 = 2;
    if (param_3 != 1) goto LAB_05355730;
LAB_05355994:
    *param_2 = L'\0';
    param_2 = (wchar16 *)0x0;
    goto LAB_05355824;
  }
LAB_053555ec:
  if (dVar21 < 1.0) {
    lVar12 = 0;
    uVar20 = 1;
LAB_05355730:
    *(undefined2 *)((long)param_2 + lVar12) = 0x30;
    if (local_170 < 1) goto LAB_053558a0;
LAB_05355608:
    uVar19 = uVar20 + local_170;
    lVar14 = 0;
    lVar12 = (long)(int)uVar20;
    do {
      if (pbVar5[lVar14] == 0) goto LAB_053556f4;
      if (param_3 <= (int)uVar20) goto LAB_053558c4;
      uVar20 = uVar20 + 1;
      param_2[lVar12 + lVar14] = (ushort)pbVar5[lVar14];
      iVar16 = (int)lVar14 + 1;
      lVar14 = lVar14 + 1;
    } while (uVar20 != uVar19);
    lVar12 = (long)iVar16;
    bVar7 = pbVar5[lVar12];
    pbVar18 = pbVar5 + lVar12;
    if (bVar7 != 0) {
LAB_0535564c:
      uVar20 = uVar19;
      iVar17 = iVar16 + 1;
      pbVar13 = pbVar5 + lVar12;
      iVar1 = iVar17;
      iVar3 = iVar16;
      do {
        bVar4 = bVar7 == 0x30;
        pbVar13 = pbVar13 + 1;
        bVar7 = *pbVar13;
        iVar2 = iVar1;
        if (bVar4) {
          iVar2 = iVar3;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar2;
      } while (bVar7 != 0);
      if ((iVar16 < iVar2) && (0 < param_4)) {
        if (param_3 <= (int)uVar20) {
          if (uVar20 == 1) {
            *param_2 = L'\0';
          }
          else {
            *(undefined2 *)
             ((long)param_2 +
             (-(ulong)(uVar20 - 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar20 - 1) << 1)) = 0;
          }
LAB_05355864:
          param_2 = (wchar16 *)0x0;
          goto LAB_05355824;
        }
        uVar8 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar20 << 1;
        uVar20 = uVar20 + 1;
        *(undefined2 *)((long)param_2 + uVar8) = 0x2e;
        if (local_170 < 0) {
          uVar19 = uVar20;
          if ((int)uVar20 < param_3) {
            local_170 = param_4 + local_170;
            puVar10 = (undefined2 *)((long)param_2 + uVar8 + 2);
            do {
              param_4 = param_4 + -1;
              *puVar10 = 0x30;
              uVar20 = uVar20 + 1;
              if (param_4 == local_170) {
                if (0 < param_4) goto LAB_053556a0;
                goto LAB_053556f4;
              }
              puVar10 = puVar10 + 1;
              uVar19 = param_3;
            } while (uVar20 != param_3);
          }
          if (uVar19 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = -(ulong)(uVar19 - 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar19 - 1) << 1;
          }
          *(undefined2 *)((long)param_2 + uVar8) = 0;
          param_2 = (wchar16 *)0x0;
          goto LAB_05355824;
        }
LAB_053556a0:
        wVar15 = (wchar16)*pbVar18;
        if (*pbVar18 != 0) {
          lVar9 = 0;
          lVar14 = (long)(int)uVar20;
          uVar19 = uVar20;
          if (param_3 <= (int)uVar20) {
LAB_053558f8:
            if (uVar19 == 1) goto LAB_05355994;
            iVar16 = uVar19 - 2;
            uVar8 = -(ulong)(uVar19 - 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar19 - 1) << 1;
            *(undefined2 *)((long)param_2 + uVar8) = 0;
            if ((0 < iVar16) &&
               (lVar12 = uVar8 - 2, psVar6 = (short *)((long)param_2 + lVar12),
               *(short *)((long)param_2 + lVar12) == 0x30)) {
              do {
                *psVar6 = 0;
                iVar16 = iVar16 + -1;
                if (iVar16 == 0) goto LAB_05355864;
                psVar6 = psVar6 + -1;
              } while (*psVar6 == 0x30);
              param_2 = (wchar16 *)0x0;
              goto LAB_05355824;
            }
            goto LAB_05355864;
          }
          while( true ) {
            param_2[lVar14 + lVar9] = wVar15;
            uVar20 = uVar20 + 1;
            if (((param_4 <= (int)lVar9 + 1) || (iVar2 <= iVar17)) ||
               (wVar15 = (wchar16)(pbVar5 + lVar12)[lVar9 + 1], wVar15 == L'\0')) break;
            lVar9 = lVar9 + 1;
            uVar19 = param_3;
            if (uVar20 == param_3) goto LAB_053558f8;
            iVar17 = iVar17 + 1;
          }
        }
      }
    }
  }
  else {
    uVar20 = 0;
LAB_053555fc:
    if (0 < local_170) goto LAB_05355608;
LAB_053558a0:
    bVar7 = *pbVar5;
    if (bVar7 != 0) {
      iVar16 = 0;
      lVar12 = 0;
      pbVar18 = pbVar5;
      uVar19 = uVar20;
      goto LAB_0535564c;
    }
  }
LAB_053556f4:
  if ((int)uVar20 < param_3) {
    param_2[(int)uVar20] = L'\0';
  }
  else {
LAB_053558c4:
    if (uVar20 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = -(ulong)(uVar20 - 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar20 - 1) << 1;
    }
    *(undefined2 *)((long)param_2 + uVar8) = 0;
    param_2 = (wchar16 *)0x0;
  }
LAB_05355824:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::FtoaEnglish(double, char32_t*, int, int, bool) */

void EA::StdC::FtoaEnglish(double param_1,wchar32 *param_2,int param_3,int param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int *piVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  int iVar15;
  wchar32 wVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  int local_170;
  int local_16c;
  char acStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 < 1) goto LAB_05355cf0;
  if (param_5) {
    if (param_1 == 0.0) {
      if (0 < param_4) {
        dVar21 = 0.0;
        pbVar6 = (byte *)FcvtBuf(param_1,param_4,&local_170,&local_16c,acStack_168);
        if (local_16c != 0) {
          *param_2 = L'-';
          goto LAB_05355bac;
        }
        goto LAB_05355a78;
      }
      lVar12 = FtoaEnglish(param_1,param_2,param_3 + -3,param_4,false);
      if (lVar12 != 0) {
        uVar20 = 0;
        lVar12 = Strlen(param_2);
        lVar14 = lVar12 * 4;
        uVar5 = 0x2b;
        param_2[lVar12] = L'e';
        goto LAB_05355c94;
      }
    }
    else {
      dVar21 = log10(ABS(param_1));
      uVar20 = (uint)dVar21;
      if ((-5 < (int)uVar20) && ((int)uVar20 < param_4)) goto LAB_05355a4c;
      iVar17 = 10;
      iVar15 = 1;
      if (9 < (int)uVar20) {
        do {
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 * 10;
        } while (iVar17 <= (int)uVar20);
      }
      dVar21 = pow(10.0,(double)(int)-uVar20);
      lVar12 = FtoaEnglish(dVar21 * param_1,param_2,(param_3 - iVar15) + -2,param_4,false);
      if (lVar12 != 0) {
        lVar12 = Strlen(param_2);
        lVar14 = lVar12 * 4;
        param_2[lVar12] = L'e';
        uVar5 = 0x2d;
        if (-1 < (int)uVar20) {
          uVar5 = 0x2b;
        }
LAB_05355c94:
        *(undefined4 *)((long)param_2 + lVar14 + 4) = uVar5;
        I32toa((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f),
               (wchar32 *)((long)param_2 + lVar14 + 8),10);
        goto LAB_05355cb0;
      }
    }
    goto LAB_05355cf0;
  }
LAB_05355a4c:
  dVar21 = ABS(param_1);
  pbVar6 = (byte *)FcvtBuf(param_1,param_4,&local_170,&local_16c,acStack_168);
  if (local_16c != 0) {
    *param_2 = L'-';
    uVar20 = 1;
    if (1.0 <= dVar21) goto LAB_05355a88;
LAB_05355bac:
    lVar12 = 4;
    uVar20 = 2;
    if (param_3 != 1) goto LAB_05355bbc;
LAB_05355e20:
    *param_2 = L'\0';
    param_2 = (wchar32 *)0x0;
    goto LAB_05355cb0;
  }
LAB_05355a78:
  if (dVar21 < 1.0) {
    lVar12 = 0;
    uVar20 = 1;
LAB_05355bbc:
    *(undefined4 *)((long)param_2 + lVar12) = 0x30;
    if (local_170 < 1) goto LAB_05355d2c;
LAB_05355a94:
    uVar19 = uVar20 + local_170;
    lVar14 = 0;
    lVar12 = (long)(int)uVar20;
    do {
      if ((uint)pbVar6[lVar14] == L'\0') goto LAB_05355b80;
      if (param_3 <= (int)uVar20) goto LAB_05355d50;
      uVar20 = uVar20 + 1;
      param_2[lVar12 + lVar14] = (uint)pbVar6[lVar14];
      iVar15 = (int)lVar14 + 1;
      lVar14 = lVar14 + 1;
    } while (uVar20 != uVar19);
    lVar12 = (long)iVar15;
    bVar8 = pbVar6[lVar12];
    pbVar18 = pbVar6 + lVar12;
    if (bVar8 != 0) {
LAB_05355ad8:
      uVar20 = uVar19;
      iVar17 = iVar15 + 1;
      pbVar13 = pbVar6 + lVar12;
      iVar1 = iVar17;
      iVar3 = iVar15;
      do {
        bVar4 = bVar8 == 0x30;
        pbVar13 = pbVar13 + 1;
        bVar8 = *pbVar13;
        iVar2 = iVar1;
        if (bVar4) {
          iVar2 = iVar3;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar2;
      } while (bVar8 != 0);
      if ((iVar15 < iVar2) && (0 < param_4)) {
        if (param_3 <= (int)uVar20) {
          if (uVar20 == 1) {
            *param_2 = L'\0';
          }
          else {
            *(undefined4 *)
             ((long)param_2 +
             (-(ulong)(uVar20 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar20 - 1) << 2)) = 0;
          }
LAB_05355cf0:
          param_2 = (wchar32 *)0x0;
          goto LAB_05355cb0;
        }
        uVar9 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
        uVar20 = uVar20 + 1;
        *(undefined4 *)((long)param_2 + uVar9) = 0x2e;
        if (local_170 < 0) {
          uVar19 = uVar20;
          if ((int)uVar20 < param_3) {
            local_170 = param_4 + local_170;
            puVar11 = (undefined4 *)((long)param_2 + uVar9 + 4);
            do {
              param_4 = param_4 + -1;
              *puVar11 = 0x30;
              uVar20 = uVar20 + 1;
              if (param_4 == local_170) {
                if (0 < param_4) goto LAB_05355b2c;
                goto LAB_05355b80;
              }
              puVar11 = puVar11 + 1;
              uVar19 = param_3;
            } while (uVar20 != param_3);
          }
          if (uVar19 == 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = -(ulong)(uVar19 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar19 - 1) << 2;
          }
          *(undefined4 *)((long)param_2 + uVar9) = 0;
          param_2 = (wchar32 *)0x0;
          goto LAB_05355cb0;
        }
LAB_05355b2c:
        wVar16 = (wchar32)*pbVar18;
        if (*pbVar18 != 0) {
          lVar10 = 0;
          lVar14 = (long)(int)uVar20;
          uVar19 = uVar20;
          if (param_3 <= (int)uVar20) {
LAB_05355d84:
            if (uVar19 == 1) goto LAB_05355e20;
            iVar15 = uVar19 - 2;
            uVar9 = -(ulong)(uVar19 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar19 - 1) << 2;
            *(undefined4 *)((long)param_2 + uVar9) = 0;
            if ((0 < iVar15) &&
               (lVar12 = uVar9 - 4, piVar7 = (int *)((long)param_2 + lVar12),
               *(int *)((long)param_2 + lVar12) == 0x30)) {
              do {
                *piVar7 = 0;
                iVar15 = iVar15 + -1;
                if (iVar15 == 0) goto LAB_05355cf0;
                piVar7 = piVar7 + -1;
              } while (*piVar7 == 0x30);
              param_2 = (wchar32 *)0x0;
              goto LAB_05355cb0;
            }
            goto LAB_05355cf0;
          }
          while( true ) {
            param_2[lVar14 + lVar10] = wVar16;
            uVar20 = uVar20 + 1;
            if (((param_4 <= (int)lVar10 + 1) || (iVar2 <= iVar17)) ||
               (wVar16 = (wchar32)(pbVar6 + lVar12)[lVar10 + 1], wVar16 == L'\0')) break;
            lVar10 = lVar10 + 1;
            uVar19 = param_3;
            if (uVar20 == param_3) goto LAB_05355d84;
            iVar17 = iVar17 + 1;
          }
        }
      }
    }
  }
  else {
    uVar20 = 0;
LAB_05355a88:
    if (0 < local_170) goto LAB_05355a94;
LAB_05355d2c:
    bVar8 = *pbVar6;
    if (bVar8 != 0) {
      iVar15 = 0;
      lVar12 = 0;
      pbVar18 = pbVar6;
      uVar19 = uVar20;
      goto LAB_05355ad8;
    }
  }
LAB_05355b80:
  if ((int)uVar20 < param_3) {
    param_2[(int)uVar20] = L'\0';
  }
  else {
LAB_05355d50:
    if (uVar20 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = -(ulong)(uVar20 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar20 - 1) << 2;
    }
    *(undefined4 *)((long)param_2 + uVar9) = 0;
    param_2 = (wchar32 *)0x0;
  }
LAB_05355cb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* EA::StdC::ReduceFloatString(char*, unsigned long) */

ulong EA::StdC::ReduceFloatString(char *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  undefined8 uVar17;
  
  if (param_2 == 0xffffffffffffffff) {
    param_2 = strlen(param_1);
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar16 = (int)param_2;
  if (0 < iVar16) {
    iVar10 = -1;
    uVar6 = 0;
    uVar13 = 0xffffffff;
    do {
      while( true ) {
        iVar12 = (int)uVar13;
        iVar5 = (int)uVar6;
        if (param_1[uVar6] != 0x2e) break;
        uVar13 = uVar6 & 0xffffffff;
        uVar6 = uVar6 + 1;
        iVar12 = iVar5;
        if (iVar16 <= (int)uVar6) goto LAB_05355ed4;
      }
      if ((param_1[uVar6] & 0xdfU) == 0x45) {
        iVar10 = iVar5;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar16);
LAB_05355ed4:
    if (iVar12 != -1) {
      iVar5 = iVar16;
      if (iVar10 != -1) {
        iVar5 = iVar10;
      }
      iVar5 = iVar5 + -1;
      if ((iVar12 < iVar5) && (pcVar11 = param_1 + iVar5, param_1[iVar5] == '0')) {
        do {
          iVar16 = (int)param_2;
          if (iVar5 < iVar16) {
            uVar1 = ((iVar16 - iVar5) - 0x10U >> 4) + 1;
            iVar4 = uVar1 * 0x10;
            iVar10 = iVar5;
            if (0xe < (uint)((iVar16 + -1) - iVar5)) {
              uVar8 = 0;
              pcVar14 = pcVar11;
              pcVar15 = pcVar11 + 1;
              do {
                uVar17 = *(undefined8 *)pcVar15;
                uVar8 = uVar8 + 1;
                *(undefined8 *)(pcVar14 + 8) = *(undefined8 *)(pcVar15 + 8);
                *(undefined8 *)pcVar14 = uVar17;
                pcVar14 = pcVar14 + 0x10;
                pcVar15 = pcVar15 + 0x10;
              } while (uVar8 < uVar1);
              iVar10 = iVar4 + iVar5;
              if (iVar4 == iVar16 - iVar5) goto LAB_053560f8;
            }
            iVar4 = iVar10 + 1;
            param_1[iVar10] = param_1[(long)iVar10 + 1];
            if (iVar4 < iVar16) {
              iVar2 = iVar10 + 2;
              param_1[iVar4] = param_1[(long)iVar4 + 1];
              if (iVar2 < iVar16) {
                iVar4 = iVar10 + 3;
                param_1[iVar2] = param_1[(long)iVar2 + 1];
                if (iVar4 < iVar16) {
                  iVar2 = iVar10 + 4;
                  param_1[iVar4] = param_1[(long)iVar4 + 1];
                  if (iVar2 < iVar16) {
                    iVar4 = iVar10 + 5;
                    param_1[iVar2] = param_1[(long)iVar2 + 1];
                    if (iVar4 < iVar16) {
                      iVar2 = iVar10 + 6;
                      param_1[iVar4] = param_1[(long)iVar4 + 1];
                      if (iVar2 < iVar16) {
                        iVar4 = iVar10 + 7;
                        param_1[iVar2] = param_1[(long)iVar2 + 1];
                        if (iVar4 < iVar16) {
                          iVar2 = iVar10 + 8;
                          param_1[iVar4] = param_1[(long)iVar4 + 1];
                          if (iVar2 < iVar16) {
                            iVar4 = iVar10 + 9;
                            param_1[iVar2] = param_1[(long)iVar2 + 1];
                            if (iVar4 < iVar16) {
                              iVar2 = iVar10 + 10;
                              param_1[iVar4] = param_1[(long)iVar4 + 1];
                              if (iVar2 < iVar16) {
                                iVar4 = iVar10 + 0xb;
                                param_1[iVar2] = param_1[(long)iVar2 + 1];
                                if (iVar4 < iVar16) {
                                  iVar2 = iVar10 + 0xc;
                                  param_1[iVar4] = param_1[(long)iVar4 + 1];
                                  if (iVar2 < iVar16) {
                                    iVar4 = iVar10 + 0xd;
                                    param_1[iVar2] = param_1[(long)iVar2 + 1];
                                    if (iVar4 < iVar16) {
                                      iVar10 = iVar10 + 0xe;
                                      param_1[iVar4] = param_1[(long)iVar4 + 1];
                                      if (iVar10 < iVar16) {
                                        param_1[iVar10] = param_1[(long)iVar10 + 1];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_053560f8:
          iVar5 = iVar5 + -1;
          param_2 = param_2 - 1;
        } while ((iVar5 != iVar12) && (pcVar11 = pcVar11 + -1, *pcVar11 == '0'));
        iVar16 = (int)param_2 + -1;
        if (iVar16 == iVar12) {
LAB_05356204:
          param_1[iVar16] = '\0';
          param_2 = param_2 - 1;
        }
        if (param_2 == 0) {
LAB_05356160:
          param_1[1] = '\0';
          *param_1 = '0';
          return 1;
        }
      }
      else {
        iVar16 = iVar16 + -1;
        if (iVar16 == iVar12) goto LAB_05356204;
      }
      cVar9 = *param_1;
      goto LAB_05356128;
    }
  }
  sVar7 = 0;
  cVar9 = *param_1;
  cVar3 = cVar9;
  while (cVar3 == '0') {
    sVar7 = sVar7 + 1;
    if (sVar7 == param_2) goto LAB_05356160;
    cVar3 = param_1[sVar7];
  }
LAB_05356128:
  if ((cVar9 - 0x2eU & 0xfd) == 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      if (uVar6 == param_2) goto LAB_05356160;
    } while ((param_1[uVar6] - 0x2eU & 0xfd) == 0);
  }
  uVar6 = param_2;
  if (((2 < param_2) && (cVar9 == '0')) && (param_1[1] == '.')) {
    uVar6 = param_2 - 1;
    memmove(param_1,param_1 + 1,param_2);
  }
  return uVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ReduceFloatString(char16_t*, unsigned long) */

void EA::StdC::ReduceFloatString(wchar16 *param_1,ulong param_2)

{
  wchar16 wVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  wchar16 *pwVar6;
  byte local_48 [64];
  long local_8;
  
  if (param_2 < 0x3f) {
    param_2 = 0x3f;
  }
  wVar1 = *param_1;
  local_8 = ___stack_chk_guard;
  if (wVar1 == L'\0') {
    pbVar4 = local_48;
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = uVar3 + 1;
      local_48[uVar3] = (byte)wVar1;
      pbVar4 = local_48 + uVar3 + 1;
      wVar1 = param_1[uVar2];
      if (wVar1 == L'\0') break;
      uVar3 = uVar2;
    } while (uVar2 < param_2);
  }
  pbVar5 = local_48;
  *pbVar4 = 0;
  ReduceFloatString((char *)pbVar5,uVar2);
  wVar1 = (wchar16)local_48[0];
  pwVar6 = param_1;
  if (local_48[0] != 0) {
    do {
      param_1 = pwVar6 + 1;
      *pwVar6 = wVar1;
      pbVar5 = pbVar5 + 1;
      wVar1 = (wchar16)*pbVar5;
      pwVar6 = param_1;
    } while (wVar1 != L'\0');
  }
  *param_1 = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ReduceFloatString(char32_t*, unsigned long) */

void EA::StdC::ReduceFloatString(wchar32 *param_1,ulong param_2)

{
  wchar32 wVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  wchar32 *pwVar6;
  byte local_48 [64];
  long local_8;
  
  if (param_2 < 0x3f) {
    param_2 = 0x3f;
  }
  wVar1 = *param_1;
  local_8 = ___stack_chk_guard;
  if (wVar1 == L'\0') {
    pbVar4 = local_48;
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = uVar3 + 1;
      local_48[uVar3] = (byte)wVar1;
      pbVar4 = local_48 + uVar3 + 1;
      wVar1 = param_1[uVar2];
      if (wVar1 == L'\0') break;
      uVar3 = uVar2;
    } while (uVar2 < param_2);
  }
  pbVar5 = local_48;
  *pbVar4 = 0;
  ReduceFloatString((char *)pbVar5,uVar2);
  wVar1 = (wchar32)local_48[0];
  pwVar6 = param_1;
  if (local_48[0] != 0) {
    do {
      param_1 = pwVar6 + 1;
      *pwVar6 = wVar1;
      pbVar5 = pbVar5 + 1;
      wVar1 = (wchar32)*pbVar5;
      pwVar6 = param_1;
    } while (wVar1 != L'\0');
  }
  *param_1 = L'\0';
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool EA::StdC::Strlcpy<eastl::basic_string<char16_t, eastl::allocator>,
   wchar_t>(eastl::basic_string<char16_t, eastl::allocator>&, wchar_t const*, unsigned long) */

bool EA::StdC::Strlcpy<eastl::basic_string<char16_t,eastl::allocator>,wchar_t>
               (basic_string *param_1,wchar_t *param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  
  if (param_3 != 0xffffffffffffffff) {
    uVar1 = Internal::Strlcpy2Class<eastl::basic_string<char16_t,eastl::allocator>,char16_t,wchar_t>
            ::Strlcpy2Impl(param_1,param_2,param_3);
    return (bool)uVar1;
  }
  uVar2 = Strlen(param_2);
  uVar1 = Internal::Strlcpy2Class<eastl::basic_string<char16_t,eastl::allocator>,char16_t,wchar_t>::
          Strlcpy2Impl(param_1,param_2,uVar2);
  return (bool)uVar1;
}


/* EA::StdC::AtoI32(char const*) */

void EA::StdC::AtoI32(char *param_1)

{
  StrtoI32(param_1,(char **)0x0,10);
  return;
}


/* EA::StdC::AtoU32(char const*) */

void EA::StdC::AtoU32(char *param_1)

{
  StrtoU32(param_1,(char **)0x0,10);
  return;
}


/* EA::StdC::Atof(char const*) */

void EA::StdC::Atof(char *param_1)

{
  atof(param_1);
  return;
}


/* EA::StdC::Strlcpy(wchar_t*, wchar_t const*, unsigned long) */

long EA::StdC::Strlcpy(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar2 = param_2;
  if (param_3 == 0) {
LAB_05350924:
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
        goto LAB_05350924;
      }
      wVar1 = *pwVar2;
      *param_1 = wVar1;
      param_1 = param_1 + 1;
      pwVar3 = pwVar2 + 1;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
  }
  return ((long)pwVar3 - (long)param_2 >> 2) + -1;
}


/* bool EA::StdC::Strlcpy<EA::IO::Path::PathString8, wchar_t const>(EA::IO::Path::PathString8&,
   wchar_t const*, unsigned long) */

bool EA::StdC::Strlcpy<EA::IO::Path::PathString8,wchar_t_const>
               (PathString8 *param_1,wchar_t *param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  
  if (param_3 != 0xffffffffffffffff) {
    uVar1 = Internal::Strlcpy2Class<EA::IO::Path::PathString8,char,wchar_t_const>::Strlcpy2Impl
                      (param_1,param_2,param_3);
    return (bool)uVar1;
  }
  uVar2 = Strlen(param_2);
  uVar1 = Internal::Strlcpy2Class<EA::IO::Path::PathString8,char,wchar_t_const>::Strlcpy2Impl
                    (param_1,param_2,uVar2);
  return (bool)uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, char const*, ...) */

void EA::StdC::Cscanf(_func_int_ReadAction_int_void_ptr *param_1,void *param_2,char *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ScanfLocal::VscanfCore();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fscanf(__sFILE*, char const*, ...) */

void EA::StdC::Fscanf(__sFILE *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader8,param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Scanf(char const*, ...) */

void EA::StdC::Scanf(char *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader8,&__sF,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sscanf(char const*, char const*, ...) */

void EA::StdC::Sscanf(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  SscanfContext32 aSStack_e8 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::SscanfContext32::SscanfContext32(aSStack_e8,(wchar32 *)param_1);
  local_100 = &local_30;
  uStack_f8 = 0xffffff80ffffffd0;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  ScanfLocal::VscanfCore(ScanfLocal::StringReader8,aSStack_e8,param_2,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, char const*, std::__va_list)
    */

void EA::StdC::Vcscanf(void)

{
  ScanfLocal::VscanfCore();
  return;
}


/* EA::StdC::Vfscanf(__sFILE*, char const*, std::__va_list) */

void EA::StdC::Vfscanf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader8,param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vscanf(char const*, std::__va_list) */

void EA::StdC::Vscanf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader8,&__sF,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vsscanf(char const*, char const*, std::__va_list) */

void EA::StdC::Vsscanf(wchar32 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  SscanfContext32 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScanfLocal::SscanfContext32::SscanfContext32(aSStack_18,param_1);
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  ScanfLocal::VscanfCore(ScanfLocal::StringReader8,aSStack_18,param_2,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, char16_t const*, ...) */

void EA::StdC::Cscanf(_func_int_ReadAction_int_void_ptr *param_1,void *param_2,wchar16 *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ScanfLocal::VscanfCore();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fscanf(__sFILE*, char16_t const*, ...) */

void EA::StdC::Fscanf(__sFILE *param_1,wchar16 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader16,param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Scanf(char16_t const*, ...) */

void EA::StdC::Scanf(wchar16 *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader16,&__sF,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sscanf(char16_t const*, char16_t const*, ...) */

void EA::StdC::Sscanf(wchar16 *param_1,wchar16 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  SscanfContext32 aSStack_e8 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::SscanfContext32::SscanfContext32(aSStack_e8,(wchar32 *)param_1);
  local_100 = &local_30;
  uStack_f8 = 0xffffff80ffffffd0;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  ScanfLocal::VscanfCore(ScanfLocal::StringReader16,aSStack_e8,param_2,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, char16_t const*,
   std::__va_list) */

void EA::StdC::Vcscanf(void)

{
  ScanfLocal::VscanfCore();
  return;
}


/* EA::StdC::Vfscanf(__sFILE*, char16_t const*, std::__va_list) */

void EA::StdC::Vfscanf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader16,param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vscanf(char16_t const*, std::__va_list) */

void EA::StdC::Vscanf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader16,&__sF,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vsscanf(char16_t const*, char16_t const*, std::__va_list) */

void EA::StdC::Vsscanf(wchar32 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  SscanfContext32 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScanfLocal::SscanfContext32::SscanfContext32(aSStack_18,param_1);
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  ScanfLocal::VscanfCore(ScanfLocal::StringReader16,aSStack_18,param_2,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, char32_t const*, ...) */

void EA::StdC::Cscanf(_func_int_ReadAction_int_void_ptr *param_1,void *param_2,wchar32 *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ScanfLocal::VscanfCore();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fscanf(__sFILE*, char32_t const*, ...) */

void EA::StdC::Fscanf(__sFILE *param_1,wchar32 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader32,param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Scanf(char32_t const*, ...) */

void EA::StdC::Scanf(wchar32 *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader32,&__sF,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sscanf(char32_t const*, char32_t const*, ...) */

void EA::StdC::Sscanf(wchar32 *param_1,wchar32 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  SscanfContext32 aSStack_e8 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  ScanfLocal::SscanfContext32::SscanfContext32(aSStack_e8,param_1);
  local_100 = &local_30;
  uStack_f8 = 0xffffff80ffffffd0;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  ScanfLocal::VscanfCore(ScanfLocal::StringReader32,aSStack_e8,param_2,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, char32_t const*,
   std::__va_list) */

void EA::StdC::Vcscanf(void)

{
  ScanfLocal::VscanfCore();
  return;
}


/* EA::StdC::Vfscanf(__sFILE*, char32_t const*, std::__va_list) */

void EA::StdC::Vfscanf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader32,param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vscanf(char32_t const*, std::__va_list) */

void EA::StdC::Vscanf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  ScanfLocal::VscanfCore(ScanfLocal::FILEReader32,&__sF,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vsscanf(char32_t const*, char32_t const*, std::__va_list) */

void EA::StdC::Vsscanf(wchar32 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  SscanfContext32 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScanfLocal::SscanfContext32::SscanfContext32(aSStack_18,param_1);
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  ScanfLocal::VscanfCore(ScanfLocal::StringReader32,aSStack_18,param_2,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, wchar_t const*,
   std::__va_list) */

void EA::StdC::Vcscanf(void)

{
  Vcscanf();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cscanf(int (*)(EA::StdC::ReadAction, int, void*), void*, wchar_t const*, ...) */

void EA::StdC::Cscanf(_func_int_ReadAction_int_void_ptr *param_1,void *param_2,wchar_t *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vcscanf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vfscanf(__sFILE*, wchar_t const*, std::__va_list) */

void EA::StdC::Vfscanf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vfscanf(param_1,param_2,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fscanf(__sFILE*, wchar_t const*, ...) */

void EA::StdC::Fscanf(__sFILE *param_1,wchar_t *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vfscanf(param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vscanf(wchar_t const*, std::__va_list) */

void EA::StdC::Vscanf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  Vscanf(param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Scanf(wchar_t const*, ...) */

void EA::StdC::Scanf(wchar_t *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vscanf(param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vsscanf(wchar_t const*, wchar_t const*, std::__va_list) */

void EA::StdC::Vsscanf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vsscanf(param_1,param_2,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sscanf(wchar_t const*, wchar_t const*, ...) */

void EA::StdC::Sscanf(wchar_t *param_1,wchar_t *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vsscanf(param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcprintf(int (*)(char const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, char const*, std::__va_list) */

void EA::StdC::Vcprintf(void)

{
  SprintfLocal::VprintfCore();
  return;
}


/* EA::StdC::Vfprintf(__sFILE*, char const*, std::__va_list) */

void EA::StdC::Vfprintf(code *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if ((param_1 != wcschr) && (param_1 != getaddrinfo)) {
    local_20 = *param_3;
    uStack_18 = param_3[1];
    local_10 = param_3[2];
    uStack_8 = param_3[3];
    SprintfLocal::VprintfCore(SprintfLocal::FILEWriter8,param_1,param_2,&local_20);
    return;
  }
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  SprintfLocal::VprintfCore(SprintfLocal::PlatformLogWriter,0,param_2,&local_20);
  return;
}


/* EA::StdC::Vprintf(char const*, std::__va_list) */

void EA::StdC::Vprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  SprintfLocal::VprintfCore(SprintfLocal::PlatformLogWriter,0,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vsnprintf(char*, unsigned long, char const*, std::__va_list) */

void EA::StdC::Vsnprintf(char *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  SnprintfContext8 aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (char *)0x0) {
    SprintfLocal::SnprintfContext8::SnprintfContext8(aSStack_28,(char *)0x0,0,0);
    local_50 = *param_4;
    uStack_48 = param_4[1];
    local_40 = param_4[2];
    uStack_38 = param_4[3];
    SprintfLocal::VprintfCore(SprintfLocal::StringWriter8,aSStack_28,param_3,&local_50);
  }
  else {
    SprintfLocal::SnprintfContext8::SnprintfContext8(aSStack_28,param_1,0,param_2);
    local_50 = *param_4;
    uStack_48 = param_4[1];
    local_40 = param_4[2];
    uStack_38 = param_4[3];
    iVar1 = SprintfLocal::VprintfCore(SprintfLocal::StringWriter8,aSStack_28,param_3,&local_50);
    if (-1 < iVar1) {
      if ((ulong)(long)iVar1 < param_2) {
        param_1[iVar1] = '\0';
      }
      else if (param_2 != 0) {
        param_1[param_2 - 1] = '\0';
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vsprintf(char*, char const*, std::__va_list) */

void EA::StdC::Vsprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vsnprintf(param_1,0xffffffffffffffff,param_2,&local_20);
  return;
}


/* EA::StdC::Vscprintf(char const*, std::__va_list) */

void EA::StdC::Vscprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  Vsnprintf(0,0,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cprintf(int (*)(char const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, char const*, ...) */

void EA::StdC::Cprintf(_func_int_char_ptr_ulong_void_ptr_WriteFunctionState *param_1,void *param_2,
                      char *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  SprintfLocal::VprintfCore();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fprintf(__sFILE*, char const*, ...) */

void EA::StdC::Fprintf(__sFILE *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  if ((param_1 == (__sFILE *)wcschr) || (param_1 == (__sFILE *)getaddrinfo)) {
    uStack_e8 = 0xffffff80ffffffd0;
    SprintfLocal::VprintfCore(SprintfLocal::PlatformLogWriter,0,param_2,&local_100);
  }
  else {
    uStack_e8 = 0xffffff80ffffffd0;
    SprintfLocal::VprintfCore(SprintfLocal::FILEWriter8,param_1,param_2,&local_100);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Printf(char const*, ...) */

void EA::StdC::Printf(char *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  SprintfLocal::VprintfCore(SprintfLocal::PlatformLogWriter,0,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sprintf(char*, char const*, ...) */

void EA::StdC::Sprintf(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vsnprintf(param_1,0x7fffffff,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Snprintf(char*, unsigned long, char const*, ...) */

void EA::StdC::Snprintf(char *param_1,ulong param_2,char *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vsnprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcprintf(int (*)(char16_t const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, char16_t const*, std::__va_list) */

void EA::StdC::Vcprintf(void)

{
  SprintfLocal::VprintfCore();
  return;
}


/* EA::StdC::Vfprintf(__sFILE*, char16_t const*, std::__va_list) */

void EA::StdC::Vfprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter16,param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vprintf(char16_t const*, std::__va_list) */

void EA::StdC::Vprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter16,wcschr,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vsnprintf(char16_t*, unsigned long, char16_t const*, std::__va_list) */

void EA::StdC::Vsnprintf(wchar32 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  SnprintfContext32 aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar32 *)0x0) {
    SprintfLocal::SnprintfContext32::SnprintfContext32(aSStack_20,(wchar32 *)0x0,0,0);
    local_40 = *param_4;
    uStack_38 = param_4[1];
    local_30 = param_4[2];
    uStack_28 = param_4[3];
    SprintfLocal::VprintfCore(SprintfLocal::StringWriter16,aSStack_20,param_3,&local_40);
  }
  else {
    SprintfLocal::SnprintfContext32::SnprintfContext32(aSStack_20,param_1,0,param_2);
    local_40 = *param_4;
    uStack_38 = param_4[1];
    local_30 = param_4[2];
    uStack_28 = param_4[3];
    iVar1 = SprintfLocal::VprintfCore(SprintfLocal::StringWriter16,aSStack_20,param_3,&local_40);
    if (-1 < iVar1) {
      if ((ulong)(long)iVar1 < param_2) {
        *(undefined2 *)((long)param_1 + (long)iVar1 * 2) = 0;
      }
      else if (param_2 != 0) {
        *(undefined2 *)((long)param_1 + param_2 * 2 + -2) = 0;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vsprintf(char16_t*, char16_t const*, std::__va_list) */

void EA::StdC::Vsprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vsnprintf(param_1,0xffffffffffffffff,param_2,&local_20);
  return;
}


/* EA::StdC::Vscprintf(char16_t const*, std::__va_list) */

void EA::StdC::Vscprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  Vsnprintf(0,0,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cprintf(int (*)(char16_t const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, char16_t const*, ...) */

void EA::StdC::Cprintf(_func_int_wchar16_ptr_ulong_void_ptr_WriteFunctionState *param_1,
                      void *param_2,wchar16 *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  SprintfLocal::VprintfCore();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fprintf(__sFILE*, char16_t const*, ...) */

void EA::StdC::Fprintf(__sFILE *param_1,wchar16 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter16,param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Printf(char16_t const*, ...) */

void EA::StdC::Printf(wchar16 *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter16,wcschr,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sprintf(char16_t*, char16_t const*, ...) */

void EA::StdC::Sprintf(wchar16 *param_1,wchar16 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vsnprintf(param_1,0x7fffffff,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Snprintf(char16_t*, unsigned long, char16_t const*, ...) */

void EA::StdC::Snprintf(wchar16 *param_1,ulong param_2,wchar16 *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vsnprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcprintf(int (*)(char32_t const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, char32_t const*, std::__va_list) */

void EA::StdC::Vcprintf(void)

{
  SprintfLocal::VprintfCore();
  return;
}


/* EA::StdC::Vfprintf(__sFILE*, char32_t const*, std::__va_list) */

void EA::StdC::Vfprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter32,param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vprintf(char32_t const*, std::__va_list) */

void EA::StdC::Vprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter32,wcschr,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vsnprintf(char32_t*, unsigned long, char32_t const*, std::__va_list) */

void EA::StdC::Vsnprintf(wchar32 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  SnprintfContext32 aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar32 *)0x0) {
    SprintfLocal::SnprintfContext32::SnprintfContext32(aSStack_20,(wchar32 *)0x0,0,0);
    local_40 = *param_4;
    uStack_38 = param_4[1];
    local_30 = param_4[2];
    uStack_28 = param_4[3];
    SprintfLocal::VprintfCore(SprintfLocal::StringWriter32,aSStack_20,param_3,&local_40);
  }
  else {
    SprintfLocal::SnprintfContext32::SnprintfContext32(aSStack_20,param_1,0,param_2);
    local_40 = *param_4;
    uStack_38 = param_4[1];
    local_30 = param_4[2];
    uStack_28 = param_4[3];
    iVar1 = SprintfLocal::VprintfCore(SprintfLocal::StringWriter32,aSStack_20,param_3,&local_40);
    if (-1 < iVar1) {
      if ((ulong)(long)iVar1 < param_2) {
        param_1[iVar1] = L'\0';
      }
      else if (param_2 != 0) {
        param_1[param_2 - 1] = L'\0';
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vsprintf(char32_t*, char32_t const*, std::__va_list) */

void EA::StdC::Vsprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vsnprintf(param_1,0xffffffffffffffff,param_2,&local_20);
  return;
}


/* EA::StdC::Vscprintf(char32_t const*, std::__va_list) */

void EA::StdC::Vscprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  Vsnprintf(0,0,param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cprintf(int (*)(char32_t const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, char32_t const*, ...) */

void EA::StdC::Cprintf(_func_int_wchar32_ptr_ulong_void_ptr_WriteFunctionState *param_1,
                      void *param_2,wchar32 *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  SprintfLocal::VprintfCore();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fprintf(__sFILE*, char32_t const*, ...) */

void EA::StdC::Fprintf(__sFILE *param_1,wchar32 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter32,param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Printf(char32_t const*, ...) */

void EA::StdC::Printf(wchar32 *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  SprintfLocal::VprintfCore(SprintfLocal::FILEWriter32,wcschr,param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sprintf(char32_t*, char32_t const*, ...) */

void EA::StdC::Sprintf(wchar32 *param_1,wchar32 *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vsnprintf(param_1,0x7fffffff,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Snprintf(char32_t*, unsigned long, char32_t const*, ...) */

void EA::StdC::Snprintf(wchar32 *param_1,ulong param_2,wchar32 *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vsnprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vcprintf(int (*)(char const*, unsigned long, void*), void*, char const*,
   std::__va_list) */

void EA::StdC::Vcprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                       )

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_40 = *param_4;
  uStack_38 = param_4[1];
  local_30 = param_4[2];
  uStack_28 = param_4[3];
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  local_10 = param_2;
  SprintfLocal::VprintfCore(FUN_05404644,&local_18,param_3,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cprintf(int (*)(char const*, unsigned long, void*), void*, char const*, ...) */

void EA::StdC::Cprintf(_func_int_char_ptr_ulong_void_ptr *param_1,void *param_2,char *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vcprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Vcprintf(int (*)(char16_t const*, unsigned long, void*), void*, char16_t const*,
   std::__va_list) */

void EA::StdC::Vcprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                       )

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_40 = *param_4;
  uStack_38 = param_4[1];
  local_30 = param_4[2];
  uStack_28 = param_4[3];
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  local_10 = param_2;
  SprintfLocal::VprintfCore(FUN_05404660,&local_18,param_3,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cprintf(int (*)(char16_t const*, unsigned long, void*), void*, char16_t const*, ...) */

void EA::StdC::Cprintf(_func_int_wchar16_ptr_ulong_void_ptr *param_1,void *param_2,wchar16 *param_3,
                      ...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vcprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Vcprintf(int (*)(wchar_t const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, wchar_t const*, std::__va_list) */

void EA::StdC::Vcprintf(void)

{
  Vcprintf();
  return;
}


/* EA::StdC::Vfprintf(__sFILE*, wchar_t const*, std::__va_list) */

void EA::StdC::Vfprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vfprintf(param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vprintf(wchar_t const*, std::__va_list) */

void EA::StdC::Vprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  Vprintf(param_1,&local_20);
  return;
}


/* EA::StdC::Vsprintf(wchar_t*, wchar_t const*, std::__va_list) */

void EA::StdC::Vsprintf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  Vsprintf(param_1,param_2,&local_20);
  return;
}


/* EA::StdC::Vsnprintf(wchar_t*, unsigned long, wchar_t const*, std::__va_list) */

void EA::StdC::Vsnprintf(void)

{
  Vsnprintf();
  return;
}


/* EA::StdC::Vscprintf(wchar_t const*, std::__va_list) */

void EA::StdC::Vscprintf(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_10 = param_2[2];
  uStack_8 = param_2[3];
  Vscprintf(param_1,&local_20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Cprintf(int (*)(wchar_t const*, unsigned long, void*, EA::StdC::WriteFunctionState),
   void*, wchar_t const*, ...) */

void EA::StdC::Cprintf(_func_int_wchar_t_ptr_ulong_void_ptr_WriteFunctionState *param_1,
                      void *param_2,wchar_t *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vcprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Fprintf(__sFILE*, wchar_t const*, ...) */

void EA::StdC::Fprintf(__sFILE *param_1,wchar_t *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vfprintf(param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Printf(wchar_t const*, ...) */

void EA::StdC::Printf(wchar_t *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_100 = auStack_40;
  uStack_f8 = 0xffffff80ffffffc8;
  local_110 = (undefined1 *)register0x00000008;
  puStack_108 = (undefined1 *)register0x00000008;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vprintf(param_1,&local_110);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Sprintf(wchar_t*, wchar_t const*, ...) */

void EA::StdC::Sprintf(wchar_t *param_1,wchar_t *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Vsprintf(param_1,param_2,&local_100);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::Snprintf(wchar_t*, unsigned long, wchar_t const*, ...) */

void EA::StdC::Snprintf(wchar_t *param_1,ulong param_2,wchar_t *param_3,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Vsnprintf();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::StdC::Init() */

void EA::StdC::Init(void)

{
  FUN_054061c0(0);
  return;
}


/* EA::StdC::Shutdown() */

int EA::StdC::Shutdown(void)

{
  int iVar1;
  
  iVar1 = 0x6c45d10;
  if ((DAT_06c45d18 != 0) && (iVar1 = DAT_06c45d14, DAT_06c45d14 == 0)) {
    iVar1 = pthread_key_delete(DAT_06c45d10);
    return iVar1;
  }
  return iVar1;
}


/* EA::StdC::SetAssertionsEnabled(bool) */

void EA::StdC::SetAssertionsEnabled(bool param_1)

{
  gAssertionsEnabled = param_1;
  return;
}


/* EA::StdC::GetAssertionsEnabled() */

undefined1 EA::StdC::GetAssertionsEnabled(void)

{
  return gAssertionsEnabled;
}


/* EA::StdC::UTF8IsFollowByte(char) */

bool EA::StdC::UTF8IsFollowByte(char param_1)

{
  return (byte)(param_1 + 0x80U) < 0x40;
}


/* EA::StdC::UTF8Validate(char const*, unsigned long) */

bool EA::StdC::UTF8Validate(char *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(param_1 + param_2);
joined_r0x0540c250:
  if (param_1 < pbVar1) {
    do {
      bVar2 = *param_1;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) goto code_r0x0540c27c;
        if (bVar2 < 0xf0) {
          if (((((long)pbVar1 - (long)param_1 < 3) || (0x3f < (byte)(param_1[1] ^ 0x80U))) ||
              (0x3f < (byte)(param_1[2] ^ 0x80U))) || ((bVar2 == 0xe0 && ((byte)param_1[1] < 0xa0)))
             ) break;
          param_1 = param_1 + 3;
        }
        else if (bVar2 < 0xf8) {
          if (((((long)pbVar1 - (long)param_1 < 4) || (0x3f < (byte)(param_1[1] ^ 0x80U))) ||
              (0x3f < (byte)(param_1[2] ^ 0x80U))) ||
             ((0x3f < (byte)(param_1[3] ^ 0x80U) || ((bVar2 == 0xf0 && ((byte)param_1[1] < 0x90)))))
             ) break;
          param_1 = param_1 + 4;
        }
        else if (bVar2 < 0xfc) {
          if (((((long)pbVar1 - (long)param_1 < 5) || (0x3f < (byte)(param_1[1] ^ 0x80U))) ||
              ((0x3f < (byte)(param_1[2] ^ 0x80U) ||
               ((0x3f < (byte)(param_1[3] ^ 0x80U) || (0x3f < (byte)(param_1[4] ^ 0x80U))))))) ||
             ((bVar2 == 0xf8 && ((byte)param_1[1] < 0x88)))) break;
          param_1 = param_1 + 5;
        }
        else {
          if (((((0xfd < bVar2) || ((long)pbVar1 - (long)param_1 < 6)) ||
               (0x3f < (byte)(param_1[1] ^ 0x80U))) ||
              ((0x3f < (byte)(param_1[2] ^ 0x80U) || (0x3f < (byte)(param_1[3] ^ 0x80U))))) ||
             (((0x3f < (byte)(param_1[4] ^ 0x80U) || (0x3f < (byte)(param_1[5] ^ 0x80U))) ||
              ((bVar2 == 0xfc && ((byte)param_1[1] < 0x84)))))) break;
          param_1 = param_1 + 6;
        }
      }
      else {
        param_1 = param_1 + 1;
      }
      if (pbVar1 <= param_1) break;
    } while( true );
  }
LAB_0540c2a4:
  return (byte *)param_1 == pbVar1;
code_r0x0540c27c:
  if (((long)pbVar1 - (long)param_1 < 2) || (0x3f < (byte)(param_1[1] ^ 0x80U))) goto LAB_0540c2a4;
  param_1 = param_1 + 2;
  goto joined_r0x0540c250;
}


/* EA::StdC::UTF8Increment(char const*, unsigned long) */

void EA::StdC::UTF8Increment(char *param_1,ulong param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  do {
    param_2 = param_2 - 1;
    pbVar2 = (byte *)param_1;
    if (param_2 == 0xffffffffffffffff) {
      return;
    }
    while (bVar1 = *pbVar2, bVar1 < 0xc2) {
      param_2 = param_2 - 1;
      pbVar2 = pbVar2 + 1;
      if (param_2 == 0xffffffffffffffff) {
        return;
      }
    }
    if (bVar1 < 0xe0) {
      param_1 = (char *)(pbVar2 + 2);
    }
    else if (bVar1 < 0xf0) {
      param_1 = (char *)(pbVar2 + 3);
    }
    else if (bVar1 < 0xf8) {
      param_1 = (char *)(pbVar2 + 4);
    }
    else if (bVar1 < 0xfc) {
      param_1 = (char *)(pbVar2 + 5);
    }
    else {
      param_1 = (char *)(pbVar2 + 6);
      if (0xfd < bVar1) {
        param_1 = (char *)(pbVar2 + 1);
      }
    }
  } while( true );
}


/* EA::StdC::UTF8Decrement(char const*, unsigned long) */

char * EA::StdC::UTF8Decrement(char *param_1,ulong param_2)

{
  char cVar1;
  
  while (param_2 != 0) {
    param_1 = param_1 + -1;
    cVar1 = UTF8IsFollowByte(*param_1);
    if (cVar1 == '\0') {
      param_2 = param_2 - 1;
    }
  }
  return param_1;
}


/* EA::StdC::UTF8CharSize(char const*) */

undefined8 EA::StdC::UTF8CharSize(char *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_1;
  uVar2 = 1;
  if (0xc2 < bVar1) {
    uVar2 = 2;
    if ((0xdf < bVar1) && (uVar2 = 3, 0xef < bVar1)) {
      uVar2 = 4;
      if ((0xf7 < bVar1) && (uVar2 = 5, 0xfb < bVar1)) {
        uVar2 = 6;
        if (0xfd < bVar1) {
          uVar2 = 1;
        }
        return uVar2;
      }
    }
  }
  return uVar2;
}


/* EA::StdC::UTF8CharSize(char16_t) */

undefined8 EA::StdC::UTF8CharSize(wchar16 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((0x7f < (ushort)param_1) && (uVar1 = 2, 0x7ff < (ushort)param_1)) {
    uVar1 = 3;
  }
  return uVar1;
}


/* EA::StdC::UTF8CharSize(char32_t) */

undefined8 EA::StdC::UTF8CharSize(wchar32 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((((0x7f < (uint)param_1) && (uVar1 = 2, 0x7ff < (uint)param_1)) &&
      (uVar1 = 3, 0xffff < (uint)param_1)) &&
     ((uVar1 = 4, 0x1fffff < (uint)param_1 && (uVar1 = 5, 0x3ffffff < (uint)param_1)))) {
    uVar1 = 6;
    if (param_1 < L'\0') {
      uVar1 = 1;
    }
    return uVar1;
  }
  return uVar1;
}


/* EA::StdC::UTF8ReadChar(char const*, char const**) */

ushort EA::StdC::UTF8ReadChar(char *param_1,char **param_2)

{
  byte bVar1;
  ushort uVar2;
  char *pcVar3;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      pcVar3 = param_1 + 2;
      uVar2 = (byte)param_1[1] & 0x3f | (bVar1 & 0x1f) << 6;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      pcVar3 = param_1 + 3;
      uVar2 = (byte)param_1[2] & 0x3f | (ushort)bVar1 << 0xc | ((byte)param_1[1] & 0x3f) << 6;
    }
    else {
      pcVar3 = param_1 + 4;
      uVar2 = (byte)param_1[3] & 0x3f | (ushort)(byte)param_1[1] << 0xc |
              ((byte)param_1[2] & 0x3f) << 6;
    }
  }
  else {
    uVar2 = (ushort)bVar1;
    pcVar3 = param_1 + 1;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = pcVar3;
  }
  return uVar2;
}


/* EA::StdC::UTF8WriteChar(char*, char16_t) */

char * EA::StdC::UTF8WriteChar(char *param_1,wchar16 param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if ((ushort)param_2 < 0x80) {
    *param_1 = bVar1;
    return param_1 + 1;
  }
  if (0x7ff < (ushort)param_2) {
    param_1[1] = (byte)((ushort)param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    *param_1 = (byte)((int)(uint)(ushort)param_2 >> 0xc) | 0xe0;
    return param_1 + 3;
  }
  *param_1 = (byte)((int)(uint)(ushort)param_2 >> 6) | 0xc0;
  param_1[1] = bVar1 & 0x3f | 0x80;
  return param_1 + 2;
}


/* EA::StdC::UTF8WriteChar(char*, char32_t) */

char * EA::StdC::UTF8WriteChar(char *param_1,wchar32 param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if ((uint)param_2 < 0x80) {
    *param_1 = bVar1;
    return param_1 + 1;
  }
  if (0x7ff < (uint)param_2) {
    if (0xffff < (uint)param_2) {
      *param_1 = (byte)((uint)param_2 >> 0x12) | 0xf0;
      param_1[1] = (byte)((uint)param_2 >> 0xc) & 0x3f | 0x80;
      param_1[2] = (byte)((uint)param_2 >> 6) & 0x3f | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
      return param_1 + 4;
    }
    param_1[1] = (byte)((uint)param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    *param_1 = (byte)((uint)param_2 >> 0xc) | 0xe0;
    return param_1 + 3;
  }
  *param_1 = (byte)((uint)param_2 >> 6) | 0xc0;
  param_1[1] = bVar1 & 0x3f | 0x80;
  return param_1 + 2;
}


/* EA::StdC::GetTextLine(char const*, char const*, char const**) */

void EA::StdC::GetTextLine(char *param_1,char *param_2,char **param_3)

{
  if (param_1 < param_2) {
    do {
      if ((*param_1 == 0xd) || (*param_1 == 10)) {
        if (param_3 == (char **)0x0) {
          return;
        }
        *param_3 = param_1 + 1;
        if (param_2 <= param_1 + 1) {
          return;
        }
        if ((byte)(*param_1 ^ param_1[1]) != 7) {
          return;
        }
        *param_3 = param_1 + 2;
        return;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    if (param_3 != (char **)0x0) {
      *param_3 = param_1;
      return;
    }
  }
  else if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  return;
}


/* EA::StdC::GetTextLine(char16_t const*, char16_t const*, char16_t const**) */

void EA::StdC::GetTextLine(wchar16 *param_1,wchar16 *param_2,wchar16 **param_3)

{
  if (param_1 < param_2) {
    do {
      if ((*param_1 == L'\r') || (*param_1 == L'\n')) {
        if (param_3 == (wchar16 **)0x0) {
          return;
        }
        *param_3 = param_1 + 1;
        if (param_2 <= param_1 + 1) {
          return;
        }
        if ((wchar16)(*param_1 ^ param_1[1]) != 7) {
          return;
        }
        *param_3 = param_1 + 2;
        return;
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
    if (param_3 != (wchar16 **)0x0) {
      *param_3 = param_1;
      return;
    }
  }
  else if (param_3 != (wchar16 **)0x0) {
    *param_3 = param_2;
  }
  return;
}


/* EA::StdC::GetTextLine(char32_t const*, char32_t const*, char32_t const**) */

void EA::StdC::GetTextLine(wchar32 *param_1,wchar32 *param_2,wchar32 **param_3)

{
  if (param_1 < param_2) {
    do {
      if ((*param_1 == L'\r') || (*param_1 == L'\n')) {
        if (param_3 == (wchar32 **)0x0) {
          return;
        }
        *param_3 = param_1 + 1;
        if (param_2 <= param_1 + 1) {
          return;
        }
        if ((*param_1 ^ param_1[1]) != 7) {
          return;
        }
        *param_3 = param_1 + 2;
        return;
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
    if (param_3 != (wchar32 **)0x0) {
      *param_3 = param_1;
      return;
    }
  }
  else if (param_3 != (wchar32 **)0x0) {
    *param_3 = param_2;
  }
  return;
}


/* EA::StdC::ParseDelimitedText(char const*, char const*, char, char const*&, char const*&, char
   const**) */

undefined8
EA::StdC::ParseDelimitedText
          (char *param_1,char *param_2,char param_3,char **param_4,char **param_5,char **param_6)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  *param_4 = param_1;
  if (param_1 < param_2) {
    if ((*param_1 == '\t') || (*param_1 == ' ')) {
      pcVar3 = param_1 + 1;
      do {
        param_1 = pcVar3;
        *param_4 = param_1;
        if (param_1 == param_2) break;
        pcVar3 = param_1 + 1;
      } while ((*param_1 == '\t') || (*param_1 == ' '));
      *param_5 = param_1;
      if (param_2 <= param_1) goto LAB_0540ca60;
    }
    else {
      *param_5 = param_1;
    }
    if (param_3 == ' ') {
      bVar5 = 0;
      do {
        cVar2 = *param_1;
        pcVar3 = param_1 + 1;
        if (cVar2 == '\t' || cVar2 == ' ') {
LAB_0540cac0:
          if ((!(bool)(bVar5 & 1)) || (pcVar3 == param_2)) {
            if (param_6 != (char **)0x0) {
              *param_6 = *param_5;
            }
            goto LAB_0540cad4;
          }
        }
        else {
          if (pcVar3 == param_2) {
            *param_5 = pcVar3;
            goto LAB_0540cac0;
          }
          if (cVar2 == '\"') {
            bVar5 = bVar5 + 1;
          }
        }
        param_1 = *param_5 + 1;
        *param_5 = param_1;
      } while (param_1 < param_2);
    }
    else {
      bVar5 = 0;
      do {
        pcVar3 = param_1 + 1;
        if (*param_1 == param_3) {
LAB_0540c9b0:
          if ((!(bool)(bVar5 & 1)) || (pcVar3 == param_2)) {
            if (param_6 != (char **)0x0) {
              *param_6 = *param_5;
            }
            pcVar3 = *param_5;
            if (pcVar3 == param_2) goto LAB_0540cad4;
            pcVar4 = *param_4;
            if (pcVar3 == pcVar4) goto LAB_0540ca2c;
            if ((pcVar3[-1] != '\t') && (pcVar3[-1] != ' ')) goto LAB_0540ca24;
            pcVar3 = pcVar3 + -1;
            goto LAB_0540c9f4;
          }
        }
        else {
          if (pcVar3 == param_2) {
            *param_5 = pcVar3;
            goto LAB_0540c9b0;
          }
          if (*param_1 == '\"') {
            bVar5 = bVar5 + 1;
          }
        }
        param_1 = *param_5 + 1;
        *param_5 = param_1;
      } while (param_1 < param_2);
    }
  }
  else {
    *param_5 = param_1;
  }
LAB_0540ca60:
  if (param_6 != (char **)0x0) {
    *param_6 = param_1;
  }
  return 0;
LAB_0540cad4:
  pcVar4 = *param_4;
  goto LAB_0540ca24;
  while( true ) {
    pcVar1 = pcVar3 + -1;
    pcVar3 = pcVar3 + -1;
    if ((*pcVar1 != '\t') && (pcVar4 = *param_4, *pcVar1 != ' ')) break;
LAB_0540c9f4:
    *param_5 = pcVar3;
    pcVar4 = pcVar3;
    if (*param_4 == pcVar3) break;
  }
LAB_0540ca24:
  if (param_2 == pcVar4) {
    return 1;
  }
LAB_0540ca2c:
  if ((*pcVar4 == '\"') && ((*param_5)[-1] == '\"')) {
    *param_4 = pcVar4 + 1;
    *param_5 = *param_5 + -1;
    return 1;
  }
  return 1;
}


/* EA::StdC::ParseDelimitedText(char16_t const*, char16_t const*, char16_t, char16_t const*&,
   char16_t const*&, char16_t const**) */

undefined8
EA::StdC::ParseDelimitedText
          (wchar16 *param_1,wchar16 *param_2,wchar16 param_3,wchar16 **param_4,wchar16 **param_5,
          wchar16 **param_6)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  byte bVar5;
  
  *param_4 = param_1;
  if (param_1 < param_2) {
    if ((*param_1 == L'\t') || (*param_1 == L' ')) {
      pwVar3 = param_1 + 1;
      do {
        param_1 = pwVar3;
        if (param_2 <= param_1) {
          *param_4 = param_1;
          *param_5 = param_1;
          goto LAB_0540cc5c;
        }
        pwVar3 = param_1 + 1;
      } while ((*param_1 == L'\t') || (*param_1 == L' '));
      *param_4 = param_1;
    }
    *param_5 = param_1;
    bVar5 = 0;
    if (param_3 == L' ') {
      bVar5 = 0;
      do {
        wVar2 = *param_1;
        pwVar3 = param_1 + 1;
        if (wVar2 == L'\t' || wVar2 == L' ') {
LAB_0540ccbc:
          if ((!(bool)(bVar5 & 1)) || (pwVar3 == param_2)) {
            if (param_6 != (wchar16 **)0x0) {
              *param_6 = *param_5;
            }
LAB_0540ccd0:
            pwVar4 = *param_4;
            goto LAB_0540cc20;
          }
        }
        else {
          if (pwVar3 == param_2) {
            *param_5 = pwVar3;
            goto LAB_0540ccbc;
          }
          if (wVar2 == L'\"') {
            bVar5 = bVar5 + 1;
          }
        }
        param_1 = *param_5 + 1;
        *param_5 = param_1;
      } while (param_1 < param_2);
    }
    else {
      do {
        pwVar3 = param_1 + 1;
        if (*param_1 == param_3) {
LAB_0540cbac:
          if ((!(bool)(bVar5 & 1)) || (pwVar3 == param_2)) {
            if (param_6 != (wchar16 **)0x0) {
              *param_6 = *param_5;
            }
            pwVar3 = *param_5;
            if (pwVar3 == param_2) goto LAB_0540ccd0;
            pwVar4 = *param_4;
            if (pwVar3 == pwVar4) goto LAB_0540cc28;
            if ((pwVar3[-1] != L'\t') && (pwVar3[-1] != L' ')) goto LAB_0540cc20;
            pwVar3 = pwVar3 + -1;
            goto LAB_0540cbf0;
          }
        }
        else {
          if (pwVar3 == param_2) {
            *param_5 = pwVar3;
            goto LAB_0540cbac;
          }
          if (*param_1 == L'\"') {
            bVar5 = bVar5 + 1;
          }
        }
        param_1 = *param_5 + 1;
        *param_5 = param_1;
      } while (param_1 < param_2);
    }
  }
  else {
    *param_5 = param_1;
  }
LAB_0540cc5c:
  if (param_6 != (wchar16 **)0x0) {
    *param_6 = param_1;
  }
  return 0;
  while( true ) {
    pwVar1 = pwVar3 + -1;
    pwVar3 = pwVar3 + -1;
    if ((*pwVar1 != L'\t') && (pwVar4 = *param_4, *pwVar1 != L' ')) break;
LAB_0540cbf0:
    *param_5 = pwVar3;
    pwVar4 = pwVar3;
    if (*param_4 == pwVar3) break;
  }
LAB_0540cc20:
  if (param_2 == pwVar4) {
    return 1;
  }
LAB_0540cc28:
  if ((*pwVar4 == L'\"') && ((*param_5)[-1] == L'\"')) {
    *param_4 = pwVar4 + 1;
    *param_5 = *param_5 + -1;
    return 1;
  }
  return 1;
}


/* EA::StdC::ParseDelimitedText(char32_t const*, char32_t const*, char32_t, char32_t const*&,
   char32_t const*&, char32_t const**) */

undefined8
EA::StdC::ParseDelimitedText
          (wchar32 *param_1,wchar32 *param_2,wchar32 param_3,wchar32 **param_4,wchar32 **param_5,
          wchar32 **param_6)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  byte bVar5;
  
  *param_4 = param_1;
  if (param_1 < param_2) {
    if ((*param_1 == L'\t') || (*param_1 == L' ')) {
      pwVar3 = param_1 + 1;
      do {
        param_1 = pwVar3;
        if (param_2 <= param_1) {
          *param_4 = param_1;
          *param_5 = param_1;
          goto LAB_0540ce5c;
        }
        pwVar3 = param_1 + 1;
      } while ((*param_1 == L'\t') || (*param_1 == L' '));
      *param_4 = param_1;
    }
    *param_5 = param_1;
    bVar5 = 0;
    if (param_3 == L' ') {
      bVar5 = 0;
      do {
        wVar2 = *param_1;
        pwVar3 = param_1 + 1;
        if (wVar2 == L'\t' || wVar2 == L' ') {
LAB_0540cebc:
          if ((!(bool)(bVar5 & 1)) || (pwVar3 == param_2)) {
            if (param_6 != (wchar32 **)0x0) {
              *param_6 = *param_5;
            }
LAB_0540ced0:
            pwVar4 = *param_4;
            goto LAB_0540ce20;
          }
        }
        else {
          if (pwVar3 == param_2) {
            *param_5 = pwVar3;
            goto LAB_0540cebc;
          }
          if (wVar2 == L'\"') {
            bVar5 = bVar5 + 1;
          }
        }
        param_1 = *param_5 + 1;
        *param_5 = param_1;
      } while (param_1 < param_2);
    }
    else {
      do {
        pwVar3 = param_1 + 1;
        if (*param_1 == param_3) {
LAB_0540cdac:
          if ((!(bool)(bVar5 & 1)) || (pwVar3 == param_2)) {
            if (param_6 != (wchar32 **)0x0) {
              *param_6 = *param_5;
            }
            pwVar3 = *param_5;
            if (pwVar3 == param_2) goto LAB_0540ced0;
            pwVar4 = *param_4;
            if (pwVar3 == pwVar4) goto LAB_0540ce28;
            if ((pwVar3[-1] != L'\t') && (pwVar3[-1] != L' ')) goto LAB_0540ce20;
            pwVar3 = pwVar3 + -1;
            goto LAB_0540cdf0;
          }
        }
        else {
          if (pwVar3 == param_2) {
            *param_5 = pwVar3;
            goto LAB_0540cdac;
          }
          if (*param_1 == L'\"') {
            bVar5 = bVar5 + 1;
          }
        }
        param_1 = *param_5 + 1;
        *param_5 = param_1;
      } while (param_1 < param_2);
    }
  }
  else {
    *param_5 = param_1;
  }
LAB_0540ce5c:
  if (param_6 != (wchar32 **)0x0) {
    *param_6 = param_1;
  }
  return 0;
  while( true ) {
    pwVar1 = pwVar3 + -1;
    pwVar3 = pwVar3 + -1;
    if ((*pwVar1 != L'\t') && (pwVar4 = *param_4, *pwVar1 != L' ')) break;
LAB_0540cdf0:
    *param_5 = pwVar3;
    pwVar4 = pwVar3;
    if (*param_4 == pwVar3) break;
  }
LAB_0540ce20:
  if (param_2 == pwVar4) {
    return 1;
  }
LAB_0540ce28:
  if ((*pwVar4 == L'\"') && ((*param_5)[-1] == L'\"')) {
    *param_4 = pwVar4 + 1;
    *param_5 = *param_5 + -1;
    return 1;
  }
  return 1;
}


/* EA::StdC::ConvertBinaryDataToASCIIArray(void const*, unsigned long, char*) */

void EA::StdC::ConvertBinaryDataToASCIIArray(void *param_1,ulong param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  
  pbVar1 = (byte *)((long)param_1 + param_2);
  pbVar3 = param_1;
  pbVar5 = (byte *)param_3;
  if (param_1 < pbVar1) {
    do {
      while( true ) {
        pbVar4 = pbVar3;
        bVar6 = (*pbVar4 >> 4) + 0x30;
        if (bVar6 < 0x3a) break;
        *pbVar5 = (*pbVar4 >> 4) + 0x37;
        bVar2 = *pbVar4 & 0xf;
        bVar6 = bVar2 + 0x30;
        if (bVar6 < 0x3a) goto LAB_0540cf48;
LAB_0540cf90:
        pbVar5[1] = bVar2 + 0x37;
        pbVar3 = pbVar4 + 1;
        pbVar5 = pbVar5 + 2;
        if (pbVar4 + 1 == pbVar1) goto LAB_0540cfa4;
      }
      *pbVar5 = bVar6;
      bVar2 = *pbVar4 & 0xf;
      bVar6 = bVar2 + 0x30;
      if (0x39 < bVar6) goto LAB_0540cf90;
LAB_0540cf48:
      pbVar5[1] = bVar6;
      pbVar3 = pbVar4 + 1;
      pbVar5 = pbVar5 + 2;
    } while (pbVar4 + 1 != pbVar1);
LAB_0540cfa4:
    param_3 = param_3 + (long)(pbVar4 + (1 - (long)param_1)) * 2;
  }
  *param_3 = '\0';
  return;
}


/* EA::StdC::ConvertBinaryDataToASCIIArray(void const*, unsigned long, char16_t*) */

void EA::StdC::ConvertBinaryDataToASCIIArray(void *param_1,ulong param_2,wchar16 *param_3)

{
  byte *pbVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  wchar16 *pwVar5;
  wchar16 wVar6;
  
  pbVar1 = (byte *)((long)param_1 + param_2);
  pbVar3 = param_1;
  pwVar5 = param_3;
  if (param_1 < pbVar1) {
    do {
      while( true ) {
        pbVar4 = pbVar3;
        wVar6 = (ushort)(*pbVar4 >> 4) + L'0';
        if ((ushort)wVar6 < 0x3a) break;
        *pwVar5 = (ushort)(*pbVar4 >> 4) + L'7';
        uVar2 = *pbVar4 & 0xf;
        wVar6 = uVar2 + L'0';
        if ((ushort)wVar6 < 0x3a) goto LAB_0540cfe8;
LAB_0540d030:
        pwVar5[1] = uVar2 + L'7';
        pbVar3 = pbVar4 + 1;
        pwVar5 = pwVar5 + 2;
        if (pbVar4 + 1 == pbVar1) goto LAB_0540d044;
      }
      *pwVar5 = wVar6;
      uVar2 = *pbVar4 & 0xf;
      wVar6 = uVar2 + L'0';
      if (0x39 < (ushort)wVar6) goto LAB_0540d030;
LAB_0540cfe8:
      pwVar5[1] = wVar6;
      pbVar3 = pbVar4 + 1;
      pwVar5 = pwVar5 + 2;
    } while (pbVar4 + 1 != pbVar1);
LAB_0540d044:
    param_3 = param_3 + (long)(pbVar4 + (1 - (long)param_1)) * 2;
  }
  *param_3 = L'\0';
  return;
}


/* EA::StdC::ConvertBinaryDataToASCIIArray(void const*, unsigned long, char32_t*) */

void EA::StdC::ConvertBinaryDataToASCIIArray(void *param_1,ulong param_2,wchar32 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  wchar32 *pwVar5;
  wchar32 wVar6;
  
  pbVar1 = (byte *)((long)param_1 + param_2);
  pbVar3 = param_1;
  pwVar5 = param_3;
  if (param_1 < pbVar1) {
    do {
      while( true ) {
        pbVar4 = pbVar3;
        wVar6 = (uint)(*pbVar4 >> 4) + L'0';
        if ((uint)wVar6 < 0x3a) break;
        *pwVar5 = (uint)(*pbVar4 >> 4) + L'7';
        uVar2 = *pbVar4 & 0xf;
        wVar6 = uVar2 + L'0';
        if ((uint)wVar6 < 0x3a) goto LAB_0540d088;
LAB_0540d0d0:
        pwVar5[1] = uVar2 + L'7';
        pbVar3 = pbVar4 + 1;
        pwVar5 = pwVar5 + 2;
        if (pbVar4 + 1 == pbVar1) goto LAB_0540d0e4;
      }
      *pwVar5 = wVar6;
      uVar2 = *pbVar4 & 0xf;
      wVar6 = uVar2 + L'0';
      if (0x39 < (uint)wVar6) goto LAB_0540d0d0;
LAB_0540d088:
      pwVar5[1] = wVar6;
      pbVar3 = pbVar4 + 1;
      pwVar5 = pwVar5 + 2;
    } while (pbVar4 + 1 != pbVar1);
LAB_0540d0e4:
    param_3 = param_3 + (long)(pbVar4 + (1 - (long)param_1)) * 2;
  }
  *param_3 = L'\0';
  return;
}


/* EA::StdC::ConvertASCIIArrayToBinaryData(char const*, unsigned long, void*) */

undefined8 EA::StdC::ConvertASCIIArrayToBinaryData(char *param_1,ulong param_2,void *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  
  pbVar1 = (byte *)(param_1 + param_2);
  uVar4 = 1;
joined_r0x0540d100:
  do {
    if (pbVar1 <= param_1) {
      return uVar4;
    }
    *(char *)param_3 = '\0';
    bVar2 = *param_1;
    if (bVar2 < 0x30) {
LAB_0540d18c:
      uVar4 = 0;
      cVar3 = '\0';
      *(char *)param_3 = '\0';
      bVar2 = param_1[1];
    }
    else {
      if (0x46 < bVar2) {
        if ((byte)(bVar2 + 0x9f) < 6) {
          bVar2 = bVar2 - 0x27;
          goto LAB_0540d130;
        }
        goto LAB_0540d18c;
      }
      if ((byte)(bVar2 - 0x3a) < 7) goto LAB_0540d18c;
      if (0x40 < bVar2) {
        bVar2 = bVar2 - 7;
      }
LAB_0540d130:
      cVar3 = bVar2 << 4;
      *(char *)param_3 = cVar3;
      bVar2 = param_1[1];
    }
    if (bVar2 < 0x30) {
LAB_0540d1a4:
      uVar4 = 0;
      param_1 = param_1 + 2;
      *(char *)param_3 = cVar3;
      param_3 = (char *)((long)param_3 + 1);
      goto joined_r0x0540d100;
    }
    if (bVar2 < 0x47) {
      if (6 < (byte)(bVar2 - 0x3a)) {
        if (0x40 < bVar2) {
          bVar2 = bVar2 - 7;
        }
        goto LAB_0540d168;
      }
      goto LAB_0540d1a4;
    }
    if (5 < (byte)(bVar2 + 0x9f)) goto LAB_0540d1a4;
    bVar2 = bVar2 - 0x27;
LAB_0540d168:
    param_1 = param_1 + 2;
    *(byte *)param_3 = (bVar2 - 0x30) + cVar3;
    param_3 = (char *)((long)param_3 + 1);
  } while( true );
}


/* EA::StdC::ConvertASCIIArrayToBinaryData(char16_t const*, unsigned long, void*) */

undefined8 EA::StdC::ConvertASCIIArrayToBinaryData(wchar16 *param_1,ulong param_2,void *param_3)

{
  wchar16 *pwVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  wchar16 wVar5;
  char cVar6;
  undefined8 uVar7;
  
  pwVar1 = param_1 + param_2;
  uVar7 = 1;
joined_r0x0540d21c:
  do {
    if (pwVar1 <= param_1) {
      return uVar7;
    }
    *(char *)param_3 = '\0';
    wVar5 = *param_1;
    uVar3 = (uint)(ushort)wVar5;
    uVar4 = (uint)(ushort)wVar5;
    if (uVar4 < 0x30) {
LAB_0540d2a8:
      uVar7 = 0;
      cVar6 = '\0';
      *(char *)param_3 = '\0';
      wVar5 = param_1[1];
    }
    else {
      if (0x46 < (ushort)wVar5) {
        if ((uVar4 - 0x61 & 0xffff) < 6) {
          uVar3 = uVar4 - 0x27;
          goto LAB_0540d24c;
        }
        goto LAB_0540d2a8;
      }
      uVar4 = (uint)(ushort)wVar5;
      if ((uVar4 - 0x3a & 0xffff) < 7) goto LAB_0540d2a8;
      if (0x40 < uVar4) {
        uVar3 = uVar4 - 7;
      }
LAB_0540d24c:
      cVar6 = (char)((uVar3 & 0xf) << 4);
      *(char *)param_3 = cVar6;
      wVar5 = param_1[1];
    }
    if ((ushort)wVar5 < 0x30) {
LAB_0540d2c0:
      uVar7 = 0;
      param_1 = param_1 + 2;
      *(char *)param_3 = cVar6;
      param_3 = (char *)((long)param_3 + 1);
      goto joined_r0x0540d21c;
    }
    if ((ushort)wVar5 < 0x47) {
      if (6 < (ushort)(wVar5 + L'ￆ')) {
        if (0x40 < (ushort)wVar5) {
          wVar5 = wVar5 + L'\xfff9';
        }
        cVar2 = (char)wVar5;
        goto LAB_0540d284;
      }
      goto LAB_0540d2c0;
    }
    if (5 < (ushort)(wVar5 + L'ﾟ')) goto LAB_0540d2c0;
    cVar2 = (char)wVar5 + -0x27;
LAB_0540d284:
    param_1 = param_1 + 2;
    *(char *)param_3 = cVar2 + -0x30 + cVar6;
    param_3 = (char *)((long)param_3 + 1);
  } while( true );
}


/* EA::StdC::ConvertASCIIArrayToBinaryData(char32_t const*, unsigned long, void*) */

undefined8 EA::StdC::ConvertASCIIArrayToBinaryData(wchar32 *param_1,ulong param_2,void *param_3)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  
  pwVar1 = param_1 + param_2;
  uVar5 = 1;
joined_r0x0540d338:
  do {
    if (pwVar1 <= param_1) {
      return uVar5;
    }
    *(char *)param_3 = '\0';
    wVar2 = *param_1;
    if ((uint)wVar2 < 0x30) {
LAB_0540d3b4:
      uVar5 = 0;
      cVar4 = '\0';
      *(char *)param_3 = '\0';
      wVar2 = param_1[1];
    }
    else {
      if (0x46 < (uint)wVar2) {
        if ((uint)(wVar2 + L'\xffffff9f') < 6) {
          wVar2 = wVar2 + L'\xffffffa9';
          goto LAB_0540d364;
        }
        goto LAB_0540d3b4;
      }
      if ((uint)(wVar2 + L'\xffffffc6') < 7) goto LAB_0540d3b4;
      if (0x40 < (uint)wVar2) {
        wVar2 = wVar2 + L'\xffffffc9';
      }
LAB_0540d364:
      cVar4 = (char)((wVar2 & 0xfU) << 4);
      *(char *)param_3 = cVar4;
      wVar2 = param_1[1];
    }
    if ((uint)wVar2 < 0x30) {
LAB_0540d3cc:
      uVar5 = 0;
      param_1 = param_1 + 2;
      *(char *)param_3 = cVar4;
      param_3 = (char *)((long)param_3 + 1);
      goto joined_r0x0540d338;
    }
    cVar3 = (char)wVar2;
    if ((uint)wVar2 < 0x47) {
      if (6 < (uint)(wVar2 + L'\xffffffc6')) {
        if ((uint)wVar2 < 0x41) {
          cVar3 = cVar3 + -0x30;
        }
        else {
          cVar3 = cVar3 + -0x37;
        }
        goto LAB_0540d390;
      }
      goto LAB_0540d3cc;
    }
    if (5 < (uint)(wVar2 + L'\xffffff9f')) goto LAB_0540d3cc;
    cVar3 = cVar3 + -0x57;
LAB_0540d390:
    param_1 = param_1 + 2;
    *(char *)param_3 = cVar3 + cVar4;
    param_3 = (char *)((long)param_3 + 1);
  } while( true );
}


/* EA::StdC::SplitTokenDelimited(char const*, unsigned long, char, char*, unsigned long, char
   const**) */

bool EA::StdC::SplitTokenDelimited
               (char *param_1,ulong param_2,char param_3,char *param_4,ulong param_5,char **param_6)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  
  if ((param_4 != (char *)0x0) && (param_5 != 0)) {
    *param_4 = '\0';
  }
  bVar1 = param_1 != (char *)0x0 && param_2 != 0;
  if (param_1 != (char *)0x0 && param_2 != 0) {
    cVar4 = *param_1;
    if (cVar4 == '\0') {
      return false;
    }
    uVar3 = 1;
    if (param_6 == (char **)0x0) {
      while (cVar4 != param_3) {
        pcVar2 = param_4;
        if ((param_4 != (char *)0x0) && (uVar3 < param_5)) {
          pcVar2 = param_4 + 1;
          *param_4 = cVar4;
          param_4[1] = '\0';
        }
        if (param_2 <= uVar3) {
          return bVar1;
        }
        cVar4 = param_1[uVar3];
        param_4 = pcVar2;
        uVar3 = uVar3 + 1;
        if (cVar4 == '\0') {
          return bVar1;
        }
      }
    }
    else {
      while (*param_6 = *param_6 + 1, cVar4 != param_3) {
        pcVar2 = param_4;
        if ((param_4 != (char *)0x0) && (uVar3 < param_5)) {
          pcVar2 = param_4 + 1;
          *param_4 = cVar4;
          param_4[1] = '\0';
        }
        if (param_2 <= uVar3) {
          return bVar1;
        }
        cVar4 = param_1[uVar3];
        param_4 = pcVar2;
        uVar3 = uVar3 + 1;
        if (cVar4 == '\0') {
          return bVar1;
        }
      }
    }
  }
  return bVar1;
}


/* EA::StdC::SplitTokenDelimited(char16_t const*, unsigned long, char16_t, char16_t*, unsigned long,
   char16_t const**) */

bool EA::StdC::SplitTokenDelimited
               (wchar16 *param_1,ulong param_2,wchar16 param_3,wchar16 *param_4,ulong param_5,
               wchar16 **param_6)

{
  bool bVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  wchar16 wVar4;
  wchar16 *pwVar5;
  
  if ((param_4 != (wchar16 *)0x0) && (param_5 != 0)) {
    *param_4 = L'\0';
  }
  bVar1 = param_1 != (wchar16 *)0x0 && param_2 != 0;
  if (bVar1) {
    wVar4 = *param_1;
    if (wVar4 == L'\0') {
      return false;
    }
    if (param_6 == (wchar16 **)0x0) {
      uVar3 = 1;
      while (wVar4 != param_3) {
        pwVar5 = param_4;
        if ((param_4 != (wchar16 *)0x0) && (uVar3 < param_5)) {
          pwVar5 = param_4 + 1;
          *param_4 = wVar4;
          param_4[1] = L'\0';
        }
        if (param_2 <= uVar3) {
          return true;
        }
        wVar4 = param_1[uVar3];
        param_4 = pwVar5;
        uVar3 = uVar3 + 1;
        if (wVar4 == L'\0') {
          return true;
        }
      }
    }
    else {
      pwVar5 = *param_6;
      uVar3 = 1;
      while (pwVar5 = pwVar5 + 1, wVar4 != param_3) {
        pwVar2 = param_4;
        if ((param_4 != (wchar16 *)0x0) && (uVar3 < param_5)) {
          pwVar2 = param_4 + 1;
          *param_4 = wVar4;
          param_4[1] = L'\0';
        }
        if ((param_2 <= uVar3) ||
           (wVar4 = param_1[uVar3], param_4 = pwVar2, uVar3 = uVar3 + 1, wVar4 == L'\0')) break;
      }
      *param_6 = pwVar5;
    }
  }
  return bVar1;
}


/* EA::StdC::SplitTokenDelimited(char32_t const*, unsigned long, char32_t, char32_t*, unsigned long,
   char32_t const**) */

bool EA::StdC::SplitTokenDelimited
               (wchar32 *param_1,ulong param_2,wchar32 param_3,wchar32 *param_4,ulong param_5,
               wchar32 **param_6)

{
  bool bVar1;
  wchar32 *pwVar2;
  ulong uVar3;
  wchar32 wVar4;
  wchar32 *pwVar5;
  
  if ((param_4 != (wchar32 *)0x0) && (param_5 != 0)) {
    *param_4 = L'\0';
  }
  bVar1 = param_1 != (wchar32 *)0x0 && param_2 != 0;
  if (bVar1) {
    wVar4 = *param_1;
    if (wVar4 == L'\0') {
      return false;
    }
    if (param_6 == (wchar32 **)0x0) {
      uVar3 = 1;
      while (wVar4 != param_3) {
        pwVar5 = param_4;
        if ((param_4 != (wchar32 *)0x0) && (uVar3 < param_5)) {
          pwVar5 = param_4 + 1;
          *param_4 = wVar4;
          param_4[1] = L'\0';
        }
        if (param_2 <= uVar3) {
          return true;
        }
        wVar4 = param_1[uVar3];
        param_4 = pwVar5;
        uVar3 = uVar3 + 1;
        if (wVar4 == L'\0') {
          return true;
        }
      }
    }
    else {
      pwVar5 = *param_6;
      uVar3 = 1;
      while (pwVar5 = pwVar5 + 1, wVar4 != param_3) {
        pwVar2 = param_4;
        if ((param_4 != (wchar32 *)0x0) && (uVar3 < param_5)) {
          pwVar2 = param_4 + 1;
          *param_4 = wVar4;
          param_4[1] = L'\0';
        }
        if ((param_2 <= uVar3) ||
           (wVar4 = param_1[uVar3], param_4 = pwVar2, uVar3 = uVar3 + 1, wVar4 == L'\0')) break;
      }
      *param_6 = pwVar5;
    }
  }
  return bVar1;
}


/* EA::StdC::SplitTokenSeparated(char const*, unsigned long, char, char*, unsigned long, char
   const**) */

int EA::StdC::SplitTokenSeparated
              (char *param_1,ulong param_2,char param_3,char *param_4,ulong param_5,char **param_6)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  
  if ((param_4 != (char *)0x0) && (param_5 != 0)) {
    *param_4 = '\0';
  }
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      cVar4 = *param_1;
      if (cVar4 == '\0') {
        iVar3 = 0;
      }
      else if (param_6 == (char **)0x0) {
        pcVar1 = param_1 + param_2;
        bVar2 = false;
        iVar3 = 0;
        uVar6 = 0;
        do {
          if (cVar4 == param_3) {
            if (iVar3 != 0) {
              bVar2 = true;
            }
          }
          else {
            if (bVar2) {
              return 1;
            }
            iVar3 = 1;
            if ((param_4 != (char *)0x0) && (uVar6 + 1 < param_5)) {
              *param_4 = cVar4;
              param_4[1] = '\0';
              param_4 = param_4 + 1;
              uVar6 = uVar6 + 1;
            }
          }
          param_1 = param_1 + 1;
        } while ((param_1 != pcVar1) && (cVar4 = *param_1, cVar4 != '\0'));
      }
      else {
        bVar2 = false;
        pcVar1 = param_1 + param_2;
        iVar3 = 0;
        uVar6 = 0;
        do {
          if (cVar4 == param_3) {
            if (iVar3 != 0) {
              bVar2 = true;
            }
            *param_6 = *param_6 + 1;
          }
          else {
            if (bVar2) {
              return 1;
            }
            iVar3 = 1;
            pcVar5 = param_4;
            if ((param_4 != (char *)0x0) && (uVar6 + 1 < param_5)) {
              pcVar5 = param_4 + 1;
              *param_4 = cVar4;
              param_4[1] = '\0';
              uVar6 = uVar6 + 1;
            }
            *param_6 = *param_6 + 1;
            param_4 = pcVar5;
          }
          if (param_1 + 1 == pcVar1) {
            return iVar3;
          }
          param_1 = param_1 + 1;
          cVar4 = *param_1;
        } while (cVar4 != '\0');
      }
    }
  }
  return iVar3;
}


/* EA::StdC::SplitTokenSeparated(char16_t const*, unsigned long, char16_t, char16_t*, unsigned long,
   char16_t const**) */

int EA::StdC::SplitTokenSeparated
              (wchar16 *param_1,ulong param_2,wchar16 param_3,wchar16 *param_4,ulong param_5,
              wchar16 **param_6)

{
  bool bVar1;
  wchar16 *pwVar2;
  int iVar3;
  long lVar4;
  wchar16 wVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_4 != (wchar16 *)0x0) && (param_5 != 0)) {
    *param_4 = L'\0';
  }
  iVar3 = 0;
  if (param_1 != (wchar16 *)0x0) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      wVar5 = *param_1;
      if (wVar5 == L'\0') {
        iVar3 = 0;
      }
      else if (param_6 == (wchar16 **)0x0) {
        bVar1 = false;
        iVar3 = 0;
        uVar7 = 0;
        uVar6 = 0;
        do {
          if (wVar5 == param_3) {
            if (iVar3 != 0) {
              bVar1 = true;
            }
          }
          else {
            if (bVar1) {
              return 1;
            }
            iVar3 = 1;
            if ((param_4 != (wchar16 *)0x0) && (uVar6 + 1 < param_5)) {
              *param_4 = wVar5;
              param_4[1] = L'\0';
              param_4 = param_4 + 1;
              uVar6 = uVar6 + 1;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((uVar7 != param_2) && (wVar5 = param_1[uVar7], wVar5 != L'\0'));
      }
      else {
        lVar4 = 0;
        bVar1 = false;
        iVar3 = 0;
        uVar7 = 0;
        do {
          if (wVar5 == param_3) {
            if (iVar3 != 0) {
              bVar1 = true;
            }
            *param_6 = *param_6 + 1;
          }
          else {
            if (bVar1) {
              return 1;
            }
            iVar3 = 1;
            pwVar2 = param_4;
            if ((param_4 != (wchar16 *)0x0) && (uVar7 + 1 < param_5)) {
              pwVar2 = param_4 + 1;
              *param_4 = wVar5;
              param_4[1] = L'\0';
              uVar7 = uVar7 + 1;
            }
            *param_6 = *param_6 + 1;
            param_4 = pwVar2;
          }
          if (lVar4 + 1U == param_2) {
            return iVar3;
          }
          lVar4 = lVar4 + 1;
          wVar5 = param_1[lVar4];
        } while (wVar5 != L'\0');
      }
    }
  }
  return iVar3;
}


/* EA::StdC::SplitTokenSeparated(char32_t const*, unsigned long, char32_t, char32_t*, unsigned long,
   char32_t const**) */

int EA::StdC::SplitTokenSeparated
              (wchar32 *param_1,ulong param_2,wchar32 param_3,wchar32 *param_4,ulong param_5,
              wchar32 **param_6)

{
  bool bVar1;
  wchar32 *pwVar2;
  int iVar3;
  long lVar4;
  wchar32 wVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_4 != (wchar32 *)0x0) && (param_5 != 0)) {
    *param_4 = L'\0';
  }
  iVar3 = 0;
  if (param_1 != (wchar32 *)0x0) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      wVar5 = *param_1;
      if (wVar5 == L'\0') {
        iVar3 = 0;
      }
      else if (param_6 == (wchar32 **)0x0) {
        bVar1 = false;
        iVar3 = 0;
        uVar7 = 0;
        uVar6 = 0;
        do {
          if (wVar5 == param_3) {
            if (iVar3 != 0) {
              bVar1 = true;
            }
          }
          else {
            if (bVar1) {
              return 1;
            }
            iVar3 = 1;
            if ((param_4 != (wchar32 *)0x0) && (uVar6 + 1 < param_5)) {
              *param_4 = wVar5;
              param_4[1] = L'\0';
              param_4 = param_4 + 1;
              uVar6 = uVar6 + 1;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((uVar7 != param_2) && (wVar5 = param_1[uVar7], wVar5 != L'\0'));
      }
      else {
        lVar4 = 0;
        bVar1 = false;
        iVar3 = 0;
        uVar7 = 0;
        do {
          if (wVar5 == param_3) {
            if (iVar3 != 0) {
              bVar1 = true;
            }
            *param_6 = *param_6 + 1;
          }
          else {
            if (bVar1) {
              return 1;
            }
            iVar3 = 1;
            pwVar2 = param_4;
            if ((param_4 != (wchar32 *)0x0) && (uVar7 + 1 < param_5)) {
              pwVar2 = param_4 + 1;
              *param_4 = wVar5;
              param_4[1] = L'\0';
              uVar7 = uVar7 + 1;
            }
            *param_6 = *param_6 + 1;
            param_4 = pwVar2;
          }
          if (lVar4 + 1U == param_2) {
            return iVar3;
          }
          lVar4 = lVar4 + 1;
          wVar5 = param_1[lVar4];
        } while (wVar5 != L'\0');
      }
    }
  }
  return iVar3;
}


/* EA::StdC::BoyerMooreSearch(char const*, int, char const*, int, int*, int*, int*, int) */

int EA::StdC::BoyerMooreSearch
              (char *param_1,int param_2,char *param_3,int param_4,int *param_5,int *param_6,
              int *param_7,int param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  FUN_0540c028(param_1,param_2,param_5,param_6);
  FUN_0540bf88(param_1,param_2,param_7,param_8);
  if (-1 < param_4 - param_2) {
    iVar3 = param_2 + -1;
    iVar11 = 0;
    lVar12 = (long)iVar3;
    iVar6 = 0;
    iVar10 = param_2;
    do {
      if (iVar3 < 0) {
        return iVar6;
      }
      bVar2 = param_3[iVar6 + iVar3];
      iVar7 = iVar3;
      if (param_1[lVar12] == bVar2) {
        if (iVar11 == 0) {
          lVar5 = lVar12 + -1;
          do {
            lVar8 = lVar5;
            iVar7 = iVar7 + -1;
            if (iVar7 == -1) {
              return iVar6;
            }
            bVar2 = param_3[lVar8 + -1 + ((param_2 + -2) - lVar12) + (long)iVar6 + 2];
            lVar5 = lVar8 + -1;
          } while (param_1[lVar8] == bVar2);
        }
        else {
          do {
            iVar9 = iVar7 + -1;
            iVar7 = iVar9 - iVar11;
            if (iVar3 - iVar10 != iVar9) {
              iVar7 = iVar9;
            }
            lVar8 = (long)iVar7;
            if (iVar7 < 0) {
              return iVar6;
            }
            bVar2 = param_3[iVar7 + iVar6];
          } while (param_1[lVar8] == bVar2);
        }
        iVar9 = iVar3 - iVar7;
      }
      else {
        iVar9 = 0;
        lVar8 = lVar12;
      }
      iVar4 = iVar11 - iVar9;
      iVar10 = param_5[lVar8];
      iVar7 = (param_7[bVar2] - param_2) + 1 + iVar7;
      iVar1 = iVar7;
      if (iVar7 < iVar4) {
        iVar1 = iVar4;
      }
      if (iVar10 < iVar1) {
        iVar10 = iVar1;
        if (iVar4 < iVar7) {
          iVar7 = iVar11 + 1;
          iVar11 = 0;
          if (iVar1 < iVar7) {
            iVar10 = iVar7;
          }
        }
        else {
          iVar11 = 0;
        }
      }
      else {
        iVar11 = param_2 - iVar10;
        if (iVar9 < param_2 - iVar10) {
          iVar11 = iVar9;
        }
      }
      iVar6 = iVar6 + iVar10;
    } while (iVar6 <= param_4 - param_2);
  }
  return param_2;
}


/* bool EA::StdC::MatchPattern<char>(char const*, char const*) */

bool EA::StdC::MatchPattern<char>(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_2;
  while( true ) {
    while (cVar1 == '*') {
      if (param_2[1] == '\0') {
        return true;
      }
      if (*param_1 == '\0') goto LAB_0540dc58;
      bVar2 = MatchPattern<char>(param_1,param_2 + 1);
      param_1 = param_1 + 1;
      if (bVar2) {
        return true;
      }
    }
    if (*param_1 == '\0') break;
    if ((cVar1 != '?') && (*param_1 != cVar1)) {
      return false;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
LAB_0540dc58:
  return cVar1 == '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::WildcardMatch(char const*, char const*, bool) */

void EA::StdC::WildcardMatch(char *param_1,char *param_2,bool param_3)

{
  bool bVar1;
  ulong uVar2;
  ColourFit *this;
  ColourFit *this_00;
  char acStack_1a8 [32];
  char acStack_188 [384];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3) {
    bVar1 = MatchPattern<char>(param_1,param_2);
  }
  else {
    uVar2 = Strlen(param_1);
    if (uVar2 < 0x17f) {
      Strcpy(acStack_188,param_1);
      Strlwr(acStack_188);
      uVar2 = Strlen(param_2);
      if (uVar2 < 0x1f) {
        Strcpy(acStack_1a8,param_2);
        Strlwr(acStack_1a8);
        bVar1 = MatchPattern<char>(acStack_188,acStack_1a8);
        goto LAB_0540dd78;
      }
      this_00 = operator_new__(uVar2 + 1);
      Strcpy((char *)this_00,param_2);
      Strlwr((char *)this_00);
      bVar1 = MatchPattern<char>(acStack_188,(char *)this_00);
    }
    else {
      this = operator_new__(uVar2 + 1);
      Strcpy((char *)this,param_1);
      Strlwr((char *)this);
      uVar2 = Strlen(param_2);
      if (uVar2 < 0x1f) {
        Strcpy(acStack_1a8,param_2);
        Strlwr(acStack_1a8);
        bVar1 = MatchPattern<char>((char *)this,acStack_1a8);
        EATextSquish::ColourFit::~ColourFit(this);
        goto LAB_0540dd78;
      }
      this_00 = operator_new__(uVar2 + 1);
      Strcpy((char *)this_00,param_2);
      Strlwr((char *)this_00);
      bVar1 = MatchPattern<char>((char *)this,(char *)this_00);
      EATextSquish::ColourFit::~ColourFit(this);
    }
    EATextSquish::ColourFit::~ColourFit(this_00);
  }
LAB_0540dd78:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* bool EA::StdC::MatchPattern<char16_t>(char16_t const*, char16_t const*) */

bool EA::StdC::MatchPattern<char16_t>(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  bool bVar2;
  
  wVar1 = *param_2;
  while( true ) {
    while (wVar1 == L'*') {
      if (param_2[1] == L'\0') {
        return true;
      }
      if (*param_1 == L'\0') goto LAB_0540deac;
      bVar2 = MatchPattern<char16_t>(param_1,param_2 + 1);
      param_1 = param_1 + 1;
      if (bVar2) {
        return true;
      }
    }
    if (*param_1 == L'\0') break;
    if ((wVar1 != L'?') && (*param_1 != wVar1)) {
      return false;
    }
    wVar1 = param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
LAB_0540deac:
  return wVar1 == L'\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::WildcardMatch(char16_t const*, char16_t const*, bool) */

void EA::StdC::WildcardMatch(wchar16 *param_1,wchar16 *param_2,bool param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ColourFit *this;
  ColourFit *this_00;
  ColourFit *pCVar4;
  wchar16 awStack_348 [32];
  ColourFit aCStack_308 [768];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3) {
    bVar1 = MatchPattern<char16_t>(param_1,param_2);
    goto LAB_0540e0b0;
  }
  uVar2 = Strlen(param_1);
  if (uVar2 < 0x17f) {
    Strcpy((wchar16 *)aCStack_308,param_1);
    Strlwr((wchar16 *)aCStack_308);
    uVar2 = Strlen(param_2);
    if (uVar2 < 0x1f) {
      Strcpy(awStack_348,param_2);
      Strlwr(awStack_348);
      bVar1 = MatchPattern<char16_t>((wchar16 *)aCStack_308,awStack_348);
      goto LAB_0540e0b0;
    }
    uVar2 = uVar2 + 1;
    if (uVar2 < 0x3f80000000000001) {
      this = (ColourFit *)0x0;
      pCVar4 = aCStack_308;
      goto LAB_0540dfcc;
    }
    this_00 = operator_new__(0xffffffffffffffff);
    Strcpy((wchar16 *)this_00,param_2);
    Strlwr((wchar16 *)this_00);
    bVar1 = MatchPattern<char16_t>((wchar16 *)aCStack_308,(wchar16 *)this_00);
  }
  else {
    uVar3 = (uVar2 + 1) * 2;
    if (0x3f80000000000000 < uVar2 + 1) {
      uVar3 = 0xffffffffffffffff;
    }
    this = operator_new__(uVar3);
    Strcpy((wchar16 *)this,param_1);
    Strlwr((wchar16 *)this);
    uVar2 = Strlen(param_2);
    if (uVar2 < 0x1f) {
      Strcpy(awStack_348,param_2);
      Strlwr(awStack_348);
      bVar1 = MatchPattern<char16_t>((wchar16 *)this,awStack_348);
      EATextSquish::ColourFit::~ColourFit(this);
      goto LAB_0540e0b0;
    }
    uVar2 = uVar2 + 1;
    pCVar4 = this;
    if (uVar2 < 0x3f80000000000001) {
LAB_0540dfcc:
      this_00 = operator_new__(uVar2 << 1);
      Strcpy((wchar16 *)this_00,param_2);
      Strlwr((wchar16 *)this_00);
      bVar1 = MatchPattern<char16_t>((wchar16 *)pCVar4,(wchar16 *)this_00);
      if (this != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(this);
      }
    }
    else {
      this_00 = operator_new__(0xffffffffffffffff);
      Strcpy((wchar16 *)this_00,param_2);
      Strlwr((wchar16 *)this_00);
      bVar1 = MatchPattern<char16_t>((wchar16 *)this,(wchar16 *)this_00);
      EATextSquish::ColourFit::~ColourFit(this);
    }
  }
  EATextSquish::ColourFit::~ColourFit(this_00);
LAB_0540e0b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* bool EA::StdC::MatchPattern<char32_t>(char32_t const*, char32_t const*) */

bool EA::StdC::MatchPattern<char32_t>(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  bool bVar2;
  
  wVar1 = *param_2;
  while( true ) {
    while (wVar1 == L'*') {
      if (param_2[1] == L'\0') {
        return true;
      }
      if (*param_1 == L'\0') goto LAB_0540e184;
      bVar2 = MatchPattern<char32_t>(param_1,param_2 + 1);
      param_1 = param_1 + 1;
      if (bVar2) {
        return true;
      }
    }
    if (*param_1 == L'\0') break;
    if ((wVar1 != L'?') && (*param_1 != wVar1)) {
      return false;
    }
    wVar1 = param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
LAB_0540e184:
  return wVar1 == L'\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::WildcardMatch(char32_t const*, char32_t const*, bool) */

void EA::StdC::WildcardMatch(wchar32 *param_1,wchar32 *param_2,bool param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ColourFit *this;
  ColourFit *this_00;
  ColourFit *pCVar4;
  wchar32 awStack_688 [32];
  ColourFit aCStack_608 [1536];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3) {
    bVar1 = MatchPattern<char32_t>(param_1,param_2);
    goto LAB_0540e388;
  }
  uVar2 = Strlen(param_1);
  if (uVar2 < 0x17f) {
    Strcpy((wchar32 *)aCStack_608,param_1);
    Strlwr((wchar32 *)aCStack_608);
    uVar2 = Strlen(param_2);
    if (uVar2 < 0x1f) {
      Strcpy(awStack_688,param_2);
      Strlwr(awStack_688);
      bVar1 = MatchPattern<char32_t>((wchar32 *)aCStack_608,awStack_688);
      goto LAB_0540e388;
    }
    uVar2 = uVar2 + 1;
    if (uVar2 < 0x1fc0000000000001) {
      this = (ColourFit *)0x0;
      pCVar4 = aCStack_608;
      goto LAB_0540e2a4;
    }
    this_00 = operator_new__(0xffffffffffffffff);
    Strcpy((wchar32 *)this_00,param_2);
    Strlwr((wchar32 *)this_00);
    bVar1 = MatchPattern<char32_t>((wchar32 *)aCStack_608,(wchar32 *)this_00);
  }
  else {
    uVar3 = (uVar2 + 1) * 4;
    if (0x1fc0000000000000 < uVar2 + 1) {
      uVar3 = 0xffffffffffffffff;
    }
    this = operator_new__(uVar3);
    Strcpy((wchar32 *)this,param_1);
    Strlwr((wchar32 *)this);
    uVar2 = Strlen(param_2);
    if (uVar2 < 0x1f) {
      Strcpy(awStack_688,param_2);
      Strlwr(awStack_688);
      bVar1 = MatchPattern<char32_t>((wchar32 *)this,awStack_688);
      EATextSquish::ColourFit::~ColourFit(this);
      goto LAB_0540e388;
    }
    uVar2 = uVar2 + 1;
    pCVar4 = this;
    if (uVar2 < 0x1fc0000000000001) {
LAB_0540e2a4:
      this_00 = operator_new__(uVar2 << 2);
      Strcpy((wchar32 *)this_00,param_2);
      Strlwr((wchar32 *)this_00);
      bVar1 = MatchPattern<char32_t>((wchar32 *)pCVar4,(wchar32 *)this_00);
      if (this != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(this);
      }
    }
    else {
      this_00 = operator_new__(0xffffffffffffffff);
      Strcpy((wchar32 *)this_00,param_2);
      Strlwr((wchar32 *)this_00);
      bVar1 = MatchPattern<char32_t>((wchar32 *)this,(wchar32 *)this_00);
      EATextSquish::ColourFit::~ColourFit(this);
    }
  }
  EATextSquish::ColourFit::~ColourFit(this_00);
LAB_0540e388:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

