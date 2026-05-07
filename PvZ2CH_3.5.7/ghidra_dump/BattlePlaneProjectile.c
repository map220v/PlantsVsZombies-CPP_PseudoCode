// Class: BattlePlaneProjectile


/* BattlePlaneProjectile::~BattlePlaneProjectile() */

void __thiscall BattlePlaneProjectile::~BattlePlaneProjectile(BattlePlaneProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068dc0e0;
  *(undefined ***)(this + 0x10) = &PTR__BattlePlaneProjectile_068dc2d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BattlePlaneProjectile::~BattlePlaneProjectile() */

void __thiscall BattlePlaneProjectile::~BattlePlaneProjectile(BattlePlaneProjectile *this)

{
  ~BattlePlaneProjectile(this + -0x10);
  return;
}


/* BattlePlaneProjectile::~BattlePlaneProjectile() */

void __thiscall BattlePlaneProjectile::~BattlePlaneProjectile(BattlePlaneProjectile *this)

{
  ~BattlePlaneProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BattlePlaneProjectile::~BattlePlaneProjectile() */

void __thiscall BattlePlaneProjectile::~BattlePlaneProjectile(BattlePlaneProjectile *this)

{
  ~BattlePlaneProjectile(this + -0x10);
  return;
}


/* BattlePlaneProjectile::BattlePlaneProjectile() */

void __thiscall BattlePlaneProjectile::BattlePlaneProjectile(BattlePlaneProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068dc0e0;
  *(undefined ***)(this + 0x10) = &PTR__BattlePlaneProjectile_068dc2d0;
  return;
}


/* BattlePlaneProjectile::StaticNew() */

BattlePlaneProjectile * BattlePlaneProjectile::StaticNew(void)

{
  BattlePlaneProjectile *this;
  
  this = ::operator_new(0x1a8);
  BattlePlaneProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattlePlaneProjectile::StaticClassInit() */

void BattlePlaneProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BattlePlaneProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04798e6c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattlePlaneProjectile::StaticGetClass() */

long * BattlePlaneProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BattlePlaneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattlePlaneProjectile::GetClass() const */

long * BattlePlaneProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BattlePlaneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattlePlaneProjectile::handleImpact(BoardEntity*) */

ulong __thiscall
BattlePlaneProjectile::handleImpact(BattlePlaneProjectile *this,BoardEntity *param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar2 = Sexy::RtObject::IsA<GridItemAirship>((RtObject *)param_1);
    if (bVar2) {
      uVar3 = Projectile::handleImpact((Projectile *)this,param_1);
      return uVar3;
    }
  }
  lVar4 = Projectile::GetProps((Projectile *)this);
  bVar1 = *(byte *)(lVar4 + 0x65);
  if (bVar1 == 0) {
    return (ulong)bVar1;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return (ulong)(uint)bVar1;
}


/* BattlePlaneProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
BattlePlaneProjectile::OnCollideEntity(BattlePlaneProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  long extraout_x0;
  undefined8 uVar2;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar1) {
      nop();
      if (*(RtObject **)(extraout_x0 + 0xa8) != (RtObject *)0x0) {
        bVar1 = Sexy::RtObject::IsA<PlantGroundCherry>(*(RtObject **)(extraout_x0 + 0xa8));
        if (bVar1) {
          return 0;
        }
      }
    }
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar2;
}

