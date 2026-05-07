// Class: Sexy::Buffer


/* Sexy::Buffer::TEMPNAMEPLACEHOLDERVALUE(Sexy::Buffer const&) */

Buffer * __thiscall Sexy::Buffer::operator=(Buffer *this,Buffer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::operator=
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),
             (vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return this;
}


/* Sexy::Buffer::Buffer(Sexy::Buffer const&) */

void __thiscall Sexy::Buffer::Buffer(Buffer *this,Buffer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined ***)this = &PTR__Buffer_06a2cf00;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),
             (vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}


/* Sexy::Buffer::SeekFront() const */

void __thiscall Sexy::Buffer::SeekFront(Buffer *this)

{
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* Sexy::Buffer::GetBitsRequired(int, bool) */

uint Sexy::Buffer::GetBitsRequired(int param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 ^ param_1 >> 0x1f;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
    } while (1 << (ulong)(uVar2 & 0x1f) <= (int)uVar1);
  }
  if (param_2) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Sexy::Buffer::ReadByte() const */

byte __thiscall Sexy::Buffer::ReadByte(Buffer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(this + 8);
  uVar3 = *(uint *)(this + 0x24);
  iVar5 = FUN_0511d898(uVar9,*(undefined8 *)(this + 0x10));
  uVar1 = uVar3 + 7;
  uVar2 = uVar3 + 0xe;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  bVar8 = 0;
  if ((int)uVar2 >> 3 < iVar5) {
    if ((uVar3 & 7) == 0) {
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      pbVar6 = (byte *)FUN_0511d8a8(uVar9,(long)((int)uVar1 >> 3));
      bVar8 = *pbVar6;
      *(uint *)(this + 0x24) = uVar3 + 8;
      return bVar8;
    }
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    pbVar6 = (byte *)FUN_0511d8a8(uVar9,(long)((int)uVar1 >> 3));
    bVar8 = *pbVar6;
    pcVar7 = (char *)FUN_0511d8a8(uVar9,(long)(((int)uVar1 >> 3) + 1));
    cVar4 = *pcVar7;
    *(uint *)(this + 0x24) = uVar3 + 8;
    bVar8 = cVar4 << (ulong)(8U - (int)uVar3 % 8 & 0x1f) |
            (byte)((int)(uint)bVar8 >> ((int)uVar3 % 8 & 0x1fU));
  }
  return bVar8;
}


/* Sexy::Buffer::ReadNumBits(int, bool) const */

