// Class: Sexy::RtSerialBuffer


/* Sexy::RtSerialBuffer::Write(void const*, unsigned int) */

void __thiscall Sexy::RtSerialBuffer::Write(RtSerialBuffer *this,void *param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  undefined8 uVar2;
  int iVar3;
  
  if (this[0x2c] == (RtSerialBuffer)0x0) {
    if (*(long *)this == 0) {
      uVar2 = *(undefined8 *)(this + 0x10);
      iVar3 = *(int *)(this + 0x28);
      uVar1 = FUN_051c6950(uVar2,*(undefined8 *)(this + 0x18));
      if (uVar1 < param_2 + iVar3) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
                   (ulong)(param_2 + iVar3));
        iVar3 = *(int *)(this + 0x28);
        uVar2 = *(undefined8 *)(this + 0x10);
      }
      __dest = (void *)FUN_051c6958(uVar2,iVar3);
    }
    else {
      __dest = (void *)(*(long *)this + (ulong)*(uint *)(this + 0x28));
    }
    memcpy(__dest,param_1,(ulong)param_2);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
    return;
  }
  *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
  return;
}


/* Sexy::RtSerialBuffer::WriteInt8Fixed(signed char) */

void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 local_1;
  
  local_1 = param_2;
  Write(this,&local_1,1);
  return;
}


void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 uStack_1;
  
  uStack_1 = param_2;
  Write(this,&uStack_1,1);
  return;
}


void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 uStack_1;
  
  uStack_1 = param_2;
  Write(this,&uStack_1,1);
  return;
}


/* Sexy::RtSerialBuffer::GetDataSize() const */

ulong __thiscall Sexy::RtSerialBuffer::GetDataSize(RtSerialBuffer *this)

{
  ulong uVar1;
  
  if (*(long *)this != 0) {
    return (ulong)*(uint *)(this + 8);
  }
  uVar1 = FUN_03f096ac(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return uVar1;
}


/* Sexy::RtSerialBuffer::RtSerialBuffer(unsigned char*, unsigned int) */

void __thiscall
Sexy::RtSerialBuffer::RtSerialBuffer(RtSerialBuffer *this,uchar *param_1,uint param_2)

{
  *(uchar **)this = param_1;
  *(uint *)(this + 8) = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (RtSerialBuffer)0x0;
  this[0x2d] = (RtSerialBuffer)0x1;
  return;
}


/* Sexy::RtSerialBuffer::GetDataPtr() const */

long __thiscall Sexy::RtSerialBuffer::GetDataPtr(RtSerialBuffer *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if ((lVar2 == 0) &&
     (cVar1 = std::vector<unsigned_char,std::allocator<unsigned_char>>::empty
                        ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10)),
     cVar1 == '\0')) {
    lVar2 = FUN_03f09760(*(undefined8 *)(this + 0x10));
    return lVar2;
  }
  return lVar2;
}


/* Sexy::RtSerialBuffer::~RtSerialBuffer() */

void __thiscall Sexy::RtSerialBuffer::~RtSerialBuffer(RtSerialBuffer *this)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  return;
}


void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 uStack_1;
  
  uStack_1 = param_2;
  Write(this,&uStack_1,1);
  return;
}


/* Sexy::RtSerialBuffer::WriteFloat(float) */

void __thiscall Sexy::RtSerialBuffer::WriteFloat(RtSerialBuffer *this,float param_1)

{
  float local_4;
  
  local_4 = param_1;
  Write(this,&local_4,4);
  return;
}


void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 uStack_1;
  
  uStack_1 = param_2;
  Write(this,&uStack_1,1);
  return;
}


/* Sexy::RtSerialBuffer::WriteInt16Fixed(short) */

void __thiscall Sexy::RtSerialBuffer::WriteInt16Fixed(RtSerialBuffer *this,short param_1)

{
  short local_2;
  
  local_2 = param_1;
  Write(this,&local_2,2);
  return;
}


/* Sexy::RtSerialBuffer::WriteInt32Fixed(int) */

void __thiscall Sexy::RtSerialBuffer::WriteInt32Fixed(RtSerialBuffer *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  Write(this,&local_4,4);
  return;
}


/* Sexy::RtSerialBuffer::WriteDouble(double) */

