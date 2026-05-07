// Class: DVec2


/* DVec2::getLength() const */

float __thiscall DVec2::getLength(DVec2 *this)

{
  return SQRT(*(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this);
}


/* DVec2::DVec2(float, float) */

void __thiscall DVec2::DVec2(DVec2 *this,float param_1,float param_2)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  return;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE(DVec2 const&) const */

void __thiscall DVec2::operator+(DVec2 *this,DVec2 *param_1)

{
  FPoint *in_x8;
  
  Sexy::FPoint::FPoint(in_x8,(TPoint *)this);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)in_x8,(TPoint *)param_1);
  return;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE(float) const */

DVec2 * __thiscall DVec2::operator*(DVec2 *this,float param_1)

{
  DVec2 *in_x8;
  
  DVec2(in_x8,param_1 * *(float *)this,param_1 * *(float *)(this + 4));
  return in_x8;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE(DVec2 const&) const */

void __thiscall DVec2::operator-(DVec2 *this,DVec2 *param_1)

{
  FPoint *in_x8;
  
  Sexy::FPoint::FPoint(in_x8,(TPoint *)this);
  Sexy::SexyVector2::operator-=((SexyVector2 *)in_x8,(SexyVector2 *)param_1);
  return;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE(float) const */

DVec2 * __thiscall DVec2::operator/(DVec2 *this,float param_1)

{
  DVec2 *in_x8;
  
  DVec2(in_x8,*(float *)this / param_1,*(float *)(this + 4) / param_1);
  return in_x8;
}


/* DVec2::neg() */

void __thiscall DVec2::neg(DVec2 *this)

{
  *(float *)this = -*(float *)this;
  *(float *)(this + 4) = -*(float *)(this + 4);
  return;
}


/* DVec2::getMidpoint(DVec2 const&) const */

DVec2 * DVec2::getMidpoint(DVec2 *param_1)

{
  float *in_x1;
  DVec2 *in_x8;
  
  DVec2(in_x8,(*in_x1 + *(float *)param_1) * 0.5,(in_x1[1] + *(float *)(param_1 + 4)) * 0.5);
  return in_x8;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall DVec2::operator-(DVec2 *this)

{
  FPoint *in_x8;
  
  Sexy::FPoint::FPoint(in_x8,(TPoint *)this);
  neg((DVec2 *)in_x8);
  return;
}


/* DVec2::dot(DVec2 const&, DVec2 const&) */

float DVec2::dot(DVec2 *param_1,DVec2 *param_2)

{
  return *(float *)(param_2 + 4) * *(float *)(param_1 + 4) + *(float *)param_1 * *(float *)param_2;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE(DVec2 const&) const */

bool __thiscall DVec2::operator!=(DVec2 *this,DVec2 *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(float *)this == *(float *)param_1) {
    bVar1 = *(float *)(this + 4) != *(float *)(param_1 + 4);
  }
  return bVar1;
}


/* DVec2::cross(DVec2 const&) const */

float __thiscall DVec2::cross(DVec2 *this,DVec2 *param_1)

{
  return *(float *)(param_1 + 4) * *(float *)this - *(float *)param_1 * *(float *)(this + 4);
}


/* DVec2::normalize() */

void __thiscall DVec2::normalize(DVec2 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 4);
  fVar2 = *(float *)this;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2;
  if ((fVar1 != 1.0) && (fVar1 = SQRT(fVar1), 2e-37 <= fVar1)) {
    fVar1 = 1.0 / fVar1;
    *(float *)this = fVar1 * fVar2;
    *(float *)(this + 4) = fVar1 * fVar3;
  }
  return;
}


/* DVec2::clamp(DVec2 const&, DVec2 const&) */

void __thiscall DVec2::clamp(DVec2 *this,DVec2 *param_1,DVec2 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)param_2;
  if (fVar2 <= fVar1) {
    fVar4 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(param_2 + 4);
    if (fVar4 <= fVar3) {
      fVar5 = *(float *)this;
      if (*(float *)this < fVar2) {
        *(float *)this = fVar2;
        fVar1 = *(float *)param_2;
        fVar5 = fVar2;
      }
      if (fVar1 < fVar5) {
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
    }
  }
  return;
}


/* DVec2::getNormalized() const */

void DVec2::getNormalized(void)

{
  TPoint *in_x0;
  FPoint *in_x8;
  
  Sexy::FPoint::FPoint(in_x8,in_x0);
  normalize((DVec2 *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DVec2::getAngle(DVec2 const&) const */

void DVec2::getAngle(DVec2 *param_1)

{
  float fVar1;
  float fVar2;
  DVec2 aDStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getNormalized();
  getNormalized();
  fVar1 = (float)cross(aDStack_18,aDStack_10);
  fVar2 = (float)dot(aDStack_18,aDStack_10);
  fVar2 = atan2f(fVar1,fVar2);
  fVar1 = 0.0;
  if (1.1920929e-07 <= ABS(fVar2)) {
    fVar1 = fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}


/* DVec2::setZero() */

void __thiscall DVec2::setZero(DVec2 *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}


/* DVec2::setOne() */

void __thiscall DVec2::setOne(DVec2 *this)

{
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* DVec2::isZero() const */

bool __thiscall DVec2::isZero(DVec2 *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(float *)this == 0.0) {
    bVar1 = *(float *)(this + 4) == 0.0;
  }
  return bVar1;
}


/* DVec2::TEMPNAMEPLACEHOLDERVALUE(DVec2 const&) */

DVec2 * __thiscall DVec2::operator+=(DVec2 *this,DVec2 *param_1)

{
  Sexy::TPoint<float>::operator+=((TPoint<float> *)this,(TPoint *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DVec2::getDistance(DVec2 const&) const */

void __thiscall DVec2::getDistance(DVec2 *this,DVec2 *param_1)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  operator-(this,param_1);
  getLength(aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

