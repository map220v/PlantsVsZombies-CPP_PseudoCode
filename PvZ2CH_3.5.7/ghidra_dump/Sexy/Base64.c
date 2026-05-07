// Class: Sexy::Base64


/* Sexy::Base64::SizeForEncodeBuffer(unsigned long) const */

long __thiscall Sexy::Base64::SizeForEncodeBuffer(Base64 *this,ulong param_1)

{
  return (param_1 + 2) / 3 << 2;
}


/* Sexy::Base64::Encode(unsigned char*, unsigned char const*, unsigned long) const */

uchar * __thiscall Sexy::Base64::Encode(Base64 *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = param_1;
  for (; 2 < param_3; param_3 = param_3 - 3) {
    *puVar1 = *(uchar *)(*(long *)(this + 8) + (long)((int)(uint)*param_2 >> 2));
    puVar1[1] = *(uchar *)(*(long *)(this + 8) +
                          (long)(int)((*param_2 & 3) * 0x10 + (uint)(param_2[1] >> 4)));
    puVar1[2] = *(uchar *)(*(long *)(this + 8) +
                          (long)(int)((param_2[1] & 0xf) * 4 + (uint)(param_2[2] >> 6)));
    puVar1[3] = *(uchar *)(*(long *)(this + 8) + ((ulong)param_2[2] & 0x3f));
    puVar1 = puVar1 + 4;
    param_2 = param_2 + 3;
  }
  if (param_3 == 2) {
    *puVar1 = *(uchar *)(*(long *)(this + 8) + (long)((int)(uint)*param_2 >> 2));
    puVar1[1] = *(uchar *)(*(long *)(this + 8) +
                          (long)(int)((*param_2 & 3) * 0x10 + (uint)(param_2[1] >> 4)));
    puVar1[2] = *(uchar *)(*(long *)(this + 8) + ((ulong)param_2[1] & 0xf) * 4);
    puVar2 = puVar1 + 3;
    if (this[4] != (Base64)0x0) {
      *(Base64 *)(puVar1 + 3) = this[4];
      return puVar1 + (4 - (long)param_1);
    }
  }
  else {
    puVar2 = puVar1;
    if (param_3 != 0) {
      *puVar1 = *(uchar *)(*(long *)(this + 8) + (long)((int)(uint)*param_2 >> 2));
      puVar1[1] = *(uchar *)(*(long *)(this + 8) + ((ulong)*param_2 & 3) * 0x10);
      if (this[4] != (Base64)0x0) {
        *(Base64 *)(puVar1 + 2) = this[4];
        *(Base64 *)(puVar1 + 3) = this[4];
        return puVar1 + (4 - (long)param_1);
      }
      puVar2 = puVar1 + 2;
    }
  }
  return puVar2 + -(long)param_1;
}


/* Sexy::Base64::SizeForDecodeBuffer(unsigned long) const */

long __thiscall Sexy::Base64::SizeForDecodeBuffer(Base64 *this,ulong param_1)

{
  return (param_1 + 3 >> 2) * 3;
}


/* Sexy::Base64::Decode(unsigned char*, unsigned char const*, unsigned long) const */

long __thiscall Sexy::Base64::Decode(Base64 *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((this[4] != (Base64)*param_2) &&
     (bVar1 = *(byte *)(*(long *)(this + 0x10) + (ulong)*param_2), uVar2 = (uint)bVar1,
     bVar1 != 0x41)) {
    uVar5 = 0;
    pbVar3 = param_1;
    do {
      uVar4 = uVar5 & 3;
      uVar5 = uVar5 + 1;
      if (uVar4 == 2) {
        pbVar3[1] = (byte)(uVar2 << 6);
        *pbVar3 = *pbVar3 | (byte)(uVar2 >> 2);
        pbVar3 = pbVar3 + 1;
      }
      else if (uVar4 == 3) {
        *pbVar3 = (byte)uVar2 | *pbVar3;
        pbVar3 = pbVar3 + 1;
      }
      else if (uVar4 == 1) {
        pbVar3[1] = (byte)(uVar2 << 4);
        *pbVar3 = *pbVar3 | (byte)(uVar2 >> 4);
        pbVar3 = pbVar3 + 1;
      }
      else {
        *pbVar3 = (byte)(uVar2 << 2);
      }
    } while (((uVar5 != param_3) && (this[4] != *(Base64 *)(param_2 + uVar5))) &&
            (uVar2 = (uint)*(byte *)(*(long *)(this + 0x10) +
                                    (ulong)(byte)*(Base64 *)(param_2 + uVar5)), uVar2 != 0x41));
    return (long)pbVar3 - (long)param_1;
  }
  return 0;
}


