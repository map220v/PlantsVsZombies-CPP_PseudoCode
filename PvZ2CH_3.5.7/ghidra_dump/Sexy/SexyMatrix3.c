// Class: Sexy::SexyMatrix3


/* Sexy::SexyMatrix3::Multiply(Sexy::SexyMatrix3*, Sexy::SexyMatrix3 const*, Sexy::SexyMatrix3
   const*) */

void Sexy::SexyMatrix3::Multiply(SexyMatrix3 *param_1,SexyMatrix3 *param_2,SexyMatrix3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_3 + 0xc);
  *(float *)param_1 = fVar5 * fVar2 + *(float *)param_2 * *(float *)param_3;
  fVar4 = *(float *)(param_3 + 0x10);
  fVar1 = *(float *)param_2;
  *(float *)(param_1 + 4) = fVar4 * fVar2 + fVar1 * *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar6 = *(float *)(param_3 + 0x20);
  *(float *)(param_1 + 8) =
       fVar3 * *(float *)(param_2 + 4) + fVar1 * *(float *)(param_3 + 8) +
       *(float *)(param_2 + 8) * fVar6;
  fVar1 = *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0xc) = fVar1 * fVar5 + *(float *)(param_2 + 0xc) * *(float *)param_3;
  fVar2 = *(float *)(param_2 + 0xc);
  *(float *)(param_1 + 0x10) = fVar1 * fVar4 + fVar2 * *(float *)(param_3 + 4);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar5 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x14) = fVar3 * fVar1 + fVar2 * fVar5 + fVar6 * fVar4;
  *(float *)(param_1 + 0x20) =
       *(float *)(param_3 + 0x14) * *(float *)(param_2 + 0x1c) + fVar5 * *(float *)(param_2 + 0x18)
       + fVar6 * *(float *)(param_2 + 0x20);
  return;
}


/* Sexy::SexyMatrix3::SexyMatrix3(Sexy::SimpleMatrix const&) */

void __thiscall Sexy::SexyMatrix3::SexyMatrix3(SexyMatrix3 *this,SimpleMatrix *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  return;
}


/* Sexy::SexyMatrix3::ZeroMatrix() */

void __thiscall Sexy::SexyMatrix3::ZeroMatrix(SexyMatrix3 *this)

{
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}


/* Sexy::SexyMatrix3::LoadIdentity() */

void __thiscall Sexy::SexyMatrix3::LoadIdentity(SexyMatrix3 *this)

{
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyMatrix3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyVector3 const&) const */

void __thiscall Sexy::SexyMatrix3::operator*(SexyMatrix3 *this,SexyVector3 *param_1)

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
  
  local_8 = ___stack_chk_guard;
  fVar4 = *(float *)(param_1 + 8);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,
             *(float *)(param_1 + 4) * *(float *)(this + 4) + *(float *)this * *(float *)param_1 +
             *(float *)(this + 8) * fVar4,
             *(float *)(param_1 + 4) * *(float *)(this + 0x10) +
             *(float *)param_1 * *(float *)(this + 0xc) + fVar4 * *(float *)(this + 0x14),
             fVar4 * *(float *)(this + 0x20));
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


/* Sexy::SexyMatrix3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix3 const&) const */

SexyMatrix3 * __thiscall Sexy::SexyMatrix3::operator*(SexyMatrix3 *this,SexyMatrix3 *param_1)

{
  SexyMatrix3 *in_x8;
  
  Multiply(in_x8,this,param_1);
  return in_x8;
}


/* Sexy::SexyMatrix3::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix3 const&) */

SexyMatrix3 * __thiscall Sexy::SexyMatrix3::operator*=(SexyMatrix3 *this,SexyMatrix3 *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  operator*(this,param_1);
  *(undefined8 *)(this + 0x10) = local_20;
  *(undefined8 *)(this + 0x18) = uStack_18;
  *(undefined4 *)(this + 0x20) = local_10;
  *(undefined8 *)this = local_30;
  *(undefined8 *)(this + 8) = uStack_28;
  return this;
}

