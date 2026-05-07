// Class: Sexy::PATransform


/* Sexy::PATransform::PATransform() */

void __thiscall Sexy::PATransform::PATransform(PATransform *this)

{
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* Sexy::PATransform::TransformSrc(Sexy::PATransform const&) const */

void Sexy::PATransform::TransformSrc(PATransform *param_1)

{
  PopTransformMatrix *in_x1;
  PATransform *in_x8;
  
  PATransform(in_x8);
  PopTransformMatrix::Multiply((PopTransformMatrix *)in_x8,(PopTransformMatrix *)param_1,in_x1);
  return;
}


/* Sexy::PATransform::InterpolateTo(Sexy::PATransform const&, float) const */

PATransform * Sexy::PATransform::InterpolateTo(PATransform *param_1,float param_2)

{
  float *in_x1;
  PATransform *in_x8;
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
  
  PATransform(in_x8);
  fVar4 = in_x1[5];
  fVar1 = *in_x1;
  fVar10 = in_x1[2];
  fVar8 = in_x1[3];
  fVar6 = in_x1[4];
  fVar3 = 1.0 - param_2;
  fVar11 = *(float *)(param_1 + 8);
  fVar9 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)param_1;
  *(float *)(in_x8 + 4) = param_2 * in_x1[1] + *(float *)(param_1 + 4) * fVar3;
  *(float *)(in_x8 + 8) = param_2 * fVar10 + fVar11 * fVar3;
  *(float *)(in_x8 + 0xc) = param_2 * fVar8 + fVar9 * fVar3;
  *(float *)(in_x8 + 0x10) = param_2 * fVar6 + fVar7 * fVar3;
  *(float *)(in_x8 + 0x14) = param_2 * fVar4 + fVar5 * fVar3;
  *(float *)in_x8 = param_2 * fVar1 + fVar2 * fVar3;
  return in_x8;
}

