// Class: BoomFlowerPlantfoodProjectile


/* BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile() */

void __thiscall
BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile(BoomFlowerPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e7440;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerPlantfoodProjectile_067e7630;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile() */

void __thiscall
BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile(BoomFlowerPlantfoodProjectile *this)

{
  ~BoomFlowerPlantfoodProjectile(this + -0x10);
  return;
}


/* BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile() */

void __thiscall
BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile(BoomFlowerPlantfoodProjectile *this)

{
  ~BoomFlowerPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile() */

void __thiscall
BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile(BoomFlowerPlantfoodProjectile *this)

{
  ~BoomFlowerPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerPlantfoodProjectile::moveThroughTime(float) */

void __thiscall
BoomFlowerPlantfoodProjectile::moveThroughTime(BoomFlowerPlantfoodProjectile *this,float param_1)

{
  float *pfVar1;
  float *pfVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)Projectile::GetVelocity((Projectile *)this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar1 < 0.0) {
    if (k_boardCenterForBalloonExplosion <= *pfVar2) goto LAB_04115e60;
  }
  else if (*pfVar2 <= k_boardCenterForBalloonExplosion) goto LAB_04115e60;
  std::string::string(asStack_10,"Play_CherryBomb");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this + 0x168))(this,0);
LAB_04115e60:
  Projectile::moveThroughTime((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerPlantfoodProjectile::BoomFlowerPlantfoodProjectile() */

void __thiscall
BoomFlowerPlantfoodProjectile::BoomFlowerPlantfoodProjectile(BoomFlowerPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e7440;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerPlantfoodProjectile_067e7630;
  return;
}


/* BoomFlowerPlantfoodProjectile::StaticNew() */

BoomFlowerPlantfoodProjectile * BoomFlowerPlantfoodProjectile::StaticNew(void)

{
  BoomFlowerPlantfoodProjectile *this;
  
  this = ::operator_new(0x1a8);
  BoomFlowerPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerPlantfoodProjectile::StaticClassInit() */

void BoomFlowerPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomFlowerPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04117430,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerPlantfoodProjectile::StaticGetClass() */

long * BoomFlowerPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoomFlowerPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerPlantfoodProjectile::GetClass() const */

long * BoomFlowerPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BoomFlowerPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
BoomFlowerPlantfoodProjectile::OnCollideEntity
          (BoomFlowerPlantfoodProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) &&
     ((cVar1 = (**(code **)(*(long *)pZVar2 + 0x328))(), cVar1 != '\0' ||
      (fVar4 = (float)FUN_04115b24(*(undefined4 *)(pZVar2 + 0x280)), fVar4 <= 0.0)))) {
    return 0;
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar3;
}

