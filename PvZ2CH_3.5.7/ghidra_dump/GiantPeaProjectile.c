// Class: GiantPeaProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPeaProjectile::StaticClassInit() */

void GiantPeaProjectile::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"GiantPeaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04056c38,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantPeaProjectile::StaticGetClass() */

long * GiantPeaProjectile::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"GiantPeaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantPeaProjectile::GetClass() const */

long * GiantPeaProjectile::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"GiantPeaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantPeaProjectile::GiantPeaProjectile() */

void __thiscall GiantPeaProjectile::GiantPeaProjectile(GiantPeaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1ac] = (GiantPeaProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067c1b90;
  *(undefined ***)(this + 0x10) = &PTR__GiantPeaProjectile_067c1d80;
  *(undefined4 *)(this + 0x1a8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  return;
}


/* GiantPeaProjectile::StaticNew() */

GiantPeaProjectile * GiantPeaProjectile::StaticNew(void)

{
  GiantPeaProjectile *this;
  
  this = ::operator_new(0x1c8);
  GiantPeaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPeaProjectile::damageEntity(BoardEntity*) */

void __thiscall GiantPeaProjectile::damageEntity(GiantPeaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItem *this_00;
  Zombie *this_01;
  code *pcVar4;
  float fVar5;
  undefined8 local_70;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (GiantPeaProjectile)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,param_1);
    iVar2 = BoardEntity::CalcColumnPosition(param_1);
    iVar3 = FUN_040564b4(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_70,iVar2,iVar3);
    local_50 = local_70;
    this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_00 == (GridItem *)0x0) {
      if (((this_01 == (Zombie *)0x0) ||
          (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(), cVar1 != '\0')) ||
         (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 != '\0')) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)Zombie::GetTotalHitpoints(this_01);
      }
    }
    else if (*(code **)(*(long *)this_00 + 0x1d8) == GridItem::GetHitpoints) {
      fVar5 = (float)GridItem::GetHitpoints(this_00);
    }
    else {
      fVar5 = (float)(**(code **)(*(long *)this_00 + 0x1d8))();
    }
    pcVar4 = *(code **)(*(long *)param_1 + 0x110);
    this[0x1ac] = (GiantPeaProjectile)(local_60 <= fVar5);
    *(float *)(this + 0x1a8) = *(float *)(this + 0x1a8) + fVar5;
    (*pcVar4)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantPeaProjectile::~GiantPeaProjectile() */

void __thiscall GiantPeaProjectile::~GiantPeaProjectile(GiantPeaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c1b90;
  *(undefined ***)(this + 0x10) = &PTR__GiantPeaProjectile_067c1d80;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GiantPeaProjectile::~GiantPeaProjectile() */

void __thiscall GiantPeaProjectile::~GiantPeaProjectile(GiantPeaProjectile *this)

{
  ~GiantPeaProjectile(this + -0x10);
  return;
}


/* GiantPeaProjectile::~GiantPeaProjectile() */

void __thiscall GiantPeaProjectile::~GiantPeaProjectile(GiantPeaProjectile *this)

{
  ~GiantPeaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GiantPeaProjectile::~GiantPeaProjectile() */

void __thiscall GiantPeaProjectile::~GiantPeaProjectile(GiantPeaProjectile *this)

{
  ~GiantPeaProjectile(this + -0x10);
  return;
}

