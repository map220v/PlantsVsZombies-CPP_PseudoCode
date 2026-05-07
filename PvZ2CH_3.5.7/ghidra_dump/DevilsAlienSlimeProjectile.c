// Class: DevilsAlienSlimeProjectile


/* DevilsAlienSlimeProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
DevilsAlienSlimeProjectile::OnCollideEntity(DevilsAlienSlimeProjectile *this,BoardEntity *param_1)

{
  if (this[0x191] != (DevilsAlienSlimeProjectile)0x0) {
    MessageRouter::Post<Projectile*,BoardEntity*,Projectile*,BoardEntity*>
              ((MessageRouter *)gMessageRouter,Message::NotifyProjectileCollideEntity,
               (Projectile *)this,param_1);
  }
  Projectile::playSound((Projectile *)this,param_1);
  (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  (**(code **)(*(long *)this + 0x168))(this,param_1);
  return;
}


/* DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile() */

void __thiscall
DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile(DevilsAlienSlimeProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b5a90;
  *(undefined ***)(this + 0x10) = &PTR__DevilsAlienSlimeProjectile_069b5c98;
  PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile((PrimalRafflesiaProjectile *)this);
  return;
}


/* non-virtual thunk to DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile() */

void __thiscall
DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile(DevilsAlienSlimeProjectile *this)

{
  ~DevilsAlienSlimeProjectile(this + -0x10);
  return;
}


/* DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile() */

void __thiscall
DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile(DevilsAlienSlimeProjectile *this)

{
  ~DevilsAlienSlimeProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile() */

void __thiscall
DevilsAlienSlimeProjectile::~DevilsAlienSlimeProjectile(DevilsAlienSlimeProjectile *this)

{
  ~DevilsAlienSlimeProjectile(this + -0x10);
  return;
}


/* DevilsAlienSlimeProjectile::DevilsAlienSlimeProjectile() */

void __thiscall
DevilsAlienSlimeProjectile::DevilsAlienSlimeProjectile(DevilsAlienSlimeProjectile *this)

{
  PrimalRafflesiaProjectile::PrimalRafflesiaProjectile((PrimalRafflesiaProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b5a90;
  *(undefined ***)(this + 0x10) = &PTR__DevilsAlienSlimeProjectile_069b5c98;
  return;
}


/* DevilsAlienSlimeProjectile::StaticNew() */

DevilsAlienSlimeProjectile * DevilsAlienSlimeProjectile::StaticNew(void)

{
  DevilsAlienSlimeProjectile *this;
  
  this = ::operator_new(0x1b8);
  DevilsAlienSlimeProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsAlienSlimeProjectile::StaticClassInit() */

void DevilsAlienSlimeProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DevilsAlienSlimeProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d63528,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DevilsAlienSlimeProjectile::StaticGetClass() */

long * DevilsAlienSlimeProjectile::StaticGetClass(void)

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
  uVar2 = PrimalRafflesiaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"DevilsAlienSlimeProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DevilsAlienSlimeProjectile::GetClass() const */

long * DevilsAlienSlimeProjectile::GetClass(void)

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
  uVar2 = PrimalRafflesiaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"DevilsAlienSlimeProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsAlienSlimeProjectile::handleImpact(BoardEntity*) */

void __thiscall
DevilsAlienSlimeProjectile::handleImpact(DevilsAlienSlimeProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  RtObject *pRVar6;
  PrimalRafflesiaProjectileProps *pPVar7;
  GridItemSlime *pGVar8;
  int local_10;
  int local_c;
  BoardTransforms *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  if ((local_10 != -1) && (local_c != -1)) {
    lVar5 = FUN_04d66aa0();
    if (lVar5 != 0) {
      uVar1 = PrimalRafflesiaProjectile::handleImpact((PrimalRafflesiaProjectile *)this,param_1);
      goto LAB_04d6d258;
    }
    pGVar8 = (GridItemSlime *)FUN_04d66714(local_10,local_c);
    lVar5 = FUN_04d667f8(local_10,local_c);
    if (pGVar8 == (GridItemSlime *)0x0) {
      if (lVar5 == 0) {
        cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10);
        if ((((cVar2 == '\0') &&
             (cVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10), cVar2 == '\0')
             ) && (iVar3 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),local_10,local_c),
                  iVar3 != 0)) && (iVar3 != 3)) {
          pRVar6 = (RtObject *)Projectile::GetProps((Projectile *)this);
          pPVar7 = Sexy::RtObject::Cast<PrimalRafflesiaProjectileProps>(pRVar6);
          pRVar6 = (RtObject *)
                   Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pPVar7 + 0x1e0),
                                      local_10,local_c,1);
          pGVar8 = Sexy::RtObject::Cast<GridItemSlime>(pRVar6);
          uVar4 = FUN_04d616ac(*(undefined4 *)(this + 0x24));
          FUN_04d616b0(pGVar8 + 0x24,uVar4);
          FUN_04d61a38(pGVar8 + 0x1b0);
          GridItemSlime::SetIdle(pGVar8);
        }
      }
    }
    else {
      FUN_04d61a38(pGVar8 + 0x1b0);
      GridItemSlime::ResetTimer(pGVar8);
      (**(code **)(*(long *)pGVar8 + 0x198))(pGVar8,1);
    }
  }
  uVar1 = Projectile::handleImpact((Projectile *)this,param_1);
LAB_04d6d258:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

