// Class: Effect_JewelRabbit_hole


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_hole::StaticClassInit() */

void Effect_JewelRabbit_hole::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_JewelRabbit_hole");
    (*pcVar2)(plVar1,asStack_10,FUN_0362e470,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_JewelRabbit_hole::StaticGetClass() */

long * Effect_JewelRabbit_hole::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_JewelRabbit_hole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_JewelRabbit_hole::GetClass() const */

long * Effect_JewelRabbit_hole::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_JewelRabbit_hole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_JewelRabbit_hole::canSwallowZombie(Zombie*) */

char __thiscall
Effect_JewelRabbit_hole::canSwallowZombie(Effect_JewelRabbit_hole *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ZombieZombossMech *pZVar4;
  
  cVar1 = Zombie::IsTargetable(param_1);
  if (((cVar1 == '\0') || (cVar1 = Zombie::IsOnGround(param_1), cVar1 == '\0')) ||
     ((cVar2 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 = '\0', cVar2 != '\0' &&
      (((((cVar1 = FUN_0362d254(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0' ||
          (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
         (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0')) ||
        ((((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
           (cVar1 = Zombie::IsSuspended(param_1), cVar1 != '\0')) ||
          ((cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0' ||
           ((cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0' ||
            (iVar3 = Zombie::GetSizeType(param_1), iVar3 == 2)))))) ||
         (iVar3 = Zombie::GetSizeType(param_1), iVar3 == 1)))) ||
       ((((cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0' ||
          (pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
          pZVar4 != (ZombieZombossMech *)0x0)) ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')) ||
        ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0' ||
         (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0')))))))))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* Effect_JewelRabbit_hole::disappear(float) */

void __thiscall Effect_JewelRabbit_hole::disappear(Effect_JewelRabbit_hole *this,float param_1)

{
  float fVar1;
  
  this[0x114] = (Effect_JewelRabbit_hole)0x1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x11c) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_hole::setGridPosition(Sexy::Point) */

void __thiscall Effect_JewelRabbit_hole::setGridPosition(Effect_JewelRabbit_hole *this,int *param_2)

{
  bool bVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  string asStack_30 [8];
  float local_28;
  float local_24;
  Vec3 aVStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x10c) = *(undefined8 *)param_2;
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(*param_2);
  local_28 = (float)iVar2;
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2[1]);
  local_24 = (float)iVar2;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,-30.0,0.0);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_28,aVStack_18);
  std::string::string(asStack_30,"POPANIM_EFFECTS_JEWELRABBIT_BULLET");
  GetPAMByName(asStack_30);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aVStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)aVStack_18,"hole_loop");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,aVStack_18,0);
  std::string::~string((string *)aVStack_18);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this,(SexyVector3 *)&local_28,
             *param_2 + 0x62250 + param_2[1] * 10000);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x118) = fVar4 + 5.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_JewelRabbit_hole::Effect_JewelRabbit_hole() */

void __thiscall Effect_JewelRabbit_hole::Effect_JewelRabbit_hole(Effect_JewelRabbit_hole *this)

{
  undefined4 uVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0666d570;
  Sexy::Point::Point((Point *)(this + 0x10c));
  this[0x114] = (Effect_JewelRabbit_hole)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x118) = uVar1;
  *(undefined4 *)(this + 0x11c) = uVar1;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x120));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  return;
}


/* Effect_JewelRabbit_hole::StaticNew() */

Effect_JewelRabbit_hole * Effect_JewelRabbit_hole::StaticNew(void)

{
  Effect_JewelRabbit_hole *this;
  
  this = ::operator_new(0x140);
  Effect_JewelRabbit_hole(this);
  return this;
}


/* Effect_JewelRabbit_hole::~Effect_JewelRabbit_hole() */

void __thiscall Effect_JewelRabbit_hole::~Effect_JewelRabbit_hole(Effect_JewelRabbit_hole *this)

{
  *(undefined ***)this = &PTR_GetClass_0666d570;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  CurveSequence<Sexy::SexyVector3>::~CurveSequence
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x120));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_JewelRabbit_hole::~Effect_JewelRabbit_hole() */

void __thiscall Effect_JewelRabbit_hole::~Effect_JewelRabbit_hole(Effect_JewelRabbit_hole *this)

{
  ~Effect_JewelRabbit_hole(this);
  AK::FreeHook(this);
  return;
}


/* Effect_JewelRabbit_hole::onDestroy() */

void __thiscall Effect_JewelRabbit_hole::onDestroy(Effect_JewelRabbit_hole *this)

{
  char cVar1;
  ResourceInfo *pRVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x138));
  if (cVar1 == '\0') {
    return;
  }
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x138));
  GridItemArtifactBlackholeTile::KillZombie((GridItemArtifactBlackholeTile *)this,(Zombie *)pRVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_hole::updateSwallowingZombie() */

void Effect_JewelRabbit_hole::updateSwallowingZombie(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  GridItemArtifactBlackholeTile *in_x0;
  long *plVar2;
  ResourceInfo *pRVar3;
  code *pcVar4;
  float fVar5;
  undefined4 local_18 [4];
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x138);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    fVar5 = (float)PVZ_T();
    cVar1 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence
                      ((CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x120),fVar5);
    if (cVar1 == '\0') {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
      GridItemArtifactBlackholeTile::KillZombie(in_x0,(Zombie *)pRVar3);
      disappear((Effect_JewelRabbit_hole *)in_x0,0.0);
    }
    else {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pcVar4 = *(code **)(*plVar2 + 0x78);
      fVar5 = (float)PVZ_T();
      local_18[0] = CurveSequence<Sexy::SexyVector3>::GetValueAt
                              ((CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x120),fVar5);
      (*pcVar4)(plVar2,local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_hole::setupZombieToBeSwallowed(Zombie*) */

void __thiscall
Effect_JewelRabbit_hole::setupZombieToBeSwallowed(Effect_JewelRabbit_hole *this,Zombie *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  Zombie *pZVar6;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetHasPlantFood(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar2 = Zombie::HasCondition(param_1,0x12);
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x13);
  }
  else {
    local_24 = 0x12;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x13);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x14);
  }
  else {
    local_24 = 0x13;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x14);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x15);
  }
  else {
    local_24 = 0x14;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x15);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x16);
  }
  else {
    local_24 = 0x15;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x16);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x17);
  }
  else {
    local_24 = 0x16;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x17);
  }
  if (cVar2 != '\0') {
    local_24 = 0x17;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
  }
  Zombie::SetIsBeingPulledByOlivePit(param_1,true);
  Zombie::ClearConditions(param_1);
  Zombie::SetHasPlantFood(SUB81(param_1,0));
  pZVar6._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,2,1);
  uVar5 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar4 = FUN_0362bf90(local_20,local_18);
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_0362bf9c(uVar1,uVar5);
    Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,*puVar3,1);
    uVar5 = uVar5 + 1;
  }
  Zombie::SetMarkedForDeath(param_1);
  Zombie::SetIsControlled(param_1,true);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,true);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_hole::swallowZombie(Zombie*) */