void __thiscall Sexy::RtSerialBuffer::WriteDouble(RtSerialBuffer *this,double param_1)

{
  double local_8;
  
  local_8 = param_1;
  Write(this,&local_8,8);
  return;
}


/* Sexy::RtSerialBuffer::WriteUInt8Fixed(unsigned char) */

void __thiscall Sexy::RtSerialBuffer::WriteUInt8Fixed(RtSerialBuffer *this,uchar param_1)

{
  uchar uStack_1;
  
  uStack_1 = param_1;
  Write(this,&uStack_1,1);
  return;
}


/* Sexy::RtSerialBuffer::WriteUInt16Fixed(unsigned short) */

void __thiscall Sexy::RtSerialBuffer::WriteUInt16Fixed(RtSerialBuffer *this,ushort param_1)

{
  ushort uStack_2;
  
  uStack_2 = param_1;
  Write(this,&uStack_2,2);
  return;
}


/* Sexy::RtSerialBuffer::Read(void*, unsigned int) */

void __thiscall Sexy::RtSerialBuffer::Read(RtSerialBuffer *this,void *param_1,uint param_2)

{
  void *__src;
  
  if (*(long *)this == 0) {
    __src = (void *)FUN_051c6958(*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x28));
  }
  else {
    __src = (void *)(*(long *)this + (ulong)*(uint *)(this + 0x28));
  }
  memcpy(param_1,__src,(ulong)param_2);
  *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadInt8Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadInt8Fixed(RtSerialBuffer *this)

