// Class: CRijndael


/* CRijndael::CRijndael() */

void __thiscall CRijndael::CRijndael(CRijndael *this)

{
  this[8] = (CRijndael)0x0;
  *(undefined ***)this = &PTR_nop_06a36280;
  return;
}


/* CRijndael::DefEncryptBlock(char const*, char*) */

void __thiscall CRijndael::DefEncryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  CRijndael *pCVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  CRijndael *pCVar15;
  ulong uVar16;
  uint uVar17;
  
  if (this[8] != (CRijndael)0x0) {
    uVar17 = *(uint *)(this + 0x3d4);
    uVar13 = (ulong)(((uint)(byte)param_1[1] << 0x10 | (uint)(byte)*param_1 << 0x18 |
                      (uint)(byte)param_1[3] | (uint)(byte)param_1[2] << 8) ^ *(uint *)(this + 0xc))
    ;
    uVar14 = (ulong)(((uint)(byte)param_1[5] << 0x10 | (uint)(byte)param_1[4] << 0x18 |
                      (uint)(byte)param_1[7] | (uint)(byte)param_1[6] << 8) ^ *(uint *)(this + 0x10)
                    );
    uVar11 = (ulong)(((uint)(byte)param_1[9] << 0x10 | (uint)(byte)param_1[8] << 0x18 |
                      (uint)(byte)param_1[0xb] | (uint)(byte)param_1[10] << 8) ^
                    *(uint *)(this + 0x14));
    uVar9 = (ulong)(((uint)(byte)param_1[0xd] << 0x10 | (uint)(byte)param_1[0xc] << 0x18 |
                     (uint)(byte)param_1[0xf] | (uint)(byte)param_1[0xe] << 8) ^
                   *(uint *)(this + 0x18));
    if (1 < (int)uVar17) {
      pCVar15 = this + 0x2c;
      do {
        uVar12 = (uint)uVar13;
        uVar6 = uVar13 >> 8;
        uVar7 = uVar13 >> 0x10;
        uVar10 = (uint)uVar11;
        pCVar1 = pCVar15 + 0x20;
        uVar16 = uVar11 >> 0x10;
        uVar8 = uVar14 >> 8;
        uVar13 = (ulong)(*(uint *)pCVar15 ^ *(uint *)(sm_T4 + (long)(int)((uint)uVar9 & 0xff) * 4) ^
                         *(uint *)(sm_T2 + (long)(int)((uint)(uVar14 >> 0x10) & 0xff) * 4) ^
                         *(uint *)(sm_T3 + (long)(int)((uint)(uVar11 >> 8) & 0xff) * 4) ^
                        *(uint *)(sm_T1 + (long)(int)(uVar12 >> 0x18) * 4));
        uVar11 = (ulong)(*(uint *)(pCVar15 + 8) ^
                         *(uint *)(sm_T4 + (long)(int)((uint)uVar14 & 0xff) * 4) ^
                         *(uint *)(sm_T2 + (long)(int)((uint)(uVar9 >> 0x10) & 0xff) * 4) ^
                         *(uint *)(sm_T3 + (long)(int)((uint)uVar6 & 0xff) * 4) ^
                        *(uint *)(sm_T1 + (long)(int)(uVar10 >> 0x18) * 4));
        uVar14 = (ulong)(*(uint *)(pCVar15 + 4) ^ *(uint *)(sm_T4 + (long)(int)(uVar12 & 0xff) * 4)
                         ^ *(uint *)(sm_T2 + (long)(int)((uint)uVar16 & 0xff) * 4) ^
                         *(uint *)(sm_T3 + (long)(int)((uint)(uVar9 >> 8) & 0xff) * 4) ^
                        *(uint *)(sm_T1 + (long)(int)((uint)uVar14 >> 0x18) * 4));
        uVar9 = (ulong)(*(uint *)(pCVar15 + 0xc) ^ *(uint *)(sm_T4 + (long)(int)(uVar10 & 0xff) * 4)
                        ^ *(uint *)(sm_T2 + (long)(int)((uint)uVar7 & 0xff) * 4) ^
                        *(uint *)(sm_T3 + (long)(int)((uint)uVar8 & 0xff) * 4) ^
                       *(uint *)(sm_T1 + (long)(int)((uint)uVar9 >> 0x18) * 4));
        pCVar15 = pCVar1;
      } while (pCVar1 != this + (ulong)(uVar17 - 2) * 0x20 + 0x4c);
    }
    uVar16 = -(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5;
    uVar2 = *(undefined4 *)(this + uVar16 + 0xc);
    bVar3 = sm_S[uVar14 >> 0x10 & 0xff];
    bVar4 = sm_S[uVar11 >> 8 & 0xff];
    bVar5 = sm_S[uVar9 & 0xff];
    *param_2 = sm_S[(int)(uVar13 >> 0x18)] ^ (byte)((uint)uVar2 >> 0x18);
    param_2[1] = bVar3 ^ (byte)((uint)uVar2 >> 0x10);
    param_2[2] = bVar4 ^ (byte)((uint)uVar2 >> 8);
    param_2[3] = (byte)uVar2 ^ bVar5;
    uVar2 = *(undefined4 *)(this + uVar16 + 0x10);
    bVar3 = sm_S[uVar13 & 0xff];
    bVar4 = sm_S[uVar11 >> 0x10 & 0xff];
    bVar5 = sm_S[uVar9 >> 8 & 0xff];
    param_2[4] = sm_S[(int)(uVar14 >> 0x18)] ^ (byte)((uint)uVar2 >> 0x18);
    param_2[5] = bVar4 ^ (byte)((uint)uVar2 >> 0x10);
    param_2[6] = bVar5 ^ (byte)((uint)uVar2 >> 8);
    param_2[7] = (byte)uVar2 ^ bVar3;
    uVar2 = *(undefined4 *)(this + uVar16 + 0x14);
    bVar3 = sm_S[uVar9 >> 0x10 & 0xff];
    bVar4 = sm_S[uVar13 >> 8 & 0xff];
    bVar5 = sm_S[uVar14 & 0xff];
    param_2[8] = sm_S[(int)(uVar11 >> 0x18)] ^ (byte)((uint)uVar2 >> 0x18);
    param_2[9] = bVar3 ^ (byte)((uint)uVar2 >> 0x10);
    param_2[10] = bVar4 ^ (byte)((uint)uVar2 >> 8);
    param_2[0xb] = (byte)uVar2 ^ bVar5;
    uVar2 = *(undefined4 *)(this + uVar16 + 0x18);
    bVar3 = sm_S[uVar13 >> 0x10 & 0xff];
    param_2[0xc] = sm_S[(int)((uint)uVar9 >> 0x18)] ^ (byte)((uint)uVar2 >> 0x18);
    param_2[0xd] = bVar3 ^ (byte)((uint)uVar2 >> 0x10);
    bVar3 = sm_S[uVar11 & 0xff];
    param_2[0xe] = sm_S[uVar14 >> 8 & 0xff] ^ (byte)((uint)uVar2 >> 8);
    param_2[0xf] = (byte)uVar2 ^ bVar3;
  }
  return;
}


