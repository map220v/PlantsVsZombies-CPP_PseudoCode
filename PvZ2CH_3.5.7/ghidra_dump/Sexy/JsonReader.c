// Class: Sexy::JsonReader


/* Sexy::JsonReader::Read(unsigned char*, unsigned int, Sexy::StructuredData*,
   Sexy::StructuredData*) */

void __thiscall
Sexy::JsonReader::Read
          (JsonReader *this,uchar *param_1,uint param_2,StructuredData *param_3,
          StructuredData *param_4)

{
  Read(this,param_1,param_1 + param_2,param_3,param_4);
  return;
}


/* Sexy::JsonReader::UpdateLineAndColumn(unsigned char) */

void __thiscall Sexy::JsonReader::UpdateLineAndColumn(JsonReader *this,uchar param_1)

{
  if ((param_1 != '\r') && ((param_1 != '\n' || (this[0x30] == (JsonReader)0xd)))) {
    this[0x30] = (JsonReader)param_1;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    return;
  }
  this[0x30] = (JsonReader)param_1;
  *(undefined4 *)(this + 0x2c) = 1;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  return;
}


/* Sexy::JsonReader::GetNextChar() */

uchar __thiscall Sexy::JsonReader::GetNextChar(JsonReader *this)

{
  uchar uVar1;
  uchar *puVar2;
  
  uVar1 = '\0';
  puVar2 = *(uchar **)(this + 0x20);
  if (puVar2 < *(uchar **)(this + 0x18)) {
    *(uchar **)(this + 0x20) = puVar2 + 1;
    uVar1 = *puVar2;
    UpdateLineAndColumn(this,uVar1);
  }
  return uVar1;
}


/* Sexy::JsonReader::ScanWhitespace() */

void __thiscall Sexy::JsonReader::ScanWhitespace(JsonReader *this)

{
  uchar uVar1;
  uchar *puVar2;
  
  puVar2 = *(uchar **)(this + 0x20);
  if (puVar2 != *(uchar **)(this + 0x18)) {
    do {
      uVar1 = *puVar2;
      UpdateLineAndColumn(this,uVar1);
      if (((uVar1 != ' ') && (1 < (byte)(uVar1 - 9))) && (uVar1 != '\r')) {
        return;
      }
      puVar2 = (uchar *)(*(long *)(this + 0x20) + 1);
      *(uchar **)(this + 0x20) = puVar2;
    } while (*(uchar **)(this + 0x18) != puVar2);
  }
  return;
}


/* Sexy::JsonReader::ScanCStyleComment() */

bool __thiscall Sexy::JsonReader::ScanCStyleComment(JsonReader *this)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(this + 0x20);
  do {
    if (*(char **)(this + 0x18) == pcVar2) break;
    cVar1 = GetNextChar(this);
    pcVar2 = *(char **)(this + 0x20);
  } while ((cVar1 != '*') || (*pcVar2 != '/'));
  cVar1 = GetNextChar(this);
  return cVar1 == '/';
}


/* Sexy::JsonReader::ScanCppStyleComment() */

undefined8 __thiscall Sexy::JsonReader::ScanCppStyleComment(JsonReader *this)

{
  char cVar1;
  
  while( true ) {
    if (*(long *)(this + 0x20) == *(long *)(this + 0x18)) {
      return 1;
    }
    cVar1 = GetNextChar(this);
    if (cVar1 == '\n') break;
    if (cVar1 == '\r') {
      return 1;
    }
  }
  return 1;
}


/* Sexy::JsonReader::ScanComment() */

undefined8 __thiscall Sexy::JsonReader::ScanComment(JsonReader *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = GetNextChar(this);
  if (cVar1 == '*') {
    uVar2 = ScanCStyleComment(this);
    return uVar2;
  }
  if (cVar1 != '/') {
    return 0;
  }
  uVar2 = ScanCppStyleComment(this);
  return uVar2;
}


/* Sexy::JsonReader::ScanPattern(char const*, int) */

