// Class: DBezier


/* DBezier::DBezier() */

void __thiscall DBezier::DBezier(DBezier *this)

{
  DAction::DAction((DAction *)this);
  this[0x90] = (DBezier)0x0;
  this[0x91] = (DBezier)0x0;
  *(undefined ***)this = &PTR__DBezier_06a21ae0;
  this[0x92] = (DBezier)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x94));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x9c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xa4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xac));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xbc));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc4));
  return;
}


/* DBezier::from(DVec2 const&) */

void __thiscall DBezier::from(DBezier *this,DVec2 *param_1)

{
  *(undefined8 *)(this + 0x94) = *(undefined8 *)param_1;
  this[0x90] = (DBezier)0x1;
  return;
}


/* DBezier::controlPointsTo(DVec2 const&, DVec2 const&) */

void __thiscall DBezier::controlPointsTo(DBezier *this,DVec2 *param_1,DVec2 *param_2)

{
  *(undefined8 *)(this + 0xa4) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xac) = *(undefined8 *)param_2;
  this[0x92] = (DBezier)0x0;
  return;
}


/* DBezier::controlPointsBy(DVec2 const&, DVec2 const&) */

void __thiscall DBezier::controlPointsBy(DBezier *this,DVec2 *param_1,DVec2 *param_2)

{
  *(undefined8 *)(this + 0xa4) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xac) = *(undefined8 *)param_2;
  this[0x92] = (DBezier)0x1;
  return;
}


/* DBezier::by(DVec2 const&) */

void __thiscall DBezier::by(DBezier *this,DVec2 *param_1)

{
  *(undefined8 *)(this + 0x9c) = *(undefined8 *)param_1;
  this[0x91] = (DBezier)0x1;
  this[0x92] = (DBezier)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DBezier::timeStep(float) */

void __thiscall DBezier::timeStep(DBezier *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  DVec2 aDStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_04f68868(*(undefined4 *)(this + 0xbc),*(undefined4 *)(this + 0xc4),
                              *(undefined4 *)(this + 0xb4),param_1);
  fVar4 = (float)FUN_04f68868(*(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 200),
                              *(undefined4 *)(this + 0xb8),param_1);
  plVar2 = *(long **)(this + 0x88);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  DVec2::DVec2(aDStack_18,fVar3,fVar4);
  DVec2::operator+((DVec2 *)(this + 0x94),aDStack_18);
  (*pcVar1)(plVar2,auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DBezier::setTarget(DTransformNode*) */

void __thiscall DBezier::setTarget(DBezier *this,DTransformNode *param_1)

{
  DVec2 *pDVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_10;
  
  lVar2 = ___stack_chk_guard;
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    if (this[0x90] == (DBezier)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x1b8))(param_1);
      *(undefined8 *)(this + 0x94) = *puVar3;
    }
    if (this[0x91] == (DBezier)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x1b8))(param_1);
      *(undefined8 *)(this + 0x9c) = *puVar3;
    }
    if (this[0x92] == (DBezier)0x0) {
      pDVar1 = (DVec2 *)(this + 0x94);
      DVec2::operator-((DVec2 *)(this + 0x9c),pDVar1);
      *(undefined8 *)(this + 0xb4) = local_10;
      DVec2::operator-((DVec2 *)(this + 0xa4),pDVar1);
      *(undefined8 *)(this + 0xbc) = local_10;
      DVec2::operator-((DVec2 *)(this + 0xac),pDVar1);
      *(undefined8 *)(this + 0xc4) = local_10;
    }
    else {
      *(undefined8 *)(this + 0xbc) = *(undefined8 *)(this + 0xa4);
      *(undefined8 *)(this + 0xc4) = *(undefined8 *)(this + 0xac);
      if (this[0x91] == (DBezier)0x0) {
        DVec2::operator-((DVec2 *)(this + 0x9c),(DVec2 *)(this + 0x94));
        *(undefined8 *)(this + 0xb4) = local_10;
      }
      else {
        *(undefined8 *)(this + 0xb4) = *(undefined8 *)(this + 0x9c);
      }
    }
    if (this[0x90] != (DBezier)0x0) {
      (**(code **)(*(long *)param_1 + 0x108))(param_1,this + 0x94);
    }
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DBezier::~DBezier() */

void __thiscall DBezier::~DBezier(DBezier *this)

{
  *(undefined ***)this = &PTR__DBezier_06a21ae0;
  DAction::~DAction((DAction *)this);
  return;
}


/* DBezier::~DBezier() */

void __thiscall DBezier::~DBezier(DBezier *this)

{
  ~DBezier(this);
  AK::FreeHook(this);
  return;
}


/* DBezier::TEMPNAMEPLACEHOLDERVALUE(DBezier const&) */

DBezier * __thiscall DBezier::operator=(DBezier *this,DBezier *param_1)

{
  DBezier DVar1;
  DBezier DVar2;
  DBezier DVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DVar1 = param_1[0x90];
  DVar2 = param_1[0x91];
  DVar3 = param_1[0x92];
  uVar9 = *(undefined8 *)(param_1 + 0x94);
  uVar8 = *(undefined8 *)(param_1 + 0x9c);
  uVar7 = *(undefined8 *)(param_1 + 0xa4);
  uVar6 = *(undefined8 *)(param_1 + 0xac);
  uVar5 = *(undefined8 *)(param_1 + 0xb4);
  uVar4 = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)(this + 0xc4) = *(undefined8 *)(param_1 + 0xc4);
  this[0x90] = DVar1;
  this[0x91] = DVar2;
  this[0x92] = DVar3;
  *(undefined8 *)(this + 0x94) = uVar9;
  *(undefined8 *)(this + 0x9c) = uVar8;
  *(undefined8 *)(this + 0xa4) = uVar7;
  *(undefined8 *)(this + 0xac) = uVar6;
  *(undefined8 *)(this + 0xb4) = uVar5;
  *(undefined8 *)(this + 0xbc) = uVar4;
  return this;
}


/* DBezier::_copy() const */

DBezier * __thiscall DBezier::_copy(DBezier *this)

{
  DBezier *this_00;
  
  this_00 = ::operator_new(0xd0);
  DBezier(this_00);
  operator=(this_00,this);
  return this_00;
}