/* CRijndael::DefDecryptBlock(char const*, char*) */

void __thiscall CRijndael::DefDecryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  CRijndael *pCVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  CRijndael *pCVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  
  if (this[8] != (CRijndael)0x0) {
    iVar18 = *(int *)(this + 0x3d4);
    uVar14 = (ulong)(((uint)(byte)param_1[1] << 0x10 | (uint)(byte)*param_1 << 0x18 |
                      (uint)(byte)param_1[3] | (uint)(byte)param_1[2] << 8) ^
                    *(uint *)(this + 0x1ec));
    uVar17 = (ulong)(((uint)(byte)param_1[5] << 0x10 | (uint)(byte)param_1[4] << 0x18 |
                      (uint)(byte)param_1[7] | (uint)(byte)param_1[6] << 8) ^
                    *(uint *)(this + 0x1f0));
    uVar15 = (ulong)(((uint)(byte)param_1[9] << 0x10 | (uint)(byte)param_1[8] << 0x18 |
                      (uint)(byte)param_1[0xb] | (uint)(byte)param_1[10] << 8) ^
                    *(uint *)(this + 500));
    uVar11 = (ulong)(((uint)(byte)param_1[0xd] << 0x10 | (uint)(byte)param_1[0xc] << 0x18 |
                      (uint)(byte)param_1[0xf] | (uint)(byte)param_1[0xe] << 8) ^
                    *(uint *)(this + 0x1f8));
    if (1 < iVar18) {
      pCVar12 = this + 0x20c;
      do {
        uVar9 = uVar15 >> 0x10;
        uVar7 = uVar17 >> 0x10;
        uVar16 = (uint)uVar17;
        uVar13 = (uint)uVar14;
        pCVar1 = pCVar12 + 0x20;
        uVar8 = uVar14 >> 8;
        uVar10 = uVar17 >> 8;
        uVar17 = (ulong)(*(uint *)(pCVar12 + 4) ^
                         *(uint *)(sm_T8 + (long)(int)((uint)uVar15 & 0xff) * 4) ^
                         *(uint *)(sm_T6 + (long)(int)((uint)(uVar14 >> 0x10) & 0xff) * 4) ^
                         *(uint *)(sm_T7 + (long)(int)((uint)(uVar11 >> 8) & 0xff) * 4) ^
                        *(uint *)(sm_T5 + (long)(int)(uVar16 >> 0x18) * 4));
        uVar14 = (ulong)(*(uint *)pCVar12 ^ *(uint *)(sm_T8 + (long)(int)(uVar16 & 0xff) * 4) ^
                         *(uint *)(sm_T6 + (long)(int)((uint)(uVar11 >> 0x10) & 0xff) * 4) ^
                         *(uint *)(sm_T7 + (long)(int)((uint)(uVar15 >> 8) & 0xff) * 4) ^
                        *(uint *)(sm_T5 + (long)(int)(uVar13 >> 0x18) * 4));
        uVar15 = (ulong)(*(uint *)(pCVar12 + 8) ^
                         *(uint *)(sm_T8 + (long)(int)((uint)uVar11 & 0xff) * 4) ^
                         *(uint *)(sm_T6 + (long)(int)((uint)uVar7 & 0xff) * 4) ^
                         *(uint *)(sm_T7 + (long)(int)((uint)uVar8 & 0xff) * 4) ^
                        *(uint *)(sm_T5 + (long)(int)((uint)uVar15 >> 0x18) * 4));
        uVar11 = (ulong)(*(uint *)(pCVar12 + 0xc) ^
                         *(uint *)(sm_T8 + (long)(int)(uVar13 & 0xff) * 4) ^
                         *(uint *)(sm_T6 + (long)(int)((uint)uVar9 & 0xff) * 4) ^
                         *(uint *)(sm_T7 + (long)(int)((uint)uVar10 & 0xff) * 4) ^
                        *(uint *)(sm_T5 + (long)(int)((uint)uVar11 >> 0x18) * 4));
        pCVar12 = pCVar1;
      } while (pCVar1 != this + (ulong)(iVar18 - 2) * 0x20 + 0x22c);
    }
    lVar2 = (long)iVar18 + 0xf;
    uVar3 = *(undefined4 *)(this + lVar2 * 0x20 + 0xc);
    bVar4 = sm_Si[uVar11 >> 0x10 & 0xff];
    bVar5 = sm_Si[uVar15 >> 8 & 0xff];
    bVar6 = sm_Si[uVar17 & 0xff];
    *param_2 = sm_Si[(int)(uVar14 >> 0x18)] ^ (byte)((uint)uVar3 >> 0x18);
    param_2[1] = bVar4 ^ (byte)((uint)uVar3 >> 0x10);
    param_2[2] = bVar5 ^ (byte)((uint)uVar3 >> 8);
    param_2[3] = (byte)uVar3 ^ bVar6;
    uVar3 = *(undefined4 *)(this + lVar2 * 0x20 + 0x10);
    bVar4 = sm_Si[uVar15 & 0xff];
    bVar5 = sm_Si[uVar14 >> 0x10 & 0xff];
    bVar6 = sm_Si[uVar11 >> 8 & 0xff];
    param_2[4] = sm_Si[(int)((uint)uVar17 >> 0x18)] ^ (byte)((uint)uVar3 >> 0x18);
    param_2[5] = bVar5 ^ (byte)((uint)uVar3 >> 0x10);
    param_2[6] = bVar6 ^ (byte)((uint)uVar3 >> 8);
    param_2[7] = (byte)uVar3 ^ bVar4;
    bVar4 = sm_Si[uVar11 & 0xff];
    uVar3 = *(undefined4 *)(this + lVar2 * 0x20 + 0x14);
    bVar5 = sm_Si[uVar17 >> 0x10 & 0xff];
    bVar6 = sm_Si[uVar14 >> 8 & 0xff];
    param_2[8] = sm_Si[(int)((uint)uVar15 >> 0x18)] ^ (byte)((uint)uVar3 >> 0x18);
    param_2[9] = bVar5 ^ (byte)((uint)uVar3 >> 0x10);
    param_2[10] = bVar6 ^ (byte)((uint)uVar3 >> 8);
    param_2[0xb] = (byte)uVar3 ^ bVar4;
    uVar3 = *(undefined4 *)(this + lVar2 * 0x20 + 0x18);
    bVar4 = sm_Si[uVar15 >> 0x10 & 0xff];
    param_2[0xc] = sm_Si[(int)((uint)uVar11 >> 0x18)] ^ (byte)((uint)uVar3 >> 0x18);
    param_2[0xd] = bVar4 ^ (byte)((uint)uVar3 >> 0x10);
    bVar4 = sm_Si[uVar14 & 0xff];
    param_2[0xe] = sm_Si[uVar17 >> 8 & 0xff] ^ (byte)((uint)uVar3 >> 8);
    param_2[0xf] = (byte)uVar3 ^ bVar4;
  }
  return;
}


