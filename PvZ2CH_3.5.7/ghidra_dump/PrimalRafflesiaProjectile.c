// Class: PrimalRafflesiaProjectile


/* PrimalRafflesiaProjectile::hasZombieBeenKilled(Zombie*) */

char __thiscall
PrimalRafflesiaProjectile::hasZombieBeenKilled(PrimalRafflesiaProjectile *this,Zombie *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  }
  return cVar1;
}


/* PrimalRafflesiaProjectile::removeMarkedForDeathFromTargetedZombie() */

void __thiscall
PrimalRafflesiaProjectile::removeMarkedForDeathFromTargetedZombie(PrimalRafflesiaProjectile *this)

{
  long lVar1;
  RtObject *this_00;
  Zombie *this_01;
  
  lVar1 = (**(code **)(*(long *)this + 0x1a0))();
  if (lVar1 != 0) {
    this_00 = (RtObject *)(**(code **)(*(long *)this + 0x1a0))(this);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (this_01 != (Zombie *)0x0) {
      Zombie::RemoveMarkedForDeath(this_01);
      return;
    }
  }
  return;
}


/* PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile() */

void __thiscall
PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile(PrimalRafflesiaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067fb640;
  *(undefined ***)(this + 0x10) = &PTR__PrimalRafflesiaProjectile_067fb848;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile() */

void __thiscall
PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile(PrimalRafflesiaProjectile *this)

{
  ~PrimalRafflesiaProjectile(this + -0x10);
  return;
}


/* PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile() */

void __thiscall
PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile(PrimalRafflesiaProjectile *this)

{
  ~PrimalRafflesiaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile() */

void __thiscall
PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile(PrimalRafflesiaProjectile *this)

{
  ~PrimalRafflesiaProjectile(this + -0x10);
  return;
}


/* PrimalRafflesiaProjectile::PrimalRafflesiaProjectile() */

void __thiscall
PrimalRafflesiaProjectile::PrimalRafflesiaProjectile(PrimalRafflesiaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067fb640;
  *(undefined ***)(this + 0x10) = &PTR__PrimalRafflesiaProjectile_067fb848;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  this[0x1b4] = (PrimalRafflesiaProjectile)0x0;
  return;
}


/* PrimalRafflesiaProjectile::StaticNew() */

PrimalRafflesiaProjectile * PrimalRafflesiaProjectile::StaticNew(void)

{
  PrimalRafflesiaProjectile *this;
  
  this = ::operator_new(0x1b8);
  PrimalRafflesiaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaProjectile::StaticClassInit() */

void PrimalRafflesiaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalRafflesiaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0418f244,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalRafflesiaProjectile::StaticGetClass() */

long * PrimalRafflesiaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PrimalRafflesiaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaProjectile::GetClass() const */

long * PrimalRafflesiaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PrimalRafflesiaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaProjectile::isZombieValidToKill(BoardEntity*) */

void __thiscall
PrimalRafflesiaProjectile::isZombieValidToKill(PrimalRafflesiaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  Zombie *pZVar4;
  string *psVar5;
  long extraout_x0;
  float *pfVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pZVar4 = (Zombie *)0x0;
  }
  else {
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  }
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"primalrafflesia");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  fVar7 = (float)Sexy::Rand(1.0);
  iVar3 = FUN_0418d154(*(undefined4 *)(this + 0x70));
  if (iVar3 == 2) {
    pfVar6 = (float *)FUN_0418d43c(*(undefined8 *)(extraout_x0 + 0x2f8),0);
    fVar8 = *pfVar6;
  }
  else {
    fVar8 = 0.0;
    if (2 < iVar3) {
      pfVar6 = (float *)FUN_0418d43c(*(undefined8 *)(extraout_x0 + 0x2f8),1);
      fVar8 = *pfVar6;
    }
  }
  if ((pZVar4 == (Zombie *)0x0) ||
     (cVar1 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar1 != '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4);
    bVar2 = fVar7 < fVar8 & (bVar2 ^ 1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PrimalRafflesiaProjectile::MarkSpecialProjectile(BoardEntity*) */

void __thiscall
PrimalRafflesiaProjectile::MarkSpecialProjectile
          (PrimalRafflesiaProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  PrimalRafflesiaSubsystem *this_00;
  float *pfVar3;
  
  if (param_1 == (BoardEntity *)0x0) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
    iVar2 = FUN_0418d150(*(undefined4 *)(this + 0xa8));
  }
  else {
    iVar1 = BoardEntity::CalcColumnPosition(param_1);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  }
  this_00 = Board::GetGameSubSystem<PrimalRafflesiaSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  PrimalRafflesiaSubsystem::MarkSpecialProjectile(this_00,iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaProjectile::handleImpact(BoardEntity*) */

void __thiscall
PrimalRafflesiaProjectile::handleImpact(PrimalRafflesiaProjectile *this,BoardEntity *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  BoardTransforms *this_00;
  long lVar4;
  GridItemSlime *pGVar5;
  RtObject *pRVar6;
  PrimalRafflesiaProjectileProps *pPVar7;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)FUN_0418d154(*(undefined4 *)(this + 0x70));
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  if (((local_10 != -1) && (local_c != -1)) && (lVar4 = FUN_04190a70(), lVar4 == 0)) {
    pGVar5 = (GridItemSlime *)FUN_04190b54(local_10,local_c);
    lVar4 = FUN_04190c38(local_10,local_c);
    if (pGVar5 == (GridItemSlime *)0x0) {
      if (lVar4 == 0) {
        pRVar6 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pPVar7 = Sexy::RtObject::Cast<PrimalRafflesiaProjectileProps>(pRVar6);
        pRVar6 = (RtObject *)
                 Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pPVar7 + 0x1e0),
                                    local_10,local_c,(int)this_00);
        pGVar5 = Sexy::RtObject::Cast<GridItemSlime>(pRVar6);
        uVar3 = FUN_02fd433c(*(undefined4 *)(this + 0x24));
        FUN_02fd4340(pGVar5 + 0x24,uVar3);
        FUN_0418d1c4(pGVar5 + 0x1b0,this[0x1b4]);
        GridItemSlime::SetIdle(pGVar5);
      }
    }
    else {
      FUN_0418d1c4(pGVar5 + 0x1b0,this[0x1b4]);
      GridItemSlime::ResetTimer(pGVar5);
      (**(code **)(*(long *)pGVar5 + 0x198))(pGVar5,(ulong)this_00 & 0xffffffff);
    }
  }
  if ((int)this_00 == 5) {
    MarkSpecialProjectile(this,param_1);
  }
  uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PrimalRafflesiaProjectile::OnCollideEntity(BoardEntity*) */

undefined4 __thiscall
PrimalRafflesiaProjectile::OnCollideEntity(PrimalRafflesiaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Zombie *extraout_x0;
  PrimalRafflesiaSubsystem *pPVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x1e8))();
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (cVar1 != '\0') {
    nop();
    cVar1 = (**(code **)(*(long *)this + 0x1f0))(this,extraout_x0);
    if (cVar1 != '\0') {
      pPVar3 = Board::GetGameSubSystem<PrimalRafflesiaSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      PrimalRafflesiaSubsystem::MarkZombieExplode(pPVar3,extraout_x0,(bool)this[0x1b4]);
      pPVar3 = Board::GetGameSubSystem<PrimalRafflesiaSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      PrimalRafflesiaSubsystem::ExplodeInstantly(pPVar3,extraout_x0);
      return uVar2;
    }
  }
  return uVar2;
}

