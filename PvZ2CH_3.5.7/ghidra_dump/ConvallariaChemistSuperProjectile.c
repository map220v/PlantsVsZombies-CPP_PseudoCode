// Class: ConvallariaChemistSuperProjectile


/* ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile() */

void __thiscall
ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile
          (ConvallariaChemistSuperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067458c0;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistSuperProjectile_06745ab0;
  ConvallariaChemistProjectile::~ConvallariaChemistProjectile((ConvallariaChemistProjectile *)this);
  return;
}


/* non-virtual thunk to ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile() */

void __thiscall
ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile
          (ConvallariaChemistSuperProjectile *this)

{
  ~ConvallariaChemistSuperProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile() */

void __thiscall
ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile
          (ConvallariaChemistSuperProjectile *this)

{
  ~ConvallariaChemistSuperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile() */

void __thiscall
ConvallariaChemistSuperProjectile::~ConvallariaChemistSuperProjectile
          (ConvallariaChemistSuperProjectile *this)

{
  ~ConvallariaChemistSuperProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistSuperProjectile::ConvallariaChemistSuperProjectile() */

void __thiscall
ConvallariaChemistSuperProjectile::ConvallariaChemistSuperProjectile
          (ConvallariaChemistSuperProjectile *this)

{
  ConvallariaChemistProjectile::ConvallariaChemistProjectile((ConvallariaChemistProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067458c0;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistSuperProjectile_06745ab0;
  return;
}


/* ConvallariaChemistSuperProjectile::StaticNew() */

ConvallariaChemistSuperProjectile * ConvallariaChemistSuperProjectile::StaticNew(void)

{
  ConvallariaChemistSuperProjectile *this;
  
  this = ::operator_new(0x1b8);
  ConvallariaChemistSuperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistSuperProjectile::StaticClassInit() */

void ConvallariaChemistSuperProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConvallariaChemistSuperProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c06f78,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConvallariaChemistSuperProjectile::StaticGetClass() */

long * ConvallariaChemistSuperProjectile::StaticGetClass(void)

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
  uVar2 = ConvallariaChemistProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistSuperProjectile::GetClass() const */

long * ConvallariaChemistSuperProjectile::GetClass(void)

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
  uVar2 = ConvallariaChemistProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistSuperProjectile::damageEntity(BoardEntity*) */

void __thiscall
ConvallariaChemistSuperProjectile::damageEntity
          (ConvallariaChemistSuperProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  long *extraout_x0;
  
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
      (nop(), extraout_x0 != (long *)0x0)) &&
     ((cVar2 = (**(code **)(*extraout_x0 + 0x330))(), cVar2 == '\0' &&
      (cVar2 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')))) {
    Zombie::ApplyCondition((Zombie *)0x40a00000,0,extraout_x0,0x4e,1);
    ConvallariaChemistProjectile::damageEntity((ConvallariaChemistProjectile *)this,param_1);
    return;
  }
  ConvallariaChemistProjectile::damageEntity((ConvallariaChemistProjectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistSuperProjectile::handleImpact(BoardEntity*) */

void ConvallariaChemistSuperProjectile::handleImpact(BoardEntity *param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *pRVar5;
  ConvallariaChemistProjectileProps *pCVar6;
  long lVar7;
  GridItemVenom *pGVar8;
  BoardEntity *in_x1;
  float fVar9;
  float fVar10;
  int iStack_10;
  int iStack_c;
  
  lVar1 = ___stack_chk_guard;
  iVar3 = FUN_03c0583c(*(undefined4 *)(param_1 + 0x70));
  if (1 < iVar3) {
    fVar9 = (float)Sexy::Rand(1.0);
    pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)param_1);
    pCVar6 = Sexy::RtObject::Cast<ConvallariaChemistProjectileProps>(pRVar5);
    fVar10 = *(float *)(pCVar6 + 0x210);
    if (iVar3 != 2) {
      fVar10 = *(float *)(pCVar6 + 0x214);
    }
    if ((((fVar9 < fVar10) &&
         (BoardTransforms::BoardSpaceToGrid
                    ((BoardTransforms *)pCVar6,*(float *)(param_1 + 0x1a8),
                     *(float *)(param_1 + 0x1ac)), iStack_10 != -1)) && (iStack_c != -1)) &&
       (lVar7 = FUN_03c08c68(), lVar7 == 0)) {
      pGVar8 = (GridItemVenom *)FUN_03c08d4c(iStack_10,iStack_c);
      lVar7 = FUN_03c08e30(iStack_10,iStack_c);
      if (pGVar8 == (GridItemVenom *)0x0) {
        if (lVar7 == 0) {
          pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)param_1);
          pCVar6 = Sexy::RtObject::Cast<ConvallariaChemistProjectileProps>(pRVar5);
          pRVar5 = (RtObject *)
                   Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pCVar6 + 0x208),
                                      iStack_10,iStack_c,iVar3);
          pGVar8 = Sexy::RtObject::Cast<GridItemVenom>(pRVar5);
          uVar4 = FUN_02fd3d34(*(undefined4 *)(param_1 + 0x24));
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
  uVar2 = Projectile::handleImpact((Projectile *)param_1,in_x1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

