// Class: EA::Text::Parse


/* EA::Text::Parse::GetTextLine(char const*&, char*) */

bool EA::Text::Parse::GetTextLine(char **param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = *param_1;
  cVar1 = *pcVar3;
  pcVar5 = param_2;
  if (cVar1 != '\0') {
    if (cVar1 != '\r') {
      do {
        if (cVar1 == '\n') break;
        pcVar4 = pcVar3;
        if (pcVar5 < param_2 + 0xff) {
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
          pcVar4 = *param_1;
        }
        pcVar3 = pcVar4 + 1;
        *param_1 = pcVar3;
        cVar1 = pcVar4[1];
        if (cVar1 == '\0') goto LAB_0536cbfc;
      } while (cVar1 != '\r');
    }
    pcVar3 = pcVar3 + 1;
    do {
      do {
        *param_1 = pcVar3;
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
      } while (cVar1 == '\r');
    } while (cVar1 == '\n');
  }
LAB_0536cbfc:
  *pcVar5 = '\0';
  bVar2 = true;
  if (**param_1 == '\0') {
    bVar2 = *param_2 != '\0';
  }
  return bVar2;
}


/* EA::Text::Parse::IsUsableLine(char const*) */

bool EA::Text::Parse::IsUsableLine(char *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 != '\0') && (bVar1 = true, *param_1 == '/')) {
    return param_1[1] != '/';
  }
  return bVar1;
}


/* EA::Text::Parse::StripSpace(char*) */

bool EA::Text::Parse::StripSpace(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  size_t sVar4;
  byte *__s;
  
  bVar1 = *param_1;
  __s = (byte *)param_1;
  if (bVar1 == 0) {
    sVar4 = strlen(param_1);
  }
  else {
    do {
      iVar3 = isspace((uint)bVar1);
      if (iVar3 == 0) break;
      __s = __s + 1;
      bVar1 = *__s;
    } while (bVar1 != 0);
    sVar4 = strlen((char *)__s);
    if (param_1 < __s) {
      memmove(param_1,__s,sVar4 + 1);
    }
  }
  pbVar2 = (byte *)(param_1 + (sVar4 - 1));
  while ((__s <= pbVar2 && (iVar3 = isspace((uint)*pbVar2), iVar3 != 0))) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + -1;
  }
  return *param_1 != '\0';
}


/* EA::Text::Parse::StripQuotes(char*) */

bool EA::Text::Parse::StripQuotes(char *param_1)

{
  char cVar1;
  size_t __n;
  size_t sVar2;
  
  __n = strlen(param_1);
  if ((__n == 0) || (sVar2 = __n - 1, param_1[sVar2] != '\"')) {
    cVar1 = *param_1;
  }
  else {
    param_1[sVar2] = '\0';
    cVar1 = *param_1;
    __n = sVar2;
  }
  if (cVar1 != '\"') {
    return cVar1 != '\0';
  }
  memmove(param_1,param_1 + 1,__n);
  return *param_1 != '\0';
}


/* EA::Text::Parse::GetProperty(char const*&, char*, char*) */

undefined8 EA::Text::Parse::GetProperty(char **param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  
  pcVar4 = *param_1;
  pcVar1 = strchr(pcVar4,0x3a);
  if (pcVar1 != (char *)0x0) {
    uVar3 = (long)pcVar1 - (long)pcVar4;
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    StdC::Strncpy(param_2,pcVar4,uVar3);
    param_2[uVar3] = '\0';
    StripSpace(param_2);
    pcVar4 = strchr(pcVar1,0x3b);
    if (pcVar4 == (char *)0x0) {
      StdC::Strncpy(param_3,pcVar1 + 1,0xff);
      param_3[0xff] = '\0';
      pcVar1 = *param_1;
      sVar2 = strlen(pcVar1);
      *param_1 = pcVar1 + sVar2;
    }
    else {
      uVar3 = (long)pcVar4 - (long)pcVar1;
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      StdC::Strncpy(param_3,pcVar1 + 1,uVar3);
      param_3[uVar3 - 1] = '\0';
      *param_1 = pcVar4 + 1;
    }
    StripSpace(param_3);
    return 1;
  }
  return 0;
}


/* EA::Text::Parse::GetNameAndId(char const*, char*, unsigned int&) */

