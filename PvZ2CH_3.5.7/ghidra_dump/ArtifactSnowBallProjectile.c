// Class: ArtifactSnowBallProjectile


/* ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile() */

void __thiscall
ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile(ArtifactSnowBallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06691ec0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactSnowBallProjectile_066920b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile() */

void __thiscall
ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile(ArtifactSnowBallProjectile *this)

{
  ~ArtifactSnowBallProjectile(this + -0x10);
  return;
}


/* ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile() */

void __thiscall
ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile(ArtifactSnowBallProjectile *this)

{
  ~ArtifactSnowBallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile() */

void __thiscall
ArtifactSnowBallProjectile::~ArtifactSnowBallProjectile(ArtifactSnowBallProjectile *this)

{
  ~ArtifactSnowBallProjectile(this + -0x10);
  return;
}


/* ArtifactSnowBallProjectile::ArtifactSnowBallProjectile() */

void __thiscall
ArtifactSnowBallProjectile::ArtifactSnowBallProjectile(ArtifactSnowBallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06691ec0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactSnowBallProjectile_066920b0;
  return;
}


/* ArtifactSnowBallProjectile::StaticNew() */

ArtifactSnowBallProjectile * ArtifactSnowBallProjectile::StaticNew(void)

{
  ArtifactSnowBallProjectile *this;
  
  this = ::operator_new(0x1a8);
  ArtifactSnowBallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowBallProjectile::StaticClassInit() */

void ArtifactSnowBallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSnowBallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03735b50,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSnowBallProjectile::StaticGetClass() */

long * ArtifactSnowBallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowBallProjectile::GetClass() const */

long * ArtifactSnowBallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowBallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowBallProjectile::GetTarget() */

void __thiscall ArtifactSnowBallProjectile::GetTarget(ArtifactSnowBallProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  RtObject *this_01;
  Zombie *pZVar3;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(this_01);
    if ((pZVar3 != (Zombie *)0x0) && (cVar2 = Zombie::DoesIgnoresCollisions(pZVar3), cVar2 != '\0'))
    {
      Zombie::GetOriginalZombie();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar1) {
        Zombie::GetOriginalZombie();
        pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        cVar2 = Zombie::DoesIgnoresCollisions(pZVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if (cVar2 == '\0') {
          Zombie::GetOriginalZombie();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
  }
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowBallProjectile::damageEntity(BoardEntity*) */

void __thiscall
ArtifactSnowBallProjectile::damageEntity(ArtifactSnowBallProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  GridItem *pGVar5;
  string *psVar6;
  long lVar7;
  ArtifactSnowdriftSubSystem *pAVar8;
  undefined8 local_70;
  DamageInfo aDStack_68 [24];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x48] == (ArtifactSnowBallProjectile)0x0) || (*(int *)(this + 0x4c) < 1)) ||
     (param_1 == (BoardEntity *)0x0)) goto LAB_0377f74c;
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
  if (this_00 == (Zombie *)0x0) {
    if (pGVar5 == (GridItem *)0x0) goto LAB_0377f74c;
    GridItem::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    bVar1 = std::operator==((string *)(lVar7 + 8),"monotropa_snowman");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    if (!bVar1) goto LAB_0377f74c;
    (**(code **)(*(long *)pGVar5 + 0x230))(pGVar5);
  }
  else {
    psVar6 = (string *)Zombie::GetTypeName(this_00);
    bVar1 = std::operator==(psVar6,"zombie_snowman");
    if (bVar1) {
      DamageInfo::DamageInfo(aDStack_68);
      iVar3 = BoardEntity::CalcColumnPosition(param_1);
      iVar4 = FUN_03723ae0(*(undefined4 *)(this + 0xa8));
      Sexy::Point::Point((Point *)&local_70,iVar3,iVar4);
      local_50 = local_70;
      (**(code **)(*(long *)param_1 + 0x120))(param_1,aDStack_68);
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
      DamageInfo::~DamageInfo(aDStack_68);
      goto LAB_0377f74c;
    }
    iVar3 = Zombie::GetSizeType(this_00);
    if ((iVar3 < 2) && (cVar2 = Zombie::HasCondition(this_00,0x66), cVar2 == '\0')) {
      psVar6 = (string *)Zombie::GetTypeName(this_00);
      bVar1 = std::operator!=(psVar6,"bumpercar");
      if ((bVar1) && (cVar2 = Zombie::CanTakeFatalDamage(this_00), cVar2 != '\0')) {
        psVar6 = (string *)Zombie::GetTypeName(this_00);
        bVar1 = std::operator!=(psVar6,"zombie_snowman");
        if (bVar1) {
          pAVar8 = Board::GetGameSubSystem<ArtifactSnowdriftSubSystem>
                             (*(Board **)(gLawnApp + 0x9f0));
          FUN_03723b28(*(undefined4 *)(this_00 + 0x50));
          ArtifactSnowdriftSubSystem::transform((Zombie *)pAVar8,(int)this_00,5.0,0.3);
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        }
        goto LAB_0377f74c;
      }
    }
    cVar2 = Zombie::HasCondition(this_00,0x82);
    if (cVar2 == '\0') {
      Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,1,1);
    }
  }
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
LAB_0377f74c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