uint __thiscall Sexy::Buffer::ReadNumBits(Buffer *this,int param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar8 = *(undefined8 *)(this + 8);
  iVar5 = FUN_0511d898(uVar8,*(undefined8 *)(this + 0x10));
  if (0 < param_1) {
    iVar4 = *(int *)(this + 0x24);
    iVar3 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar3 = iVar3 >> 3;
    if (iVar3 < iVar5) {
      uVar9 = 0;
      iVar7 = iVar4;
      do {
        pbVar6 = (byte *)FUN_0511d8a8(uVar8,(long)iVar3);
        iVar1 = iVar7 + 1;
        uVar2 = (int)(uint)*pbVar6 >> (iVar7 % 8 & 0x1fU);
        if ((uVar2 & 1) != 0) {
          uVar9 = uVar9 | 1 << (ulong)(iVar7 - iVar4 & 0x1f);
        }
        *(int *)(this + 0x24) = iVar1;
        if (iVar1 == param_1 + iVar4) break;
        iVar3 = iVar7 + 8;
        if (-1 < iVar1) {
          iVar3 = iVar1;
        }
        iVar3 = iVar3 >> 3;
        iVar7 = iVar1;
      } while (iVar3 < iVar5);
      if (!param_2) {
        return uVar9;
      }
      if ((uVar2 & 1) == 0) {
        return uVar9;
      }
      if (0x1f < param_1) {
        return uVar9;
      }
      do {
        uVar2 = param_1 & 0x1f;
        param_1 = param_1 + 1;
        uVar9 = uVar9 | 1 << (ulong)uVar2;
      } while (param_1 != 0x20);
      return uVar9;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::ToWebString() const */

void Sexy::Buffer::ToWebString(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  Buffer *in_x0;
  int iVar4;
  char acStack_108 [256];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  uVar1 = *(uint *)(in_x0 + 0x28);
  uVar2 = *(undefined4 *)(in_x0 + 0x24);
  *(undefined4 *)(in_x0 + 0x24) = 0;
  sprintf(acStack_108,"%08X",(ulong)uVar1);
  FUN_05475ad8();
  iVar3 = (int)(uVar1 + 5) / 6;
  if (0 < iVar3) {
    do {
      iVar4 = iVar4 + 1;
      ReadNumBits(in_x0,6,false);
      FUN_05475ce8();
    } while (iVar4 != iVar3);
  }
  *(undefined4 *)(in_x0 + 0x24) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::ReadBoolean() const */

bool __thiscall Sexy::Buffer::ReadBoolean(Buffer *this)

{
  char cVar1;
  
  cVar1 = ReadByte(this);
  return cVar1 != '\0';
}


/* Sexy::Buffer::ReadInt16() const */

uint __thiscall Sexy::Buffer::ReadInt16(Buffer *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ReadByte(this);
  uVar2 = ReadByte(this);
  return (uVar2 & 0xff) << 8 | uVar1 & 0xff;
}


/* Sexy::Buffer::ReadInt32() const */

uint __thiscall Sexy::Buffer::ReadInt32(Buffer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = ReadByte(this);
  uVar2 = ReadByte(this);
  uVar3 = ReadByte(this);
  iVar4 = ReadByte(this);
  return (uVar3 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar1 & 0xff | iVar4 << 0x18;
}


/* Sexy::Buffer::ReadFloat() const */

uint __thiscall Sexy::Buffer::ReadFloat(Buffer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = ReadByte(this);
  uVar2 = ReadByte(this);
  uVar3 = ReadByte(this);
  iVar4 = ReadByte(this);
  return (uVar3 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar1 & 0xff | iVar4 << 0x18;
}


/* Sexy::Buffer::ReadDouble() const */

undefined1  [16] __thiscall Sexy::Buffer::ReadDouble(Buffer *this)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  bVar1 = ReadByte(this);
  uVar2 = ReadByte(this);
  uVar3 = ReadByte(this);
  uVar4 = ReadByte(this);
  uVar5 = ReadByte(this);
  uVar6 = ReadByte(this);
  uVar7 = ReadByte(this);
  lVar8 = ReadByte(this);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (uVar2 & 0xff) << 8 | (uVar3 & 0xff) << 0x10 | (ulong)bVar1 |
                 (uVar4 & 0xff) << 0x18 | (uVar5 & 0xff) << 0x20 | (uVar6 & 0xff) << 0x28 |
                 (uVar7 & 0xff) << 0x30 | lVar8 << 0x38;
  return auVar9;
}


/* Sexy::Buffer::ReadInt8() const */

byte __thiscall Sexy::Buffer::ReadInt8(Buffer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(this + 8);
  uVar3 = *(uint *)(this + 0x24);
  iVar5 = FUN_0511d898(uVar9,*(undefined8 *)(this + 0x10));
  uVar1 = uVar3 + 7;
  uVar2 = uVar3 + 0xe;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  bVar8 = 0;
  if ((int)uVar2 >> 3 < iVar5) {
    if ((uVar3 & 7) == 0) {
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      pbVar6 = (byte *)FUN_0511d8a8(uVar9,(long)((int)uVar1 >> 3));
      bVar8 = *pbVar6;
      *(uint *)(this + 0x24) = uVar3 + 8;
      return bVar8;
    }
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    pbVar6 = (byte *)FUN_0511d8a8(uVar9,(long)((int)uVar1 >> 3));
    bVar8 = *pbVar6;
    pcVar7 = (char *)FUN_0511d8a8(uVar9,(long)(((int)uVar1 >> 3) + 1));
    cVar4 = *pcVar7;
    *(uint *)(this + 0x24) = uVar3 + 8;
    bVar8 = cVar4 << (ulong)(8U - (int)uVar3 % 8 & 0x1f) |
            (byte)((int)(uint)bVar8 >> ((int)uVar3 % 8 & 0x1fU));
  }
  return bVar8;
}


/* Sexy::Buffer::ReadInt64() const */

ulong __thiscall Sexy::Buffer::ReadInt64(Buffer *this)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  bVar1 = ReadByte(this);
  uVar2 = ReadByte(this);
  uVar3 = ReadByte(this);
  uVar4 = ReadByte(this);
  uVar5 = ReadByte(this);
  uVar6 = ReadByte(this);
  uVar7 = ReadByte(this);
  lVar8 = ReadByte(this);
  return (uVar2 & 0xff) << 8 | (uVar3 & 0xff) << 0x10 | (ulong)bVar1 | (uVar4 & 0xff) << 0x18 |
         (uVar5 & 0xff) << 0x20 | (uVar6 & 0xff) << 0x28 | (uVar7 & 0xff) << 0x30 | lVar8 << 0x38;
}


/* Sexy::Buffer::ReadTransform2D() const */

void Sexy::Buffer::ReadTransform2D(void)

{
  Buffer *in_x0;
  SexyTransform2D *in_x8;
  undefined4 uVar1;
  
  SexyTransform2D::SexyTransform2D(in_x8);
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)in_x8 = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 4) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 8) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 0xc) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 0x10) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 0x14) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 0x18) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 0x1c) = uVar1;
  uVar1 = ReadFloat(in_x0);
  *(undefined4 *)(in_x8 + 0x20) = uVar1;
  return;
}


/* Sexy::Buffer::ReadString() const */

void Sexy::Buffer::ReadString(void)

