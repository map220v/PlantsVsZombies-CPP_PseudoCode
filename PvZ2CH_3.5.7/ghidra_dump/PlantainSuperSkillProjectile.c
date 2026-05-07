// Class: PlantainSuperSkillProjectile


/* PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile() */

void __thiscall
PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile(PlantainSuperSkillProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066c1fd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantainSuperSkillProjectile_066c21c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile() */

void __thiscall
PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile(PlantainSuperSkillProjectile *this)

{
  ~PlantainSuperSkillProjectile(this + -0x10);
  return;
}


/* PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile() */

void __thiscall
PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile(PlantainSuperSkillProjectile *this)

{
  ~PlantainSuperSkillProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile() */

void __thiscall
PlantainSuperSkillProjectile::~PlantainSuperSkillProjectile(PlantainSuperSkillProjectile *this)

{
  ~PlantainSuperSkillProjectile(this + -0x10);
  return;
}


/* PlantainSuperSkillProjectile::PlantainSuperSkillProjectile() */

void __thiscall
PlantainSuperSkillProjectile::PlantainSuperSkillProjectile(PlantainSuperSkillProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_066c1fd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantainSuperSkillProjectile_066c21c0;
  return;
}


/* PlantainSuperSkillProjectile::StaticNew() */

PlantainSuperSkillProjectile * PlantainSuperSkillProjectile::StaticNew(void)

{
  PlantainSuperSkillProjectile *this;
  
  this = ::operator_new(0x1b0);
  PlantainSuperSkillProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainSuperSkillProjectile::StaticClassInit() */

void PlantainSuperSkillProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantainSuperSkillProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03907550,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainSuperSkillProjectile::StaticGetClass() */

long * PlantainSuperSkillProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantainSuperSkillProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainSuperSkillProjectile::GetClass() const */

long * PlantainSuperSkillProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantainSuperSkillProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainSuperSkillProjectile::isZombieCanConfusion(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall
PlantainSuperSkillProjectile::isZombieCanConfusion
          (PlantainSuperSkillProjectile *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Zombie *pZVar6;
  long *plVar7;
  undefined8 uVar8;
  RtObject *pRVar9;
  long lVar10;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pZVar6 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar2 = Zombie::IsBoss(pZVar6);
    if (cVar2 == '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar2 = (**(code **)(*plVar7 + 0x4d8))();
      if (cVar2 == '\0') {
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar2 = (**(code **)(*plVar7 + 0x508))();
        if (cVar2 == '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar2 = (**(code **)(*plVar7 + 0x328))();
          if (cVar2 == '\0') {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            cVar2 = (**(code **)(*plVar7 + 0x330))();
            if (cVar2 == '\0') {
              pZVar6 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              cVar2 = Zombie::IsInvisible(pZVar6);
              if (cVar2 == '\0') {
                pZVar6 = (Zombie *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                iVar4 = Zombie::GetSizeType(pZVar6);
                if (iVar4 != 2) {
                  pZVar6 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                  iVar4 = Zombie::GetSizeType(pZVar6);
                  if (iVar4 != 1) {
                    uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                    cVar2 = Zombie::HasCondition(uVar8,0x55);
                    if (cVar2 == '\0') {
                      uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                      cVar2 = Zombie::HasCondition(uVar8,0x8c);
                      if (cVar2 == '\0') {
                        pRVar9 = (RtObject *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                        bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar9);
                        if (!bVar3) {
                          pRVar9 = (RtObject *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                          bVar3 = Sexy::RtObject::IsA<ZombieMech>(pRVar9);
                          if (!bVar3) {
                            pRVar9 = (RtObject *)
                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                            bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>(pRVar9);
                            if (!bVar3) {
                              pRVar9 = (RtObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                              bVar3 = Sexy::RtObject::IsA<Zomboss>(pRVar9);
                              if (!bVar3) {
                                plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2
                                                           );
                                cVar2 = (**(code **)(*plVar7 + 0x4d8))();
                                if (cVar2 == '\0') {
                                  plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                             ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                              param_2);
                                  cVar2 = (**(code **)(*plVar7 + 0x508))();
                                  if (cVar2 == '\0') {
                                    pRVar9 = (RtObject *)
                                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                                    bVar3 = Sexy::RtObject::IsA<ZombieAgileBronze>(pRVar9);
                                    if (!bVar3) {
                                      pRVar9 = (RtObject *)
                                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                                      bVar3 = Sexy::RtObject::IsA<ZombieStrongBronze>(pRVar9);
                                      if (!bVar3) {
                                        pRVar9 = (RtObject *)
                                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2
                                                           );
                                        bVar3 = Sexy::RtObject::IsA<ZombieMagicBronze>(pRVar9);
                                        if (!bVar3) {
                                          pRVar9 = (RtObject *)
                                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                             ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                              param_2);
                                          bVar3 = Sexy::RtObject::IsA<ZombieLionDance>(pRVar9);
                                          if (!bVar3) {
                                            pRVar9 = (RtObject *)
                                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                               ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                param_2);
                                            bVar3 = Sexy::RtObject::IsA<ZombieWealthGod>(pRVar9);
                                            if (!bVar3) {
                                              pRVar9 = (RtObject *)
                                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                  param_2);
                                              bVar3 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>
                                                                (pRVar9);
                                              if (!bVar3) {
                                                pRVar9 = (RtObject *)
                                                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                   ((RtWeakPtr<Sexy::ResourceInfo> *
                                                                    )param_2);
                                                bVar3 = Sexy::RtObject::IsA<ZombieInvisiblePlane>
                                                                  (pRVar9);
                                                if (!bVar3) {
                                                  pRVar9 = (RtObject *)
                                                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                     ((RtWeakPtr<Sexy::ResourceInfo>
                                                                       *)param_2);
                                                  bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>
                                                                    (pRVar9);
                                                  if (!bVar3) {
                                                    pRVar9 = (RtObject *)
                                                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::
                                                             Get((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                 param_2);
                                                    bVar3 = Sexy::RtObject::
                                                            IsA<ZombieModernSolarTruck>(pRVar9);
                                                    if (!bVar3) {
                                                      pRVar9 = (RtObject *)
                                                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::
                                                               Get((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                   param_2);
                                                      bVar3 = Sexy::RtObject::IsA<ZombieSteamStove>
                                                                        (pRVar9);
                                                      if (!bVar3) {
                                                        pRVar9 = (RtObject *)
                                                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>
                                                                 ::Get((
                                                  RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                                                  bVar3 = Sexy::RtObject::IsA<ZombieGum>(pRVar9);
                                                  if (!bVar3) {
                                                    if (*(long *)(this + 0x1a8) == 0) {
                                                      return (bool)cVar1;
                                                    }
                                                    iVar4 = FUN_03906000(*(undefined4 *)
                                                                          (*(long *)(*(long *)(this 
                                                  + 0x1a8) + 0x10) + 0x50));
                                                  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                     ((RtWeakPtr<Sexy::ResourceInfo>
                                                                       *)param_2);
                                                  iVar5 = FUN_03906000(*(undefined4 *)
                                                                        (lVar10 + 0x50));
                                                  return iVar5 <= iVar4 + 2;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


/* PlantainSuperSkillProjectile::ChangeZombieTeam(Zombie*) const */

void __thiscall
PlantainSuperSkillProjectile::ChangeZombieTeam(PlantainSuperSkillProjectile *this,Zombie *param_1)

{
  long extraout_x0;
  float fVar1;
  Zombie *pZVar2;
  
  Zombie::SetFacing(param_1,1);
  pZVar2._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar2._0_4_,0,param_1,0x50,1);
  (**(code **)(*(long *)param_1 + 0x2f0))(param_1);
  RealObject::JoinTeam((RealObject *)param_1,1);
  Projectile::GetProps((Projectile *)this);
  nop();
  if (*(char *)(extraout_x0 + 0x1e0) == '\0') {
    return;
  }
  fVar1 = (float)FUN_03906048(*(undefined4 *)(param_1 + 0x284));
  Zombie::SetHitpoints(param_1,fVar1);
  Zombie::EndCondition(param_1,0x2f);
  Zombie::EndCondition(param_1,0x47);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainSuperSkillProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PlantainSuperSkillProjectile::OnCollideEntity
          (PlantainSuperSkillProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ResourceInfo *pRVar4;
  PlantWitchFrog *pPVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  if (bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar2 = isZombieCanConfusion(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar2 != '\0') {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
      ChangeZombieTeam(this,(Zombie *)pRVar4);
      pPVar5 = *(PlantWitchFrog **)(this + 0x1a8);
      if (pPVar5 != (PlantWitchFrog *)0x0) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
        PlantWitchFrog::SetOriginalPlant(pPVar5,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

