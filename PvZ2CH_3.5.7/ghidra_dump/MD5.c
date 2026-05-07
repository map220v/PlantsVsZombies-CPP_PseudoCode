// Class: MD5


/* MD5::reset() */

void __thiscall MD5::reset(MD5 *this)

{
  this[0x68] = (MD5)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)this = 0x67452301;
  *(undefined4 *)(this + 4) = 0xefcdab89;
  *(undefined4 *)(this + 8) = 0x98badcfe;
  *(undefined4 *)(this + 0xc) = 0x10325476;
  return;
}


/* MD5::MD5() */

void __thiscall MD5::MD5(MD5 *this)

{
  this[0x68] = (MD5)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)this = 0x67452301;
  *(undefined4 *)(this + 4) = 0xefcdab89;
  *(undefined4 *)(this + 8) = 0x98badcfe;
  *(undefined4 *)(this + 0xc) = 0x10325476;
  return;
}


/* MD5::encode(unsigned int const*, unsigned char*, unsigned long) */

void __thiscall MD5::encode(MD5 *this,uint *param_1,uchar *param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      *param_2 = (uchar)*(undefined4 *)((long)param_1 + uVar2);
      param_2[1] = (uchar)((uint)*(undefined4 *)((long)param_1 + uVar2) >> 8);
      param_2[2] = (uchar)((uint)*(undefined4 *)((long)param_1 + uVar2) >> 0x10);
      puVar1 = (undefined4 *)((long)param_1 + uVar2);
      uVar2 = uVar2 + 4;
      param_2[3] = (uchar)((uint)*puVar1 >> 0x18);
      param_2 = param_2 + 4;
    } while (uVar2 < param_3);
  }
  return;
}


/* MD5::decode(unsigned char const*, unsigned int*, unsigned long) */

