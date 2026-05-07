// Class: DAES


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::KeyExpansion(unsigned char*, unsigned char (*) [4][4]) */

void __thiscall DAES::KeyExpansion(DAES *this,uchar *param_1,unsigned_char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  unsigned_char uVar3;
  unsigned_char uVar4;
  unsigned_char uVar5;
  DAES DVar6;
  DAES DVar7;
  unsigned_char uVar8;
  unsigned_char uVar9;
  unsigned_char uVar10;
  unsigned_char uVar11;
  unsigned_char uVar12;
  unsigned_char uVar13;
  unsigned_char uVar14;
  unsigned_char uVar15;
  long lVar16;
  long lVar17;
  byte local_18 [16];
  long local_8;
  
  lVar16 = ___stack_chk_guard;
  local_18[0] = 1;
  lVar17 = 0;
  local_18[1] = 2;
  local_8 = ___stack_chk_guard;
  *param_2 = (unsigned_char)*param_1;
  param_2[1] = *(unsigned_char *)(param_1 + 4);
  local_18[2] = 4;
  param_2[2] = *(unsigned_char *)(param_1 + 8);
  local_18[3] = 8;
  param_2[3] = *(unsigned_char *)(param_1 + 0xc);
  local_18[4] = 0x10;
  param_2[4] = *(unsigned_char *)(param_1 + 1);
  local_18[5] = 0x20;
  param_2[5] = *(unsigned_char *)(param_1 + 5);
  local_18[6] = 0x40;
  param_2[6] = *(unsigned_char *)(param_1 + 9);
  local_18[7] = 0x80;
  param_2[7] = *(unsigned_char *)(param_1 + 0xd);
  local_18[8] = 0x1b;
  param_2[8] = *(unsigned_char *)(param_1 + 2);
  local_18[9] = 0x36;
  param_2[9] = *(unsigned_char *)(param_1 + 6);
  param_2[10] = *(unsigned_char *)(param_1 + 10);
  param_2[0xb] = *(unsigned_char *)(param_1 + 0xe);
  param_2[0xc] = *(unsigned_char *)(param_1 + 3);
  param_2[0xd] = *(unsigned_char *)(param_1 + 7);
  param_2[0xe] = *(unsigned_char *)(param_1 + 0xb);
  param_2[0xf] = *(unsigned_char *)(param_1 + 0xf);
  do {
    uVar5 = param_2[3];
    pbVar1 = local_18 + lVar17;
    lVar17 = lVar17 + 1;
    uVar8 = param_2[0xf];
    uVar2 = CONCAT13(uVar8,CONCAT12(param_2[0xb],CONCAT11(param_2[7],uVar5)));
    DVar6 = this[(long)(int)(uint)(byte)uVar5 + 8];
    uVar9 = (unsigned_char)((byte)this[((ulong)(uVar2 >> 8) & 0xff) + 8] ^ *pbVar1 ^ (byte)*param_2)
    ;
    DVar7 = this[(long)(int)(uint)(byte)uVar8 + 8];
    uVar3 = (unsigned_char)((byte)uVar9 ^ (byte)param_2[1]);
    uVar14 = (unsigned_char)
             ((byte)param_2[5] ^ (byte)param_2[4] ^ (byte)this[((ulong)(uVar2 >> 0x10) & 0xff) + 8])
    ;
    uVar12 = (unsigned_char)((byte)param_2[9] ^ (byte)param_2[8] ^ (byte)DVar7);
    uVar10 = (unsigned_char)((byte)param_2[0xd] ^ (byte)param_2[0xc] ^ (byte)DVar6);
    uVar4 = (unsigned_char)((byte)uVar3 ^ (byte)param_2[2]);
    uVar15 = (unsigned_char)((byte)param_2[6] ^ (byte)uVar14);
    uVar13 = (unsigned_char)((byte)param_2[10] ^ (byte)uVar12);
    uVar11 = (unsigned_char)((byte)param_2[0xe] ^ (byte)uVar10);
    param_2[0x14] =
         (unsigned_char)((byte)param_2[4] ^ (byte)this[((ulong)(uVar2 >> 0x10) & 0xff) + 8]);
    param_2[0x18] = (unsigned_char)((byte)param_2[8] ^ (byte)DVar7);
    param_2[0x1c] = (unsigned_char)((byte)param_2[0xc] ^ (byte)DVar6);
    param_2[0x10] = uVar9;
    param_2[0x11] = uVar3;
    param_2[0x15] = uVar14;
    param_2[0x19] = uVar12;
    param_2[0x1d] = uVar10;
    param_2[0x12] = uVar4;
    param_2[0x16] = uVar15;
    param_2[0x1a] = uVar13;
    param_2[0x1e] = uVar11;
    param_2[0x13] = (unsigned_char)((byte)uVar4 ^ (byte)uVar5);
    param_2[0x17] = (unsigned_char)((byte)param_2[7] ^ (byte)uVar15);
    param_2[0x1b] = (unsigned_char)((byte)param_2[0xb] ^ (byte)uVar13);
    param_2[0x1f] = (unsigned_char)((byte)uVar8 ^ (byte)uVar11);
    param_2 = param_2 + 0x10;
  } while (lVar17 != 10);
  if (lVar16 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::DAES(unsigned char*) */

void __thiscall DAES::DAES(DAES *this,uchar *param_1)

{
  undefined1 auStack_208 [256];
  undefined1 auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_nop_06a23e50;
  memcpy(auStack_208,&DAT_05755f98,0x100);
  memcpy(auStack_108,&DAT_05756098,0x100);
  memcpy(this + 8,auStack_208,0x100);
  memcpy(this + 0x108,auStack_108,0x100);
  if (local_8 == ___stack_chk_guard) {
    KeyExpansion(this,param_1,(unsigned_char *)(this + 0x208));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Removing unreachable block (ram,0x04f83740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::FFmul(unsigned char, unsigned char) */

void __thiscall DAES::FFmul(DAES *this,uchar param_1,uchar param_2)

{
  return;
}


/* DAES::SubBytes(unsigned char (*) [4]) */

void __thiscall DAES::SubBytes(DAES *this,unsigned_char *param_1)

{
  *param_1 = (unsigned_char)this[(ulong)(byte)*param_1 + 8];
  *(DAES *)(param_1 + 1) = this[(ulong)(byte)param_1[1] + 8];
  *(DAES *)(param_1 + 2) = this[(ulong)(byte)param_1[2] + 8];
  *(DAES *)(param_1 + 3) = this[(ulong)(byte)param_1[3] + 8];
  *(DAES *)(param_1 + 4) = this[(ulong)(byte)param_1[4] + 8];
  *(DAES *)(param_1 + 5) = this[(ulong)(byte)param_1[5] + 8];
  *(DAES *)(param_1 + 6) = this[(ulong)(byte)param_1[6] + 8];
  *(DAES *)(param_1 + 7) = this[(ulong)(byte)param_1[7] + 8];
  *(DAES *)(param_1 + 8) = this[(ulong)(byte)param_1[8] + 8];
  *(DAES *)(param_1 + 9) = this[(ulong)(byte)param_1[9] + 8];
  *(DAES *)(param_1 + 10) = this[(ulong)(byte)param_1[10] + 8];
  *(DAES *)(param_1 + 0xb) = this[(ulong)(byte)param_1[0xb] + 8];
  *(DAES *)(param_1 + 0xc) = this[(ulong)(byte)param_1[0xc] + 8];
  *(DAES *)(param_1 + 0xd) = this[(ulong)(byte)param_1[0xd] + 8];
  *(DAES *)(param_1 + 0xe) = this[(ulong)(byte)param_1[0xe] + 8];
  *(DAES *)(param_1 + 0xf) = this[(ulong)(byte)param_1[0xf] + 8];
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::ShiftRows(unsigned char (*) [4]) */

void __thiscall DAES::ShiftRows(DAES *this,unsigned_char *param_1)

{
  unsigned_char uVar1;
  unsigned_char uVar2;
  unsigned_char uVar3;
  unsigned_char uVar4;
  unsigned_char uVar5;
  undefined3 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = ___stack_chk_guard;
  uVar6 = *(undefined3 *)(param_1 + 5);
  uVar1 = param_1[4];
  uVar2 = param_1[8];
  param_1[4] = SUB31(uVar6,0);
  uVar3 = param_1[9];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  param_1[7] = uVar1;
  param_1[5] = SUB31((uint3)uVar6 >> 8,0);
  param_1[6] = SUB31((uint3)uVar6 >> 0x10,0);
  param_1[8] = SUB21(*(undefined2 *)(param_1 + 10),0);
  lVar8 = ___stack_chk_guard;
  uVar1 = param_1[0xe];
  param_1[9] = SUB21((ushort)*(undefined2 *)(param_1 + 10) >> 8,0);
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = param_1[0xf];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar1;
  if (lVar7 == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::MixColumns(unsigned char (*) [4]) */

void __thiscall DAES::MixColumns(DAES *this,unsigned_char *param_1)

{
  unsigned_char *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  unsigned_char local_10 [8];
  long local_8;
  
  puVar1 = param_1 + 4;
  local_8 = ___stack_chk_guard;
  do {
    lVar8 = 0;
    local_10[0] = *param_1;
    local_10[1] = param_1[4];
    local_10[2] = param_1[8];
    local_10[3] = param_1[0xc];
    do {
      bVar2 = FFmul(this,'\x02',(uchar)local_10[lVar8]);
      iVar7 = (int)lVar8;
      bVar3 = FFmul(this,'\x03',(uchar)local_10[(ulong)(iVar7 + 1) & 3]);
      bVar4 = FFmul(this,'\x01',(uchar)local_10[(ulong)(iVar7 + 2) & 3]);
      bVar5 = FFmul(this,'\x01',(uchar)local_10[(ulong)(iVar7 + 3) & 3]);
      lVar6 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      param_1[lVar6] = (unsigned_char)(bVar5 ^ bVar3 ^ bVar2 ^ bVar4);
    } while (lVar8 != 4);
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DAES::AddRoundKey(unsigned char (*) [4], unsigned char (*) [4]) */

void __thiscall DAES::AddRoundKey(DAES *this,unsigned_char *param_1,unsigned_char *param_2)

{
  *param_1 = (unsigned_char)((byte)*param_2 ^ (byte)*param_1);
  param_1[4] = (unsigned_char)((byte)param_2[4] ^ (byte)param_1[4]);
  param_1[8] = (unsigned_char)((byte)param_2[8] ^ (byte)param_1[8]);
  param_1[0xc] = (unsigned_char)((byte)param_2[0xc] ^ (byte)param_1[0xc]);
  param_1[1] = (unsigned_char)((byte)param_2[1] ^ (byte)param_1[1]);
  param_1[5] = (unsigned_char)((byte)param_2[5] ^ (byte)param_1[5]);
  param_1[9] = (unsigned_char)((byte)param_2[9] ^ (byte)param_1[9]);
  param_1[0xd] = (unsigned_char)((byte)param_2[0xd] ^ (byte)param_1[0xd]);
  param_1[2] = (unsigned_char)((byte)param_2[2] ^ (byte)param_1[2]);
  param_1[6] = (unsigned_char)((byte)param_2[6] ^ (byte)param_1[6]);
  param_1[10] = (unsigned_char)((byte)param_2[10] ^ (byte)param_1[10]);
  param_1[0xe] = (unsigned_char)((byte)param_2[0xe] ^ (byte)param_1[0xe]);
  param_1[3] = (unsigned_char)((byte)param_2[3] ^ (byte)param_1[3]);
  param_1[7] = (unsigned_char)((byte)param_2[7] ^ (byte)param_1[7]);
  param_1[0xb] = (unsigned_char)((byte)param_2[0xb] ^ (byte)param_1[0xb]);
  param_1[0xf] = (unsigned_char)((byte)param_2[0xf] ^ (byte)param_1[0xf]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::Cipher(unsigned char*) */

void __thiscall DAES::Cipher(DAES *this,uchar *param_1)

{
  int iVar1;
  DAES *pDVar2;
  unsigned_char local_18;
  uchar local_17;
  uchar local_16;
  uchar local_15;
  uchar local_14;
  uchar local_13;
  uchar local_12;
  uchar local_11;
  uchar local_10;
  uchar local_f;
  uchar local_e;
  uchar local_d;
  uchar local_c;
  uchar local_b;
  uchar local_a;
  uchar local_9;
  long local_8;
  
  iVar1 = 1;
  local_8 = ___stack_chk_guard;
  local_18 = (unsigned_char)*param_1;
  local_17 = param_1[4];
  local_16 = param_1[8];
  local_15 = param_1[0xc];
  local_14 = param_1[1];
  local_13 = param_1[5];
  local_12 = param_1[9];
  local_a = param_1[0xb];
  local_11 = param_1[0xd];
  local_10 = param_1[2];
  local_f = param_1[6];
  local_e = param_1[10];
  local_d = param_1[0xe];
  local_c = param_1[3];
  local_b = param_1[7];
  local_9 = param_1[0xf];
  AddRoundKey(this,&local_18,(unsigned_char *)(this + 0x208));
  SubBytes(this,&local_18);
  ShiftRows(this,&local_18);
  pDVar2 = this + 0x218;
  do {
    iVar1 = iVar1 + 1;
    MixColumns(this,&local_18);
    AddRoundKey(this,&local_18,(unsigned_char *)pDVar2);
    SubBytes(this,&local_18);
    ShiftRows(this,&local_18);
    pDVar2 = (DAES *)(pDVar2 + 0x10);
  } while (iVar1 != 10);
  AddRoundKey(this,&local_18,(unsigned_char *)(this + 0x2a8));
  param_1[0xf] = local_9;
  *param_1 = (uchar)local_18;
  param_1[4] = local_17;
  param_1[8] = local_16;
  param_1[0xc] = local_15;
  param_1[1] = local_14;
  param_1[5] = local_13;
  param_1[9] = local_12;
  param_1[0xd] = local_11;
  param_1[2] = local_10;
  param_1[6] = local_f;
  param_1[10] = local_e;
  param_1[0xe] = local_d;
  param_1[3] = local_c;
  param_1[7] = local_b;
  param_1[0xb] = local_a;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* DAES::Cipher(void*, int) */

void * __thiscall DAES::Cipher(DAES *this,void *param_1,int param_2)

{
  uchar *puVar1;
  char cVar2;
  char *pcVar3;
  uchar *puVar4;
  
  if (param_2 == 0) {
    param_2 = 0;
    pcVar3 = param_1;
    do {
      cVar2 = *pcVar3;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  else if (param_2 < 1) {
    return param_1;
  }
  puVar4 = param_1;
  do {
    puVar1 = puVar4 + 0x10;
    Cipher(this,puVar4);
    puVar4 = puVar1;
  } while (puVar1 != (uchar *)((long)param_1 + ((ulong)(param_2 - 1) & 0xfffffff0) + 0x10));
  return param_1;
}


/* DAES::InvSubBytes(unsigned char (*) [4]) */

void __thiscall DAES::InvSubBytes(DAES *this,unsigned_char *param_1)

{
  *param_1 = (unsigned_char)this[(ulong)(byte)*param_1 + 0x108];
  *(DAES *)(param_1 + 1) = this[(ulong)(byte)param_1[1] + 0x108];
  *(DAES *)(param_1 + 2) = this[(ulong)(byte)param_1[2] + 0x108];
  *(DAES *)(param_1 + 3) = this[(ulong)(byte)param_1[3] + 0x108];
  *(DAES *)(param_1 + 4) = this[(ulong)(byte)param_1[4] + 0x108];
  *(DAES *)(param_1 + 5) = this[(ulong)(byte)param_1[5] + 0x108];
  *(DAES *)(param_1 + 6) = this[(ulong)(byte)param_1[6] + 0x108];
  *(DAES *)(param_1 + 7) = this[(ulong)(byte)param_1[7] + 0x108];
  *(DAES *)(param_1 + 8) = this[(ulong)(byte)param_1[8] + 0x108];
  *(DAES *)(param_1 + 9) = this[(ulong)(byte)param_1[9] + 0x108];
  *(DAES *)(param_1 + 10) = this[(ulong)(byte)param_1[10] + 0x108];
  *(DAES *)(param_1 + 0xb) = this[(ulong)(byte)param_1[0xb] + 0x108];
  *(DAES *)(param_1 + 0xc) = this[(ulong)(byte)param_1[0xc] + 0x108];
  *(DAES *)(param_1 + 0xd) = this[(ulong)(byte)param_1[0xd] + 0x108];
  *(DAES *)(param_1 + 0xe) = this[(ulong)(byte)param_1[0xe] + 0x108];
  *(DAES *)(param_1 + 0xf) = this[(ulong)(byte)param_1[0xf] + 0x108];
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::InvShiftRows(unsigned char (*) [4]) */

void __thiscall DAES::InvShiftRows(DAES *this,unsigned_char *param_1)

{
  unsigned_char uVar1;
  unsigned_char uVar2;
  unsigned_char uVar3;
  unsigned_char uVar4;
  undefined3 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = ___stack_chk_guard;
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_1[8];
  param_1[4] = param_1[7];
  uVar4 = param_1[9];
  uVar5 = *(undefined3 *)(param_1 + 0xd);
  param_1[7] = param_1[6];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[8] = SUB21(*(undefined2 *)(param_1 + 10),0);
  lVar7 = ___stack_chk_guard;
  uVar1 = param_1[0xc];
  param_1[9] = SUB21((ushort)*(undefined2 *)(param_1 + 10) >> 8,0);
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = SUB21(*(undefined2 *)(param_1 + 0xd),0);
  param_1[0xd] = SUB31((uint3)uVar5 >> 8,0);
  param_1[0xe] = SUB31((uint3)uVar5 >> 0x10,0);
  param_1[0xf] = uVar1;
  if (lVar6 == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::InvMixColumns(unsigned char (*) [4]) */

void __thiscall DAES::InvMixColumns(DAES *this,unsigned_char *param_1)

{
  unsigned_char *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  unsigned_char local_10 [8];
  long local_8;
  
  puVar1 = param_1 + 4;
  local_8 = ___stack_chk_guard;
  do {
    lVar8 = 0;
    local_10[0] = *param_1;
    local_10[1] = param_1[4];
    local_10[2] = param_1[8];
    local_10[3] = param_1[0xc];
    do {
      bVar2 = FFmul(this,'\x0e',(uchar)local_10[lVar8]);
      iVar7 = (int)lVar8;
      bVar3 = FFmul(this,'\v',(uchar)local_10[(ulong)(iVar7 + 1) & 3]);
      bVar4 = FFmul(this,'\r',(uchar)local_10[(ulong)(iVar7 + 2) & 3]);
      bVar5 = FFmul(this,'\t',(uchar)local_10[(ulong)(iVar7 + 3) & 3]);
      lVar6 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      param_1[lVar6] = (unsigned_char)(bVar5 ^ bVar3 ^ bVar2 ^ bVar4);
    } while (lVar8 != 4);
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAES::InvCipher(unsigned char*) */

void __thiscall DAES::InvCipher(DAES *this,uchar *param_1)

{
  DAES *pDVar1;
  DAES *pDVar2;
  unsigned_char local_18;
  uchar local_17;
  uchar local_16;
  uchar local_15;
  uchar local_14;
  uchar local_13;
  uchar local_12;
  uchar local_11;
  uchar local_10;
  uchar local_f;
  uchar local_e;
  uchar local_d;
  uchar local_c;
  uchar local_b;
  uchar local_a;
  uchar local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (unsigned_char)*param_1;
  local_17 = param_1[4];
  local_16 = param_1[8];
  local_15 = param_1[0xc];
  local_14 = param_1[1];
  local_13 = param_1[5];
  local_12 = param_1[9];
  local_a = param_1[0xb];
  local_11 = param_1[0xd];
  local_10 = param_1[2];
  local_f = param_1[6];
  local_e = param_1[10];
  local_d = param_1[0xe];
  local_c = param_1[3];
  local_b = param_1[7];
  local_9 = param_1[0xf];
  AddRoundKey(this,&local_18,(unsigned_char *)(this + 0x2a8));
  InvShiftRows(this,&local_18);
  InvSubBytes(this,&local_18);
  AddRoundKey(this,&local_18,(unsigned_char *)(this + 0x298));
  pDVar1 = this + 0x288;
  do {
    InvMixColumns(this,&local_18);
    InvShiftRows(this,&local_18);
    InvSubBytes(this,&local_18);
    pDVar2 = pDVar1 + -0x10;
    AddRoundKey(this,&local_18,(unsigned_char *)pDVar1);
    pDVar1 = pDVar2;
  } while (pDVar2 != this + 0x1f8);
  param_1[0xf] = local_9;
  *param_1 = (uchar)local_18;
  param_1[4] = local_17;
  param_1[8] = local_16;
  param_1[0xc] = local_15;
  param_1[1] = local_14;
  param_1[5] = local_13;
  param_1[9] = local_12;
  param_1[0xd] = local_11;
  param_1[2] = local_10;
  param_1[6] = local_f;
  param_1[10] = local_e;
  param_1[0xe] = local_d;
  param_1[3] = local_c;
  param_1[7] = local_b;
  param_1[0xb] = local_a;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* DAES::InvCipher(void*, int) */

void * __thiscall DAES::InvCipher(DAES *this,void *param_1,int param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar1 = puVar2 + 0x10;
      InvCipher(this,puVar2);
      puVar2 = puVar1;
    } while (puVar1 != (uchar *)((long)param_1 + ((ulong)(param_2 - 1) & 0xfffffff0) + 0x10));
  }
  return param_1;
}