{
  undefined1 local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Read(this,&local_9,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadInt32Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadInt32Fixed(RtSerialBuffer *this)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Read(this,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* Sexy::RtSerialBuffer::SeekCurrent(int) */

void __thiscall Sexy::RtSerialBuffer::SeekCurrent(RtSerialBuffer *this,int param_1)

{
  FUN_051c6944(this + 0x28,param_1 + *(int *)(this + 0x28));
  return;
}


/* Sexy::RtSerialBuffer::InternalMaybeRead(void*, unsigned int) */

undefined8 __thiscall
Sexy::RtSerialBuffer::InternalMaybeRead(RtSerialBuffer *this,void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    if (*(long *)this == 0) {
      uVar4 = *(undefined8 *)(this + 0x10);
      iVar1 = *(int *)(this + 0x28);
      uVar3 = param_2 + iVar1;
      uVar2 = FUN_051c6950(uVar4,*(undefined8 *)(this + 0x18));
      if (uVar2 < uVar3) {
        return 0;
      }
      if (param_1 != (void *)0x0) {
        __src = (void *)FUN_051c6958(uVar4,iVar1);
        memcpy(param_1,__src,(ulong)param_2);
        uVar3 = param_2 + *(int *)(this + 0x28);
      }
    }
    else {
      uVar3 = param_2 + *(uint *)(this + 0x28);
      if (*(uint *)(this + 8) < uVar3) {
        return 0;
      }
      if (param_1 != (void *)0x0) {
        memcpy(param_1,(void *)(*(long *)this + (ulong)*(uint *)(this + 0x28)),(ulong)param_2);
        uVar3 = param_2 + *(int *)(this + 0x28);
      }
    }
    *(uint *)(this + 0x28) = uVar3;
  }
  return 1;
}


/* Sexy::RtSerialBuffer::InternalRead(void*, unsigned int) */

void __thiscall Sexy::RtSerialBuffer::InternalRead(RtSerialBuffer *this,void *param_1,uint param_2)

{
  void *__src;
  
  if (*(long *)this == 0) {
    __src = (void *)FUN_051c6958(*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x28));
  }
  else {
    __src = (void *)(*(long *)this + (ulong)*(uint *)(this + 0x28));
  }
  memcpy(param_1,__src,(ulong)param_2);
  *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadUInt8Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadUInt8Fixed(RtSerialBuffer *this)

{
  undefined1 uStack_9;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Read(this,&uStack_9,1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadInt16Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadInt16Fixed(RtSerialBuffer *this)

{
  undefined2 local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Read(this,&local_a,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadUInt16Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadUInt16Fixed(RtSerialBuffer *this)

{
  undefined2 uStack_a;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Read(this,&uStack_a,2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_a);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadFloat() */

void __thiscall Sexy::RtSerialBuffer::ReadFloat(RtSerialBuffer *this)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Read(this,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadInt64Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadInt64Fixed(RtSerialBuffer *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Read(this,&local_10,8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadUInt64Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadUInt64Fixed(RtSerialBuffer *this)

{
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Read(this,&uStack_10,8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadDouble() */

void __thiscall Sexy::RtSerialBuffer::ReadDouble(RtSerialBuffer *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Read(this,&local_10,8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadUInt32Fixed() */

void __thiscall Sexy::RtSerialBuffer::ReadUInt32Fixed(RtSerialBuffer *this)

{
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Read(this,&uStack_c,4);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_c);
}


/* Sexy::RtSerialBuffer::ReadInt32VarU() */

uint __thiscall Sexy::RtSerialBuffer::ReadInt32VarU(RtSerialBuffer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = ReadInt8Fixed(this);
    uVar1 = uVar3 & 0x1f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (uVar2 & 0x7f) << (ulong)uVar1;
  } while ((uVar2 >> 7 & 1) != 0);
  return uVar4;
}


/* Sexy::RtSerialBuffer::ReadUInt32VarU() */

uint Sexy::RtSerialBuffer::ReadUInt32VarU(void)

{
  uint uVar1;
  uint uVar2;
  RtSerialBuffer *in_x0;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = ReadInt8Fixed(in_x0);
    uVar1 = uVar3 & 0x1f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (uVar2 & 0x7f) << (ulong)uVar1;
  } while ((uVar2 >> 7 & 1) != 0);
  return uVar4;
}


/* Sexy::RtSerialBuffer::ReadInt64VarU() */

ulong __thiscall Sexy::RtSerialBuffer::ReadInt64VarU(RtSerialBuffer *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = ReadInt8Fixed(this);
    uVar1 = uVar3 & 0x3f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (uVar2 & 0x7f) << uVar1;
  } while (((uint)uVar2 >> 7 & 1) != 0);
  return uVar4;
}


/* Sexy::RtSerialBuffer::ReadUInt64VarU() */

ulong Sexy::RtSerialBuffer::ReadUInt64VarU(void)

{
  ulong uVar1;
  ulong uVar2;
  RtSerialBuffer *in_x0;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = ReadInt8Fixed(in_x0);
    uVar1 = uVar3 & 0x3f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (uVar2 & 0x7f) << uVar1;
  } while (((uint)uVar2 >> 7 & 1) != 0);
  return uVar4;
}


/* Sexy::RtSerialBuffer::ReadInt32VarS() */

uint __thiscall Sexy::RtSerialBuffer::ReadInt32VarS(RtSerialBuffer *this)

{
  uint uVar1;
  
  uVar1 = ReadInt32VarU(this);
  return -(uVar1 & 1) ^ uVar1 >> 1;
}


/* Sexy::RtSerialBuffer::ReadInt64VarS() */

ulong __thiscall Sexy::RtSerialBuffer::ReadInt64VarS(RtSerialBuffer *this)

{
  ulong uVar1;
  
  uVar1 = ReadInt64VarU(this);
  return -(uVar1 & 1) ^ uVar1 >> 1;
}


/* Sexy::RtSerialBuffer::ReadString(std::string&) */

void __thiscall Sexy::RtSerialBuffer::ReadString(RtSerialBuffer *this,string *param_1)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = ReadInt32VarU(this);
  if (uVar1 == 0) {
    FUN_05474ff8(param_1);
    return;
  }
  FUN_05475be8(param_1,uVar1,0);
  pvVar2 = (void *)FUN_0547429c(param_1);
  Read(this,pvVar2,uVar1);
  return;
}


/* Sexy::RtSerialBuffer::ReadWString(std::wstring&) */

void __thiscall Sexy::RtSerialBuffer::ReadWString(RtSerialBuffer *this,wstring *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = ReadInt32VarU(this);
  if (iVar1 == 0) {
    FUN_05476f98(param_1);
    return;
  }
  FUN_0547799c(param_1,iVar1,0);
  pvVar2 = (void *)FUN_054766ec(param_1);
  Read(this,pvVar2,iVar1 << 2);
  return;
}


/* Sexy::RtSerialBuffer::InternalGetUTF8EncodedLengthForChar(unsigned int) */

undefined4 __thiscall
Sexy::RtSerialBuffer::InternalGetUTF8EncodedLengthForChar(RtSerialBuffer *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((0x7f < param_1) && (uVar1 = 2, 0x7ff < param_1)) && (uVar1 = 3, 0xffff < param_1)) {
    uVar1 = 4;
    if (0x10ffff < param_1) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialBuffer::ReadUTF8Char() */

void __thiscall Sexy::RtSerialBuffer::ReadUTF8Char(RtSerialBuffer *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  wchar_t wVar6;
  wchar_t local_14;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetDataSize(this);
  iVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
  lVar4 = GetDataPtr(this);
  uVar5 = FUN_051c694c(*(undefined4 *)(this + 0x28));
  pcVar1 = (char *)(lVar4 + (uVar5 & 0xffffffff));
  local_10 = pcVar1;
  iVar2 = GetNextUTF8CharFromStream(&local_10,iVar2 - iVar3,&local_14);
  wVar6 = L'\0';
  if (iVar2 != 0) {
    SeekCurrent(this,(int)local_10 - (int)pcVar1);
    wVar6 = local_14;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(wVar6);
}


/* Sexy::RtSerialBuffer::ReadUTF8String(std::wstring&) */

void __thiscall Sexy::RtSerialBuffer::ReadUTF8String(RtSerialBuffer *this,wstring *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = ReadInt32VarU(this);
  iVar3 = 0;
  ReadInt32VarU(this);
  FUN_05476f98(param_1);
  FUN_054775b4(param_1,iVar1);
  if (iVar1 != 0) {
    do {
      iVar3 = iVar3 + 1;
      uVar2 = ReadUTF8Char(this);
      FUN_05477a88(param_1,uVar2);
    } while (iVar1 != iVar3);
  }
  return;
}


/* Sexy::RtSerialBuffer::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtSerialBuffer&&) */

RtSerialBuffer * __thiscall
Sexy::RtSerialBuffer::operator=(RtSerialBuffer *this,RtSerialBuffer *param_1)

{
  undefined4 uVar1;
  RtSerialBuffer RVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar3;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::operator=
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  RVar2 = param_1[0x2c];
  this[0x2d] = param_1[0x2d];
  *(undefined4 *)(this + 0x28) = uVar1;
  this[0x2c] = RVar2;
  return this;
}


/* Sexy::RtSerialBuffer::InternalMaybeWrite(void const*, unsigned int) */

RtSerialBuffer __thiscall
Sexy::RtSerialBuffer::InternalMaybeWrite(RtSerialBuffer *this,void *param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  
  if (param_2 != 0) {
    if (this[0x2c] != (RtSerialBuffer)0x0) {
      *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
      return this[0x2c];
    }
    if (*(long *)this == 0) {
      iVar2 = *(int *)(this + 0x28);
      uVar1 = FUN_051c6950(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
      if (uVar1 < param_2 + iVar2) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
                   (ulong)(param_2 + iVar2));
        iVar2 = *(int *)(this + 0x28);
      }
      uVar1 = iVar2 + param_2;
      if (param_1 != (void *)0x0) {
        __dest = (void *)FUN_051c6958(*(undefined8 *)(this + 0x10),iVar2);
        memcpy(__dest,param_1,(ulong)param_2);
        uVar1 = param_2 + *(int *)(this + 0x28);
      }
    }
    else {
      uVar1 = param_2 + *(uint *)(this + 0x28);
      if (*(uint *)(this + 8) < uVar1) {
        return (RtSerialBuffer)0x0;
      }
      if (param_1 != (void *)0x0) {
        memcpy((void *)(*(long *)this + (ulong)*(uint *)(this + 0x28)),param_1,(ulong)param_2);
        uVar1 = param_2 + *(int *)(this + 0x28);
      }
    }
    *(uint *)(this + 0x28) = uVar1;
  }
  return (RtSerialBuffer)0x1;
}


/* Sexy::RtSerialBuffer::InternalWrite(void const*, unsigned int) */

void __thiscall Sexy::RtSerialBuffer::InternalWrite(RtSerialBuffer *this,void *param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  undefined8 uVar2;
  int iVar3;
  
  if (this[0x2c] == (RtSerialBuffer)0x0) {
    if (*(long *)this == 0) {
      uVar2 = *(undefined8 *)(this + 0x10);
      iVar3 = *(int *)(this + 0x28);
      uVar1 = FUN_051c6950(uVar2,*(undefined8 *)(this + 0x18));
      if (uVar1 < param_2 + iVar3) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
                   (ulong)(param_2 + iVar3));
        iVar3 = *(int *)(this + 0x28);
        uVar2 = *(undefined8 *)(this + 0x10);
      }
      __dest = (void *)FUN_051c6958(uVar2,iVar3);
    }
    else {
      __dest = (void *)(*(long *)this + (ulong)*(uint *)(this + 0x28));
    }
    memcpy(__dest,param_1,(ulong)param_2);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
    return;
  }
  *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
  return;
}


/* Sexy::RtSerialBuffer::WriteInt32VarU(int) */

void __thiscall Sexy::RtSerialBuffer::WriteInt32VarU(RtSerialBuffer *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = (uint)param_1 >> 7; uVar2 = param_1 & 0x7f, uVar1 != 0; uVar1 = uVar1 >> 0xe) {
    WriteInt8Fixed(this,uVar2 | 0xffffff80);
    uVar2 = uVar1 & 0x7f;
    param_1 = uVar1 >> 7;
    if (param_1 == 0) break;
    WriteInt8Fixed(this,uVar2 | 0xffffff80);
  }
  WriteInt8Fixed(this,uVar2);
  return;
}


/* Sexy::RtSerialBuffer::WriteInt32VarS(int) */

void __thiscall Sexy::RtSerialBuffer::WriteInt32VarS(RtSerialBuffer *this,int param_1)

{
  WriteInt32VarU(this,param_1 << 1 ^ param_1 >> 0x1f);
  return;
}


/* Sexy::RtSerialBuffer::WriteUInt32VarU(unsigned int) */

void __thiscall Sexy::RtSerialBuffer::WriteUInt32VarU(RtSerialBuffer *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = param_1 >> 7; uVar2 = param_1 & 0x7f, uVar1 != 0; uVar1 = uVar1 >> 0xe) {
    WriteInt8Fixed(this,uVar2 | 0xffffff80);
    uVar2 = uVar1 & 0x7f;
    param_1 = uVar1 >> 7;
    if (param_1 == 0) break;
    WriteInt8Fixed(this,uVar2 | 0xffffff80);
  }
  WriteInt8Fixed(this,uVar2);
  return;
}


/* Sexy::RtSerialBuffer::WriteInt64VarU(long) */

void __thiscall Sexy::RtSerialBuffer::WriteInt64VarU(RtSerialBuffer *this,long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_1;
  for (uVar2 = (ulong)param_1 >> 7; uVar1 = uVar1 & 0x7f, uVar2 != 0; uVar2 = uVar2 >> 0xe) {
    WriteInt8Fixed(this,uVar1 | 0xffffff80);
    uVar1 = (uint)uVar2 & 0x7f;
    if (uVar2 >> 7 == 0) break;
    WriteInt8Fixed(this,uVar1 | 0xffffff80);
    uVar1 = (uint)(uVar2 >> 7);
  }
  WriteInt8Fixed(this,uVar1);
  return;
}


/* Sexy::RtSerialBuffer::WriteInt64VarS(long) */

void __thiscall Sexy::RtSerialBuffer::WriteInt64VarS(RtSerialBuffer *this,long param_1)

{
  WriteInt64VarU(this,param_1 << 1 ^ param_1 >> 0x3f);
  return;
}


/* Sexy::RtSerialBuffer::WriteUInt64VarU(unsigned long) */

void __thiscall Sexy::RtSerialBuffer::WriteUInt64VarU(RtSerialBuffer *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_1;
  for (uVar2 = param_1 >> 7; uVar1 = uVar1 & 0x7f, uVar2 != 0; uVar2 = uVar2 >> 0xe) {
    WriteInt8Fixed(this,uVar1 | 0xffffff80);
    uVar1 = (uint)uVar2 & 0x7f;
    if (uVar2 >> 7 == 0) break;
    WriteInt8Fixed(this,uVar1 | 0xffffff80);
    uVar1 = (uint)(uVar2 >> 7);
  }
  WriteInt8Fixed(this,uVar1);
  return;
}


/* Sexy::RtSerialBuffer::WriteUTF8Char(unsigned int) */

void __thiscall Sexy::RtSerialBuffer::WriteUTF8Char(RtSerialBuffer *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x80) {
    WriteInt8Fixed();
    return;
  }
  if (0x7ff < param_1) {
    if (param_1 < 0x10000) {
      uVar1 = param_1 >> 0xc | 0xffffffe0;
    }
    else {
      if (0x10ffff < param_1) {
        return;
      }
      WriteInt8Fixed(this,param_1 >> 0x12 | 0xfffffff0);
      uVar1 = param_1 >> 0xc & 0x3f | 0xffffff80;
    }
    WriteInt8Fixed(this,uVar1);
    WriteInt8Fixed(this,param_1 >> 6 & 0x3f | 0xffffff80);
    WriteInt8Fixed(this,param_1 & 0x3f | 0xffffff80);
    return;
  }
  WriteInt8Fixed(this,param_1 >> 6 | 0xffffffc0);
  WriteInt8Fixed(this,param_1 & 0x3f | 0xffffff80);
  return;
}


/* Sexy::RtSerialBuffer::WriteUTF8String(std::wstring const&) */

void __thiscall Sexy::RtSerialBuffer::WriteUTF8String(RtSerialBuffer *this,wstring *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = FUN_054765d0(param_1);
  WriteInt32VarU(this,uVar2);
  if (uVar2 != 0) {
    iVar6 = 0;
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 1;
      puVar4 = (uint *)FUN_054765fc(param_1,lVar5);
      iVar3 = InternalGetUTF8EncodedLengthForChar(this,*puVar4);
      iVar6 = iVar6 + iVar3;
      lVar5 = lVar1;
    } while ((uint)lVar1 < uVar2);
    WriteInt32VarU(this,iVar6);
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 1;
      puVar4 = (uint *)FUN_054765fc(param_1,lVar5);
      WriteUTF8Char(this,*puVar4);
      lVar5 = lVar1;
    } while ((uint)lVar1 < uVar2);
    return;
  }
  WriteInt32VarU(this,0);
  return;
}


/* Sexy::RtSerialBuffer::WriteUTF8String(wchar_t const*) */

void __thiscall Sexy::RtSerialBuffer::WriteUTF8String(RtSerialBuffer *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
  
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    WriteInt32VarU(this,0);
  }
  else {
    sVar4 = wcslen(param_1);
    uVar2 = (uint)sVar4;
    WriteInt32VarU(this,uVar2);
    if (uVar2 != 0) {
      lVar5 = 0;
      iVar6 = 0;
      do {
        pwVar1 = param_1 + lVar5;
        lVar5 = lVar5 + 1;
        iVar3 = InternalGetUTF8EncodedLengthForChar(this,*pwVar1);
        iVar6 = iVar6 + iVar3;
      } while ((uint)lVar5 < uVar2);
      lVar5 = 0;
      WriteInt32VarU(this,iVar6);
      do {
        pwVar1 = param_1 + lVar5;
        lVar5 = lVar5 + 1;
        WriteUTF8Char(this,*pwVar1);
      } while ((uint)lVar5 < uVar2);
      return;
    }
  }
  WriteInt32VarU(this,0);
  return;
}


void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 uStack_1;
  
  uStack_1 = param_2;
  Write(this,&uStack_1,1);
  return;
}