{
  short sVar1;
  Buffer *in_x0;
  int iVar2;
  
  Set8BytesTo0();
  iVar2 = 0;
  sVar1 = ReadInt16(in_x0);
  if (0 < sVar1) {
    do {
      iVar2 = iVar2 + 1;
      ReadByte(in_x0);
      FUN_05475ce8();
    } while (sVar1 != iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::ReadUTF8String() const */

void Sexy::Buffer::ReadUTF8String(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  Buffer *in_x0;
  int iVar4;
  int iVar5;
  wchar_t local_1c;
  undefined1 auStack_18 [8];
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(in_x0 + 0x24) & 7) != 0) {
    *(uint *)(in_x0 + 0x24) = *(uint *)(in_x0 + 0x24) + 8 & 0xfffffff8;
  }
  FUN_05476574(auStack_18);
  sVar2 = ReadInt16(in_x0);
  iVar1 = (int)sVar2;
  if (iVar1 == 0) {
    FUN_05478178();
    nop();
  }
  else {
    iVar5 = *(int *)(in_x0 + 0x24);
    iVar4 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    local_10 = (char *)FUN_0511d8a8(*(undefined8 *)(in_x0 + 8),(long)(iVar4 >> 3));
    iVar5 = *(int *)(in_x0 + 0x20) - iVar5;
    iVar4 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 >> 3;
    if ((0 < iVar1) && (0 < iVar4)) {
      iVar5 = 0;
      while (iVar3 = GetNextUTF8CharFromStream(&local_10,iVar4,&local_1c), iVar3 != 0) {
        iVar4 = iVar4 - iVar3;
        *(int *)(in_x0 + 0x24) = *(int *)(in_x0 + 0x24) + iVar3 * 8;
        iVar5 = iVar5 + 1;
        FUN_05477a88(auStack_18,local_1c);
        if ((iVar4 < 1) || (iVar1 <= iVar5)) break;
      }
    }
    FUN_05476584();
  }
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::ReadUTF8Line() const */

void Sexy::Buffer::ReadUTF8Line(void)

{
  int iVar1;
  long in_x0;
  int iVar2;
  wchar_t local_14;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(in_x0 + 0x24) & 7) != 0) {
    *(uint *)(in_x0 + 0x24) = *(uint *)(in_x0 + 0x24) + 8 & 0xfffffff8;
  }
  FUN_05476574();
  iVar1 = *(int *)(in_x0 + 0x24);
  iVar2 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  local_10 = (char *)FUN_0511d8a8(*(undefined8 *)(in_x0 + 8),(long)(iVar2 >> 3));
  iVar1 = *(int *)(in_x0 + 0x20) - iVar1;
  iVar2 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar2) {
    while (iVar1 = GetNextUTF8CharFromStream(&local_10,iVar2,&local_14), iVar1 != 0) {
      iVar2 = iVar2 - iVar1;
      *(int *)(in_x0 + 0x24) = *(int *)(in_x0 + 0x24) + iVar1 * 8;
      if ((local_14 == L'\n') || (FUN_05477a88(), iVar2 < 1)) break;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::ReadLine() const */

void Sexy::Buffer::ReadLine(void)

{
  char cVar1;
  Buffer *in_x0;
  
  Set8BytesTo0();
  do {
    cVar1 = ReadByte(in_x0);
    while( true ) {
      if ((cVar1 == '\n') || (cVar1 == '\0')) {
        return;
      }
      if (cVar1 == '\r') break;
      FUN_05475ce8();
      cVar1 = ReadByte(in_x0);
    }
  } while( true );
}


/* Sexy::Buffer::ReadBytes(unsigned char*, int) const */

void __thiscall Sexy::Buffer::ReadBytes(Buffer *this,uchar *param_1,int param_2)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      uVar1 = ReadByte(this);
      puVar3 = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + (ulong)(param_2 - 1) + 1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::ReadSexyString() const */

void Sexy::Buffer::ReadSexyString(void)

{
  short sVar1;
  Buffer *in_x0;
  int iVar2;
  uchar local_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar1 = ReadInt16(in_x0);
  FUN_05476574();
  if (0 < sVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      ReadBytes(in_x0,local_c,4);
      FUN_05477a88();
    } while (sVar1 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::ReadBase128VarIntU32() const */

uint __thiscall Sexy::Buffer::ReadBase128VarIntU32(Buffer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = ReadInt8(this);
    uVar1 = uVar3 & 0x1f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (uVar2 & 0x7f) << (ulong)uVar1;
  } while ((uVar2 >> 7 & 1) != 0);
  return uVar4;
}


/* Sexy::Buffer::ReadBase128VarIntU64() const */

ulong __thiscall Sexy::Buffer::ReadBase128VarIntU64(Buffer *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = ReadInt8(this);
    uVar1 = uVar3 & 0x3f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (uVar2 & 0x7f) << uVar1;
  } while (((uint)uVar2 >> 7 & 1) != 0);
  return uVar4;
}


/* Sexy::Buffer::ReadBase128VarIntS32() const */

uint __thiscall Sexy::Buffer::ReadBase128VarIntS32(Buffer *this)

{
  uint uVar1;
  
  uVar1 = ReadBase128VarIntU32(this);
  return -(uVar1 & 1) ^ uVar1 >> 1;
}


/* Sexy::Buffer::ReadBase128VarIntS64() const */

ulong __thiscall Sexy::Buffer::ReadBase128VarIntS64(Buffer *this)

{
  ulong uVar1;
  
  uVar1 = ReadBase128VarIntU64(this);
  return -(uVar1 & 1) ^ uVar1 >> 1;
}


/* Sexy::Buffer::GetDataPtr() */

void __thiscall Sexy::Buffer::GetDataPtr(Buffer *this)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_0511d898(uVar2,*(undefined8 *)(this + 0x10));
  if (lVar1 != 0) {
    thunk_FUN_0511d8b8(uVar2);
    return;
  }
  return;
}


/* Sexy::Buffer::GetDataPtr() const */

void __thiscall Sexy::Buffer::GetDataPtr(Buffer *this)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_0511d898(uVar2,*(undefined8 *)(this + 0x10));
  if (lVar1 != 0) {
    thunk_FUN_0511d8b8(uVar2);
    return;
  }
  return;
}


