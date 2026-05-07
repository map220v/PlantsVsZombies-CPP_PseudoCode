// Class: EA::StdC::ScanfLocal::DoubleValue


/* EA::StdC::ScanfLocal::DoubleValue::DoubleValue() */

void __thiscall EA::StdC::ScanfLocal::DoubleValue::DoubleValue(DoubleValue *this)

{
  *(undefined2 *)(this + 0x1a) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  *this = (DoubleValue)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::DoubleValue::ToDouble() const */

void __thiscall EA::StdC::ScanfLocal::DoubleValue::ToDouble(DoubleValue *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  DoubleValue *pDVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  DoubleValue *pDVar7;
  
  sVar4 = *(short *)(this + 0x1c);
  iVar12 = (int)sVar4;
  uVar1 = (int)sVar4 + 6;
  local_8 = ___stack_chk_guard;
  if ((uVar1 & 0xffff) < 0x12) {
    if (*(short *)(this + 0x1a) < 1) {
      dVar13 = 0.0;
    }
    else {
      dVar13 = 0.0;
      pDVar7 = this;
      do {
        pDVar6 = pDVar7 + 1;
        dVar13 = (double)(int)((byte)*pDVar7 - 0x30) + dVar13 * 10.0;
        pDVar7 = pDVar6;
      } while (pDVar6 != this + (ulong)((int)*(short *)(this + 0x1a) - 1) + 1);
    }
    dVar13 = dVar13 * *(double *)(&DAT_057693b0 + (long)(int)uVar1 * 8);
    goto LAB_053ffc04;
  }
  sVar5 = *(short *)(this + 0x1a);
  if (sVar5 < 1) {
    iVar10 = 1;
    iVar9 = 0;
  }
  else {
    iVar9 = (int)sVar5;
    iVar2 = (iVar9 - 0x10U >> 4) + 1;
    iVar8 = iVar2 * 0x10;
    iVar10 = (int)sVar5;
    if (iVar9 - 1U < 0xf) {
      iVar8 = 0;
LAB_053ffa00:
      iVar2 = iVar8 + 1;
      iVar11 = (int)sVar5;
      *(DoubleValue *)((long)&local_30 + (long)iVar8) = this[iVar8];
      if (iVar2 < iVar11) {
        iVar3 = iVar8 + 2;
        *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
        if (iVar3 < iVar11) {
          iVar2 = iVar8 + 3;
          *(DoubleValue *)((long)&local_30 + (long)iVar3) = this[iVar3];
          if (iVar2 < iVar11) {
            iVar3 = iVar8 + 4;
            *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
            if (iVar3 < iVar11) {
              iVar2 = iVar8 + 5;
              iVar11 = (int)sVar5;
              *(DoubleValue *)((long)&local_30 + (long)iVar3) = this[iVar3];
              if (iVar2 < iVar11) {
                iVar3 = iVar8 + 6;
                *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
                if (iVar3 < iVar11) {
                  iVar2 = iVar8 + 7;
                  *(DoubleValue *)((long)&local_30 + (long)iVar3) = this[iVar3];
                  if (iVar2 < iVar11) {
                    iVar3 = iVar8 + 8;
                    *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
                    if (iVar3 < iVar11) {
                      iVar2 = iVar8 + 9;
                      *(DoubleValue *)((long)&local_30 + (long)iVar3) = this[iVar3];
                      if (iVar2 < iVar11) {
                        iVar3 = iVar8 + 10;
                        *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
                        if (iVar3 < iVar11) {
                          iVar2 = iVar8 + 0xb;
                          *(DoubleValue *)((long)&local_30 + (long)iVar3) = this[iVar3];
                          if (iVar2 < iVar11) {
                            iVar3 = iVar8 + 0xc;
                            *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
                            if (iVar3 < iVar11) {
                              iVar2 = iVar8 + 0xd;
                              *(DoubleValue *)((long)&local_30 + (long)iVar3) = this[iVar3];
                              if (iVar2 < iVar10) {
                                iVar8 = iVar8 + 0xe;
                                *(DoubleValue *)((long)&local_30 + (long)iVar2) = this[iVar2];
                                if (iVar8 < iVar10) {
                                  *(DoubleValue *)((long)&local_30 + (long)iVar8) = this[iVar8];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uStack_28 = *(undefined8 *)(this + 8);
      local_30 = *(undefined8 *)this;
      if (iVar2 != 1) {
        uStack_18 = *(undefined8 *)(this + 0x18);
        local_20 = *(undefined8 *)(this + 0x10);
      }
      if (iVar9 != iVar8) goto LAB_053ffa00;
    }
    iVar10 = iVar10 + 1;
  }
  *(char *)((long)&local_30 + (long)iVar9) = 'e';
  if (sVar4 < 0) {
    iVar12 = -iVar12;
    *(char *)((long)&local_30 + (long)iVar10) = '-';
    iVar10 = iVar9 + 2;
  }
  iVar9 = 100;
  if ((iVar12 < 100) && (iVar9 = 10, iVar12 < 10)) {
    iVar9 = 1;
  }
  do {
    iVar2 = 0;
    if (iVar9 != 0) {
      iVar2 = iVar12 / iVar9;
    }
    *(char *)((long)&local_30 + (long)iVar10) = (char)iVar2 + '0';
    iVar10 = iVar10 + 1;
    iVar8 = iVar9 / 10;
    iVar12 = iVar12 - iVar2 * iVar9;
    iVar9 = iVar8;
  } while (iVar8 != 0);
  *(char *)((long)&local_30 + (long)iVar10) = '\0';
  dVar13 = strtod((char *)&local_30,(char **)0x0);
LAB_053ffc04:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar13);
  }
  return;
}

