// Class: DChangeAble<DRotate,float>


/* DChangeAble<DRotate, float>::from(float const&) */

DChangeAble<DRotate,float> * __thiscall
DChangeAble<DRotate,float>::from(DChangeAble<DRotate,float> *this,float *param_1)

{
  *(float *)(this + 0x14) = *param_1;
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffc;
  return this + -0x90;
}


/* DChangeAble<DRotate, float>::to(float const&) */

DChangeAble<DRotate,float> * __thiscall
DChangeAble<DRotate,float>::to(DChangeAble<DRotate,float> *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  this[0x10] = (DChangeAble<DRotate,float>)0x0;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffc;
  *(float *)(this + 0x18) = fVar1;
  return this + -0x90;
}


/* DChangeAble<DJump, DVec2>::by(DVec2 const&) */

DChangeAble<DJump,DVec2> * __thiscall
DChangeAble<DJump,DVec2>::by(DChangeAble<DJump,DVec2> *this,DVec2 *param_1)

{
  *(undefined8 *)(this + 0x24) = *(undefined8 *)param_1;
  this[0x10] = (DChangeAble<DJump,DVec2>)0x1;
  return this + -0x90;
}


/* DChangeAble<DRotate, float>::by(float const&) */

DChangeAble<DRotate,float> * __thiscall
DChangeAble<DRotate,float>::by(DChangeAble<DRotate,float> *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  this[0x10] = (DChangeAble<DRotate,float>)0x1;
  *(float *)(this + 0x1c) = fVar1;
  return this + -0x90;
}


/* DChangeAble<DJump, DVec2>::from(DVec2 const&) */

DChangeAble<DJump,DVec2> * __thiscall
DChangeAble<DJump,DVec2>::from(DChangeAble<DJump,DVec2> *this,DVec2 *param_1)

{
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffc;
  return this + -0x90;
}


/* DChangeAble<DJump, DVec2>::to(DVec2 const&) */

DChangeAble<DJump,DVec2> * __thiscall
DChangeAble<DJump,DVec2>::to(DChangeAble<DJump,DVec2> *this,DVec2 *param_1)

{
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)param_1;
  this[0x10] = (DChangeAble<DJump,DVec2>)0x0;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffc;
  return this + -0x90;
}


/* DChangeAble<DMove, DVec2>::DChangeAble() */

void __thiscall DChangeAble<DMove,DVec2>::DChangeAble(DChangeAble<DMove,DVec2> *this)

{
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined ***)this = &PTR_from_06656c70;
  this[0x10] = (DChangeAble<DMove,DVec2>)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24));
  return;
}


/* DChangeAble<DScale, DVec2>::DChangeAble() */

void __thiscall DChangeAble<DScale,DVec2>::DChangeAble(DChangeAble<DScale,DVec2> *this)

{
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined ***)this = &PTR_from_06656ca0;
  this[0x10] = (DChangeAble<DScale,DVec2>)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24));
  return;
}


/* DChangeAble<DFade, float>::DChangeAble() */

void __thiscall DChangeAble<DFade,float>::DChangeAble(DChangeAble<DFade,float> *this)

{
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined ***)this = &PTR_from_06656cd0;
  this[0x10] = (DChangeAble<DFade,float>)0x0;
  return;
}


/* DChangeAble<DJump, DVec2>::DChangeAble() */

void __thiscall DChangeAble<DJump,DVec2>::DChangeAble(DChangeAble<DJump,DVec2> *this)

{
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined ***)this = &PTR_from_067767a0;
  this[0x10] = (DChangeAble<DJump,DVec2>)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24));
  return;
}


/* DChangeAble<DJump, DVec2>::TEMPNAMEPLACEHOLDERVALUE(DChangeAble<DJump, DVec2> const&) */

void __thiscall
DChangeAble<DJump,DVec2>::operator=(DChangeAble<DJump,DVec2> *this,DChangeAble *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DChangeAble<DJump,DVec2> DVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  DVar3 = *(DChangeAble<DJump,DVec2> *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  this[0x10] = DVar3;
  *(undefined8 *)(this + 0x14) = uVar5;
  *(undefined8 *)(this + 0x1c) = uVar4;
  return;
}


/* DChangeAble<DFade, float>::TEMPNAMEPLACEHOLDERVALUE(DChangeAble<DFade, float> const&) */

void __thiscall
DChangeAble<DFade,float>::operator=(DChangeAble<DFade,float> *this,DChangeAble *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  this[0x10] = *(DChangeAble<DFade,float> *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return;
}


/* DChangeAble<DRotate, float>::DChangeAble() */

void __thiscall DChangeAble<DRotate,float>::DChangeAble(DChangeAble<DRotate,float> *this)

{
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined ***)this = &PTR_from_06a21930;
  this[0x10] = (DChangeAble<DRotate,float>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChangeAble<DScale, DVec2>::setInfo(float, float) */

void __thiscall
DChangeAble<DScale,DVec2>::setInfo(DChangeAble<DScale,DVec2> *this,float param_1,float param_2)

{
  long lVar1;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  if ((*(uint *)(this + 8) & 1) != 0) {
    *(float *)(this + 0x14) = param_1;
  }
  if ((*(uint *)(this + 8) >> 1 & 1) != 0) {
    *(float *)(this + 0x18) = param_2;
  }
  if (this[0x10] == (DChangeAble<DScale,DVec2>)0x0) {
    if ((*(uint *)(this + 0xc) & 1) != 0) {
      *(float *)(this + 0x1c) = param_1;
    }
    if ((*(uint *)(this + 0xc) >> 1 & 1) != 0) {
      *(float *)(this + 0x20) = param_2;
    }
    DVec2::operator-((DVec2 *)(this + 0x1c),(DVec2 *)(this + 0x14));
    *(undefined8 *)(this + 0x24) = local_10;
  }
  else {
    DVec2::operator+((DVec2 *)(this + 0x14),(DVec2 *)(this + 0x24));
    *(undefined8 *)(this + 0x1c) = local_10;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DChangeAble<DFade, float>::setInfo(float) */

void __thiscall DChangeAble<DFade,float>::setInfo(DChangeAble<DFade,float> *this,float param_1)

{
  DChangeAble<DFade,float> DVar1;
  float fVar2;
  
  if ((*(uint *)(this + 8) & 3) == 0) {
    DVar1 = this[0x10];
    fVar2 = *(float *)(this + 0x14);
  }
  else {
    DVar1 = this[0x10];
    *(float *)(this + 0x14) = param_1;
    fVar2 = param_1;
  }
  if (DVar1 == (DChangeAble<DFade,float>)0x0) {
    if ((*(uint *)(this + 0xc) & 3) == 0) {
      param_1 = *(float *)(this + 0x18);
    }
    else {
      *(float *)(this + 0x18) = param_1;
    }
    *(float *)(this + 0x1c) = param_1 - fVar2;
    return;
  }
  *(float *)(this + 0x18) = fVar2 + *(float *)(this + 0x1c);
  return;
}