/* Sexy::Buffer::GetDataLen() const */

int __thiscall Sexy::Buffer::GetDataLen(Buffer *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x20) + 7;
  iVar2 = *(int *)(this + 0x20) + 0xe;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 >> 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::UTF8ToWideString() const */

void Sexy::Buffer::UTF8ToWideString(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Buffer *in_x0;
  wchar_t local_14;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = (char *)GetDataPtr(in_x0);
  iVar2 = GetDataLen(in_x0);
  FUN_05476574();
  FUN_054775b4();
  if (0 < iVar2) {
    bVar1 = true;
    do {
      iVar3 = GetNextUTF8CharFromStream(&local_10,iVar2,&local_14);
      if (iVar3 == 0) break;
      iVar2 = iVar2 - iVar3;
      if ((!bVar1) || (local_14 != L'\xfeff')) {
        FUN_05477a88();
      }
      bVar1 = false;
    } while (0 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::GetCRC32(unsigned long) const */

ulong __thiscall Sexy::Buffer::GetCRC32(Buffer *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  uVar1 = FUN_0511d898(uVar2,*(undefined8 *)(this + 0x10));
  if (uVar1 == 0) {
    return param_1;
  }
  uVar2 = FUN_0511d8a8(uVar2,0);
  uVar1 = FUN_0511d828(param_1,uVar2,uVar1 & 0xffffffff);
  return uVar1;
}


/* Sexy::Buffer::AtEnd() const */

bool __thiscall Sexy::Buffer::AtEnd(Buffer *this)

{
  return *(int *)(this + 0x20) <= *(int *)(this + 0x24);
}


/* Sexy::Buffer::PastEnd() const */

bool __thiscall Sexy::Buffer::PastEnd(Buffer *this)

{
  return *(int *)(this + 0x20) < *(int *)(this + 0x24);
}


/* Sexy::Buffer::GetBitsAvailable() const */

int __thiscall Sexy::Buffer::GetBitsAvailable(Buffer *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = AtEnd(this);
  iVar2 = 0;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(this + 0x20) - *(int *)(this + 0x24);
  }
  return iVar2;
}


/* Sexy::Buffer::GetBytesAvailable() const */

int __thiscall Sexy::Buffer::GetBytesAvailable(Buffer *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GetBitsAvailable(this);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1 >> 3;
}


/* Sexy::Buffer::ReadFPoint() const */

void Sexy::Buffer::ReadFPoint(void)

{
  double dVar1;
  Buffer *in_x0;
  PieceConfig *in_x8;
  
  PieceConfig::PieceConfig(in_x8);
  dVar1 = (double)ReadDouble(in_x0);
  *(float *)in_x8 = (float)dVar1;
  dVar1 = (double)ReadDouble(in_x0);
  *(float *)(in_x8 + 4) = (float)dVar1;
  return;
}


/* Sexy::Buffer::Clear() */

void __thiscall Sexy::Buffer::Clear(Buffer *this)

{
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* Sexy::Buffer::Buffer() */

void __thiscall Sexy::Buffer::Buffer(Buffer *this)

{
  *(undefined ***)this = &PTR__Buffer_06a2cf00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* Sexy::Buffer::~Buffer() */

void __thiscall Sexy::Buffer::~Buffer(Buffer *this)

{
  *(undefined ***)this = &PTR__Buffer_06a2cf00;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* Sexy::Buffer::~Buffer() */

void __thiscall Sexy::Buffer::~Buffer(Buffer *this)

{
  ~Buffer(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::Buffer::SetData(std::vector<unsigned char, std::allocator<unsigned char> > const&) */

void __thiscall Sexy::Buffer::SetData(Buffer *this,vector *param_1)

{
  int iVar1;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::operator=
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),param_1);
  iVar1 = FUN_0511d898(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  *(int *)(this + 0x20) = iVar1 << 3;
  *(int *)(this + 0x28) = iVar1 << 3;
  return;
}


/* Sexy::Buffer::Reserve(unsigned int) */

void __thiscall Sexy::Buffer::Reserve(Buffer *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0511d898(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  if (param_1 <= uVar1) {
    return;
  }
  std::vector<unsigned_char,std::allocator<unsigned_char>>::reserve
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::WriteByte(unsigned char) */

void __thiscall Sexy::Buffer::WriteByte(Buffer *this,uchar param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uchar local_9;
  long local_8;
  
  uVar3 = *(uint *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  if ((uVar3 & 7) == 0) {
    local_9 = param_1;
    std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),&local_9);
  }
  else {
    uVar2 = uVar3 + 7;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    pbVar4 = (byte *)FUN_0511d8a0(*(undefined8 *)(this + 8),(long)((int)uVar2 >> 3));
    *pbVar4 = param_1 << (ulong)((int)uVar3 % 8 & 0x1f) | *pbVar4;
    local_9 = (uchar)((int)(uint)param_1 >> (8U - (int)uVar3 % 8 & 0x1f));
    std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),&local_9);
  }
  iVar1 = *(int *)(this + 0x28) + 8;
  *(int *)(this + 0x28) = iVar1;
  if (*(int *)(this + 0x20) < iVar1) {
    *(int *)(this + 0x20) = iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::WriteInt8(signed char) */

void __thiscall Sexy::Buffer::WriteInt8(Buffer *this,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bStack_9;
  long lStack_8;
  
  uVar3 = *(uint *)(this + 0x28);
  lStack_8 = ___stack_chk_guard;
  if ((uVar3 & 7) == 0) {
    bStack_9 = param_2;
    std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),&bStack_9);
  }
  else {
    uVar2 = uVar3 + 7;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    pbVar4 = (byte *)FUN_0511d8a0(*(undefined8 *)(this + 8),(long)((int)uVar2 >> 3));
    *pbVar4 = param_2 << (ulong)((int)uVar3 % 8 & 0x1f) | *pbVar4;
    bStack_9 = (byte)((int)(uint)param_2 >> (8U - (int)uVar3 % 8 & 0x1f));
    std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),&bStack_9);
  }
  iVar1 = *(int *)(this + 0x28) + 8;
  *(int *)(this + 0x28) = iVar1;
  if (*(int *)(this + 0x20) < iVar1) {
    *(int *)(this + 0x20) = iVar1;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::WriteInt16(short) */

void __thiscall Sexy::Buffer::WriteInt16(Buffer *this,short param_1)

{
  WriteByte(this,(uchar)param_1);
  WriteByte(this,(uchar)((ushort)param_1 >> 8));
  return;
}


/* Sexy::Buffer::WriteInt32(int) */

void __thiscall Sexy::Buffer::WriteInt32(Buffer *this,int param_1)

{
  WriteByte(this,(uchar)param_1);
  WriteByte(this,(uchar)((uint)param_1 >> 8));
  WriteByte(this,(uchar)((uint)param_1 >> 0x10));
  WriteByte(this,(uchar)((uint)param_1 >> 0x18));
  return;
}


/* Sexy::Buffer::WriteFloat(float) */

void __thiscall Sexy::Buffer::WriteFloat(Buffer *this,float param_1)

{
  WriteByte(this,SUB41(param_1,0));
  WriteByte(this,(uchar)((uint)param_1 >> 8));
  WriteByte(this,(uchar)((uint)param_1 >> 0x10));
  WriteByte(this,(uchar)((uint)param_1 >> 0x18));
  return;
}


/* Sexy::Buffer::WriteTransform2D(Sexy::SexyTransform2D) */

void __thiscall Sexy::Buffer::WriteTransform2D(Buffer *this,float *param_2)

{
  WriteFloat(this,*param_2);
  WriteFloat(this,param_2[1]);
  WriteFloat(this,param_2[2]);
  WriteFloat(this,param_2[3]);
  WriteFloat(this,param_2[4]);
  WriteFloat(this,param_2[5]);
  WriteFloat(this,param_2[6]);
  WriteFloat(this,param_2[7]);
  WriteFloat(this,param_2[8]);
  return;
}


/* Sexy::Buffer::WriteDouble(double) */

void __thiscall Sexy::Buffer::WriteDouble(Buffer *this,double param_1)

{
  WriteByte(this,SUB81(param_1,0));
  WriteByte(this,(uchar)((ulong)param_1 >> 8));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x10));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x18));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x20));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x28));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x30));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x38));
  return;
}


