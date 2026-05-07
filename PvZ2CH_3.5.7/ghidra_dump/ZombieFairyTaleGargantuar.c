// Class: ZombieFairyTaleGargantuar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::canSpawnBoardAt(Sexy::Point const&) const */

void __thiscall
ZombieFairyTaleGargantuar::canSpawnBoardAt(ZombieFairyTaleGargantuar *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  Plant *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_1 + 4);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = *(int *)param_1;
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 == (Plant *)0x0) {
    bVar3 = 1;
  }
  else {
    bVar3 = Plant::IsInvincible(this_00,false);
    bVar3 = bVar3 ^ 1;
  }
  bVar4 = Board::CanAddGraveStoneAt
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4 & bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::getDefaultShieldSpawnPosition() */

void __thiscall
ZombieFairyTaleGargantuar::getDefaultShieldSpawnPosition(ZombieFairyTaleGargantuar *this)

{
  long lVar1;
  int *piVar2;
  int *in_x8;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  local_10[1] = 0;
  local_10[0] = *in_x8 + -1;
  piVar2 = eastl::max_alt<int>(local_10,local_10 + 1);
  lVar1 = ___stack_chk_guard;
  *in_x8 = *piVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleGargantuar::onTakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombieFairyTaleGargantuar::onTakeFatalDamage(ZombieFairyTaleGargantuar *this,DamageInfo *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x1000);
  if ((!bVar1) && (bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x80), !bVar1)) {
    (**(code **)(*(long *)this + 0x240))(this);
  }
  return;
}


/* ZombieFairyTaleGargantuar::onInitialized() */

void __thiscall ZombieFairyTaleGargantuar::onInitialized(ZombieFairyTaleGargantuar *this)

