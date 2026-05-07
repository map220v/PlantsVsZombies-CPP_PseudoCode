// Class: DJump


/* DJump::DJump() */

void __thiscall DJump::DJump(DJump *this)

{
  DAction::DAction((DAction *)this);
  DChangeAble<DJump,DVec2>::DChangeAble((DChangeAble<DJump,DVec2> *)(this + 0x90));
  *(undefined ***)this = &PTR__DJump_06a21a50;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21ab0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xbc));
  *(undefined4 *)(this + 200) = 1;
  *(undefined4 *)(this + 0xc4) = 0x40a00000;
  return;
}


/* DJump::setJumpCount(int) */

void __thiscall DJump::setJumpCount(DJump *this,int param_1)

{
  *(int *)(this + 200) = param_1;
  return;
}


/* DJump::setHeight(float) */

void __thiscall DJump::setHeight(DJump *this,float param_1)

{
  *(float *)(this + 0xc4) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DJump::timeStep(float) */

void __thiscall DJump::timeStep(DJump *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  float fVar3;
  DVec2 aDStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = fmodf(param_1 * (float)*(int *)(this + 200),1.0);
  plVar2 = *(long **)(this + 0x88);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  DVec2::DVec2(aDStack_18,param_1 * *(float *)(this + 0xb4),
               param_1 * *(float *)(this + 0xb8) +
               (1.0 - fVar3) * -(*(float *)(this + 0xc4) * 4.0) * fVar3);
  DVec2::operator+((DVec2 *)(this + 0xa4),aDStack_18);
  (*pcVar1)(plVar2,auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DJump::setTarget(DTransformNode*) */

void __thiscall DJump::setTarget(DJump *this,DTransformNode *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    fVar3 = (float)(**(code **)(*(long *)param_1 + 0x1c0))(param_1);
    fVar4 = (float)(**(code **)(*(long *)param_1 + 0x1c8))(param_1);
    DChangeAble<DScale,DVec2>::setInfo((DChangeAble<DScale,DVec2> *)(this + 0x90),fVar3,fVar4);
    uVar1 = *(uint *)(this + 0x98);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x118))(*(undefined4 *)(this + 0xa4),param_1);
      uVar1 = *(uint *)(this + 0x98);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x120))(*(undefined4 *)(this + 0xa8),param_1);
    }
    puVar2 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x1b8))(param_1);
    *(undefined8 *)(this + 0xbc) = *puVar2;
  }
  return;
}


/* DJump::~DJump() */

void __thiscall DJump::~DJump(DJump *this)

{
  *(undefined ***)this = &PTR__DJump_06a21a50;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21ab0;
  DAction::~DAction((DAction *)this);
  return;
}


/* DJump::~DJump() */

void __thiscall DJump::~DJump(DJump *this)

{
  ~DJump(this);
  AK::FreeHook(this);
  return;
}


/* DJump::TEMPNAMEPLACEHOLDERVALUE(DJump const&) */

DJump * __thiscall DJump::operator=(DJump *this,DJump *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DChangeAble<DJump,DVec2>::operator=
            ((DChangeAble<DJump,DVec2> *)(this + 0x90),(DChangeAble *)(param_1 + 0x90));
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  uVar2 = *(undefined8 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined8 *)(this + 0xbc) = uVar2;
  *(undefined4 *)(this + 0xc4) = uVar1;
  return this;
}


/* DJump::_copy() const */

DJump * __thiscall DJump::_copy(DJump *this)

{
  DJump *this_00;
  
  this_00 = ::operator_new(0xd0);
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
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  DJump(this_00);
  operator=(this_00,this);
  return this_00;
}

