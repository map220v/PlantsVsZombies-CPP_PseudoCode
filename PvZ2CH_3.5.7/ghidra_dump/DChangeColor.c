// Class: DChangeColor


/* DChangeColor::from(DVec3 const&) */

void __thiscall DChangeColor::from(DChangeColor *this,DVec3 *param_1)

{
  *(undefined8 *)(this + 0x9c) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xfffffffc;
  return;
}


/* DChangeColor::to(DVec3 const&) */

void __thiscall DChangeColor::to(DChangeColor *this,DVec3 *param_1)

{
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0x94) = *(uint *)(this + 0x94) & 0xfffffffc;
  this[0x98] = (DChangeColor)0x0;
  return;
}


/* DChangeColor::by(DVec3 const&) */

void __thiscall DChangeColor::by(DChangeColor *this,DVec3 *param_1)

{
  *(undefined8 *)(this + 0xb4) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 8);
  this[0x98] = (DChangeColor)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChangeColor::timeStep(float) */

void __thiscall DChangeColor::timeStep(DChangeColor *this,float param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  code *pcVar4;
  float local_28;
  float local_24;
  float local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::operator*((DVec3 *)(this + 0xb4),param_1);
  DVec3::operator+((DVec3 *)(this + 0x9c),(DVec3 *)aIStack_18);
  DVec3::clamp((DVec3 *)&local_28,(DVec3 *)DVec3::ZERO,(DVec3 *)DVec3::ONE);
  plVar3 = *(long **)(this + 0x88);
  pcVar4 = *(code **)(*plVar3 + 0x268);
  pcVar2 = *(code **)(plVar3[2] + 0x20);
  if (pcVar2 == DColor::getColor) {
    lVar1 = DColor::getColor((DColor *)(plVar3 + 2));
  }
  else {
    lVar1 = (*pcVar2)();
  }
  Sexy::Insets::Insets
            (aIStack_18,(int)(local_28 * 255.0),(int)(local_24 * 255.0),(int)(local_20 * 255.0),
             *(int *)(lVar1 + 0xc));
  (*pcVar4)(plVar3,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChangeColor::setInfo(DVec3 const&) */

void __thiscall DChangeColor::setInfo(DChangeColor *this,DVec3 *param_1)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  if ((*(uint *)(this + 0x90) & 3) != 0) {
    *(undefined8 *)(this + 0x9c) = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 8);
  }
  if (this[0x98] == (DChangeColor)0x0) {
    if ((*(uint *)(this + 0x94) & 3) != 0) {
      *(undefined8 *)(this + 0xa8) = *(undefined8 *)param_1;
      *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 8);
    }
    DVec3::operator-((DVec3 *)(this + 0xa8),(DVec3 *)(this + 0x9c));
    *(undefined8 *)(this + 0xb4) = local_18;
    *(undefined4 *)(this + 0xbc) = local_10;
  }
  else {
    DVec3::operator+((DVec3 *)(this + 0x9c),(DVec3 *)(this + 0xb4));
    *(undefined8 *)(this + 0xa8) = local_18;
    *(undefined4 *)(this + 0xb0) = local_10;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChangeColor::setTarget(DTransformNode*) */

void __thiscall DChangeColor::setTarget(DChangeColor *this,DTransformNode *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  code *pcVar5;
  DColor *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    this_00 = (DColor *)(param_1 + 0x10);
    if (*(code **)(*(long *)this_00 + 0x20) == DColor::getColor) {
      piVar3 = (int *)DColor::getColor(this_00);
      pcVar5 = DColor::getColor;
    }
    else {
      piVar3 = (int *)(**(code **)(*(long *)this_00 + 0x20))();
      pcVar5 = *(code **)(*(long *)(param_1 + 0x10) + 0x20);
    }
    iVar1 = *piVar3;
    if (pcVar5 == DColor::getColor) {
      lVar4 = DColor::getColor(this_00);
      pcVar5 = DColor::getColor;
    }
    else {
      lVar4 = (*pcVar5)();
      pcVar5 = *(code **)(*(long *)(param_1 + 0x10) + 0x20);
    }
    iVar2 = *(int *)(lVar4 + 4);
    if (pcVar5 == DColor::getColor) {
      lVar4 = DColor::getColor(this_00);
    }
    else {
      lVar4 = (*pcVar5)();
    }
    DVec3::DVec3(aDStack_18,(float)iVar1 * 0.003921569,(float)iVar2 * 0.003921569,
                 (float)*(int *)(lVar4 + 8) * 0.003921569);
    setInfo(this,aDStack_18);
    if ((*(uint *)(this + 0x90) & 3) == 0) {
      fVar9 = *(float *)(this + 0x9c);
      fVar8 = *(float *)(this + 0xa0);
      fVar7 = *(float *)(this + 0xa4);
      pcVar6 = *(code **)(*(long *)param_1 + 0x268);
      pcVar5 = *(code **)(*(long *)(*(long *)(this + 0x88) + 0x10) + 0x20);
      if (pcVar5 == DColor::getColor) {
        lVar4 = DColor::getColor((DColor *)(*(long *)(this + 0x88) + 0x10));
      }
      else {
        lVar4 = (*pcVar5)();
      }
      Sexy::Insets::Insets
                ((Insets *)aDStack_18,(int)(fVar9 * 255.0),(int)(fVar8 * 255.0),(int)(fVar7 * 255.0)
                 ,*(int *)(lVar4 + 0xc));
      (*pcVar6)(param_1,aDStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DChangeColor::DChangeColor() */

void __thiscall DChangeColor::DChangeColor(DChangeColor *this)

{
  DAction::DAction((DAction *)this);
  *(undefined4 *)(this + 0x90) = 3;
  *(undefined4 *)(this + 0x94) = 3;
  *(undefined ***)this = &PTR__DChangeColor_06a21d10;
  this[0x98] = (DChangeColor)0x0;
  DVec3::DVec3((DVec3 *)(this + 0x9c));
  DVec3::DVec3((DVec3 *)(this + 0xa8));
  DVec3::DVec3((DVec3 *)(this + 0xb4));
  return;
}


/* DChangeColor::~DChangeColor() */

void __thiscall DChangeColor::~DChangeColor(DChangeColor *this)

{
  *(undefined ***)this = &PTR__DChangeColor_06a21d10;
  DAction::~DAction((DAction *)this);
  return;
}


/* DChangeColor::~DChangeColor() */

void __thiscall DChangeColor::~DChangeColor(DChangeColor *this)

{
  ~DChangeColor(this);
  AK::FreeHook(this);
  return;
}


/* DChangeColor::TEMPNAMEPLACEHOLDERVALUE(DChangeColor const&) */

DChangeColor * __thiscall DChangeColor::operator=(DChangeColor *this,DChangeColor *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DChangeColor DVar3;
  
  DAction::operator=((DAction *)this,(DAction *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  uVar2 = *(undefined4 *)(param_1 + 0x94);
  DVar3 = param_1[0x98];
  *(undefined8 *)(this + 0x9c) = *(undefined8 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0x90) = uVar1;
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0x94) = uVar2;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  this[0x98] = DVar3;
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb4) = *(undefined8 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}


/* DChangeColor::_copy() const */

DChangeColor * __thiscall DChangeColor::_copy(DChangeColor *this)

{
  DChangeColor *this_00;
  
  this_00 = ::operator_new(0xc0);
  DChangeColor(this_00);
  operator=(this_00,this);
  return this_00;
}