void __thiscall Sexy::RtSerialBuffer::WriteInt8Fixed(RtSerialBuffer *this,undefined1 param_2)

{
  undefined1 uStack_1;
  
  uStack_1 = param_2;
  Write(this,&uStack_1,1);
  return;
}


/* Sexy::RtSerialBuffer::WriteString(std::string const&) */

void __thiscall Sexy::RtSerialBuffer::WriteString(RtSerialBuffer *this,string *param_1)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = FUN_05474184(param_1);
  WriteInt32VarU(this,uVar1);
  if (uVar1 == 0) {
    return;
  }
  pvVar2 = (void *)FUN_0547429c(param_1);
  Write(this,pvVar2,uVar1);
  return;
}


/* Sexy::RtSerialBuffer::WriteWString(std::wstring const&) */

void __thiscall Sexy::RtSerialBuffer::WriteWString(RtSerialBuffer *this,wstring *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_054765d0(param_1);
  WriteInt32VarU(this,iVar1);
  if (iVar1 == 0) {
    return;
  }
  pvVar2 = (void *)FUN_054766ec(param_1);
  Write(this,pvVar2,iVar1 << 2);
  return;
}


/* Sexy::RtSerialBuffer::WriteString(char const*) */

void __thiscall Sexy::RtSerialBuffer::WriteString(RtSerialBuffer *this,char *param_1)

