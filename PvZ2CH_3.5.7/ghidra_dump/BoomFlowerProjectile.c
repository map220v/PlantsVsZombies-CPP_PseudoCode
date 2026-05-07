// Class: BoomFlowerProjectile


/* BoomFlowerProjectile::~BoomFlowerProjectile() */

void __thiscall BoomFlowerProjectile::~BoomFlowerProjectile(BoomFlowerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e7190;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerProjectile_067e7380;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BoomFlowerProjectile::~BoomFlowerProjectile() */

void __thiscall BoomFlowerProjectile::~BoomFlowerProjectile(BoomFlowerProjectile *this)

{
  ~BoomFlowerProjectile(this + -0x10);
  return;
}


/* BoomFlowerProjectile::~BoomFlowerProjectile() */

void __thiscall BoomFlowerProjectile::~BoomFlowerProjectile(BoomFlowerProjectile *this)

{
  ~BoomFlowerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoomFlowerProjectile::~BoomFlowerProjectile() */

void __thiscall BoomFlowerProjectile::~BoomFlowerProjectile(BoomFlowerProjectile *this)

{
  ~BoomFlowerProjectile(this + -0x10);
  return;
}


/* BoomFlowerProjectile::BoomFlowerProjectile() */

void __thiscall BoomFlowerProjectile::BoomFlowerProjectile(BoomFlowerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_067e7190;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerProjectile_067e7380;
  return;
}


/* BoomFlowerProjectile::StaticNew() */

BoomFlowerProjectile * BoomFlowerProjectile::StaticNew(void)

{
  BoomFlowerProjectile *this;
  
  this = ::operator_new(0x1b0);
  BoomFlowerProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerProjectile::StaticClassInit() */

void BoomFlowerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomFlowerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04116eb4,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerProjectile::StaticGetClass() */

long * BoomFlowerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoomFlowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerProjectile::GetClass() const */

long * BoomFlowerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BoomFlowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerProjectile::onUpdate(float) */

void BoomFlowerProjectile::onUpdate(float param_1)

{
  long *in_x0;
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)((long)in_x0 + 0x1ac) < fVar1) {
    (**(code **)(*in_x0 + 0x168))(in_x0,0);
  }
  return;
}


/* BoomFlowerProjectile::onProjectileInitialized() */

void __thiscall BoomFlowerProjectile::onProjectileInitialized(BoomFlowerProjectile *this)

{
  RtObject *this_00;
  BoomFlowerProjectileProps *pBVar1;
  float fVar2;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar1 = Sexy::RtObject::Cast<BoomFlowerProjectileProps>(this_00);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar2 + (float)*(int *)(pBVar1 + 0x1e0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerProjectile::AddBalloon(int, int) */

void __thiscall BoomFlowerProjectile::AddBalloon(BoomFlowerProjectile *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  BoomFlowerProjectileProps *pBVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar3 = Sexy::RtObject::Cast<BoomFlowerProjectileProps>(this_00);
  iVar1 = *(int *)(pBVar3 + 0x1e4);
  iVar2 = *(int *)(this + 0x1a8);
  if (iVar2 < iVar1) {
    *(int *)(this + 0x1a8) = iVar2 + 1;
    fVar5 = (float)FUN_04115adc(*(undefined4 *)(this + 0xd8));
    FUN_04115ae0(fVar5 + (float)param_1,this + 0xd8);
    fVar5 = (float)FUN_04115ae8(*(undefined4 *)(this + 0x178));
    FUN_04115aec(fVar5 + (float)param_2,this + 0x178);
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x1a8));
    std::operator+("ANIMATION",asStack_48);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 < iVar1);
}


/* BoomFlowerProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
BoomFlowerProjectile::OnCollideEntity(BoomFlowerProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  Zombie *pZVar3;
  RtObject *this_00;
  Plant *this_01;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) &&
     ((cVar2 = (**(code **)(*(long *)pZVar3 + 0x328))(), cVar2 != '\0' ||
      (fVar5 = (float)FUN_04115b24(*(undefined4 *)(pZVar3 + 0x280)), fVar5 <= 0.0)))) {
    return 0;
  }
  this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
  if ((this_00 != (RtObject *)0x0) &&
     (this_01 = Sexy::RtObject::Cast<Plant>(this_00), this_01 != (Plant *)0x0)) {
    fVar5 = (float)Sexy::Rand(1.0);
    iVar1 = *(int *)(this + 0x1a8);
    fVar6 = (float)Plant::GetGeneSkillBoost(this_01);
    if (fVar5 < fVar6 * (float)iVar1) {
      FUN_04115b6c(this + 0xdc);
    }
  }
  uVar4 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar4;
}

