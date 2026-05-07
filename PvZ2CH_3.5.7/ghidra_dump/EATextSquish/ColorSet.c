// Class: EATextSquish::ColorSet


/* EATextSquish::ColorSet::GetPoints() const */

ColorSet * __thiscall EATextSquish::ColorSet::GetPoints(ColorSet *this)

{
  return this + 4;
}


/* EATextSquish::ColorSet::GetWeights() const */

ColorSet * __thiscall EATextSquish::ColorSet::GetWeights(ColorSet *this)

{
  return this + 0xc4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::ColorSet::ColorSet(unsigned char const*, unsigned int, unsigned int) */

void __thiscall
EATextSquish::ColorSet::ColorSet(ColorSet *this,uchar *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  byte bVar25;
  ColorSet *pCVar26;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48 [20];
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  long local_8;
  
  uVar2 = param_3 << 2;
  uVar21 = 2;
  pbVar24 = local_48;
  uVar3 = 4;
  this[0x144] = (ColorSet)0x0;
  local_8 = ___stack_chk_guard;
  uVar23 = 1;
  uVar20 = 3;
  *(undefined4 *)this = 0;
  uVar19 = 5;
  uVar18 = 6;
  uVar17 = 7;
  uVar16 = 8;
  uVar15 = 9;
  uVar14 = 10;
  uVar13 = 0xb;
  uVar12 = 0xc;
  uVar11 = 0xd;
  uVar10 = 0xe;
  uVar9 = 0xf;
  uVar8 = 0;
  iVar22 = 4;
  pbVar7 = pbVar24;
  do {
    bVar25 = 0;
    if ((uint)uVar8 < uVar2) {
      bVar25 = param_1[uVar8];
    }
    *pbVar7 = bVar25;
    bVar25 = 0;
    if (uVar23 < uVar2) {
      bVar25 = param_1[uVar23];
    }
    pbVar7[1] = bVar25;
    bVar25 = 0;
    if (uVar21 < uVar2) {
      bVar25 = param_1[uVar21];
    }
    pbVar7[2] = bVar25;
    bVar25 = 0;
    if (uVar20 < uVar2) {
      bVar25 = param_1[uVar20];
    }
    pbVar7[3] = bVar25;
    bVar25 = 0;
    if (uVar3 < uVar2) {
      bVar25 = param_1[uVar3];
    }
    pbVar7[4] = bVar25;
    bVar25 = 0;
    if (uVar19 < uVar2) {
      bVar25 = param_1[uVar19];
    }
    pbVar7[5] = bVar25;
    bVar25 = 0;
    if (uVar18 < uVar2) {
      bVar25 = param_1[uVar18];
    }
    pbVar7[6] = bVar25;
    bVar25 = 0;
    if (uVar17 < uVar2) {
      bVar25 = param_1[uVar17];
    }
    pbVar7[7] = bVar25;
    bVar25 = 0;
    if (uVar16 < uVar2) {
      bVar25 = param_1[uVar16];
    }
    pbVar7[8] = bVar25;
    bVar25 = 0;
    if (uVar15 < uVar2) {
      bVar25 = param_1[uVar15];
    }
    pbVar7[9] = bVar25;
    bVar25 = 0;
    if (uVar14 < uVar2) {
      bVar25 = param_1[uVar14];
    }
    pbVar7[10] = bVar25;
    bVar25 = 0;
    if (uVar13 < uVar2) {
      bVar25 = param_1[uVar13];
    }
    pbVar7[0xb] = bVar25;
    bVar25 = 0;
    if (uVar12 < uVar2) {
      bVar25 = param_1[uVar12];
    }
    pbVar7[0xc] = bVar25;
    bVar25 = 0;
    if (uVar11 < uVar2) {
      bVar25 = param_1[uVar11];
    }
    pbVar7[0xd] = bVar25;
    bVar25 = 0;
    if (uVar10 < uVar2) {
      bVar25 = param_1[uVar10];
    }
    pbVar7[0xe] = bVar25;
    bVar25 = 0;
    if (uVar9 < uVar2) {
      bVar25 = param_1[uVar9];
    }
    pbVar7[0xf] = bVar25;
    iVar22 = iVar22 + -1;
    uVar8 = (ulong)((uint)uVar8 + param_2);
    pbVar7 = pbVar7 + 0x10;
    uVar9 = uVar9 + param_2;
    uVar10 = uVar10 + param_2;
    uVar11 = uVar11 + param_2;
    uVar12 = uVar12 + param_2;
    uVar13 = uVar13 + param_2;
    uVar14 = uVar14 + param_2;
    uVar15 = uVar15 + param_2;
    uVar16 = uVar16 + param_2;
    uVar17 = uVar17 + param_2;
    uVar18 = uVar18 + param_2;
    uVar19 = uVar19 + param_2;
    uVar3 = uVar3 + param_2;
    uVar20 = uVar20 + param_2;
    uVar21 = uVar21 + param_2;
    uVar23 = uVar23 + param_2;
  } while (iVar22 != 0);
  iVar22 = 0;
  pCVar26 = this + 0x104;
  do {
    while( true ) {
      bVar25 = *pbVar24;
      if (iVar22 == 0) break;
      bVar5 = pbVar24[1];
      bVar6 = pbVar24[2];
      if (((local_48[0] == bVar25) && (local_48[1] == bVar5)) && (local_48[2] == bVar6)) {
        iVar4 = 0;
      }
      else {
        if (iVar22 == 1) goto LAB_05419018;
        if (((local_48[4] == bVar25) && (local_48[5] == bVar5)) && (local_48[6] == bVar6)) {
          iVar4 = 1;
        }
        else {
          if (iVar22 == 2) goto LAB_05419018;
          if (((local_48[8] == bVar25) && (local_48[9] == bVar5)) && (local_48[10] == bVar6)) {
            iVar4 = 2;
          }
          else {
            if (iVar22 == 3) goto LAB_05419018;
            if (((local_48[0xc] == bVar25) && (local_48[0xd] == bVar5)) && (local_48[0xe] == bVar6))
            {
              iVar4 = 3;
            }
            else {
              if (iVar22 == 4) goto LAB_05419018;
              if (((local_48[0x10] == bVar25) && (local_48[0x11] == bVar5)) &&
                 (local_48[0x12] == bVar6)) {
                iVar4 = 4;
              }
              else {
                if (iVar22 == 5) goto LAB_05419018;
                if (((local_34 == bVar25) && (local_33 == bVar5)) && (local_32 == bVar6)) {
                  iVar4 = 5;
                }
                else {
                  if (iVar22 == 6) goto LAB_05419018;
                  if (((local_30 == bVar25) && (local_2f == bVar5)) && (local_2e == bVar6)) {
                    iVar4 = 6;
                  }
                  else {
                    if (iVar22 == 7) goto LAB_05419018;
                    if (((local_2c == bVar25) && (local_2b == bVar5)) && (local_2a == bVar6)) {
                      iVar4 = 7;
                    }
                    else {
                      if (iVar22 == 8) goto LAB_05419018;
                      if (((local_28 == bVar25) && (local_27 == bVar5)) && (local_26 == bVar6)) {
                        iVar4 = 8;
                      }
                      else {
                        if (iVar22 == 9) goto LAB_05419018;
                        if (((local_24 == bVar25) && (local_23 == bVar5)) && (local_22 == bVar6)) {
                          iVar4 = 9;
                        }
                        else {
                          if (iVar22 == 10) goto LAB_05419018;
                          if (((local_20 == bVar25) && (local_1f == bVar5)) && (local_1e == bVar6))
                          {
                            iVar4 = 10;
                          }
                          else {
                            if (iVar22 == 0xb) goto LAB_05419018;
                            if (((local_1c == bVar25) && (local_1b == bVar5)) && (local_1a == bVar6)
                               ) {
                              iVar4 = 0xb;
                            }
                            else {
                              if (iVar22 == 0xc) goto LAB_05419018;
                              if (((local_18 == bVar25) && (local_17 == bVar5)) &&
                                 (local_16 == bVar6)) {
                                iVar4 = 0xc;
                              }
                              else {
                                if (iVar22 == 0xd) goto LAB_05419018;
                                if (((local_14 == bVar25) && (local_13 == bVar5)) &&
                                   (local_12 == bVar6)) {
                                  iVar4 = 0xd;
                                }
                                else {
                                  if (((iVar22 == 0xe) || (local_10 != bVar25)) ||
                                     ((local_f != bVar5 || (local_e != bVar6)))) goto LAB_05419018;
                                  iVar4 = 0xe;
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
      iVar4 = *(int *)(this + (long)iVar4 * 4 + 0x104);
      iVar22 = iVar22 + 1;
      pbVar24 = pbVar24 + 4;
      *(float *)(this + (long)iVar4 * 4 + 0xc4) = *(float *)(this + (long)iVar4 * 4 + 0xc4) + 1.0;
      *(int *)pCVar26 = iVar4;
      pCVar26 = pCVar26 + 4;
      if (iVar22 == 0x10) goto LAB_054192ac;
    }
    bVar5 = pbVar24[1];
    bVar6 = pbVar24[2];
LAB_05419018:
    iVar4 = *(int *)this;
    iVar22 = iVar22 + 1;
    pbVar24 = pbVar24 + 4;
    Vec3::Vec3((Vec3 *)&local_58,(float)bVar6 * 0.003921569,(float)bVar5 * 0.003921569,
               (float)bVar25 * 0.003921569);
    iVar1 = *(int *)this;
    *(undefined8 *)(this + (long)iVar4 * 0xc + 4) = local_58;
    *(undefined4 *)(this + (long)iVar4 * 0xc + 0xc) = local_50;
    *(undefined4 *)(this + (long)iVar1 * 4 + 0xc4) = 0x3f800000;
    *(int *)pCVar26 = iVar1;
    *(int *)this = iVar1 + 1;
    pCVar26 = pCVar26 + 4;
  } while (iVar22 != 0x10);
LAB_054192ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EATextSquish::ColorSet::RemapIndices(unsigned char const*, unsigned char*) const */

void __thiscall EATextSquish::ColorSet::RemapIndices(ColorSet *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  if (*(int *)(this + 0x104) == -1) {
    *param_2 = '\x03';
    iVar1 = *(int *)(this + 0x108);
  }
  else {
    *param_2 = param_1[*(int *)(this + 0x104)];
    iVar1 = *(int *)(this + 0x108);
  }
  if (iVar1 == -1) {
    param_2[1] = '\x03';
    iVar1 = *(int *)(this + 0x10c);
  }
  else {
    param_2[1] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x10c);
  }
  if (iVar1 == -1) {
    param_2[2] = '\x03';
    iVar1 = *(int *)(this + 0x110);
  }
  else {
    param_2[2] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x110);
  }
  if (iVar1 == -1) {
    param_2[3] = '\x03';
    iVar1 = *(int *)(this + 0x114);
  }
  else {
    param_2[3] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x114);
  }
  if (iVar1 == -1) {
    param_2[4] = '\x03';
    iVar1 = *(int *)(this + 0x118);
  }
  else {
    param_2[4] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x118);
  }
  if (iVar1 == -1) {
    param_2[5] = '\x03';
    iVar1 = *(int *)(this + 0x11c);
  }
  else {
    param_2[5] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x11c);
  }
  if (iVar1 == -1) {
    param_2[6] = '\x03';
    iVar1 = *(int *)(this + 0x120);
  }
  else {
    param_2[6] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x120);
  }
  if (iVar1 == -1) {
    param_2[7] = '\x03';
    iVar1 = *(int *)(this + 0x124);
  }
  else {
    param_2[7] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x124);
  }
  if (iVar1 == -1) {
    param_2[8] = '\x03';
    iVar1 = *(int *)(this + 0x128);
  }
  else {
    param_2[8] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x128);
  }
  if (iVar1 == -1) {
    param_2[9] = '\x03';
    iVar1 = *(int *)(this + 300);
  }
  else {
    param_2[9] = param_1[iVar1];
    iVar1 = *(int *)(this + 300);
  }
  if (iVar1 == -1) {
    param_2[10] = '\x03';
    iVar1 = *(int *)(this + 0x130);
  }
  else {
    param_2[10] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x130);
  }
  if (iVar1 == -1) {
    param_2[0xb] = '\x03';
    iVar1 = *(int *)(this + 0x134);
  }
  else {
    param_2[0xb] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x134);
  }
  if (iVar1 == -1) {
    param_2[0xc] = '\x03';
    iVar1 = *(int *)(this + 0x138);
  }
  else {
    param_2[0xc] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x138);
  }
  if (iVar1 == -1) {
    param_2[0xd] = '\x03';
    iVar1 = *(int *)(this + 0x13c);
  }
  else {
    param_2[0xd] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x13c);
  }
  if (iVar1 == -1) {
    param_2[0xe] = '\x03';
    iVar1 = *(int *)(this + 0x140);
  }
  else {
    param_2[0xe] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x140);
  }
  if (iVar1 == -1) {
    param_2[0xf] = '\x03';
    return;
  }
  param_2[0xf] = param_1[iVar1];
  return;
}

