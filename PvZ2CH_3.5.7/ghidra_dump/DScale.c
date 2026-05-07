// Class: DScale


/* DScale::DScale() */

void __thiscall DScale::DScale(DScale *this)

{
  DAction::DAction((DAction *)this);
  DChangeAble<DScale,DVec2>::DChangeAble((DChangeAble<DScale,DVec2> *)(this + 0x90));
  *(undefined ***)this = &PTR__DScale_06a21be0;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21c68;
  return;
}


/* DScale::fromX(float) */

void __thiscall DScale::fromX(DScale *this,float param_1)

{
  *(float *)(this + 0xa4) = param_1;
  *(uint *)(this + 0x98) = *(uint *)(this + 0x98) & 0xfffffffe;
  return;
}


/* DScale::fromY(float) */

void __thiscall DScale::fromY(DScale *this,float param_1)

{
  *(float *)(this + 0xa8) = param_1;
  *(uint *)(this + 0x98) = *(uint *)(this + 0x98) & 0xfffffffd;
  return;
}


/* DScale::toX(float) */

void __thiscall DScale::toX(DScale *this,float param_1)

{
  *(float *)(this + 0xac) = param_1;
  this[0xa0] = (DScale)0x0;
  *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) & 0xfffffffe;
  return;
}


/* DScale::toY(float) */

void __thiscall DScale::toY(DScale *this,float param_1)

{
  *(float *)(this + 0xb0) = param_1;
  this[0xa0] = (DScale)0x0;
  *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) & 0xfffffffd;
  return;
}


/* DScale::fromScale(float) */

DScale * __thiscall DScale::fromScale(DScale *this,float param_1)

{
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xa4),param_1,param_1);
  *(uint *)(this + 0x98) = *(uint *)(this + 0x98) & 0xfffffffc;
  return this;
}


/* DScale::toScale(float) */

DScale * __thiscall DScale::toScale(DScale *this,float param_1)

{
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xac),param_1,param_1);
  this[0xa0] = (DScale)0x0;
  *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) & 0xfffffffc;
  return this;
}


/* DScale::byScale(float) */

DScale * __thiscall DScale::byScale(DScale *this,float param_1)

{
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xb4),param_1,param_1);
  this[0xa0] = (DScale)0x1;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScale::timeStep(float) */

void __thiscall DScale::timeStep(DScale *this,float param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec2::operator*((DVec2 *)(this + 0xb4),param_1);
  DVec2::operator+((DVec2 *)(this + 0xa4),aDStack_10);
  (**(code **)(**(long **)(this + 0x88) + 0x148))(local_18,local_14,*(long **)(this + 0x88));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DScale::setTarget(DTransformNode*) */

void __thiscall DScale::setTarget(DScale *this,DTransformNode *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    fVar2 = (float)(**(code **)(*(long *)param_1 + 0x1d0))(param_1);
    fVar3 = (float)(**(code **)(*(long *)param_1 + 0x1d8))(param_1);
    DChangeAble<DScale,DVec2>::setInfo((DChangeAble<DScale,DVec2> *)(this + 0x90),fVar2,fVar3);
    uVar1 = *(uint *)(this + 0x98);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x150))(*(undefined4 *)(this + 0xa4),param_1);
      uVar1 = *(uint *)(this + 0x98);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x158))(*(undefined4 *)(this + 0xa8),param_1);
      return;
    }
  }
  return;
}


/* DScale::~DScale() */

void __thiscall DScale::~DScale(DScale *this)

{
  *(undefined ***)this = &PTR__DScale_06a21be0;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21c68;
  DAction::~DAction((DAction *)this);
  return;
}


/* DScale::~DScale() */

void __thiscall DScale::~DScale(DScale *this)

{
  ~DScale(this);
  AK::FreeHook(this);
  return;
}


/* DScale::_copy() const */

DScale * __thiscall DScale::_copy(DScale *this)

{
  DScale *this_00;
  
  this_00 = ::operator_new(0xc0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  DScale(this_00);
  DMove::operator=((DMove *)this_00,(DMove *)this);
  return this_00;
}

