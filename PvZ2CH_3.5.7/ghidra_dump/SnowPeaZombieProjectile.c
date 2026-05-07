// Class: SnowPeaZombieProjectile


/* SnowPeaZombieProjectile::~SnowPeaZombieProjectile() */

void __thiscall SnowPeaZombieProjectile::~SnowPeaZombieProjectile(SnowPeaZombieProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06901400;
  *(undefined ***)(this + 0x10) = &PTR__SnowPeaZombieProjectile_069015f0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SnowPeaZombieProjectile::~SnowPeaZombieProjectile() */

void __thiscall SnowPeaZombieProjectile::~SnowPeaZombieProjectile(SnowPeaZombieProjectile *this)

{
  ~SnowPeaZombieProjectile(this + -0x10);
  return;
}


/* SnowPeaZombieProjectile::~SnowPeaZombieProjectile() */

void __thiscall SnowPeaZombieProjectile::~SnowPeaZombieProjectile(SnowPeaZombieProjectile *this)

{
  ~SnowPeaZombieProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SnowPeaZombieProjectile::~SnowPeaZombieProjectile() */

void __thiscall SnowPeaZombieProjectile::~SnowPeaZombieProjectile(SnowPeaZombieProjectile *this)

{
  ~SnowPeaZombieProjectile(this + -0x10);
  return;
}


/* SnowPeaZombieProjectile::SnowPeaZombieProjectile() */

void __thiscall SnowPeaZombieProjectile::SnowPeaZombieProjectile(SnowPeaZombieProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06901400;
  *(undefined ***)(this + 0x10) = &PTR__SnowPeaZombieProjectile_069015f0;
  return;
}


/* SnowPeaZombieProjectile::StaticNew() */

SnowPeaZombieProjectile * SnowPeaZombieProjectile::StaticNew(void)

{
  SnowPeaZombieProjectile *this;
  
  this = ::operator_new(0x1a8);
  SnowPeaZombieProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnowPeaZombieProjectile::StaticClassInit() */

void SnowPeaZombieProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnowPeaZombieProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0480ec70,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnowPeaZombieProjectile::StaticGetClass() */

long * SnowPeaZombieProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnowPeaZombieProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnowPeaZombieProjectile::GetClass() const */

long * SnowPeaZombieProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SnowPeaZombieProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnowPeaZombieProjectile::handleImpact(BoardEntity*) */

void __thiscall
SnowPeaZombieProjectile::handleImpact(SnowPeaZombieProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  PlantGroup *this_00;
  ResourceInfo *this_01;
  long extraout_x0;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    PlantGroup::GetTopPlant(this_00);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (*(code **)(*(long *)this_01 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar2 = Plant::IsInPlantFoodState((Plant *)this_01);
    }
    else {
      cVar2 = (**(code **)(*(long *)this_01 + 0x1f8))(this_01);
    }
    if (cVar2 == '\0') {
      Projectile::GetProps((Projectile *)this);
      nop();
      Plant::ApplyCondition(*(undefined4 *)(extraout_x0 + 0x1e0),0,this_01,0xe);
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