{
  uint uVar1;
  size_t sVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar2 = strlen(param_1);
    uVar1 = (uint)sVar2;
    WriteInt32VarU(this,uVar1);
    if (uVar1 != 0) {
      Write(this,param_1,uVar1);
      return;
    }
    return;
  }
  WriteInt32VarU(this,0);
  return;
}


/* Sexy::RtSerialBuffer::WriteWString(wchar_t const*) */

void __thiscall Sexy::RtSerialBuffer::WriteWString(RtSerialBuffer *this,wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2;
    WriteInt32VarU(this,iVar1);
    if (iVar1 != 0) {
      Write(this,param_1,iVar1 << 2);
      return;
    }
    return;
  }
  WriteInt32VarU(this,0);
  return;
}


/* Sexy::RtSerialBuffer::WriteUInt32Fixed(unsigned int) */

void __thiscall Sexy::RtSerialBuffer::WriteUInt32Fixed(RtSerialBuffer *this,uint param_1)

{
  uint uStack_4;
  
  uStack_4 = param_1;
  Write(this,&uStack_4,4);
  return;
}


/* Sexy::RtSerialBuffer::WriteInt64Fixed(long) */

void __thiscall Sexy::RtSerialBuffer::WriteInt64Fixed(RtSerialBuffer *this,long param_1)

