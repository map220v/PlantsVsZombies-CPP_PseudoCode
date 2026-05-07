// Class: BigInt


/* BigInt::IsNegative() const */

BigInt __thiscall BigInt::IsNegative(BigInt *this)

{
  return this[8];
}


/* BigInt::NumWords() const */

undefined4 __thiscall BigInt::NumWords(BigInt *this)

{
  return *(undefined4 *)(this + 0x18);
}


/* BigInt::~BigInt() */

void __thiscall BigInt::~BigInt(BigInt *this)

{
  *(undefined ***)this = &PTR__BigInt_06a36260;
  if (*(ColourFit **)(this + 0x10) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x10));
    return;
  }
  return;
}


/* BigInt::~BigInt() */

void __thiscall BigInt::~BigInt(BigInt *this)

{
  ~BigInt(this);
  AK::FreeHook(this);
  return;
}


/* BigInt::BigInt() */

void __thiscall BigInt::BigInt(BigInt *this)

{
  this[8] = (BigInt)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__BigInt_06a36260;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* BigInt::Resize(int) */

void __thiscall BigInt::Resize(BigInt *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  void *__dest;
  
  uVar2 = (long)param_1 << 1;
  if (0x3f80000000000000 < (ulong)(long)param_1) {
    uVar2 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x1c) = param_1;
  __dest = operator_new__(uVar2);
  uVar1 = *(uint *)(this + 0x18);
  if (0 < (int)uVar1) {
    memcpy(__dest,*(void **)(this + 0x10),
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1);
  }
  if (*(ColourFit **)(this + 0x10) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x10));
  }
  *(void **)(this + 0x10) = __dest;
  return;
}


/* BigInt::DoubleSize() */

void __thiscall BigInt::DoubleSize(BigInt *this)

{
  if (*(int *)(this + 0x1c) != 0) {
    Resize(this,*(int *)(this + 0x1c) << 1);
    return;
  }
  Resize(this,8);
  return;
}


/* BigInt::Trim() */

void __thiscall BigInt::Trim(BigInt *this)

{
  short *psVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x18);
  if ((0 < iVar3) && (lVar2 = *(long *)(this + 0x10) + (long)iVar3 * 2, *(short *)(lVar2 + -2) == 0)
     ) {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      psVar1 = (short *)(lVar2 + -4);
      lVar2 = lVar2 + -2;
    } while (*psVar1 == 0);
    *(int *)(this + 0x18) = iVar3;
  }
  return;
}


/* BigInt::BigInt(int) */

void __thiscall BigInt::BigInt(BigInt *this,int param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &PTR__BigInt_06a36260;
  piVar1 = operator_new__(0x10);
  *(int **)(this + 0x10) = piVar1;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x18) = 2;
  if (-1 < param_1) {
    this[8] = (BigInt)0x0;
    *piVar1 = param_1;
    Trim(this);
    return;
  }
  this[8] = (BigInt)0x1;
  *piVar1 = -param_1;
  Trim(this);
  return;
}


/* BigInt::BigInt(long) */

void __thiscall BigInt::BigInt(BigInt *this,long param_1)

{
  BigInt BVar1;
  undefined2 *puVar2;
  
  *(undefined ***)this = &PTR__BigInt_06a36260;
  puVar2 = operator_new__(0x10);
  *(undefined2 **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x18) = 4;
  BVar1 = (BigInt)(param_1 < 0);
  if ((bool)BVar1) {
    param_1 = -param_1;
  }
  this[8] = BVar1;
  *puVar2 = (short)param_1;
  puVar2[1] = (short)((ulong)param_1 >> 0x10);
  puVar2[2] = (short)((ulong)param_1 >> 0x20);
  puVar2[3] = (short)((ulong)param_1 >> 0x30);
  Trim(this);
  return;
}


/* BigInt::SetZero() */

void __thiscall BigInt::SetZero(BigInt *this)

{
  this[8] = (BigInt)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* BigInt::IsEven() */

ushort __thiscall BigInt::IsEven(BigInt *this)

{
  ushort uVar1;
  
  uVar1 = 1;
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = **(ushort **)(this + 0x10) & 1 ^ 1;
  }
  return uVar1;
}


/* BigInt::IsOdd() */

byte __thiscall BigInt::IsOdd(BigInt *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(this + 0x18) != 0) {
    bVar1 = **(byte **)(this + 0x10) & 1;
  }
  return bVar1;
}


/* BigInt::HighWord() const */

undefined2 __thiscall BigInt::HighWord(BigInt *this)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = *(undefined2 *)(*(long *)(this + 0x10) + (long)*(int *)(this + 0x18) * 2 + -2);
  }
  return uVar1;
}


/* BigInt::NumBits() const */

int __thiscall BigInt::NumBits(BigInt *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = HighWord(this);
  if ((uVar1 >> 0xf & 1) == 0) {
    if (((uVar1 & 0xffff) >> 0xe & 1) == 0) {
      if (((uVar1 & 0xffff) >> 0xd & 1) == 0) {
        uVar3 = uVar1 & 0xffff;
        if ((uVar3 >> 0xc & 1) == 0) {
          if ((uVar3 >> 0xb & 1) == 0) {
            if ((uVar3 >> 10 & 1) == 0) {
              if ((uVar3 >> 9 & 1) == 0) {
                uVar3 = uVar1 & 0xffff;
                if ((uVar3 >> 8 & 1) == 0) {
                  if ((uVar3 >> 7 & 1) == 0) {
                    if ((uVar3 >> 6 & 1) == 0) {
                      if ((uVar3 >> 5 & 1) == 0) {
                        if ((uVar3 >> 4 & 1) == 0) {
                          if ((uVar3 >> 3 & 1) == 0) {
                            if ((uVar3 >> 2 & 1) == 0) {
                              if ((uVar1 >> 1 & 1) == 0) {
                                iVar2 = 0;
                                if ((uVar1 & 1) == 0) {
                                  return 0;
                                }
                              }
                              else {
                                iVar2 = 1;
                              }
                            }
                            else {
                              iVar2 = 2;
                            }
                          }
                          else {
                            iVar2 = 3;
                          }
                        }
                        else {
                          iVar2 = 4;
                        }
                      }
                      else {
                        iVar2 = 5;
                      }
                    }
                    else {
                      iVar2 = 6;
                    }
                  }
                  else {
                    iVar2 = 7;
                  }
                }
                else {
                  iVar2 = 8;
                }
              }
              else {
                iVar2 = 9;
              }
            }
            else {
              iVar2 = 10;
            }
          }
          else {
            iVar2 = 0xb;
          }
        }
        else {
          iVar2 = 0xc;
        }
      }
      else {
        iVar2 = 0xd;
      }
    }
    else {
      iVar2 = 0xe;
    }
  }
  else {
    iVar2 = 0xf;
  }
  return iVar2 + *(int *)(this + 0x18) * 0x10 + -0xf;
}


