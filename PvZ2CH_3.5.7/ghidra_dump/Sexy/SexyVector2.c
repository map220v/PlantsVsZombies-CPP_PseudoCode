// Class: Sexy::SexyVector2


/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Sexy::SexyVector2::operator*=(SexyVector2 *this,float param_1)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * param_1;
  return;
}


/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Sexy::SexyVector2::operator/=(SexyVector2 *this,float param_1)

{
  *(float *)this = *(float *)this / param_1;
  *(float *)(this + 4) = *(float *)(this + 4) / param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector2 const&) const */

void __thiscall Sexy::SexyVector2::operator+(SexyVector2 *this,SexyVector2 *param_1)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange
            (local_10,*(float *)param_1 + *(float *)this,
             *(float *)(param_1 + 4) + *(float *)(this + 4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector2 const&) const */

void __thiscall Sexy::SexyVector2::operator-(SexyVector2 *this,SexyVector2 *param_1)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange
            (local_10,*(float *)this - *(float *)param_1,
             *(float *)(this + 4) - *(float *)(param_1 + 4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall Sexy::SexyVector2::operator*(SexyVector2 *this,float param_1)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange(local_10,param_1 * *(float *)this,param_1 * *(float *)(this + 4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall Sexy::SexyVector2::operator/(SexyVector2 *this,float param_1)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange(local_10,*(float *)this / param_1,*(float *)(this + 4) / param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* Sexy::SexyVector2::Normalize() const */

undefined1  [16] __thiscall Sexy::SexyVector2::Normalize(SexyVector2 *this)

{
  float fVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  fVar1 = (float)DVec2::getLength((DVec2 *)this);
  if (fVar1 == 0.0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)this & 0xffffffff;
    return auVar3;
  }
  uVar2 = operator/(this,fVar1);
  return ZEXT416(uVar2);
}


/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector2 const&) */

void __thiscall Sexy::SexyVector2::operator-=(SexyVector2 *this,SexyVector2 *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  *(float *)this = *(float *)this - *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) - fVar1;
  return;
}


/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector2 const&) */

bool __thiscall Sexy::SexyVector2::operator==(SexyVector2 *this,SexyVector2 *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(float *)this == *(float *)param_1) {
    bVar1 = *(float *)(this + 4) == *(float *)(param_1 + 4);
  }
  return bVar1;
}


/* Sexy::SexyVector2::AngleBetween(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void Sexy::SexyVector2::AngleBetween(SexyVector2 *param_1,SexyVector2 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)DVec2::dot((DVec2 *)param_1,(DVec2 *)param_2);
  fVar2 = (float)DVec2::getLength((DVec2 *)param_1);
  fVar3 = (float)DVec2::getLength((DVec2 *)param_2);
  acosf(fVar1 / (fVar3 * fVar2));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall Sexy::SexyVector2::operator-(SexyVector2 *this)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange(local_10,-*(float *)this,-*(float *)(this + 4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector2::Perp() const */

void __thiscall Sexy::SexyVector2::Perp(SexyVector2 *this)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FastCurve::SetOutRange(local_10,-*(float *)(this + 4),*(float *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}

