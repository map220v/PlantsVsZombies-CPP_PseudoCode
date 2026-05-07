// Class: Sexy::SimpleMatrix


/* Sexy::SimpleMatrix::Invert() */

void __thiscall Sexy::SimpleMatrix::Invert(SimpleMatrix *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 8);
  fVar3 = *(float *)this;
  fVar6 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x10);
  fVar1 = 1.0 / (fVar6 * fVar3 - fVar4 * fVar5);
  *(float *)this = fVar1 * fVar6;
  *(float *)(this + 4) = -(fVar5 * fVar1);
  *(float *)(this + 8) = -(fVar4 * fVar1);
  *(float *)(this + 0xc) = fVar1 * fVar3;
  *(float *)(this + 0x10) = (*(float *)(this + 0x14) * fVar4 - fVar2 * fVar6) * fVar1;
  *(float *)(this + 0x14) = (fVar2 * fVar5 - *(float *)(this + 0x14) * fVar3) * fVar1;
  return;
}


/* Sexy::SimpleMatrix::TransformPoint(Sexy::FPoint const&) */

DVec2 * Sexy::SimpleMatrix::TransformPoint(FPoint *param_1)

{
  float *in_x1;
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,in_x1[1] * *(float *)(param_1 + 8) + *(float *)param_1 * *in_x1 +
                     *(float *)(param_1 + 0x10),
               in_x1[1] * *(float *)(param_1 + 0xc) + *in_x1 * *(float *)(param_1 + 4) +
               *(float *)(param_1 + 0x14));
  return in_x8;
}


/* Sexy::SimpleMatrix::Scale(float, float) */

void __thiscall Sexy::SimpleMatrix::Scale(SimpleMatrix *this,float param_1,float param_2)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * param_2;
  *(float *)(this + 8) = *(float *)(this + 8) * param_1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * param_2;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * param_1;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * param_2;
  return;
}


/* Sexy::SimpleMatrix::Identity() */

void __thiscall Sexy::SimpleMatrix::Identity(SimpleMatrix *this)

{
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}


/* Sexy::SimpleMatrix::RotateRad(float) */

void __thiscall Sexy::SimpleMatrix::RotateRad(SimpleMatrix *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = sinf(param_1);
  fVar7 = *(float *)(this + 4);
  fVar6 = *(float *)(this + 0xc);
  fVar5 = *(float *)(this + 0x14);
  fVar2 = cosf(param_1);
  fVar4 = *(float *)this;
  fVar3 = *(float *)(this + 8);
  *(float *)this = fVar2 * fVar4 - fVar1 * fVar7;
  *(float *)(this + 8) = fVar2 * fVar3 - fVar1 * fVar6;
  *(float *)(this + 4) = fVar2 * fVar7 + fVar4 * fVar1;
  *(float *)(this + 0xc) = fVar2 * fVar6 + fVar3 * fVar1;
  *(float *)(this + 0x14) = fVar2 * fVar5 + *(float *)(this + 0x10) * fVar1;
  *(float *)(this + 0x10) = fVar2 * *(float *)(this + 0x10) - fVar1 * fVar5;
  return;
}


/* Sexy::SimpleMatrix::Concat(Sexy::SimpleMatrix const&) */

void __thiscall Sexy::SimpleMatrix::Concat(SimpleMatrix *this,SimpleMatrix *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 4);
  fVar6 = *(float *)this;
  fVar8 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(this + 8);
  fVar7 = *(float *)(this + 0x10);
  *(float *)this = fVar1 * *(float *)(this + 4) + fVar6 * *(float *)param_1;
  *(float *)(this + 4) = fVar2 * *(float *)(this + 4) + fVar6 * fVar3;
  fVar6 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 0x14);
  *(float *)(this + 8) = fVar1 * *(float *)(this + 0xc) + fVar4 * fVar6;
  *(float *)(this + 0xc) = fVar2 * *(float *)(this + 0xc) + fVar4 * fVar3;
  fVar1 = *(float *)(param_1 + 0xc);
  *(float *)(this + 0x10) =
       *(float *)(this + 0x14) * *(float *)(param_1 + 8) + fVar7 * fVar6 + fVar8;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * fVar1 + fVar7 * fVar3 + fVar5;
  return;
}

