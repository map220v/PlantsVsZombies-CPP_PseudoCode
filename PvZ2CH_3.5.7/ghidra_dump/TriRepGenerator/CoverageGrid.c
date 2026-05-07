// Class: TriRepGenerator::CoverageGrid


/* TriRepGenerator::CoverageGrid::CoverageGrid() */

void __thiscall TriRepGenerator::CoverageGrid::CoverageGrid(CoverageGrid *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* TriRepGenerator::CoverageGrid::InitFromImage(Sexy::MemoryImage*, Sexy::TRect<int>*, int, int,
   bool, float) */

void __thiscall
TriRepGenerator::CoverageGrid::InitFromImage
          (CoverageGrid *this,MemoryImage *param_1,TRect *param_2,int param_3,int param_4,
          bool param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  ColourFit *this_00;
  ColourFit *pCVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ColourFit *pCVar7;
  int iVar8;
  int iVar9;
  ColourFit *pCVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar14 = (uint)param_5;
  if (param_1 == (MemoryImage *)0x0) {
    return;
  }
  iVar11 = *(int *)(param_2 + 8);
  iVar20 = *(int *)(param_2 + 0xc);
  iVar21 = *(int *)(param_1 + 0x38);
  iVar2 = param_3 * param_4;
  fVar26 = (float)param_3 / (float)iVar11;
  fVar27 = (float)param_4 / (float)iVar20;
  this_00 = operator_new__((long)iVar2);
  memset(this_00,0,(long)iVar2);
  uVar6 = iVar21 - iVar11;
  lVar12 = *(long *)(param_1 + 0x70) + (long)(*(int *)param_2 + iVar21 * *(int *)(param_2 + 4)) * 4;
  if (param_5) {
    if (0 < iVar20) {
      uVar14 = iVar11 - 1;
      iVar21 = 0;
      fVar25 = 0.0;
      iVar13 = 0;
      do {
        fVar19 = fVar25 - fVar27;
        fVar25 = fVar25 + fVar27;
        iVar22 = iVar13 * param_3;
        iVar13 = (int)fVar25;
        iVar9 = (int)fVar19 * param_3;
        if (0 < iVar11) {
          if (iVar21 < iVar20 + -1) {
            lVar4 = 0;
            fVar19 = 0.0;
            if (iVar21 < 1) {
              do {
                uVar1 = *(uint *)(lVar12 + lVar4 * 4);
                if ((uVar1 >> 0x18 != 0) && ((uVar1 & 0xffffff) != 0)) {
                  this_00[(int)fVar19 + iVar22] = (ColourFit)0x1;
                  if ((int)lVar4 != 0) {
                    this_00[(int)(fVar19 - fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  if ((int)lVar4 < (int)uVar14) {
                    this_00[(int)(fVar19 + fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  this_00[iVar13 * param_3 + (int)fVar19] = (ColourFit)0x1;
                }
                fVar19 = fVar19 + fVar26;
                lVar4 = lVar4 + 1;
              } while ((int)lVar4 < iVar11);
            }
            else {
              do {
                uVar1 = *(uint *)(lVar12 + lVar4 * 4);
                iVar8 = (int)fVar19;
                if ((uVar1 >> 0x18 != 0) && ((uVar1 & 0xffffff) != 0)) {
                  this_00[iVar8 + iVar22] = (ColourFit)0x1;
                  if ((int)lVar4 != 0) {
                    this_00[(int)(fVar19 - fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  if ((int)lVar4 < (int)uVar14) {
                    this_00[(int)(fVar19 + fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  this_00[iVar9 + iVar8] = (ColourFit)0x1;
                  this_00[iVar13 * param_3 + iVar8] = (ColourFit)0x1;
                }
                fVar19 = fVar19 + fVar26;
                lVar4 = lVar4 + 1;
              } while ((int)lVar4 < iVar11);
            }
          }
          else {
            fVar19 = 0.0;
            lVar4 = 0;
            if (iVar21 == 0) {
              do {
                uVar1 = *(uint *)(lVar12 + lVar4 * 4);
                if ((uVar1 >> 0x18 != 0) && ((uVar1 & 0xffffff) != 0)) {
                  this_00[(int)fVar19 + iVar22] = (ColourFit)0x1;
                  if ((int)lVar4 != 0) {
                    this_00[(int)(fVar19 - fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  if ((int)lVar4 < (int)uVar14) {
                    this_00[(int)(fVar19 + fVar26) + iVar22] = (ColourFit)0x1;
                  }
                }
                fVar19 = fVar19 + fVar26;
                lVar4 = lVar4 + 1;
              } while ((int)lVar4 < iVar11);
            }
            else {
              do {
                uVar1 = *(uint *)(lVar12 + lVar4 * 4);
                if ((uVar1 >> 0x18 != 0) && ((uVar1 & 0xffffff) != 0)) {
                  this_00[(int)fVar19 + iVar22] = (ColourFit)0x1;
                  if ((int)lVar4 != 0) {
                    this_00[(int)(fVar19 - fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  if ((int)lVar4 < (int)uVar14) {
                    this_00[(int)(fVar19 + fVar26) + iVar22] = (ColourFit)0x1;
                  }
                  this_00[iVar9 + (int)fVar19] = (ColourFit)0x1;
                }
                fVar19 = fVar19 + fVar26;
                lVar4 = lVar4 + 1;
              } while ((int)lVar4 < iVar11);
            }
          }
          lVar12 = lVar12 + ((ulong)uVar14 + 1) * 4;
        }
        iVar21 = iVar21 + 1;
        lVar12 = lVar12 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
      } while (iVar21 != iVar20);
    }
  }
  else if (0 < iVar20) {
    uVar1 = iVar11 - 1;
    fVar25 = 0.0;
    lVar4 = ((ulong)uVar1 + 1) * 4;
    iVar21 = 0;
    do {
      fVar19 = fVar25 - fVar27;
      fVar25 = fVar25 + fVar27;
      iVar13 = uVar14 * param_3;
      uVar14 = (uint)fVar25;
      iVar22 = (int)fVar19 * param_3;
      if (0 < iVar11) {
        if (iVar21 < iVar20 + -1) {
          lVar5 = 0;
          fVar19 = 0.0;
          if (iVar21 < 1) {
            do {
              if (*(uint *)(lVar12 + lVar5 * 4) >> 0x18 != 0) {
                this_00[(int)fVar19 + iVar13] = (ColourFit)0x1;
                if ((int)lVar5 != 0) {
                  this_00[(int)(fVar19 - fVar26) + iVar13] = (ColourFit)0x1;
                }
                if ((int)lVar5 < (int)uVar1) {
                  this_00[(int)(fVar19 + fVar26) + iVar13] = (ColourFit)0x1;
                }
                this_00[(int)(uVar14 * param_3 + (int)fVar19)] = (ColourFit)0x1;
              }
              fVar19 = fVar19 + fVar26;
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < iVar11);
            lVar12 = lVar12 + lVar4;
          }
          else {
            do {
              while( true ) {
                iVar9 = (int)fVar19;
                if (*(uint *)(lVar12 + lVar5 * 4) >> 0x18 == 0) break;
                this_00[iVar9 + iVar13] = (ColourFit)0x1;
                if ((int)lVar5 != 0) {
                  this_00[(int)(fVar19 - fVar26) + iVar13] = (ColourFit)0x1;
                }
                if ((int)lVar5 < (int)uVar1) {
                  this_00[(int)(fVar19 + fVar26) + iVar13] = (ColourFit)0x1;
                }
                lVar5 = lVar5 + 1;
                this_00[iVar22 + iVar9] = (ColourFit)0x1;
                this_00[(int)(uVar14 * param_3 + iVar9)] = (ColourFit)0x1;
                fVar19 = fVar19 + fVar26;
                if (iVar11 <= (int)lVar5) goto LAB_05161158;
              }
              lVar5 = lVar5 + 1;
              fVar19 = fVar19 + fVar26;
            } while ((int)lVar5 < iVar11);
LAB_05161158:
            lVar12 = lVar12 + lVar4;
          }
        }
        else {
          fVar19 = 0.0;
          lVar5 = 0;
          if (iVar21 == 0) {
            do {
              if (*(uint *)(lVar12 + lVar5 * 4) >> 0x18 != 0) {
                this_00[(int)fVar19 + iVar13] = (ColourFit)0x1;
                if ((int)lVar5 != 0) {
                  this_00[(int)(fVar19 - fVar26) + iVar13] = (ColourFit)0x1;
                }
                if ((int)lVar5 < (int)uVar1) {
                  this_00[(int)(fVar19 + fVar26) + iVar13] = (ColourFit)0x1;
                }
              }
              fVar19 = fVar19 + fVar26;
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < iVar11);
            lVar12 = lVar12 + lVar4;
          }
          else {
            do {
              if (*(uint *)(lVar12 + lVar5 * 4) >> 0x18 != 0) {
                this_00[(int)fVar19 + iVar13] = (ColourFit)0x1;
                if ((int)lVar5 != 0) {
                  this_00[(int)(fVar19 - fVar26) + iVar13] = (ColourFit)0x1;
                }
                if ((int)lVar5 < (int)uVar1) {
                  this_00[(int)(fVar19 + fVar26) + iVar13] = (ColourFit)0x1;
                }
                this_00[iVar22 + (int)fVar19] = (ColourFit)0x1;
              }
              fVar19 = fVar19 + fVar26;
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < iVar11);
            lVar12 = lVar12 + lVar4;
          }
        }
      }
      iVar21 = iVar21 + 1;
      lVar12 = lVar12 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
    } while (iVar21 != iVar20);
  }
  if (2 < param_4) {
    iVar11 = 1;
    lVar12 = (ulong)(param_3 - 1) + 1;
    pCVar3 = this_00 + param_3;
    pCVar10 = this_00 + (long)param_3 * 2;
    pCVar7 = this_00;
    do {
      lVar4 = 0;
      if (0 < param_3) {
        do {
          if (((pCVar3[lVar4] == (ColourFit)0x0) && (pCVar7[lVar4] != (ColourFit)0x0)) &&
             (pCVar10[lVar4] != (ColourFit)0x0)) {
            pCVar3[lVar4] = (ColourFit)0x1;
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < param_3);
        pCVar3 = pCVar3 + lVar12;
        pCVar7 = pCVar7 + lVar12;
        pCVar10 = pCVar10 + lVar12;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != param_4 + -1);
  }
  if (iVar2 < 1) {
    fVar26 = 0.0;
    goto LAB_05161010;
  }
  uVar14 = (iVar2 - 0x10U >> 4) + 1;
  iVar11 = uVar14 * 0x10;
  if (iVar2 - 1U < 0xf) {
    iVar11 = 0;
    iVar20 = 0;
LAB_05160eec:
    iVar20 = iVar20 + (uint)(byte)this_00[iVar11];
    if (iVar11 + 1 < iVar2) {
      iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 1];
      if (iVar11 + 2 < iVar2) {
        iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 2];
        if (iVar11 + 3 < iVar2) {
          iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 3];
          if (iVar11 + 4 < iVar2) {
            iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 4];
            if (iVar11 + 5 < iVar2) {
              iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 5];
              if (iVar11 + 6 < iVar2) {
                iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 6];
                if (iVar11 + 7 < iVar2) {
                  iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 7];
                  if (iVar11 + 8 < iVar2) {
                    iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 8];
                    if (iVar11 + 9 < iVar2) {
                      iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 9];
                      if (iVar11 + 10 < iVar2) {
                        iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 10];
                        if (iVar11 + 0xb < iVar2) {
                          iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 0xb];
                          if (iVar11 + 0xc < iVar2) {
                            iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 0xc];
                            if (iVar11 + 0xd < iVar2) {
                              iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 0xd];
                              if (iVar11 + 0xe < iVar2) {
                                iVar20 = iVar20 + (uint)(byte)this_00[iVar11 + 0xe];
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
    iVar20 = 0;
    iVar21 = 0;
    iVar13 = 0;
    iVar22 = 0;
    uVar6 = 0;
    pCVar3 = this_00;
    do {
      uVar24 = *(undefined8 *)(pCVar3 + 8);
      uVar23 = *(undefined8 *)pCVar3;
      uVar6 = uVar6 + 1;
      bVar15 = (byte)((ulong)uVar23 >> 8);
      bVar17 = (byte)((ulong)uVar23 >> 0x28);
      bVar16 = (byte)((ulong)uVar24 >> 8);
      bVar18 = (byte)((ulong)uVar24 >> 0x28);
      iVar20 = (CONCAT12(bVar18,(ushort)(byte)((ulong)uVar24 >> 0x20)) & 0xffff) +
               ((CONCAT12(bVar16,(short)uVar24) & 0xff00ff) & 0xffff) +
               (CONCAT12(bVar17,(ushort)(byte)((ulong)uVar23 >> 0x20)) & 0xffff) +
               (CONCAT12(bVar15,(ushort)(byte)uVar23) & 0xffff) + iVar20;
      iVar21 = (uint)bVar18 + (uint)bVar16 + (uint)bVar17 + (uint)bVar15 + iVar21;
      iVar13 = (uint)(byte)((ulong)uVar24 >> 0x30) +
               (uint)(byte)((ulong)uVar24 >> 0x10) +
               (uint)(byte)((ulong)uVar23 >> 0x30) + (uint)(byte)((ulong)uVar23 >> 0x10) + iVar13;
      iVar22 = (uint)(byte)((ulong)uVar24 >> 0x38) +
               (uint)(byte)((ulong)uVar24 >> 0x18) +
               (uint)(byte)((ulong)uVar23 >> 0x38) + (uint)(byte)((ulong)uVar23 >> 0x18) + iVar22;
      pCVar3 = pCVar3 + 0x10;
    } while (uVar6 < uVar14);
    iVar20 = iVar20 + iVar21 + iVar13 + iVar22;
    if (iVar2 != iVar11) goto LAB_05160eec;
  }
  fVar26 = (float)iVar20;
LAB_05161010:
  if ((fVar26 / (float)iVar2) * 100.0 <= param_6) {
    *(ColourFit **)this = this_00;
    *(int *)(this + 8) = param_3;
    *(int *)(this + 0xc) = param_4;
    return;
  }
  EATextSquish::ColourFit::~ColourFit(this_00);
  return;
}