/* CRijndael::EncryptBlock(char const*, char*) */

void __thiscall CRijndael::EncryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CRijndael *__dest;
  long lVar9;
  CRijndael *pCVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (this[8] == (CRijndael)0x0) {
    return;
  }
  iVar12 = *(int *)(this + 0x3d0);
  if (iVar12 == 0x10) {
    DefEncryptBlock(this,param_1,param_2);
    return;
  }
  iVar2 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar2 = iVar12;
  }
  iVar2 = iVar2 >> 2;
  if (iVar2 == 4) {
    iVar12 = 0;
LAB_053094d8:
    lVar9 = (long)iVar12 * 0x20;
    iVar12 = *(int *)(sm_shifts + lVar9 + 8);
    iVar11 = *(int *)(sm_shifts + lVar9 + 0x10);
    iVar13 = *(int *)(sm_shifts + lVar9 + 0x18);
LAB_05308e04:
    pCVar10 = this + 0x458;
    bVar4 = *param_1;
    *(uint *)pCVar10 = (uint)bVar4 << 0x18;
    uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[1] << 0x10;
    *(uint *)pCVar10 = uVar5;
    uVar5 = uVar5 | (uint)(byte)param_1[2] << 8;
    *(uint *)pCVar10 = uVar5;
    uVar5 = uVar5 | (byte)param_1[3];
    *(uint *)pCVar10 = uVar5;
    *(uint *)pCVar10 = uVar5 ^ *(uint *)(this + 0xc);
    if (1 < iVar2) {
      bVar4 = param_1[4];
      *(uint *)(this + 0x45c) = (uint)bVar4 << 0x18;
      uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[5] << 0x10;
      *(uint *)(this + 0x45c) = uVar5;
      uVar5 = uVar5 | (uint)(byte)param_1[6] << 8;
      *(uint *)(this + 0x45c) = uVar5;
      uVar5 = uVar5 | (byte)param_1[7];
      *(uint *)(this + 0x45c) = uVar5;
      *(uint *)(this + 0x45c) = uVar5 ^ *(uint *)(this + 0x10);
      if (iVar2 != 2) {
        bVar4 = param_1[8];
        *(uint *)(this + 0x460) = (uint)bVar4 << 0x18;
        uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[9] << 0x10;
        *(uint *)(this + 0x460) = uVar5;
        uVar5 = uVar5 | (uint)(byte)param_1[10] << 8;
        *(uint *)(this + 0x460) = uVar5;
        uVar5 = uVar5 | (byte)param_1[0xb];
        *(uint *)(this + 0x460) = uVar5;
        *(uint *)(this + 0x460) = uVar5 ^ *(uint *)(this + 0x14);
        if (iVar2 != 3) {
          bVar4 = param_1[0xc];
          *(uint *)(this + 0x464) = (uint)bVar4 << 0x18;
          uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0xd] << 0x10;
          *(uint *)(this + 0x464) = uVar5;
          uVar5 = uVar5 | (uint)(byte)param_1[0xe] << 8;
          *(uint *)(this + 0x464) = uVar5;
          uVar5 = uVar5 | (byte)param_1[0xf];
          *(uint *)(this + 0x464) = uVar5;
          *(uint *)(this + 0x464) = uVar5 ^ *(uint *)(this + 0x18);
          if (iVar2 != 4) {
            bVar4 = param_1[0x10];
            *(uint *)(this + 0x468) = (uint)bVar4 << 0x18;
            uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x11] << 0x10;
            *(uint *)(this + 0x468) = uVar5;
            uVar5 = uVar5 | (uint)(byte)param_1[0x12] << 8;
            *(uint *)(this + 0x468) = uVar5;
            uVar5 = uVar5 | (byte)param_1[0x13];
            *(uint *)(this + 0x468) = uVar5;
            *(uint *)(this + 0x468) = uVar5 ^ *(uint *)(this + 0x1c);
            if (iVar2 != 5) {
              bVar4 = param_1[0x14];
              *(uint *)(this + 0x46c) = (uint)bVar4 << 0x18;
              uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x15] << 0x10;
              *(uint *)(this + 0x46c) = uVar5;
              uVar5 = uVar5 | (uint)(byte)param_1[0x16] << 8;
              *(uint *)(this + 0x46c) = uVar5;
              uVar5 = uVar5 | (byte)param_1[0x17];
              *(uint *)(this + 0x46c) = uVar5;
              *(uint *)(this + 0x46c) = uVar5 ^ *(uint *)(this + 0x20);
              if (iVar2 != 6) {
                bVar4 = param_1[0x18];
                *(uint *)(this + 0x470) = (uint)bVar4 << 0x18;
                uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x19] << 0x10;
                *(uint *)(this + 0x470) = uVar5;
                uVar5 = uVar5 | (uint)(byte)param_1[0x1a] << 8;
                *(uint *)(this + 0x470) = uVar5;
                uVar5 = uVar5 | (byte)param_1[0x1b];
                *(uint *)(this + 0x470) = uVar5;
                *(uint *)(this + 0x470) = uVar5 ^ *(uint *)(this + 0x24);
                if (iVar2 != 7) {
                  bVar4 = param_1[0x1c];
                  *(uint *)(this + 0x474) = (uint)bVar4 << 0x18;
                  uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x1d] << 0x10;
                  *(uint *)(this + 0x474) = uVar5;
                  uVar5 = uVar5 | (uint)(byte)param_1[0x1e] << 8;
                  *(uint *)(this + 0x474) = uVar5;
                  uVar5 = uVar5 | (byte)param_1[0x1f];
                  *(uint *)(this + 0x474) = uVar5;
                  *(uint *)(this + 0x474) = uVar5 ^ *(uint *)(this + 0x28);
                }
              }
            }
          }
        }
      }
    }
    uVar5 = *(uint *)(this + 0x3d4);
    if ((int)uVar5 < 2) goto LAB_05309408;
  }
  else {
    if (iVar2 == 6) {
      iVar12 = 1;
      goto LAB_053094d8;
    }
    if (0 < iVar2) {
      iVar13 = 4;
      iVar11 = 3;
      iVar12 = 1;
      goto LAB_05308e04;
    }
    if (*(int *)(this + 0x3d4) < 2) {
      return;
    }
    iVar13 = 4;
    iVar11 = 3;
    iVar12 = 1;
  }
  __dest = this + 0x458;
  iVar14 = 1;
  pCVar10 = this + 0x48;
  do {
    if (0 < iVar2) {
      iVar8 = 0;
      if (iVar2 != 0) {
        iVar8 = iVar13 / iVar2;
      }
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar6 = iVar12 / iVar2;
      }
      iVar7 = 0;
      if (iVar2 != 0) {
        iVar7 = iVar11 / iVar2;
      }
      *(uint *)(this + 0x438) =
           *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)(iVar13 - iVar8 * iVar2) * 4 + 0x458]
                             * 4) ^ *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x45b] * 4) ^
           *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)(iVar12 - iVar6 * iVar2) * 4 + 0x45a]
                             * 4) ^
           *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)(iVar11 - iVar7 * iVar2) * 4 + 0x459]
                             * 4) ^ *(uint *)(pCVar10 + -0x1c);
      if (iVar2 != 1) {
        iVar8 = 0;
        if (iVar2 != 0) {
          iVar8 = (iVar13 + 1) / iVar2;
        }
        iVar6 = 0;
        if (iVar2 != 0) {
          iVar6 = (iVar12 + 1) / iVar2;
        }
        iVar7 = 0;
        if (iVar2 != 0) {
          iVar7 = (iVar11 + 1) / iVar2;
        }
        *(uint *)(this + 0x43c) =
             *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 1) - iVar8 * iVar2) * 4
                                                           + 0x458] * 4) ^
             *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x45f] * 4) ^
             *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 1) - iVar6 * iVar2) * 4
                                                           + 0x45a] * 4) ^
             *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 1) - iVar7 * iVar2) * 4
                                                           + 0x459] * 4) ^
             *(uint *)(pCVar10 + -0x18);
        if (iVar2 != 2) {
          iVar8 = 0;
          if (iVar2 != 0) {
            iVar8 = (iVar13 + 2) / iVar2;
          }
          iVar6 = 0;
          if (iVar2 != 0) {
            iVar6 = (iVar12 + 2) / iVar2;
          }
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar7 = (iVar11 + 2) / iVar2;
          }
          *(uint *)(this + 0x440) =
               *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 2) - iVar8 * iVar2) *
                                                             4 + 0x458] * 4) ^
               *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x463] * 4) ^
               *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 2) - iVar6 * iVar2) *
                                                             4 + 0x45a] * 4) ^
               *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 2) - iVar7 * iVar2) *
                                                             4 + 0x459] * 4) ^
               *(uint *)(pCVar10 + -0x14);
          if (iVar2 != 3) {
            iVar8 = 0;
            if (iVar2 != 0) {
              iVar8 = (iVar13 + 3) / iVar2;
            }
            iVar6 = 0;
            if (iVar2 != 0) {
              iVar6 = (iVar12 + 3) / iVar2;
            }
            iVar7 = 0;
            if (iVar2 != 0) {
              iVar7 = (iVar11 + 3) / iVar2;
            }
            *(uint *)(this + 0x444) =
                 *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 3) - iVar8 * iVar2)
                                                               * 4 + 0x458] * 4) ^
                 *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x467] * 4) ^
                 *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 3) - iVar6 * iVar2)
                                                               * 4 + 0x45a] * 4) ^
                 *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 3) - iVar7 * iVar2)
                                                               * 4 + 0x459] * 4) ^
                 *(uint *)(pCVar10 + -0x10);
            if (iVar2 != 4) {
              iVar8 = 0;
              if (iVar2 != 0) {
                iVar8 = (iVar13 + 4) / iVar2;
              }
              iVar6 = 0;
              if (iVar2 != 0) {
                iVar6 = (iVar12 + 4) / iVar2;
              }
              iVar7 = 0;
              if (iVar2 != 0) {
                iVar7 = (iVar11 + 4) / iVar2;
              }
              *(uint *)(this + 0x448) =
                   *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 4) - iVar8 * iVar2
                                                                       ) * 4 + 0x458] * 4) ^
                   *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x46b] * 4) ^
                   *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 4) - iVar6 * iVar2
                                                                       ) * 4 + 0x45a] * 4) ^
                   *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 4) - iVar7 * iVar2
                                                                       ) * 4 + 0x459] * 4) ^
                   *(uint *)(pCVar10 + -0xc);
              if (iVar2 != 5) {
                iVar8 = 0;
                if (iVar2 != 0) {
                  iVar8 = (iVar13 + 5) / iVar2;
                }
                iVar6 = 0;
                if (iVar2 != 0) {
                  iVar6 = (iVar12 + 5) / iVar2;
                }
                iVar7 = 0;
                if (iVar2 != 0) {
                  iVar7 = (iVar11 + 5) / iVar2;
                }
                *(uint *)(this + 0x44c) =
                     *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 5) -
                                                                         iVar8 * iVar2) * 4 + 0x458]
                                       * 4) ^
                     *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x46f] * 4) ^
                     *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 5) -
                                                                         iVar6 * iVar2) * 4 + 0x45a]
                                       * 4) ^
                     *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 5) -
                                                                         iVar7 * iVar2) * 4 + 0x459]
                                       * 4) ^ *(uint *)(pCVar10 + -8);
                if (iVar2 != 6) {
                  iVar8 = 0;
                  if (iVar2 != 0) {
                    iVar8 = (iVar13 + 6) / iVar2;
                  }
                  iVar6 = 0;
                  if (iVar2 != 0) {
                    iVar6 = (iVar12 + 6) / iVar2;
                  }
                  iVar7 = 0;
                  if (iVar2 != 0) {
                    iVar7 = (iVar11 + 6) / iVar2;
                  }
                  *(uint *)(this + 0x450) =
                       *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 6) -
                                                                           iVar8 * iVar2) * 4 +
                                                                     0x458] * 4) ^
                       *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x473] * 4) ^
                       *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 6) -
                                                                           iVar6 * iVar2) * 4 +
                                                                     0x45a] * 4) ^
                       *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 6) -
                                                                           iVar7 * iVar2) * 4 +
                                                                     0x459] * 4) ^
                       *(uint *)(pCVar10 + -4);
                  if (iVar2 != 7) {
                    iVar8 = 0;
                    if (iVar2 != 0) {
                      iVar8 = (iVar13 + 7) / iVar2;
                    }
                    iVar6 = 0;
                    if (iVar2 != 0) {
                      iVar6 = (iVar12 + 7) / iVar2;
                    }
                    iVar7 = 0;
                    if (iVar2 != 0) {
                      iVar7 = (iVar11 + 7) / iVar2;
                    }
                    *(uint *)(this + 0x454) =
                         *(uint *)(sm_T4 + (long)(int)(uint)(byte)this[(long)((iVar13 + 7) -
                                                                             iVar8 * iVar2) * 4 +
                                                                       0x458] * 4) ^
                         *(uint *)(sm_T1 + (long)(int)(uint)(byte)this[0x477] * 4) ^
                         *(uint *)(sm_T2 + (long)(int)(uint)(byte)this[(long)((iVar12 + 7) -
                                                                             iVar6 * iVar2) * 4 +
                                                                       0x45a] * 4) ^
                         *(uint *)(sm_T3 + (long)(int)(uint)(byte)this[(long)((iVar11 + 7) -
                                                                             iVar7 * iVar2) * 4 +
                                                                       0x459] * 4) ^
                         *(uint *)pCVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar14 = iVar14 + 1;
    pCVar10 = pCVar10 + 0x20;
    __dest = memcpy(__dest,this + 0x438,(long)(iVar2 << 2));
    uVar5 = *(uint *)(this + 0x3d4);
  } while (iVar14 < (int)uVar5);
  if (iVar2 < 1) {
    return;
  }
