// Class: ConvallariaChemistProjectile


/* ConvallariaChemistProjectile::~ConvallariaChemistProjectile() */

void __thiscall
ConvallariaChemistProjectile::~ConvallariaChemistProjectile(ConvallariaChemistProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067451d0;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistProjectile_067453c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ConvallariaChemistProjectile::~ConvallariaChemistProjectile() */

void __thiscall
ConvallariaChemistProjectile::~ConvallariaChemistProjectile(ConvallariaChemistProjectile *this)

{
  ~ConvallariaChemistProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistProjectile::~ConvallariaChemistProjectile() */

void __thiscall
ConvallariaChemistProjectile::~ConvallariaChemistProjectile(ConvallariaChemistProjectile *this)

{
  ~ConvallariaChemistProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConvallariaChemistProjectile::~ConvallariaChemistProjectile() */

void __thiscall
ConvallariaChemistProjectile::~ConvallariaChemistProjectile(ConvallariaChemistProjectile *this)

{
  ~ConvallariaChemistProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistProjectile::ConvallariaChemistProjectile() */

void __thiscall
ConvallariaChemistProjectile::ConvallariaChemistProjectile(ConvallariaChemistProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067451d0;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistProjectile_067453c0;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  this[0x1b4] = (ConvallariaChemistProjectile)0x0;
  return;
}


/* ConvallariaChemistProjectile::StaticNew() */

ConvallariaChemistProjectile * ConvallariaChemistProjectile::StaticNew(void)

{
  ConvallariaChemistProjectile *this;
  
  this = ::operator_new(0x1b8);
  ConvallariaChemistProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistProjectile::StaticClassInit() */

void ConvallariaChemistProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConvallariaChemistProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c07864,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConvallariaChemistProjectile::StaticGetClass() */

long * ConvallariaChemistProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ConvallariaChemistProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistProjectile::GetClass() const */

long * ConvallariaChemistProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ConvallariaChemistProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistProjectile::damageEntity(BoardEntity*) */

void __thiscall
ConvallariaChemistProjectile::damageEntity(ConvallariaChemistProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long extraout_x0;
  Zombie *this_00;
  float *pfVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  Zombie *pZVar11;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_80;
  undefined4 uStack_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar7 = *(float *)(extraout_x0 + 0x1e0);
  if (param_1 == (BoardEntity *)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
    if (this_00 != (Zombie *)0x0) {
      fVar10 = 0.0;
      cVar2 = Zombie::HasCondition(this_00,0x4c);
      if (cVar2 != '\0') {
        pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(this_00);
        lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x4c);
        fVar10 = *(float *)(lVar5 + 0x10);
        Zombie::EndCondition(this_00,0x4c);
      }
      local_80 = fVar10 + *(float *)(extraout_x0 + 0x1e8);
      pfVar3 = eastl::min_alt<float>(&local_80,(float *)(extraout_x0 + 0x1e4));
      fVar10 = *pfVar3;
      Zombie::GetConditionTracker(this_00);
      pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(this_00);
      lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x4c);
      fVar9 = *(float *)(lVar5 + 0x14);
      std::vector<PoisonInfo,std::allocator<PoisonInfo>>::vector
                ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)&local_80,
                 (vector *)(extraout_x0 + 0x1f0));
      fVar8 = *(float *)(extraout_x0 + 0x1e4);
      if (fVar8 == fVar10) {
        if (fVar9 == 0.0) {
          fVar10 = *(float *)(extraout_x0 + 0x1e8);
          fVar9 = 1.0;
          puVar6 = (undefined8 *)FUN_03c05a20(CONCAT44(uStack_7c,local_80),1);
          fVar7 = *(float *)((long)puVar6 + 4);
                    /* WARNING: Load size is inaccurate */
          pZVar11._0_4_ = *puVar6;
        }
        else {
          iVar1 = (int)fVar7 + -1;
          if (fVar9 == 1.0) {
            fVar10 = *(float *)(extraout_x0 + 0x1e8);
            fVar9 = 2.0;
            puVar6 = (undefined8 *)FUN_03c05a20(CONCAT44(uStack_7c,local_80),(long)iVar1);
            fVar7 = *(float *)((long)puVar6 + 4);
                    /* WARNING: Load size is inaccurate */
            pZVar11._0_4_ = *puVar6;
          }
          else {
            puVar6 = (undefined8 *)FUN_03c05a20(CONCAT44(uStack_7c,local_80),(long)iVar1);
            fVar7 = *(float *)((long)puVar6 + 4);
                    /* WARNING: Load size is inaccurate */
            pZVar11._0_4_ = *puVar6;
            fVar10 = fVar8;
          }
        }
      }
      else if (fVar9 == 0.0) {
        puVar6 = (undefined8 *)FUN_03c05a20(CONCAT44(uStack_7c,local_80),0);
        fVar7 = *(float *)((long)puVar6 + 4);
                    /* WARNING: Load size is inaccurate */
        pZVar11._0_4_ = *puVar6;
      }
      else if (fVar9 == 1.0) {
        puVar6 = (undefined8 *)FUN_03c05a20(CONCAT44(uStack_7c,local_80),1);
        fVar7 = *(float *)((long)puVar6 + 4);
                    /* WARNING: Load size is inaccurate */
        pZVar11._0_4_ = *puVar6;
      }
      else {
        iVar1 = (int)fVar7 + -1;
        if ((float)iVar1 == fVar9) {
          puVar6 = (undefined8 *)FUN_03c05a20(CONCAT44(uStack_7c,local_80),(long)iVar1);
          fVar7 = *(float *)((long)puVar6 + 4);
                    /* WARNING: Load size is inaccurate */
          pZVar11._0_4_ = *puVar6;
        }
        else {
          pZVar11._0_4_ = (Zombie *)0x0;
          fVar7 = 0.0;
        }
      }
      Zombie::ApplyCondition(pZVar11._0_4_,0,this_00,0x4c,1);
      Zombie::SetExtraConditionTracker(fVar10,this_00,0x4c);
      Zombie::SetExtraConditionTracker2(fVar9,this_00,0x4c);
      fVar10 = (float)FUN_03c05840(*(undefined4 *)(this + 0x180));
      Zombie::SetConditionTracker(fVar10 * fVar7,this_00,0x4c);
      std::vector<PoisonInfo,std::allocator<PoisonInfo>>::~vector
                ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)&local_80);
    }
  }
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistProjectile::handleImpact(BoardEntity*) */

