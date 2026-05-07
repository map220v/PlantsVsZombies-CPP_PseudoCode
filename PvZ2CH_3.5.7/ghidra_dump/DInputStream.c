// Class: DInputStream


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DInputStream::readHeader(unsigned long) */

void DInputStream::readHeader(ulong param_1)

{
  long lVar1;
  ColourFit *this;
  ulong in_x1;
  size_t __n;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  if (in_x1 < *(ulong *)(param_1 + 0x18)) {
    this = operator_new__(in_x1 + 1);
    memcpy(this,(void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10)),in_x1);
    this[in_x1] = (ColourFit)0x0;
    __n = *(size_t *)(param_1 + 0x10);
    *(size_t *)(param_1 + 0x10) = __n + in_x1;
    std::string::append(in_x8,(char *)this,__n);
    EATextSquish::ColourFit::~ColourFit(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DInputStream::readByte() */

undefined1 __thiscall DInputStream::readByte(DInputStream *this)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  uVar2 = 0;
  uVar1 = lVar3 + 1;
  if (uVar1 <= *(ulong *)(this + 0x18)) {
    *(ulong *)(this + 0x10) = uVar1;
    uVar2 = *(undefined1 *)(*(long *)(this + 8) + lVar3);
  }
  return uVar2;
}


/* DInputStream::readInt() */

uint __thiscall DInputStream::readInt(DInputStream *this)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(long *)(this + 0x10) + 4;
  uVar3 = 0;
  if (uVar1 <= *(ulong *)(this + 0x18)) {
    uVar2 = *(uint *)(*(long *)(this + 8) + *(long *)(this + 0x10));
    *(ulong *)(this + 0x10) = uVar1;
    uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (*this == (DInputStream)0x0) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}


/* DInputStream::readShort() */

uint __thiscall DInputStream::readShort(DInputStream *this)

{
  ulong uVar1;
  short sVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(long *)(this + 0x10) + 2;
  if (uVar1 <= *(ulong *)(this + 0x18)) {
    sVar2 = *(short *)(*(long *)(this + 8) + *(long *)(this + 0x10));
    uVar3 = (uint)sVar2;
    if (*this != (DInputStream)0x0) {
      uVar3 = (uint)(byte)((ushort)sVar2 >> 8) |
              -((uint)(int)sVar2 >> 7 & 1) & 0xffff0000 | ((int)sVar2 & 0xffU) << 8;
    }
    *(ulong *)(this + 0x10) = uVar1;
  }
  return uVar3;
}


/* DInputStream::readFloat() */

uint __thiscall DInputStream::readFloat(DInputStream *this)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(long *)(this + 0x10) + 4;
  uVar3 = 0;
  if (uVar1 <= *(ulong *)(this + 0x18)) {
    uVar2 = *(uint *)(*(long *)(this + 8) + *(long *)(this + 0x10));
    *(ulong *)(this + 0x10) = uVar1;
    uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (*this == (DInputStream)0x0) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}


/* DInputStream::readDouble() */

undefined1  [16] __thiscall DInputStream::readDouble(DInputStream *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(long *)(this + 0x10) + 8;
  uVar3 = 0;
  if (uVar1 <= *(ulong *)(this + 0x18)) {
    uVar2 = *(ulong *)(*(long *)(this + 8) + *(long *)(this + 0x10));
    *(ulong *)(this + 0x10) = uVar1;
    uVar1 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar1 >> 0x20 | uVar1 << 0x20;
    if (*this == (DInputStream)0x0) {
      uVar3 = uVar2;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


/* DInputStream::readLongLong() */

ulong __thiscall DInputStream::readLongLong(DInputStream *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(long *)(this + 0x10) + 8;
  uVar2 = 0;
  if (uVar1 <= *(ulong *)(this + 0x18)) {
    uVar3 = *(ulong *)(*(long *)(this + 8) + *(long *)(this + 0x10));
    *(ulong *)(this + 0x10) = uVar1;
    uVar1 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar1 >> 0x20 | uVar1 << 0x20;
    if (*this == (DInputStream)0x0) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}


/* DInputStream::readBoolean() */

bool __thiscall DInputStream::readBoolean(DInputStream *this)

{
  char cVar1;
  
  cVar1 = readByte(this);
  return cVar1 != '\0';
}


/* DInputStream::decodeVarInt(unsigned long long*) */

undefined8 __thiscall DInputStream::decodeVarInt(DInputStream *this,ulonglong *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  *param_1 = 0;
  while( true ) {
    uVar3 = readByte(this);
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    uVar2 = uVar4 & 0x3f;
    uVar1 = (int)uVar4 + 7;
    uVar4 = (ulong)uVar1;
    *param_1 = *param_1 | ((ulong)(byte)uVar3 & 0x7f) << uVar2;
    if ((uVar3 >> 7 & 1) == 0) break;
    if (uVar1 == 0x46) {
      return 0;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DInputStream::readString() */

void DInputStream::readString(void)

{
  char cVar1;
  DInputStream *in_x0;
  ulonglong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  local_10 = 0;
  cVar1 = decodeVarInt(in_x0,&local_10);
  if ((cVar1 != '\0') && (local_10 != 0)) {
    if ((*(long *)(in_x0 + 0x10) + local_10 <= *(ulong *)(in_x0 + 0x18)) ||
       (local_10 = *(ulong *)(in_x0 + 0x18) - *(long *)(in_x0 + 0x10), local_10 != 0)) {
      FUN_05475980();
      *(ulonglong *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + local_10;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DInputStream::readString(unsigned long) */

DString * DInputStream::readString(ulong param_1)

{
  ulong uVar1;
  ulong in_x1;
  DString *in_x8;
  
  uVar1 = *(ulong *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (in_x1 + *(long *)(param_1 + 0x10) <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = in_x1;
  }
  DString::DString(in_x8,*(char **)(param_1 + 8),uVar1);
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar1;
  return in_x8;
}


/* DInputStream::readBuffer(void*, unsigned long) */

size_t __thiscall DInputStream::readBuffer(DInputStream *this,void *param_1,ulong param_2)

{
  size_t __n;
  
  if (param_1 != (void *)0x0) {
    __n = *(ulong *)(this + 0x18) - *(long *)(this + 0x10);
    if (param_2 + *(long *)(this + 0x10) <= *(ulong *)(this + 0x18)) {
      __n = param_2;
    }
    memcpy(param_1,*(void **)(this + 8),__n);
    *(size_t *)(this + 0x10) = *(long *)(this + 0x10) + __n;
    return __n;
  }
  return 0;
}


/* DInputStream::readLine() */

void DInputStream::readLine(void)

{
  char cVar1;
  long in_x0;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  Set8BytesTo0();
  uVar2 = *(ulong *)(in_x0 + 0x10);
  uVar5 = *(ulong *)(in_x0 + 0x18);
  pcVar4 = (char *)(*(long *)(in_x0 + 8) + uVar2);
  uVar6 = uVar2;
  if (uVar2 < uVar5) {
    cVar1 = *(char *)(*(long *)(in_x0 + 8) + uVar2);
    if (cVar1 == '\r') {
LAB_04f87dac:
      uVar6 = uVar2 + 1;
      if (uVar6 < uVar5) {
        uVar2 = uVar2 + 2;
        if (pcVar4[1] != '\n') {
          uVar2 = uVar6;
        }
        FUN_05475980();
        *(ulong *)(in_x0 + 0x10) = uVar2;
        return;
      }
    }
    else if (cVar1 == '\n') {
      uVar6 = uVar2 + 1;
    }
    else {
      while( true ) {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        pcVar4 = pcVar4 + 1;
        uVar6 = uVar2;
        if (uVar5 <= uVar2) break;
        if (*pcVar4 == '\r') goto LAB_04f87dac;
        if (*pcVar4 == '\n') {
          FUN_05475980();
          *(ulong *)(in_x0 + 0x10) = uVar3 + 2;
          return;
        }
      }
    }
  }
  FUN_05475980();
  *(ulong *)(in_x0 + 0x10) = uVar6;
  return;
}


/* DInputStream::seek(unsigned long) */

bool __thiscall DInputStream::seek(DInputStream *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 0x18)) {
    *(ulong *)(this + 0x10) = param_1;
  }
  return param_1 < *(ulong *)(this + 0x18);
}


/* DInputStream::readFromBuffer(unsigned char const*, unsigned long) */

bool __thiscall DInputStream::readFromBuffer(DInputStream *this,uchar *param_1,ulong param_2)

{
  void *__dest;
  
  if (param_2 != 0) {
    __dest = operator_new__(param_2);
    *(ulong *)(this + 0x18) = param_2;
    *(void **)(this + 8) = __dest;
    memcpy(__dest,param_1,param_2);
  }
  return param_2 != 0;
}


/* DInputStream::readFromString(std::string const&) */

void __thiscall DInputStream::readFromString(DInputStream *this,string *param_1)

{
  uchar *puVar1;
  ulong uVar2;
  
  puVar1 = (uchar *)FUN_0547429c(param_1);
  uVar2 = FUN_05474178(param_1);
  readFromBuffer(this,puVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DInputStream::readFromFullPathFile(std::string const&) */

void __thiscall DInputStream::readFromFullPathFile(DInputStream *this,string *param_1)

{
  undefined8 uVar1;
  char *__filename;
  FILE *__stream;
  long lVar2;
  void *__ptr;
  size_t sVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"ReadFileFromFullPath : %s",uVar1);
  *(undefined8 *)(this + 0x18) = 0;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  FUN_05475d88(asStack_10,param_1);
  __filename = (char *)FUN_0547429c(asStack_10);
  __stream = fopen(__filename,"rb");
  if (__stream == (FILE *)0x0) {
    std::string::~string(asStack_10);
  }
  else {
    fseek(__stream,0,2);
    lVar2 = ftell(__stream);
    *(long *)(this + 0x18) = lVar2;
    fseek(__stream,0,0);
    sVar3 = *(size_t *)(this + 0x18);
    __ptr = malloc(sVar3);
    *(void **)(this + 8) = __ptr;
    sVar3 = fread(__ptr,1,sVar3,__stream);
    *(size_t *)(this + 0x18) = sVar3;
    fclose(__stream);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(long *)(this + 8) != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DInputStream::readFromFile(std::string const&) */

void __thiscall DInputStream::readFromFile(DInputStream *this,string *param_1)

{
  undefined4 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*Sexy::gFileDriver + 0x58))(asStack_18,Sexy::gFileDriver);
  std::operator+(asStack_18,param_1);
  uVar1 = readFromFullPathFile(this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DInputStream::readFromWritabelPathFile(std::string const&) */

void __thiscall DInputStream::readFromWritabelPathFile(DInputStream *this,string *param_1)

{
  undefined4 uVar1;
  char *__s;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*Sexy::gFileDriver + 0x50))(asStack_10,Sexy::gFileDriver);
  std::operator+(asStack_10,param_1);
  std::string::~string(asStack_10);
  __s = (char *)FUN_0547429c(asStack_18);
  std::string::string(asStack_10,__s);
  uVar1 = readFromFullPathFile(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DInputStream::loadAndCheckData(std::string const&) */

void __thiscall DInputStream::loadAndCheckData(DInputStream *this,string *param_1)

{
  char cVar1;
  int iVar2;
  uchar *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_2c8 [8];
  DAES aDStack_2c0 [696];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  FUN_05474184(param_1);
  readHeader((ulong)this);
  iVar2 = FUN_054748a4(asStack_2c8,param_1);
  if (iVar2 == 0) {
    uVar5 = 1;
    cVar1 = readBoolean(this);
    if (cVar1 != '\0') {
      puVar3 = (uchar *)getAESKey();
      DAES::DAES(aDStack_2c0,puVar3);
      uVar4 = *(ulong *)(this + 0x10);
      if (uVar4 < *(ulong *)(this + 0x18)) {
        do {
          puVar3 = (uchar *)(*(long *)(this + 8) + uVar4);
          uVar4 = uVar4 + 0x10;
          DAES::InvCipher(aDStack_2c0,puVar3);
        } while (uVar4 < *(ulong *)(this + 0x18));
      }
      uVar5 = 1;
      nop();
    }
  }
  std::string::~string(asStack_2c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