LAB_05309408:
  lVar9 = 0;
  while( true ) {
    iVar8 = (int)lVar9;
    lVar1 = lVar9 * 4;
    iVar14 = 0;
    if (iVar2 != 0) {
      iVar14 = (iVar12 + iVar8) / iVar2;
    }
    uVar3 = *(undefined4 *)
             (this + ((-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3) +
                     (long)iVar8) * 4 + 0xc);
    lVar9 = lVar9 + 1;
    *param_2 = sm_S[(byte)this[lVar1 + 0x45b]] ^ (byte)((uint)uVar3 >> 0x18);
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = (iVar11 + iVar8) / iVar2;
    }
    param_2[1] = sm_S[(byte)this[(long)((iVar12 + iVar8) - iVar14 * iVar2) * 4 + 0x45a]] ^
                 (byte)((uint)uVar3 >> 0x10);
    iVar14 = 0;
    if (iVar2 != 0) {
      iVar14 = (iVar13 + iVar8) / iVar2;
    }
    param_2[2] = sm_S[(byte)this[(long)((iVar11 + iVar8) - iVar6 * iVar2) * 4 + 0x459]] ^
                 (byte)((uint)uVar3 >> 8);
    param_2[3] = (byte)uVar3 ^
                 sm_S[(byte)this[(long)((iVar13 + iVar8) - iVar14 * iVar2) * 4 + 0x458]];
    if (iVar2 <= (int)lVar9) break;
    uVar5 = *(uint *)(this + 0x3d4);
    param_2 = param_2 + 4;
  }
  return;
}


