// Class: PlantSarracenia


/* PlantSarracenia::IsInSpecialStatus() */

PlantSarracenia __thiscall PlantSarracenia::IsInSpecialStatus(PlantSarracenia *this)

{
  return this[0x2c];
}


/* PlantSarracenia::onCancelEvent() */

void __thiscall PlantSarracenia::onCancelEvent(PlantSarracenia *this)

{
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::StaticClassInit() */

void PlantSarracenia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSarracenia");
    (*pcVar2)(plVar1,asStack_10,FUN_04d1b630,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSarracenia::StaticGetClass() */

long * PlantSarracenia::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSarracenia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSarracenia::GetClass() const */

long * PlantSarracenia::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSarracenia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::getPFAttackTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantSarracenia::getPFAttackTargets(PlantSarracenia *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  long lVar4;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)(iVar2 + 2),iVar1 + -1,2,3,(int)___stack_chk_guard);
  iVar3 = (int)lVar4;
  EntityFinder::GetEntitiesInRectangle(param_1,2,&local_28);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar2 + 1),iVar1,1,1,iVar3);
  local_28 = local_18;
  uStack_20 = uStack_10;
  EntityFinder::GetEntitiesInRectangle(param_1,2,&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::getAvatarPFAttackTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall PlantSarracenia::getAvatarPFAttackTargets(PlantSarracenia *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  long lVar4;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)(iVar2 + 2),iVar1 + -2,2,5,(int)___stack_chk_guard);
  iVar3 = (int)lVar4;
  EntityFinder::GetEntitiesInRectangle(param_1,2,&local_28);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar2 + 1),iVar1 + -1,1,3,iVar3);
  local_28 = local_18;
  uStack_20 = uStack_10;
  EntityFinder::GetEntitiesInRectangle(param_1,2,&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSarracenia::getPFTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantSarracenia::getPFTargets(PlantSarracenia *this,vector *param_1)

{
  char cVar1;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    getPFAttackTargets(this,param_1);
    return;
  }
  getAvatarPFAttackTargets(this,param_1);
  return;
}


/* PlantSarracenia::PlantSarracenia() */

void __thiscall PlantSarracenia::PlantSarracenia(PlantSarracenia *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a93c0;
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  *(undefined4 *)(this + 0x44) = 0;
  return;
}


/* PlantSarracenia::StaticNew() */

PlantSarracenia * PlantSarracenia::StaticNew(void)

{
  PlantSarracenia *this;
  
  this = ::operator_new(0x60);
  PlantSarracenia(this);
  return this;
}


/* PlantSarracenia::~PlantSarracenia() */

void __thiscall PlantSarracenia::~PlantSarracenia(PlantSarracenia *this)