/* BigInt::GetWord(int) const */

undefined2 __thiscall BigInt::GetWord(BigInt *this,int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < *(int *)(this + 0x18)) {
    uVar1 = *(undefined2 *)(*(long *)(this + 0x10) + (long)param_1 * 2);
  }
  return uVar1;
}


/* BigInt::SetWord(int, unsigned short) */

void __thiscall BigInt::SetWord(BigInt *this,int param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x18);
  while (iVar1 = iVar2, iVar2 < param_1) {
    while (iVar1 < *(int *)(this + 0x1c)) {
      iVar2 = iVar1 + 1;
      *(int *)(this + 0x18) = iVar2;
      *(undefined2 *)(*(long *)(this + 0x10) + (long)iVar1 * 2) = 0;
      iVar1 = iVar2;
      if (param_1 <= iVar2) goto LAB_052ff24c;
    }
    DoubleSize(this);
    iVar1 = *(int *)(this + 0x18);
    iVar2 = iVar1 + 1;
    *(int *)(this + 0x18) = iVar2;
    *(undefined2 *)(*(long *)(this + 0x10) + (long)iVar1 * 2) = 0;
  }
LAB_052ff24c:
  if (iVar2 <= param_1) {
    if (*(int *)(this + 0x1c) <= iVar2) {
      DoubleSize(this);
      iVar2 = *(int *)(this + 0x18);
    }
    *(int *)(this + 0x18) = iVar2 + 1;
    *(ushort *)(*(long *)(this + 0x10) + (long)iVar2 * 2) = param_2;
    return;
  }
  *(ushort *)(*(long *)(this + 0x10) + (long)param_1 * 2) = param_2;
  return;
}


/* BigInt::ShiftLeft(int) */