/* Sexy::Base64::Encode(Sexy::Buffer*, unsigned char const*, unsigned long) */

void __thiscall Sexy::Base64::Encode(Base64 *this,Buffer *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = SizeForEncodeBuffer(this,param_3);
  Buffer::Resize(param_1,uVar1);
  puVar2 = (uchar *)Buffer::GetDataPtr(param_1);
  Encode(this,puVar2,param_2,param_3);
  return;
}


/* Sexy::Base64::Encode(Sexy::Buffer*, Sexy::Buffer const*) */

void __thiscall Sexy::Base64::Encode(Base64 *this,Buffer *param_1,Buffer *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)Buffer::GetDataPtr(param_2);
  iVar1 = Buffer::GetDataLen(param_2);
  Encode(this,param_1,puVar2,(long)iVar1);
  return;
}


/* Sexy::Base64::Decode(Sexy::Buffer*, unsigned char const*, unsigned long) */

void __thiscall Sexy::Base64::Decode(Base64 *this,Buffer *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = SizeForEncodeBuffer(this,param_3);
  Buffer::Resize(param_1,uVar1);
  puVar2 = (uchar *)Buffer::GetDataPtr(param_1);
  Decode(this,puVar2,param_2,param_3);
  return;
}


/* Sexy::Base64::Decode(Sexy::Buffer*, Sexy::Buffer const*) */

void __thiscall Sexy::Base64::Decode(Base64 *this,Buffer *param_1,Buffer *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)Buffer::GetDataPtr(param_2);
  iVar1 = Buffer::GetDataLen(param_2);
  Decode(this,param_1,puVar2,(long)iVar1);
  return;
}


/* Sexy::Base64::SelectTable(unsigned char*, unsigned char*) */

void __thiscall Sexy::Base64::SelectTable(Base64 *this,uchar *param_1,uchar *param_2)

{
  long lVar1;
  
  *(uchar **)(this + 8) = param_1;
  *(uchar **)(this + 0x10) = param_2;
  if (*param_2 != '\0') {
    return;
  }
  FUN_0511c598(param_2);
  lVar1 = 0;
  do {
    *(char *)(*(long *)(this + 0x10) + (ulong)*(byte *)(*(long *)(this + 8) + lVar1)) = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  return;
}


/* Sexy::Base64::SetMode(Sexy::Base64::Mode) */

void __thiscall Sexy::Base64::SetMode(Base64 *this,int param_2)

{
  *(int *)this = param_2;
  if (param_2 != 1) {
    SelectTable(this,(uchar *)s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_06a89d20,&DAT_06ba8860);
    this[4] = (Base64)0x3d;
    return;
  }
  SelectTable(this,(uchar *)s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_06a89cd0,&DAT_06ba8960);
  this[4] = (Base64)0x0;
  return;
}


/* Sexy::Base64::Base64() */

void __thiscall Sexy::Base64::Base64(Base64 *this)

{
  SetMode(this,0);
  return;
}


/* Sexy::Base64::Base64(Sexy::Base64::Mode) */

void __thiscall Sexy::Base64::Base64(Base64 *this,int param_2)

{
  *(int *)this = param_2;
  if (param_2 != 1) {
    SelectTable(this,(uchar *)s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_06a89d20,&DAT_06ba8860);
    this[4] = (Base64)0x3d;
    return;
  }
  SelectTable(this,(uchar *)s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_06a89cd0,&DAT_06ba8960);
  this[4] = (Base64)0x0;
  return;
}