{
  long local_8;
  
  local_8 = param_1;
  Write(this,&local_8,8);
  return;
}


/* Sexy::RtSerialBuffer::WriteUInt64Fixed(unsigned long) */

void __thiscall Sexy::RtSerialBuffer::WriteUInt64Fixed(RtSerialBuffer *this,ulong param_1)

{
  ulong uStack_8;
  
  uStack_8 = param_1;
  Write(this,&uStack_8,8);
  return;
}


/* Sexy::RtSerialBuffer::MaybeWrite(void const*, unsigned int) */

RtSerialBuffer __thiscall
Sexy::RtSerialBuffer::MaybeWrite(RtSerialBuffer *this,void *param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  
  if (param_2 != 0) {
    if (this[0x2c] != (RtSerialBuffer)0x0) {
      *(uint *)(this + 0x28) = *(int *)(this + 0x28) + param_2;
      return this[0x2c];
    }
    if (*(long *)this == 0) {
      iVar2 = *(int *)(this + 0x28);
      uVar1 = FUN_051c6950(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
      if (uVar1 < param_2 + iVar2) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
                   (ulong)(param_2 + iVar2));
        iVar2 = *(int *)(this + 0x28);
      }
      uVar1 = iVar2 + param_2;
      if (param_1 != (void *)0x0) {
        __dest = (void *)FUN_051c6958(*(undefined8 *)(this + 0x10),iVar2);
        memcpy(__dest,param_1,(ulong)param_2);
        uVar1 = param_2 + *(int *)(this + 0x28);
      }
    }
    else {
      uVar1 = param_2 + *(uint *)(this + 0x28);
      if (*(uint *)(this + 8) < uVar1) {
        return (RtSerialBuffer)0x0;
      }
      if (param_1 != (void *)0x0) {
        memcpy((void *)(*(long *)this + (ulong)*(uint *)(this + 0x28)),param_1,(ulong)param_2);
        uVar1 = param_2 + *(int *)(this + 0x28);
      }
    }
    *(uint *)(this + 0x28) = uVar1;
  }
  return (RtSerialBuffer)0x1;
}

