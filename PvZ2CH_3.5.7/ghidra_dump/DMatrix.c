// Class: DMatrix


/* DMatrix::DMatrix() */

void __thiscall DMatrix::DMatrix(DMatrix *this)

{
  Sexy::MemoryImage::TriRep::Tri::Tri((Tri *)this,1.0,0.0,0.0,1.0,0.0,0.0);
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}


/* DMatrix::DMatrix(DMatrix const&) */

void __thiscall DMatrix::DMatrix(DMatrix *this,DMatrix *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Sexy::MemoryImage::TriRep::Tri::Tri((Tri *)this,1.0,0.0,0.0,1.0,0.0,0.0);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  return;
}


/* DMatrix::SetMatrix(float, float, float, float, float) */

void __thiscall
DMatrix::SetMatrix(DMatrix *this,float param_1,float param_2,float param_3,float param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = sinf(param_3);
  fVar2 = cosf(param_3);
  *(float *)(this + 0x10) = param_1;
  *(float *)(this + 4) = fVar1 * param_4;
  *(float *)(this + 8) = -(fVar1 * param_5);
  *(float *)this = fVar2 * param_4;
  *(float *)(this + 0xc) = fVar2 * param_5;
  *(float *)(this + 0x14) = param_2;
  return;
}


/* DMatrix::Translate2(float, float) */

void __thiscall DMatrix::Translate2(DMatrix *this,float param_1,float param_2)

{
  *(float *)(this + 0x10) =
       *(float *)(this + 0x10) + *(float *)(this + 8) * param_2 + *(float *)this * param_1;
  *(float *)(this + 0x14) =
       *(float *)(this + 0x14) + *(float *)(this + 0xc) * param_2 + *(float *)(this + 4) * param_1;
  return;
}


/* DMatrix::Scale2(float, float) */

void __thiscall DMatrix::Scale2(DMatrix *this,float param_1,float param_2)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * param_1;
  *(float *)(this + 8) = *(float *)(this + 8) * param_2;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * param_2;
  return;
}


/* DMatrix::Concat2(Sexy::SimpleMatrix const&) */

void __thiscall DMatrix::Concat2(DMatrix *this,SimpleMatrix *param_1)

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
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(this + 0xc);
  fVar4 = *(float *)(this + 8);
  fVar7 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)this;
  fVar10 = *(float *)(this + 4);
  fVar8 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 8);
  *(float *)this = fVar7 * fVar4 + fVar3 * fVar8;
  *(float *)(this + 8) = fVar9 * fVar4 + fVar3 * fVar6;
  *(float *)(this + 4) = fVar7 * fVar5 + fVar10 * fVar8;
  *(float *)(this + 0xc) = fVar9 * fVar5 + fVar10 * fVar6;
  *(float *)(this + 0x10) = fVar1 * fVar4 + fVar3 * fVar2 + *(float *)(this + 0x10);
  *(float *)(this + 0x14) = fVar1 * fVar5 + fVar10 * fVar2 + *(float *)(this + 0x14);
  return;
}


/* DMatrix::TEMPNAMEPLACEHOLDERVALUE(DMatrix const&) const */

void __thiscall DMatrix::operator*(DMatrix *this,DMatrix *param_1)

{
  DMatrix *in_x8;
  
  DMatrix(in_x8,this);
  Concat2(in_x8,(SimpleMatrix *)param_1);
  return;
}