/* CRijndael::DecryptBlock(char const*, char*) */

void __thiscall CRijndael::DecryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CRijndael *__dest;
  long lVar9;
  CRijndael *pCVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (this[8] == (CRijndael)0x0) {
    return;
  }
  iVar12 = *(int *)(this + 0x3d0);
  if (iVar12 == 0x10) {
    DefDecryptBlock(this,param_1,param_2);
    return;
  }
  iVar2 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar2 = iVar12;
  }
  iVar2 = iVar2 >> 2;
  if (iVar2 == 4) {
    iVar12 = 0;
LAB_05309c88:
    lVar9 = (long)iVar12 * 0x20;
    iVar12 = *(int *)(sm_shifts + lVar9 + 0xc);
    iVar11 = *(int *)(sm_shifts + lVar9 + 0x14);
    iVar13 = *(int *)(sm_shifts + lVar9 + 0x1c);
LAB_053095b4:
    pCVar10 = this + 0x458;
    bVar4 = *param_1;
    *(uint *)pCVar10 = (uint)bVar4 << 0x18;
    uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[1] << 0x10;
    *(uint *)pCVar10 = uVar5;
    uVar5 = uVar5 | (uint)(byte)param_1[2] << 8;
    *(uint *)pCVar10 = uVar5;
    uVar5 = uVar5 | (byte)param_1[3];
    *(uint *)pCVar10 = uVar5;
    *(uint *)pCVar10 = uVar5 ^ *(uint *)(this + 0x1ec);
    if (1 < iVar2) {
      bVar4 = param_1[4];
      *(uint *)(this + 0x45c) = (uint)bVar4 << 0x18;
      uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[5] << 0x10;
      *(uint *)(this + 0x45c) = uVar5;
      uVar5 = uVar5 | (uint)(byte)param_1[6] << 8;
      *(uint *)(this + 0x45c) = uVar5;
      uVar5 = uVar5 | (byte)param_1[7];
      *(uint *)(this + 0x45c) = uVar5;
      *(uint *)(this + 0x45c) = uVar5 ^ *(uint *)(this + 0x1f0);
      if (iVar2 != 2) {
        bVar4 = param_1[8];
        *(uint *)(this + 0x460) = (uint)bVar4 << 0x18;
        uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[9] << 0x10;
        *(uint *)(this + 0x460) = uVar5;
        uVar5 = uVar5 | (uint)(byte)param_1[10] << 8;
        *(uint *)(this + 0x460) = uVar5;
        uVar5 = uVar5 | (byte)param_1[0xb];
        *(uint *)(this + 0x460) = uVar5;
        *(uint *)(this + 0x460) = uVar5 ^ *(uint *)(this + 500);
        if (iVar2 != 3) {
          bVar4 = param_1[0xc];
          *(uint *)(this + 0x464) = (uint)bVar4 << 0x18;
          uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0xd] << 0x10;
          *(uint *)(this + 0x464) = uVar5;
          uVar5 = uVar5 | (uint)(byte)param_1[0xe] << 8;
          *(uint *)(this + 0x464) = uVar5;
          uVar5 = uVar5 | (byte)param_1[0xf];
          *(uint *)(this + 0x464) = uVar5;
          *(uint *)(this + 0x464) = uVar5 ^ *(uint *)(this + 0x1f8);
          if (iVar2 != 4) {
            bVar4 = param_1[0x10];
            *(uint *)(this + 0x468) = (uint)bVar4 << 0x18;
            uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x11] << 0x10;
            *(uint *)(this + 0x468) = uVar5;
            uVar5 = uVar5 | (uint)(byte)param_1[0x12] << 8;
            *(uint *)(this + 0x468) = uVar5;
            uVar5 = uVar5 | (byte)param_1[0x13];
            *(uint *)(this + 0x468) = uVar5;
            *(uint *)(this + 0x468) = uVar5 ^ *(uint *)(this + 0x1fc);
            if (iVar2 != 5) {
              bVar4 = param_1[0x14];
              *(uint *)(this + 0x46c) = (uint)bVar4 << 0x18;
              uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x15] << 0x10;
              *(uint *)(this + 0x46c) = uVar5;
              uVar5 = uVar5 | (uint)(byte)param_1[0x16] << 8;
              *(uint *)(this + 0x46c) = uVar5;
              uVar5 = uVar5 | (byte)param_1[0x17];
              *(uint *)(this + 0x46c) = uVar5;
              *(uint *)(this + 0x46c) = uVar5 ^ *(uint *)(this + 0x200);
              if (iVar2 != 6) {
                bVar4 = param_1[0x18];
                *(uint *)(this + 0x470) = (uint)bVar4 << 0x18;
                uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x19] << 0x10;
                *(uint *)(this + 0x470) = uVar5;
                uVar5 = uVar5 | (uint)(byte)param_1[0x1a] << 8;
                *(uint *)(this + 0x470) = uVar5;
                uVar5 = uVar5 | (byte)param_1[0x1b];
                *(uint *)(this + 0x470) = uVar5;
                *(uint *)(this + 0x470) = uVar5 ^ *(uint *)(this + 0x204);
                if (iVar2 != 7) {
                  bVar4 = param_1[0x1c];
                  *(uint *)(this + 0x474) = (uint)bVar4 << 0x18;
                  uVar5 = (uint)bVar4 << 0x18 | (uint)(byte)param_1[0x1d] << 0x10;
                  *(uint *)(this + 0x474) = uVar5;
                  uVar5 = uVar5 | (uint)(byte)param_1[0x1e] << 8;
                  *(uint *)(this + 0x474) = uVar5;
                  uVar5 = uVar5 | (byte)param_1[0x1f];
                  *(uint *)(this + 0x474) = uVar5;
                  *(uint *)(this + 0x474) = uVar5 ^ *(uint *)(this + 0x208);
                }
              }
            }
          }
        }
      }
    }
    uVar5 = *(uint *)(this + 0x3d4);
    if ((int)uVar5 < 2) goto LAB_05309bb8;
  }
  else {
    if (iVar2 == 6) {
      iVar12 = 1;
      goto LAB_05309c88;
    }
    if (0 < iVar2) {
      iVar13 = 4;
      iVar11 = 5;
      iVar12 = 7;
      goto LAB_053095b4;
    }
    if (*(int *)(this + 0x3d4) < 2) {
      return;
    }
    iVar13 = 4;
    iVar11 = 5;
    iVar12 = 7;
  }
  __dest = this + 0x458;
  iVar14 = 1;
  pCVar10 = this + 0x228;
  do {
    if (0 < iVar2) {
      iVar8 = 0;
      if (iVar2 != 0) {
        iVar8 = iVar13 / iVar2;
      }
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar6 = iVar12 / iVar2;
      }
      iVar7 = 0;
      if (iVar2 != 0) {
        iVar7 = iVar11 / iVar2;
      }
      *(uint *)(this + 0x438) =
           *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)(iVar13 - iVar8 * iVar2) * 4 + 0x458]
                             * 4) ^ *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x45b] * 4) ^
           *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)(iVar12 - iVar6 * iVar2) * 4 + 0x45a]
                             * 4) ^
           *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)(iVar11 - iVar7 * iVar2) * 4 + 0x459]
                             * 4) ^ *(uint *)(pCVar10 + -0x1c);
      if (iVar2 != 1) {
        iVar8 = 0;
        if (iVar2 != 0) {
          iVar8 = (iVar13 + 1) / iVar2;
        }
        iVar6 = 0;
        if (iVar2 != 0) {
          iVar6 = (iVar12 + 1) / iVar2;
        }
        iVar7 = 0;
        if (iVar2 != 0) {
          iVar7 = (iVar11 + 1) / iVar2;
        }
        *(uint *)(this + 0x43c) =
             *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 1) - iVar8 * iVar2) * 4
                                                           + 0x458] * 4) ^
             *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x45f] * 4) ^
             *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 1) - iVar6 * iVar2) * 4
                                                           + 0x45a] * 4) ^
             *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 1) - iVar7 * iVar2) * 4
                                                           + 0x459] * 4) ^
             *(uint *)(pCVar10 + -0x18);
        if (iVar2 != 2) {
          iVar8 = 0;
          if (iVar2 != 0) {
            iVar8 = (iVar13 + 2) / iVar2;
          }
          iVar6 = 0;
          if (iVar2 != 0) {
            iVar6 = (iVar12 + 2) / iVar2;
          }
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar7 = (iVar11 + 2) / iVar2;
          }
          *(uint *)(this + 0x440) =
               *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 2) - iVar8 * iVar2) *
                                                             4 + 0x458] * 4) ^
               *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x463] * 4) ^
               *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 2) - iVar6 * iVar2) *
                                                             4 + 0x45a] * 4) ^
               *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 2) - iVar7 * iVar2) *
                                                             4 + 0x459] * 4) ^
               *(uint *)(pCVar10 + -0x14);
          if (iVar2 != 3) {
            iVar8 = 0;
            if (iVar2 != 0) {
              iVar8 = (iVar13 + 3) / iVar2;
            }
            iVar6 = 0;
            if (iVar2 != 0) {
              iVar6 = (iVar12 + 3) / iVar2;
            }
            iVar7 = 0;
            if (iVar2 != 0) {
              iVar7 = (iVar11 + 3) / iVar2;
            }
            *(uint *)(this + 0x444) =
                 *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 3) - iVar8 * iVar2)
                                                               * 4 + 0x458] * 4) ^
                 *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x467] * 4) ^
                 *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 3) - iVar6 * iVar2)
                                                               * 4 + 0x45a] * 4) ^
                 *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 3) - iVar7 * iVar2)
                                                               * 4 + 0x459] * 4) ^
                 *(uint *)(pCVar10 + -0x10);
            if (iVar2 != 4) {
              iVar8 = 0;
              if (iVar2 != 0) {
                iVar8 = (iVar13 + 4) / iVar2;
              }
              iVar6 = 0;
              if (iVar2 != 0) {
                iVar6 = (iVar12 + 4) / iVar2;
              }
              iVar7 = 0;
              if (iVar2 != 0) {
                iVar7 = (iVar11 + 4) / iVar2;
              }
              *(uint *)(this + 0x448) =
                   *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 4) - iVar8 * iVar2
                                                                       ) * 4 + 0x458] * 4) ^
                   *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x46b] * 4) ^
                   *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 4) - iVar6 * iVar2
                                                                       ) * 4 + 0x45a] * 4) ^
                   *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 4) - iVar7 * iVar2
                                                                       ) * 4 + 0x459] * 4) ^
                   *(uint *)(pCVar10 + -0xc);
              if (iVar2 != 5) {
                iVar8 = 0;
                if (iVar2 != 0) {
                  iVar8 = (iVar13 + 5) / iVar2;
                }
                iVar6 = 0;
                if (iVar2 != 0) {
                  iVar6 = (iVar12 + 5) / iVar2;
                }
                iVar7 = 0;
                if (iVar2 != 0) {
                  iVar7 = (iVar11 + 5) / iVar2;
                }
                *(uint *)(this + 0x44c) =
                     *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 5) -
                                                                         iVar8 * iVar2) * 4 + 0x458]
                                       * 4) ^
                     *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x46f] * 4) ^
                     *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 5) -
                                                                         iVar6 * iVar2) * 4 + 0x45a]
                                       * 4) ^
                     *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 5) -
                                                                         iVar7 * iVar2) * 4 + 0x459]
                                       * 4) ^ *(uint *)(pCVar10 + -8);
                if (iVar2 != 6) {
                  iVar8 = 0;
                  if (iVar2 != 0) {
                    iVar8 = (iVar13 + 6) / iVar2;
                  }
                  iVar6 = 0;
                  if (iVar2 != 0) {
                    iVar6 = (iVar12 + 6) / iVar2;
                  }
                  iVar7 = 0;
                  if (iVar2 != 0) {
                    iVar7 = (iVar11 + 6) / iVar2;
                  }
                  *(uint *)(this + 0x450) =
                       *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 6) -
                                                                           iVar8 * iVar2) * 4 +
                                                                     0x458] * 4) ^
                       *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x473] * 4) ^
                       *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 6) -
                                                                           iVar6 * iVar2) * 4 +
                                                                     0x45a] * 4) ^
                       *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 6) -
                                                                           iVar7 * iVar2) * 4 +
                                                                     0x459] * 4) ^
                       *(uint *)(pCVar10 + -4);
                  if (iVar2 != 7) {
                    iVar8 = 0;
                    if (iVar2 != 0) {
                      iVar8 = (iVar13 + 7) / iVar2;
                    }
                    iVar6 = 0;
                    if (iVar2 != 0) {
                      iVar6 = (iVar12 + 7) / iVar2;
                    }
                    iVar7 = 0;
                    if (iVar2 != 0) {
                      iVar7 = (iVar11 + 7) / iVar2;
                    }
                    *(uint *)(this + 0x454) =
                         *(uint *)(sm_T8 + (long)(int)(uint)(byte)this[(long)((iVar13 + 7) -
                                                                             iVar8 * iVar2) * 4 +
                                                                       0x458] * 4) ^
                         *(uint *)(sm_T5 + (long)(int)(uint)(byte)this[0x477] * 4) ^
                         *(uint *)(sm_T6 + (long)(int)(uint)(byte)this[(long)((iVar12 + 7) -
                                                                             iVar6 * iVar2) * 4 +
                                                                       0x45a] * 4) ^
                         *(uint *)(sm_T7 + (long)(int)(uint)(byte)this[(long)((iVar11 + 7) -
                                                                             iVar7 * iVar2) * 4 +
                                                                       0x459] * 4) ^
                         *(uint *)pCVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar14 = iVar14 + 1;
    pCVar10 = pCVar10 + 0x20;
    __dest = memcpy(__dest,this + 0x438,(long)(iVar2 << 2));
    uVar5 = *(uint *)(this + 0x3d4);
  } while (iVar14 < (int)uVar5);
  if (iVar2 < 1) {
    return;
  }
