// Class: Sexy::MTRand


/* Sexy::MTRand::SetRandAllowed(bool) */

void Sexy::MTRand::SetRandAllowed(bool param_1)

{
  if (param_1) {
    if (0 < DAT_06bbd628) {
      DAT_06bbd628 = DAT_06bbd628 + -1;
    }
    return;
  }
  DAT_06bbd628 = DAT_06bbd628 + 1;
  return;
}


/* Sexy::MTRand::SRand(unsigned long) */

void __thiscall Sexy::MTRand::SRand(MTRand *this,ulong param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  MTRand *pMVar4;
  
  if (param_1 == 0) {
    *(undefined8 *)(this + 0x1390) = 0;
    *(undefined8 *)(this + 5000) = 0x1105;
    *(undefined8 *)this = 0x1105;
  }
  else {
    *(ulong *)(this + 5000) = param_1;
    *(undefined8 *)(this + 0x1390) = 0;
    *(ulong *)this = param_1 & 0xffffffff;
  }
  lVar3 = 1;
  pMVar4 = this;
  do {
    uVar1 = *(ulong *)pMVar4;
    iVar2 = (int)lVar3;
    lVar3 = lVar3 + 1;
    pMVar4 = pMVar4 + 8;
    *(ulong *)pMVar4 = (ulong)(iVar2 + ((uint)uVar1 ^ (uint)(uVar1 >> 0x1e)) * 0x6c078965);
  } while (lVar3 != 0x270);
  *(undefined4 *)(this + 0x1380) = 0x270;
  return;
}


/* Sexy::MTRand::MTRand(unsigned long) */

void __thiscall Sexy::MTRand::MTRand(MTRand *this,ulong param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  MTRand *pMVar4;
  
  if (param_1 == 0) {
    *(undefined8 *)(this + 0x1390) = 0;
    *(undefined8 *)(this + 5000) = 0x1105;
    *(undefined8 *)this = 0x1105;
  }
  else {
    *(ulong *)(this + 5000) = param_1;
    *(undefined8 *)(this + 0x1390) = 0;
    *(ulong *)this = param_1 & 0xffffffff;
  }
  lVar3 = 1;
  pMVar4 = this;
  do {
    uVar1 = *(ulong *)pMVar4;
    iVar2 = (int)lVar3;
    lVar3 = lVar3 + 1;
    pMVar4 = pMVar4 + 8;
    *(ulong *)pMVar4 = (ulong)(iVar2 + ((uint)uVar1 ^ (uint)(uVar1 >> 0x1e)) * 0x6c078965);
  } while (lVar3 != 0x270);
  *(undefined4 *)(this + 0x1380) = 0x270;
  return;
}


/* Sexy::MTRand::MTRand() */

void __thiscall Sexy::MTRand::MTRand(MTRand *this)

{
  SRand(this,0x1105);
  return;
}


/* Sexy::MTRand::NextNoAssert() */

ulong __thiscall Sexy::MTRand::NextNoAssert(MTRand *this)

{
  int iVar1;
  ulong uVar2;
  MTRand *pMVar3;
  MTRand *pMVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x1380);
  if (iVar1 < 0x270) {
    iVar5 = iVar1 + 1;
    uVar2 = *(ulong *)(this + (long)iVar1 * 8);
  }
  else {
    pMVar3 = this;
    do {
      pMVar4 = pMVar3 + 8;
      *(ulong *)pMVar3 =
           *(ulong *)(pMVar3 + 0xc68) ^
           (*(ulong *)(pMVar3 + 8) & 0x7fffffff | *(ulong *)pMVar3 & 0x80000000) >> 1 ^
           *(ulong *)(&DAT_05756ee0 + (*(ulong *)(pMVar3 + 8) & 1) * 8);
      pMVar3 = pMVar4;
    } while (pMVar4 != this + 0x718);
    pMVar3 = this + 0x718;
    do {
      pMVar4 = pMVar3 + 8;
      *(ulong *)pMVar3 =
           *(ulong *)(pMVar3 + -0x718) ^
           (*(ulong *)(pMVar3 + 8) & 0x7fffffff | *(ulong *)pMVar3 & 0x80000000) >> 1 ^
           *(ulong *)(&DAT_05756ee0 + (*(ulong *)(pMVar3 + 8) & 1) * 8);
      pMVar3 = pMVar4;
    } while (pMVar4 != this + 0x1378);
    iVar5 = 1;
    uVar2 = *(ulong *)this;
    *(long *)(this + 0x1390) = *(long *)(this + 0x1390) + 1;
    *(ulong *)(this + 0x1378) =
         *(ulong *)(this + 0xc60) ^
         (uVar2 & 0x7fffffff | *(ulong *)(this + 0x1378) & 0x80000000) >> 1 ^
         *(ulong *)(&DAT_05756ee0 + (uVar2 & 1) * 8);
  }
  uVar2 = uVar2 ^ uVar2 >> 0xb;
  *(int *)(this + 0x1380) = iVar5;
  uVar2 = (uVar2 & 0x13a58ad) << 7 ^ uVar2;
  uVar2 = (uVar2 & 0x1df8c) << 0xf ^ uVar2;
  return (uVar2 ^ uVar2 >> 0x12) & 0x7fffffff;
}


/* Sexy::MTRand::Next() */

ulong __thiscall Sexy::MTRand::Next(MTRand *this)

