// Class: MeteorProjectile


/* MeteorProjectile::~MeteorProjectile() */

void __thiscall MeteorProjectile::~MeteorProjectile(MeteorProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b0e60;
  *(undefined ***)(this + 0x10) = &PTR__MeteorProjectile_069b1050;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MeteorProjectile::~MeteorProjectile() */

void __thiscall MeteorProjectile::~MeteorProjectile(MeteorProjectile *this)

{
  ~MeteorProjectile(this + -0x10);
  return;
}


/* MeteorProjectile::~MeteorProjectile() */

void __thiscall MeteorProjectile::~MeteorProjectile(MeteorProjectile *this)

{
  ~MeteorProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MeteorProjectile::~MeteorProjectile() */

void __thiscall MeteorProjectile::~MeteorProjectile(MeteorProjectile *this)

{
  ~MeteorProjectile(this + -0x10);
  return;
}


/* MeteorProjectile::MeteorProjectile() */

void __thiscall MeteorProjectile::MeteorProjectile(MeteorProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b0e60;
  *(undefined ***)(this + 0x10) = &PTR__MeteorProjectile_069b1050;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  return;
}


/* MeteorProjectile::StaticNew() */

MeteorProjectile * MeteorProjectile::StaticNew(void)

{
  MeteorProjectile *this;
  
  this = ::operator_new(0x1b0);
  MeteorProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorProjectile::StaticClassInit() */

void MeteorProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MeteorProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d48a14,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorProjectile::StaticGetClass() */

long * MeteorProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MeteorProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorProjectile::GetClass() const */

long * MeteorProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MeteorProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorProjectile::createMoltenPool() */

void __thiscall MeteorProjectile::createMoltenPool(MeteorProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  GridItemMoltenPool *pGVar3;
  Board *this_01;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_04d484b8(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar5 = *(float *)(this + 0x1c);
  FUN_04d484b8(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(long)(int)fVar5,fVar4,fVar5);
  if ((local_18 != -1) && (local_14 != -1)) {
    Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
    cVar1 = PlanetMeteorProjectile::canPlaceMoltenPool((PlanetMeteorProjectile *)this,aPStack_10);
    if (cVar1 != '\0') {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aPStack_10,"moltenpool");
      this_00 = (RtObject *)Board::AddGridItem(this_01,(string *)aPStack_10,local_18,local_14,1);
      std::string::~string((string *)aPStack_10);
      nop();
      if (this_00 != (RtObject *)0x0) {
        uVar2 = FUN_04d48208(*(undefined4 *)(this + 0x24));
        FUN_04d4820c(this_00 + 0x24,uVar2);
        pGVar3 = Sexy::RtObject::Cast<GridItemMoltenPool>(this_00);
        if (pGVar3 != (GridItemMoltenPool *)0x0) {
          FUN_04d482f8(*(undefined4 *)(this + 0x1a8),*(undefined4 *)(this + 0x1ac),pGVar3 + 0x1ac,
                       pGVar3 + 0x1b0);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorProjectile::OnCollideGround() */

void __thiscall MeteorProjectile::OnCollideGround(MeteorProjectile *this)

{
  createMoltenPool(this);
  Projectile::OnCollideGround((Projectile *)this);
  return;
}

