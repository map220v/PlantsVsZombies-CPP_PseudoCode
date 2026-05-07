// Class: Sexy::Transform


/* Sexy::Transform::Reset() */

void __thiscall Sexy::Transform::Reset(Transform *this)

{
  this[0x24] = (Transform)0x1;
  this[0x25] = (Transform)0x0;
  this[0x26] = (Transform)0x0;
  this[0x27] = (Transform)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* Sexy::Transform::Transform() */

void __thiscall Sexy::Transform::Transform(Transform *this)

{
  SexyTransform2D::SexyTransform2D((SexyTransform2D *)this,false);
  Reset(this);
  return;
}


/* Sexy::Transform::Translate(float, float) */

void __thiscall Sexy::Transform::Translate(Transform *this,float param_1,float param_2)

{
  if (this[0x25] != (Transform)0x0) {
    FUN_051dd4c0(this + 8,this + 0x14);
    return;
  }
  this[0x24] = (Transform)0x1;
  if ((this[0x26] == (Transform)0x0) && (this[0x27] == (Transform)0x0)) {
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + param_1;
    *(float *)(this + 0x2c) = *(float *)(this + 0x2c) + param_2;
    return;
  }
  *(float *)(this + 0x30) = *(float *)(this + 0x30) + param_1;
  *(float *)(this + 0x34) = *(float *)(this + 0x34) + param_2;
  return;
}


/* Sexy::Transform::CalcMatrix() const */

void __thiscall Sexy::Transform::CalcMatrix(Transform *this)

{
  if (this[0x24] != (Transform)0x0) {
    this[0x24] = (Transform)0x0;
    SexyMatrix3::LoadIdentity((SexyMatrix3 *)this);
    *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x20) = 0x3f800000;
    if (this[0x27] == (Transform)0x0) {
      if (this[0x26] != (Transform)0x0) {
        SexyTransform2D::RotateRad((SexyTransform2D *)this,*(float *)(this + 0x40));
      }
    }
    else {
      *(undefined4 *)this = *(undefined4 *)(this + 0x38);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x3c);
    }
    if ((*(float *)(this + 0x30) != 0.0) || (*(float *)(this + 0x34) != 0.0)) {
      FUN_051dd4c0(this + 8,this + 0x14);
      return;
    }
  }
  return;
}


/* Sexy::Transform::MakeComplex() */

void __thiscall Sexy::Transform::MakeComplex(Transform *this)

{
  if (this[0x25] != (Transform)0x0) {
    return;
  }
  this[0x25] = (Transform)0x1;
  CalcMatrix(this);
  return;
}


/* Sexy::Transform::RotateRad(float) */

void __thiscall Sexy::Transform::RotateRad(Transform *this,float param_1)

{
  if (this[0x25] != (Transform)0x0) {
    SexyTransform2D::RotateRad((SexyTransform2D *)this,param_1);
    return;
  }
  if (this[0x27] == (Transform)0x0) {
    this[0x24] = (Transform)0x1;
    this[0x26] = (Transform)0x1;
    *(float *)(this + 0x40) = *(float *)(this + 0x40) + param_1;
    return;
  }
  MakeComplex(this);
  SexyTransform2D::RotateRad((SexyTransform2D *)this,param_1);
  return;
}


/* Sexy::Transform::RotateDeg(float) */

void __thiscall Sexy::Transform::RotateDeg(Transform *this,float param_1)

{
  RotateRad(this,param_1 * 0.017453294);
  return;
}


/* Sexy::Transform::Scale(float, float) */

void __thiscall Sexy::Transform::Scale(Transform *this,float param_1,float param_2)

{
  float fVar1;
  
  if (this[0x25] != (Transform)0x0) {
    SexyTransform2D::Scale((SexyTransform2D *)this,param_1,param_2);
    return;
  }
  if (((((this[0x26] == (Transform)0x0) && (*(float *)(this + 0x28) == 0.0)) &&
       (*(float *)(this + 0x2c) == 0.0)) &&
      ((0.0 <= param_1 || (param_1 * *(float *)(this + 0x38) == -1.0)))) && (0.0 <= param_2)) {
    if ((*(float *)(this + 0x30) != 0.0) || (fVar1 = *(float *)(this + 0x34), fVar1 != 0.0)) {
      if (param_1 != param_2) goto LAB_051de740;
      fVar1 = *(float *)(this + 0x34);
    }
    this[0x24] = (Transform)0x1;
    this[0x27] = (Transform)0x1;
    *(float *)(this + 0x38) = *(float *)(this + 0x38) * param_1;
    *(float *)(this + 0x3c) = *(float *)(this + 0x3c) * param_2;
    *(float *)(this + 0x30) = param_1 * *(float *)(this + 0x30);
    *(float *)(this + 0x34) = fVar1 * param_2;
    return;
  }
LAB_051de740:
  MakeComplex(this);
  SexyTransform2D::Scale((SexyTransform2D *)this,param_1,param_2);
  return;
}


/* Sexy::Transform::GetMatrix() const */

Transform * __thiscall Sexy::Transform::GetMatrix(Transform *this)

{
  CalcMatrix(this);
  return this;
}


/* Sexy::Transform::SetMatrix(Sexy::SexyTransform2D const&) */

void __thiscall Sexy::Transform::SetMatrix(Transform *this,SexyTransform2D *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = (Transform)0x0;
  this[0x25] = (Transform)0x1;
  return;
}