LAB_05309bb8:
  lVar9 = 0;
  while( true ) {
    iVar8 = (int)lVar9;
    lVar1 = lVar9 * 4;
    iVar14 = 0;
    if (iVar2 != 0) {
      iVar14 = (iVar12 + iVar8) / iVar2;
    }
    uVar3 = *(undefined4 *)
             (this + ((-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3) +
                     (long)iVar8) * 4 + 0x1ec);
    lVar9 = lVar9 + 1;
    *param_2 = sm_Si[(byte)this[lVar1 + 0x45b]] ^ (byte)((uint)uVar3 >> 0x18);
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = (iVar11 + iVar8) / iVar2;
    }
    param_2[1] = sm_Si[(byte)this[(long)((iVar12 + iVar8) - iVar14 * iVar2) * 4 + 0x45a]] ^
                 (byte)((uint)uVar3 >> 0x10);
    iVar14 = 0;
    if (iVar2 != 0) {
      iVar14 = (iVar13 + iVar8) / iVar2;
    }
    param_2[2] = sm_Si[(byte)this[(long)((iVar11 + iVar8) - iVar6 * iVar2) * 4 + 0x459]] ^
                 (byte)((uint)uVar3 >> 8);
    param_2[3] = (byte)uVar3 ^
                 sm_Si[(byte)this[(long)((iVar13 + iVar8) - iVar14 * iVar2) * 4 + 0x458]];
    if (iVar2 <= (int)lVar9) break;
    uVar5 = *(uint *)(this + 0x3d4);
    param_2 = param_2 + 4;
  }
  return;
}