undefined8 __thiscall Sexy::JsonReader::ScanPattern(JsonReader *this,char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(this + 0x20);
  lVar3 = (long)param_2;
  uVar5 = 0;
  if (lVar3 <= *(long *)(this + 0x18) - lVar4) {
    pcVar1 = param_1 + lVar3;
    pcVar2 = (char *)(lVar4 + lVar3);
    while (pcVar2 != (char *)(lVar4 + (lVar3 - (ulong)(uint)param_2))) {
      pcVar2 = pcVar2 + -1;
      pcVar1 = pcVar1 + -1;
      if (*pcVar2 != *pcVar1) {
        return 0;
      }
    }
    *(char **)(this + 0x20) = (char *)(lVar4 + lVar3);
    uVar5 = 1;
  }
  return uVar5;
}


/* Sexy::JsonReader::ScanNumber() */

void __thiscall Sexy::JsonReader::ScanNumber(JsonReader *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(this + 0x20);
  pcVar3 = *(char **)(this + 0x18);
  while ((pcVar2 != pcVar3 &&
         ((cVar1 = *pcVar2, pcVar2 = pcVar2 + 1, (byte)(cVar1 - 0x30U) < 10 ||
          (cVar1 = FUN_051574bc(), cVar1 != '\0'))))) {
    *(char **)(this + 0x20) = pcVar2;
  }
  return;
}


/* Sexy::JsonReader::ScanString() */

undefined8 __thiscall Sexy::JsonReader::ScanString(JsonReader *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x20);
  lVar3 = *(long *)(this + 0x18);
  do {
    if (lVar2 == lVar3) {
      return 0;
    }
    while (cVar1 = GetNextChar(this), cVar1 != '\\') {
      if (cVar1 == '\"') {
        return 1;
      }
      if (*(long *)(this + 0x20) == *(long *)(this + 0x18)) {
        return 0;
      }
    }
    lVar2 = *(long *)(this + 0x18);
    lVar3 = lVar2;
    if (*(long *)(this + 0x20) != lVar2) {
      GetNextChar(this);
      lVar2 = *(long *)(this + 0x20);
      lVar3 = *(long *)(this + 0x18);
    }
  } while( true );
}


/* Sexy::JsonReader::ScanToken(Sexy::JsonReader::Token&) */

void __thiscall Sexy::JsonReader::ScanToken(JsonReader *this,Token *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  ScanWhitespace(this);
  uVar4 = *(undefined8 *)(this + 0x20);
  uVar1 = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x2c);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar2 = GetNextChar(this);
  switch(uVar2) {
  case 0:
    *(undefined4 *)param_1 = 0;
    break;
  default:
    goto switchD_051578d8_caseD_1;
  case 0x22:
    *(undefined4 *)param_1 = 5;
    cVar3 = ScanString(this);
    goto joined_r0x051579f4;
  case 0x2c:
    *(undefined4 *)param_1 = 10;
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    *(undefined4 *)param_1 = 6;
    ScanNumber(this);
    break;
  case 0x2f:
    *(undefined4 *)param_1 = 0xc;
    cVar3 = ScanComment(this);
    goto joined_r0x051579f4;
  case 0x3a:
    *(undefined4 *)param_1 = 0xb;
    break;
  case 0x5b:
    *(undefined4 *)param_1 = 3;
    break;
  case 0x5d:
    *(undefined4 *)param_1 = 4;
    break;
  case 0x66:
    *(undefined4 *)param_1 = 8;
    cVar3 = ScanPattern(this,"alse",4);
    goto joined_r0x051579f4;
  case 0x6e:
    *(undefined4 *)param_1 = 9;
    cVar3 = ScanPattern(this,"ull",3);
    goto joined_r0x051579f4;
  case 0x74:
    *(undefined4 *)param_1 = 7;
    cVar3 = ScanPattern(this,"rue",3);
joined_r0x051579f4:
    if (cVar3 == '\0') {
switchD_051578d8_caseD_1:
      *(undefined4 *)param_1 = 0xd;
    }
    break;
  case 0x7b:
    *(undefined4 *)param_1 = 1;
    break;
  case 0x7d:
    *(undefined4 *)param_1 = 2;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x20);
  return;
}


/* Sexy::JsonReader::ScanCommentTokens(Sexy::JsonReader::Token&) */

void __thiscall Sexy::JsonReader::ScanCommentTokens(JsonReader *this,Token *param_1)

