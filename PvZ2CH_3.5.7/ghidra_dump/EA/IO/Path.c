// Class: EA::IO::Path


/* EA::IO::Path::Compare(char const*, char const*, char const*, char const*,
   EA::IO::CaseSensitivity, bool) */

undefined4
EA::IO::Path::Compare
          (byte *param_1,byte *param_2,byte *param_3,byte *param_4,int param_5,char param_6)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  
  if (param_2 == (byte *)0x0) {
    param_2 = (byte *)StdC::Strend((char *)param_1);
  }
  if (param_4 == (byte *)0x0) {
    param_4 = (byte *)StdC::Strend((char *)param_3);
  }
  if (param_5 == 1) {
    while( true ) {
      bVar5 = *param_1;
      bVar1 = *param_3;
      cVar4 = FUN_05349290(bVar5);
      if (cVar4 == '\0') {
        bVar5 = StdC::Tolower(bVar5);
        cVar4 = FUN_05349290(bVar1);
      }
      else {
        bVar5 = 0x2f;
        cVar4 = FUN_05349290(bVar1);
      }
      bVar3 = 0x2f;
      if (cVar4 == '\0') {
        bVar3 = StdC::Tolower(bVar1);
      }
      if (param_2 <= param_1) goto LAB_0534a3e4;
      if (param_4 <= param_3) goto LAB_0534a4a8;
      if (bVar5 != bVar3) break;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
  }
  else {
    do {
      bVar5 = *param_1;
      bVar3 = *param_3;
      cVar4 = FUN_05349290(bVar5);
      if (cVar4 != '\0') {
        bVar5 = 0x2f;
      }
      cVar4 = FUN_05349290(bVar3);
      if (cVar4 != '\0') {
        bVar3 = 0x2f;
      }
      if (param_2 <= param_1) {
LAB_0534a3e4:
        if (param_4 <= param_3) {
          return 0;
        }
        if (param_6 == '\0') {
          return 0xffffffff;
        }
        cVar4 = FUN_05349290(bVar3);
        if (cVar4 == '\0') {
          return 0xffffffff;
        }
        return 1;
      }
      bVar2 = param_4 <= param_3;
      param_3 = param_3 + 1;
      if (bVar2) {
LAB_0534a4a8:
        uVar6 = 1;
        if (param_6 == '\0') {
          return 1;
        }
        cVar4 = FUN_05349290(bVar5);
        if (cVar4 != '\0') {
          uVar6 = 0xffffffff;
        }
        return uVar6;
      }
      param_1 = param_1 + 1;
    } while (bVar5 == bVar3);
  }
  cVar4 = FUN_05349290(bVar5);
  if (cVar4 == '\0') {
    cVar4 = FUN_05349290(bVar3);
    if (cVar4 == '\0') {
      uVar6 = 1;
      if (bVar5 < bVar3) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0xffffffff;
      if (param_6 != '\0') {
        uVar6 = 1;
      }
    }
    return uVar6;
  }
  uVar6 = 1;
  if (param_6 != '\0') {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


/* EA::IO::Path::Compare(char16_t const*, char16_t const*, char16_t const*, char16_t const*,
   EA::IO::CaseSensitivity, bool) */

undefined4
EA::IO::Path::Compare
          (wchar16 *param_1,wchar16 *param_2,wchar16 *param_3,wchar16 *param_4,int param_5,
          char param_6)

{
  wchar16 wVar1;
  bool bVar2;
  char cVar3;
  wchar16 wVar4;
  wchar16 wVar5;
  undefined4 uVar6;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  if (param_4 == (wchar16 *)0x0) {
    param_4 = (wchar16 *)StdC::Strend(param_3);
  }
  if (param_5 == 1) {
    while( true ) {
      wVar5 = *param_1;
      wVar1 = *param_3;
      cVar3 = FUN_053492a0(wVar5);
      if (cVar3 == '\0') {
        wVar5 = StdC::Tolower(wVar5);
        cVar3 = FUN_053492a0(wVar1);
      }
      else {
        wVar5 = L'/';
        cVar3 = FUN_053492a0(wVar1);
      }
      wVar4 = L'/';
      if (cVar3 == '\0') {
        wVar4 = StdC::Tolower(wVar1);
      }
      if (param_2 <= param_1) goto LAB_0534a624;
      if (param_4 <= param_3) goto LAB_0534a6e8;
      if (wVar5 != wVar4) break;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
  }
  else {
    do {
      wVar5 = *param_1;
      wVar4 = *param_3;
      cVar3 = FUN_053492a0(wVar5);
      if (cVar3 != '\0') {
        wVar5 = L'/';
      }
      cVar3 = FUN_053492a0(wVar4);
      if (cVar3 != '\0') {
        wVar4 = L'/';
      }
      if (param_2 <= param_1) {
LAB_0534a624:
        if (param_4 <= param_3) {
          return 0;
        }
        if (param_6 == '\0') {
          return 0xffffffff;
        }
        cVar3 = FUN_053492a0(wVar4);
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
        return 1;
      }
      bVar2 = param_4 <= param_3;
      param_3 = param_3 + 1;
      if (bVar2) {
LAB_0534a6e8:
        uVar6 = 1;
        if (param_6 == '\0') {
          return 1;
        }
        cVar3 = FUN_053492a0(wVar5);
        if (cVar3 != '\0') {
          uVar6 = 0xffffffff;
        }
        return uVar6;
      }
      param_1 = param_1 + 1;
    } while (wVar5 == wVar4);
  }
  cVar3 = FUN_053492a0(wVar5);
  if (cVar3 == '\0') {
    cVar3 = FUN_053492a0(wVar4);
    if (cVar3 == '\0') {
      uVar6 = 1;
      if ((ushort)wVar5 < (ushort)wVar4) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0xffffffff;
      if (param_6 != '\0') {
        uVar6 = 1;
      }
    }
    return uVar6;
  }
  uVar6 = 1;
  if (param_6 != '\0') {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


/* EA::IO::Path::Compare(char32_t const*, char32_t const*, char32_t const*, char32_t const*,
   EA::IO::CaseSensitivity, bool) */

undefined4
EA::IO::Path::Compare
          (wchar32 *param_1,wchar32 *param_2,wchar32 *param_3,wchar32 *param_4,int param_5,
          char param_6)

{
  wchar32 wVar1;
  bool bVar2;
  char cVar3;
  wchar32 wVar4;
  wchar32 wVar5;
  undefined4 uVar6;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  if (param_4 == (wchar32 *)0x0) {
    param_4 = (wchar32 *)StdC::Strend(param_3);
  }
  if (param_5 == 1) {
    while( true ) {
      wVar5 = *param_1;
      wVar1 = *param_3;
      cVar3 = FUN_053492b0(wVar5);
      if (cVar3 == '\0') {
        wVar5 = StdC::Tolower(wVar5);
        cVar3 = FUN_053492b0(wVar1);
      }
      else {
        wVar5 = L'/';
        cVar3 = FUN_053492b0(wVar1);
      }
      wVar4 = L'/';
      if (cVar3 == '\0') {
        wVar4 = StdC::Tolower(wVar1);
      }
      if (param_2 <= param_1) goto LAB_0534a860;
      if (param_4 <= param_3) goto LAB_0534a924;
      if (wVar5 != wVar4) break;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
  }
  else {
    do {
      wVar5 = *param_1;
      wVar4 = *param_3;
      cVar3 = FUN_053492b0(wVar5);
      if (cVar3 != '\0') {
        wVar5 = L'/';
      }
      cVar3 = FUN_053492b0(wVar4);
      if (cVar3 != '\0') {
        wVar4 = L'/';
      }
      if (param_2 <= param_1) {
LAB_0534a860:
        if (param_4 <= param_3) {
          return 0;
        }
        if (param_6 == '\0') {
          return 0xffffffff;
        }
        cVar3 = FUN_053492b0(wVar4);
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
        return 1;
      }
      bVar2 = param_4 <= param_3;
      param_3 = param_3 + 1;
      if (bVar2) {
LAB_0534a924:
        uVar6 = 1;
        if (param_6 == '\0') {
          return 1;
        }
        cVar3 = FUN_053492b0(wVar5);
        if (cVar3 != '\0') {
          uVar6 = 0xffffffff;
        }
        return uVar6;
      }
      param_1 = param_1 + 1;
    } while (wVar5 == wVar4);
  }
  cVar3 = FUN_053492b0(wVar5);
  if (cVar3 == '\0') {
    cVar3 = FUN_053492b0(wVar4);
    if (cVar3 == '\0') {
      uVar6 = 1;
      if ((uint)wVar5 < (uint)wVar4) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0xffffffff;
      if (param_6 != '\0') {
        uVar6 = 1;
      }
    }
    return uVar6;
  }
  uVar6 = 1;
  if (param_6 != '\0') {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


/* EA::IO::Path::FindComponentFwd(char*, char*) */

char * EA::IO::Path::FindComponentFwd(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  cVar2 = FUN_053492bc(param_1,param_2);
  if (cVar2 != '\0') {
    param_1 = param_1 + 2;
  }
  if (param_1 < param_2) {
    do {
      cVar2 = *param_1;
      cVar3 = FUN_05349290(cVar2);
      if (cVar3 != '\0') {
        if (param_2 <= param_1) {
          return param_1;
        }
LAB_05349b58:
        return param_1 + 1;
      }
      if (cVar2 == '\0') {
        pcVar1 = param_1 + 1;
        if (param_2 <= pcVar1) {
          return pcVar1;
        }
        cVar2 = FUN_05349290(param_1[1]);
        param_1 = pcVar1;
        if (cVar2 == '\0') {
          return pcVar1;
        }
        goto LAB_05349b58;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


/* EA::IO::Path::FindComponentFwd(char16_t*, char16_t*) */

wchar16 * EA::IO::Path::FindComponentFwd(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  cVar3 = FUN_053492f4(param_1,param_2);
  if (cVar3 != '\0') {
    param_1 = param_1 + 2;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return param_1;
    }
    wVar1 = *param_1;
    cVar3 = FUN_053492a0(wVar1);
    if (cVar3 != '\0') break;
    if (wVar1 == L'\0') {
      pwVar2 = param_1 + 1;
      if (param_2 <= pwVar2) {
        return pwVar2;
      }
      cVar3 = FUN_053492a0(param_1[1]);
      if (cVar3 == '\0') {
        return pwVar2;
      }
      goto LAB_05349d0c;
    }
    param_1 = param_1 + 1;
  }
  pwVar2 = param_1;
  if (param_2 <= param_1) {
    return param_1;
  }
LAB_05349d0c:
  return pwVar2 + 1;
}


/* EA::IO::Path::FindComponentFwd(char32_t*, char32_t*) */

wchar32 * EA::IO::Path::FindComponentFwd(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  cVar3 = FUN_0534932c(param_1,param_2);
  if (cVar3 != '\0') {
    param_1 = param_1 + 2;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return param_1;
    }
    wVar1 = *param_1;
    cVar3 = FUN_053492b0(wVar1);
    if (cVar3 != '\0') break;
    if (wVar1 == L'\0') {
      pwVar2 = param_1 + 1;
      if (param_2 <= pwVar2) {
        return pwVar2;
      }
      cVar3 = FUN_053492b0(param_1[1]);
      if (cVar3 == '\0') {
        return pwVar2;
      }
      goto LAB_05349ec0;
    }
    param_1 = param_1 + 1;
  }
  pwVar2 = param_1;
  if (param_2 <= param_1) {
    return param_1;
  }
LAB_05349ec0:
  return pwVar2 + 1;
}


/* EA::IO::Path::FindComponentFwd(char const*, char const*) */

char * EA::IO::Path::FindComponentFwd(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  cVar2 = FUN_053492bc(param_1,param_2);
  if (cVar2 != '\0') {
    param_1 = param_1 + 2;
  }
  if (param_1 < param_2) {
    do {
      cVar2 = *param_1;
      cVar3 = FUN_05349290(cVar2);
      if (cVar3 != '\0') {
        if (param_2 <= param_1) {
          return param_1;
        }
LAB_05349b58:
        return param_1 + 1;
      }
      if (cVar2 == '\0') {
        pcVar1 = param_1 + 1;
        if (param_2 <= pcVar1) {
          return pcVar1;
        }
        cVar2 = FUN_05349290(param_1[1]);
        param_1 = pcVar1;
        if (cVar2 == '\0') {
          return pcVar1;
        }
        goto LAB_05349b58;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


/* EA::IO::Path::FindComponentFwd(char16_t const*, char16_t const*) */

wchar16 * EA::IO::Path::FindComponentFwd(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  cVar3 = FUN_053492f4(param_1,param_2);
  if (cVar3 != '\0') {
    param_1 = param_1 + 2;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return param_1;
    }
    wVar1 = *param_1;
    cVar3 = FUN_053492a0(wVar1);
    if (cVar3 != '\0') break;
    if (wVar1 == L'\0') {
      pwVar2 = param_1 + 1;
      if (param_2 <= pwVar2) {
        return pwVar2;
      }
      cVar3 = FUN_053492a0(param_1[1]);
      if (cVar3 == '\0') {
        return pwVar2;
      }
      goto LAB_05349d0c;
    }
    param_1 = param_1 + 1;
  }
  pwVar2 = param_1;
  if (param_2 <= param_1) {
    return param_1;
  }
LAB_05349d0c:
  return pwVar2 + 1;
}


/* EA::IO::Path::FindComponentFwd(wchar_t*, wchar_t*) */

wchar_t * EA::IO::Path::FindComponentFwd(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  cVar3 = FUN_0534932c(param_1,param_2);
  if (cVar3 != '\0') {
    param_1 = param_1 + 2;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return param_1;
    }
    wVar1 = *param_1;
    cVar3 = FUN_053492b0(wVar1);
    if (cVar3 != '\0') break;
    if (wVar1 == L'\0') {
      pwVar2 = param_1 + 1;
      if (param_2 <= pwVar2) {
        return pwVar2;
      }
      cVar3 = FUN_053492b0(param_1[1]);
      if (cVar3 == '\0') {
        return pwVar2;
      }
      goto LAB_05349ec0;
    }
    param_1 = param_1 + 1;
  }
  pwVar2 = param_1;
  if (param_2 <= param_1) {
    return param_1;
  }
LAB_05349ec0:
  return pwVar2 + 1;
}


/* EA::IO::Path::FindComponentRvs(char*, char*) */

char * EA::IO::Path::FindComponentRvs(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  pcVar4 = param_2;
  if (param_1 < param_2) {
    cVar3 = param_2[-1];
    cVar1 = FUN_05349290(cVar3);
    if (cVar1 != '\0') {
      pcVar4 = param_2 + -1;
      if (pcVar4 <= param_1) goto LAB_05349c18;
      cVar3 = param_2[-2];
    }
    if (cVar3 != '\0') goto LAB_05349bfc;
    do {
      pcVar4 = pcVar4 + -1;
      if (pcVar4 <= param_1) break;
LAB_05349bfc:
      cVar3 = pcVar4[-1];
      bVar2 = FUN_05349290(cVar3);
    } while (bVar2 < (cVar3 != '\0'));
  }
LAB_05349c18:
  if (((pcVar4 == param_1 + 2) && (cVar3 = FUN_05349290(*param_1), cVar3 != '\0')) &&
     (cVar3 = FUN_05349290(param_1[1]), cVar3 != '\0')) {
    pcVar4 = param_1;
  }
  return pcVar4;
}


/* EA::IO::Path::FindComponentRvs(char16_t*, char16_t*) */

wchar16 * EA::IO::Path::FindComponentRvs(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  char cVar2;
  byte bVar3;
  wchar16 *pwVar4;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  pwVar4 = param_2;
  if (param_1 < param_2) {
    wVar1 = param_2[-1];
    cVar2 = FUN_053492a0(wVar1);
    if (cVar2 != '\0') {
      pwVar4 = param_2 + -1;
      if (pwVar4 <= param_1) goto LAB_05349dcc;
      wVar1 = param_2[-2];
    }
    if (wVar1 != L'\0') goto LAB_05349db0;
    do {
      pwVar4 = pwVar4 + -1;
      if (pwVar4 <= param_1) break;
LAB_05349db0:
      wVar1 = pwVar4[-1];
      bVar3 = FUN_053492a0(wVar1);
    } while (bVar3 < (wVar1 != L'\0'));
  }
LAB_05349dcc:
  if (((pwVar4 == param_1 + 2) && (cVar2 = FUN_053492a0(*param_1), cVar2 != '\0')) &&
     (cVar2 = FUN_053492a0(param_1[1]), cVar2 != '\0')) {
    pwVar4 = param_1;
  }
  return pwVar4;
}


/* EA::IO::Path::FindComponentRvs(char32_t*, char32_t*) */

wchar32 * EA::IO::Path::FindComponentRvs(wchar32 *param_1,wchar32 *param_2)

{
  char cVar1;
  byte bVar2;
  wchar32 *pwVar3;
  wchar32 wVar4;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  pwVar3 = param_2;
  if (param_1 < param_2) {
    wVar4 = param_2[-1];
    cVar1 = FUN_053492b0(wVar4);
    if (cVar1 != '\0') {
      pwVar3 = param_2 + -1;
      if (pwVar3 <= param_1) goto LAB_05349f80;
      wVar4 = param_2[-2];
    }
    if (wVar4 != L'\0') goto LAB_05349f64;
    do {
      pwVar3 = pwVar3 + -1;
      if (pwVar3 <= param_1) break;
LAB_05349f64:
      wVar4 = pwVar3[-1];
      bVar2 = FUN_053492b0(wVar4);
    } while (bVar2 < (wVar4 != L'\0'));
  }
LAB_05349f80:
  if (((pwVar3 == param_1 + 2) && (cVar1 = FUN_053492b0(*param_1), cVar1 != '\0')) &&
     (cVar1 = FUN_053492b0(param_1[1]), cVar1 != '\0')) {
    pwVar3 = param_1;
  }
  return pwVar3;
}


/* EA::IO::Path::FindComponentRvs(char const*, char const*) */

char * EA::IO::Path::FindComponentRvs(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  pcVar4 = param_2;
  if (param_1 < param_2) {
    cVar3 = param_2[-1];
    cVar1 = FUN_05349290(cVar3);
    if (cVar1 != '\0') {
      pcVar4 = param_2 + -1;
      if (pcVar4 <= param_1) goto LAB_05349c18;
      cVar3 = param_2[-2];
    }
    if (cVar3 != '\0') goto LAB_05349bfc;
    do {
      pcVar4 = pcVar4 + -1;
      if (pcVar4 <= param_1) break;
LAB_05349bfc:
      cVar3 = pcVar4[-1];
      bVar2 = FUN_05349290(cVar3);
    } while (bVar2 < (cVar3 != '\0'));
  }
LAB_05349c18:
  if (((pcVar4 == param_1 + 2) && (cVar3 = FUN_05349290(*param_1), cVar3 != '\0')) &&
     (cVar3 = FUN_05349290(param_1[1]), cVar3 != '\0')) {
    pcVar4 = param_1;
  }
  return pcVar4;
}


/* EA::IO::Path::FindComponentRvs(char16_t const*, char16_t const*) */

wchar16 * EA::IO::Path::FindComponentRvs(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  char cVar2;
  byte bVar3;
  wchar16 *pwVar4;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  pwVar4 = param_2;
  if (param_1 < param_2) {
    wVar1 = param_2[-1];
    cVar2 = FUN_053492a0(wVar1);
    if (cVar2 != '\0') {
      pwVar4 = param_2 + -1;
      if (pwVar4 <= param_1) goto LAB_05349dcc;
      wVar1 = param_2[-2];
    }
    if (wVar1 != L'\0') goto LAB_05349db0;
    do {
      pwVar4 = pwVar4 + -1;
      if (pwVar4 <= param_1) break;
LAB_05349db0:
      wVar1 = pwVar4[-1];
      bVar3 = FUN_053492a0(wVar1);
    } while (bVar3 < (wVar1 != L'\0'));
  }
LAB_05349dcc:
  if (((pwVar4 == param_1 + 2) && (cVar2 = FUN_053492a0(*param_1), cVar2 != '\0')) &&
     (cVar2 = FUN_053492a0(param_1[1]), cVar2 != '\0')) {
    pwVar4 = param_1;
  }
  return pwVar4;
}


/* EA::IO::Path::FindComponentRvs(wchar_t*, wchar_t*) */

wchar_t * EA::IO::Path::FindComponentRvs(wchar_t *param_1,wchar_t *param_2)

{
  char cVar1;
  byte bVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  pwVar3 = param_2;
  if (param_1 < param_2) {
    wVar4 = param_2[-1];
    cVar1 = FUN_053492b0(wVar4);
    if (cVar1 != '\0') {
      pwVar3 = param_2 + -1;
      if (pwVar3 <= param_1) goto LAB_05349f80;
      wVar4 = param_2[-2];
    }
    if (wVar4 != L'\0') goto LAB_05349f64;
    do {
      pwVar3 = pwVar3 + -1;
      if (pwVar3 <= param_1) break;
LAB_05349f64:
      wVar4 = pwVar3[-1];
      bVar2 = FUN_053492b0(wVar4);
    } while (bVar2 < (wVar4 != L'\0'));
  }
LAB_05349f80:
  if (((pwVar3 == param_1 + 2) && (cVar1 = FUN_053492b0(*param_1), cVar1 != '\0')) &&
     (cVar1 = FUN_053492b0(param_1[1]), cVar1 != '\0')) {
    pwVar3 = param_1;
  }
  return pwVar3;
}


/* EA::IO::Path::GetPathComponentStart(char*, char*, int) */

char * EA::IO::Path::GetPathComponentStart(char *param_1,char *param_2,int param_3)

{
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  if (param_3 < 0) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + 1;
        param_2 = (char *)FindComponentRvs(param_1,param_2);
        if (param_2 <= param_1) {
          return param_2;
        }
      } while (param_3 < 0);
    }
    return param_2;
  }
  for (; (param_1 < param_2 && (0 < param_3)); param_3 = param_3 + -1) {
    param_1 = (char *)FindComponentFwd(param_1,param_2);
  }
  return param_1;
}


/* EA::IO::Path::GetPathComponentStart(char16_t*, char16_t*, int) */

wchar16 * EA::IO::Path::GetPathComponentStart(wchar16 *param_1,wchar16 *param_2,int param_3)

{
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  if (param_3 < 0) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + 1;
        param_2 = (wchar16 *)FindComponentRvs(param_1,param_2);
        if (param_2 <= param_1) {
          return param_2;
        }
      } while (param_3 < 0);
    }
    return param_2;
  }
  for (; (param_1 < param_2 && (0 < param_3)); param_3 = param_3 + -1) {
    param_1 = (wchar16 *)FindComponentFwd(param_1,param_2);
  }
  return param_1;
}


/* EA::IO::Path::GetPathComponentStart(char32_t*, char32_t*, int) */

wchar32 * EA::IO::Path::GetPathComponentStart(wchar32 *param_1,wchar32 *param_2,int param_3)

{
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  if (param_3 < 0) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + 1;
        param_2 = (wchar32 *)FindComponentRvs(param_1,param_2);
        if (param_2 <= param_1) {
          return param_2;
        }
      } while (param_3 < 0);
    }
    return param_2;
  }
  for (; (param_1 < param_2 && (0 < param_3)); param_3 = param_3 + -1) {
    param_1 = (wchar32 *)FindComponentFwd(param_1,param_2);
  }
  return param_1;
}


/* EA::IO::Path::GetPathComponentEnd(char*, char*, int) */

char * EA::IO::Path::GetPathComponentEnd(char *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  iVar4 = param_3 + 1;
  if (param_3 < 0) {
    for (; (param_1 < param_2 && (iVar4 < 0)); iVar4 = iVar4 + 1) {
      param_2 = (char *)FindComponentRvs(param_1,param_2);
    }
    bVar1 = param_1 < param_2;
    param_1 = param_2;
    if (bVar1) {
      cVar2 = FUN_05349290(param_2[-1]);
      return param_2 + -(ulong)(cVar2 != '\0');
    }
  }
  else {
    pcVar3 = param_1;
    if (param_1 < param_2) {
      do {
        iVar4 = iVar4 + -1;
        pcVar3 = (char *)FindComponentFwd(pcVar3,param_2);
        if (param_2 <= pcVar3) break;
      } while (0 < iVar4);
      bVar1 = param_1 < pcVar3;
      param_1 = pcVar3;
      if (((bVar1) && (iVar4 == 0)) && (cVar2 = FUN_05349290(pcVar3[-1]), cVar2 != '\0')) {
        param_1 = pcVar3 + -1;
      }
    }
  }
  return param_1;
}


/* EA::IO::Path::GetPathComponentEnd(char16_t*, char16_t*, int) */

wchar16 * EA::IO::Path::GetPathComponentEnd(wchar16 *param_1,wchar16 *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  wchar16 *pwVar3;
  int iVar4;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  iVar4 = param_3 + 1;
  if (param_3 < 0) {
    for (; (param_1 < param_2 && (iVar4 < 0)); iVar4 = iVar4 + 1) {
      param_2 = (wchar16 *)FindComponentRvs(param_1,param_2);
    }
    bVar1 = param_1 < param_2;
    param_1 = param_2;
    if (bVar1) {
      cVar2 = FUN_053492a0(param_2[-1]);
      if (cVar2 != '\0') {
        param_2 = param_2 + -1;
      }
      return param_2;
    }
  }
  else {
    pwVar3 = param_1;
    if (param_1 < param_2) {
      do {
        iVar4 = iVar4 + -1;
        pwVar3 = (wchar16 *)FindComponentFwd(pwVar3,param_2);
        if (param_2 <= pwVar3) break;
      } while (0 < iVar4);
      bVar1 = param_1 < pwVar3;
      param_1 = pwVar3;
      if (((bVar1) && (iVar4 == 0)) && (cVar2 = FUN_053492a0(pwVar3[-1]), cVar2 != '\0')) {
        param_1 = pwVar3 + -1;
      }
    }
  }
  return param_1;
}


/* EA::IO::Path::GetPathComponentEnd(char32_t*, char32_t*, int) */

wchar32 * EA::IO::Path::GetPathComponentEnd(wchar32 *param_1,wchar32 *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  wchar32 *pwVar3;
  int iVar4;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  iVar4 = param_3 + 1;
  if (param_3 < 0) {
    for (; (param_1 < param_2 && (iVar4 < 0)); iVar4 = iVar4 + 1) {
      param_2 = (wchar32 *)FindComponentRvs(param_1,param_2);
    }
    bVar1 = param_1 < param_2;
    param_1 = param_2;
    if (bVar1) {
      cVar2 = FUN_053492b0(param_2[-1]);
      if (cVar2 != '\0') {
        param_2 = param_2 + -1;
      }
      return param_2;
    }
  }
  else {
    pwVar3 = param_1;
    if (param_1 < param_2) {
      do {
        iVar4 = iVar4 + -1;
        pwVar3 = (wchar32 *)FindComponentFwd(pwVar3,param_2);
        if (param_2 <= pwVar3) break;
      } while (0 < iVar4);
      bVar1 = param_1 < pwVar3;
      param_1 = pwVar3;
      if (((bVar1) && (iVar4 == 0)) && (cVar2 = FUN_053492b0(pwVar3[-1]), cVar2 != '\0')) {
        param_1 = pwVar3 + -1;
      }
    }
  }
  return param_1;
}


/* EA::IO::Path::GetFileName(char const*, char const*) */

char * EA::IO::Path::GetFileName(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  if (param_1 < param_2) {
    cVar1 = FUN_05349290(param_2[-1]);
    bVar2 = 0;
    pcVar3 = param_2;
    if (cVar1 != '\0') {
      return param_2;
    }
    while ((pcVar4 = pcVar3, bVar2 < (pcVar3[-1] != '\0') &&
           (pcVar4 = pcVar3 + -1, pcVar4 != param_1))) {
      bVar2 = FUN_05349290(pcVar3[-2]);
      pcVar3 = pcVar4;
    }
    if (pcVar4 != param_1 + 2) {
      return pcVar4;
    }
  }
  else {
    pcVar4 = param_2;
    if (param_2 != param_1 + 2) {
      return param_2;
    }
  }
  cVar1 = FUN_053492bc(param_1,param_2);
  if (cVar1 != '\0') {
    pcVar4 = param_2;
  }
  return pcVar4;
}


/* EA::IO::Path::GetFileName(char16_t const*, char16_t const*) */

wchar16 * EA::IO::Path::GetFileName(wchar16 *param_1,wchar16 *param_2)

{
  char cVar1;
  byte bVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  if (param_1 < param_2) {
    cVar1 = FUN_053492a0(param_2[-1]);
    bVar2 = 0;
    pwVar3 = param_2;
    if (cVar1 != '\0') {
      return param_2;
    }
    while ((pwVar4 = pwVar3, bVar2 < (pwVar3[-1] != L'\0') &&
           (pwVar4 = pwVar3 + -1, param_1 < pwVar4))) {
      bVar2 = FUN_053492a0(pwVar3[-2]);
      pwVar3 = pwVar4;
    }
    if (pwVar4 != param_1 + 2) {
      return pwVar4;
    }
  }
  else {
    pwVar4 = param_2;
    if (param_2 != param_1 + 2) {
      return param_2;
    }
  }
  cVar1 = FUN_053492f4(param_1,param_2);
  if (cVar1 != '\0') {
    pwVar4 = param_2;
  }
  return pwVar4;
}


/* EA::IO::Path::GetFileName(char32_t const*, char32_t const*) */

wchar32 * EA::IO::Path::GetFileName(wchar32 *param_1,wchar32 *param_2)

{
  char cVar1;
  byte bVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  if (param_1 < param_2) {
    cVar1 = FUN_053492b0(param_2[-1]);
    bVar2 = 0;
    pwVar3 = param_2;
    if (cVar1 != '\0') {
      return param_2;
    }
    while ((pwVar4 = pwVar3, bVar2 < (pwVar3[-1] != L'\0') &&
           (pwVar4 = pwVar3 + -1, param_1 < pwVar4))) {
      bVar2 = FUN_053492b0(pwVar3[-2]);
      pwVar3 = pwVar4;
    }
    if (pwVar4 != param_1 + 2) {
      return pwVar4;
    }
  }
  else {
    pwVar4 = param_2;
    if (param_2 != param_1 + 2) {
      return param_2;
    }
  }
  cVar1 = FUN_0534932c(param_1,param_2);
  if (cVar1 != '\0') {
    pwVar4 = param_2;
  }
  return pwVar4;
}


/* EA::IO::Path::GetFileName(EA::IO::Path::PathString8 const&) */

void EA::IO::Path::GetFileName(PathString8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_053496b0(*(undefined8 *)param_1);
  pcVar2 = (char *)FUN_053496b4(*(undefined8 *)(param_1 + 8));
  GetFileName(pcVar1,pcVar2);
  return;
}


/* EA::IO::Path::GetFileName(EA::IO::Path::PathString16 const&) */

void EA::IO::Path::GetFileName(PathString16 *param_1)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_053496b8(*(undefined8 *)param_1);
  pwVar2 = (wchar16 *)FUN_053496bc(*(undefined8 *)(param_1 + 8));
  GetFileName(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::GetFileName(EA::IO::Path::PathString32 const&) */

void EA::IO::Path::GetFileName(PathString32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_053496c0(*(undefined8 *)param_1);
  pwVar2 = (wchar32 *)FUN_053496c4(*(undefined8 *)(param_1 + 8));
  GetFileName(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::GetFileExtension(char const*, char const*) */

char * EA::IO::Path::GetFileExtension(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  if ((param_2 <= param_1) || (cVar1 = FUN_05349290(param_2[-1]), cVar1 == '\0')) {
    cVar1 = FUN_053492bc(param_1,param_2);
    if (cVar1 != '\0') {
      param_1 = (char *)FindComponentFwd(param_1,param_2);
    }
    pcVar3 = param_2 + -1;
    if (param_1 <= pcVar3) {
      do {
        cVar1 = *pcVar3;
        cVar2 = FUN_05349290(cVar1);
        if (cVar1 == '\0') {
          return param_2;
        }
        if (cVar2 != '\0') {
          return param_2;
        }
        if (cVar1 == '.') {
          return pcVar3;
        }
        pcVar3 = pcVar3 + -1;
      } while (pcVar3 != param_1 + -1);
    }
  }
  return param_2;
}


/* EA::IO::Path::GetFileExtension(char16_t const*, char16_t const*) */

wchar16 * EA::IO::Path::GetFileExtension(wchar16 *param_1,wchar16 *param_2)

{
  wchar16 wVar1;
  wchar16 *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  if ((param_2 <= param_1) || (cVar3 = FUN_053492a0(param_2[-1]), cVar3 == '\0')) {
    cVar3 = FUN_053492f4(param_1,param_2);
    pwVar2 = param_2;
    if (cVar3 != '\0') {
      param_1 = (wchar16 *)FindComponentFwd(param_1,param_2);
    }
    while (pwVar2 = pwVar2 + -1, param_1 <= pwVar2) {
      wVar1 = *pwVar2;
      cVar3 = FUN_053492a0(wVar1);
      if (wVar1 == L'\0') {
        return param_2;
      }
      if (cVar3 != '\0') {
        return param_2;
      }
      if (wVar1 == L'.') {
        return pwVar2;
      }
    }
  }
  return param_2;
}


/* EA::IO::Path::GetFileExtension(char32_t const*, char32_t const*) */

wchar_t * EA::IO::Path::GetFileExtension(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  if ((param_2 <= param_1) || (cVar3 = FUN_053492b0(param_2[-1]), cVar3 == '\0')) {
    cVar3 = FUN_0534932c(param_1,param_2);
    pwVar2 = param_2;
    if (cVar3 != '\0') {
      param_1 = (wchar32 *)FindComponentFwd(param_1,param_2);
    }
    while (pwVar2 = pwVar2 + -1, param_1 <= pwVar2) {
      wVar1 = *pwVar2;
      cVar3 = FUN_053492b0(wVar1);
      if (wVar1 == L'\0') {
        return param_2;
      }
      if (cVar3 != '\0') {
        return param_2;
      }
      if (wVar1 == L'.') {
        return pwVar2;
      }
    }
  }
  return param_2;
}


/* EA::IO::Path::GetFileExtension(EA::IO::Path::PathString8 const&) */

void EA::IO::Path::GetFileExtension(PathString8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_053496b0(*(undefined8 *)param_1);
  pcVar2 = (char *)FUN_053496b4(*(undefined8 *)(param_1 + 8));
  GetFileExtension(pcVar1,pcVar2);
  return;
}


/* EA::IO::Path::GetFileExtension(EA::IO::Path::PathString16 const&) */

void EA::IO::Path::GetFileExtension(PathString16 *param_1)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_053496b8(*(undefined8 *)param_1);
  pwVar2 = (wchar16 *)FUN_053496bc(*(undefined8 *)(param_1 + 8));
  GetFileExtension(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::GetFileExtension(EA::IO::Path::PathString32 const&) */

void EA::IO::Path::GetFileExtension(PathString32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_053496c0(*(undefined8 *)param_1);
  pwVar2 = (wchar32 *)FUN_053496c4(*(undefined8 *)(param_1 + 8));
  GetFileExtension(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::TruncateComponent(EA::IO::Path::PathString8&, int) */

void EA::IO::Path::TruncateComponent(PathString8 *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = (char *)FUN_053496b0(*(undefined8 *)param_1);
  pcVar2 = (char *)FUN_053496b4(*(undefined8 *)(param_1 + 8));
  uVar3 = GetPathComponentStart(pcVar1,pcVar2,param_2);
  uVar4 = FUN_053496b4(*(undefined8 *)(param_1 + 8));
  FUN_05349760(param_1 + 8,uVar3,uVar4);
  return;
}


/* EA::IO::Path::TruncateComponent(EA::IO::Path::PathString16&, int) */

void EA::IO::Path::TruncateComponent(PathString16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pwVar1 = (wchar16 *)FUN_053496b8(*(undefined8 *)param_1);
  pwVar2 = (wchar16 *)FUN_053496bc(*(undefined8 *)(param_1 + 8));
  uVar3 = GetPathComponentStart(pwVar1,pwVar2,param_2);
  uVar4 = FUN_053496bc(*(undefined8 *)(param_1 + 8));
  FUN_053497bc(param_1 + 8,uVar3,uVar4);
  return;
}


/* EA::IO::Path::TruncateComponent(EA::IO::Path::PathString32&, int) */

void EA::IO::Path::TruncateComponent(PathString32 *param_1,int param_2)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pwVar1 = (wchar32 *)FUN_053496c0(*(undefined8 *)param_1);
  pwVar2 = (wchar32 *)FUN_053496c4(*(undefined8 *)(param_1 + 8));
  uVar3 = GetPathComponentStart(pwVar1,pwVar2,param_2);
  uVar4 = FUN_053496c4(*(undefined8 *)(param_1 + 8));
  FUN_0534981c(param_1 + 8,uVar3,uVar4);
  return;
}


/* EA::IO::Path::Canonicalize(EA::IO::Path::PathString8&, char) */

PathString8 * EA::IO::Path::Canonicalize(PathString8 *param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_053496b0(*(undefined8 *)param_1);
  pcVar2 = (char *)FUN_053496b4(*(undefined8 *)(param_1 + 8));
  if (pcVar1 != pcVar2) {
    do {
      if ((*pcVar1 == '\\') || (*pcVar1 == '/')) {
        *pcVar1 = param_2;
        pcVar2 = (char *)FUN_053496b4(*(undefined8 *)(param_1 + 8));
      }
      pcVar1 = pcVar1 + 1;
    } while (pcVar1 != pcVar2);
  }
  return param_1;
}


/* EA::IO::Path::Canonicalize(EA::IO::Path::PathString16&, char16_t) */

PathString16 * EA::IO::Path::Canonicalize(PathString16 *param_1,wchar16 param_2)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_053496b8(*(undefined8 *)param_1);
  pwVar2 = (wchar16 *)FUN_053496bc(*(undefined8 *)(param_1 + 8));
  for (; pwVar1 != pwVar2; pwVar1 = pwVar1 + 1) {
    if ((*pwVar1 == L'\\') || (*pwVar1 == L'/')) {
      *pwVar1 = param_2;
    }
  }
  return param_1;
}


/* EA::IO::Path::Canonicalize(EA::IO::Path::PathString32&, char32_t) */

PathString32 * EA::IO::Path::Canonicalize(PathString32 *param_1,wchar32 param_2)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_053496c0(*(undefined8 *)param_1);
  pwVar2 = (wchar32 *)FUN_053496c4(*(undefined8 *)(param_1 + 8));
  for (; pwVar1 != pwVar2; pwVar1 = pwVar1 + 1) {
    if ((*pwVar1 == L'\\') || (*pwVar1 == L'/')) {
      *pwVar1 = param_2;
    }
  }
  return param_1;
}


/* EA::IO::Path::Simplify(EA::IO::Path::PathString8&) */

void EA::IO::Path::Simplify(PathString8 *param_1)

{
  thunk_FUN_0534b3a4(param_1,0);
  return;
}


/* EA::IO::Path::Simplify(EA::IO::Path::PathString16&) */

void EA::IO::Path::Simplify(PathString16 *param_1)

{
  thunk_FUN_0534b83c(param_1,0);
  return;
}


/* EA::IO::Path::Simplify(EA::IO::Path::PathString32&) */

void EA::IO::Path::Simplify(PathString32 *param_1)

{
  thunk_FUN_0534bce4(param_1,0);
  return;
}


/* EA::IO::Path::Normalize(EA::IO::Path::PathString8&) */

void EA::IO::Path::Normalize(PathString8 *param_1)

{
  thunk_FUN_0534b3a4(param_1,1);
  return;
}


/* EA::IO::Path::Normalize(EA::IO::Path::PathString16&) */

void EA::IO::Path::Normalize(PathString16 *param_1)

{
  thunk_FUN_0534b83c(param_1,1);
  return;
}


/* EA::IO::Path::Normalize(EA::IO::Path::PathString32&) */

void EA::IO::Path::Normalize(PathString32 *param_1)

{
  thunk_FUN_0534bce4(param_1,1);
  return;
}


/* EA::IO::Path::IsRelative(char const*, char const*) */

byte EA::IO::Path::IsRelative(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  bVar2 = 1;
  if (param_1 < param_2) {
    cVar1 = FUN_05349364(param_1);
    bVar2 = 0;
    if (cVar1 == '\0') {
      bVar2 = FUN_05349290(*param_1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* EA::IO::Path::IsRelative(char16_t const*, char16_t const*) */

byte EA::IO::Path::IsRelative(wchar16 *param_1,wchar16 *param_2)

{
  char cVar1;
  byte bVar2;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  bVar2 = 1;
  if (param_1 < param_2) {
    cVar1 = FUN_053493c4(param_1);
    bVar2 = 0;
    if (cVar1 == '\0') {
      bVar2 = FUN_053492a0(*param_1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* EA::IO::Path::IsRelative(char32_t const*, char32_t const*) */

byte EA::IO::Path::IsRelative(wchar32 *param_1,wchar32 *param_2)

{
  char cVar1;
  byte bVar2;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  bVar2 = 1;
  if (param_1 < param_2) {
    cVar1 = FUN_05349424(param_1);
    bVar2 = 0;
    if (cVar1 == '\0') {
      bVar2 = FUN_053492b0(*param_1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* EA::IO::Path::IsRelative(EA::IO::Path::PathString8 const&) */

void EA::IO::Path::IsRelative(PathString8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0534973c(*(undefined8 *)param_1);
  pcVar2 = (char *)FUN_05349740(*(undefined8 *)(param_1 + 8));
  IsRelative(pcVar1,pcVar2);
  return;
}


/* EA::IO::Path::IsRelative(EA::IO::Path::PathString16 const&) */

void EA::IO::Path::IsRelative(PathString16 *param_1)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_05349744(*(undefined8 *)param_1);
  pwVar2 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_1 + 8));
  IsRelative(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::IsRelative(EA::IO::Path::PathString32 const&) */

void EA::IO::Path::IsRelative(PathString32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_0534974c(*(undefined8 *)param_1);
  pwVar2 = (wchar32 *)FUN_05349750(*(undefined8 *)(param_1 + 8));
  IsRelative(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::Compare(EA::IO::Path::PathString8 const&, EA::IO::Path::PathString8 const&,
   EA::IO::CaseSensitivity, bool) */

undefined8
EA::IO::Path::Compare(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  pcVar1 = (char *)FUN_0534973c(*param_1);
  pcVar2 = (char *)FUN_0534973c(*param_2);
  while ((pcVar3 = (char *)FUN_05349740(param_1[1]), pcVar1 < pcVar3 &&
         (pcVar4 = (char *)FUN_05349740(param_2[1]), pcVar2 < pcVar4))) {
    pcVar3 = (char *)FindComponentFwd(pcVar1,pcVar3);
    pcVar4 = (char *)FUN_05349740(param_2[1]);
    pcVar4 = (char *)FindComponentFwd(pcVar2,pcVar4);
    uVar5 = Compare(pcVar1,pcVar3,pcVar2,pcVar4,param_3,param_4);
    pcVar1 = pcVar3;
    pcVar2 = pcVar4;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  return 0;
}


/* EA::IO::Path::Compare(EA::IO::Path::PathString16 const&, EA::IO::Path::PathString16 const&,
   EA::IO::CaseSensitivity, bool) */

undefined8
EA::IO::Path::Compare(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  undefined8 uVar5;
  
  pwVar1 = (wchar16 *)FUN_05349744(*param_1);
  pwVar2 = (wchar16 *)FUN_05349744(*param_2);
  while ((pwVar3 = (wchar16 *)FUN_05349748(param_1[1]), pwVar1 < pwVar3 &&
         (pwVar4 = (wchar16 *)FUN_05349748(param_2[1]), pwVar2 < pwVar4))) {
    pwVar3 = (wchar16 *)FindComponentFwd(pwVar1,pwVar3);
    pwVar4 = (wchar16 *)FUN_05349748(param_2[1]);
    pwVar4 = (wchar16 *)FindComponentFwd(pwVar2,pwVar4);
    uVar5 = Compare(pwVar1,pwVar3,pwVar2,pwVar4,param_3,param_4);
    pwVar1 = pwVar3;
    pwVar2 = pwVar4;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  return 0;
}


/* EA::IO::Path::Compare(EA::IO::Path::PathString32 const&, EA::IO::Path::PathString32 const&,
   EA::IO::CaseSensitivity, bool) */

undefined8
EA::IO::Path::Compare(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  
  pwVar1 = (wchar_t *)FUN_0534974c(*param_1);
  pwVar2 = (wchar_t *)FUN_0534974c(*param_2);
  while ((pwVar3 = (wchar_t *)FUN_05349750(param_1[1]), pwVar1 < pwVar3 &&
         (pwVar4 = (wchar_t *)FUN_05349750(param_2[1]), pwVar2 < pwVar4))) {
    pwVar3 = (wchar_t *)FindComponentFwd(pwVar1,pwVar3);
    pwVar4 = (wchar_t *)FUN_05349750(param_2[1]);
    pwVar4 = (wchar_t *)FindComponentFwd(pwVar2,pwVar4);
    uVar5 = Compare(pwVar1,pwVar3,pwVar2,pwVar4,param_3,param_4);
    pwVar1 = pwVar3;
    pwVar2 = pwVar4;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  return 0;
}


/* EA::IO::Path::IsSubdirectory(EA::IO::Path::PathString8 const&, EA::IO::Path::PathString8 const&)
    */

bool EA::IO::Path::IsSubdirectory(PathString8 *param_1,PathString8 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = (char *)FUN_0534973c(*(undefined8 *)param_1);
  pcVar3 = (char *)FUN_0534973c(*(undefined8 *)param_2);
  while ((pcVar5 = pcVar2, pcVar2 = (char *)FUN_05349740(*(undefined8 *)(param_1 + 8)),
         pcVar5 < pcVar2 &&
         (pcVar4 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8)), pcVar3 < pcVar4))) {
    pcVar2 = (char *)FindComponentFwd(pcVar5,pcVar2);
    pcVar4 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
    pcVar4 = (char *)FindComponentFwd(pcVar3,pcVar4);
    iVar1 = Compare(pcVar5,pcVar2,pcVar3,pcVar4,0,1);
    pcVar3 = pcVar4;
    if (iVar1 != 0) {
      pcVar2 = (char *)FUN_05349740(*(undefined8 *)(param_1 + 8));
      return pcVar2 <= pcVar5;
    }
  }
  return pcVar2 <= pcVar5;
}


/* EA::IO::Path::IsSubdirectory(EA::IO::Path::PathString16 const&, EA::IO::Path::PathString16
   const&) */

bool EA::IO::Path::IsSubdirectory(PathString16 *param_1,PathString16 *param_2)

{
  int iVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  
  pwVar2 = (wchar16 *)FUN_05349744(*(undefined8 *)param_1);
  pwVar3 = (wchar16 *)FUN_05349744(*(undefined8 *)param_2);
  while ((pwVar5 = pwVar2, pwVar2 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_1 + 8)),
         pwVar5 < pwVar2 &&
         (pwVar4 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8)), pwVar3 < pwVar4))) {
    pwVar2 = (wchar16 *)FindComponentFwd(pwVar5,pwVar2);
    pwVar4 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
    pwVar4 = (wchar16 *)FindComponentFwd(pwVar3,pwVar4);
    iVar1 = Compare(pwVar5,pwVar2,pwVar3,pwVar4,0,1);
    pwVar3 = pwVar4;
    if (iVar1 != 0) {
      pwVar2 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_1 + 8));
      return pwVar2 <= pwVar5;
    }
  }
  return pwVar2 <= pwVar5;
}


/* EA::IO::Path::IsSubdirectory(EA::IO::Path::PathString32 const&, EA::IO::Path::PathString32
   const&) */

bool EA::IO::Path::IsSubdirectory(PathString32 *param_1,PathString32 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar2 = (wchar_t *)FUN_0534974c(*(undefined8 *)param_1);
  pwVar3 = (wchar_t *)FUN_0534974c(*(undefined8 *)param_2);
  while ((pwVar5 = pwVar2, pwVar2 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_1 + 8)),
         pwVar5 < pwVar2 &&
         (pwVar4 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_2 + 8)), pwVar3 < pwVar4))) {
    pwVar2 = (wchar_t *)FindComponentFwd(pwVar5,pwVar2);
    pwVar4 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_2 + 8));
    pwVar4 = (wchar_t *)FindComponentFwd(pwVar3,pwVar4);
    iVar1 = Compare(pwVar5,pwVar2,pwVar3,pwVar4,0,1);
    pwVar3 = pwVar4;
    if (iVar1 != 0) {
      pwVar2 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_1 + 8));
      return pwVar2 <= pwVar5;
    }
  }
  return pwVar2 <= pwVar5;
}


/* EA::IO::Path::GetHasTrailingSeparator(EA::IO::Path::PathString8 const&) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(PathString8 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar1 = FUN_053496c8(*(undefined8 *)param_1,uVar3);
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)FUN_05349968(uVar3);
    uVar3 = FUN_05349290(*puVar2);
    return uVar3;
  }
  return 0;
}


/* EA::IO::Path::GetHasTrailingSeparator(EA::IO::Path::PathString16 const&) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(PathString16 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar1 = FUN_053496f4(*(undefined8 *)param_1,uVar3);
  if (cVar1 == '\0') {
    puVar2 = (undefined2 *)FUN_053499bc(uVar3);
    uVar3 = FUN_053492a0(*puVar2);
    return uVar3;
  }
  return 0;
}


/* EA::IO::Path::GetHasTrailingSeparator(EA::IO::Path::PathString32 const&) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(PathString32 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar1 = FUN_05349718(*(undefined8 *)param_1,uVar3);
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_05349a10(uVar3);
    uVar3 = FUN_053492b0(*puVar2);
    return uVar3;
  }
  return 0;
}


/* EA::IO::Path::GetHasTrailingSeparator(char const*, unsigned long) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if (param_2 != 0) {
    uVar1 = FUN_05349290(param_1[param_2 - 1]);
    return uVar1;
  }
  return 0;
}


/* EA::IO::Path::GetHasTrailingSeparator(char16_t const*, unsigned long) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(wchar16 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if (param_2 != 0) {
    uVar1 = FUN_053492a0(param_1[param_2 - 1]);
    return uVar1;
  }
  return 0;
}


/* EA::IO::Path::GetHasTrailingSeparator(char32_t const*, unsigned long) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(wchar32 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if (param_2 != 0) {
    uVar1 = FUN_053492b0(param_1[param_2 - 1]);
    return uVar1;
  }
  return 0;
}


/* EA::IO::Path::EnsureTrailingSeparator(char*, unsigned long) */

bool EA::IO::Path::EnsureTrailingSeparator(char *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = StdC::Strlen(param_1);
  cVar2 = GetHasTrailingSeparator(param_1,uVar3 & 0xffffffff);
  if (cVar2 == '\0') {
    bVar1 = uVar3 + 2 <= param_2;
    if (bVar1) {
      param_1[uVar3] = '/';
      param_1[uVar3 + 1] = '\0';
    }
    return bVar1;
  }
  return false;
}


/* EA::IO::Path::EnsureTrailingSeparator(char16_t*, unsigned long) */

bool EA::IO::Path::EnsureTrailingSeparator(wchar16 *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = StdC::Strlen(param_1);
  cVar2 = GetHasTrailingSeparator(param_1,uVar3 & 0xffffffff);
  if (cVar2 == '\0') {
    bVar1 = uVar3 + 2 <= param_2;
    if (bVar1) {
      param_1[uVar3] = L'/';
      param_1[uVar3 + 1] = L'\0';
    }
    return bVar1;
  }
  return false;
}


/* EA::IO::Path::EnsureTrailingSeparator(char32_t*, unsigned long) */

bool EA::IO::Path::EnsureTrailingSeparator(wchar32 *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = StdC::Strlen(param_1);
  cVar2 = GetHasTrailingSeparator(param_1,uVar3 & 0xffffffff);
  if (cVar2 == '\0') {
    bVar1 = uVar3 + 2 <= param_2;
    if (bVar1) {
      param_1[uVar3] = L'/';
      param_1[uVar3 + 1] = L'\0';
    }
    return bVar1;
  }
  return false;
}


/* EA::IO::Path::StripTrailingSeparator(EA::IO::Path::PathString8&) */

PathString8 * EA::IO::Path::StripTrailingSeparator(PathString8 *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 != '\0') {
    FUN_05349a64(param_1 + 8);
  }
  return param_1;
}


/* EA::IO::Path::StripTrailingSeparator(EA::IO::Path::PathString16&) */

PathString16 * EA::IO::Path::StripTrailingSeparator(PathString16 *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 != '\0') {
    FUN_05349a7c(param_1 + 8);
  }
  return param_1;
}


/* EA::IO::Path::StripTrailingSeparator(EA::IO::Path::PathString32&) */

PathString32 * EA::IO::Path::StripTrailingSeparator(PathString32 *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 != '\0') {
    FUN_05349a8c(param_1 + 8);
  }
  return param_1;
}


/* EA::IO::Path::StripTrailingSeparator(char*, unsigned long) */

void EA::IO::Path::StripTrailingSeparator(char *param_1,ulong param_2)

{
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if ((param_2 != 0) && (param_1[param_2 - 1] == '/')) {
    param_1[param_2 - 1] = '\0';
    return;
  }
  return;
}


/* EA::IO::Path::StripTrailingSeparator(char16_t*, unsigned long) */

void EA::IO::Path::StripTrailingSeparator(wchar16 *param_1,ulong param_2)

{
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if ((param_2 != 0) && (param_1[param_2 - 1] == L'/')) {
    param_1[param_2 - 1] = L'\0';
    return;
  }
  return;
}


/* EA::IO::Path::StripTrailingSeparator(char32_t*, unsigned long) */

void EA::IO::Path::StripTrailingSeparator(wchar32 *param_1,ulong param_2)

{
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if ((param_2 != 0) && (param_1[param_2 - 1] == L'/')) {
    param_1[param_2 - 1] = L'\0';
    return;
  }
  return;
}


/* EA::IO::Path::FindComponentFwd(wchar_t const*, wchar_t const*) */

wchar_t * EA::IO::Path::FindComponentFwd(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  cVar3 = FUN_0534932c(param_1,param_2);
  if (cVar3 != '\0') {
    param_1 = param_1 + 2;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return param_1;
    }
    wVar1 = *param_1;
    cVar3 = FUN_053492b0(wVar1);
    if (cVar3 != '\0') break;
    if (wVar1 == L'\0') {
      pwVar2 = param_1 + 1;
      if (param_2 <= pwVar2) {
        return pwVar2;
      }
      cVar3 = FUN_053492b0(param_1[1]);
      if (cVar3 == '\0') {
        return pwVar2;
      }
      goto LAB_05349ec0;
    }
    param_1 = param_1 + 1;
  }
  pwVar2 = param_1;
  if (param_2 <= param_1) {
    return param_1;
  }
LAB_05349ec0:
  return pwVar2 + 1;
}


/* EA::IO::Path::FindComponentRvs(wchar_t const*, wchar_t const*) */

wchar_t * EA::IO::Path::FindComponentRvs(wchar_t *param_1,wchar_t *param_2)

{
  char cVar1;
  byte bVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  pwVar3 = param_2;
  if (param_1 < param_2) {
    wVar4 = param_2[-1];
    cVar1 = FUN_053492b0(wVar4);
    if (cVar1 != '\0') {
      pwVar3 = param_2 + -1;
      if (pwVar3 <= param_1) goto LAB_05349f80;
      wVar4 = param_2[-2];
    }
    if (wVar4 != L'\0') goto LAB_05349f64;
    do {
      pwVar3 = pwVar3 + -1;
      if (pwVar3 <= param_1) break;
LAB_05349f64:
      wVar4 = pwVar3[-1];
      bVar2 = FUN_053492b0(wVar4);
    } while (bVar2 < (wVar4 != L'\0'));
  }
LAB_05349f80:
  if (((pwVar3 == param_1 + 2) && (cVar1 = FUN_053492b0(*param_1), cVar1 != '\0')) &&
     (cVar1 = FUN_053492b0(param_1[1]), cVar1 != '\0')) {
    pwVar3 = param_1;
  }
  return pwVar3;
}


/* EA::IO::Path::GetPathComponentStart(wchar_t*, wchar_t*, int) */

wchar32 * EA::IO::Path::GetPathComponentStart(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  if (param_3 < 0) {
    if (param_1 < param_2) {
      do {
        param_3 = param_3 + 1;
        param_2 = (wchar_t *)FindComponentRvs(param_1,param_2);
        if (param_2 <= param_1) {
          return param_2;
        }
      } while (param_3 < 0);
    }
    return param_2;
  }
  for (; (param_1 < param_2 && (0 < param_3)); param_3 = param_3 + -1) {
    param_1 = (wchar_t *)FindComponentFwd(param_1,param_2);
  }
  return param_1;
}


/* EA::IO::Path::GetPathComponentEnd(wchar_t*, wchar_t*, int) */

wchar32 * EA::IO::Path::GetPathComponentEnd(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  iVar4 = param_3 + 1;
  if (param_3 < 0) {
    for (; (param_1 < param_2 && (iVar4 < 0)); iVar4 = iVar4 + 1) {
      param_2 = (wchar_t *)FindComponentRvs(param_1,param_2);
    }
    bVar1 = param_1 < param_2;
    param_1 = param_2;
    if (bVar1) {
      cVar2 = FUN_053492b0(param_2[-1]);
      if (cVar2 != '\0') {
        param_2 = param_2 + -1;
      }
      return param_2;
    }
  }
  else {
    pwVar3 = param_1;
    if (param_1 < param_2) {
      do {
        iVar4 = iVar4 + -1;
        pwVar3 = (wchar_t *)FindComponentFwd(pwVar3,param_2);
        if (param_2 <= pwVar3) break;
      } while (0 < iVar4);
      bVar1 = param_1 < pwVar3;
      param_1 = pwVar3;
      if (((bVar1) && (iVar4 == 0)) && (cVar2 = FUN_053492b0(pwVar3[-1]), cVar2 != '\0')) {
        param_1 = pwVar3 + -1;
      }
    }
  }
  return param_1;
}


/* EA::IO::Path::GetFileName(wchar_t const*, wchar_t const*) */

wchar_t * EA::IO::Path::GetFileName(wchar_t *param_1,wchar_t *param_2)

{
  char cVar1;
  byte bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  if (param_1 < param_2) {
    cVar1 = FUN_053492b0(param_2[-1]);
    bVar2 = 0;
    pwVar3 = param_2;
    if (cVar1 != '\0') {
      return param_2;
    }
    while ((pwVar4 = pwVar3, bVar2 < (pwVar3[-1] != L'\0') &&
           (pwVar4 = pwVar3 + -1, param_1 < pwVar4))) {
      bVar2 = FUN_053492b0(pwVar3[-2]);
      pwVar3 = pwVar4;
    }
    if (pwVar4 != param_1 + 2) {
      return pwVar4;
    }
  }
  else {
    pwVar4 = param_2;
    if (param_2 != param_1 + 2) {
      return param_2;
    }
  }
  cVar1 = FUN_0534932c(param_1,param_2);
  if (cVar1 != '\0') {
    pwVar4 = param_2;
  }
  return pwVar4;
}


/* EA::IO::Path::GetFileName(EA::IO::Path::PathStringW const&) */

void EA::IO::Path::GetFileName(PathStringW *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_0534987c(*(undefined8 *)param_1);
  pwVar2 = (wchar_t *)FUN_05349880(*(undefined8 *)(param_1 + 8));
  GetFileName(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::GetFileExtension(wchar_t const*, wchar_t const*) */

wchar_t * EA::IO::Path::GetFileExtension(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  if ((param_2 <= param_1) || (cVar3 = FUN_053492b0(param_2[-1]), cVar3 == '\0')) {
    cVar3 = FUN_0534932c(param_1,param_2);
    pwVar2 = param_2;
    if (cVar3 != '\0') {
      param_1 = (wchar_t *)FindComponentFwd(param_1,param_2);
    }
    while (pwVar2 = pwVar2 + -1, param_1 <= pwVar2) {
      wVar1 = *pwVar2;
      cVar3 = FUN_053492b0(wVar1);
      if (wVar1 == L'\0') {
        return param_2;
      }
      if (cVar3 != '\0') {
        return param_2;
      }
      if (wVar1 == L'.') {
        return pwVar2;
      }
    }
  }
  return param_2;
}


/* EA::IO::Path::GetFileExtension(EA::IO::Path::PathStringW const&) */

void EA::IO::Path::GetFileExtension(PathStringW *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_0534987c(*(undefined8 *)param_1);
  pwVar2 = (wchar_t *)FUN_05349880(*(undefined8 *)(param_1 + 8));
  GetFileExtension(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::TruncateComponent(EA::IO::Path::PathStringW&, int) */

void EA::IO::Path::TruncateComponent(PathStringW *param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pwVar1 = (wchar_t *)FUN_053498ac(*(undefined8 *)param_1);
  pwVar2 = (wchar_t *)FUN_053498b0(*(undefined8 *)(param_1 + 8));
  uVar3 = GetPathComponentStart(pwVar1,pwVar2,param_2);
  uVar4 = FUN_053498b0(*(undefined8 *)(param_1 + 8));
  FUN_053498b4(param_1 + 8,uVar3,uVar4);
  return;
}


/* EA::IO::Path::Canonicalize(EA::IO::Path::PathStringW&, wchar_t) */

PathStringW * EA::IO::Path::Canonicalize(PathStringW *param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_053498ac(*(undefined8 *)param_1);
  pwVar2 = (wchar_t *)FUN_053498b0(*(undefined8 *)(param_1 + 8));
  for (; pwVar1 != pwVar2; pwVar1 = pwVar1 + 1) {
    if ((*pwVar1 == L'\\') || (*pwVar1 == L'/')) {
      *pwVar1 = param_2;
    }
  }
  return param_1;
}


/* EA::IO::Path::IsRelative(wchar_t const*, wchar_t const*) */

byte EA::IO::Path::IsRelative(wchar_t *param_1,wchar_t *param_2)

{
  char cVar1;
  byte bVar2;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  bVar2 = 1;
  if (param_1 < param_2) {
    cVar1 = FUN_05349424(param_1);
    bVar2 = 0;
    if (cVar1 == '\0') {
      bVar2 = FUN_053492b0(*param_1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* EA::IO::Path::IsRelative(EA::IO::Path::PathStringW const&) */

void EA::IO::Path::IsRelative(PathStringW *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_0534987c(*(undefined8 *)param_1);
  pwVar2 = (wchar_t *)FUN_05349880(*(undefined8 *)(param_1 + 8));
  IsRelative(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::Compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*,
   EA::IO::CaseSensitivity, bool) */

undefined4
EA::IO::Path::Compare
          (wchar32 *param_1,wchar32 *param_2,wchar32 *param_3,wchar32 *param_4,int param_5,
          char param_6)

{
  wchar32 wVar1;
  bool bVar2;
  char cVar3;
  wchar32 wVar4;
  wchar32 wVar5;
  undefined4 uVar6;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  if (param_4 == (wchar32 *)0x0) {
    param_4 = (wchar32 *)StdC::Strend(param_3);
  }
  if (param_5 == 1) {
    while( true ) {
      wVar5 = *param_1;
      wVar1 = *param_3;
      cVar3 = FUN_053492b0(wVar5);
      if (cVar3 == '\0') {
        wVar5 = StdC::Tolower(wVar5);
        cVar3 = FUN_053492b0(wVar1);
      }
      else {
        wVar5 = L'/';
        cVar3 = FUN_053492b0(wVar1);
      }
      wVar4 = L'/';
      if (cVar3 == '\0') {
        wVar4 = StdC::Tolower(wVar1);
      }
      if (param_2 <= param_1) goto LAB_0534a860;
      if (param_4 <= param_3) goto LAB_0534a924;
      if (wVar5 != wVar4) break;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
  }
  else {
    do {
      wVar5 = *param_1;
      wVar4 = *param_3;
      cVar3 = FUN_053492b0(wVar5);
      if (cVar3 != '\0') {
        wVar5 = L'/';
      }
      cVar3 = FUN_053492b0(wVar4);
      if (cVar3 != '\0') {
        wVar4 = L'/';
      }
      if (param_2 <= param_1) {
LAB_0534a860:
        if (param_4 <= param_3) {
          return 0;
        }
        if (param_6 == '\0') {
          return 0xffffffff;
        }
        cVar3 = FUN_053492b0(wVar4);
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
        return 1;
      }
      bVar2 = param_4 <= param_3;
      param_3 = param_3 + 1;
      if (bVar2) {
LAB_0534a924:
        uVar6 = 1;
        if (param_6 == '\0') {
          return 1;
        }
        cVar3 = FUN_053492b0(wVar5);
        if (cVar3 != '\0') {
          uVar6 = 0xffffffff;
        }
        return uVar6;
      }
      param_1 = param_1 + 1;
    } while (wVar5 == wVar4);
  }
  cVar3 = FUN_053492b0(wVar5);
  if (cVar3 == '\0') {
    cVar3 = FUN_053492b0(wVar4);
    if (cVar3 == '\0') {
      uVar6 = 1;
      if ((uint)wVar5 < (uint)wVar4) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0xffffffff;
      if (param_6 != '\0') {
        uVar6 = 1;
      }
    }
    return uVar6;
  }
  uVar6 = 1;
  if (param_6 != '\0') {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


/* EA::IO::Path::Compare(EA::IO::Path::PathStringW const&, EA::IO::Path::PathStringW const&,
   EA::IO::CaseSensitivity, bool) */

void EA::IO::Path::Compare
               (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0534987c(*param_1);
  uVar2 = FUN_05349880(param_1[1]);
  uVar3 = FUN_0534987c(*param_2);
  uVar4 = FUN_05349880(param_2[1]);
  Compare(uVar1,uVar2,uVar3,uVar4,param_3,param_4);
  return;
}


/* EA::IO::Path::GetHasTrailingSeparator(EA::IO::Path::PathStringW const&) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(PathStringW *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar1 = FUN_05349884(*(undefined8 *)param_1,uVar3);
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_05349914(uVar3);
    uVar3 = FUN_05349284(*puVar2);
    return uVar3;
  }
  return 0;
}


/* EA::IO::Path::GetHasTrailingSeparator(wchar_t const*, unsigned long) */

undefined8 EA::IO::Path::GetHasTrailingSeparator(wchar_t *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if (param_2 != 0) {
    uVar1 = FUN_05349284(param_1[param_2 - 1]);
    return uVar1;
  }
  return 0;
}


/* EA::IO::Path::EnsureTrailingSeparator(wchar_t*, unsigned long) */

bool EA::IO::Path::EnsureTrailingSeparator(wchar_t *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = StdC::Strlen(param_1);
  cVar2 = GetHasTrailingSeparator(param_1,uVar3 & 0xffffffff);
  if (cVar2 == '\0') {
    bVar1 = uVar3 + 2 <= param_2;
    if (bVar1) {
      param_1[uVar3] = L'/';
      param_1[uVar3 + 1] = L'\0';
    }
    return bVar1;
  }
  return false;
}


/* EA::IO::Path::StripTrailingSeparator(EA::IO::Path::PathStringW&) */

PathStringW * EA::IO::Path::StripTrailingSeparator(PathStringW *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 != '\0') {
    FUN_0534991c(param_1 + 8);
  }
  return param_1;
}


/* EA::IO::Path::StripTrailingSeparator(wchar_t*, unsigned long) */

void EA::IO::Path::StripTrailingSeparator(wchar_t *param_1,ulong param_2)

{
  if (param_2 == 0xffffffffffffffff) {
    param_2 = StdC::Strlen(param_1);
  }
  if ((param_2 != 0) && (param_1[param_2 - 1] == L'/')) {
    param_1[param_2 - 1] = L'\0';
    return;
  }
  return;
}


/* EA::IO::Path::PathString8::iterator
   EA::IO::Path::GetLocalRootImpl<EA::IO::Path::PathString8>(EA::IO::Path::PathString8::iterator,
   EA::IO::Path::PathString8::iterator) */

char * EA::IO::Path::GetLocalRootImpl<EA::IO::Path::PathString8>(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  cVar1 = FUN_05349364(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_053492bc(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pcVar2 = (char *)GetPathComponentStart(param_1,param_2,1);
    return pcVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(char*, char*) */

char * EA::IO::Path::GetLocalRoot(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)StdC::Strend(param_1);
  }
  cVar1 = FUN_05349364(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_053492bc(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pcVar2 = (char *)GetPathComponentStart(param_1,param_2,1);
    return pcVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(EA::IO::Path::PathString8 const&) */

void EA::IO::Path::GetLocalRoot(PathString8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_053496b0(*(undefined8 *)param_1);
  pcVar2 = (char *)FUN_053496b4(*(undefined8 *)(param_1 + 8));
  GetLocalRoot(pcVar1,pcVar2);
  return;
}


/* EA::IO::Path::PathString16::iterator
   EA::IO::Path::GetLocalRootImpl<EA::IO::Path::PathString16>(EA::IO::Path::PathString16::iterator,
   EA::IO::Path::PathString16::iterator) */

wchar16 * EA::IO::Path::GetLocalRootImpl<EA::IO::Path::PathString16>
                    (wchar16 *param_1,wchar16 *param_2)

{
  char cVar1;
  wchar16 *pwVar2;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  cVar1 = FUN_053493c4(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_053492f4(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pwVar2 = (wchar16 *)GetPathComponentStart(param_1,param_2,1);
    return pwVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(char16_t*, char16_t*) */

wchar16 * EA::IO::Path::GetLocalRoot(wchar16 *param_1,wchar16 *param_2)

{
  char cVar1;
  wchar16 *pwVar2;
  
  if (param_2 == (wchar16 *)0x0) {
    param_2 = (wchar16 *)StdC::Strend(param_1);
  }
  cVar1 = FUN_053493c4(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_053492f4(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pwVar2 = (wchar16 *)GetPathComponentStart(param_1,param_2,1);
    return pwVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(EA::IO::Path::PathString16 const&) */

void EA::IO::Path::GetLocalRoot(PathString16 *param_1)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_053496b8(*(undefined8 *)param_1);
  pwVar2 = (wchar16 *)FUN_053496bc(*(undefined8 *)(param_1 + 8));
  GetLocalRoot(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::PathString32::iterator
   EA::IO::Path::GetLocalRootImpl<EA::IO::Path::PathString32>(EA::IO::Path::PathString32::iterator,
   EA::IO::Path::PathString32::iterator) */

wchar32 * EA::IO::Path::GetLocalRootImpl<EA::IO::Path::PathString32>
                    (wchar32 *param_1,wchar32 *param_2)

{
  char cVar1;
  wchar32 *pwVar2;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  cVar1 = FUN_05349424(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_0534932c(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pwVar2 = (wchar32 *)GetPathComponentStart(param_1,param_2,1);
    return pwVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(char32_t*, char32_t*) */

wchar32 * EA::IO::Path::GetLocalRoot(wchar32 *param_1,wchar32 *param_2)

{
  char cVar1;
  wchar32 *pwVar2;
  
  if (param_2 == (wchar32 *)0x0) {
    param_2 = (wchar32 *)StdC::Strend(param_1);
  }
  cVar1 = FUN_05349424(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_0534932c(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pwVar2 = (wchar32 *)GetPathComponentStart(param_1,param_2,1);
    return pwVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(EA::IO::Path::PathString32 const&) */

void EA::IO::Path::GetLocalRoot(PathString32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_053496c0(*(undefined8 *)param_1);
  pwVar2 = (wchar32 *)FUN_053496c4(*(undefined8 *)(param_1 + 8));
  GetLocalRoot(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::GetLocalRoot(wchar_t*, wchar_t*) */

wchar_t * EA::IO::Path::GetLocalRoot(wchar_t *param_1,wchar_t *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = (wchar_t *)StdC::Strend(param_1);
  }
  cVar1 = FUN_05349424(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_0534932c(param_1,param_2);
    if (cVar1 == '\0') {
      return param_1;
    }
    pwVar2 = (wchar_t *)GetPathComponentStart(param_1,param_2,1);
    return pwVar2;
  }
  return param_1 + 2;
}


/* EA::IO::Path::GetLocalRoot(EA::IO::Path::PathStringW const&) */

void EA::IO::Path::GetLocalRoot(PathStringW *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_0534987c(*(undefined8 *)param_1);
  pwVar2 = (wchar_t *)FUN_05349880(*(undefined8 *)(param_1 + 8));
  GetLocalRoot(pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::Split(EA::IO::Path::PathString8 const&, EA::IO::Path::PathString8*,
   EA::IO::Path::PathString8*, EA::IO::Path::PathString8*, EA::IO::Path::PathString8*) */

void EA::IO::Path::Split(PathString8 *param_1,PathString8 *param_2,PathString8 *param_3,
                        PathString8 *param_4,PathString8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  pcVar1 = (char *)GetLocalRoot(param_1);
  pcVar2 = (char *)GetFileName(param_1);
  pcVar3 = (char *)GetFileExtension(param_1);
  if (param_2 != (PathString8 *)0x0) {
    pcVar4 = (char *)FUN_05349754(*(undefined8 *)param_1);
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_2,pcVar4,pcVar1);
  }
  if (param_3 != (PathString8 *)0x0) {
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_3,pcVar1,pcVar2);
  }
  if (param_4 != (PathString8 *)0x0) {
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_4,pcVar2,pcVar3);
  }
  if (param_5 != (PathString8 *)0x0) {
    uVar7 = *(undefined8 *)param_1;
    lVar5 = FUN_05349754(uVar7);
    lVar6 = FUN_05349680(uVar7,*(undefined8 *)(param_1 + 8));
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_5,pcVar3,(char *)(lVar5 + lVar6));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::Split(char const*, char const*&, char const*&, char const*&, char const*&) */

void EA::IO::Path::Split(char *param_1,char **param_2,char **param_3,char **param_4,char **param_5)

{
  char *pcVar1;
  PathString8 aPStack_98 [144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = param_1;
  PathString8::PathString8(aPStack_98,param_1);
  pcVar1 = (char *)GetLocalRoot(aPStack_98);
  *param_3 = pcVar1;
  PathString8::~PathString8(aPStack_98);
  pcVar1 = (char *)GetFileName(param_1,(char *)0x0);
  *param_4 = pcVar1;
  pcVar1 = (char *)GetFileExtension(param_1,(char *)0x0);
  *param_5 = pcVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::EnsureTrailingSeparator(EA::IO::Path::PathString8&) */

PathString8 * EA::IO::Path::EnsureTrailingSeparator(PathString8 *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 == '\0') {
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::push_back((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *)param_1,'/');
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathString8&, char const*, char const*) */

PathString8 * EA::IO::Path::Append(PathString8 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  
  if (param_3 == (char *)0x0) {
    param_3 = (char *)StdC::Strend(param_2);
  }
  if (param_2 != param_3) {
    cVar1 = IsRelative(param_2,param_3);
    if (cVar1 == '\0') {
      FUN_053496d4(param_1,param_1 + 8);
    }
    else {
      cVar1 = FUN_053496c8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      if (cVar1 == '\0') {
        EnsureTrailingSeparator(param_1);
      }
    }
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::append((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_1,param_2,param_3);
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathString8&, EA::IO::Path::PathString8 const&) */

void EA::IO::Path::Append(PathString8 *param_1,PathString8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0534973c(*(undefined8 *)param_2);
  pcVar2 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
  Append(param_1,pcVar1,pcVar2);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathString8&, char const*, char const*) */

void EA::IO::Path::Join(PathString8 *param_1,char *param_2,char *param_3)

{
  Append(param_1,param_2,param_3);
  Normalize(param_1);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathString8&, EA::IO::Path::PathString8 const&) */

void EA::IO::Path::Join(PathString8 *param_1,PathString8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0534973c(*(undefined8 *)param_2);
  pcVar2 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
  Join(param_1,pcVar1,pcVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::ComputeRelative(EA::IO::Path::PathString8&, EA::IO::Path::PathString8 const&,
   EA::IO::Path::PathString8 const&) */

void EA::IO::Path::ComputeRelative(PathString8 *param_1,PathString8 *param_2,PathString8 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pcVar3 = (char *)FUN_0534973c(*(undefined8 *)param_2);
  pcVar4 = (char *)FUN_0534973c(*(undefined8 *)param_3);
  do {
    pcVar6 = pcVar4;
    pcVar5 = pcVar3;
    pcVar3 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
    if ((pcVar3 <= pcVar5) ||
       (pcVar4 = (char *)FUN_05349740(*(undefined8 *)(param_3 + 8)), pcVar4 <= pcVar6)) break;
    pcVar3 = (char *)FindComponentFwd(pcVar5,pcVar3);
    pcVar4 = (char *)FUN_05349740(*(undefined8 *)(param_3 + 8));
    pcVar4 = (char *)FindComponentFwd(pcVar6,pcVar4);
    iVar2 = Compare(pcVar5,pcVar3,pcVar6,pcVar4,0,1);
  } while (iVar2 == 0);
  FUN_053496d4(param_1,param_1 + 8);
  pcVar3 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
  if ((pcVar5 != pcVar3) ||
     (pcVar3 = (char *)FUN_05349740(*(undefined8 *)(param_3 + 8)), pcVar6 != pcVar3)) {
    cVar1 = IsRelative(pcVar6,(char *)0x0);
    if (cVar1 == '\0') {
      PathString8::operator=(param_1,pcVar6);
      Canonicalize(param_1,'/');
    }
    else {
      acStack_10[0] = '.';
      acStack_10[1] = 0x2e;
      acStack_10[2] = 0x2f;
      acStack_10[3] = 0;
      pcVar3 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
      if (pcVar5 < pcVar3) {
        do {
          pcVar5 = (char *)FindComponentFwd(pcVar5,pcVar3);
          PathString8::operator+=(param_1,acStack_10);
          pcVar3 = (char *)FUN_05349740(*(undefined8 *)(param_2 + 8));
        } while (pcVar5 < pcVar3);
      }
      pcVar3 = (char *)FUN_05349740(*(undefined8 *)(param_3 + 8));
      param_1 = (PathString8 *)Join(param_1,pcVar6,pcVar3);
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* EA::IO::Path::Split(EA::IO::Path::PathString16 const&, EA::IO::Path::PathString16*,
   EA::IO::Path::PathString16*, EA::IO::Path::PathString16*, EA::IO::Path::PathString16*) */

void EA::IO::Path::Split(PathString16 *param_1,PathString16 *param_2,PathString16 *param_3,
                        PathString16 *param_4,PathString16 *param_5)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  pwVar1 = (wchar16 *)GetLocalRoot(param_1);
  pwVar2 = (wchar16 *)GetFileName(param_1);
  pwVar3 = (wchar16 *)GetFileExtension(param_1);
  if (param_2 != (PathString16 *)0x0) {
    pwVar4 = (wchar16 *)FUN_05349758(*(undefined8 *)param_1);
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_2,pwVar4,pwVar1);
  }
  if (param_3 != (PathString16 *)0x0) {
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_3,pwVar1,pwVar2);
  }
  if (param_4 != (PathString16 *)0x0) {
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_4,pwVar2,pwVar3);
  }
  if (param_5 != (PathString16 *)0x0) {
    uVar7 = *(undefined8 *)param_1;
    lVar5 = FUN_05349758(uVar7);
    lVar6 = FUN_05349688(uVar7,*(undefined8 *)(param_1 + 8));
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_5,pwVar3,(wchar16 *)(lVar5 + lVar6 * 2));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::Split(char16_t const*, char16_t const*&, char16_t const*&, char16_t const*&,
   char16_t const*&) */

void EA::IO::Path::Split(wchar16 *param_1,wchar16 **param_2,wchar16 **param_3,wchar16 **param_4,
                        wchar16 **param_5)

{
  wchar16 *pwVar1;
  PathString16 aPStack_f8 [240];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = param_1;
  PathString16::PathString16(aPStack_f8,param_1);
  pwVar1 = (wchar16 *)GetLocalRoot(aPStack_f8);
  *param_3 = pwVar1;
  PathString16::~PathString16(aPStack_f8);
  pwVar1 = (wchar16 *)GetFileName(param_1,(wchar16 *)0x0);
  *param_4 = pwVar1;
  pwVar1 = (wchar16 *)GetFileExtension(param_1,(wchar16 *)0x0);
  *param_5 = pwVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::IO::Path::EnsureTrailingSeparator(EA::IO::Path::PathString16&) */

PathString16 * EA::IO::Path::EnsureTrailingSeparator(PathString16 *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 == '\0') {
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::push_back((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *)param_1,L'/');
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathString16&, char16_t const*, char16_t const*) */

PathString16 * EA::IO::Path::Append(PathString16 *param_1,wchar16 *param_2,wchar16 *param_3)

{
  char cVar1;
  
  if (param_3 == (wchar16 *)0x0) {
    param_3 = (wchar16 *)StdC::Strend(param_2);
  }
  if (param_2 != param_3) {
    cVar1 = IsRelative(param_2,param_3);
    if (cVar1 == '\0') {
      FUN_05349700(*(undefined8 *)param_1,param_1 + 8);
    }
    else {
      cVar1 = FUN_053496f4(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      if (cVar1 == '\0') {
        EnsureTrailingSeparator(param_1);
      }
    }
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::append((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,96ul,2ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_1,param_2,param_3);
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathString16&, EA::IO::Path::PathString16 const&) */

void EA::IO::Path::Append(PathString16 *param_1,PathString16 *param_2)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_05349744(*(undefined8 *)param_2);
  pwVar2 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
  Append(param_1,pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathString16&, char16_t const*, char16_t const*) */

void EA::IO::Path::Join(PathString16 *param_1,wchar16 *param_2,wchar16 *param_3)

{
  Append(param_1,param_2,param_3);
  Normalize(param_1);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathString16&, EA::IO::Path::PathString16 const&) */

void EA::IO::Path::Join(PathString16 *param_1,PathString16 *param_2)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  
  pwVar1 = (wchar16 *)FUN_05349744(*(undefined8 *)param_2);
  pwVar2 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
  Join(param_1,pwVar1,pwVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::ComputeRelative(EA::IO::Path::PathString16&, EA::IO::Path::PathString16 const&,
   EA::IO::Path::PathString16 const&) */

void EA::IO::Path::ComputeRelative
               (PathString16 *param_1,PathString16 *param_2,PathString16 *param_3)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar6;
  wchar16 awStack_10 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)FUN_05349744(*(undefined8 *)param_2);
  pwVar4 = (wchar16 *)FUN_05349744(*(undefined8 *)param_3);
  do {
    pwVar6 = pwVar4;
    pwVar5 = pwVar3;
    pwVar3 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
    if ((pwVar3 <= pwVar5) ||
       (pwVar4 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_3 + 8)), pwVar4 <= pwVar6)) break;
    pwVar3 = (wchar16 *)FindComponentFwd(pwVar5,pwVar3);
    pwVar4 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_3 + 8));
    pwVar4 = (wchar16 *)FindComponentFwd(pwVar6,pwVar4);
    iVar2 = Compare(pwVar5,pwVar3,pwVar6,pwVar4,0,1);
  } while (iVar2 == 0);
  FUN_05349700(*(undefined8 *)param_1,param_1 + 8);
  pwVar3 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
  if ((pwVar5 != pwVar3) ||
     (pwVar3 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_3 + 8)), pwVar6 != pwVar3)) {
    cVar1 = IsRelative(pwVar6,(wchar16 *)0x0);
    if (cVar1 == '\0') {
      PathString16::operator=(param_1,pwVar6);
      Canonicalize(param_1,L'/');
    }
    else {
      awStack_10[0] = L'.';
      awStack_10[1] = 0x2e;
      awStack_10[2] = 0x2f;
      awStack_10[3] = 0;
      pwVar3 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
      if (pwVar5 < pwVar3) {
        do {
          pwVar5 = (wchar16 *)FindComponentFwd(pwVar5,pwVar3);
          PathString16::operator+=(param_1,awStack_10);
          pwVar3 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_2 + 8));
        } while (pwVar5 < pwVar3);
      }
      pwVar3 = (wchar16 *)FUN_05349748(*(undefined8 *)(param_3 + 8));
      param_1 = (PathString16 *)Join(param_1,pwVar6,pwVar3);
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* EA::IO::Path::Split(EA::IO::Path::PathString32 const&, EA::IO::Path::PathString32*,
   EA::IO::Path::PathString32*, EA::IO::Path::PathString32*, EA::IO::Path::PathString32*) */

void EA::IO::Path::Split(PathString32 *param_1,PathString32 *param_2,PathString32 *param_3,
                        PathString32 *param_4,PathString32 *param_5)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  wchar32 *pwVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  pwVar1 = (wchar32 *)GetLocalRoot(param_1);
  pwVar2 = (wchar32 *)GetFileName(param_1);
  pwVar3 = (wchar32 *)GetFileExtension(param_1);
  if (param_2 != (PathString32 *)0x0) {
    pwVar4 = (wchar32 *)FUN_0534975c(*(undefined8 *)param_1);
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_2,pwVar4,pwVar1);
  }
  if (param_3 != (PathString32 *)0x0) {
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_3,pwVar1,pwVar2);
  }
  if (param_4 != (PathString32 *)0x0) {
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_4,pwVar2,pwVar3);
  }
  if (param_5 != (PathString32 *)0x0) {
    uVar7 = *(undefined8 *)param_1;
    lVar5 = FUN_0534975c(uVar7);
    lVar6 = FUN_05349694(uVar7,*(undefined8 *)(param_1 + 8));
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_5,pwVar3,(wchar32 *)(lVar5 + lVar6 * 4));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::Split(char32_t const*, char32_t const*&, char32_t const*&, char32_t const*&,
   char32_t const*&) */

void EA::IO::Path::Split(wchar32 *param_1,wchar32 **param_2,wchar32 **param_3,wchar32 **param_4,
                        wchar32 **param_5)

{
  wchar32 *pwVar1;
  PathString32 aPStack_1b8 [432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = param_1;
  PathString32::PathString32(aPStack_1b8,param_1);
  pwVar1 = (wchar32 *)GetLocalRoot(aPStack_1b8);
  *param_3 = pwVar1;
  PathString32::~PathString32(aPStack_1b8);
  pwVar1 = (wchar32 *)GetFileName(param_1,(wchar32 *)0x0);
  *param_4 = pwVar1;
  pwVar1 = (wchar32 *)GetFileExtension(param_1,(wchar32 *)0x0);
  *param_5 = pwVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::IsSubdirectory(EA::IO::Path::PathStringW const&, EA::IO::Path::PathStringW const&)
    */

void EA::IO::Path::IsSubdirectory(PathStringW *param_1,PathStringW *param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  PathString32 aPStack_368 [432];
  PathString32 aPStack_1b8 [432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PathString32::PathString32(aPStack_368);
  PathString32::PathString32(aPStack_1b8);
  pwVar2 = (wchar_t *)FUN_05349ab0(*(undefined8 *)param_1);
  ConvertPath(aPStack_368,pwVar2);
  pwVar2 = (wchar_t *)FUN_05349ab0(*(undefined8 *)param_2);
  ConvertPath(aPStack_1b8,pwVar2);
  uVar1 = IsSubdirectory(aPStack_368,aPStack_1b8);
  PathString32::~PathString32(aPStack_1b8);
  PathString32::~PathString32(aPStack_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::IO::Path::Split(EA::IO::Path::PathStringW const&, EA::IO::Path::PathStringW*,
   EA::IO::Path::PathStringW*, EA::IO::Path::PathStringW*, EA::IO::Path::PathStringW*) */

void EA::IO::Path::Split(PathStringW *param_1,PathStringW *param_2,PathStringW *param_3,
                        PathStringW *param_4,PathStringW *param_5)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  pwVar1 = (wchar_t *)GetLocalRoot(param_1);
  pwVar2 = (wchar_t *)GetFileName(param_1);
  pwVar3 = (wchar_t *)GetFileExtension(param_1);
  if (param_2 != (PathStringW *)0x0) {
    pwVar4 = (wchar_t *)FUN_053498a8(*(undefined8 *)param_1);
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_2,pwVar4,pwVar1);
  }
  if (param_3 != (PathStringW *)0x0) {
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_3,pwVar1,pwVar2);
  }
  if (param_4 != (PathStringW *)0x0) {
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_4,pwVar2,pwVar3);
  }
  if (param_5 != (PathStringW *)0x0) {
    uVar7 = *(undefined8 *)param_1;
    lVar5 = FUN_053498a8(uVar7);
    lVar6 = FUN_053496a4(uVar7,*(undefined8 *)(param_1 + 8));
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_5,pwVar3,(wchar_t *)(lVar5 + lVar6 * 4));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::Split(wchar_t const*, wchar_t const*&, wchar_t const*&, wchar_t const*&, wchar_t
   const*&) */

void EA::IO::Path::Split(wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
                        wchar_t **param_5)

{
  wchar_t *pwVar1;
  PathStringW aPStack_1b8 [432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = param_1;
  PathStringW::PathStringW(aPStack_1b8,param_1);
  pwVar1 = (wchar_t *)GetLocalRoot(aPStack_1b8);
  *param_3 = pwVar1;
  PathString32::~PathString32((PathString32 *)aPStack_1b8);
  pwVar1 = (wchar_t *)GetFileName(param_1,(wchar_t *)0x0);
  *param_4 = pwVar1;
  pwVar1 = (wchar_t *)GetFileExtension(param_1,(wchar_t *)0x0);
  *param_5 = pwVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::Simplify(EA::IO::Path::PathStringW&) */

void EA::IO::Path::Simplify(PathStringW *param_1)

{
  wchar_t *pwVar1;
  PathString32 *pPVar2;
  PathString32 aPStack_368 [432];
  PathStringW aPStack_1b8 [432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PathString32::PathString32(aPStack_368);
  pwVar1 = (wchar_t *)FUN_05349ab8(*(undefined8 *)param_1);
  ConvertPath(aPStack_368,pwVar1);
  pPVar2 = (PathString32 *)thunk_FUN_0534bce4(aPStack_368,1);
  PathStringW::PathStringW(aPStack_1b8,pPVar2);
  PathStringW::operator=(param_1,aPStack_1b8);
  PathString32::~PathString32((PathString32 *)aPStack_1b8);
  PathString32::~PathString32(aPStack_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* EA::IO::Path::EnsureTrailingSeparator(EA::IO::Path::PathStringW&) */

PathStringW * EA::IO::Path::EnsureTrailingSeparator(PathStringW *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 == '\0') {
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::push_back((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *)param_1,L'/');
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathStringW&, wchar_t const*, wchar_t const*) */

PathStringW * EA::IO::Path::Append(PathStringW *param_1,wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  if (param_3 == (wchar_t *)0x0) {
    param_3 = (wchar_t *)StdC::Strend(param_2);
  }
  if (param_2 != param_3) {
    cVar1 = IsRelative(param_2,param_3);
    if (cVar1 == '\0') {
      FUN_05349890(*(undefined8 *)param_1,param_1 + 8);
    }
    else {
      cVar1 = FUN_05349884(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      if (cVar1 == '\0') {
        EnsureTrailingSeparator(param_1);
      }
    }
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::append((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_1,param_2,param_3);
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathStringW&, EA::IO::Path::PathStringW const&) */

void EA::IO::Path::Append(PathStringW *param_1,PathStringW *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_0534987c(*(undefined8 *)param_2);
  pwVar2 = (wchar_t *)FUN_05349880(*(undefined8 *)(param_2 + 8));
  Append(param_1,pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathStringW&, wchar_t const*, wchar_t const*) */

void EA::IO::Path::Join(PathStringW *param_1,wchar_t *param_2,wchar_t *param_3)

{
  Append(param_1,param_2,param_3);
  Simplify(param_1);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathStringW&, EA::IO::Path::PathStringW const&) */

void EA::IO::Path::Join(PathStringW *param_1,PathStringW *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)FUN_0534987c(*(undefined8 *)param_2);
  pwVar2 = (wchar_t *)FUN_05349880(*(undefined8 *)(param_2 + 8));
  Join(param_1,pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::EnsureTrailingSeparator(EA::IO::Path::PathString32&) */

PathString32 * EA::IO::Path::EnsureTrailingSeparator(PathString32 *param_1)

{
  char cVar1;
  
  cVar1 = GetHasTrailingSeparator(param_1);
  if (cVar1 == '\0') {
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::push_back((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                 *)param_1,L'/');
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathString32&, char32_t const*, char32_t const*) */

PathString32 * EA::IO::Path::Append(PathString32 *param_1,wchar32 *param_2,wchar32 *param_3)

{
  char cVar1;
  
  if (param_3 == (wchar32 *)0x0) {
    param_3 = (wchar32 *)StdC::Strend(param_2);
  }
  if (param_2 != param_3) {
    cVar1 = IsRelative(param_2,param_3);
    if (cVar1 == '\0') {
      FUN_05349724(*(undefined8 *)param_1,param_1 + 8);
    }
    else {
      cVar1 = FUN_05349718(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      if (cVar1 == '\0') {
        EnsureTrailingSeparator(param_1);
      }
    }
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
    ::append((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,96ul,4ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
              *)param_1,param_2,param_3);
  }
  return param_1;
}


/* EA::IO::Path::Append(EA::IO::Path::PathString32&, EA::IO::Path::PathString32 const&) */

void EA::IO::Path::Append(PathString32 *param_1,PathString32 *param_2)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_0534974c(*(undefined8 *)param_2);
  pwVar2 = (wchar32 *)FUN_05349750(*(undefined8 *)(param_2 + 8));
  Append(param_1,pwVar1,pwVar2);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathString32&, char32_t const*, char32_t const*) */

void EA::IO::Path::Join(PathString32 *param_1,wchar32 *param_2,wchar32 *param_3)

{
  Append(param_1,param_2,param_3);
  Normalize(param_1);
  return;
}


/* EA::IO::Path::Join(EA::IO::Path::PathString32&, EA::IO::Path::PathString32 const&) */

void EA::IO::Path::Join(PathString32 *param_1,PathString32 *param_2)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  
  pwVar1 = (wchar32 *)FUN_0534974c(*(undefined8 *)param_2);
  pwVar2 = (wchar32 *)FUN_05349750(*(undefined8 *)(param_2 + 8));
  Join(param_1,pwVar1,pwVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::ComputeRelative(EA::IO::Path::PathString32&, EA::IO::Path::PathString32 const&,
   EA::IO::Path::PathString32 const&) */

void EA::IO::Path::ComputeRelative
               (PathString32 *param_1,PathString32 *param_2,PathString32 *param_3)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar32 *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar32 *pwVar7;
  wchar32 awStack_18 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pwVar3 = (wchar_t *)FUN_0534974c(*(undefined8 *)param_2);
  pwVar4 = (wchar32 *)FUN_0534974c(*(undefined8 *)param_3);
  do {
    pwVar7 = pwVar4;
    pwVar5 = pwVar3;
    pwVar3 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_2 + 8));
    if ((pwVar3 <= pwVar5) ||
       (pwVar4 = (wchar32 *)FUN_05349750(*(undefined8 *)(param_3 + 8)), pwVar4 <= pwVar7)) break;
    pwVar3 = (wchar_t *)FindComponentFwd(pwVar5,pwVar3);
    pwVar6 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_3 + 8));
    pwVar4 = (wchar32 *)FindComponentFwd(pwVar7,pwVar6);
    iVar2 = Compare(pwVar5,pwVar3,pwVar7,pwVar4,0,1);
  } while (iVar2 == 0);
  FUN_05349724(*(undefined8 *)param_1,param_1 + 8);
  pwVar3 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_2 + 8));
  if ((pwVar5 != pwVar3) ||
     (pwVar4 = (wchar32 *)FUN_05349750(*(undefined8 *)(param_3 + 8)), pwVar7 != pwVar4)) {
    cVar1 = IsRelative(pwVar7,(wchar32 *)0x0);
    if (cVar1 == '\0') {
      PathString32::operator=(param_1,pwVar7);
      Canonicalize(param_1,L'/');
    }
    else {
      awStack_18[0] = L'.';
      awStack_18[1] = 0x2e;
      awStack_18[2] = 0x2f;
      awStack_18[3] = 0;
      pwVar3 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_2 + 8));
      if (pwVar5 < pwVar3) {
        do {
          pwVar5 = (wchar_t *)FindComponentFwd(pwVar5,pwVar3);
          PathString32::operator+=(param_1,awStack_18);
          pwVar3 = (wchar_t *)FUN_05349750(*(undefined8 *)(param_2 + 8));
        } while (pwVar5 < pwVar3);
      }
      pwVar4 = (wchar32 *)FUN_05349750(*(undefined8 *)(param_3 + 8));
      param_1 = (PathString32 *)Join(param_1,pwVar7,pwVar4);
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::Path::ComputeRelative(EA::IO::Path::PathStringW&, EA::IO::Path::PathStringW const&,
   EA::IO::Path::PathStringW const&) */

void EA::IO::Path::ComputeRelative(PathStringW *param_1,PathStringW *param_2,PathStringW *param_3)

{
  wchar_t *pwVar1;
  PathString32 aPStack_6c8 [432];
  PathString32 aPStack_518 [432];
  PathString32 aPStack_368 [432];
  PathStringW aPStack_1b8 [432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PathString32::PathString32(aPStack_6c8);
  PathString32::PathString32(aPStack_518);
  PathString32::PathString32(aPStack_368);
  pwVar1 = (wchar_t *)FUN_05349ab0(*(undefined8 *)param_2);
  ConvertPath(aPStack_6c8,pwVar1);
  pwVar1 = (wchar_t *)FUN_05349ab0(*(undefined8 *)param_3);
  ConvertPath(aPStack_518,pwVar1);
  ComputeRelative(aPStack_368,aPStack_6c8,aPStack_518);
  PathStringW::PathStringW(aPStack_1b8,aPStack_368);
  PathStringW::operator=(param_1,aPStack_1b8);
  PathString32::~PathString32((PathString32 *)aPStack_1b8);
  PathString32::~PathString32(aPStack_368);
  PathString32::~PathString32(aPStack_518);
  PathString32::~PathString32(aPStack_6c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

