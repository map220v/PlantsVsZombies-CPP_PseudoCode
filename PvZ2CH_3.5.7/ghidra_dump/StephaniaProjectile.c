// Class: StephaniaProjectile


/* StephaniaProjectile::~StephaniaProjectile() */

void __thiscall StephaniaProjectile::~StephaniaProjectile(StephaniaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e16f0;
  *(undefined ***)(this + 0x10) = &PTR__StephaniaProjectile_067e18e0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StephaniaProjectile::~StephaniaProjectile() */

void __thiscall StephaniaProjectile::~StephaniaProjectile(StephaniaProjectile *this)

{
  ~StephaniaProjectile(this + -0x10);
  return;
}


/* StephaniaProjectile::~StephaniaProjectile() */

void __thiscall StephaniaProjectile::~StephaniaProjectile(StephaniaProjectile *this)

{
  ~StephaniaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StephaniaProjectile::~StephaniaProjectile() */

void __thiscall StephaniaProjectile::~StephaniaProjectile(StephaniaProjectile *this)

{
  ~StephaniaProjectile(this + -0x10);
  return;
}


/* StephaniaProjectile::StephaniaProjectile() */

void __thiscall StephaniaProjectile::StephaniaProjectile(StephaniaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e16f0;
  *(undefined ***)(this + 0x10) = &PTR__StephaniaProjectile_067e18e0;
  return;
}


/* StephaniaProjectile::StaticNew() */

StephaniaProjectile * StephaniaProjectile::StaticNew(void)

{
  StephaniaProjectile *this;
  
  this = ::operator_new(0x1a8);
  StephaniaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaProjectile::StaticClassInit() */

void StephaniaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StephaniaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040f540c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StephaniaProjectile::StaticGetClass() */

long * StephaniaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StephaniaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaProjectile::GetClass() const */

long * StephaniaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"StephaniaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall StephaniaProjectile::OnCollideEntity(StephaniaProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  StephaniaSubsystem *this_00;
  float fVar6;
  
  Projectile::GetProps((Projectile *)this);
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1), !bVar1)) {
    iVar2 = BoardEntity::CalcColumnPosition(param_1);
    iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
    iVar4 = FUN_040f48a8(*(undefined4 *)(this + 0x70));
    if ((-1 < iVar2) && (iVar5 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 < iVar5)) {
      this_00 = Board::GetGameSubSystem<StephaniaSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      fVar6 = (float)FUN_040f4898(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      StephaniaSubsystem::GenerateSplitHit(this_00,iVar2,iVar3,false,iVar4,fVar6);
    }
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