{
  do {
    ScanToken(this,param_1);
  } while (*(int *)param_1 == 0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::Inspect(unsigned char*, unsigned char*) */

void __thiscall Sexy::JsonReader::Inspect(JsonReader *this,uchar *param_1,uchar *param_2)

{
  undefined8 uVar1;
  int local_28 [8];
  long local_8;
  
  *(uchar **)(this + 0x18) = param_2;
  *(uchar **)(this + 0x10) = param_1;
  local_8 = ___stack_chk_guard;
  *(uchar **)(this + 0x20) = param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 1;
  this[0x30] = (JsonReader)0x0;
  ScanCommentTokens(this,(Token *)local_28);
  if ((local_28[0] == 1) || (local_28[0] == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::JsonReader::WriteCodePointToUTF8(unsigned int, unsigned char*) */

uchar * __thiscall
Sexy::JsonReader::WriteCodePointToUTF8(JsonReader *this,uint param_1,uchar *param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = (byte)param_1;
  if (param_1 < 0x80) {
    *param_2 = bVar1;
    return param_2 + 1;
  }
  if (param_1 < 0x800) {
    lVar2 = 2;
    param_2[1] = bVar1 & 0x3f | 0x80;
    *param_2 = (byte)(param_1 >> 6) | 0xc0;
  }
  else {
    if (param_1 < 0x10000) {
      param_2[2] = bVar1 & 0x3f | 0x80;
      param_2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      *param_2 = (byte)(param_1 >> 0xc) | 0xe0;
      return param_2 + 3;
    }
    lVar2 = 0;
    if (param_1 < 0x110000) {
      param_2[2] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[3] = bVar1 & 0x3f | 0x80;
      param_2[1] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
      *param_2 = (byte)(param_1 >> 0x12) | 0xf0;
      return param_2 + 4;
    }
  }
  return param_2 + lVar2;
}


/* Sexy::JsonReader::AddError(std::string const&, Sexy::JsonReader::Token&, unsigned char*) */

undefined8 __thiscall
Sexy::JsonReader::AddError(JsonReader *this,string *param_1,Token *param_2,uchar *param_3)

{
  char *pcVar1;
  
  if (*(StructuredData **)(this + 8) != (StructuredData *)0x0) {
    StructuredData::BeginObject(*(StructuredData **)(this + 8),StructuredData::noName);
    pcVar1 = (char *)FUN_0547429c(param_1);
    StructuredData::AddString(*(StructuredData **)(this + 8),"message",pcVar1);
    StructuredData::BeginObject(*(StructuredData **)(this + 8),"token");
    StructuredData::AddInteger(*(StructuredData **)(this + 8),"type",(ulong)*(uint *)param_2);
    StructuredData::AddInteger(*(StructuredData **)(this + 8),"line",(long)*(int *)(param_2 + 0x18))
    ;
    StructuredData::AddInteger
              (*(StructuredData **)(this + 8),"column",(long)*(int *)(param_2 + 0x1c));
    StructuredData::EndObject(*(StructuredData **)(this + 8));
    if (param_3 != (uchar *)0x0) {
      StructuredData::AddInteger
                (*(StructuredData **)(this + 8),"extra",
                 (long)((int)param_3 - (int)*(undefined8 *)(param_2 + 8)));
    }
    StructuredData::EndObject(*(StructuredData **)(this + 8));
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::ScanExpectedToken(Sexy::JsonReader::Token&, Sexy::JsonReader::TokenType, char
   const*) */

void __thiscall
Sexy::JsonReader::ScanExpectedToken(JsonReader *this,Token *param_1,int param_3,char *param_4)

{
  undefined1 uVar1;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = 1;
  local_8 = ___stack_chk_guard;
  ScanToken(this,param_1);
  if (*(int *)param_1 != param_3) {
    std::string::string(asStack_10,param_4);
    uVar1 = AddError(this,asStack_10,param_1,(uchar *)0x0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::DecodeUnicodeEscapeSequence(Sexy::JsonReader::Token&, unsigned char*&, unsigned
   char*, unsigned int&) */

void __thiscall
Sexy::JsonReader::DecodeUnicodeEscapeSequence
          (JsonReader *this,Token *param_1,uchar **param_2,uchar *param_3,uint *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  char *__s;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  string asStack_10 [8];
  long local_8;
  
  pbVar4 = *param_2;
  local_8 = ___stack_chk_guard;
  if ((long)param_3 - (long)pbVar4 < 4) {
    __s = "Bad unicode escape sequence in string: four digits expected.";
  }
  else {
    *param_4 = 0;
    *param_2 = pbVar4 + 1;
    bVar1 = *pbVar4;
    *param_4 = 0;
    uVar3 = bVar1 - 0x30;
    if ((uVar3 & 0xff) < 10) {
      *param_4 = uVar3;
LAB_05157da8:
      uVar3 = *param_4;
      *param_2 = pbVar4 + 2;
      uVar3 = uVar3 * 0x10;
      bVar1 = pbVar4[1];
      *param_4 = uVar3;
      if ((bVar1 - 0x30 & 0xff) < 10) {
        *param_4 = (uVar3 - 0x30) + (uint)bVar1;
      }
      else {
        uVar5 = (uint)bVar1;
        if ((uVar5 - 0x61 & 0xff) < 6) {
          *param_4 = (uVar3 - 0x57) + uVar5;
        }
        else {
          if (5 < (uVar5 - 0x41 & 0xff)) goto LAB_05157fb4;
          *param_4 = (uVar3 - 0x37) + uVar5;
        }
      }
      uVar3 = *param_4;
      *param_2 = pbVar4 + 3;
      uVar3 = uVar3 * 0x10;
      bVar1 = pbVar4[2];
      *param_4 = uVar3;
      if ((bVar1 - 0x30 & 0xff) < 10) {
        *param_4 = (uVar3 - 0x30) + (uint)bVar1;
      }
      else {
        uVar5 = (uint)bVar1;
        if ((uVar5 - 0x61 & 0xff) < 6) {
          *param_4 = (uVar3 - 0x57) + uVar5;
        }
        else {
          if (5 < (uVar5 - 0x41 & 0xff)) goto LAB_05157fb4;
          *param_4 = (uVar3 - 0x37) + uVar5;
        }
      }
      uVar3 = *param_4;
      *param_2 = pbVar4 + 4;
      uVar3 = uVar3 * 0x10;
      bVar1 = pbVar4[3];
      *param_4 = uVar3;
      uVar5 = (uint)bVar1;
      if ((byte)(bVar1 - 0x30) < 10) {
        *param_4 = (uVar3 - 0x30) + uVar5;
      }
      else if ((byte)(bVar1 + 0x9f) < 6) {
        *param_4 = (uVar3 - 0x57) + uVar5;
      }
      else {
        if (5 < (uVar5 - 0x41 & 0xff)) goto LAB_05157fb4;
        *param_4 = (uVar3 - 0x37) + uVar5;
      }
      uVar2 = 1;
      goto LAB_05157ed4;
    }
    uVar3 = (uint)bVar1;
    if ((bVar1 - 0x61 & 0xff) < 6) {
      *param_4 = uVar3 - 0x57;
      goto LAB_05157da8;
    }
    if ((uVar3 - 0x41 & 0xff) < 6) {
      *param_4 = uVar3 - 0x37;
      goto LAB_05157da8;
    }
LAB_05157fb4:
    __s = "Bad unicode escape sequence in string: hexadecimal digit expected.";
  }
  std::string::string(asStack_10,__s);
  uVar2 = AddError(this,asStack_10,param_1,*param_2);
  std::string::~string(asStack_10);
  nop();
LAB_05157ed4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::DecodeUnicodeCodePoint(Sexy::JsonReader::Token&, unsigned char*&, unsigned
   char*, unsigned int&) */

void __thiscall
Sexy::JsonReader::DecodeUnicodeCodePoint
          (JsonReader *this,Token *param_1,uchar **param_2,uchar *param_3,uint *param_4)

{
  char cVar1;
  uchar *puVar2;
  char *__s;
  uint local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = DecodeUnicodeEscapeSequence(this,param_1,param_2,param_3,param_4);
  if ((cVar1 != '\0') && (*param_4 - 0xd800 < 0x400)) {
    puVar2 = *param_2;
    if ((long)param_3 - (long)puVar2 < 6) {
      __s = "additional six characters expected to parse unicode surrogate pair.";
    }
    else {
      *param_2 = puVar2 + 1;
      if ((*puVar2 == '\\') && (*param_2 = puVar2 + 2, puVar2[1] == 'u')) {
        cVar1 = DecodeUnicodeEscapeSequence(this,param_1,param_2,param_3,local_10);
        if (cVar1 != '\0') {
          *param_4 = (local_10[0] & 0x3ff) + 0x10000 + (*param_4 & 0x3ff) * 0x400;
        }
        goto LAB_05158094;
      }
      __s = "expecting another \\u token to begin the second half of a unicode surrogate pair";
    }
    std::string::string((string *)local_10,__s);
    cVar1 = AddError(this,(string *)local_10,param_1,*param_2);
    std::string::~string((string *)local_10);
    nop();
  }
LAB_05158094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::DecodeString(Sexy::JsonReader::Token&, char const*&) */

void __thiscall Sexy::JsonReader::DecodeString(JsonReader *this,Token *param_1,char **param_2)

{
  uchar uVar1;
  uchar *puVar2;
  undefined1 uVar3;
  char cVar4;
  char *__s;
  uchar *puVar5;
  uchar *puVar6;
  uchar *local_18;
  uint local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = *(uchar **)(param_1 + 8);
  puVar6 = (uchar *)(*(long *)(param_1 + 0x10) + -1);
  *param_2 = (char *)puVar5;
  puVar2 = puVar5 + 1;
  while (local_18 = puVar2, puVar2 < puVar6) {
    local_18 = puVar2 + 1;
    uVar1 = *puVar2;
    if (uVar1 == '\"') break;
    if (uVar1 == '\\') {
      if (puVar6 == local_18) {
        __s = "Empty escape sequence in string";
LAB_0515824c:
        std::string::string((string *)local_10,__s);
        uVar3 = AddError(this,(string *)local_10,param_1,local_18);
        std::string::~string((string *)local_10);
        nop();
        goto LAB_051581e0;
      }
      local_18 = puVar2 + 2;
      switch(puVar2[1]) {
      case '\"':
        *puVar5 = '\"';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      default:
        __s = "Bad escape sequence in string";
        goto LAB_0515824c;
      case '/':
        *puVar5 = '/';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case '\\':
        *puVar5 = '\\';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case 'b':
        *puVar5 = '\b';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case 'f':
        *puVar5 = '\f';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case 'n':
        *puVar5 = '\n';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case 'r':
        *puVar5 = '\r';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case 't':
        *puVar5 = '\t';
        puVar5 = puVar5 + 1;
        puVar2 = local_18;
        break;
      case 'u':
        cVar4 = DecodeUnicodeCodePoint(this,param_1,&local_18,puVar6,local_10);
        uVar3 = 0;
        if (cVar4 == '\0') goto LAB_051581e0;
        puVar5 = (uchar *)WriteCodePointToUTF8(this,local_10[0],puVar5);
        puVar2 = local_18;
      }
    }
    else {
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
      puVar2 = local_18;
    }
  }
  *puVar5 = '\0';
  uVar3 = 1;
LAB_051581e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::ReadString(Sexy::JsonReader::Token&, char const*) */

void __thiscall Sexy::JsonReader::ReadString(JsonReader *this,Token *param_1,char *param_2)

{
  char cVar1;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = DecodeString(this,param_1,&local_10);
  if (cVar1 != '\0') {
    StructuredData::AddString(*(StructuredData **)this,param_2,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::RecoverFromError(Sexy::JsonReader::TokenType) */

void __thiscall Sexy::JsonReader::RecoverFromError(JsonReader *this,int param_2)

{
  uint uVar1;
  int local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StructuredData **)(this + 8) == (StructuredData *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = StructuredData::Size(*(StructuredData **)(this + 8));
  }
  do {
    ScanToken(this,(Token *)local_28);
    if (local_28[0] == param_2) break;
  } while (local_28[0] != 0);
  if (*(StructuredData **)(this + 8) != (StructuredData *)0x0) {
    StructuredData::Rewind(*(StructuredData **)(this + 8),uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* Sexy::JsonReader::AddErrorAndRecover(std::string const&, Sexy::JsonReader::Token&,
   Sexy::JsonReader::TokenType) */

void __thiscall
Sexy::JsonReader::AddErrorAndRecover
          (JsonReader *this,string *param_1,Token *param_2,undefined4 param_4)

{
  AddError(this,param_1,param_2,(uchar *)0x0);
  RecoverFromError(this,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::DecodeDouble(Sexy::JsonReader::Token&, char const*) */

void __thiscall Sexy::JsonReader::DecodeDouble(JsonReader *this,Token *param_1,char *param_2)

{
  undefined1 uVar1;
  double dVar2;
  allocator aaStack_30 [8];
  uchar *local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  dVar2 = strtod(*(char **)(param_1 + 8),(char **)&local_28);
  if (*(uchar **)(param_1 + 0x10) == local_28) {
    uVar1 = 1;
    StructuredData::AddNumber(*(StructuredData **)this,param_2,dVar2);
  }
  else {
    std::string::string<unsigned_char*>
              (asStack_20,*(uchar **)(param_1 + 8),*(uchar **)(param_1 + 0x10),aaStack_30);
    std::operator+("\'",asStack_20);
    std::operator+(asStack_18,"\' is not a number.");
    uVar1 = AddError(this,asStack_10,param_1,(uchar *)0x0);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::DecodeNumber(Sexy::JsonReader::Token&, char const*) */

void __thiscall Sexy::JsonReader::DecodeNumber(JsonReader *this,Token *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  allocator aaStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pbVar10 = *(byte **)(param_1 + 8);
  pbVar9 = *(byte **)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  if (pbVar10 == pbVar9) {
    if (*pbVar10 == 0x2d) {
LAB_051588c8:
      pbVar7 = pbVar10 + 1;
      if (pbVar7 < pbVar9) {
        bVar1 = pbVar10[1];
        bVar5 = true;
        goto LAB_05158818;
      }
    }
LAB_0515898c:
    uVar6 = 0;
LAB_0515887c:
    uVar3 = 1;
    StructuredData::AddInteger(*(StructuredData **)this,param_2,uVar6);
  }
  else {
    bVar5 = false;
    pbVar8 = pbVar10;
    do {
      if (!bVar5) {
        bVar1 = *pbVar8;
        cVar2 = FUN_05157488(bVar1);
        bVar5 = true;
        if (cVar2 == '\0') {
          bVar5 = bVar1 == 0x2d && pbVar8 != pbVar10;
        }
      }
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 != pbVar9);
    if (!bVar5) {
      bVar1 = *pbVar10;
      if (bVar1 == 0x2d) goto LAB_051588c8;
      pbVar7 = pbVar10;
      if (pbVar8 <= pbVar10) goto LAB_0515898c;
LAB_05158818:
      uVar4 = bVar1 - 0x30;
      uVar6 = 0;
      if (9 < (uVar4 & 0xff)) {
LAB_051588f8:
        std::string::string<unsigned_char*>(asStack_20,pbVar10,pbVar9,aaStack_28);
        std::operator+("\'",asStack_20);
        std::operator+(asStack_18,"\' is not a number.");
        uVar3 = AddError(this,asStack_10,param_1,(uchar *)0x0);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        std::string::~string(asStack_20);
        nop();
        goto LAB_0515888c;
      }
      do {
        pbVar7 = pbVar7 + 1;
        uVar6 = (long)(int)uVar4 + uVar6 * 10;
        if (pbVar9 <= pbVar7) {
          if (bVar5) {
            uVar6 = -uVar6;
          }
          goto LAB_0515887c;
        }
        uVar4 = *pbVar7 - 0x30;
        if (9 < (uVar4 & 0xff)) goto LAB_051588f8;
      } while (uVar6 < 0xccccccccccccccc);
    }
    uVar3 = DecodeDouble(this,param_1,param_2);
  }
LAB_0515888c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::ReadValue(char const*) */

void __thiscall Sexy::JsonReader::ReadValue(JsonReader *this,char *param_1)

{
  undefined1 uVar1;
  string asStack_30 [8];
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScanCommentTokens(this,(Token *)local_28);
  switch(local_28[0]) {
  case 1:
    StructuredData::BeginObject(*(StructuredData **)this,param_1);
    uVar1 = ReadObject((Token *)this);
    StructuredData::EndObject(*(StructuredData **)this);
    break;
  default:
    std::string::string(asStack_30,"Syntax error: value, object or array expected.");
    uVar1 = AddError(this,asStack_30,(Token *)local_28,(uchar *)0x0);
    std::string::~string(asStack_30);
    nop();
    break;
  case 3:
    StructuredData::BeginArray(*(StructuredData **)this,param_1);
    uVar1 = ReadArray((Token *)this);
    StructuredData::EndArray(*(StructuredData **)this);
    break;
  case 5:
    uVar1 = ReadString(this,(Token *)local_28,param_1);
    break;
  case 6:
    uVar1 = DecodeNumber(this,(Token *)local_28,param_1);
    break;
  case 7:
    uVar1 = 1;
    StructuredData::AddBoolean(*(StructuredData **)this,param_1,true);
    break;
  case 8:
    uVar1 = 1;
    StructuredData::AddBoolean(*(StructuredData **)this,param_1,false);
    break;
  case 9:
    uVar1 = 1;
    StructuredData::AddNull(*(StructuredData **)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::Read(unsigned char*, unsigned char*, Sexy::StructuredData*,
   Sexy::StructuredData*) */

void __thiscall
Sexy::JsonReader::Read
          (JsonReader *this,uchar *param_1,uchar *param_2,StructuredData *param_3,
          StructuredData *param_4)

{
  char cVar1;
  uint uVar2;
  StructuredData *this_00;
  Token aTStack_28 [32];
  long local_8;
  
  *(uchar **)(this + 0x18) = param_2;
  local_8 = ___stack_chk_guard;
  *(uchar **)(this + 0x10) = param_1;
  *(StructuredData **)this = param_3;
  *(uchar **)(this + 0x20) = param_1;
  *(StructuredData **)(this + 8) = param_4;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 1;
  this[0x30] = (JsonReader)0x0;
  if (param_4 == (StructuredData *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = StructuredData::Size(param_4);
    StructuredData::BeginArray(*(StructuredData **)(this + 8),"jsonParseErrors");
  }
  cVar1 = ReadValue(this,(char *)0x0);
  ScanCommentTokens(this,aTStack_28);
  this_00 = *(StructuredData **)(this + 8);
  if (this_00 != (StructuredData *)0x0) {
    if (cVar1 == '\0') {
      StructuredData::EndArray(this_00);
    }
    else {
      StructuredData::Rewind(this_00,uVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::JsonReader::Read(Sexy::Buffer*, Sexy::StructuredData*, Sexy::StructuredData*) */

void __thiscall
Sexy::JsonReader::Read
          (JsonReader *this,Buffer *param_1,StructuredData *param_2,StructuredData *param_3)

{
  uint uVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)Buffer::GetDataPtr(param_1);
  uVar1 = Buffer::GetDataLen(param_1);
  Read(this,puVar2,uVar1,param_2,param_3);
  return;
}


/* Sexy::JsonReader::Read(std::string const&, Sexy::StructuredData*, Sexy::StructuredData*) */

ulong __thiscall
Sexy::JsonReader::Read
          (JsonReader *this,string *param_1,StructuredData *param_2,StructuredData *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  Buffer *pBVar4;
  ulong uVar5;
  
  if (param_3 == (StructuredData *)0x0) {
    pBVar4 = (Buffer *)StructuredData::GetBufferForTextRead(param_2);
    cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)param_1,SUB81(pBVar4,0));
    if (cVar1 == '\0') {
      return 0;
    }
    uVar5 = Read(this,pBVar4,param_2,(StructuredData *)0x0);
    return uVar5;
  }
  uVar2 = StructuredData::Size(param_3);
  StructuredData::AddString(param_3,"filePath",param_1);
  pBVar4 = (Buffer *)StructuredData::GetBufferForTextRead(param_2);
  cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)param_1,SUB81(pBVar4,0));
  if (cVar1 != '\0') {
    uVar3 = Read(this,pBVar4,param_2,param_3);
    if ((uVar3 & 0xff) != 0) {
      StructuredData::Rewind(param_3,uVar2);
      return (ulong)(uVar3 & 0xff);
    }
  }
  StructuredData::AddNull(param_3,"fileReadError");
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::ReadObject(Sexy::JsonReader::Token&) */

void Sexy::JsonReader::ReadObject(Token *param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *local_78;
  string asStack_70 [8];
  int local_68 [8];
  int local_48 [8];
  uint local_28 [8];
  long local_8;
  
  local_78 = (char *)0x0;
  local_8 = ___stack_chk_guard;
  do {
    do {
      ScanToken((JsonReader *)param_1,(Token *)local_68);
    } while (local_68[0] == 0xc);
    if (local_68[0] == 2) {
      if (local_78 != (char *)0x0) {
LAB_05158ebc:
        std::string::string((string *)local_28,"Missing \'}\' or object member name");
        uVar2 = AddErrorAndRecover((JsonReader *)param_1,(string *)local_28,(Token *)local_68,2);
        std::string::~string((string *)local_28);
        nop();
        goto LAB_05158f00;
      }
      break;
    }
    if (local_68[0] != 5) goto LAB_05158ebc;
    cVar1 = DecodeString((JsonReader *)param_1,(Token *)local_68,&local_78);
    if (cVar1 == '\0') {
LAB_05158f74:
      uVar2 = RecoverFromError((JsonReader *)param_1,2);
      goto LAB_05158f00;
    }
    ScanToken((JsonReader *)param_1,(Token *)local_48);
    if (local_48[0] != 0xb) {
      std::string::string((string *)local_28,"Missing \':\' after object member name");
      uVar2 = AddErrorAndRecover((JsonReader *)param_1,(string *)local_28,(Token *)local_48,2);
      std::string::~string((string *)local_28);
      nop();
      goto LAB_05158f00;
    }
    cVar1 = ReadValue((JsonReader *)param_1,local_78);
    if (cVar1 == '\0') goto LAB_05158f74;
    ScanToken((JsonReader *)param_1,(Token *)local_28);
    if (((local_28[0] & 0xfffffff7) != 2) && (local_28[0] != 0xc)) {
      std::string::string(asStack_70,"Missing \',\' or \'}\' in object declaration");
      uVar2 = AddErrorAndRecover((JsonReader *)param_1,asStack_70,(Token *)local_28,2);
      std::string::~string(asStack_70);
      nop();
      goto LAB_05158f00;
    }
    while (local_28[0] == 0xc) {
      ScanToken((JsonReader *)param_1,(Token *)local_28);
    }
  } while (local_28[0] != 2);
  uVar2 = 1;
LAB_05158f00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonReader::ReadArray(Sexy::JsonReader::Token&) */

void Sexy::JsonReader::ReadArray(Token *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScanWhitespace((JsonReader *)param_1);
  if (**(char **)(param_1 + 0x20) == ']') {
    ScanToken((JsonReader *)param_1,(Token *)local_28);
    uVar2 = 1;
  }
  else {
    do {
      cVar1 = ReadValue((JsonReader *)param_1,(char *)0x0);
      if (cVar1 == '\0') {
        uVar2 = RecoverFromError((JsonReader *)param_1,4);
        goto LAB_05159048;
      }
      do {
        ScanToken((JsonReader *)param_1,(Token *)local_28);
      } while (local_28[0] == 0xc);
    } while (local_28[0] != 4);
    uVar2 = 1;
  }
LAB_05159048:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::JsonReader::Inspect(unsigned char*, unsigned int) */

void __thiscall Sexy::JsonReader::Inspect(JsonReader *this,uchar *param_1,uint param_2)

{
  Inspect(this,param_1,param_1 + param_2);
  return;
}


/* Sexy::JsonReader::Inspect(Sexy::Buffer*) */

void __thiscall Sexy::JsonReader::Inspect(JsonReader *this,Buffer *param_1)

{
  uint uVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)Buffer::GetDataPtr(param_1);
  uVar1 = Buffer::GetDataLen(param_1);
  Inspect(this,puVar2,uVar1);
  return;
}