/* CRijndael::Encrypt(char const*, char*, int, int) */

void __thiscall
CRijndael::Encrypt(CRijndael *this,char *param_1,char *param_2,int param_3,int param_4)

{
  CRijndael *__dest;
  int iVar1;
  int iVar2;
  CRijndael CVar3;
  size_t sVar4;
  int iVar5;
  
  if ((param_3 == 0) < (byte)this[8]) {
    iVar5 = *(int *)(this + 0x3d0);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = param_3 / iVar5;
    }
    if (param_3 == iVar1 * iVar5) {
      if (param_4 == 1) {
        if (0 < iVar1) {
          __dest = this + 0x3f8;
          CVar3 = (CRijndael)0x1;
          iVar5 = 0;
          while( true ) {
            iVar5 = iVar5 + 1;
            FUN_05307504(CVar3,this + 0x3d0,__dest,param_1);
            EncryptBlock(this,(char *)__dest,param_2);
            iVar1 = *(int *)(this + 0x3d0);
            sVar4 = (size_t)iVar1;
            param_1 = param_1 + sVar4;
            memcpy(__dest,param_2,sVar4);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = param_3 / iVar1;
            }
            if (iVar2 <= iVar5) break;
            CVar3 = this[8];
            param_2 = param_2 + sVar4;
          }
        }
      }
      else if (param_4 == 2) {
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
            EncryptBlock(this,(char *)(this + 0x3f8),param_2);
            FUN_05307504(this[8],this + 0x3d0,param_2,param_1);
            iVar1 = *(int *)(this + 0x3d0);
            sVar4 = (size_t)iVar1;
            param_1 = param_1 + sVar4;
            memcpy(this + 0x3f8,param_2,sVar4);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = param_3 / iVar1;
            }
            param_2 = param_2 + sVar4;
          } while (iVar5 < iVar2);
        }
      }
      else {
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            iVar5 = iVar5 + 1;
            EncryptBlock(this,param_1,param_2);
            iVar1 = *(int *)(this + 0x3d0);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = param_3 / iVar1;
            }
            param_1 = param_1 + iVar1;
            param_2 = param_2 + iVar1;
          } while (iVar5 < iVar2);
        }
      }
    }
  }
  return;
}


