// Class: EgretflowerMissileProjectile


/* EgretflowerMissileProjectile::~EgretflowerMissileProjectile() */

void __thiscall
EgretflowerMissileProjectile::~EgretflowerMissileProjectile(EgretflowerMissileProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681da60;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerMissileProjectile_0681dc50;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to EgretflowerMissileProjectile::~EgretflowerMissileProjectile() */

void __thiscall
EgretflowerMissileProjectile::~EgretflowerMissileProjectile(EgretflowerMissileProjectile *this)

{
  ~EgretflowerMissileProjectile(this + -0x10);
  return;
}


/* EgretflowerMissileProjectile::~EgretflowerMissileProjectile() */

void __thiscall
EgretflowerMissileProjectile::~EgretflowerMissileProjectile(EgretflowerMissileProjectile *this)

{
  ~EgretflowerMissileProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EgretflowerMissileProjectile::~EgretflowerMissileProjectile() */

void __thiscall
EgretflowerMissileProjectile::~EgretflowerMissileProjectile(EgretflowerMissileProjectile *this)

{
  ~EgretflowerMissileProjectile(this + -0x10);
  return;
}


/* EgretflowerMissileProjectile::EgretflowerMissileProjectile() */

void __thiscall
EgretflowerMissileProjectile::EgretflowerMissileProjectile(EgretflowerMissileProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0681da60;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerMissileProjectile_0681dc50;
  return;
}


/* EgretflowerMissileProjectile::StaticNew() */

EgretflowerMissileProjectile * EgretflowerMissileProjectile::StaticNew(void)

{
  EgretflowerMissileProjectile *this;
  
  this = ::operator_new(0x1a8);
  EgretflowerMissileProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerMissileProjectile::StaticClassInit() */

void EgretflowerMissileProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerMissileProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04262f60,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerMissileProjectile::StaticGetClass() */

long * EgretflowerMissileProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerMissileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerMissileProjectile::GetClass() const */

long * EgretflowerMissileProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerMissileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerMissileProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EgretflowerMissileProjectile::OnCollideEntity
          (EgretflowerMissileProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ResourceInfo *pRVar7;
  ulong uVar8;
  RtObject *this_01;
  EgretflowerMissileProps *pEVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  ZombieConditionsStruct *pZVar14;
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  Insets aIStack_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  uVar11 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  iVar2 = BoardEntity::CalcColumnPosition(param_1);
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::Insets::Insets(aIStack_a8,iVar2,iVar3,1,1);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98,uVar4,
             aIStack_a8);
  uVar12 = local_98;
  lVar5 = FUN_04261b88(local_98,local_90);
  if (lVar5 != 0) {
    do {
      FUN_04261b94(uVar12,uVar11);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)aRStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      puVar6 = (undefined8 *)FUN_04261b94(local_98,uVar11);
      Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      puVar6 = (undefined8 *)FUN_04261b94(local_98,uVar11);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b8);
      if (cVar1 == '\0') {
LAB_0426688c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      else {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b8);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar7);
        if (cVar1 == '\0') goto LAB_0426688c;
        if (this_00 != (Zombie *)0x0) {
          cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
          if ((((cVar1 != '\0') ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')) goto LAB_0426688c;
          cVar1 = Zombie::IsBoss(this_00);
          if (((cVar1 == '\0') &&
              (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')) {
            this_01 = (RtObject *)Projectile::getProps((Projectile *)this);
            pEVar9 = Sexy::RtObject::Cast<EgretflowerMissileProps>(this_01);
                    /* WARNING: Load size is inaccurate */
            pZVar14._0_4_ = *(ZombieConditionsStruct **)(pEVar9 + 0x1e0);
            PVPSeedBankModule::GetPVPSkillEnergyUI();
            ZombieConditionsStruct::ZombieConditionsStruct(pZVar14._0_4_,aRStack_80,2,aRStack_b0);
            Zombie::ApplyCondition(this_00,(ZombieConditionsStruct *)aRStack_80);
            PVPZoneData::~PVPZoneData((PVPZoneData *)aRStack_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
          }
        }
        pcVar13 = *(code **)(*(long *)this + 0x178);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b8);
        (*pcVar13)(this,aDStack_68,pRVar7);
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        (**(code **)(*plVar10 + 0x110))(plVar10,aDStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      uVar12 = local_98;
      uVar11 = uVar11 + 1;
      uVar8 = FUN_04261b88(local_98,local_90);
    } while (uVar11 < uVar8);
  }
  uVar4 = (**(code **)(*(long *)this + 0x168))(this,param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

