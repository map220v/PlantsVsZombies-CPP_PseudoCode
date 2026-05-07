// Class: Sexy::SWHelper


/* Sexy::SWHelper::SWDrawTriangle(bool, bool, bool, bool, Sexy::SWHelper::SWVertex*, unsigned int*,
   unsigned int, Sexy::SWHelper::SWTextureInfo const*, Sexy::SWHelper::SWDiffuse&, int, bool, bool)
    */

void Sexy::SWHelper::SWDrawTriangle
               (bool param_1,bool param_2,bool param_3,bool param_4,SWVertex *param_5,uint *param_6,
               uint param_7,SWTextureInfo *param_8,SWDiffuse *param_9,int param_10,bool param_11,
               bool param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 2;
  if (!param_4) {
    uVar2 = 0;
  }
  uVar3 = 4;
  if (!param_3) {
    uVar3 = 0;
  }
  uVar4 = 8;
  if (!param_2) {
    uVar4 = 0;
  }
  uVar1 = 0x10;
  if (!param_1) {
    uVar1 = 0;
  }
  uVar5 = 0x80;
  if (!param_12) {
    uVar5 = 0;
  }
  uVar5 = uVar2 | param_11 | uVar3 | uVar4 | uVar1 | uVar5;
  if (param_10 == 0x565) {
    uVar2 = uVar5 | 0x40;
  }
  else if (param_10 == 0x888) {
    uVar2 = uVar5 | 0x20;
  }
  else {
    uVar2 = uVar5 | 0x60;
    if (param_10 != 0x555) {
      uVar2 = uVar5;
    }
  }
  if ((code *)(&DAT_06bbe460)[(int)uVar2] != (code *)0x0) {
    (*(code *)(&DAT_06bbe460)[(int)uVar2])(param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SWHelper::SWDrawShape(Sexy::SWHelper::XYZStruct*, int, Sexy::MemoryImage*, Sexy::Color
   const&, int, Sexy::TRect<int> const&, void*, int, int, bool, bool) */

void Sexy::SWHelper::SWDrawShape
               (XYZStruct *param_1,int param_2,MemoryImage *param_3,Color *param_4,int param_5,
               TRect *param_6,void *param_7,int param_8,int param_9,bool param_10,bool param_11)

{
  SWVertex *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  SWVertex *pSVar12;
  long *plVar13;
  ulong uVar14;
  bool bVar15;
  byte bVar16;
  float fVar17;
  XYZStruct *local_c58;
  undefined4 local_c38;
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  undefined8 local_c28;
  int local_c20;
  int local_c1c;
  int local_c18;
  uint local_c14;
  int local_c10;
  int local_c0c;
  XYZStruct *local_c08;
  XYZStruct *local_c00;
  XYZStruct *local_bf8;
  undefined8 local_bf0;
  long alStack_a08 [64];
  SWVertex local_808 [4];
  undefined4 local_804;
  SWVertex local_800 [4];
  undefined4 local_7fc [3];
  SWVertex local_7f0 [4];
  undefined4 local_7ec;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8 [248];
  long local_8;
  
  iVar2 = *(int *)param_6;
  iVar3 = *(int *)(param_6 + 4);
  iVar4 = *(int *)(param_6 + 8);
  iVar5 = *(int *)(param_6 + 0xc);
  local_c38 = *(undefined4 *)(param_4 + 0xc);
  local_c34 = *(undefined4 *)param_4;
  local_8 = ___stack_chk_guard;
  local_c2c = *(undefined4 *)(param_4 + 8);
  local_c30 = *(undefined4 *)(param_4 + 4);
  Color::Color((Color *)&local_c28,1);
  bVar9 = (bool)TRect<int>::operator!=((TRect<int> *)param_4,(TRect *)&local_c28);
  if (param_3 == (MemoryImage *)0x0) {
    bVar15 = false;
    bVar16 = bVar15;
  }
  else {
    (**(code **)(*(long *)param_3 + 0xa0))(param_3);
    if (param_3[0x92] == (MemoryImage)0x0) {
      bVar15 = true;
      bVar16 = (byte)param_3[0x91] | param_10;
    }
    else {
      bVar15 = true;
      bVar16 = true;
    }
  }
  if (2 < param_2) {
    local_c58 = param_1 + 0x14;
    bVar8 = false;
    do {
      local_c08 = local_c58 + -0x14;
      if (bVar8) {
        local_c00 = local_c58 + 0x14;
        local_bf8 = local_c58;
      }
      else {
        local_bf8 = local_c58 + 0x14;
        local_c00 = local_c58;
      }
      local_c58 = local_c58 + 0x14;
      local_bf0 = 0;
      uVar10 = FUN_052bdd94((float)iVar2,(float)(iVar2 + iVar4 + -1),(float)iVar3,
                            (float)(iVar3 + iVar5 + -1),alStack_a08,&local_c08);
      if (uVar10 != 0) {
        uVar14 = (ulong)(uVar10 - 1);
        pSVar12 = local_808;
        plVar13 = alStack_a08;
        do {
          pSVar1 = pSVar12 + 0x20;
          fVar17 = ((float *)*plVar13)[1];
          *(int *)pSVar12 = (int)(*(float *)*plVar13 * 65536.0);
          *(int *)(pSVar12 + 4) = (int)(fVar17 * 65536.0);
          pSVar12 = pSVar1;
          plVar13 = plVar13 + 1;
        } while (pSVar1 != local_808 + (uVar14 + 1) * 0x20);
        if (bVar15 != false) {
          iVar6 = *(int *)(param_3 + 0x38);
          iVar7 = *(int *)(param_3 + 0x3c);
          pSVar12 = local_7f0;
          plVar13 = alStack_a08;
          do {
            pSVar1 = pSVar12 + 0x20;
            fVar17 = *(float *)(*plVar13 + 0xc);
            *(int *)pSVar12 = (int)(*(float *)(*plVar13 + 8) * 65536.0 * (float)iVar6);
            *(int *)(pSVar12 + 4) = (int)(fVar17 * 65536.0 * (float)iVar7);
            pSVar12 = pSVar1;
            plVar13 = plVar13 + 1;
          } while (pSVar1 != local_808 + uVar14 * 0x20 + 0x38);
          local_c28 = (**(code **)(*(long *)param_3 + 0xd0))(param_3,0,0,0,0);
          local_c14 = *(uint *)(param_3 + 0x38);
          local_c0c = *(int *)(param_3 + 0x3c);
          uVar11 = local_c14 >> 1;
          local_c10 = local_c14 * local_c0c;
          if (uVar11 == 0) {
            local_c20 = 0x10;
          }
          else {
            iVar6 = 1;
            do {
              local_c20 = iVar6;
              uVar11 = uVar11 >> 1;
              iVar6 = local_c20 + 1;
            } while (uVar11 != 0);
            local_c20 = 0x10 - local_c20;
          }
          local_c1c = (local_c14 - 1) * 0x10000;
          local_c18 = (local_c0c + -1) * 0x10000;
        }
        if (param_11) {
          pSVar12 = local_800;
          plVar13 = alStack_a08;
          do {
            pSVar1 = pSVar12 + 0x20;
            uVar11 = *(uint *)(*plVar13 + 0x10);
            *(uint *)(pSVar12 + 4) = uVar11 & 0xff0000;
            *(uint *)(pSVar12 + 0xc) = (uVar11 & 0xff) << 0x10;
            *(uint *)pSVar12 = uVar11 >> 8 & 0xff0000;
            *(uint *)(pSVar12 + 8) = (uVar11 & 0xff00) << 8;
            pSVar12 = pSVar1;
            plVar13 = plVar13 + 1;
          } while (pSVar1 != local_808 + uVar14 * 0x20 + 0x28);
        }
        SWDrawTriangle(bVar15,(bool)bVar16,param_11,bVar9,local_808,param_7,param_8,
                       (SWTextureInfo *)&local_c28,(SWDiffuse *)&local_c38,param_9,param_10,
                       param_5 == 1);
        if (3 < uVar10) {
          pSVar12 = (SWVertex *)local_7c8;
          do {
            local_7e8 = *(undefined8 *)pSVar12;
            uStack_7e0 = *(undefined8 *)(pSVar12 + 8);
            local_7d8 = *(undefined8 *)(pSVar12 + 0x10);
            uStack_7d0 = *(undefined8 *)(pSVar12 + 0x18);
            local_7c8[0] = *(undefined8 *)(pSVar12 + 0x20);
            local_7c8[1] = *(undefined8 *)(pSVar12 + 0x28);
            local_7c8[2] = *(undefined8 *)(pSVar12 + 0x30);
            local_7c8[3] = *(undefined8 *)(pSVar12 + 0x38);
            pSVar12 = pSVar12 + 0x20;
            SWDrawTriangle(bVar15,(bool)bVar16,param_11,bVar9,local_808,param_7,param_8,
                           (SWTextureInfo *)&local_c28,(SWDiffuse *)&local_c38,param_9,param_10,
                           param_5 == 1);
          } while (pSVar12 != local_808 + ((ulong)(uVar10 - 4) + 3) * 0x20);
        }
      }
      bVar8 = (bool)(bVar8 ^ 1);
    } while (local_c58 != param_1 + (ulong)(param_2 - 3) * 0x14 + 0x28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

