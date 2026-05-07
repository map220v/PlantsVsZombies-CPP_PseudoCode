// Class: DMove


/* DMove::DMove() */

void __thiscall DMove::DMove(DMove *this)

{
  DAction::DAction((DAction *)this);
  DChangeAble<DMove,DVec2>::DChangeAble((DChangeAble<DMove,DVec2> *)(this + 0x90));
  *(undefined ***)this = &PTR__DMove_06a219b0;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21a20;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DMove::timeStep(float) */

void __thiscall DMove::timeStep(DMove *this,float param_1)

{
  long *plVar1;
  code *pcVar2;
  DVec2 aDStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x88);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x108);
  DVec2::operator*((DVec2 *)(this + 0xb4),param_1);
  DVec2::operator+((DVec2 *)(this + 0xa4),aDStack_18);
  (*pcVar2)(plVar1,auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DMove::setTarget(DTransformNode*) */

void __thiscall DMove::setTarget(DMove *this,DTransformNode *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    fVar2 = (float)(**(code **)(*(long *)param_1 + 0x1c0))(param_1);
    fVar3 = (float)(**(code **)(*(long *)param_1 + 0x1c8))(param_1);
    DChangeAble<DScale,DVec2>::setInfo((DChangeAble<DScale,DVec2> *)(this + 0x90),fVar2,fVar3);
    uVar1 = *(uint *)(this + 0x98);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x118))(*(undefined4 *)(this + 0xa4),param_1);
      uVar1 = *(uint *)(this + 0x98);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x120))(*(undefined4 *)(this + 0xa8),param_1);
      return;
    }
  }
  return;
}


/* DMove::~DMove() */

void __thiscall DMove::~DMove(DMove *this)

{
  *(undefined ***)this = &PTR__DMove_06a219b0;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21a20;
  DAction::~DAction((DAction *)this);
  return;
}


/* DMove::~DMove() */

void __thiscall DMove::~DMove(DMove *this)

{
  ~DMove(this);
  AK::FreeHook(this);
  return;
}


/* DMove::TEMPNAMEPLACEHOLDERVALUE(DMove const&) */

DMove * __thiscall DMove::operator=(DMove *this,DMove *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DChangeAble<DJump,DVec2>::operator=
            ((DChangeAble<DJump,DVec2> *)(this + 0x90),(DChangeAble *)(param_1 + 0x90));
  return this;
}


/* DMove::_copy() const */

DMove * __thiscall DMove::_copy(DMove *this)

{
  DMove *this_00;
  
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
  DMove(this_00);
  operator=(this_00,this);
  return this_00;
}

