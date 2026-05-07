// Class: DVec3


/* DVec3::DVec3() */

void __thiscall DVec3::DVec3(DVec3 *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* DVec3::getLength() const */

float __thiscall DVec3::getLength(DVec3 *this)

{
  return SQRT(*(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this +
              *(float *)(this + 8) * *(float *)(this + 8));
}


/* DVec3::DVec3(float, float, float) */

void __thiscall DVec3::DVec3(DVec3 *this,float param_1,float param_2,float param_3)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  return;
}


/* DVec3::set(DVec3 const&) */

void __thiscall DVec3::set(DVec3 *this,DVec3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  return;
}


/* DVec3::DVec3(DVec3 const&) */

void __thiscall DVec3::DVec3(DVec3 *this,DVec3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  return;
}


/* DVec3::TEMPNAMEPLACEHOLDERVALUE(DVec3 const&) const */

void __thiscall DVec3::operator+(DVec3 *this,DVec3 *param_1)

{
  DVec3 *in_x8;
  
  DVec3(in_x8,this);
  EATextSquish::Vec3::operator+=((Vec3 *)in_x8,(Vec3 *)param_1);
  return;
}


/* DVec3::TEMPNAMEPLACEHOLDERVALUE(DVec3 const&) const */

void __thiscall DVec3::operator-(DVec3 *this,DVec3 *param_1)

{
  DVec3 *in_x8;
  
  DVec3(in_x8,this);
  EATextSquish::Vec3::operator-=((Vec3 *)in_x8,(Vec3 *)param_1);
  return;
}


/* DVec3::TEMPNAMEPLACEHOLDERVALUE(float) const */

DVec3 * __thiscall DVec3::operator*(DVec3 *this,float param_1)

{
  DVec3 *in_x8;
  
  DVec3(in_x8,param_1 * *(float *)this,param_1 * *(float *)(this + 4),param_1 * *(float *)(this + 8)
       );
  return in_x8;
}


/* DVec3::normalize() */

void __thiscall DVec3::normalize(DVec3 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)this;
  fVar4 = *(float *)(this + 8);
  fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if ((fVar1 != 1.0) && (fVar1 = SQRT(fVar1), 2e-37 <= fVar1)) {
    fVar1 = 1.0 / fVar1;
    *(float *)this = fVar1 * fVar3;
    *(float *)(this + 4) = fVar1 * fVar2;
    *(float *)(this + 8) = fVar1 * fVar4;
  }
  return;
}


/* DVec3::clamp(DVec3 const&, DVec3 const&) */

void __thiscall DVec3::clamp(DVec3 *this,DVec3 *param_1,DVec3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)param_2;
  if (fVar2 <= fVar1) {
    fVar4 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(param_2 + 4);
    if (fVar4 <= fVar3) {
      fVar6 = *(float *)(param_1 + 8);
      fVar5 = *(float *)(param_2 + 8);
      if (fVar6 <= fVar5) {
        fVar7 = *(float *)this;
        if (*(float *)this < fVar2) {
          *(float *)this = fVar2;
          fVar1 = *(float *)param_2;
          fVar7 = fVar2;
        }
        if (fVar1 < fVar7) {
          *(float *)this = fVar1;
        }
        fVar1 = *(float *)(this + 4);
        if (*(float *)(this + 4) < fVar4) {
          *(float *)(this + 4) = fVar4;
          fVar3 = *(float *)(param_2 + 4);
          fVar1 = fVar4;
        }
        if (fVar3 < fVar1) {
          *(float *)(this + 4) = fVar3;
        }
        fVar1 = *(float *)(this + 8);
        if (*(float *)(this + 8) < fVar6) {
          *(float *)(this + 8) = fVar6;
          fVar5 = *(float *)(param_2 + 8);
          fVar1 = fVar6;
        }
        if (fVar5 < fVar1) {
          *(float *)(this + 8) = fVar5;
        }
      }
    }
  }
  return;
}


/* DVec3::getNormalized() const */

void DVec3::getNormalized(void)

{
  DVec3 *in_x0;
  DVec3 *in_x8;
  
  DVec3(in_x8,in_x0);
  normalize(in_x8);
  return;
}

