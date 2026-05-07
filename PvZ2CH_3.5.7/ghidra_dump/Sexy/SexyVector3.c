// Class: Sexy::SexyVector3


/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) */

void __thiscall Sexy::SexyVector3::operator=(SexyVector3 *this,SexyVector3 *param_1)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyVector3::operator+(SexyVector3 *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,*(float *)param_1 + *(float *)this,
             *(float *)(param_1 + 4) + *(float *)(this + 4),
             *(float *)(param_1 + 8) + *(float *)(this + 8));
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
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyVector3::operator-(SexyVector3 *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,*(float *)this - *(float *)param_1,
             *(float *)(this + 4) - *(float *)(param_1 + 4),
             *(float *)(this + 8) - *(float *)(param_1 + 8));
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
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall Sexy::SexyVector3::operator/(SexyVector3 *this,float param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  fVar4 = 1.0 / param_1;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,fVar4 * *(float *)this,fVar4 * *(float *)(this + 4),
             fVar4 * *(float *)(this + 8));
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


/* Sexy::SexyVector3::Normalize() const */

undefined4 __thiscall Sexy::SexyVector3::Normalize(SexyVector3 *this)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  fVar1 = (float)DVec3::getLength((DVec3 *)this);
  if (fVar1 == 0.0) {
    local_10 = (undefined4)*(undefined8 *)this;
    return local_10;
  }
  uVar2 = operator/(this,fVar1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall Sexy::SexyVector3::operator-(SexyVector3 *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,-*(float *)this,-*(float *)(this + 4),-*(float *)(this + 8));
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
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall Sexy::SexyVector3::operator*(SexyVector3 *this,float param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,param_1 * *(float *)this,param_1 * *(float *)(this + 4),
             param_1 * *(float *)(this + 8));
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
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyVector3::operator*(SexyVector3 *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,*(float *)param_1 * *(float *)this,
             *(float *)(param_1 + 4) * *(float *)(this + 4),
             *(float *)(param_1 + 8) * *(float *)(this + 8));
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


/* Sexy::SexyVector3::MagnitudeSquared() const */

float __thiscall Sexy::SexyVector3::MagnitudeSquared(SexyVector3 *this)

{
  return *(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this +
         *(float *)(this + 8) * *(float *)(this + 8);
}


/* Sexy::SexyVector3::ApproxEquals(Sexy::SexyVector3 const&, float) const */

undefined8 __thiscall
Sexy::SexyVector3::ApproxEquals(SexyVector3 *this,SexyVector3 *param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_03ff15b8(*(undefined4 *)this,*(undefined4 *)param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_03ff15b8(*(undefined4 *)(this + 4),*(undefined4 *)(param_1 + 4),param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_03ff15b8(*(undefined4 *)(this + 8),*(undefined4 *)(param_1 + 8),param_2);
      return uVar2;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector3::ApproxZero(float) const */

void __thiscall Sexy::SexyVector3::ApproxZero(SexyVector3 *this,float param_1)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  ApproxEquals(this,(SexyVector3 *)aVStack_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector3::Cross(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyVector3::Cross(SexyVector3 *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,
             *(float *)(param_1 + 8) * *(float *)(this + 4) -
             *(float *)(param_1 + 4) * *(float *)(this + 8),
             *(float *)param_1 * *(float *)(this + 8) - *(float *)this * *(float *)(param_1 + 8),
             *(float *)this * *(float *)(param_1 + 4) - *(float *)param_1 * *(float *)(this + 4));
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
/* Sexy::SexyVector3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyVector3::operator/(SexyVector3 *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,*(float *)this / *(float *)param_1,
             *(float *)(this + 4) / *(float *)(param_1 + 4),
             *(float *)(this + 8) / *(float *)(param_1 + 8));
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
/* Sexy::SexyVector3::Enter(Sexy::SexyAxes3 const&) const */

void __thiscall Sexy::SexyVector3::Enter(SexyVector3 *this,SexyAxes3 *param_1)

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
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)EATextSquish::Dot((Vec3 *)this,(Vec3 *)param_1);
  fVar5 = (float)EATextSquish::Dot((Vec3 *)this,(Vec3 *)(param_1 + 0xc));
  fVar6 = (float)EATextSquish::Dot((Vec3 *)this,(Vec3 *)(param_1 + 0x18));
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar4,fVar5,fVar6);
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
/* Sexy::SexyVector3::Enter(Sexy::SexyCoords3 const&) const */

void Sexy::SexyVector3::Enter(SexyCoords3 *param_1)

{
  SexyVector3 *in_x1;
  undefined4 local_38 [4];
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = operator-((SexyVector3 *)param_1,in_x1);
  local_28[0] = Enter((SexyVector3 *)local_38,(SexyAxes3 *)(in_x1 + 0xc));
  operator/((SexyVector3 *)local_28,in_x1 + 0x30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyVector3::Leave(Sexy::SexyAxes3 const&) const */

void __thiscall Sexy::SexyVector3::Leave(SexyVector3 *this,SexyAxes3 *param_1)

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
  
  fVar4 = *(float *)(this + 4);
  fVar6 = *(float *)this;
  local_8 = ___stack_chk_guard;
  fVar5 = *(float *)(this + 8);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,
             fVar4 * *(float *)(param_1 + 0xc) + fVar6 * *(float *)param_1 +
             fVar5 * *(float *)(param_1 + 0x18),
             fVar4 * *(float *)(param_1 + 0x10) + fVar6 * *(float *)(param_1 + 4) +
             fVar5 * *(float *)(param_1 + 0x1c),
             fVar4 * *(float *)(param_1 + 0x14) + fVar6 * *(float *)(param_1 + 8) +
             fVar5 * *(float *)(param_1 + 0x20));
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
/* Sexy::SexyVector3::Leave(Sexy::SexyCoords3 const&) const */

void Sexy::SexyVector3::Leave(SexyCoords3 *param_1)

{
  SexyVector3 *in_x1;
  undefined4 local_38 [4];
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = operator*((SexyVector3 *)param_1,in_x1 + 0x30);
  local_28[0] = Leave((SexyVector3 *)local_38,(SexyAxes3 *)(in_x1 + 0xc));
  operator+((SexyVector3 *)local_28,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

