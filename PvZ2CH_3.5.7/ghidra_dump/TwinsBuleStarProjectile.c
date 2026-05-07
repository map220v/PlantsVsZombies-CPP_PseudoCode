// Class: TwinsBuleStarProjectile


/* TwinsBuleStarProjectile::onFlyToTargetDone(BoardEntity*) */

void __thiscall
TwinsBuleStarProjectile::onFlyToTargetDone(TwinsBuleStarProjectile *this,BoardEntity *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* TwinsBuleStarProjectile::~TwinsBuleStarProjectile() */

void __thiscall TwinsBuleStarProjectile::~TwinsBuleStarProjectile(TwinsBuleStarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069afc50;
  *(undefined ***)(this + 0x10) = &PTR__TwinsBuleStarProjectile_069afe40;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TwinsBuleStarProjectile::~TwinsBuleStarProjectile() */

void __thiscall TwinsBuleStarProjectile::~TwinsBuleStarProjectile(TwinsBuleStarProjectile *this)

{
  ~TwinsBuleStarProjectile(this + -0x10);
  return;
}


/* TwinsBuleStarProjectile::~TwinsBuleStarProjectile() */

void __thiscall TwinsBuleStarProjectile::~TwinsBuleStarProjectile(TwinsBuleStarProjectile *this)

{
  ~TwinsBuleStarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TwinsBuleStarProjectile::~TwinsBuleStarProjectile() */

void __thiscall TwinsBuleStarProjectile::~TwinsBuleStarProjectile(TwinsBuleStarProjectile *this)

{
  ~TwinsBuleStarProjectile(this + -0x10);
  return;
}


/* TwinsBuleStarProjectile::TwinsBuleStarProjectile() */

void __thiscall TwinsBuleStarProjectile::TwinsBuleStarProjectile(TwinsBuleStarProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069afc50;
  *(undefined ***)(this + 0x10) = &PTR__TwinsBuleStarProjectile_069afe40;
  return;
}


/* TwinsBuleStarProjectile::StaticNew() */

TwinsBuleStarProjectile * TwinsBuleStarProjectile::StaticNew(void)

{
  TwinsBuleStarProjectile *this;
  
  this = ::operator_new(0x1a8);
  TwinsBuleStarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsBuleStarProjectile::StaticClassInit() */

void TwinsBuleStarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsBuleStarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d45760,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsBuleStarProjectile::StaticGetClass() */

long * TwinsBuleStarProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TwinsBuleStarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsBuleStarProjectile::GetClass() const */

long * TwinsBuleStarProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"TwinsBuleStarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

