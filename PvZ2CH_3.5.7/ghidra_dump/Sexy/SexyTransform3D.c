// Class: Sexy::SexyTransform3D


/* Sexy::SexyTransform3D::SexyTransform3D() */

void __thiscall Sexy::SexyTransform3D::SexyTransform3D(SexyTransform3D *this)

{
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  return;
}


/* Sexy::SexyTransform3D::SexyTransform3D(bool) */

void __thiscall Sexy::SexyTransform3D::SexyTransform3D(SexyTransform3D *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  SexyMatrix4::LoadIdentity((SexyMatrix4 *)this);
  return;
}


/* Sexy::SexyTransform3D::SexyTransform3D(Sexy::SexyMatrix4 const&) */

void __thiscall Sexy::SexyTransform3D::SexyTransform3D(SexyTransform3D *this,SexyMatrix4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}


/* Sexy::SexyTransform3D::TEMPNAMEPLACEHOLDERVALUE(Sexy::SexyMatrix4 const&) */

void __thiscall Sexy::SexyTransform3D::operator=(SexyTransform3D *this,SexyMatrix4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform3D::Translate(float, float, float) */

void __thiscall
Sexy::SexyTransform3D::Translate(SexyTransform3D *this,float param_1,float param_2,float param_3)

{
  SexyMatrix4 aSStack_88 [48];
  float local_58;
  float local_54;
  float local_50;
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyMatrix4::LoadIdentity(aSStack_88);
  local_58 = param_1;
  local_54 = param_2;
  local_50 = param_3;
  SexyMatrix4::operator*((SexyMatrix4 *)this,aSStack_88);
  operator=(this,aSStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform3D::RotateRadX(float) */

void __thiscall Sexy::SexyTransform3D::RotateRadX(SexyTransform3D *this,float param_1)

{
  float fVar1;
  float fVar2;
  SexyMatrix4 aSStack_88 [20];
  float local_74;
  float local_70;
  float local_64;
  float local_60;
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  SexyMatrix4::LoadIdentity(aSStack_88);
  local_64 = -fVar1;
  local_74 = fVar2;
  local_70 = fVar1;
  local_60 = fVar2;
  SexyMatrix4::operator*((SexyMatrix4 *)this,aSStack_88);
  operator=(this,aSStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform3D::RotateRadY(float) */

void __thiscall Sexy::SexyTransform3D::RotateRadY(SexyTransform3D *this,float param_1)

{
  float fVar1;
  float fVar2;
  float local_88 [2];
  float local_80;
  float local_68;
  float local_60;
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  SexyMatrix4::LoadIdentity((SexyMatrix4 *)local_88);
  local_80 = -fVar1;
  local_88[0] = fVar2;
  local_68 = fVar1;
  local_60 = fVar2;
  SexyMatrix4::operator*((SexyMatrix4 *)this,(SexyMatrix4 *)local_88);
  operator=(this,aSStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform3D::RotateRadZ(float) */

void __thiscall Sexy::SexyTransform3D::RotateRadZ(SexyTransform3D *this,float param_1)

{
  float fVar1;
  float fVar2;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  SexyMatrix4::LoadIdentity((SexyMatrix4 *)&local_88);
  local_78 = -fVar1;
  local_88 = fVar2;
  local_84 = fVar1;
  local_74 = fVar2;
  SexyMatrix4::operator*((SexyMatrix4 *)this,(SexyMatrix4 *)&local_88);
  operator=(this,aSStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyTransform3D::Scale(float, float, float) */

void __thiscall
Sexy::SexyTransform3D::Scale(SexyTransform3D *this,float param_1,float param_2,float param_3)

{
  float local_88 [5];
  float local_74;
  float local_60;
  SexyMatrix4 aSStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SexyMatrix4::LoadIdentity((SexyMatrix4 *)local_88);
  local_88[0] = param_1;
  local_74 = param_2;
  local_60 = param_3;
  SexyMatrix4::operator*((SexyMatrix4 *)this,(SexyMatrix4 *)local_88);
  operator=(this,aSStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

