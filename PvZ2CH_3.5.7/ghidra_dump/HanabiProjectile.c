// Class: HanabiProjectile


/* HanabiProjectile::~HanabiProjectile() */

void __thiscall HanabiProjectile::~HanabiProjectile(HanabiProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06a03ba0;
  *(undefined ***)(this + 0x10) = &PTR__HanabiProjectile_06a03d90;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HanabiProjectile::~HanabiProjectile() */

void __thiscall HanabiProjectile::~HanabiProjectile(HanabiProjectile *this)

{
  ~HanabiProjectile(this + -0x10);
  return;
}


/* HanabiProjectile::~HanabiProjectile() */

void __thiscall HanabiProjectile::~HanabiProjectile(HanabiProjectile *this)

{
  ~HanabiProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HanabiProjectile::~HanabiProjectile() */

void __thiscall HanabiProjectile::~HanabiProjectile(HanabiProjectile *this)

{
  ~HanabiProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HanabiProjectile::StaticClassInit() */

void HanabiProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HanabiProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef1888,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HanabiProjectile::StaticGetClass() */

long * HanabiProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HanabiProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HanabiProjectile::GetClass() const */

long * HanabiProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HanabiProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HanabiProjectile::HanabiProjectile() */

void __thiscall HanabiProjectile::HanabiProjectile(HanabiProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06a03ba0;
  *(undefined ***)(this + 0x10) = &PTR__HanabiProjectile_06a03d90;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  return;
}


/* HanabiProjectile::StaticNew() */

HanabiProjectile * HanabiProjectile::StaticNew(void)

{
  HanabiProjectile *this;
  
  this = ::operator_new(0x1b0);
  HanabiProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HanabiProjectile::OnCollideGround() */

void __thiscall HanabiProjectile::OnCollideGround(HanabiProjectile *this)

{
  int iVar1;
  int iVar2;
  GridIcelotusDropwater *pGVar3;
  GridIcelotusDropwater *pGVar4;
  ToxicWaterGridItemPoisonMist *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1ac);
  iVar2 = *(int *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  pGVar3 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar2,iVar1);
  pGVar4 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar2,iVar1);
  if ((pGVar4 == (GridIcelotusDropwater *)0x0) && (pGVar3 == (GridIcelotusDropwater *)0x0)) {
    this_00 = (ToxicWaterGridItemPoisonMist *)FUN_04ef2000(iVar2,iVar1);
    if (this_00 == (ToxicWaterGridItemPoisonMist *)0x0) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"hanabi");
      Board::AddGridItem(this_01,asStack_10,iVar2,iVar1,1);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      ToxicWaterGridItemPoisonMist::TurnToLoop(this_00);
    }
  }
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