{
  Zombie::onInitialized((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0xffffffff;
  return;
}


/* ZombieFairyTaleGargantuar::onStartBleeding() */

void __thiscall ZombieFairyTaleGargantuar::onStartBleeding(ZombieFairyTaleGargantuar *this)

{
  Zombie::EndCondition((Zombie *)this,0x69);
  Zombie::onStartBleeding((Zombie *)this);
  return;
}


/* ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar() */

void __thiscall
ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar(ZombieFairyTaleGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_069f9180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleGargantuar_069f9bd8;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar() */

void __thiscall
ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar(ZombieFairyTaleGargantuar *this)

{
  ~ZombieFairyTaleGargantuar(this + -0x10);
  return;
}


/* ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar() */

void __thiscall
ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar(ZombieFairyTaleGargantuar *this)

{
  ~ZombieFairyTaleGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar() */

void __thiscall
ZombieFairyTaleGargantuar::~ZombieFairyTaleGargantuar(ZombieFairyTaleGargantuar *this)

{
  ~ZombieFairyTaleGargantuar(this + -0x10);
  return;
}


/* ZombieFairyTaleGargantuar::ZombieFairyTaleGargantuar() */

void __thiscall
ZombieFairyTaleGargantuar::ZombieFairyTaleGargantuar(ZombieFairyTaleGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_069f9180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleGargantuar_069f9bd8;
  return;
}


/* ZombieFairyTaleGargantuar::StaticNew() */

ZombieFairyTaleGargantuar * ZombieFairyTaleGargantuar::StaticNew(void)

{
  ZombieFairyTaleGargantuar *this;
  
  this = ::operator_new(0x808);
  ZombieFairyTaleGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::StaticClassInit() */

void ZombieFairyTaleGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFairyTaleGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed33c4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleGargantuar::StaticGetClass() */

long * ZombieFairyTaleGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleGargantuar::GetClass() const */

long * ZombieFairyTaleGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::spawnShieldShatterEffect(Sexy::Point const&, std::string const&) */

void __thiscall
ZombieFairyTaleGargantuar::spawnShieldShatterEffect
          (ZombieFairyTaleGargantuar *this,Point *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  long lVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Point *extraout_x1;
  code *pcVar7;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_28,"POPANIM_EFFECTS_HEAVY_SHIELD_PARTICLES");
  GetPAMByName((string *)&local_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  cVar1 = Zombie::HasCondition(this,0x41);
  if (cVar1 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      std::string::string((string *)aRStack_18,"shrinkingviolet");
      iVar2 = PlayerInfo::GetEquipAvatarID(this_02,(string *)aRStack_18);
      std::string::~string((string *)aRStack_18);
      nop();
      if (iVar2 != -1) {
        pcVar7 = *(code **)(*(long *)this_00 + 0x80);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        (*pcVar7)(*(undefined4 *)(lVar5 + 0x1c8),this_00);
        goto LAB_04ed41f8;
      }
    }
    pcVar7 = *(code **)(*(long *)this_00 + 0x80);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    (*pcVar7)(*(undefined4 *)(lVar5 + 0x1c4),this_00);
  }
LAB_04ed41f8:
  cVar1 = Zombie::HasCondition(this,0x60);
  if (cVar1 != '\0') {
    pcVar7 = *(code **)(*(long *)this_00 + 0x80);
    pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x60);
    (*pcVar7)(*(undefined4 *)(lVar5 + 0xc),this_00);
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,-30.0,0.0);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,extraout_x1);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)local_30 + local_28,(float)local_2c + local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleGargantuar::ShowImpLayers(bool) */

void __thiscall
ZombieFairyTaleGargantuar::ShowImpLayers(ZombieFairyTaleGargantuar *this,bool param_1)

{
  ZombieFairyTaleArmedGargantuarProps *pZVar1;
  ZombieHydraHeadAnimRig *this_00;
  long lVar2;
  
  pZVar1 = Zombie::GetProps<ZombieFairyTaleArmedGargantuarProps>((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  lVar2 = FUN_04ed2520(*(undefined8 *)(pZVar1 + 0x210),*(undefined4 *)(this + 0x800));
  ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
            ((ZombieAnimRig_Gargantuar *)this_00,(vector *)(lVar2 + 8),param_1);
  *(int *)(this + 0x800) = *(int *)(this + 0x800) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::tryPlaceShield(Sexy::Point const&) */

void __thiscall
ZombieFairyTaleGargantuar::tryPlaceShield(ZombieFairyTaleGargantuar *this,Point *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Plant *this_00;
  long *plVar4;
  ZombieFairyTaleGargantuarProps *pZVar5;
  undefined8 extraout_x0;
  undefined8 uVar6;
  Board *this_01;
  code *pcVar7;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(this,0x41);
  if (((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x60), cVar1 == '\0')) &&
     (cVar1 = canSpawnBoardAt(this,param_1), cVar1 != '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    EntityFinder::GetEntitiesAtGridSquare
              (avStack_80,1,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_80);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
      if (!bVar2) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98)
      ;
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsThrownAway(this_00,true);
        pcVar7 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)local_68,this,aPStack_90,0);
        (*pcVar7)(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      FUN_04ed40cc((exception_ptr *)&local_98);
    }
    plVar4 = (long *)FUN_04ed453c(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)local_68,this,aPStack_90,0);
      (*pcVar7)(plVar4,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    pZVar5 = Zombie::GetProps<ZombieFairyTaleGargantuarProps>((Zombie *)this);
    Board::AddGridItem(this_01,(string *)(pZVar5 + 0x270),*(int *)param_1,*(int *)(param_1 + 4),1);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    uVar6 = extraout_x0;
  }
  else {
    uVar6 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::dropShield() */

void __thiscall ZombieFairyTaleGargantuar::dropShield(ZombieFairyTaleGargantuar *this)

{
  GridItemHeavyShield *this_00;
  HeavyShieldAnimRig *this_01;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getDefaultShieldSpawnPosition(this);
  this_00 = (GridItemHeavyShield *)tryPlaceShield(this,aPStack_18);
  if (this_00 == (GridItemHeavyShield *)0x0) {
    std::string::string((string *)aRStack_10,"animation2");
    spawnShieldShatterEffect(this,aPStack_18,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  else {
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    HeavyShieldAnimRig::PlayStationary(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    GridItemHeavyShield::CalcDamageState(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleGargantuar::playDeathAnimation() */

void __thiscall ZombieFairyTaleGargantuar::playDeathAnimation(ZombieFairyTaleGargantuar *this)

{
  Zombie::playDeathAnimation((Zombie *)this);
  dropShield(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleGargantuar::showAmmoLayers(bool) */

void __thiscall
ZombieFairyTaleGargantuar::showAmmoLayers(ZombieFairyTaleGargantuar *this,bool param_1)

{
  bool bVar1;
  ZombieFairyTaleGargantuarProps *pZVar2;
  ZombieGargantuarProjectilePair *pZVar3;
  ZombieHydraHeadAnimRig *this_00;
  undefined8 local_38;
  undefined8 local_30;
  ZombieGargantuarProjectilePair aZStack_28 [8];
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieFairyTaleGargantuarProps>((Zombie *)this);
  local_38 = FUN_04ed402c(*(undefined8 *)(pZVar2 + 0x210));
  local_30 = FUN_04ed407c(*(undefined8 *)(pZVar2 + 0x218));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pZVar3 = (ZombieGargantuarProjectilePair *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    ZombieGargantuarProjectilePair::ZombieGargantuarProjectilePair(aZStack_28,pZVar3);
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
              ((ZombieAnimRig_Gargantuar *)this_00,avStack_20,param_1);
    WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)aZStack_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleGargantuar::onZombieInitialize() */

void __thiscall ZombieFairyTaleGargantuar::onZombieInitialize(ZombieFairyTaleGargantuar *this)

{
  ZombieFairyTaleGargantuarProps *pZVar1;
  undefined1 auVar2 [16];
  
  Zombie::onZombieInitialize((Zombie *)this);
  auVar2 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar2,0,this,0x69,1);
  pZVar1 = Zombie::GetProps<ZombieFairyTaleGargantuarProps>((Zombie *)this);
  showAmmoLayers(this,(bool)pZVar1[0x268]);
  return;
}