undefined8 EA::Text::Parse::GetNameAndId(char *param_1,char *param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  pcVar2 = strchr(param_1,0x28);
  if (pcVar2 == (char *)0x0) {
    uVar4 = strlen(param_1);
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    StdC::Strncpy(param_2,param_1,uVar4);
    param_2[uVar4] = '\0';
    StripSpace(param_2);
    if (*param_2 == '\0') {
      return 0;
    }
  }
  else {
    uVar4 = (long)pcVar2 - (long)param_1;
    uVar3 = strtoul(pcVar2 + 1,(char **)0x0,0x10);
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    uVar1 = (uint)uVar3;
    StdC::Strncpy(param_2,param_1,uVar4);
    param_2[uVar4] = '\0';
    StripSpace(param_2);
    if ((uVar1 == 0) && (*param_2 == '\0')) {
      return 0;
    }
    if (uVar1 != 0) goto LAB_0536cf6c;
  }
  uVar1 = GetStyleId(param_2);
LAB_0536cf6c:
  *param_3 = uVar1;
  return 1;
}


/* EA::Text::Parse::Strncpy8ToChar(char16_t*, char const*, unsigned int) */

void EA::Text::Parse::Strncpy8ToChar(wchar16 *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  byte *pbVar5;
  wchar16 *pwVar6;
  wchar16 *pwVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  pbVar5 = (byte *)(param_2 + -1);
  pwVar7 = param_1 + -1;
  iVar3 = param_3 + 1;
  do {
    iVar8 = iVar3;
    pwVar6 = pwVar7;
    if (iVar8 + -1 == 0) {
      return;
    }
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar5;
    pwVar7 = pwVar6 + 1;
    *pwVar7 = (ushort)bVar2;
    iVar3 = iVar8 + -1;
  } while (bVar2 != 0);
  uVar9 = iVar8 - 2;
  if (uVar9 != 0) {
    uVar1 = (iVar8 - 10U >> 3) + 1;
    if (6 < iVar8 - 3U) {
      uVar10 = 0;
      pwVar6 = pwVar6 + 2;
      do {
        pwVar6[4] = L'\0';
        pwVar6[5] = L'\0';
        pwVar6[6] = L'\0';
        pwVar6[7] = L'\0';
        pwVar6[0] = L'\0';
        pwVar6[1] = L'\0';
        pwVar6[2] = L'\0';
        pwVar6[3] = L'\0';
        uVar10 = uVar10 + 1;
        pwVar6 = pwVar6 + 8;
      } while (uVar10 < uVar1);
      bVar4 = uVar1 * 8 == uVar9;
      uVar9 = uVar9 + uVar1 * -8;
      pwVar7 = pwVar7 + uVar1 * 8;
      if (bVar4) {
        return;
      }
    }
    pwVar7[1] = L'\0';
    if ((((uVar9 != 1) && (pwVar7[2] = L'\0', uVar9 != 2)) && (pwVar7[3] = L'\0', uVar9 != 3)) &&
       (((pwVar7[4] = L'\0', uVar9 != 4 && (pwVar7[5] = L'\0', uVar9 != 5)) &&
        (pwVar7[6] = L'\0', uVar9 != 6)))) {
      pwVar7[7] = L'\0';
      return;
    }
  }
  return;
}


/* EA::Text::Parse::GetStyle(unsigned int, unsigned int const*, EA::Text::TextStyle const*, unsigned
   int, EA::Text::StyleManager const*, EA::Text::TextStyle&) */

bool EA::Text::Parse::GetStyle
               (uint param_1,uint *param_2,TextStyle *param_3,uint param_4,StyleManager *param_5,
               TextStyle *param_6)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 0) {
LAB_0536e1e0:
    if (param_5 == (StyleManager *)0x0) {
      return false;
    }
    lVar2 = StyleManager::GetStyle(param_5,param_1,param_6);
    return lVar2 != 0;
  }
  if (*param_2 == param_1) {
    lVar2 = 0;
  }
  else {
    lVar1 = 1;
    do {
      lVar2 = lVar1;
      if (param_4 <= (uint)lVar2) goto LAB_0536e1e0;
      lVar1 = lVar2 + 1;
    } while (param_2[lVar2] != param_1);
    lVar2 = lVar2 * 700;
  }
  TextStyle::operator=(param_6,param_3 + lVar2);
  return true;
}

