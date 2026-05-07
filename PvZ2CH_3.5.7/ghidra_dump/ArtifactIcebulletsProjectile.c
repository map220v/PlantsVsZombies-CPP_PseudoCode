// Class: ArtifactIcebulletsProjectile


/* ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile() */

void __thiscall
ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile(ArtifactIcebulletsProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066920e0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactIcebulletsProjectile_066922d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile() */

void __thiscall
ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile(ArtifactIcebulletsProjectile *this)

{
  ~ArtifactIcebulletsProjectile(this + -0x10);
  return;
}


/* ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile() */

void __thiscall
ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile(ArtifactIcebulletsProjectile *this)

{
  ~ArtifactIcebulletsProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile() */

void __thiscall
ArtifactIcebulletsProjectile::~ArtifactIcebulletsProjectile(ArtifactIcebulletsProjectile *this)

{
  ~ArtifactIcebulletsProjectile(this + -0x10);
  return;
}


/* ArtifactIcebulletsProjectile::onProjectileInitialized() */

void __thiscall
ArtifactIcebulletsProjectile::onProjectileInitialized(ArtifactIcebulletsProjectile *this)

{
  Projectile::SetShadow((Projectile *)this,false);
  FUN_03723aac(this + 0x24,1);
  return;
}


/* ArtifactIcebulletsProjectile::ArtifactIcebulletsProjectile() */

void __thiscall
ArtifactIcebulletsProjectile::ArtifactIcebulletsProjectile(ArtifactIcebulletsProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066920e0;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactIcebulletsProjectile_066922d0;
  return;
}


/* ArtifactIcebulletsProjectile::StaticNew() */

ArtifactIcebulletsProjectile * ArtifactIcebulletsProjectile::StaticNew(void)

{
  ArtifactIcebulletsProjectile *this;
  
  this = ::operator_new(0x1a8);
  ArtifactIcebulletsProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactIcebulletsProjectile::StaticClassInit() */

void ArtifactIcebulletsProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactIcebulletsProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03735dc8,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactIcebulletsProjectile::StaticGetClass() */

long * ArtifactIcebulletsProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactIcebulletsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactIcebulletsProjectile::GetClass() const */

long * ArtifactIcebulletsProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactIcebulletsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactIcebulletsProjectile::handleImpact(BoardEntity*) */

void __thiscall
ArtifactIcebulletsProjectile::handleImpact(ArtifactIcebulletsProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  GridItem *pGVar4;
  long lVar5;
  float *pfVar6;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar7;
  long lVar8;
  char *__s;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0)) {
    cVar3 = '\0';
    GridItem::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    bVar2 = std::operator!=((string *)(lVar5 + 8),"monotropa_snowman");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (bVar2) goto LAB_03746e44;
  }
  (**(code **)(*(long *)this + 0x170))(this,param_1);
  lVar5 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar3 = FUN_0547419c(asStack_30);
  if (cVar3 == '\0') {
    GetPAMByName(asStack_30);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar3 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar5 + 0x6d) == '\0')) {
        fVar11 = local_20 + *(float *)(this + 0x18);
        fVar10 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar11 = local_20 + *pfVar6;
        fVar10 = (local_1c + pfVar6[1]) - pfVar6[2];
      }
      cVar3 = CardGameUtils::IsPlayingCardGame();
      if ((cVar3 == '\0') && (cVar3 = NewPVPUtils::IsPlayingNewPVP(), cVar3 == '\0')) {
        uVar9 = 0x3f800000;
      }
      else {
        uVar9 = *(undefined4 *)(this + 0xc0);
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar7,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar9,this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar11,fVar10,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
      FUN_03723aa0(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      lVar8 = Projectile::getProps((Projectile *)this);
      __s = (char *)FUN_0547429c(lVar8 + 0x148);
      std::string::string((string *)aRStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,(Vec3 *)aRStack_18,2);
      std::string::~string((string *)aRStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    iVar1 = *(int *)(this + 0x4c);
  }
  else {
    iVar1 = *(int *)(this + 0x4c);
  }
  cVar3 = '\0';
  if ((iVar1 < 1) && (cVar3 = *(char *)(lVar5 + 0x65), cVar3 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  std::string::~string(asStack_30);
LAB_03746e44:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactIcebulletsProjectile::damageEntity(BoardEntity*) */

void __thiscall
ArtifactIcebulletsProjectile::damageEntity(ArtifactIcebulletsProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  GridItem *pGVar5;
  string *psVar6;
  long lVar7;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x48] != (ArtifactIcebulletsProjectile)0x0) && (0 < *(int *)(this + 0x4c))) &&
     (param_1 != (BoardEntity *)0x0)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if (this_00 == (Zombie *)0x0) {
      if (pGVar5 != (GridItem *)0x0) {
        GridItem::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        bVar1 = std::operator==((string *)(lVar7 + 8),"monotropa_snowman");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        if (bVar1) {
          (**(code **)(*(long *)pGVar5 + 0x230))(pGVar5);
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        }
      }
    }
    else {
      psVar6 = (string *)Zombie::GetTypeName(this_00);
      bVar1 = std::operator==(psVar6,"zombie_snowman");
      if (bVar1) {
        DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
        iVar3 = BoardEntity::CalcColumnPosition(param_1);
        iVar4 = FUN_03723ae0(*(undefined4 *)(this + 0xa8));
        Sexy::Point::Point((Point *)&local_70,iVar3,iVar4);
        local_50 = local_70;
        (**(code **)(*(long *)param_1 + 0x120))(param_1,(DamageInfo *)aRStack_68);
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
      else {
        iVar3 = Zombie::GetSizeType(this_00);
        if ((iVar3 == 2) && (cVar2 = Zombie::HasCondition(this_00,1), cVar2 != '\0')) {
          DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
          (**(code **)(*(long *)this + 0x178))(this,(DamageInfo *)aRStack_68,param_1);
          iVar3 = BoardEntity::CalcColumnPosition(param_1);
          iVar4 = FUN_03723ae0(*(undefined4 *)(this + 0xa8));
          Sexy::Point::Point((Point *)&local_70,iVar3,iVar4);
          local_50 = local_70;
          (**(code **)(*(long *)param_1 + 0x110))(param_1,(DamageInfo *)aRStack_68);
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
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

