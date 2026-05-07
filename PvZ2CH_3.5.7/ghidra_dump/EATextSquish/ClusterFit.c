// Class: EATextSquish::ClusterFit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::ClusterFit::ClusterFit(EATextSquish::ColorSet const*) */

void __thiscall EATextSquish::ClusterFit::ClusterFit(ClusterFit *this,ColorSet *param_1)

{
  int iVar1;
  Vec3 *this_00;
  bool bVar2;
  int iVar3;
  Vec3 *pVVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ClusterFit *pCVar11;
  ColorSet *pCVar12;
  ClusterFit *pCVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  float fStack_6c;
  float local_68;
  Sym3x3 aSStack_60 [24];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  this_00 = (Vec3 *)(this + 0x26c);
  local_8 = ___stack_chk_guard;
  ColourFit::ColourFit((ColourFit *)this,param_1);
  uVar16 = 0x3f371759;
  uVar17 = 0x3d93dd98;
  fVar19 = 3.4028235e+38;
  *(undefined ***)this = &PTR_nop_06a38240;
  *(undefined4 *)(this + 0x278) = 0x7f7fffff;
  Vec3::Vec3((Vec3 *)&local_70,0.2126,0.7152,0.0722);
  pCVar12 = *(ColorSet **)(this + 8);
  uVar15 = *(undefined4 *)pCVar12;
  *(ulong *)(this + 0x1e0) = CONCAT44(fStack_6c,local_70);
  *(float *)(this + 0x1e8) = local_68;
  iVar3 = FUN_05417d48(uVar15);
  pVVar4 = (Vec3 *)ColorSet::GetPoints(pCVar12);
  pfVar5 = (float *)ColorSet::GetWeights(pCVar12);
  ComputeWeightedCovariance(iVar3,pVVar4,pfVar5);
  local_80 = ComputePrincipleComponent(aSStack_60);
  local_7c = uVar16;
  local_78 = uVar17;
  if (iVar3 < 1) {
    Vec3::Vec3((Vec3 *)&local_70,0.0);
    *(ulong *)this_00 = CONCAT44(fStack_6c,local_70);
    *(float *)(this + 0x274) = local_68;
  }
  else {
    local_48 = (float)Dot(pVVar4,(Vec3 *)&local_80);
    fVar18 = (float)NEON_fminnm(local_48,0x7f7fffff);
    if (iVar3 != 1) {
      local_44 = (float)Dot(pVVar4 + 0xc,(Vec3 *)&local_80);
      fVar18 = (float)NEON_fminnm(fVar18,local_44);
      if (iVar3 != 2) {
        local_40 = (float)Dot(pVVar4 + 0x18,(Vec3 *)&local_80);
        fVar18 = (float)NEON_fminnm(fVar18,local_40);
        if (iVar3 != 3) {
          local_3c = (float)Dot(pVVar4 + 0x24,(Vec3 *)&local_80);
          fVar18 = (float)NEON_fminnm(fVar18,local_3c);
          if (iVar3 != 4) {
            local_38 = (float)Dot(pVVar4 + 0x30,(Vec3 *)&local_80);
            fVar18 = (float)NEON_fminnm(fVar18,local_38);
            if (iVar3 != 5) {
              local_34 = (float)Dot(pVVar4 + 0x3c,(Vec3 *)&local_80);
              fVar18 = (float)NEON_fminnm(fVar18,local_34);
              if (iVar3 != 6) {
                local_30 = (float)Dot(pVVar4 + 0x48,(Vec3 *)&local_80);
                fVar18 = (float)NEON_fminnm(fVar18,local_30);
                if (iVar3 != 7) {
                  local_2c = (float)Dot(pVVar4 + 0x54,(Vec3 *)&local_80);
                  fVar18 = (float)NEON_fminnm(fVar18,local_2c);
                  if (iVar3 != 8) {
                    local_28 = (float)Dot(pVVar4 + 0x60,(Vec3 *)&local_80);
                    fVar18 = (float)NEON_fminnm(fVar18,local_28);
                    if (iVar3 != 9) {
                      local_24 = (float)Dot(pVVar4 + 0x6c,(Vec3 *)&local_80);
                      fVar18 = (float)NEON_fminnm(fVar18,local_24);
                      if (iVar3 != 10) {
                        local_20 = (float)Dot(pVVar4 + 0x78,(Vec3 *)&local_80);
                        fVar18 = (float)NEON_fminnm(fVar18,local_20);
                        if (iVar3 != 0xb) {
                          local_1c = (float)Dot(pVVar4 + 0x84,(Vec3 *)&local_80);
                          fVar18 = (float)NEON_fminnm(fVar18,local_1c);
                          if (iVar3 != 0xc) {
                            local_18 = (float)Dot(pVVar4 + 0x90,(Vec3 *)&local_80);
                            fVar18 = (float)NEON_fminnm(fVar18,local_18);
                            if (iVar3 != 0xd) {
                              local_14 = (float)Dot(pVVar4 + 0x9c,(Vec3 *)&local_80);
                              fVar18 = (float)NEON_fminnm(fVar18,local_14);
                              if (iVar3 != 0xe) {
                                local_10 = (float)Dot(pVVar4 + 0xa8,(Vec3 *)&local_80);
                                fVar18 = (float)NEON_fminnm(fVar18,local_10);
                                if (iVar3 != 0xf) {
                                  local_c = (float)Dot(pVVar4 + 0xb4,(Vec3 *)&local_80);
                                  fVar18 = (float)NEON_fminnm(fVar18,local_c);
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
    iVar8 = 0;
    do {
      while (fVar14 = fVar19, fVar18 != local_48) {
        if ((fVar18 < local_48) && (local_48 < 3.4028235e+38)) {
          fVar14 = local_48;
        }
        if (iVar3 != 1) goto LAB_05419960;
LAB_05419b9c:
        fVar18 = fVar14;
        if (iVar3 <= iVar8) goto LAB_05419ba8;
      }
      *(undefined4 *)(this + (long)iVar8 * 4 + 0x27c) = 0;
      iVar8 = iVar8 + 1;
      if (iVar3 == 1) goto LAB_05419b9c;
LAB_05419960:
      if (fVar18 == local_44) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 1;
      }
      else if ((local_44 < fVar14) && (fVar18 < local_44)) {
        fVar14 = local_44;
      }
      if (iVar3 == 2) goto LAB_05419b9c;
      if (fVar18 == local_40) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 2;
      }
      else if ((local_40 < fVar14) && (fVar18 < local_40)) {
        fVar14 = local_40;
      }
      if (iVar3 == 3) goto LAB_05419b9c;
      if (fVar18 == local_3c) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 3;
      }
      else if ((local_3c < fVar14) && (fVar18 < local_3c)) {
        fVar14 = local_3c;
      }
      if (iVar3 == 4) goto LAB_05419b9c;
      if (fVar18 == local_38) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 4;
      }
      else if ((local_38 < fVar14) && (fVar18 < local_38)) {
        fVar14 = local_38;
      }
      if (iVar3 == 5) goto LAB_05419b9c;
      if (fVar18 == local_34) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 5;
      }
      else if ((local_34 < fVar14) && (fVar18 < local_34)) {
        fVar14 = local_34;
      }
      if (iVar3 == 6) goto LAB_05419b9c;
      if (fVar18 == local_30) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 6;
      }
      else if ((local_30 < fVar14) && (fVar18 < local_30)) {
        fVar14 = local_30;
      }
      if (iVar3 == 7) goto LAB_05419b9c;
      if (fVar18 == local_2c) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 7;
      }
      else if ((local_2c < fVar14) && (fVar18 < local_2c)) {
        fVar14 = local_2c;
      }
      if (iVar3 == 8) goto LAB_05419b9c;
      if (fVar18 == local_28) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 8;
      }
      else if ((local_28 < fVar14) && (fVar18 < local_28)) {
        fVar14 = local_28;
      }
      if (iVar3 == 9) goto LAB_05419b9c;
      if (fVar18 == local_24) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 9;
      }
      else if ((local_24 < fVar14) && (fVar18 < local_24)) {
        fVar14 = local_24;
      }
      if (iVar3 == 10) goto LAB_05419b9c;
      if (fVar18 == local_20) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 10;
      }
      else if ((local_20 < fVar14) && (fVar18 < local_20)) {
        fVar14 = local_20;
      }
      if (iVar3 == 0xb) goto LAB_05419b9c;
      if (fVar18 == local_1c) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 0xb;
      }
      else if ((local_1c < fVar14) && (fVar18 < local_1c)) {
        fVar14 = local_1c;
      }
      if (iVar3 == 0xc) goto LAB_05419b9c;
      if (fVar18 == local_18) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 0xc;
      }
      else if ((local_18 < fVar14) && (fVar18 < local_18)) {
        fVar14 = local_18;
      }
      if (iVar3 == 0xd) goto LAB_05419b9c;
      if (fVar18 == local_14) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 0xd;
      }
      else if ((local_14 < fVar14) && (fVar18 < local_14)) {
        fVar14 = local_14;
      }
      if (iVar3 == 0xe) goto LAB_05419b9c;
      if (fVar18 == local_10) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 0xe;
      }
      else if ((local_10 < fVar14) && (fVar18 < local_10)) {
        fVar14 = local_10;
      }
      if (iVar3 == 0xf) goto LAB_05419b9c;
      if (fVar18 == local_c) {
        lVar6 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(this + lVar6 * 4 + 0x27c) = 0xf;
        fVar18 = fVar14;
      }
      else if ((fVar14 <= local_c) || (bVar2 = local_c <= fVar18, fVar18 = local_c, bVar2))
      goto LAB_05419b9c;
    } while (iVar8 < iVar3);
LAB_05419ba8:
    pCVar12 = *(ColorSet **)(this + 8);
    fVar19 = local_c;
    fVar18 = local_10;
    lVar6 = ColorSet::GetPoints(pCVar12);
    lVar7 = ColorSet::GetWeights(pCVar12);
    Vec3::Vec3((Vec3 *)&local_70,0.0);
    *(ulong *)this_00 = CONCAT44(fStack_6c,local_70);
    *(float *)(this + 0x274) = local_68;
    pCVar11 = this + 0x20;
    pCVar13 = this + 0x27c;
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      lVar10 = (long)*(int *)pCVar13 * 4;
      lVar9 = (long)*(int *)pCVar13 * 0xc;
      pVVar4 = (Vec3 *)(lVar6 + lVar9);
      *(undefined8 *)(pCVar11 + 0xc0) = *(undefined8 *)(lVar6 + lVar9);
      *(undefined4 *)(pCVar11 + 200) = *(undefined4 *)(pVVar4 + 8);
      *(int *)(pCVar13 + -0xdc) = *(int *)(lVar7 + lVar10);
      uVar15 = EATextSquish::operator*(*(float *)(lVar7 + lVar10),pVVar4);
      *(undefined4 *)(this + (long)iVar8 * 0xc + 0x20) = uVar15;
      *(float *)(this + (long)iVar8 * 0xc + 0x24) = fVar19;
      *(float *)(this + (long)iVar8 * 0xc + 0x28) = fVar18;
      local_70 = EATextSquish::operator*((Vec3 *)pCVar11,(Vec3 *)pCVar11);
      fStack_6c = fVar19;
      local_68 = fVar18;
      Vec3::operator+=(this_00,(Vec3 *)&local_70);
      pCVar11 = (ClusterFit *)(pCVar11 + 0xc);
      pCVar13 = pCVar13 + 4;
      iVar8 = iVar1;
    } while (iVar1 < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::ClusterFit::SolveLeastSquares(EATextSquish::Vec3&, EATextSquish::Vec3&) const */

void EATextSquish::ClusterFit::SolveLeastSquares(Vec3 *param_1,Vec3 *param_2)

{
  int iVar1;
  undefined8 *in_x2;
  Vec3 *pVVar2;
  Vec3 *pVVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float in_s1;
  undefined4 uVar7;
  undefined4 in_s2;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Vec3 aVStack_178 [16];
  Vec3 aVStack_168 [16];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  Vec3 aVStack_138 [16];
  Vec3 aVStack_128 [16];
  Vec3 aVStack_118 [16];
  Vec3 aVStack_108 [16];
  Vec3 aVStack_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_05417d48(**(undefined4 **)(param_1 + 8));
  Vec3::Vec3(aVStack_178,0.0);
  Vec3::Vec3(aVStack_168,0.0);
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (iVar1 < 1) {
    fVar11 = 0.0;
  }
  else {
    pVVar2 = param_1 + 0x1ec;
    pVVar3 = param_1 + 0x20;
    fVar9 = fVar10;
    fVar11 = fVar10;
    do {
      fVar8 = *(float *)(pVVar2 + 0x40);
      fVar4 = *(float *)pVVar2;
      pVVar2 = pVVar2 + 4;
      fVar10 = fVar10 + fVar8 * fVar8;
      fVar11 = fVar11 + fVar4 * fVar4;
      fVar9 = fVar9 + fVar4 * fVar8;
      local_18 = EATextSquish::operator*(fVar4,pVVar3);
      Vec3::operator+=(aVStack_178,(Vec3 *)&local_18);
      local_18 = EATextSquish::operator*(fVar8,pVVar3);
      fStack_14 = in_s1;
      local_10 = in_s2;
      Vec3::operator+=(aVStack_168,(Vec3 *)&local_18);
      pVVar3 = pVVar3 + 0xc;
    } while (pVVar2 != param_1 + ((ulong)(iVar1 - 1) + 0x7c) * 4);
    if (fVar10 != 0.0) {
      if (fVar11 == 0.0) {
        Vec3::Vec3((Vec3 *)&local_18,0.0);
        local_158 = CONCAT44(fStack_14,local_18);
        local_150 = local_10;
        uVar5 = operator/(aVStack_168,fVar10);
        local_148 = CONCAT44(in_s1,uVar5);
        local_140 = in_s2;
      }
      else {
        in_s1 = fVar11 * fVar10 - fVar9 * fVar9;
        fVar4 = 1.0 / in_s1;
        local_38 = EATextSquish::operator*(fVar10,aVStack_178);
        local_34 = in_s1;
        local_28 = EATextSquish::operator*(fVar9,aVStack_168);
        local_24 = in_s1;
        local_18 = EATextSquish::operator-((Vec3 *)&local_38,(Vec3 *)&local_28);
        fStack_14 = in_s1;
        uVar5 = EATextSquish::operator*(fVar4,(Vec3 *)&local_18);
        local_158 = CONCAT44(in_s1,uVar5);
        local_150 = in_s2;
        local_38 = EATextSquish::operator*(fVar11,aVStack_168);
        local_34 = in_s1;
        local_28 = EATextSquish::operator*(fVar9,aVStack_178);
        local_24 = in_s1;
        local_18 = EATextSquish::operator-((Vec3 *)&local_38,(Vec3 *)&local_28);
        fStack_14 = in_s1;
        uVar5 = EATextSquish::operator*(fVar4,(Vec3 *)&local_18);
        local_148 = CONCAT44(in_s1,uVar5);
        local_140 = in_s2;
      }
      goto LAB_0541a138;
    }
  }
  fVar10 = 0.0;
  uVar5 = operator/(aVStack_178,fVar11);
  local_158 = CONCAT44(in_s1,uVar5);
  local_150 = in_s2;
  Vec3::Vec3((Vec3 *)&local_18,0.0);
  local_148 = CONCAT44(fStack_14,local_18);
  local_140 = local_10;
LAB_0541a138:
  Vec3::Vec3(aVStack_138,1.0);
  Vec3::Vec3(aVStack_128,0.0);
  local_18 = Max(aVStack_128,(Vec3 *)&local_158);
  fStack_14 = in_s1;
  uVar5 = Min(aVStack_138,(Vec3 *)&local_18);
  local_158 = CONCAT44(in_s1,uVar5);
  local_18 = Max(aVStack_128,(Vec3 *)&local_148);
  fStack_14 = in_s1;
  uVar5 = Min(aVStack_138,(Vec3 *)&local_18);
  local_148 = CONCAT44(in_s1,uVar5);
  Vec3::Vec3(aVStack_118,31.0,63.0,31.0);
  uVar5 = 0x3d042108;
  uVar7 = 0x3c820821;
  Vec3::Vec3(aVStack_108,0.032258064,0.015873017,0.032258064);
  Vec3::Vec3(aVStack_f8,0.5);
  local_38 = EATextSquish::operator*(aVStack_118,(Vec3 *)&local_158);
  local_34 = (float)uVar7;
  local_30 = uVar5;
  local_28 = EATextSquish::operator+((Vec3 *)&local_38,aVStack_f8);
  local_24 = (float)uVar7;
  local_20 = uVar5;
  local_18 = Floor((Vec3 *)&local_28);
  fStack_14 = (float)uVar7;
  local_10 = uVar5;
  uVar6 = EATextSquish::operator*((Vec3 *)&local_18,aVStack_108);
  local_158 = CONCAT44(uVar7,uVar6);
  local_150 = uVar5;
  local_38 = EATextSquish::operator*(aVStack_118,(Vec3 *)&local_148);
  local_34 = (float)uVar7;
  local_30 = uVar5;
  local_28 = EATextSquish::operator+((Vec3 *)&local_38,aVStack_f8);
  local_24 = (float)uVar7;
  local_20 = uVar5;
  local_18 = Floor((Vec3 *)&local_28);
  fStack_14 = (float)uVar7;
  local_10 = uVar5;
  uVar6 = EATextSquish::operator*((Vec3 *)&local_18,aVStack_108);
  local_148 = CONCAT44(uVar7,uVar6);
  local_140 = uVar5;
  local_d8 = EATextSquish::operator*((Vec3 *)&local_158,(Vec3 *)&local_158);
  local_d4 = uVar7;
  local_d0 = uVar5;
  local_c8 = EATextSquish::operator*(fVar11,(Vec3 *)&local_d8);
  local_c4 = uVar7;
  local_c0 = uVar5;
  local_b8 = EATextSquish::operator*((Vec3 *)&local_148,(Vec3 *)&local_148);
  local_b4 = uVar7;
  local_b0 = uVar5;
  local_a8 = EATextSquish::operator*(fVar10,(Vec3 *)&local_b8);
  local_a4 = uVar7;
  local_a0 = uVar5;
  local_98 = EATextSquish::operator+((Vec3 *)&local_c8,(Vec3 *)&local_a8);
  local_94 = uVar7;
  local_90 = uVar5;
  local_88 = EATextSquish::operator+((Vec3 *)&local_98,param_1 + 0x26c);
  local_84 = uVar7;
  local_80 = uVar5;
  local_78 = EATextSquish::operator*((Vec3 *)&local_158,(Vec3 *)&local_148);
  local_74 = uVar7;
  local_70 = uVar5;
  local_68 = EATextSquish::operator*(fVar9,(Vec3 *)&local_78);
  local_64 = uVar7;
  local_60 = uVar5;
  local_58 = EATextSquish::operator*((Vec3 *)&local_158,aVStack_178);
  local_54 = uVar7;
  local_50 = uVar5;
  local_48 = EATextSquish::operator-((Vec3 *)&local_68,(Vec3 *)&local_58);
  local_44 = uVar7;
  local_40 = uVar5;
  local_38 = EATextSquish::operator*((Vec3 *)&local_148,aVStack_168);
  local_34 = (float)uVar7;
  local_30 = uVar5;
  local_28 = EATextSquish::operator-((Vec3 *)&local_48,(Vec3 *)&local_38);
  local_24 = (float)uVar7;
  local_20 = uVar5;
  local_18 = EATextSquish::operator*(2.0,(Vec3 *)&local_28);
  fStack_14 = (float)uVar7;
  local_10 = uVar5;
  local_e8 = EATextSquish::operator+((Vec3 *)&local_88,(Vec3 *)&local_18);
  local_e4 = uVar7;
  local_e0 = uVar5;
  Dot((Vec3 *)&local_e8,param_1 + 0x1e0);
  *(undefined8 *)param_2 = local_158;
  *(undefined4 *)(param_2 + 8) = local_150;
  *(undefined4 *)(in_x2 + 1) = local_140;
  *in_x2 = local_148;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::ClusterFit::Compress4(void*) */

void __thiscall EATextSquish::ClusterFit::Compress4(ClusterFit *this,void *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ClusterFit *pCVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 *local_98;
  ClusterFit *local_90;
  uint local_88;
  int local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  uchar auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_05417d48(**(undefined4 **)(this + 8));
  Vec3::Vec3((Vec3 *)&local_80,0.0);
  Vec3::Vec3((Vec3 *)&local_70,0.0);
  fVar28 = *(float *)(this + 0x278);
  if (iVar4 < 1) {
    if (iVar4 != 0) goto LAB_0541b4fc;
  }
  else {
    iVar5 = (iVar4 - 0x10U & 0xfffffff0) + 0x10;
    if (iVar4 - 1U < 0xf) {
      iVar5 = 0;
    }
    else {
      *(undefined8 *)(this + 500) = *(undefined8 *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1ec) = *(undefined8 *)(this + 0x1a0);
      *(undefined8 *)(this + 0x204) = *(undefined8 *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1fc) = *(undefined8 *)(this + 0x1b0);
      *(undefined8 *)(this + 0x214) = *(undefined8 *)(this + 0x1c8);
      *(undefined8 *)(this + 0x20c) = *(undefined8 *)(this + 0x1c0);
      *(undefined8 *)(this + 0x224) = *(undefined8 *)(this + 0x1d8);
      *(undefined8 *)(this + 0x21c) = *(undefined8 *)(this + 0x1d0);
      *(undefined8 *)(this + 0x234) = 0;
      *(undefined8 *)(this + 0x22c) = 0;
      *(undefined8 *)(this + 0x244) = 0;
      *(undefined8 *)(this + 0x23c) = 0;
      *(undefined8 *)(this + 0x254) = 0;
      *(undefined8 *)(this + 0x24c) = 0;
      local_40[1] = 0;
      local_40[0] = 0;
      *(undefined8 *)(this + 0x264) = 0;
      *(undefined8 *)(this + 0x25c) = 0;
      if (iVar4 == iVar5) goto LAB_0541aa8c;
    }
    lVar9 = (long)iVar5;
    uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
    *(undefined1 *)((long)local_40 + lVar9) = 0;
    *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
    *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
    if (iVar5 + 1 < iVar4) {
      lVar9 = (long)(iVar5 + 1);
      uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
      *(undefined1 *)((long)local_40 + lVar9) = 0;
      *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
      *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
      if (iVar5 + 2 < iVar4) {
        lVar9 = (long)(iVar5 + 2);
        uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
        *(undefined1 *)((long)local_40 + lVar9) = 0;
        *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
        *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
        if (iVar5 + 3 < iVar4) {
          lVar9 = (long)(iVar5 + 3);
          uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
          *(undefined1 *)((long)local_40 + lVar9) = 0;
          *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
          *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
          if (iVar5 + 4 < iVar4) {
            lVar9 = (long)(iVar5 + 4);
            uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
            *(undefined1 *)((long)local_40 + lVar9) = 0;
            *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
            *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
            if (iVar5 + 5 < iVar4) {
              lVar9 = (long)(iVar5 + 5);
              uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
              *(undefined1 *)((long)local_40 + lVar9) = 0;
              *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
              *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
              if (iVar5 + 6 < iVar4) {
                lVar9 = (long)(iVar5 + 6);
                uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                *(undefined1 *)((long)local_40 + lVar9) = 0;
                *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                if (iVar5 + 7 < iVar4) {
                  lVar9 = (long)(iVar5 + 7);
                  uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                  *(undefined1 *)((long)local_40 + lVar9) = 0;
                  *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                  *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                  if (iVar5 + 8 < iVar4) {
                    lVar9 = (long)(iVar5 + 8);
                    uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                    *(undefined1 *)((long)local_40 + lVar9) = 0;
                    *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                    *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                    if (iVar5 + 9 < iVar4) {
                      lVar9 = (long)(iVar5 + 9);
                      uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                      *(undefined1 *)((long)local_40 + lVar9) = 0;
                      *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                      *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                      if (iVar5 + 10 < iVar4) {
                        lVar9 = (long)(iVar5 + 10);
                        uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                        *(undefined1 *)((long)local_40 + lVar9) = 0;
                        *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                        *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                        if (iVar5 + 0xb < iVar4) {
                          lVar9 = (long)(iVar5 + 0xb);
                          uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                          *(undefined1 *)((long)local_40 + lVar9) = 0;
                          *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                          *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                          if (iVar5 + 0xc < iVar4) {
                            lVar9 = (long)(iVar5 + 0xc);
                            uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                            *(undefined1 *)((long)local_40 + lVar9) = 0;
                            *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                            *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                            if (iVar5 + 0xd < iVar4) {
                              lVar9 = (long)(iVar5 + 0xd);
                              uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                              *(undefined1 *)((long)local_40 + lVar9) = 0;
                              *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                              *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
                              if (iVar5 + 0xe < iVar4) {
                                lVar9 = (long)(iVar5 + 0xe);
                                uVar3 = *(undefined4 *)(this + lVar9 * 4 + 0x1a0);
                                *(undefined1 *)((long)local_40 + lVar9) = 0;
                                *(undefined4 *)(this + lVar9 * 4 + 0x22c) = 0;
                                *(undefined4 *)(this + lVar9 * 4 + 0x1ec) = uVar3;
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
LAB_0541aa8c:
  puVar2 = (undefined8 *)((long)local_40 + (long)iVar4);
  local_88 = 0xfffffff0;
  local_98 = puVar2;
  local_90 = this + ((long)iVar4 + 0x68) * 4;
  local_84 = iVar4;
  do {
    if (local_84 < iVar4) {
      iVar5 = (local_88 & 0xfffffff0) + 0x10;
      iVar10 = local_84;
      if (0xe < local_88 + 0xf) {
        local_98[1] = 0x202020202020202;
        *local_98 = 0x202020202020202;
        fVar24 = (float)*(undefined8 *)local_90;
        fVar25 = (float)((ulong)*(undefined8 *)local_90 >> 0x20);
        fVar26 = (float)*(undefined8 *)(local_90 + 8);
        fVar27 = (float)((ulong)*(undefined8 *)(local_90 + 8) >> 0x20);
        fVar16 = (float)*(undefined8 *)(local_90 + 0x20);
        fVar17 = (float)((ulong)*(undefined8 *)(local_90 + 0x20) >> 0x20);
        fVar18 = (float)*(undefined8 *)(local_90 + 0x28);
        fVar19 = (float)((ulong)*(undefined8 *)(local_90 + 0x28) >> 0x20);
        fVar12 = (float)*(undefined8 *)(local_90 + 0x30);
        fVar13 = (float)((ulong)*(undefined8 *)(local_90 + 0x30) >> 0x20);
        fVar14 = (float)*(undefined8 *)(local_90 + 0x38);
        fVar15 = (float)((ulong)*(undefined8 *)(local_90 + 0x38) >> 0x20);
        *(ulong *)(local_90 + 0x54) = CONCAT44(fVar27 * 0.6666667,fVar26 * 0.6666667);
        *(ulong *)(local_90 + 0x4c) = CONCAT44(fVar25 * 0.6666667,fVar24 * 0.6666667);
        fVar20 = (float)*(undefined8 *)(local_90 + 0x10);
        fVar21 = (float)((ulong)*(undefined8 *)(local_90 + 0x10) >> 0x20);
        fVar22 = (float)*(undefined8 *)(local_90 + 0x18);
        fVar23 = (float)((ulong)*(undefined8 *)(local_90 + 0x18) >> 0x20);
        *(ulong *)(local_90 + 100) = CONCAT44(fVar23 * 0.6666667,fVar22 * 0.6666667);
        *(ulong *)(local_90 + 0x5c) = CONCAT44(fVar21 * 0.6666667,fVar20 * 0.6666667);
        *(ulong *)(local_90 + 0x74) = CONCAT44(fVar19 * 0.6666667,fVar18 * 0.6666667);
        *(ulong *)(local_90 + 0x6c) = CONCAT44(fVar17 * 0.6666667,fVar16 * 0.6666667);
        *(ulong *)(local_90 + 0x84) = CONCAT44(fVar15 * 0.6666667,fVar14 * 0.6666667);
        *(ulong *)(local_90 + 0x7c) = CONCAT44(fVar13 * 0.6666667,fVar12 * 0.6666667);
        *(ulong *)(local_90 + 0x94) = CONCAT44(fVar27 * 0.33333334,fVar26 * 0.33333334);
        *(ulong *)(local_90 + 0x8c) = CONCAT44(fVar25 * 0.33333334,fVar24 * 0.33333334);
        *(ulong *)(local_90 + 0xa4) = CONCAT44(fVar23 * 0.33333334,fVar22 * 0.33333334);
        *(ulong *)(local_90 + 0x9c) = CONCAT44(fVar21 * 0.33333334,fVar20 * 0.33333334);
        *(ulong *)(local_90 + 0xb4) = CONCAT44(fVar19 * 0.33333334,fVar18 * 0.33333334);
        *(ulong *)(local_90 + 0xac) = CONCAT44(fVar17 * 0.33333334,fVar16 * 0.33333334);
        *(ulong *)(local_90 + 0xc4) = CONCAT44(fVar15 * 0.33333334,fVar14 * 0.33333334);
        *(ulong *)(local_90 + 0xbc) = CONCAT44(fVar13 * 0.33333334,fVar12 * 0.33333334);
        iVar10 = local_84 + iVar5;
        if (local_88 + 0x10 == iVar5) goto LAB_0541ae98;
      }
      lVar9 = (long)iVar10;
      fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
      *(undefined1 *)((long)local_40 + lVar9) = 2;
      *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
      *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
      if (iVar10 + 1 < iVar4) {
        lVar9 = (long)(iVar10 + 1);
        fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
        *(undefined1 *)((long)local_40 + lVar9) = 2;
        *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
        *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
        if (iVar10 + 2 < iVar4) {
          lVar9 = (long)(iVar10 + 2);
          fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
          *(undefined1 *)((long)local_40 + lVar9) = 2;
          *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
          *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
          if (iVar10 + 3 < iVar4) {
            lVar9 = (long)(iVar10 + 3);
            fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
            *(undefined1 *)((long)local_40 + lVar9) = 2;
            *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
            *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
            if (iVar10 + 4 < iVar4) {
              lVar9 = (long)(iVar10 + 4);
              fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
              *(undefined1 *)((long)local_40 + lVar9) = 2;
              *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
              *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
              if (iVar10 + 5 < iVar4) {
                lVar9 = (long)(iVar10 + 5);
                fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                *(undefined1 *)((long)local_40 + lVar9) = 2;
                *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                if (iVar10 + 6 < iVar4) {
                  lVar9 = (long)(iVar10 + 6);
                  fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                  *(undefined1 *)((long)local_40 + lVar9) = 2;
                  *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                  *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                  if (iVar10 + 7 < iVar4) {
                    lVar9 = (long)(iVar10 + 7);
                    fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                    *(undefined1 *)((long)local_40 + lVar9) = 2;
                    *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                    *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                    if (iVar10 + 8 < iVar4) {
                      lVar9 = (long)(iVar10 + 8);
                      fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                      *(undefined1 *)((long)local_40 + lVar9) = 2;
                      *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                      *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                      if (iVar10 + 9 < iVar4) {
                        lVar9 = (long)(iVar10 + 9);
                        fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                        *(undefined1 *)((long)local_40 + lVar9) = 2;
                        *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                        *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                        if (iVar10 + 10 < iVar4) {
                          lVar9 = (long)(iVar10 + 10);
                          fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                          *(undefined1 *)((long)local_40 + lVar9) = 2;
                          *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                          *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                          if (iVar10 + 0xb < iVar4) {
                            lVar9 = (long)(iVar10 + 0xb);
                            fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                            *(undefined1 *)((long)local_40 + lVar9) = 2;
                            *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                            *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                            if (iVar10 + 0xc < iVar4) {
                              lVar9 = (long)(iVar10 + 0xc);
                              fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                              *(undefined1 *)((long)local_40 + lVar9) = 2;
                              *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                              *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                              if (iVar10 + 0xd < iVar4) {
                                lVar9 = (long)(iVar10 + 0xd);
                                fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                                *(undefined1 *)((long)local_40 + lVar9) = 2;
                                *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                                *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
                                if (iVar10 + 0xe < iVar4) {
                                  lVar9 = (long)(iVar10 + 0xe);
                                  fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                                  *(undefined1 *)((long)local_40 + lVar9) = 2;
                                  *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.6666667;
                                  *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.33333334;
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
LAB_0541ae98:
      uVar6 = 0xfffffff0;
      pCVar11 = this + ((long)iVar4 + 0x68) * 4;
      puVar8 = puVar2;
      iVar5 = iVar4;
      do {
        iVar10 = iVar4;
        if (iVar5 < iVar4) {
          iVar1 = (uVar6 & 0xfffffff0) + 0x10;
          iVar7 = iVar5;
          if (0xe < uVar6 + 0xf) {
            puVar8[1] = 0x303030303030303;
            *puVar8 = 0x303030303030303;
            fVar24 = (float)*(undefined8 *)pCVar11;
            fVar25 = (float)((ulong)*(undefined8 *)pCVar11 >> 0x20);
            fVar26 = (float)*(undefined8 *)(pCVar11 + 8);
            fVar27 = (float)((ulong)*(undefined8 *)(pCVar11 + 8) >> 0x20);
            fVar16 = (float)*(undefined8 *)(pCVar11 + 0x20);
            fVar17 = (float)((ulong)*(undefined8 *)(pCVar11 + 0x20) >> 0x20);
            fVar18 = (float)*(undefined8 *)(pCVar11 + 0x28);
            fVar19 = (float)((ulong)*(undefined8 *)(pCVar11 + 0x28) >> 0x20);
            fVar12 = (float)*(undefined8 *)(pCVar11 + 0x30);
            fVar13 = (float)((ulong)*(undefined8 *)(pCVar11 + 0x30) >> 0x20);
            fVar14 = (float)*(undefined8 *)(pCVar11 + 0x38);
            fVar15 = (float)((ulong)*(undefined8 *)(pCVar11 + 0x38) >> 0x20);
            *(ulong *)(pCVar11 + 0x54) = CONCAT44(fVar27 * 0.33333334,fVar26 * 0.33333334);
            *(ulong *)(pCVar11 + 0x4c) = CONCAT44(fVar25 * 0.33333334,fVar24 * 0.33333334);
            fVar20 = (float)*(undefined8 *)(pCVar11 + 0x10);
            fVar21 = (float)((ulong)*(undefined8 *)(pCVar11 + 0x10) >> 0x20);
            fVar22 = (float)*(undefined8 *)(pCVar11 + 0x18);
            fVar23 = (float)((ulong)*(undefined8 *)(pCVar11 + 0x18) >> 0x20);
            *(ulong *)(pCVar11 + 100) = CONCAT44(fVar23 * 0.33333334,fVar22 * 0.33333334);
            *(ulong *)(pCVar11 + 0x5c) = CONCAT44(fVar21 * 0.33333334,fVar20 * 0.33333334);
            *(ulong *)(pCVar11 + 0x74) = CONCAT44(fVar19 * 0.33333334,fVar18 * 0.33333334);
            *(ulong *)(pCVar11 + 0x6c) = CONCAT44(fVar17 * 0.33333334,fVar16 * 0.33333334);
            *(ulong *)(pCVar11 + 0x84) = CONCAT44(fVar15 * 0.33333334,fVar14 * 0.33333334);
            *(ulong *)(pCVar11 + 0x7c) = CONCAT44(fVar13 * 0.33333334,fVar12 * 0.33333334);
            *(ulong *)(pCVar11 + 0x94) = CONCAT44(fVar27 * 0.6666667,fVar26 * 0.6666667);
            *(ulong *)(pCVar11 + 0x8c) = CONCAT44(fVar25 * 0.6666667,fVar24 * 0.6666667);
            *(ulong *)(pCVar11 + 0xa4) = CONCAT44(fVar23 * 0.6666667,fVar22 * 0.6666667);
            *(ulong *)(pCVar11 + 0x9c) = CONCAT44(fVar21 * 0.6666667,fVar20 * 0.6666667);
            *(ulong *)(pCVar11 + 0xb4) = CONCAT44(fVar19 * 0.6666667,fVar18 * 0.6666667);
            *(ulong *)(pCVar11 + 0xac) = CONCAT44(fVar17 * 0.6666667,fVar16 * 0.6666667);
            *(ulong *)(pCVar11 + 0xc4) = CONCAT44(fVar15 * 0.6666667,fVar14 * 0.6666667);
            *(ulong *)(pCVar11 + 0xbc) = CONCAT44(fVar13 * 0.6666667,fVar12 * 0.6666667);
            iVar7 = iVar5 + iVar1;
            if (uVar6 + 0x10 == iVar1) goto LAB_0541b298;
          }
          lVar9 = (long)iVar7;
          fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
          *(undefined1 *)((long)local_40 + lVar9) = 3;
          *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
          *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
          if (iVar7 + 1 < iVar4) {
            lVar9 = (long)(iVar7 + 1);
            fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
            *(undefined1 *)((long)local_40 + lVar9) = 3;
            *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
            *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
            if (iVar7 + 2 < iVar4) {
              lVar9 = (long)(iVar7 + 2);
              fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
              *(undefined1 *)((long)local_40 + lVar9) = 3;
              *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
              *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
              if (iVar7 + 3 < iVar4) {
                lVar9 = (long)(iVar7 + 3);
                fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                *(undefined1 *)((long)local_40 + lVar9) = 3;
                *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                if (iVar7 + 4 < iVar4) {
                  lVar9 = (long)(iVar7 + 4);
                  fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                  *(undefined1 *)((long)local_40 + lVar9) = 3;
                  *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                  *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                  if (iVar7 + 5 < iVar4) {
                    lVar9 = (long)(iVar7 + 5);
                    fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                    *(undefined1 *)((long)local_40 + lVar9) = 3;
                    *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                    *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                    if (iVar7 + 6 < iVar4) {
                      lVar9 = (long)(iVar7 + 6);
                      fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                      *(undefined1 *)((long)local_40 + lVar9) = 3;
                      *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                      *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                      if (iVar7 + 7 < iVar4) {
                        lVar9 = (long)(iVar7 + 7);
                        fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                        *(undefined1 *)((long)local_40 + lVar9) = 3;
                        *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                        *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                        if (iVar7 + 8 < iVar4) {
                          lVar9 = (long)(iVar7 + 8);
                          fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                          *(undefined1 *)((long)local_40 + lVar9) = 3;
                          *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                          *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                          if (iVar7 + 9 < iVar4) {
                            lVar9 = (long)(iVar7 + 9);
                            fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                            *(undefined1 *)((long)local_40 + lVar9) = 3;
                            *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                            *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                            if (iVar7 + 10 < iVar4) {
                              lVar9 = (long)(iVar7 + 10);
                              fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                              *(undefined1 *)((long)local_40 + lVar9) = 3;
                              *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                              *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                              if (iVar7 + 0xb < iVar4) {
                                lVar9 = (long)(iVar7 + 0xb);
                                fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                                *(undefined1 *)((long)local_40 + lVar9) = 3;
                                *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                                *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                                if (iVar7 + 0xc < iVar4) {
                                  lVar9 = (long)(iVar7 + 0xc);
                                  fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                                  *(undefined1 *)((long)local_40 + lVar9) = 3;
                                  *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                                  *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                                  if (iVar7 + 0xd < iVar4) {
                                    lVar9 = (long)(iVar7 + 0xd);
                                    fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                                    *(undefined1 *)((long)local_40 + lVar9) = 3;
                                    *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                                    *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
                                    if (iVar7 + 0xe < iVar4) {
                                      lVar9 = (long)(iVar7 + 0xe);
                                      fVar12 = *(float *)(this + lVar9 * 4 + 0x1a0);
                                      *(undefined1 *)((long)local_40 + lVar9) = 3;
                                      *(float *)(this + lVar9 * 4 + 0x1ec) = fVar12 * 0.33333334;
                                      *(float *)(this + lVar9 * 4 + 0x22c) = fVar12 * 0.6666667;
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
LAB_0541b298:
          while( true ) {
            iVar1 = iVar10;
            fVar12 = (float)SolveLeastSquares((Vec3 *)this,(Vec3 *)&local_60);
            if (fVar12 < fVar28) {
              uStack_28 = local_40[1];
              local_30 = local_40[0];
              local_80 = local_60;
              local_78 = local_58;
              local_70 = local_50;
              local_68 = local_48;
              fVar28 = fVar12;
            }
            iVar10 = iVar1 + -1;
            if (iVar10 < iVar5) break;
            if (iVar10 < iVar4) {
              uVar3 = *(undefined4 *)(this + (long)iVar1 * 4 + 0x19c);
              *(undefined1 *)((long)local_40 + (long)iVar10) = 1;
              *(undefined4 *)(this + (long)iVar1 * 4 + 0x1e8) = 0;
              *(undefined4 *)(this + (long)iVar1 * 4 + 0x228) = uVar3;
            }
          }
        }
        else if (iVar5 <= iVar4) goto LAB_0541b298;
        iVar5 = iVar5 + -1;
        pCVar11 = pCVar11 + -4;
        puVar8 = (undefined8 *)((long)puVar8 + -1);
        uVar6 = uVar6 + 1;
      } while (local_84 <= iVar5);
    }
    else if (local_84 <= iVar4) goto LAB_0541ae98;
    local_84 = local_84 + -1;
    local_98 = (undefined8 *)((long)local_98 + -1);
    local_90 = local_90 + -4;
    local_88 = local_88 + 1;
  } while (local_84 != -1);
  if (fVar28 < *(float *)(this + 0x278)) {
    if (0 < iVar4) {
      auStack_18[*(int *)(this + 0x27c)] = (uchar)local_30;
      if (iVar4 != 1) {
        auStack_18[*(int *)(this + 0x280)] = local_30._1_1_;
        if (iVar4 != 2) {
          auStack_18[*(int *)(this + 0x284)] = local_30._2_1_;
          if (iVar4 != 3) {
            auStack_18[*(int *)(this + 0x288)] = local_30._3_1_;
            if (iVar4 != 4) {
              auStack_18[*(int *)(this + 0x28c)] = local_30._4_1_;
              if (iVar4 != 5) {
                auStack_18[*(int *)(this + 0x290)] = local_30._5_1_;
                if (iVar4 != 6) {
                  auStack_18[*(int *)(this + 0x294)] = local_30._6_1_;
                  if (iVar4 != 7) {
                    auStack_18[*(int *)(this + 0x298)] = local_30._7_1_;
                    if (iVar4 != 8) {
                      auStack_18[*(int *)(this + 0x29c)] = (uchar)uStack_28;
                      if (iVar4 != 9) {
                        auStack_18[*(int *)(this + 0x2a0)] = uStack_28._1_1_;
                        if (iVar4 != 10) {
                          auStack_18[*(int *)(this + 0x2a4)] = uStack_28._2_1_;
                          if (iVar4 != 0xb) {
                            auStack_18[*(int *)(this + 0x2a8)] = uStack_28._3_1_;
                            if (iVar4 != 0xc) {
                              auStack_18[*(int *)(this + 0x2ac)] = uStack_28._4_1_;
                              if (iVar4 != 0xd) {
                                auStack_18[*(int *)(this + 0x2b0)] = uStack_28._5_1_;
                                if (iVar4 != 0xe) {
                                  auStack_18[*(int *)(this + 0x2b4)] = uStack_28._6_1_;
                                  if (iVar4 != 0xf) {
                                    auStack_18[*(int *)(this + 0x2b8)] = uStack_28._7_1_;
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
    }
    ColorSet::RemapIndices(*(ColorSet **)(this + 8),auStack_18,(uchar *)&local_30);
    WriteColourBlock4((Vec3 *)&local_80,(Vec3 *)&local_70,(uchar *)&local_30,param_1);
    *(float *)(this + 0x278) = fVar28;
  }
LAB_0541b4fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

