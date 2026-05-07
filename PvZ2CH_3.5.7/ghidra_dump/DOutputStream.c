// Class: DOutputStream


/* DOutputStream::DOutputStream(bool) */

void __thiscall DOutputStream::DOutputStream(DOutputStream *this,bool param_1)

{
  *(undefined8 *)(this + 8) = 0;
  this[1] = (DOutputStream)param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *this = (DOutputStream)param_1;
  return;
}


/* DOutputStream::~DOutputStream() */

void __thiscall DOutputStream::~DOutputStream(DOutputStream *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    return;
  }
  return;
}


/* DOutputStream::resetMemory(unsigned long) */

void __thiscall DOutputStream::resetMemory(DOutputStream *this,ulong param_1)

{
  void *pvVar1;
  ulong __size;
  
  if ((*(ulong *)(this + 0x18) <= param_1 + *(long *)(this + 0x10)) &&
     (__size = param_1 + *(long *)(this + 0x10) + 0x3ff & 0xfffffffffffffc00,
     *(ulong *)(this + 0x18) < __size)) {
    *(ulong *)(this + 0x18) = __size;
    if (*(void **)(this + 8) == (void *)0x0) {
      pvVar1 = malloc(__size);
      *(void **)(this + 8) = pvVar1;
    }
    else {
      pvVar1 = realloc(*(void **)(this + 8),__size);
      *(void **)(this + 8) = pvVar1;
    }
  }
  return;
}


/* DOutputStream::writDytes(unsigned char*, unsigned long) */

void __thiscall DOutputStream::writDytes(DOutputStream *this,uchar *param_1,ulong param_2)

{
  resetMemory(this,param_2);
  memcpy((void *)(*(long *)(this + 8) + *(long *)(this + 0x10)),param_1,param_2);
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_2;
  return;
}


/* DOutputStream::writDyte(unsigned char) */

void __thiscall DOutputStream::writDyte(DOutputStream *this,uchar param_1)