BigInt * __thiscall BigInt::ShiftLeft(BigInt *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  iVar3 = NumWords(this);
  iVar5 = param_1 + 0xf;
  if (-1 < param_1) {
    iVar5 = param_1;
  }
  uVar2 = iVar5 >> 4;
  if (0 < (int)uVar2) {
    uVar11 = *(uint *)(this + 0x18);
    if (*(int *)(this + 0x1c) < (int)(uVar11 + uVar2)) {
      do {
        DoubleSize(this);
        uVar11 = *(uint *)(this + 0x18);
      } while (*(int *)(this + 0x1c) < (int)(uVar11 + uVar2));
    }
    memcpy((void *)((long)*(void **)(this + 0x10) + (long)(int)uVar2 * 2),*(void **)(this + 0x10),
           -(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1);
    uVar11 = (uVar2 - 8 >> 3) + 1;
    puVar8 = *(undefined8 **)(this + 0x10);
    uVar4 = uVar11 * 8;
    uVar6 = (ulong)uVar4;
    if (uVar2 - 1 < 7) {
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      puVar10 = puVar8;
      do {
        puVar10[1] = 0;
        *puVar10 = 0;
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 2;
      } while (uVar9 < uVar11);
      if (uVar4 == uVar2) {
        *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar2;
        goto LAB_052ff374;
      }
    }
    uVar7 = -(uVar6 >> 0x1f) & 0xfffffffe00000000 | uVar6 << 1;
    iVar5 = (int)uVar6;
    *(undefined2 *)((long)puVar8 + uVar7) = 0;
    if (iVar5 + 1 < (int)uVar2) {
      *(undefined2 *)((long)puVar8 + uVar7 + 2) = 0;
      if ((((iVar5 + 2 < (int)uVar2) &&
           (*(undefined2 *)((long)puVar8 + uVar7 + 4) = 0, iVar5 + 3 < (int)uVar2)) &&
          (*(undefined2 *)((long)puVar8 + uVar7 + 6) = 0, iVar5 + 4 < (int)uVar2)) &&
         ((*(undefined2 *)((long)puVar8 + uVar7 + 8) = 0, iVar5 + 5 < (int)uVar2 &&
          (*(undefined2 *)((long)puVar8 + uVar7 + 10) = 0, iVar5 + 6 < (int)uVar2)))) {
        *(undefined2 *)((long)puVar8 + uVar7 + 0xc) = 0;
      }
    }
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar2;
  }
LAB_052ff374:
  if (0 < iVar3) {
    iVar5 = 0;
    uVar11 = uVar2;
    do {
      uVar4 = GetWord(this,uVar11);
      iVar1 = ((uVar4 & 0xffff) << (ulong)(param_1 % 0x10 & 0x1f)) + iVar5;
      uVar4 = uVar11 + 1;
      iVar5 = iVar1 >> 0x10;
      SetWord(this,uVar11,(ushort)iVar1);
      uVar11 = uVar4;
    } while (uVar4 != uVar2 + iVar3);
    if (iVar5 != 0) {
      SetWord(this,uVar4,(ushort)((uint)iVar1 >> 0x10));
    }
  }
  return this;
}


/* BigInt::ShiftRight(int) */

BigInt * __thiscall BigInt::ShiftRight(BigInt *this,int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1 + 0xf;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  iVar3 = iVar3 >> 4;
  if (0 < iVar3) {
    if (*(int *)(this + 0x18) <= iVar3) {
      *(undefined4 *)(this + 0x18) = 0;
      this[8] = (BigInt)0x0;
      return this;
    }
    uVar5 = *(int *)(this + 0x18) - iVar3;
    *(uint *)(this + 0x18) = uVar5;
    memcpy(*(void **)(this + 0x10),(void *)((long)*(void **)(this + 0x10) + (long)iVar3 * 2),
           -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1);
  }
  iVar3 = NumWords(this);
  if (-1 < iVar3 + -1) {
    uVar5 = 0;
    iVar3 = iVar3 + -1;
    do {
      uVar4 = GetWord(this,iVar3);
      sVar2 = (short)uVar5;
      iVar1 = iVar3 + -1;
      uVar5 = (uVar4 & 0xffff) << (ulong)(0x10U - param_1 % 0x10 & 0x1f) & 0xffff;
      SetWord(this,iVar3,(short)((int)(uVar4 & 0xffff) >> (param_1 % 0x10 & 0x1fU)) + sVar2);
      iVar3 = iVar1;
    } while (iVar1 != -1);
  }
  Trim(this);
  return this;
}


/* BigInt::IsBitSet(int) const */

uint __thiscall BigInt::IsBitSet(BigInt *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + 0xf;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  uVar2 = 0;
  if (iVar1 >> 4 < *(int *)(this + 0x18)) {
    uVar2 = (int)(uint)*(ushort *)(*(long *)(this + 0x10) + (long)(iVar1 >> 4) * 2) >>
            (param_1 % 0x10 & 0x1fU) & 1;
  }
  return uVar2;
}


/* BigInt::SetBit(int) */

void __thiscall BigInt::SetBit(BigInt *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  
  iVar2 = param_1 + 0xf;
  if (-1 < param_1) {
    iVar2 = param_1;
  }
  uVar1 = iVar2 >> 4;
  if ((int)uVar1 < *(int *)(this + 0x18)) {
    uVar3 = (ushort)(1 << (ulong)(param_1 % 0x10 & 0x1f));
  }
  else {
    uVar3 = (ushort)(1 << (ulong)(param_1 % 0x10 & 0x1f));
    SetWord(this,uVar1,uVar3);
  }
  uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  *(ushort *)(*(long *)(this + 0x10) + uVar4) = uVar3 | *(ushort *)(*(long *)(this + 0x10) + uVar4);
  return;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

undefined8 __thiscall BigInt::operator==(BigInt *this,BigInt *param_1)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  iVar2 = *(int *)(this + 0x18);
  if (iVar2 != *(int *)(param_1 + 0x18)) {
    return 0;
  }
  if (0 < iVar2) {
    psVar4 = *(short **)(this + 0x10);
    psVar3 = *(short **)(param_1 + 0x10);
    if (*psVar4 != *psVar3) {
      return 0;
    }
    psVar1 = psVar4 + (iVar2 - 1);
    while (psVar3 = psVar3 + 1, psVar4 != psVar1) {
      psVar4 = psVar4 + 1;
      if (*psVar4 != *psVar3) {
        return 0;
      }
    }
  }
  return 1;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

byte __thiscall BigInt::operator!=(BigInt *this,BigInt *param_1)

{
  byte bVar1;
  
  bVar1 = operator==(this,param_1);
  return bVar1 ^ 1;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

undefined8 __thiscall BigInt::operator<(BigInt *this,BigInt *param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  
  cVar6 = IsNegative(this);
  if (cVar6 == '\0') {
    cVar6 = IsNegative(param_1);
    if (cVar6 == '\0') {
      iVar2 = *(int *)(this + 0x18);
      if (iVar2 <= *(int *)(param_1 + 0x18)) {
        if (iVar2 < *(int *)(param_1 + 0x18)) {
          return 1;
        }
        uVar5 = iVar2 - 1;
        if (-1 < (int)uVar5) {
          uVar8 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
          uVar3 = *(ushort *)(*(long *)(this + 0x10) + uVar8);
          uVar4 = *(ushort *)(*(long *)(param_1 + 0x10) + uVar8);
          if (uVar3 < uVar4) {
            return 1;
          }
          if (uVar3 <= uVar4) {
            lVar7 = 0;
            do {
              lVar1 = lVar7 + uVar8;
              if (lVar7 == (ulong)uVar5 * -2) {
                return 0;
              }
              uVar3 = *(ushort *)(*(long *)(this + 0x10) + lVar1 + -2);
              lVar7 = lVar7 + -2;
              uVar4 = *(ushort *)(*(long *)(param_1 + 0x10) + lVar1 + -2);
              if (uVar3 < uVar4) {
                return 1;
              }
            } while (uVar3 <= uVar4);
          }
        }
      }
    }
    return 0;
  }
  cVar6 = IsNegative(param_1);
  if (cVar6 == '\0') {
    return 1;
  }
  iVar2 = *(int *)(this + 0x18);
  if (*(int *)(param_1 + 0x18) < iVar2) {
    return 1;
  }
  if (iVar2 < *(int *)(param_1 + 0x18)) {
    return 0;
  }
  uVar5 = iVar2 - 1;
  if ((int)uVar5 < 0) {
    return 0;
  }
  uVar8 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
  uVar3 = *(ushort *)(*(long *)(this + 0x10) + uVar8);
  uVar4 = *(ushort *)(*(long *)(param_1 + 0x10) + uVar8);
  if (uVar3 < uVar4) {
    return 0;
  }
  if (uVar4 < uVar3) {
    return 1;
  }
  lVar7 = 0;
  while( true ) {
    lVar1 = lVar7 + uVar8;
    if (lVar7 == (ulong)uVar5 * -2) {
      return 0;
    }
    uVar3 = *(ushort *)(*(long *)(this + 0x10) + lVar1 + -2);
    lVar7 = lVar7 + -2;
    uVar4 = *(ushort *)(*(long *)(param_1 + 0x10) + lVar1 + -2);
    if (uVar3 < uVar4) break;
    if (uVar4 < uVar3) {
      return 1;
    }
  }
  return 0;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

byte __thiscall BigInt::operator>(BigInt *this,BigInt *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = operator==(this,param_1);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = operator<(this,param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

byte __thiscall BigInt::operator<=(BigInt *this,BigInt *param_1)

{
  byte bVar1;
  
  bVar1 = operator>(this,param_1);
  return bVar1 ^ 1;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

byte __thiscall BigInt::operator>=(BigInt *this,BigInt *param_1)

{
  byte bVar1;
  
  bVar1 = operator<(this,param_1);
  return bVar1 ^ 1;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

BigInt * __thiscall BigInt::operator=(BigInt *this,BigInt *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  void *__dest;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x1c);
  *(int *)(this + 0x1c) = iVar4;
  *(undefined4 *)(this + 0x18) = uVar1;
  if (*(ColourFit **)(this + 0x10) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x10));
    iVar4 = *(int *)(this + 0x1c);
  }
  uVar3 = (long)iVar4 << 1;
  if (0x3f80000000000000 < (ulong)(long)iVar4) {
    uVar3 = 0xffffffffffffffff;
  }
  __dest = operator_new__(uVar3);
  *(void **)(this + 0x10) = __dest;
  uVar2 = *(uint *)(this + 0x18);
  if (0 < (int)uVar2) {
    memcpy(__dest,*(void **)(param_1 + 0x10),
           -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
  }
  this[8] = param_1[8];
  return this;
}


/* BigInt::BigInt(BigInt const&) */

void __thiscall BigInt::BigInt(BigInt *this,BigInt *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__BigInt_06a36260;
  *(undefined4 *)(this + 0x1c) = 0;
  operator=(this,param_1);
  return;
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE() const */

BigInt * __thiscall BigInt::operator-(BigInt *this)

{
  BigInt *in_x8;
  
  BigInt(in_x8,this);
  in_x8[8] = (BigInt)((byte)in_x8[8] ^ 1);
  return in_x8;
}


/* BigInt::Divide(BigInt const&, BigInt&, BigInt&) const */

void __thiscall BigInt::Divide(BigInt *this,BigInt *param_1,BigInt *param_2,BigInt *param_3)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  SetZero(param_2);
  cVar5 = operator>(param_1,this);
  if (cVar5 != '\0') {
    operator=(param_3,this);
    return;
  }
  iVar8 = NumBits(this);
  iVar9 = NumBits(param_1);
  uVar16 = iVar8 - iVar9;
  operator=(param_3,this);
  if (*(int *)(param_3 + 0x1c) == 0) {
    DoubleSize(param_3);
  }
  ShiftRight(param_3,uVar16 + 1);
  if (-1 < (int)uVar16) {
    do {
      iVar8 = *(int *)(param_3 + 0x18);
      if (0 < iVar8) {
        lVar11 = 0;
        lVar13 = *(long *)(param_3 + 0x10);
        iVar9 = 0;
        do {
          iVar9 = iVar9 + (uint)*(ushort *)(lVar13 + lVar11 * 2) * 2;
          *(short *)(lVar13 + lVar11 * 2) = (short)iVar9;
          lVar11 = lVar11 + 1;
          iVar9 = iVar9 >> 0x10;
        } while ((int)lVar11 < iVar8);
        if (iVar9 != 0) {
          if (*(int *)(param_3 + 0x1c) == iVar8) {
            DoubleSize(param_3);
            lVar13 = *(long *)(param_3 + 0x10);
            iVar8 = *(int *)(param_3 + 0x18);
          }
          *(int *)(param_3 + 0x18) = iVar8 + 1;
          *(undefined2 *)(lVar13 + (long)iVar8 * 2) = 1;
        }
      }
      uVar15 = (int)uVar16 >> 4;
      uVar17 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
      uVar3 = uVar16 & 0xf;
      if (((int)(uint)*(ushort *)(*(long *)(this + 0x10) + uVar17) >> uVar3 & 1U) != 0) {
        if (*(int *)(param_3 + 0x18) == 0) {
          *(undefined4 *)(param_3 + 0x18) = 1;
          **(undefined2 **)(param_3 + 0x10) = 1;
        }
        else {
          **(ushort **)(param_3 + 0x10) = **(ushort **)(param_3 + 0x10) | 1;
        }
      }
      cVar5 = operator>=(param_3,param_1);
      if (cVar5 != '\0') {
        uVar4 = *(uint *)(param_2 + 0x18);
        if ((int)uVar15 < (int)uVar4) {
          *(ushort *)(*(long *)(param_2 + 0x10) + uVar17) =
               (ushort)(1 << (ulong)uVar3) | *(ushort *)(*(long *)(param_2 + 0x10) + uVar17);
        }
        else {
          if (*(int *)(param_2 + 0x1c) <= (int)uVar15) {
            do {
              DoubleSize(param_2);
            } while (*(int *)(param_2 + 0x1c) <= (int)uVar15);
            uVar4 = *(uint *)(param_2 + 0x18);
          }
          if ((int)uVar4 < (int)uVar15) {
            iVar9 = uVar15 - uVar4;
            uVar2 = (iVar9 - 8U >> 3) + 1;
            lVar11 = *(long *)(param_2 + 0x10);
            iVar8 = uVar2 * 8;
            if (6 < (uVar15 - 1) - uVar4) {
              uVar10 = 0;
              puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar4 * 2);
              do {
                uVar10 = uVar10 + 1;
                puVar12[1] = 0;
                *puVar12 = 0;
                puVar12 = puVar12 + 2;
              } while (uVar10 < uVar2);
              uVar4 = uVar4 + iVar8;
              if (iVar8 == iVar9) goto LAB_052ffbc8;
            }
            uVar17 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
            *(undefined2 *)(lVar11 + uVar17) = 0;
            if ((int)(uVar4 + 1) < (int)uVar15) {
              lVar13 = lVar11 + uVar17;
              *(undefined2 *)(lVar13 + 2) = 0;
              if (((((int)(uVar4 + 2) < (int)uVar15) &&
                   (*(undefined2 *)(lVar13 + 4) = 0, (int)(uVar4 + 3) < (int)uVar15)) &&
                  (*(undefined2 *)(lVar13 + 6) = 0, (int)(uVar4 + 4) < (int)uVar15)) &&
                 ((*(undefined2 *)(lVar13 + 8) = 0, (int)(uVar4 + 5) < (int)uVar15 &&
                  (*(undefined2 *)(lVar13 + 10) = 0, (int)(uVar4 + 6) < (int)uVar15)))) {
                *(undefined2 *)(lVar13 + 0xc) = 0;
              }
            }
          }
          else {
            lVar11 = *(long *)(param_2 + 0x10);
            uVar15 = uVar4;
          }
LAB_052ffbc8:
          *(uint *)(param_2 + 0x18) = uVar15 + 1;
          *(short *)(lVar11 + (long)(int)uVar15 * 2) = (short)(1 << (ulong)uVar3);
        }
        uVar3 = *(uint *)(param_1 + 0x18);
        if (0 < (int)uVar3) {
          lVar11 = 0;
          lVar14 = *(long *)(param_3 + 0x10);
          lVar13 = *(long *)(param_1 + 0x10);
          uVar15 = 0;
          do {
            iVar8 = ((uint)*(ushort *)(lVar14 + lVar11 * 2) - (uint)*(ushort *)(lVar13 + lVar11 * 2)
                    ) - uVar15;
            *(short *)(lVar14 + lVar11 * 2) = (short)iVar8;
            lVar11 = lVar11 + 1;
            uVar15 = (uint)(iVar8 < 0);
          } while ((int)lVar11 < (int)uVar3);
          if (uVar15 != 0) {
            uVar17 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
            iVar8 = *(ushort *)(lVar14 + uVar17) - 1;
            if (iVar8 == -1) {
              iVar8 = 0xfffe;
            }
            *(short *)(lVar14 + uVar17) = (short)iVar8;
          }
        }
        iVar8 = *(int *)(param_3 + 0x18);
        if ((0 < iVar8) &&
           (lVar11 = *(long *)(param_3 + 0x10) + (long)iVar8 * 2, *(short *)(lVar11 + -2) == 0)) {
          do {
            iVar8 = iVar8 + -1;
            if (iVar8 == 0) break;
            psVar1 = (short *)(lVar11 + -4);
            lVar11 = lVar11 + -2;
          } while (*psVar1 == 0);
          *(int *)(param_3 + 0x18) = iVar8;
        }
      }
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0xffffffff);
  }
  bVar6 = IsNegative(this);
  bVar7 = IsNegative(param_1);
  param_2[8] = (BigInt)(bVar7 ^ bVar6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator/(BigInt *this,BigInt *param_1)

{
  BigInt *in_x8;
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(in_x8);
  BigInt(aBStack_28);
  Divide(this,param_1,in_x8,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator/=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator/(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator%(BigInt *this,BigInt *param_1)

{
  BigInt *in_x8;
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(aBStack_28);
  BigInt(in_x8);
  Divide(this,param_1,aBStack_28,in_x8);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator%=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator%(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall BigInt::operator<<(BigInt *this,int param_1)

{
  BigInt *in_x8;
  
  BigInt(in_x8,this);
  ShiftLeft(in_x8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall BigInt::operator<<=(BigInt *this,int param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator<<(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* BigInt::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall BigInt::operator>>(BigInt *this,int param_1)

{
  BigInt *in_x8;
  
  BigInt(in_x8,this);
  ShiftRight(in_x8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall BigInt::operator>>=(BigInt *this,int param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator>>(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::Gcd(BigInt const&) */

void BigInt::Gcd(BigInt *param_1)

{
  BigInt *in_x1;
  BigInt *in_x8;
  BigInt aBStack_88 [32];
  BigInt aBStack_68 [8];
  undefined1 local_60;
  int local_50;
  BigInt aBStack_48 [8];
  undefined1 local_40;
  int local_30;
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(aBStack_88);
  BigInt(aBStack_68,param_1);
  BigInt(aBStack_48,in_x1);
  local_60 = 0;
  local_40 = 0;
  if ((local_50 == 0) && (local_30 == 0)) {
    BigInt(in_x8,0);
  }
  else {
    operator=(aBStack_88,aBStack_48);
    while (0 < local_50) {
      operator=(aBStack_88,aBStack_68);
      operator%(aBStack_48,aBStack_68);
      operator=(aBStack_68,aBStack_28);
      ~BigInt(aBStack_28);
      operator=(aBStack_48,aBStack_88);
    }
    BigInt(in_x8,aBStack_88);
  }
  ~BigInt(aBStack_48);
  ~BigInt(aBStack_68);
  ~BigInt(aBStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BigInt::ToInt() const */

int __thiscall BigInt::ToInt(BigInt *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (*(int *)(this + 0x18) != 0) {
    if (*(int *)(this + 0x18) == 1) {
      uVar3 = (uint)**(ushort **)(this + 0x10);
    }
    else {
      uVar3 = **(uint **)(this + 0x10);
    }
    uVar1 = IsNegative(this);
    iVar2 = (-(uVar1 & 0xff) ^ uVar3) + (uVar1 & 0xff);
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::ToHex() const */

void BigInt::ToHex(void)

{
  uint uVar1;
  long in_x0;
  int iVar2;
  string *in_x8;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  string asStack_18 [8];
  char acStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x18) == 0) {
    std::string::string(in_x8,"0");
    nop();
  }
  else {
    Set8BytesTo0(asStack_18);
    iVar2 = *(int *)(in_x0 + 0x18);
    uVar1 = iVar2 - 1;
    uVar4 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar4 << 1;
      while( true ) {
        iVar3 = (int)uVar4;
        uVar4 = (ulong)*(ushort *)(*(long *)(in_x0 + 0x10) + uVar5);
        if (iVar2 + -1 == iVar3) {
          sprintf(acStack_10,"%X",uVar4);
          FUN_05475ad8(asStack_18,acStack_10);
        }
        else {
          sprintf(acStack_10,"%04X",uVar4);
          FUN_05475ad8(asStack_18,acStack_10);
        }
        if (iVar3 == 0) break;
        uVar5 = uVar5 - 2;
        uVar4 = (ulong)(iVar3 - 1);
        iVar2 = *(int *)(in_x0 + 0x18);
      }
    }
    FUN_05474148();
    std::string::~string(asStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator+(BigInt *this,BigInt *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  BigInt *in_x8;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = IsNegative(param_1);
  if (cVar4 == '\0') {
    cVar4 = IsNegative(this);
    if (cVar4 == '\0') {
      BigInt(aBStack_28);
      local_30 = NumWords(this);
      local_2c = NumWords(param_1);
      piVar7 = eastl::max_alt<int>(&local_30,&local_2c);
      iVar3 = *piVar7;
      iVar9 = 0;
      iVar8 = 0;
      if (0 < iVar3) {
        do {
          uVar5 = GetWord(this,iVar8);
          uVar6 = GetWord(param_1,iVar8);
          iVar2 = (uVar5 & 0xffff) + (uVar6 & 0xffff) + iVar9;
          iVar1 = iVar8 + 1;
          iVar9 = iVar2 >> 0x10;
          SetWord(aBStack_28,iVar8,(ushort)iVar2);
          iVar8 = iVar1;
        } while (iVar1 != iVar3);
        if (iVar9 == 1) {
          SetWord(aBStack_28,iVar1,(ushort)((uint)iVar2 >> 0x10));
        }
      }
      BigInt(in_x8,aBStack_28);
      ~BigInt(aBStack_28);
    }
    else {
      operator-(this);
      operator-(param_1,aBStack_28);
      ~BigInt(aBStack_28);
    }
  }
  else {
    operator-(param_1);
    operator-(this,aBStack_28);
    ~BigInt(aBStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator-(BigInt *this,BigInt *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ushort uVar7;
  BigInt *in_x8;
  int iVar8;
  int iVar9;
  int local_4c;
  int local_48 [8];
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsNegative(param_1);
  if (cVar3 == '\0') {
    cVar3 = IsNegative(this);
    if (cVar3 == '\0') {
      cVar3 = operator>(param_1,this);
      if (cVar3 == '\0') {
        BigInt(aBStack_28);
        local_4c = NumWords(this);
        local_48[0] = NumWords(param_1);
        piVar6 = eastl::max_alt<int>(&local_4c,local_48);
        iVar1 = *piVar6;
        iVar9 = 0;
        iVar8 = 0;
        if (0 < iVar1) {
          do {
            while( true ) {
              uVar4 = GetWord(this,iVar8);
              uVar5 = GetWord(param_1,iVar8);
              iVar2 = ((uVar4 & 0xffff) - (uVar5 & 0xffff)) - iVar9;
              iVar9 = 0;
              uVar7 = (ushort)iVar2;
              if (-1 < iVar2) break;
              iVar2 = iVar8 + 1;
              iVar9 = 1;
              SetWord(aBStack_28,iVar8,uVar7);
              iVar8 = iVar2;
              if (iVar2 == iVar1) goto LAB_053005f4;
            }
            iVar2 = iVar8 + 1;
            SetWord(aBStack_28,iVar8,uVar7);
            iVar8 = iVar2;
          } while (iVar2 != iVar1);
        }
LAB_053005f4:
        Trim(aBStack_28);
        BigInt(in_x8,aBStack_28);
        ~BigInt(aBStack_28);
      }
      else {
        operator-(param_1,this);
        operator-(aBStack_28);
        ~BigInt(aBStack_28);
      }
    }
    else {
      operator-(this);
      operator+((BigInt *)local_48,param_1);
      operator-(aBStack_28);
      ~BigInt(aBStack_28);
      ~BigInt((BigInt *)local_48);
    }
  }
  else {
    operator-(param_1);
    operator+(this,aBStack_28);
    ~BigInt(aBStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator-=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator-(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator+=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator+(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::RandNum(int) */

void __thiscall BigInt::RandNum(BigInt *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  BigInt *in_x8;
  int iVar5;
  BigInt aBStack_28 [32];
  long local_8;
  
  iVar2 = (int)this;
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  BigInt(in_x8);
  iVar1 = iVar2 + 0xf;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if (0 < iVar1 >> 4) {
    do {
      uVar3 = rand();
      uVar4 = rand();
      iVar5 = iVar5 + 1;
      operator<<=(in_x8,0x10);
      BigInt(aBStack_28,uVar3 & 0xff | (uVar4 & 0xff) << 8);
      operator+=(in_x8,aBStack_28);
      ~BigInt(aBStack_28);
    } while (iVar5 != iVar1 >> 4);
  }
  operator<<=(in_x8,iVar2 % 0x10);
  uVar3 = rand();
  uVar4 = rand();
  BigInt(aBStack_28,(int)(uVar3 & 0xff | (uVar4 & 0xff) << 8) >> (0x10U - iVar2 % 0x10 & 0x1f));
  operator+=(in_x8,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall BigInt::operator++(BigInt *this)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(aBStack_28,1);
  operator+=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall BigInt::operator++(BigInt *this,int param_1)

{
  BigInt *in_x8;
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(in_x8,this);
  BigInt(aBStack_28,1);
  operator+=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator*(BigInt *this,BigInt *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  BigInt *in_x8;
  uint uVar7;
  int iVar8;
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  BigInt(in_x8);
  iVar3 = NumWords(param_1);
  if (0 < iVar3) {
    do {
      uVar4 = GetWord(param_1,iVar8);
      uVar7 = 0;
      BigInt(aBStack_28);
      for (iVar3 = 0; iVar6 = NumWords(this), iVar3 < iVar6; iVar3 = iVar3 + 1) {
        uVar5 = GetWord(this,iVar3);
        uVar5 = uVar7 + (uVar5 & 0xffff) * (uVar4 & 0xffff);
        uVar7 = uVar5 >> 0x10;
        SetWord(aBStack_28,iVar3 + iVar8,(ushort)uVar5);
      }
      if (uVar7 != 0) {
        iVar3 = NumWords(this);
        SetWord(aBStack_28,iVar3 + iVar8,(ushort)uVar7);
      }
      iVar8 = iVar8 + 1;
      operator+=(in_x8,aBStack_28);
      ~BigInt(aBStack_28);
      iVar3 = NumWords(param_1);
    } while (iVar8 < iVar3);
  }
  bVar1 = IsNegative(param_1);
  bVar2 = IsNegative(this);
  in_x8[8] = (BigInt)(bVar2 ^ bVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator*=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator*(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* BigInt::Pow(int) const */

void BigInt::Pow(int param_1)

{
  int in_w1;
  BigInt *in_x8;
  int iVar1;
  
  iVar1 = 0;
  BigInt(in_x8,1);
  if (0 < in_w1) {
    do {
      iVar1 = iVar1 + 1;
      operator*=(in_x8,(BigInt *)(ulong)(uint)param_1);
    } while (iVar1 != in_w1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::ModPow(BigInt const&, BigInt const&) const */

void BigInt::ModPow(BigInt *param_1,BigInt *param_2)

{
  char cVar1;
  BigInt *in_x2;
  BigInt *in_x8;
  BigInt aBStack_88 [32];
  BigInt aBStack_68 [32];
  BigInt aBStack_48 [32];
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(in_x8,1);
  BigInt(aBStack_88,param_1);
  BigInt(aBStack_68,param_2);
  while( true ) {
    BigInt(aBStack_28,0);
    cVar1 = operator>(aBStack_68,aBStack_28);
    ~BigInt(aBStack_28);
    if (cVar1 == '\0') break;
    cVar1 = IsOdd(aBStack_68);
    if (cVar1 != '\0') {
      operator*(in_x8,aBStack_88);
      operator%(aBStack_48,in_x2);
      operator=(in_x8,aBStack_28);
      ~BigInt(aBStack_28);
      ~BigInt(aBStack_48);
    }
    operator>>=(aBStack_68,1);
    operator*(aBStack_88,aBStack_88);
    operator%(aBStack_48,in_x2);
    operator=(aBStack_88,aBStack_28);
    ~BigInt(aBStack_28);
    ~BigInt(aBStack_48);
  }
  ~BigInt(aBStack_68);
  ~BigInt(aBStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::IsPrime() const */

void __thiscall BigInt::IsPrime(BigInt *this)

{
  char cVar1;
  uint uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined8 extraout_x1_00;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  BigInt aBStack_108 [32];
  BigInt aBStack_e8 [24];
  int local_d0;
  BigInt aBStack_c8 [16];
  ushort *local_b8;
  BigInt aBStack_a8 [32];
  BigInt aBStack_88 [32];
  BigInt aBStack_68 [32];
  BigInt aBStack_48 [32];
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(aBStack_28,0);
  cVar1 = operator==(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (cVar1 == '\0') {
    BigInt(aBStack_28,1);
    cVar1 = operator==(this,aBStack_28);
    ~BigInt(aBStack_28);
    if (cVar1 == '\0') {
      BigInt(aBStack_108);
      BigInt(aBStack_e8);
      puVar6 = gSmallPrimes;
      do {
        Divide(this,(BigInt *)puVar6,aBStack_108,aBStack_e8);
        uVar7 = 0;
        if (local_d0 == 0) goto LAB_05300eb0;
        puVar6 = puVar6 + 0x20;
      } while ((BigInt *)puVar6 != (BigInt *)&ImageLib::gAlphaFileName);
      BigInt(aBStack_28,1);
      operator-(this,aBStack_28);
      ~BigInt(aBStack_28);
      uVar5 = *local_b8 & 1;
      if ((*local_b8 & 1) == 0) {
        do {
          uVar5 = uVar5 + 1;
        } while (((int)(uint)local_b8[(int)uVar5 >> 4] >> (uVar5 & 0xf) & 1U) == 0);
        iVar4 = 5;
        operator>>(aBStack_c8,uVar5);
        uVar2 = NumBits(this);
        uVar3 = extraout_x1;
        do {
          RandNum((BigInt *)(ulong)uVar2,(int)uVar3);
          cVar1 = operator>=(aBStack_88,this);
          if (cVar1 != '\0') {
            operator-(aBStack_88,this);
            operator=(aBStack_88,aBStack_28);
            ~BigInt(aBStack_28);
          }
          BigInt(aBStack_28,0);
          cVar1 = operator==(aBStack_88,aBStack_28);
          ~BigInt(aBStack_28);
          if (cVar1 != '\0') {
            BigInt(aBStack_28,1);
            operator=(aBStack_88,aBStack_28);
            ~BigInt(aBStack_28);
          }
          uVar8 = 0;
          ModPow(aBStack_88,aBStack_a8);
          BigInt(aBStack_28,1);
          cVar1 = operator!=(aBStack_68,aBStack_28);
          ~BigInt(aBStack_28);
          if (cVar1 != '\0') {
            do {
              cVar1 = operator!=(aBStack_68,aBStack_c8);
              if (cVar1 == '\0') break;
              BigInt(aBStack_48,2);
              ModPow(aBStack_68,aBStack_48);
              operator=(aBStack_68,aBStack_28);
              ~BigInt(aBStack_28);
              ~BigInt(aBStack_48);
              BigInt(aBStack_28,1);
              cVar1 = operator==(aBStack_68,aBStack_28);
              ~BigInt(aBStack_28);
              if (cVar1 != '\0') goto LAB_053010c4;
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar5);
            cVar1 = operator!=(aBStack_68,aBStack_c8);
            if (cVar1 != '\0') {
LAB_053010c4:
              ~BigInt(aBStack_68);
              ~BigInt(aBStack_88);
              goto LAB_05301034;
            }
          }
          ~BigInt(aBStack_68);
          ~BigInt(aBStack_88);
          iVar4 = iVar4 + -1;
          uVar3 = extraout_x1_00;
        } while (iVar4 != 0);
        uVar7 = 1;
      }
      else {
        operator>>(aBStack_c8,0);
      }
LAB_05301034:
      ~BigInt(aBStack_a8);
      ~BigInt(aBStack_c8);
LAB_05300eb0:
      ~BigInt(aBStack_e8);
      ~BigInt(aBStack_108);
      goto LAB_05300df8;
    }
  }
  uVar7 = 0;
LAB_05300df8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::InvMod(BigInt const&) */

void BigInt::InvMod(BigInt *param_1)

{
  char cVar1;
  BigInt *in_x1;
  int iVar2;
  BigInt aBStack_148 [32];
  BigInt aBStack_128 [32];
  BigInt aBStack_108 [32];
  BigInt aBStack_e8 [32];
  BigInt aBStack_c8 [32];
  BigInt aBStack_a8 [32];
  BigInt aBStack_88 [32];
  BigInt aBStack_68 [32];
  BigInt aBStack_48 [32];
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(aBStack_148,param_1);
  BigInt(aBStack_128,in_x1);
  BigInt(aBStack_108);
  BigInt(aBStack_e8);
  BigInt(aBStack_c8);
  BigInt(aBStack_a8);
  BigInt(aBStack_88);
  BigInt(aBStack_68);
  cVar1 = operator<(aBStack_128,aBStack_148);
  if (cVar1 != '\0') {
    BigInt(aBStack_28,aBStack_128);
    operator=(aBStack_128,aBStack_148);
    operator=(aBStack_148,aBStack_28);
    ~BigInt(aBStack_28);
  }
  iVar2 = 0;
  while ((cVar1 = IsEven(aBStack_128), cVar1 != '\0' && (cVar1 = IsEven(aBStack_148), cVar1 != '\0')
         )) {
    iVar2 = iVar2 + 1;
    operator>>=(aBStack_128,1);
    operator>>=(aBStack_148,1);
  }
  BigInt(aBStack_28,1);
  operator=(aBStack_108,aBStack_28);
  ~BigInt(aBStack_28);
  BigInt(aBStack_28,0);
  operator=(aBStack_e8,aBStack_28);
  ~BigInt(aBStack_28);
  operator=(aBStack_c8,aBStack_128);
  operator=(aBStack_a8,aBStack_148);
  BigInt(aBStack_48,1);
  operator-(aBStack_128,aBStack_48);
  operator=(aBStack_88,aBStack_28);
  ~BigInt(aBStack_28);
  ~BigInt(aBStack_48);
  operator=(aBStack_68,aBStack_148);
  do {
    cVar1 = IsEven(aBStack_c8);
    if (cVar1 == '\0') {
      cVar1 = IsEven(aBStack_68);
      if (cVar1 == '\0') goto LAB_053013b8;
LAB_053012c8:
      BigInt(aBStack_28,aBStack_108);
      operator=(aBStack_108,aBStack_a8);
      operator=(aBStack_a8,aBStack_28);
      operator=(aBStack_28,aBStack_e8);
      operator=(aBStack_e8,aBStack_88);
      operator=(aBStack_88,aBStack_28);
      operator=(aBStack_28,aBStack_c8);
      operator=(aBStack_c8,aBStack_68);
      operator=(aBStack_68,aBStack_28);
      ~BigInt(aBStack_28);
    }
    else {
      cVar1 = IsOdd(aBStack_108);
      if ((cVar1 != '\0') || (cVar1 = IsOdd(aBStack_e8), cVar1 != '\0')) {
        operator+=(aBStack_108,aBStack_148);
        operator+=(aBStack_e8,aBStack_128);
      }
      operator>>=(aBStack_108,1);
      operator>>=(aBStack_e8,1);
      operator>>=(aBStack_c8,1);
      cVar1 = IsEven(aBStack_68);
      if (cVar1 != '\0') goto LAB_053012c8;
LAB_053013b8:
      cVar1 = operator<(aBStack_c8,aBStack_68);
      if (cVar1 != '\0') goto LAB_053012c8;
    }
    cVar1 = IsEven(aBStack_c8);
    if (cVar1 == '\0') {
      while ((cVar1 = operator<(aBStack_108,aBStack_a8), cVar1 != '\0' ||
             (cVar1 = operator<(aBStack_e8,aBStack_88), cVar1 != '\0'))) {
        operator+=(aBStack_108,aBStack_148);
        operator+=(aBStack_e8,aBStack_128);
      }
      operator-=(aBStack_108,aBStack_a8);
      operator-=(aBStack_e8,aBStack_88);
      operator-=(aBStack_c8,aBStack_68);
      BigInt(aBStack_28,0);
      cVar1 = operator>(aBStack_68,aBStack_28);
      ~BigInt(aBStack_28);
      if (cVar1 == '\0') {
        while ((cVar1 = operator>(aBStack_108,aBStack_148), cVar1 != '\0' &&
               (cVar1 = operator>=(aBStack_e8,aBStack_128), cVar1 != '\0'))) {
          operator-=(aBStack_108,aBStack_148);
          operator-=(aBStack_e8,aBStack_128);
        }
        operator<<=(aBStack_108,iVar2);
        operator<<=(aBStack_e8,iVar2);
        operator<<=(aBStack_c8,iVar2);
        operator-(aBStack_128,aBStack_e8);
        ~BigInt(aBStack_68);
        ~BigInt(aBStack_88);
        ~BigInt(aBStack_a8);
        ~BigInt(aBStack_c8);
        ~BigInt(aBStack_e8);
        ~BigInt(aBStack_108);
        ~BigInt(aBStack_128);
        ~BigInt(aBStack_148);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator|(BigInt *this,BigInt *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  BigInt *in_x8;
  int iVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(in_x8);
  local_10 = NumWords(this);
  local_c = NumWords(param_1);
  piVar5 = eastl::max_alt<int>(&local_10,&local_c);
  iVar2 = *piVar5;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = GetWord(this,iVar6);
      uVar4 = GetWord(param_1,iVar6);
      iVar1 = iVar6 + 1;
      SetWord(in_x8,iVar6,uVar4 | uVar3);
      iVar6 = iVar1;
    } while (iVar1 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator|=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator|(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::BigInt(std::string const&) */

void __thiscall BigInt::BigInt(BigInt *this,string *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  BigInt aBStack_28 [32];
  long local_8;
  
  lVar7 = 0;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__BigInt_06a36260;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while (iVar3 = FUN_05474184(param_1), (int)lVar7 < iVar3) {
    pbVar4 = (byte *)FUN_054741b0(param_1,lVar7);
    bVar2 = *pbVar4;
    uVar6 = bVar2 - 0x30;
    uVar5 = (uint)bVar2;
    if ((9 < (uVar6 & 0xff)) && (uVar6 = uVar5 - 0x57, 5 < (bVar2 - 0x61 & 0xff))) {
      uVar6 = 0;
    }
    lVar7 = lVar7 + 1;
    uVar1 = uVar5 - 0x37;
    if (5 < (uVar5 - 0x41 & 0xff)) {
      uVar1 = uVar6;
    }
    operator<<=(this,4);
    BigInt(aBStack_28,uVar1);
    operator|=(this,aBStack_28);
    ~BigInt(aBStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) const */

void __thiscall BigInt::operator&(BigInt *this,BigInt *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  BigInt *in_x8;
  int iVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BigInt(in_x8);
  local_10 = NumWords(this);
  local_c = NumWords(param_1);
  piVar5 = eastl::max_alt<int>(&local_10,&local_c);
  iVar2 = *piVar5;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = GetWord(this,iVar6);
      uVar4 = GetWord(param_1,iVar6);
      iVar1 = iVar6 + 1;
      SetWord(in_x8,iVar6,uVar4 & uVar3);
      iVar6 = iVar1;
    } while (iVar1 != iVar2);
  }
  Trim(in_x8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BigInt::TEMPNAMEPLACEHOLDERVALUE(BigInt const&) */

void __thiscall BigInt::operator&=(BigInt *this,BigInt *param_1)

{
  BigInt aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator&(this,param_1);
  operator=(this,aBStack_28);
  ~BigInt(aBStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

