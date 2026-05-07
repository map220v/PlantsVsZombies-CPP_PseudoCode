// Class: Sexy::PopTransformMatrix


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopTransformMatrix::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector2 const&) const */

void __thiscall Sexy::PopTransformMatrix::operator*(PopTransformMatrix *this,SexyVector2 *param_1)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange
            (local_10,*(float *)(param_1 + 4) * *(float *)(this + 4) +
                      *(float *)this * *(float *)param_1 + *(float *)(this + 8),
             *(float *)(param_1 + 4) * *(float *)(this + 0x10) +
             *(float *)param_1 * *(float *)(this + 0xc) + *(float *)(this + 0x14));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* Sexy::PopTransformMatrix::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix3 const&) */

void __thiscall Sexy::PopTransformMatrix::operator=(PopTransformMatrix *this,SexyMatrix3 *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* Sexy::PopTransformMatrix::GetMatrix3() */

void Sexy::PopTransformMatrix::GetMatrix3(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_x0;
  undefined4 *in_x8;
  
  uVar1 = *in_x0;
  uVar2 = in_x0[1];
  uVar3 = in_x0[2];
  uVar4 = in_x0[3];
  uVar5 = in_x0[4];
  uVar6 = in_x0[5];
  in_x8[6] = 0;
  in_x8[7] = 0;
  *in_x8 = uVar1;
  in_x8[1] = uVar2;
  in_x8[2] = uVar3;
  in_x8[3] = uVar4;
  in_x8[4] = uVar5;
  in_x8[5] = uVar6;
  in_x8[8] = 0x3f800000;
  return;
}


/* Sexy::PopTransformMatrix::PopTransformMatrix(Sexy::SexyMatrix3 const&) */

void __thiscall
Sexy::PopTransformMatrix::PopTransformMatrix(PopTransformMatrix *this,SexyMatrix3 *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* Sexy::PopTransformMatrix::LoadIdentity() */

void __thiscall Sexy::PopTransformMatrix::LoadIdentity(PopTransformMatrix *this)

{
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* Sexy::PopTransformMatrix::Multiply(Sexy::PopTransformMatrix*, Sexy::PopTransformMatrix const*,
   Sexy::PopTransformMatrix const*) */

void Sexy::PopTransformMatrix::Multiply
               (PopTransformMatrix *param_1,PopTransformMatrix *param_2,PopTransformMatrix *param_3)

{
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
  
  fVar4 = *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)param_2;
  fVar11 = *(float *)(param_2 + 0xc);
  fVar7 = *(float *)(param_3 + 0xc);
  fVar9 = *(float *)(param_3 + 0x10);
  fVar2 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 4);
  fVar8 = *(float *)param_3;
  fVar5 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_2 + 8);
  *(float *)param_1 = fVar7 * fVar4 + fVar3 * fVar8;
  *(float *)(param_1 + 4) = fVar9 * fVar4 + fVar3 * fVar6;
  *(float *)(param_1 + 0xc) = fVar7 * fVar12 + fVar11 * fVar8;
  *(float *)(param_1 + 8) = fVar1 * fVar4 + fVar3 * fVar2 + fVar10;
  *(float *)(param_1 + 0x10) = fVar9 * fVar12 + fVar11 * fVar6;
  *(float *)(param_1 + 0x14) = fVar1 * fVar12 + fVar11 * fVar2 + fVar5;
  return;
}


/* Sexy::PopTransformMatrix::TEMPNAMEPLACEHOLDERVALUE(Sexy::PopTransformMatrix const&) const */

PopTransformMatrix * __thiscall
Sexy::PopTransformMatrix::operator*(PopTransformMatrix *this,PopTransformMatrix *param_1)

{
  PopTransformMatrix *in_x8;
  
  Multiply(in_x8,this,param_1);
  return in_x8;
}