void __thiscall
Effect_JewelRabbit_hole::swallowZombie(Effect_JewelRabbit_hole *this,Zombie *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  float local_48;
  Vec3 aVStack_40 [16];
  Insets aIStack_30 [12];
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x138),(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    setupZombieToBeSwallowed(this,param_1);
    Sexy::Insets::Insets(aIStack_30);
    plVar2 = (long *)Zombie::GetAnimRig(param_1);
    (**(code **)(*plVar2 + 0x90))(plVar2,aIStack_30);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_50 = *puVar3;
    local_48 = *(float *)(puVar3 + 1);
    fVar4 = (float)FUN_0362c638();
    cVar1 = (**(code **)(*(long *)param_1 + 0x378))(param_1);
    if (cVar1 == '\0') {
      fVar6 = 0.9;
    }
    else {
      fVar6 = 0.3;
    }
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    fVar5 = (float)PVZ_T();
    CurveSequence<Sexy::SexyVector3>::StartSequence
              ((CurveSequence<Sexy::SexyVector3> *)aRStack_20,fVar5,(SexyVector3 *)&local_50);
    EATextSquish::Vec3::Vec3
              (aVStack_40,(float)local_50,local_50._4_4_,local_48 - fVar6 * fVar4 * (float)local_24)
    ;
    CurveSequence<Sexy::SexyVector3>::AddCurve
              ((CurveSequence<Sexy::SexyVector3> *)0x3e800000,aRStack_20,(SexyVector3 *)&local_50,
               aVStack_40,1);
    CurveSequence<Sexy::SexyVector3>::operator=
              ((CurveSequence<Sexy::SexyVector3> *)(this + 0x120),(CurveSequence *)aRStack_20);
    CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aRStack_20)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_hole::onUpdate() */

void __thiscall Effect_JewelRabbit_hole::onUpdate(Effect_JewelRabbit_hole *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  Zombie *this_00;
  RtObject *this_01;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar6 = (float)PVZ_T();
  if ((*(float *)(this + 0x118) < fVar6) ||
     (fVar6 = (float)PVZ_T(), *(float *)(this + 0x11c) < fVar6)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    updateSwallowingZombie();
    if (this[0x114] == (Effect_JewelRabbit_hole)0x0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      uVar3 = operator|(2,1);
      EntityFinder::GetEntitiesAtGridSquare
                (avStack_20,uVar3,*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110));
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        this_01 = (RtObject *)*puVar4;
        pPVar5 = Sexy::RtObject::Cast<Plant>(this_01);
        if (pPVar5 != (Plant *)0x0) {
          disappear(this,0.0);
          break;
        }
        this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
        if ((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) {
          cVar2 = canSwallowZombie(this,this_00);
          if (cVar2 != '\0') {
            swallowZombie(this,this_00);
          }
          disappear(this,0.25);
          break;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