void __thiscall
ConvallariaChemistProjectile::handleImpact(ConvallariaChemistProjectile *this,BoardEntity *param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *pRVar5;
  ConvallariaChemistProjectileProps *pCVar6;
  long lVar7;
  GridItemVenom *pGVar8;
  float fVar9;
  float fVar10;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  iVar3 = FUN_03c0583c(*(undefined4 *)(this + 0x70));
  if (1 < iVar3) {
    fVar9 = (float)Sexy::Rand(1.0);
    pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pCVar6 = Sexy::RtObject::Cast<ConvallariaChemistProjectileProps>(pRVar5);
    fVar10 = *(float *)(pCVar6 + 0x210);
    if (iVar3 != 2) {
      fVar10 = *(float *)(pCVar6 + 0x214);
    }
    if ((((fVar9 < fVar10) &&
         (BoardTransforms::BoardSpaceToGrid
                    ((BoardTransforms *)pCVar6,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac)),
         local_10 != -1)) && (local_c != -1)) && (lVar7 = FUN_03c08c68(), lVar7 == 0)) {
      pGVar8 = (GridItemVenom *)FUN_03c08d4c(local_10,local_c);
      lVar7 = FUN_03c08e30(local_10,local_c);
      if (pGVar8 == (GridItemVenom *)0x0) {
        if (lVar7 == 0) {
          pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
          pCVar6 = Sexy::RtObject::Cast<ConvallariaChemistProjectileProps>(pRVar5);
          pRVar5 = (RtObject *)
                   Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pCVar6 + 0x208),
                                      local_10,local_c,iVar3);
          pGVar8 = Sexy::RtObject::Cast<GridItemVenom>(pRVar5);
          uVar4 = FUN_02fd3d34(*(undefined4 *)(this + 0x24));
          FUN_02fd3d38(pGVar8 + 0x24,uVar4);
          GridItemVenom::SetIdle(pGVar8);
        }
      }
      else {
        GridItemVenom::ResetTimer(pGVar8);
        (**(code **)(*(long *)pGVar8 + 0x198))(pGVar8,iVar3);
      }
    }
  }
  uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