void __thiscall MD5::decode(MD5 *this,uchar *param_1,uint *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      *(uint *)((long)param_2 + uVar1) =
           (uint)param_1[2] << 0x10 | (uint)param_1[1] << 8 | (uint)*param_1 |
           (uint)param_1[3] << 0x18;
      uVar1 = uVar1 + 4;
      param_1 = param_1 + 4;
    } while (uVar1 < param_3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MD5::transform(unsigned char const*) */

void __thiscall MD5::transform(MD5 *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  uVar2 = *(uint *)(this + 4);
  uVar3 = *(uint *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar4 = *(uint *)(this + 0xc);
  iVar5 = *(int *)this;
  decode(this,param_1,&local_48,0x40);
  lVar6 = ___stack_chk_guard;
  uVar1 = iVar5 + local_48 + -0x28955b88 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar3 & uVar2);
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar2;
  uVar4 = uVar4 + local_44 + -0x173848aa + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar2);
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar1;
  uVar3 = uVar3 + local_40 + 0x242070db + (uVar2 & (uVar4 ^ 0xffffffff) | uVar4 & uVar1);
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar4;
  uVar2 = uVar2 + local_3c + -0x3e423112 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar4);
  uVar2 = (uVar2 >> 10 | uVar2 * 0x400000) + uVar3;
  uVar1 = local_38 + -0xa83f051 + uVar1 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar2 & uVar3);
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar2;
  uVar4 = local_34 + 0x4787c62a + uVar4 + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar2);
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar1;
  uVar3 = local_30 + -0x57cfb9ed + uVar3 + (uVar2 & (uVar4 ^ 0xffffffff) | uVar4 & uVar1);
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar4;
  uVar2 = local_2c + -0x2b96aff + uVar2 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar4);
  uVar2 = (uVar2 >> 10 | uVar2 * 0x400000) + uVar3;
  uVar1 = local_28 + 0x698098d8 + uVar1 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar2 & uVar3);
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar2;
  uVar4 = local_24 + -0x74bb0851 + uVar4 + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar2);
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar1;
  uVar3 = local_20 + -0xa44f + uVar3 + (uVar2 & (uVar4 ^ 0xffffffff) | uVar4 & uVar1);
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar4;
  uVar2 = local_1c + -0x76a32842 + uVar2 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar4);
  uVar2 = (uVar2 >> 10 | uVar2 * 0x400000) + uVar3;
  uVar1 = local_18 + 0x6b901122 + uVar1 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar2 & uVar3);
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar2;
  uVar4 = local_14 + -0x2678e6d + uVar4 + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar2);
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar1;
  uVar3 = local_10 + -0x5986bc72 + uVar3 + (~uVar4 & uVar2 | uVar4 & uVar1);
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar4;
  uVar2 = local_c + 0x49b40821 + uVar2 + (~uVar3 & uVar1 | uVar3 & uVar4);
  uVar2 = (uVar2 >> 10 | uVar2 * 0x400000) + uVar3;
  uVar1 = local_44 + -0x9e1da9e + uVar1 + (uVar2 & uVar4 | uVar3 & ~uVar4);
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar2;
  uVar4 = local_30 + -0x3fbf4cc0 + uVar4 + (uVar1 & uVar3 | uVar2 & ~uVar3);
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar1;
  uVar3 = local_1c + 0x265e5a51 + uVar3 + (uVar4 & uVar2 | uVar1 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar4;
  uVar2 = local_48 + 0xe9b6c7aa + uVar2 + (uVar3 & uVar1 | uVar4 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0xc | uVar2 * 0x100000) + uVar3;
  uVar1 = local_34 + -0x29d0efa3 + uVar1 + (uVar2 & uVar4 | uVar3 & (uVar4 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar2;
  uVar4 = local_20 + 0x2441453 + uVar4 + (uVar1 & uVar3 | uVar2 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar1;
  uVar3 = local_c + -0x275e197f + uVar3 + (uVar4 & uVar2 | uVar1 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar4;
  uVar2 = local_38 + -0x182c0438 + uVar2 + (uVar3 & uVar1 | uVar4 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0xc | uVar2 * 0x100000) + uVar3;
  uVar1 = local_24 + 0x21e1cde6 + uVar1 + (uVar2 & uVar4 | uVar3 & (uVar4 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar2;
  uVar4 = local_10 + -0x3cc8f82a + uVar4 + (uVar1 & uVar3 | uVar2 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar1;
  uVar3 = local_3c + -0xb2af279 + uVar3 + (uVar4 & uVar2 | uVar1 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar4;
  uVar2 = local_28 + 0x455a14ed + uVar2 + (uVar3 & uVar1 | uVar4 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0xc | uVar2 * 0x100000) + uVar3;
  uVar1 = local_14 + -0x561c16fb + uVar1 + (uVar2 & uVar4 | uVar3 & (uVar4 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar2;
  uVar4 = local_40 + -0x3105c08 + uVar4 + (uVar1 & uVar3 | uVar2 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar1;
  uVar3 = local_2c + 0x676f02d9 + uVar3 + (uVar4 & uVar2 | uVar1 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar4;
  uVar2 = local_18 + -0x72d5b376 + uVar2 + (uVar3 & uVar1 | uVar4 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0xc | uVar2 * 0x100000) + uVar3;
  uVar1 = local_34 + -0x5c6be + uVar1 + (uVar3 ^ uVar4 ^ uVar2);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar4 = local_28 + -0x788e097f + uVar4 + (uVar2 ^ uVar3 ^ uVar1);
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar1;
  uVar3 = local_1c + 0x6d9d6122 + uVar3 + (uVar1 ^ uVar2 ^ uVar4);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar4;
  uVar2 = local_10 + -0x21ac7f4 + uVar2 + (uVar4 ^ uVar1 ^ uVar3);
  uVar2 = (uVar2 >> 9 | uVar2 * 0x800000) + uVar3;
  uVar1 = local_44 + -0x5b4115bc + uVar1 + (uVar3 ^ uVar4 ^ uVar2);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar4 = local_38 + 0x4bdecfa9 + uVar4 + (uVar2 ^ uVar3 ^ uVar1);
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar1;
  uVar3 = local_2c + -0x944b4a0 + uVar3 + (uVar1 ^ uVar2 ^ uVar4);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar4;
  uVar2 = local_20 + -0x41404390 + uVar2 + (uVar4 ^ uVar1 ^ uVar3);
  uVar2 = (uVar2 >> 9 | uVar2 * 0x800000) + uVar3;
  uVar1 = local_14 + 0x289b7ec6 + uVar1 + (uVar3 ^ uVar4 ^ uVar2);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar4 = local_48 + 0xeaa127fa + uVar4 + (uVar2 ^ uVar3 ^ uVar1);
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar1;
  uVar3 = local_3c + -0x2b10cf7b + uVar3 + (uVar1 ^ uVar2 ^ uVar4);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar4;
  uVar2 = local_30 + 0x4881d05 + uVar2 + (uVar4 ^ uVar1 ^ uVar3);
  uVar2 = (uVar2 >> 9 | uVar2 * 0x800000) + uVar3;
  uVar1 = local_24 + -0x262b2fc7 + uVar1 + (uVar3 ^ uVar4 ^ uVar2);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar4 = local_18 + -0x1924661b + uVar4 + (uVar2 ^ uVar3 ^ uVar1);
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar1;
  uVar3 = local_c + 0x1fa27cf8 + uVar3 + (uVar1 ^ uVar2 ^ uVar4);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar4;
  uVar2 = local_40 + -0x3b53a99b + uVar2 + (uVar4 ^ uVar1 ^ uVar3);
  uVar2 = (uVar2 >> 9 | uVar2 * 0x800000) + uVar3;
  uVar1 = local_48 + 0xf4292244 + uVar1 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar2;
  uVar4 = local_2c + 0x432aff97 + uVar4 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar2);
  uVar4 = (uVar4 >> 0x16 | uVar4 * 0x400) + uVar1;
  uVar3 = local_10 + -0x546bdc59 + uVar3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar4;
  uVar2 = local_34 + -0x36c5fc7 + uVar2 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar4);
  uVar2 = (uVar2 >> 0xb | uVar2 * 0x200000) + uVar3;
  uVar1 = local_18 + 0x655b59c3 + uVar1 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar2;
  uVar4 = local_3c + -0x70f3336e + uVar4 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar2);
  uVar4 = (uVar4 >> 0x16 | uVar4 * 0x400) + uVar1;
  uVar3 = local_20 + -0x100b83 + uVar3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar4;
  uVar2 = local_44 + -0x7a7ba22f + uVar2 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar4);
  uVar2 = (uVar2 >> 0xb | uVar2 * 0x200000) + uVar3;
  uVar1 = local_28 + 0x6fa87e4f + uVar1 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar2;
  uVar4 = local_c + -0x1d31920 + uVar4 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar2);
  uVar4 = (uVar4 >> 0x16 | uVar4 * 0x400) + uVar1;
  uVar3 = local_30 + -0x5cfebcec + uVar3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar4;
  uVar2 = local_14 + 0x4e0811a1 + uVar2 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar4);
  uVar2 = (uVar2 >> 0xb | uVar2 * 0x200000) + uVar3;
  uVar1 = local_38 + -0x8ac817e + uVar1 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar2;
  *(uint *)this = *(int *)this + uVar1;
  uVar4 = local_1c + -0x42c50dcb + uVar4 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar2);
  uVar4 = (uVar4 >> 0x16 | uVar4 * 0x400) + uVar1;
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar4;
  uVar3 = local_40 + 0x2ad7d2bb + uVar3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar4;
  uVar1 = local_24 + -0x14792c6f + uVar2 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar4);
  *(uint *)(this + 8) = *(int *)(this + 8) + uVar3;
  *(uint *)(this + 4) = uVar3 + *(int *)(this + 4) + (uVar1 >> 0xb | uVar1 * 0x200000);
  if (local_8 == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MD5::update(unsigned char const*, unsigned long) */

void __thiscall MD5::update(MD5 *this,uchar *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  MD5 *__dest;
  int iVar3;
  ulong __n;
  ulong uVar4;
  
  uVar2 = (uint)param_2 * 8;
  uVar4 = (ulong)(*(uint *)(this + 0x10) >> 3) & 0x3f;
  uVar1 = uVar2 + *(uint *)(this + 0x10);
  this[0x68] = (MD5)0x0;
  *(uint *)(this + 0x10) = uVar1;
  iVar3 = *(int *)(this + 0x14);
  if (uVar1 < uVar2) {
    iVar3 = iVar3 + 1;
  }
  __n = (ulong)(0x40 - (int)uVar4);
  *(uint *)(this + 0x14) = iVar3 + ((uint)param_2 >> 0x1d);
  if (param_2 < __n) {
    __n = 0;
    __dest = this + uVar4 + 0x18;
  }
  else {
    __dest = this + 0x18;
    memcpy(this + uVar4 + 0x18,param_1,__n);
    transform(this,(uchar *)__dest);
    if (0x7f - (int)uVar4 < param_2) {
      do {
        transform(this,param_1 + __n);
        iVar3 = (int)__n;
        __n = (ulong)(iVar3 + 0x40);
      } while (iVar3 + 0x7f < param_2);
      memcpy(__dest,param_1 + __n,param_2 - __n);
      return;
    }
  }
  memcpy(__dest,param_1 + __n,param_2 - __n);
  return;
}


/* MD5::update(void const*, unsigned long) */

void __thiscall MD5::update(MD5 *this,void *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  MD5 *__dest;
  int iVar3;
  ulong __n;
  ulong uVar4;
  
  uVar2 = (uint)param_2 * 8;
  uVar4 = (ulong)(*(uint *)(this + 0x10) >> 3) & 0x3f;
  uVar1 = uVar2 + *(uint *)(this + 0x10);
  this[0x68] = (MD5)0x0;
  *(uint *)(this + 0x10) = uVar1;
  iVar3 = *(int *)(this + 0x14);
  if (uVar1 < uVar2) {
    iVar3 = iVar3 + 1;
  }
  __n = (ulong)(0x40 - (int)uVar4);
  *(uint *)(this + 0x14) = iVar3 + ((uint)param_2 >> 0x1d);
  if (param_2 < __n) {
    __n = 0;
    __dest = this + uVar4 + 0x18;
  }
  else {
    __dest = this + 0x18;
    memcpy(this + uVar4 + 0x18,param_1,__n);
    transform(this,(uchar *)__dest);
    if (0x7f - (int)uVar4 < param_2) {
      do {
        transform(this,(uchar *)((long)param_1 + __n));
        iVar3 = (int)__n;
        __n = (ulong)(iVar3 + 0x40);
      } while (iVar3 + 0x7f < param_2);
      memcpy(__dest,(void *)((long)param_1 + __n),param_2 - __n);
      return;
    }
  }
  memcpy(__dest,(void *)((long)param_1 + __n),param_2 - __n);
  return;
}


/* MD5::MD5(void const*, unsigned long) */

void __thiscall MD5::MD5(MD5 *this,void *param_1,ulong param_2)

{
  reset(this);
  update(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MD5::update(std::ifstream&) */

void __thiscall MD5::update(MD5 *this,ifstream *param_1)

{
  char cVar1;
  ulong uVar2;
  ifstream *piVar3;
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar3 = param_1 + *(long *)(*(long *)param_1 + -0x18);
  cVar1 = FUN_0544a090(piVar3);
  if (cVar1 == '\0') {
    while (cVar1 = FUN_0544a0e0(piVar3), cVar1 == '\0') {
      FUN_0544b0b8(param_1,auStack_408,0x400);
      uVar2 = FUN_05306514(*(undefined8 *)(param_1 + 8));
      if ((long)uVar2 < 1) {
        piVar3 = param_1 + *(long *)(*(long *)param_1 + -0x18);
      }
      else {
        update(this,auStack_408,uVar2);
        piVar3 = param_1 + *(long *)(*(long *)param_1 + -0x18);
      }
    }
    FUN_0547335c(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MD5::MD5(std::ifstream&) */

void __thiscall MD5::MD5(MD5 *this,ifstream *param_1)

{
  reset(this);
  update(this,param_1);
  return;
}


/* MD5::update(std::string const&) */

void __thiscall MD5::update(MD5 *this,string *param_1)

{
  uchar *puVar1;
  ulong uVar2;
  
  puVar1 = (uchar *)FUN_0547429c(param_1);
  uVar2 = FUN_05474184(param_1);
  update(this,puVar1,uVar2);
  return;
}


/* MD5::MD5(std::string const&) */

void __thiscall MD5::MD5(MD5 *this,string *param_1)

{
  reset(this);
  update(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MD5::final() */

void __thiscall MD5::final(MD5 *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uchar auStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  encode(this,(uint *)(this + 0x10),auStack_10,8);
  uVar3 = *(uint *)(this + 0x10) >> 3 & 0x3f;
  if (uVar3 < 0x38) {
    uVar3 = 0x38 - uVar3;
  }
  else {
    uVar3 = 0x78 - uVar3;
  }
  update(this,PADDING,(ulong)uVar3);
  update(this,auStack_10,8);
  encode(this,(uint *)this,(uchar *)(this + 0x58),0x10);
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MD5::digest() */

MD5 * __thiscall MD5::digest(MD5 *this)

{
  if (this[0x68] == (MD5)0x0) {
    this[0x68] = (MD5)0x1;
    final(this);
  }
  return this + 0x58;
}


/* MD5::bytesToHexString(unsigned char const*, unsigned long) */

void MD5::bytesToHexString(uchar *param_1,ulong param_2)

{
  ulong uVar1;
  long in_x2;
  
  Set8BytesTo0();
  FUN_0547570c();
  if (in_x2 != 0) {
    uVar1 = param_2 + in_x2;
    do {
      param_2 = param_2 + 1;
      FUN_05475b0c();
      FUN_05475b0c();
    } while (param_2 != uVar1);
  }
  return;
}


/* MD5::toString() */

void MD5::toString(void)

{
  MD5 *in_x0;
  ulong uVar1;
  
  uVar1 = digest(in_x0);
  bytesToHexString((uchar *)in_x0,uVar1);
  return;
}