/* Sexy::Buffer::WriteFPoint(Sexy::FPoint) */

void __thiscall Sexy::Buffer::WriteFPoint(Buffer *this,float *param_2)

{
  WriteDouble(this,(double)*param_2);
  WriteDouble(this,(double)param_2[1]);
  return;
}


/* Sexy::Buffer::WriteBase128VarIntU64(long) */

void __thiscall Sexy::Buffer::WriteBase128VarIntU64(Buffer *this,long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_1;
  for (uVar2 = (ulong)param_1 >> 7; uVar1 = uVar1 & 0x7f, uVar2 != 0; uVar2 = uVar2 >> 0xe) {
    WriteInt8(this,uVar1 | 0xffffff80);
    uVar1 = (uint)uVar2 & 0x7f;
    if (uVar2 >> 7 == 0) break;
    WriteInt8(this,uVar1 | 0xffffff80);
    uVar1 = (uint)(uVar2 >> 7);
  }
  WriteInt8(this,uVar1);
  return;
}


/* Sexy::Buffer::WriteBase128VarIntS64(long) */

void __thiscall Sexy::Buffer::WriteBase128VarIntS64(Buffer *this,long param_1)

{
  WriteBase128VarIntU64(this,param_1 << 1 ^ param_1 >> 0x3f);
  return;
}