{
  *(undefined ***)this = &PTR_GetClass_069a93c0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSarracenia::~PlantSarracenia() */

void __thiscall PlantSarracenia::~PlantSarracenia(PlantSarracenia *this)

{
  ~PlantSarracenia(this);
  AK::FreeHook(this);
  return;
}


/* PlantSarracenia::canBePetrified(Zombie*) */

char __thiscall PlantSarracenia::canBePetrified(PlantSarracenia *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Zombie::IsTargetable(param_1);
  if (((((cVar1 == '\0') || (cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 == '\0')) ||
       (cVar1 = FUN_04d1a6f8(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0')) ||
      (((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
        (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0')) ||
       ((cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0' ||
        ((cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0' ||
         (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0')))))))) ||
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
      ((((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0' ||
         (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0')) ||
        (iVar2 = FUN_04d1992c(*(undefined4 *)(param_1 + 0x50)), *(int *)(this + 0x44) < iVar2)) ||
       (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 2)))))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* PlantSarracenia::canBeStunned(Zombie*) */

char __thiscall PlantSarracenia::canBeStunned(PlantSarracenia *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = Zombie::IsTargetable(param_1);
  if ((((((cVar1 == '\0') || (cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 == '\0')) ||
        (cVar2 = FUN_04d1a6f8(*(undefined4 *)(param_1 + 0xcc)), cVar2 != '\0')) ||
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 != '\0' ||
        (cVar2 = Zombie::IsIgnoringAllDamage(param_1), cVar2 != '\0')))) ||
      ((cVar2 = Zombie::HasFogImmune(param_1), cVar2 != '\0' ||
       ((cVar2 = Zombie::IsBerserk(param_1), cVar2 != '\0' ||
        (cVar2 = Zombie::IsBoss(param_1), cVar2 != '\0')))))) ||
     ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0' ||
      (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 != '\0')))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::FindTargetAndFire(PlantWeapon) */

void PlantSarracenia::FindTargetAndFire(long *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  Zombie *this_00;
  undefined1 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  if ((char)param_1[10] == '\0') goto LAB_04d1aa4c;
  Plant::FindTarget(aRStack_10,param_1[2]);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this_00 = Sexy::RtObject::Cast<Zombie>(this);
    if ((this_00 != (Zombie *)0x0) &&
       (((cVar2 = Zombie::IsTargetable(this_00), cVar2 == '\0' ||
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 != '\0')) ||
        (cVar2 = FUN_04d1a6f8(*(undefined4 *)(this_00 + 0xcc)), cVar2 != '\0')))) goto LAB_04d1aa98;
    (**(code **)(*param_1 + 0x1a0))(param_1);
    uVar3 = 1;
  }
  else {
LAB_04d1aa98:
    uVar3 = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04d1aa4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::playNormalLaserEffect(Zombie*, std::string const&) */

void __thiscall
PlantSarracenia::playNormalLaserEffect(PlantSarracenia *this,Zombie *param_1,string *param_2)

{
  int iVar1;
  int iVar2;
  PopAnimRig *this_00;
  long lVar3;
  RayEntity *pRVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  string asStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18);
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_28,"snake_eyelight_L");
  PopAnimRig::CalcSymbolRect(this_00,asStack_28,(TRect *)aIStack_18);
  std::string::~string(asStack_28);
  nop();
  lVar3 = *(long *)(this + 0x10);
  fVar7 = *(float *)(lVar3 + 0x1c);
  fVar5 = (float)FUN_04d199d8(*(undefined4 *)(lVar3 + 0x18),fVar7,*(undefined4 *)(lVar3 + 0x20));
  Sexy::TRect<int>::GetCenter();
  iVar1 = FUN_04d19b0c(local_30);
  FUN_04d19948(asStack_28,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  fVar6 = *(float *)(lVar3 + 0x9c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  Sexy::TRect<int>::GetCenter();
  iVar2 = FUN_04d19b0c(local_2c);
  FUN_04d19948(asStack_28,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  fVar8 = *(float *)(lVar3 + 0xa0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_28,(float)(int)((fVar5 - fVar6) + (float)iVar1),
             (float)(int)((fVar7 - fVar8) + (float)iVar2),0.0);
  pRVar4 = GameObject::Create<RayEntity>();
  BoardEntity::PlaceOnBoard((SexyVector3 *)pRVar4);
  std::string::string(asStack_40,"POPANIM_EFFECTS_SARRACENIA_BULLET_LASER_HIT");
  std::string::string(asStack_38,"animation1");
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_48);
  RayEntity::Initialize
            ((RayEntity *)0x0,pRVar4,param_2,asStack_40,asStack_38,
             (RtWeakPtr<Sexy::SoundResource> *)&local_30,1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  Sexy::Point::Point((Point *)asStack_40,0,-5);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_40);
  RayEntity::SetHitOffset(pRVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)asStack_38);
  RayEntity::InitiateWithTarget(pRVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::Initialize() */

void __thiscall PlantSarracenia::Initialize(PlantSarracenia *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  PlantSarracenia PVar4;
  PlantAnimRig_DevilsFlower *pPVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pPVar5 = (PlantAnimRig_DevilsFlower *)FUN_04d1b99c(*(undefined8 *)(this + 0x10));
  if (pPVar5 != (PlantAnimRig_DevilsFlower *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar5,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  lVar6 = FUN_04d1bfa8(*(undefined8 *)(this + 0x10));
  uVar8 = PVZ_T();
  this[0x2c] = (PlantSarracenia)0x0;
  *(undefined4 *)(this + 0x28) = uVar8;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  PVar4 = (PlantSarracenia)
          (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(*(long **)(gLawnApp + 0x9f0));
  this[0x40] = PVar4;
  puVar7 = (undefined8 *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  uVar8 = *(undefined4 *)(lVar6 + 0x368);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar3 = *(undefined4 *)(*(long *)(this + 0x10) + 0x50);
  this[0x50] = (PlantSarracenia)0x1;
  *(undefined4 *)(this + 0x4c) = uVar8;
  uVar8 = FUN_04d1992c(uVar3);
  switch(uVar8) {
  case 1:
    *(undefined4 *)(this + 0x44) = 2;
    break;
  case 2:
    *(undefined4 *)(this + 0x44) = 3;
    break;
  case 3:
    *(undefined4 *)(this + 0x44) = 5;
    break;
  case 4:
    *(undefined4 *)(this + 0x44) = 7;
    break;
  case 5:
    *(undefined4 *)(this + 0x44) = 10;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantSarracenia::CalcSpecialChargeDuration() */

float __thiscall PlantSarracenia::CalcSpecialChargeDuration(PlantSarracenia *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar2 = FUN_04d1bfa8(*(undefined8 *)(this + 0x10));
  lVar3 = *(long *)(this + 0x10);
  iVar1 = FUN_04d1992c(*(undefined4 *)(lVar3 + 0x50));
  uVar4 = *(undefined4 *)(lVar3 + 0x420);
  if (2 < iVar1) {
    fVar5 = (float)FUN_04d19930(uVar4);
    return fVar5 * *(float *)(lVar2 + 0x310);
  }
  if (iVar1 != 2) {
    fVar5 = (float)FUN_04d19930(uVar4);
    return fVar5 * *(float *)(lVar2 + 0x308);
  }
  fVar5 = (float)FUN_04d19930(uVar4);
  return fVar5 * *(float *)(lVar2 + 0x30c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::getFossilTypeName(Zombie*) */

void PlantSarracenia::getFossilTypeName(Zombie *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Zombie *in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  operator|(1,4);
  cVar2 = Zombie::MatchesAny();
  if (cVar2 == '\0') {
    lVar4 = FUN_04d1bfa8(*(undefined8 *)(param_1 + 0x10));
    cVar2 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar4 + 0x318),in_x1);
    if (cVar2 != '\0') {
      std::string::string(in_x8,"zombietarget_stoneblock_special");
      nop();
      goto LAB_04d1c2d8;
    }
  }
  cVar2 = Zombie::MatchesAny();
  if (cVar2 == '\0') {
    lVar4 = FUN_04d1bfa8(*(undefined8 *)(param_1 + 0x10));
    cVar2 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar4 + 0x340),in_x1);
    if (cVar2 != '\0') {
      std::string::string(in_x8,"zombietarget_stoneblock_imp");
      nop();
      goto LAB_04d1c2d8;
    }
  }
  cVar2 = Zombie::MatchesAny();
  if ((cVar2 == '\0') && (iVar3 = Zombie::GetSizeType(in_x1), iVar3 == 1)) {
    std::string::string(in_x8,"zombietarget_stoneblock_mid");
    nop();
  }
  else {
    cVar2 = Zombie::MatchesAny();
    if ((cVar2 == '\0') && (iVar3 = Zombie::GetSizeType(in_x1), iVar3 == 0)) {
      std::string::string(in_x8,"zombietarget_stoneblock_small");
      nop();
    }
    else {
      std::string::string(in_x8,"");
      nop();
    }
  }
LAB_04d1c2d8:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantSarracenia::Fire
          (PlantSarracenia *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  Projectile *this_00;
  undefined8 *puVar1;
  RealObject *this_01;
  float fVar2;
  float fVar3;
  string asStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d1bfa8(*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
  this_00 = (Projectile *)
            PlantFramework::Fire
                      ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,
                       param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Projectile::SetInstigator(this_00,*(BoardEntity **)(this + 0x10));
  fVar2 = (float)FUN_04d19910(*(undefined4 *)(this_00 + 0xd8));
  fVar3 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  FUN_04d19914(fVar3 * fVar2,this_00 + 0xd8);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 + 50.0);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  FUN_04d199c0(this_00 + 0x188);
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_20,"Play_Throw");
  RealObject::PlayPositionalSound(this_01,asStack_20,0.0);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::registerForEvents() */

void __thiscall PlantSarracenia::registerForEvents(PlantSarracenia *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantSarracenia,bool(PlantSarracenia::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98)
  ;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<PlantSarracenia,void(PlantSarracenia::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,2,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::checkHasZombieInRight() */

void __thiscall PlantSarracenia::checkHasZombieInRight(PlantSarracenia *this)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  int in_w4;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 + 1),iVar5,4,1,in_w4);
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,auStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
        cVar2 = '\0', bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if ((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::IsTargetable(this_00), cVar2 != '\0')) {
      cVar2 = RealObject::IsOnOpposingTeam(this_00,1);
      if ((cVar2 != '\0') &&
         (((cVar3 = FUN_04d1a6f8(*(undefined4 *)(this_00 + 0xcc)), cVar3 == '\0' &&
           (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar3 == '\0')) &&
          (cVar3 = Zombie::IsIgnoringAllDamage(this_00), cVar3 == '\0')))) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::setState(unsigned int) */

void __thiscall PlantSarracenia::setState(PlantSarracenia *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  RtObject *this_01;
  PlantAnimRig_Sarracenia *pPVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) != param_1) {
    FUN_04d1bfa8();
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    *(uint *)(this_00 + 200) = param_1;
    if (param_1 == 10) {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar2 + 0x118))();
      this[0x50] = (PlantSarracenia)0x1;
    }
    else if (param_1 == 0xc) {
      this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Sarracenia>(this_01);
      std::string::string(asStack_68,"attack1");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WaterRabbit::PlayPlantFoodAttack
                ((PlantAnimRig_WaterRabbit *)pPVar1,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      fVar3 = (float)PVZ_T();
      fVar4 = (float)CalcSpecialChargeDuration(this);
      this[0x2c] = (PlantSarracenia)0x0;
      this[0x50] = (PlantSarracenia)0x0;
      *(float *)(this + 0x28) = fVar4 + fVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::onTouchEvent(Sexy::Touch const&) */

void __thiscall PlantSarracenia::onTouchEvent(PlantSarracenia *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  TRect<int> *pTVar4;
  Board *this_00;
  float fVar5;
  float fVar6;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::IsWatering(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    cVar2 = '\0';
    if ((*(long *)(this + 0x58) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
      fVar5 = (float)FUN_04d19b20((float)*(int *)(param_1 + 0x10));
      fVar6 = (float)FUN_04d19b20((float)*(int *)(param_1 + 0x14));
      pTVar4 = (TRect<int> *)
               (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      cVar3 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar5,(int)fVar6);
      if (cVar3 != '\0') {
        *(undefined8 *)(this + 0x58) = *(undefined8 *)param_1;
        goto LAB_04d1ca7c;
      }
    }
    else if (*(long *)(this + 0x58) == *(long *)param_1) {
      if (*(int *)(param_1 + 0x30) == 4) {
        *(undefined8 *)(this + 0x58) = 0;
        goto LAB_04d1ca7c;
      }
      if (*(int *)(param_1 + 0x30) == 3) {
        iVar1 = *(int *)(param_1 + 0x10);
        *(undefined8 *)(this + 0x58) = 0;
        fVar5 = (float)FUN_04d19b20((float)iVar1);
        fVar6 = (float)FUN_04d19b20((float)*(int *)(param_1 + 0x14));
        pTVar4 = (TRect<int> *)
                 (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
        cVar2 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar5,(int)fVar6);
        if ((cVar2 != '\0') && (*(long *)(this + 0x10) != 0)) {
          ToolPacketData::GetProps();
          cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          if (((cVar2 != '\0') &&
              (((*(long *)(*(Plant **)(this + 0x10) + 0xa8) != 0 &&
                (this[0x2c] != (PlantSarracenia)0x0)) &&
               (cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar2 == '\0')))) &&
             (cVar2 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar2 == '\0')) {
            this_00 = *(Board **)(gLawnApp + 0x9f0);
            cVar2 = Board::IsPlaying(this_00);
            if (cVar2 != '\0') {
              cVar2 = FUN_02fd479c(this_00[0x887]);
              if ((cVar2 != '\0') &&
                 (cVar3 = (**(code **)(*(long *)this + 0x180))(this), cVar3 == '\0')) {
                setState(this,0xc);
                goto LAB_04d1ca7c;
              }
            }
          }
        }
      }
    }
  }
  cVar2 = '\0';
LAB_04d1ca7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlantSarracenia::CancelPlantfood() */

void __thiscall PlantSarracenia::CancelPlantfood(PlantSarracenia *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* PlantSarracenia::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSarracenia::onAnimStoppedCallback(PlantSarracenia *this,string *param_1)

{
  long lVar1;
  
  FUN_04d1bfa8(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_05474374(param_1,"attack1",0);
  if ((((lVar1 == -1) && (lVar1 = FUN_05474374(param_1,"attack2",0), lVar1 == -1)) &&
      (lVar1 = FUN_05474374(param_1,"attack3",0), lVar1 == -1)) &&
     ((lVar1 = FUN_05474374(param_1,&DAT_0560f4c0,0), lVar1 == -1 &&
      (lVar1 = FUN_05474374(param_1,&DAT_0560f4b8,0), lVar1 == -1)))) {
    return;
  }
  setState(this,10);
  return;
}


/* PlantSarracenia::UpdateStatus() */

void __thiscall PlantSarracenia::UpdateStatus(PlantSarracenia *this)

{
  char cVar1;
  long *plVar2;
  float fVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    return;
  }
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x28) < fVar3) {
    if (this[0x2c] != (PlantSarracenia)0x0) goto LAB_04d1cd58;
    this[0x2c] = (PlantSarracenia)0x1;
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  if (this[0x2c] == (PlantSarracenia)0x0) {
    return;
  }
LAB_04d1cd58:
  cVar1 = checkHasZombieInRight(this);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,0xc);
  return;
}


/* PlantSarracenia::UpdateActions() */

void __thiscall PlantSarracenia::UpdateActions(PlantSarracenia *this)

{
  if (*(int *)(*(long *)(this + 0x10) + 200) != 10) {
    return;
  }
  UpdateStatus(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::createPetrifiedGrid(Zombie*, bool) */

void __thiscall
PlantSarracenia::createPetrifiedGrid(PlantSarracenia *this,Zombie *param_1,bool param_2)

{
  int iVar1;
  string *psVar2;
  SexyVector3 *this_00;
  float *pfVar3;
  GridItemSarraceniaFossil *pGVar4;
  Board *pBVar5;
  code *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::CreateGameSubSystem<ZombieSurrenderSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  getFossilTypeName((Zombie *)this);
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_68);
  BoardEntity::CalcGridPosition();
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)aRStack_88);
  this_00 = (SexyVector3 *)Board::AddGridItemUnbounded(pBVar5,asStack_68,local_80,local_7c,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,*pfVar3,pfVar3[1],0.0);
  BoardEntity::PlaceOnBoard(this_00);
  (**(code **)(*(long *)this_00 + 0x178))(this_00);
  fVar8 = (float)FUN_04d1998c(*(undefined4 *)(param_1 + 0x280));
  fVar9 = (float)FUN_04d19990(*(undefined4 *)(param_1 + 0x2a8));
  iVar1 = Zombie::GetSizeType(param_1);
  if (iVar1 < 1) {
    uVar10 = 0x461c4000;
  }
  else {
    uVar10 = 0x46ea6000;
  }
  fVar8 = (float)NEON_fminnm(uVar10,(fVar9 + fVar8) * 0.8);
  FUN_04d1993c(fVar8,this_00 + 0x128);
  FUN_04d19934(uVar10,this_00 + 300);
  FUN_04d199cc(this_00 + 0x24);
  if (param_2) {
    lVar7 = *(long *)this_00;
    if (*(code **)(lVar7 + 0x1d8) == GridItem::GetHitpoints) {
      fVar9 = (float)GridItem::GetHitpoints((GridItem *)this_00);
    }
    else {
      fVar9 = (float)(**(code **)(lVar7 + 0x1d8))();
      lVar7 = *(long *)this_00;
    }
    pcVar6 = *(code **)(lVar7 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)(fVar9 * 0.5),local_70,local_6c,asStack_68,aPStack_78,0);
    (*pcVar6)(this_00,asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  }
  pGVar4 = Sexy::RtObject::Cast<GridItemSarraceniaFossil>((RtObject *)this_00);
  FUN_04d19994(fVar8 * 0.5,pGVar4 + 0x1e0);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  pcVar6 = *(code **)(*(long *)param_1 + 0x120);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,4,aPStack_78,0);
  (*pcVar6)(param_1,asStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::pfPetrifiedZombies(int) */

void PlantSarracenia::pfPetrifiedZombies(int param_1)

{
  bool bVar1;
  char cVar2;
  PlantSarracenia *this;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  RealObject *this_00;
  Zombie *pZVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this = (PlantSarracenia *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  getPFTargets(this,(vector *)avStack_20);
  lVar3 = FUN_04d1bfa8(*(undefined8 *)(this + 0x10));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (((RtObject *)*puVar4 != (RtObject *)0x0) &&
       (pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4), pZVar5 != (Zombie *)0x0)) {
      cVar2 = canBePetrified(this,pZVar5);
      if (cVar2 == '\0') {
        cVar2 = canBeStunned(this,pZVar5);
        if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x304),0,pZVar5,2,1);
        }
      }
      else {
        pZVar6._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar6._0_4_,0,pZVar5,0x26,1);
        createPetrifiedGrid(this,pZVar5,false);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_28,"Play_Plant_HocusCrocus_Attack");
  RealObject::PlayPositionalSound(this_00,(string *)&local_28,0.0);
  std::string::~string((string *)&local_28);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarracenia::normalPetrifiedZombies(int) */

void PlantSarracenia::normalPetrifiedZombies(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  PlantSarracenia *this;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  int in_w1;
  string *__n;
  int in_w4;
  RealObject *this_00;
  Zombie *pZVar11;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this = (PlantSarracenia *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)uVar3,iVar4,(iVar5 - uVar3) + 3,1,in_w4);
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,auStack_30);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_04d1f278(uVar6,uVar7);
  __n = (string *)&local_38;
  std::string::string(asStack_48,"POPANIM_EFFECTS_SARRACENIA_BULLET_LASER");
  nop();
  if (in_w1 == 2) {
    std::string::append(asStack_48,"POPANIM_EFFECTS_SARRACENIA_BULLET_LASER_LV5",(size_t)__n);
  }
  lVar8 = FUN_04d1bfa8(*(undefined8 *)(this + 0x10));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  iVar4 = in_w1;
  if (bVar1) {
    do {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      if (pZVar10 != (Zombie *)0x0) {
        cVar2 = canBePetrified(this,pZVar10);
        if (cVar2 == '\0') {
          cVar2 = canBeStunned(this,pZVar10);
          if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
            iVar4 = iVar4 + -1;
            Zombie::ApplyCondition(*(Zombie **)(lVar8 + 0x304),0,pZVar10,2,1);
            playNormalLaserEffect(this,pZVar10,asStack_48);
          }
        }
        else {
          pZVar11._0_4_ = (Zombie *)PVZ_EOT();
          iVar4 = iVar4 + -1;
          Zombie::ApplyCondition(pZVar11._0_4_,0,pZVar10,0x26,1);
          playNormalLaserEffect(this,pZVar10,asStack_48);
          createPetrifiedGrid(this,pZVar10,in_w1 == 2);
        }
      }
      if (iVar4 == 0) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar1);
  }
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_38,"Play_Plant_MagGrass_Nitro_Start");
  RealObject::PlayPositionalSound(this_00,(string *)&local_38,0.0);
  std::string::~string((string *)&local_38);
  nop();
  std::string::~string(asStack_48);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSarracenia::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantSarracenia::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"plantfood");
    iVar3 = (int)param_1;
    if (bVar1) {
      pfPetrifiedZombies(iVar3);
      return 1;
    }
    bVar1 = std::operator==(param_2,"petrified");
    if (bVar1) {
      cVar2 = FUN_04d1996c(*(undefined8 *)(param_1 + 0x10));
      if ((cVar2 == '\0') || (fVar4 = (float)Sexy::Rand(1.0), *(float *)(param_1 + 0x4c) < fVar4)) {
        normalPetrifiedZombies(iVar3);
        return 1;
      }
      normalPetrifiedZombies(iVar3);
    }
  }
  return 1;
}