/* CRijndael::Decrypt(char const*, char*, int, int) */

void __thiscall
CRijndael::Decrypt(CRijndael *this,char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  
  if ((param_3 == 0) < (byte)this[8]) {
    iVar4 = *(int *)(this + 0x3d0);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = param_3 / iVar4;
    }
    if (param_3 == iVar1 * iVar4) {
      if (param_4 == 1) {
        if (0 < iVar1) {
          iVar4 = 0;
          do {
            iVar4 = iVar4 + 1;
            DecryptBlock(this,param_1,param_2);
            FUN_05307504(this[8],this + 0x3d0,param_2,this + 0x3f8);
            iVar1 = *(int *)(this + 0x3d0);
            sVar3 = (size_t)iVar1;
            param_2 = param_2 + sVar3;
            memcpy(this + 0x3f8,param_1,sVar3);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = param_3 / iVar1;
            }
            param_1 = param_1 + sVar3;
          } while (iVar4 < iVar2);
        }
      }
      else if (param_4 == 2) {
        if (0 < iVar1) {
          iVar4 = 0;
          do {
            iVar4 = iVar4 + 1;
            EncryptBlock(this,(char *)(this + 0x3f8),param_2);
            FUN_05307504(this[8],this + 0x3d0,param_2,param_1);
            iVar1 = *(int *)(this + 0x3d0);
            sVar3 = (size_t)iVar1;
            param_2 = param_2 + sVar3;
            memcpy(this + 0x3f8,param_1,sVar3);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = param_3 / iVar1;
            }
            param_1 = param_1 + sVar3;
          } while (iVar4 < iVar2);
        }
      }
      else {
        iVar4 = 0;
        if (0 < iVar1) {
          do {
            iVar4 = iVar4 + 1;
            DecryptBlock(this,param_1,param_2);
            iVar1 = *(int *)(this + 0x3d0);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = param_3 / iVar1;
            }
            param_1 = param_1 + iVar1;
            param_2 = param_2 + iVar1;
          } while (iVar4 < iVar2);
        }
      }
    }
  }
  return;
}