/* Sexy::Buffer::WriteInt64(long) */

void __thiscall Sexy::Buffer::WriteInt64(Buffer *this,long param_1)

{
  WriteByte(this,(uchar)param_1);
  WriteByte(this,(uchar)((ulong)param_1 >> 8));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x10));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x18));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x20));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x28));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x30));
  WriteByte(this,(uchar)((ulong)param_1 >> 0x38));
  return;
}


/* Sexy::Buffer::WriteString(std::string const&) */

void __thiscall Sexy::Buffer::WriteString(Buffer *this,string *param_1)

{
  short sVar1;
  int iVar2;
  uchar *puVar3;
  long lVar4;
  
  sVar1 = FUN_05474184(param_1);
  WriteInt16(this,sVar1);
  lVar4 = 0;
  while( true ) {
    iVar2 = FUN_05474184(param_1);
    if (iVar2 <= (int)lVar4) break;
    puVar3 = (uchar *)FUN_054741b0(param_1,lVar4);
    WriteByte(this,*puVar3);
    lVar4 = lVar4 + 1;
  }
  return;
}


/* Sexy::Buffer::WriteUTF8String(std::wstring const&) */

void __thiscall Sexy::Buffer::WriteUTF8String(Buffer *this,wstring *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  long lVar6;
  
  if ((*(uint *)(this + 0x28) & 7) != 0) {
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) + 8 & 0xfffffff8;
  }
  lVar6 = 0;
  sVar2 = FUN_054765d0(param_1);
  WriteInt16(this,sVar2);
  iVar3 = FUN_054765d0(param_1);
  if (0 < iVar3) {
    do {
      puVar4 = (uint *)FUN_054765fc(param_1,lVar6);
      uVar1 = *puVar4;
      if (uVar1 < 0x80) {
LAB_0511f01c:
        WriteByte(this,(uchar)uVar1);
        iVar3 = FUN_054765d0(param_1);
      }
      else {
        if (uVar1 < 0x800) {
          bVar5 = (byte)(uVar1 >> 6) | 0xc0;
LAB_0511f010:
          WriteByte(this,bVar5);
          uVar1 = uVar1 & 0x3f | 0xffffff80;
          goto LAB_0511f01c;
        }
        if (uVar1 < 0x10000) {
          bVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
LAB_0511f000:
          WriteByte(this,bVar5);
          bVar5 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          goto LAB_0511f010;
        }
        if (uVar1 < 0x110000) {
          WriteByte(this,(byte)(uVar1 >> 0x12) | 0xf0);
          bVar5 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
          goto LAB_0511f000;
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar3);
  }
  return;
}


/* Sexy::Buffer::WriteBuffer(std::vector<unsigned char, std::allocator<unsigned char> > const&) */

void __thiscall Sexy::Buffer::WriteBuffer(Buffer *this,vector *param_1)

{
  int iVar1;
  uchar *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0511d898(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  WriteInt32(this,iVar1);
  lVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    iVar1 = FUN_0511d898(uVar4,*(undefined8 *)(param_1 + 8));
    if (iVar1 <= (int)lVar3) break;
    puVar2 = (uchar *)FUN_0511d8a8(uVar4,lVar3);
    WriteByte(this,*puVar2);
    lVar3 = lVar3 + 1;
  }
  return;
}


/* Sexy::Buffer::WriteBuffer(Sexy::Buffer const&) */

void __thiscall Sexy::Buffer::WriteBuffer(Buffer *this,Buffer *param_1)

{
  WriteBuffer(this,(vector *)(param_1 + 8));
  return;
}


/* Sexy::Buffer::WriteBase128VarIntU32(int) */

void __thiscall Sexy::Buffer::WriteBase128VarIntU32(Buffer *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = param_1 & 0x7f;
  bVar3 = (byte)uVar1;
  for (uVar2 = (uint)param_1 >> 7; uVar2 != 0; uVar2 = uVar2 >> 0xe) {
    WriteByte(this,(byte)uVar1 | 0x80);
    bVar3 = (byte)uVar2 & 0x7f;
    if (uVar2 >> 7 == 0) break;
    WriteByte(this,bVar3 | 0x80);
    uVar1 = uVar2 >> 7 & 0x7f;
    bVar3 = (byte)uVar1;
  }
  WriteByte(this,bVar3);
  return;
}


/* Sexy::Buffer::WriteBase128VarIntS32(int) */

void __thiscall Sexy::Buffer::WriteBase128VarIntS32(Buffer *this,int param_1)

{
  WriteBase128VarIntU32(this,param_1 << 1 ^ param_1 >> 0x1f);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::WriteNumBits(int, int) */

void __thiscall Sexy::Buffer::WriteNumBits(Buffer *this,int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uchar local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = *(uint *)(this + 0x28);
  if (0 < param_2) {
    uVar4 = 0;
    do {
      if ((uVar3 & 7) == 0) {
        local_9 = '\0';
        std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),&local_9);
        uVar3 = *(uint *)(this + 0x28);
      }
      if ((param_1 >> (uVar4 & 0x1f) & 1U) != 0) {
        uVar1 = uVar3 + 7;
        if (-1 < (int)uVar3) {
          uVar1 = uVar3;
        }
        pbVar2 = (byte *)FUN_0511d8a0(*(undefined8 *)(this + 8),(long)((int)uVar1 >> 3));
        *pbVar2 = (byte)(1 << (ulong)((int)uVar3 % 8 & 0x1f)) | *pbVar2;
        uVar3 = *(uint *)(this + 0x28);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
      *(uint *)(this + 0x28) = uVar3;
    } while (uVar4 != param_2);
  }
  if (*(int *)(this + 0x20) < (int)uVar3) {
    *(uint *)(this + 0x20) = uVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::FromWebString(std::string const&) */

void __thiscall Sexy::Buffer::FromWebString(Buffer *this,string *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Clear(this);
  uVar4 = FUN_05474178(param_1);
  if (uVar4 < 4) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    pbVar5 = (byte *)FUN_054741b0(param_1,0);
    uVar2 = (uint)*pbVar5;
    iVar8 = uVar2 << 0x1c;
    if (9 < (uVar2 - 0x30 & 0xff)) {
      uVar3 = (uint)*pbVar5;
      if ((uVar2 - 0x41 & 0xff) < 6) {
        iVar8 = (uVar3 - 0x37) * 0x10000000;
      }
      else {
        iVar8 = 0;
        if ((uVar3 - 0x61 & 0xff) < 6) {
          iVar8 = (uVar3 - 0x5c) * 0x10000000;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,1);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    iVar11 = uVar2 * 0x1000000;
    if (9 < (uVar2 & 0xff)) {
      uVar2 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        iVar11 = (uVar2 - 0x37) * 0x1000000;
      }
      else {
        iVar11 = 0;
        if ((uVar2 - 0x61 & 0xff) < 6) {
          iVar11 = (uVar2 - 0x5c) * 0x1000000;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,2);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    iVar9 = uVar2 * 0x100000;
    if (9 < (uVar2 & 0xff)) {
      uVar2 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        iVar9 = (uVar2 - 0x37) * 0x100000;
      }
      else {
        iVar9 = 0;
        if ((uVar2 - 0x61 & 0xff) < 6) {
          iVar9 = (uVar2 - 0x5c) * 0x100000;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,3);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    iVar10 = uVar2 * 0x10000;
    if (9 < (uVar2 & 0xff)) {
      uVar2 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        iVar10 = (uVar2 - 0x37) * 0x10000;
      }
      else {
        iVar10 = 0;
        if ((uVar2 - 0x61 & 0xff) < 6) {
          iVar10 = (uVar2 - 0x5c) * 0x10000;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,4);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    iVar12 = uVar2 * 0x1000;
    if (9 < (uVar2 & 0xff)) {
      uVar2 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        iVar12 = (uVar2 - 0x37) * 0x1000;
      }
      else {
        iVar12 = 0;
        if ((uVar2 - 0x61 & 0xff) < 6) {
          iVar12 = (uVar2 - 0x5c) * 0x1000;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,5);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    iVar13 = uVar2 * 0x100;
    if (9 < (uVar2 & 0xff)) {
      uVar2 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        iVar13 = (uVar2 - 0x37) * 0x100;
      }
      else {
        iVar13 = 0;
        if ((uVar2 - 0x61 & 0xff) < 6) {
          iVar13 = (uVar2 - 0x5c) * 0x100;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,6);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    iVar7 = uVar2 * 0x10;
    if (9 < (uVar2 & 0xff)) {
      uVar2 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        iVar7 = (uVar2 - 0x37) * 0x10;
      }
      else {
        iVar7 = 0;
        if ((uVar2 - 0x61 & 0xff) < 6) {
          iVar7 = (uVar2 - 0x5c) * 0x10;
        }
      }
    }
    pbVar5 = (byte *)FUN_054741b0(param_1,7);
    bVar1 = *pbVar5;
    uVar2 = bVar1 - 0x30;
    if (9 < (uVar2 & 0xff)) {
      uVar3 = (uint)bVar1;
      if ((bVar1 - 0x41 & 0xff) < 6) {
        uVar2 = uVar3 - 0x37;
      }
      else {
        uVar2 = uVar3 - 0x5c;
        if (5 < (uVar3 - 0x61 & 0xff)) {
          uVar2 = 0;
        }
      }
    }
    iVar8 = uVar2 + iVar8 + iVar11 + iVar9 + iVar10 + iVar12 + iVar13 + iVar7;
    if (0 < iVar8) {
      lVar14 = 8;
      do {
        pbVar5 = (byte *)FUN_054741b0(param_1,lVar14);
        local_10[1] = 6;
        iVar11 = *(int *)(&DAT_05756790 + (long)(int)(uint)*pbVar5 * 4);
        local_10[0] = iVar8;
        piVar6 = eastl::min_alt<int>(local_10,local_10 + 1);
        iVar8 = iVar8 - *piVar6;
        WriteNumBits(this,iVar11,*piVar6);
        lVar14 = lVar14 + 1;
      } while (0 < iVar8);
    }
    if (local_8 == ___stack_chk_guard) {
      SeekFront(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::Resize(unsigned int) */

void __thiscall Sexy::Buffer::Resize(Buffer *this,uint param_1)

{
  Clear(this);
  *(uint *)(this + 0x20) = param_1 << 3;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),(ulong)param_1);
  return;
}


/* Sexy::Buffer::ResizeNonDestructive(unsigned long) */

void __thiscall Sexy::Buffer::ResizeNonDestructive(Buffer *this,ulong param_1)

{
  int *piVar1;
  Buffer *pBVar2;
  
  pBVar2 = this + 0x20;
  *(int *)pBVar2 = (int)param_1 << 3;
  piVar1 = eastl::min_alt<int>((int *)(this + 0x24),(int *)pBVar2);
  *(int *)(this + 0x24) = *piVar1;
  piVar1 = eastl::min_alt<int>((int *)(this + 0x28),(int *)pBVar2);
  *(int *)(this + 0x28) = *piVar1;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),param_1);
  return;
}


/* Sexy::Buffer::ReadBuffer(std::vector<unsigned char, std::allocator<unsigned char> >*) const */

void __thiscall Sexy::Buffer::ReadBuffer(Buffer *this,vector *param_1)

{
  int iVar1;
  uchar *puVar2;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1);
  iVar1 = ReadInt32(this);
  if (0 < iVar1) {
    std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1,(long)iVar1);
    puVar2 = (uchar *)thunk_FUN_0511d8b8(*(undefined8 *)param_1);
    ReadBytes(this,puVar2,iVar1);
    return;
  }
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1);
  return;
}


/* Sexy::Buffer::ReadBuffer(Sexy::Buffer*) const */

void __thiscall Sexy::Buffer::ReadBuffer(Buffer *this,Buffer *param_1)

{
  int iVar1;
  
  ReadBuffer(this,(vector *)(param_1 + 8));
  iVar1 = FUN_0511d898(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  *(int *)(param_1 + 0x20) = iVar1 << 3;
  *(int *)(param_1 + 0x28) = iVar1 << 3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::WriteBytes(unsigned char const*, unsigned long) */

void __thiscall Sexy::Buffer::WriteBytes(Buffer *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  uchar *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  uchar *puVar3;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(this + 0x28) & 7) == 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::insert<unsigned_char_const*,void>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),local_10,param_1,
               param_1 + param_2);
    iVar1 = *(int *)(this + 0x28) + (int)param_2 * 8;
    *(int *)(this + 0x28) = iVar1;
    if (*(int *)(this + 0x20) < iVar1) {
      *(int *)(this + 0x20) = iVar1;
    }
  }
  else {
    puVar3 = param_1;
    if (param_2 != 0) {
      do {
        puVar2 = puVar3 + 1;
        WriteByte(this,*puVar3);
        puVar3 = puVar2;
      } while (puVar2 != param_1 + param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Buffer::WriteSexyString(std::wstring const&) */

void __thiscall Sexy::Buffer::WriteSexyString(Buffer *this,wstring *param_1)

{
  short sVar1;
  uchar *puVar2;
  ulong uVar3;
  
  sVar1 = FUN_054765c4(param_1);
  WriteInt16(this,sVar1);
  puVar2 = (uchar *)FUN_054766ec(param_1);
  uVar3 = FUN_054765c4(param_1);
  WriteBytes(this,puVar2,-(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar3 & 0xffffffff) << 2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::WriteLine(std::string const&) */

void __thiscall Sexy::Buffer::WriteLine(Buffer *this,string *param_1)

{
  int iVar1;
  uchar *puVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_1,"\r\n");
  puVar2 = (uchar *)FUN_0547429c(asStack_10);
  iVar1 = FUN_05474184(param_1);
  WriteBytes(this,puVar2,(long)(iVar1 + 2));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Buffer::SetData(unsigned char const*, int) */

void __thiscall Sexy::Buffer::SetData(Buffer *this,uchar *param_1,int param_2)

{
  vector<unsigned_char,std::allocator<unsigned_char>> *this_00;
  long lVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8);
  local_8 = ___stack_chk_guard;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear(this_00);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::reserve(this_00,(long)param_2);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::insert<unsigned_char_const*,void>
            (this_00,local_10,param_1,param_1 + param_2);
  iVar2 = FUN_0511d898(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x20) = iVar2 << 3;
  *(int *)(this + 0x28) = iVar2 << 3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