{
  resetMemory(this,1);
  *(uchar *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


/* DOutputStream::writeInt(int) */

void __thiscall DOutputStream::writeInt(DOutputStream *this,int param_1)

{
  uint uVar1;
  
  resetMemory(this,4);
  uVar1 = (param_1 & 0xff00ff00U) >> 8 | (param_1 & 0xff00ffU) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (*this == (DOutputStream)0x0) {
    uVar1 = param_1;
  }
  *(uint *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = uVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  return;
}


/* DOutputStream::writeShort(short) */

void __thiscall DOutputStream::writeShort(DOutputStream *this,short param_1)

{
  resetMemory(this,2);
  if (*this != (DOutputStream)0x0) {
    param_1 = (ushort)param_1 >> 8 | param_1 << 8;
  }
  *(short *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 2;
  return;
}


/* DOutputStream::writeLongLong(long long) */

void __thiscall DOutputStream::writeLongLong(DOutputStream *this,longlong param_1)

{
  ulong uVar1;
  
  resetMemory(this,8);
  uVar1 = (param_1 & 0xff00ff00ff00ff00U) >> 8 | (param_1 & 0xff00ff00ff00ffU) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uVar1 = uVar1 >> 0x20 | uVar1 << 0x20;
  if (*this == (DOutputStream)0x0) {
    uVar1 = param_1;
  }
  *(ulong *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = uVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DOutputStream::encodeVarint(unsigned long long) */

void __thiscall DOutputStream::encodeVarint(DOutputStream *this,ulonglong param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  byte local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    writDyte(this,'\0');
  }
  else {
    local_18[0] = (byte)param_1 | 0x80;
    if (param_1 >> 7 == 0) {
      uVar2 = 1;
      lVar4 = 0;
      bVar3 = local_18[0];
    }
    else {
      local_18[1] = (byte)(param_1 >> 7) | 0x80;
      if (param_1 >> 0xe == 0) {
        lVar4 = 1;
        uVar2 = 2;
        bVar3 = local_18[1];
      }
      else {
        local_18[2] = (byte)(param_1 >> 0xe) | 0x80;
        if (param_1 >> 0x15 == 0) {
          lVar4 = 2;
          uVar2 = 3;
          bVar3 = local_18[2];
        }
        else {
          local_18[3] = (byte)(param_1 >> 0x15) | 0x80;
          if (param_1 >> 0x1c == 0) {
            lVar4 = 3;
            uVar2 = 4;
            bVar3 = local_18[3];
          }
          else {
            local_18[4] = (byte)(param_1 >> 0x1c) | 0x80;
            if (param_1 >> 0x23 == 0) {
              lVar4 = 4;
              uVar2 = 5;
              bVar3 = local_18[4];
            }
            else {
              uVar1 = (uint)(param_1 >> 0x20);
              local_18[5] = (byte)(uVar1 >> 3) | 0x80;
              if (param_1 >> 0x2a == 0) {
                lVar4 = 5;
                uVar2 = 6;
                bVar3 = local_18[5];
              }
              else {
                local_18[6] = (byte)(uVar1 >> 10) | 0x80;
                if (param_1 >> 0x31 == 0) {
                  lVar4 = 6;
                  uVar2 = 7;
                  bVar3 = local_18[6];
                }
                else {
                  local_18[7] = (byte)(uVar1 >> 0x11) | 0x80;
                  if (param_1 >> 0x38 == 0) {
                    lVar4 = 7;
                    uVar2 = 8;
                    bVar3 = local_18[7];
                  }
                  else {
                    local_18[8] = (byte)(param_1 >> 0x38) | 0x80;
                    if ((long)param_1 < 0) {
                      lVar4 = 9;
                      local_18[9] = 0x81;
                      uVar2 = 10;
                      bVar3 = 0x81;
                    }
                    else {
                      lVar4 = 8;
                      uVar2 = 9;
                      bVar3 = local_18[8];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_18[lVar4] = bVar3 & 0x7f;
    writDytes(this,local_18,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DOutputStream::writeString(char const*) */

void __thiscall DOutputStream::writeString(DOutputStream *this,char *param_1)

{
  size_t __n;
  
  __n = strlen(param_1);
  encodeVarint(this,__n);
  if (__n != 0) {
    resetMemory(this,__n);
    memcpy((void *)(*(long *)(this + 8) + *(long *)(this + 0x10)),param_1,__n);
    *(size_t *)(this + 0x10) = *(long *)(this + 0x10) + __n;
  }
  return;
}


/* DOutputStream::writeFloat(float) */

void __thiscall DOutputStream::writeFloat(DOutputStream *this,float param_1)

{
  float fVar1;
  uint uVar2;
  
  resetMemory(this,4);
  uVar2 = ((uint)param_1 & 0xff00ff00) >> 8 | ((uint)param_1 & 0xff00ff) << 8;
  fVar1 = (float)(uVar2 >> 0x10 | uVar2 << 0x10);
  if (*this == (DOutputStream)0x0) {
    fVar1 = param_1;
  }
  *(float *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = fVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  return;
}


/* DOutputStream::writeDouble(double) */

void __thiscall DOutputStream::writeDouble(DOutputStream *this,double param_1)

{
  double dVar1;
  ulong uVar2;
  
  resetMemory(this,8);
  uVar2 = ((ulong)param_1 & 0xff00ff00ff00ff00) >> 8 | ((ulong)param_1 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  dVar1 = (double)(uVar2 >> 0x20 | uVar2 << 0x20);
  if (*this == (DOutputStream)0x0) {
    dVar1 = param_1;
  }
  *(double *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = dVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DOutputStream::writeToFile(char const*, char const*, bool) */

void __thiscall
DOutputStream::writeToFile(DOutputStream *this,char *param_1,char *param_2,bool param_3)

{
  char cVar1;
  size_t sVar2;
  uchar *puVar3;
  ulong uVar4;
  DWriteFile aDStack_2d8 [24];
  DAES aDStack_2c0 [696];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DWriteFile::DWriteFile(aDStack_2d8);
  cVar1 = DWriteFile::init(aDStack_2d8,param_1,false,false);
  if (cVar1 != '\0') {
    if (param_2 != (char *)0x0) {
      sVar2 = strlen(param_2);
      DWriteFile::writeBytes(aDStack_2d8,param_2,sVar2);
    }
    DWriteFile::writeBytes(aDStack_2d8,param_3);
    if (param_3) {
      puVar3 = (uchar *)getAESKey();
      DAES::DAES(aDStack_2c0,puVar3);
      uVar4 = 0;
      if (*(long *)(this + 0x10) != 0) {
        uVar4 = 0;
        do {
          puVar3 = (uchar *)(*(long *)(this + 8) + uVar4);
          uVar4 = uVar4 + 0x10;
          DAES::Cipher(aDStack_2c0,puVar3);
        } while (uVar4 < *(ulong *)(this + 0x10));
        uVar4 = *(ulong *)(this + 0x10) + 0xf & 0xfffffffffffffff0;
      }
      DWriteFile::writeBytes(aDStack_2d8,*(void **)(this + 8),uVar4);
      nop();
    }
    else {
      DWriteFile::writeBytes(aDStack_2d8,*(void **)(this + 8),*(ulong *)(this + 0x10));
    }
  }
  DWriteFile::~DWriteFile(aDStack_2d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

