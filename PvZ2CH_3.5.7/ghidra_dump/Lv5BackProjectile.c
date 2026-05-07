// Class: Lv5BackProjectile


/* Lv5BackProjectile::~Lv5BackProjectile() */

void __thiscall Lv5BackProjectile::~Lv5BackProjectile(Lv5BackProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069dd780;
  *(undefined ***)(this + 0x10) = &PTR__Lv5BackProjectile_069dd970;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to Lv5BackProjectile::~Lv5BackProjectile() */

void __thiscall Lv5BackProjectile::~Lv5BackProjectile(Lv5BackProjectile *this)

{
  ~Lv5BackProjectile(this + -0x10);
  return;
}


/* Lv5BackProjectile::~Lv5BackProjectile() */

void __thiscall Lv5BackProjectile::~Lv5BackProjectile(Lv5BackProjectile *this)

{
  ~Lv5BackProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Lv5BackProjectile::~Lv5BackProjectile() */

void __thiscall Lv5BackProjectile::~Lv5BackProjectile(Lv5BackProjectile *this)

{
  ~Lv5BackProjectile(this + -0x10);
  return;
}


/* Lv5BackProjectile::Lv5BackProjectile() */

void __thiscall Lv5BackProjectile::Lv5BackProjectile(Lv5BackProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069dd780;
  *(undefined ***)(this + 0x10) = &PTR__Lv5BackProjectile_069dd970;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  return;
}


/* Lv5BackProjectile::StaticNew() */

Lv5BackProjectile * Lv5BackProjectile::StaticNew(void)

{
  Lv5BackProjectile *this;
  
  this = ::operator_new(0x1b8);
  Lv5BackProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lv5BackProjectile::StaticClassInit() */

void Lv5BackProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"Lv5BackProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3cc5c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lv5BackProjectile::StaticGetClass() */

long * Lv5BackProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Lv5BackProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lv5BackProjectile::GetClass() const */

long * Lv5BackProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"Lv5BackProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lv5BackProjectile::onFlyBackDone(BoardEntity*) */

void Lv5BackProjectile::onFlyBackDone(BoardEntity *param_1)

{
  int iVar1;
  long lVar2;
  RtObject *this;
  PlantDracaena *extraout_x0;
  
  lVar2 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    this = (RtObject *)Projectile::GetInstigator((Projectile *)param_1);
    Sexy::RtObject::Cast<Plant>(this);
    nop();
    if ((extraout_x0 != (PlantDracaena *)0x0) &&
       (iVar1 = FUN_04e39798(*(undefined4 *)(extraout_x0 + 0x38)), 1 < iVar1 - 0x10U)) {
      PlantDracaena::setState(extraout_x0,0x10);
      return;
    }
  }
  return;
}

