// Class: Sexy::SexyMatrix4


/* Sexy::SexyMatrix4::SexyMatrix4(float, float, float, float, float, float, float, float, float,
   float, float, float, float, float, float, float) */

void __thiscall
Sexy::SexyMatrix4::SexyMatrix4
          (SexyMatrix4 *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
          float param_12,float param_13,float param_14,float param_15,float param_16)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0x20) = param_9;
  *(float *)(this + 0xc) = param_4;
  *(float *)(this + 0x10) = param_5;
  *(float *)(this + 0x14) = param_6;
  *(float *)(this + 0x24) = param_10;
  *(float *)(this + 0x18) = param_7;
  *(float *)(this + 0x1c) = param_8;
  *(float *)(this + 0x28) = param_11;
  *(float *)(this + 0x2c) = param_12;
  *(float *)(this + 0x30) = param_13;
  *(float *)(this + 0x34) = param_14;
  *(float *)(this + 0x38) = param_15;
  *(float *)(this + 0x3c) = param_16;
  return;
}


/* Sexy::SexyMatrix4::LoadIdentity() */

void __thiscall Sexy::SexyMatrix4::LoadIdentity(SexyMatrix4 *this)

{
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* Sexy::SexyMatrix4::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix4 const&) const */

void __thiscall Sexy::SexyMatrix4::operator*(SexyMatrix4 *this,SexyMatrix4 *param_1)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  
  fVar15 = *(float *)(param_1 + 0x1c);
  fVar25 = *(float *)(param_1 + 0x10);
  fVar23 = *(float *)(param_1 + 0x14);
  fVar21 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(this + 4);
  fVar1 = *(float *)(this + 0x14);
  fVar6 = *(float *)this;
  fVar9 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(this + 0x10);
  fVar18 = *(float *)param_1;
  fVar17 = *(float *)(param_1 + 4);
  fVar16 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x18);
  fVar13 = *(float *)(param_1 + 0x20);
  fVar12 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  fVar24 = *(float *)(param_1 + 0x2c);
  fVar19 = *(float *)(this + 0xc);
  fVar10 = *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x34);
  fVar4 = *(float *)(param_1 + 0x38);
  fVar22 = *(float *)(param_1 + 0x3c);
  fVar14 = *(float *)(this + 0x1c);
  *in_x8 = fVar25 * fVar5 + fVar6 * fVar18 + fVar7 * fVar13 + fVar19 * fVar10;
  in_x8[1] = fVar23 * fVar5 + fVar6 * fVar17 + fVar7 * fVar12 + fVar19 * fVar8;
  in_x8[2] = fVar21 * fVar5 + fVar6 * fVar16 + fVar7 * fVar11 + fVar19 * fVar4;
  in_x8[3] = fVar15 * fVar5 + fVar6 * fVar9 + fVar7 * fVar24 + fVar19 * fVar22;
  in_x8[4] = fVar1 * fVar25 + fVar18 * fVar2 + fVar13 * fVar3 + fVar10 * fVar14;
  fVar19 = *(float *)(this + 0x20);
  in_x8[5] = fVar1 * fVar23 + fVar17 * fVar2 + fVar12 * fVar3 + fVar8 * fVar14;
  fVar20 = *(float *)(this + 0x34);
  in_x8[7] = fVar1 * fVar15 + fVar9 * fVar2 + fVar24 * fVar3 + fVar22 * fVar14;
  fVar6 = *(float *)(this + 0x24);
  in_x8[6] = fVar1 * fVar21 + fVar16 * fVar2 + fVar11 * fVar3 + fVar4 * fVar14;
  fVar7 = *(float *)(this + 0x30);
  fVar2 = *(float *)(this + 0x28);
  fVar5 = *(float *)(this + 0x38);
  fVar3 = *(float *)(this + 0x2c);
  fVar1 = *(float *)(this + 0x3c);
  in_x8[8] = fVar6 * fVar25 + fVar18 * fVar19 + fVar13 * fVar2 + fVar10 * fVar3;
  in_x8[9] = fVar6 * fVar23 + fVar17 * fVar19 + fVar12 * fVar2 + fVar8 * fVar3;
  in_x8[10] = fVar6 * fVar21 + fVar16 * fVar19 + fVar11 * fVar2 + fVar4 * fVar3;
  in_x8[0xc] = fVar20 * fVar25 + fVar18 * fVar7 + fVar13 * fVar5 + fVar10 * fVar1;
  in_x8[0xd] = fVar20 * fVar23 + fVar17 * fVar7 + fVar12 * fVar5 + fVar8 * fVar1;
  in_x8[0xe] = fVar20 * fVar21 + fVar16 * fVar7 + fVar11 * fVar5 + fVar4 * fVar1;
  in_x8[0xb] = fVar6 * fVar15 + fVar9 * fVar19 + fVar24 * fVar2 + fVar22 * fVar3;
  in_x8[0xf] = fVar20 * fVar15 + fVar9 * fVar7 + fVar24 * fVar5 + fVar22 * fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyMatrix4::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector2 const&) const */

void __thiscall Sexy::SexyMatrix4::operator*(SexyMatrix4 *this,SexyVector2 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  fVar4 = *(float *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  fVar5 = *(float *)param_1;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,
             fVar4 * *(float *)(this + 0x10) + fVar5 * *(float *)this + *(float *)(this + 0x30),
             fVar4 * *(float *)(this + 0x14) + fVar5 * *(float *)(this + 4) +
             *(float *)(this + 0x34),
             fVar4 * *(float *)(this + 0x18) + fVar5 * *(float *)(this + 8) +
             *(float *)(this + 0x38));
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyMatrix4::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyMatrix4::operator*(SexyMatrix4 *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  fVar4 = *(float *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  fVar5 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 8);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,
             fVar4 * *(float *)(this + 0x10) + fVar5 * *(float *)this + *(float *)(this + 0x30) +
             fVar6 * *(float *)(this + 0x20),
             fVar4 * *(float *)(this + 0x14) + fVar5 * *(float *)(this + 4) +
             *(float *)(this + 0x34) + fVar6 * *(float *)(this + 0x24),
             fVar4 * *(float *)(this + 0x18) + fVar5 * *(float *)(this + 8) +
             *(float *)(this + 0x38) + fVar6 * *(float *)(this + 0x28));
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* Sexy::SexyMatrix4::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix4 const&) */

SexyMatrix4 * __thiscall Sexy::SexyMatrix4::operator*=(SexyMatrix4 *this,SexyMatrix4 *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  operator*(this,param_1);
  *(undefined8 *)(this + 0x30) = local_10;
  *(undefined8 *)(this + 0x38) = uStack_8;
  *(undefined8 *)this = local_40;
  *(undefined8 *)(this + 8) = uStack_38;
  *(undefined8 *)(this + 0x10) = local_30;
  *(undefined8 *)(this + 0x18) = uStack_28;
  *(undefined8 *)(this + 0x20) = local_20;
  *(undefined8 *)(this + 0x28) = uStack_18;
  return this;
}

