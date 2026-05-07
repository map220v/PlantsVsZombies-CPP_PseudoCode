// Class: FootballProjectile


/* FootballProjectile::~FootballProjectile() */

void __thiscall FootballProjectile::~FootballProjectile(FootballProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066cab00;
  *(undefined ***)(this + 0x10) = &PTR__FootballProjectile_066cacf0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to FootballProjectile::~FootballProjectile() */

void __thiscall FootballProjectile::~FootballProjectile(FootballProjectile *this)

{
  ~FootballProjectile(this + -0x10);
  return;
}


/* FootballProjectile::~FootballProjectile() */

void __thiscall FootballProjectile::~FootballProjectile(FootballProjectile *this)

{
  ~FootballProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FootballProjectile::~FootballProjectile() */

void __thiscall FootballProjectile::~FootballProjectile(FootballProjectile *this)

{
  ~FootballProjectile(this + -0x10);
  return;
}


/* FootballProjectile::FootballProjectile() */

void __thiscall FootballProjectile::FootballProjectile(FootballProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066cab00;
  *(undefined ***)(this + 0x10) = &PTR__FootballProjectile_066cacf0;
  return;
}


/* FootballProjectile::StaticNew() */

FootballProjectile * FootballProjectile::StaticNew(void)

{
  FootballProjectile *this;
  
  this = ::operator_new(0x1a8);
  FootballProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FootballProjectile::StaticClassInit() */

void FootballProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"FootballProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03933dac,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FootballProjectile::StaticGetClass() */

long * FootballProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FootballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FootballProjectile::GetClass() const */

long * FootballProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"FootballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FootballProjectile::onDestroy() */

void __thiscall FootballProjectile::onDestroy(FootballProjectile *this)

{
  SoccerGameModule *this_00;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (this_00 = (SoccerGameModule *)
                FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 != (SoccerGameModule *)0x0)) {
    SoccerGameModule::RemoveFootballCheckWin(this_00,this);
    return;
  }
  return;
}


/* FootballProjectile::onInitialized() */

void __thiscall FootballProjectile::onInitialized(FootballProjectile *this)

{
  UniverseMapScrollSnapper *this_00;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (this_00 = (UniverseMapScrollSnapper *)
                FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 != (UniverseMapScrollSnapper *)0x0)) {
    UniverseMapScrollSnapper::SetSnapHandler(this_00,(SnapHandler *)this);
    return;
  }
  return;
}


/* FootballProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
FootballProjectile::OnCollideEntity(FootballProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Zombie *pZVar3;
  UniverseMapScrollSnapper *this_00;
  
  cVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  uVar2 = 1;
  if (cVar1 == '\0') {
    if ((((param_1 != (BoardEntity *)0x0) &&
         (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) &&
        (cVar1 = (**(code **)(*(long *)pZVar3 + 0x330))(), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)pZVar3 + 0x328))(pZVar3), cVar1 == '\0')) {
      if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
         (this_00 = (UniverseMapScrollSnapper *)
                    FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
         this_00 != (UniverseMapScrollSnapper *)0x0)) {
        UniverseMapScrollSnapper::SetSnapHandler(this_00,(SnapHandler *)0x0);
      }
      (**(code **)(*(long *)this + 0x48))(this);
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