{
  int iVar1;
  ulong uVar2;
  MTRand *pMVar3;
  MTRand *pMVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x1380);
  if (iVar1 < 0x270) {
    iVar5 = iVar1 + 1;
    uVar2 = *(ulong *)(this + (long)iVar1 * 8);
  }
  else {
    pMVar3 = this;
    do {
      pMVar4 = pMVar3 + 8;
      *(ulong *)pMVar3 =
           *(ulong *)(pMVar3 + 0xc68) ^
           (*(ulong *)(pMVar3 + 8) & 0x7fffffff | *(ulong *)pMVar3 & 0x80000000) >> 1 ^
           *(ulong *)(&DAT_05756ee0 + (*(ulong *)(pMVar3 + 8) & 1) * 8);
      pMVar3 = pMVar4;
    } while (pMVar4 != this + 0x718);
    pMVar3 = this + 0x718;
    do {
      pMVar4 = pMVar3 + 8;
      *(ulong *)pMVar3 =
           *(ulong *)(pMVar3 + -0x718) ^
           (*(ulong *)(pMVar3 + 8) & 0x7fffffff | *(ulong *)pMVar3 & 0x80000000) >> 1 ^
           *(ulong *)(&DAT_05756ee0 + (*(ulong *)(pMVar3 + 8) & 1) * 8);
      pMVar3 = pMVar4;
    } while (pMVar4 != this + 0x1378);
    iVar5 = 1;
    uVar2 = *(ulong *)this;
    *(long *)(this + 0x1390) = *(long *)(this + 0x1390) + 1;
    *(ulong *)(this + 0x1378) =
         *(ulong *)(this + 0xc60) ^
         (uVar2 & 0x7fffffff | *(ulong *)(this + 0x1378) & 0x80000000) >> 1 ^
         *(ulong *)(&DAT_05756ee0 + (uVar2 & 1) * 8);
  }
  uVar2 = uVar2 ^ uVar2 >> 0xb;
  *(int *)(this + 0x1380) = iVar5;
  uVar2 = (uVar2 & 0x13a58ad) << 7 ^ uVar2;
  uVar2 = (uVar2 & 0x1df8c) << 0xf ^ uVar2;
  return (uVar2 ^ uVar2 >> 0x12) & 0x7fffffff;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MTRand::SRand(std::string const&) */

void Sexy::MTRand::SRand(string *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_18);
  iVar1 = FUN_054743b0(asStack_18,0x20,0);
  if (iVar1 != -1) {
    FUN_05475ffc(asStack_10,asStack_18,0,(long)iVar1);
    pcVar4 = (char *)FUN_0547429c(asStack_10);
    iVar2 = atoi(pcVar4);
    std::string::~string(asStack_10);
    uVar5 = FUN_05474184(asStack_18);
    FUN_05475ffc(asStack_10,asStack_18,(long)(iVar1 + 1),uVar5);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    iVar1 = FUN_054743b0(asStack_18,0x20,0);
    if (iVar1 != -1) {
      FUN_05475ffc(asStack_10,asStack_18,0,(long)iVar1);
      pcVar4 = (char *)FUN_0547429c(asStack_10);
      iVar3 = atoi(pcVar4);
      std::string::~string(asStack_10);
      uVar5 = FUN_05474184(asStack_18);
      FUN_05475ffc(asStack_10,asStack_18,(long)(iVar1 + 1),uVar5);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      lVar6 = FUN_05474184(asStack_18);
      if (lVar6 != 0) {
        lVar6 = 0;
        pcVar4 = (char *)FUN_0547429c(asStack_18);
        iVar1 = atoi(pcVar4);
        SRand((MTRand *)param_1,(long)iVar2);
        if ((long)iVar3 != 0) {
          do {
            *(undefined4 *)(param_1 + 0x1380) = 0x270;
            lVar6 = lVar6 + 1;
            NextNoAssert((MTRand *)param_1);
          } while (iVar3 != lVar6);
        }
        *(int *)(param_1 + 0x1380) = iVar1;
        goto LAB_0516c748;
      }
    }
  }
  SRand((MTRand *)param_1,0x1105);
LAB_0516c748:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MTRand::MTRand(std::string const&) */

void __thiscall Sexy::MTRand::MTRand(MTRand *this,string *param_1)

{
  SRand((string *)this);
  *(undefined4 *)(this + 0x1380) = 0x271;
  return;
}


/* Sexy::MTRand::NextNoAssert(unsigned long) */

long __thiscall Sexy::MTRand::NextNoAssert(MTRand *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = NextNoAssert(this);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2 / param_1;
  }
  return uVar2 - uVar1 * param_1;
}


/* Sexy::MTRand::Next(unsigned long) */

long __thiscall Sexy::MTRand::Next(MTRand *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = NextNoAssert(this);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2 / param_1;
  }
  return uVar2 - uVar1 * param_1;
}


/* Sexy::MTRand::Next(int) */

void __thiscall Sexy::MTRand::Next(MTRand *this,int param_1)

{
  Next(this,(long)param_1);
  return;
}


/* Sexy::MTRand::NextNoAssert(float) */

float __thiscall Sexy::MTRand::NextNoAssert(MTRand *this,float param_1)

{
  ulong uVar1;
  
  uVar1 = NextNoAssert(this);
  return param_1 * 4.656613e-10 * (float)uVar1;
}


/* Sexy::MTRand::Next(float) */

float Sexy::MTRand::Next(float param_1)

{
  ulong uVar1;
  MTRand *in_x0;
  
  uVar1 = NextNoAssert(in_x0);
  return param_1 * 4.656613e-10 * (float)uVar1;
}


/* Sexy::MTRand::NextRange(float, float) */

float Sexy::MTRand::NextRange(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)Next(param_2 - param_1);
  return fVar1 + param_1;
}


/* Sexy::MTRand::Serialize() */

void Sexy::MTRand::Serialize(void)

{
  long in_x0;
  
  StrFormat("%u %u %d",*(undefined8 *)(in_x0 + 5000),*(undefined8 *)(in_x0 + 0x1390),
            (ulong)*(uint *)(in_x0 + 0x1380));
  return;
}

