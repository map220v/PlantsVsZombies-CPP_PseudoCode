// Class: ZombieSteamCoalMiner


/* ZombieSteamCoalMiner::onStartWorkAnimCompleted(std::string const&) */

void ZombieSteamCoalMiner::onStartWorkAnimCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieSteamCoalMiner::~ZombieSteamCoalMiner() */

void __thiscall ZombieSteamCoalMiner::~ZombieSteamCoalMiner(ZombieSteamCoalMiner *this)

{
  *(undefined ***)this = &PTR_GetClass_0674e800;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSteamCoalMiner_0674f230;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSteamCoalMiner::~ZombieSteamCoalMiner() */

void __thiscall ZombieSteamCoalMiner::~ZombieSteamCoalMiner(ZombieSteamCoalMiner *this)

{
  ~ZombieSteamCoalMiner(this + -0x10);
  return;
}


/* ZombieSteamCoalMiner::~ZombieSteamCoalMiner() */

void __thiscall ZombieSteamCoalMiner::~ZombieSteamCoalMiner(ZombieSteamCoalMiner *this)

{
  ~ZombieSteamCoalMiner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSteamCoalMiner::~ZombieSteamCoalMiner() */

void __thiscall ZombieSteamCoalMiner::~ZombieSteamCoalMiner(ZombieSteamCoalMiner *this)

{
  ~ZombieSteamCoalMiner(this + -0x10);
  return;
}


/* ZombieSteamCoalMiner::ZombieSteamCoalMiner() */

void __thiscall ZombieSteamCoalMiner::ZombieSteamCoalMiner(ZombieSteamCoalMiner *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined ***)this = &PTR_GetClass_0674e800;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSteamCoalMiner_0674f230;
  return;
}


/* ZombieSteamCoalMiner::StaticNew() */

ZombieSteamCoalMiner * ZombieSteamCoalMiner::StaticNew(void)

{
  ZombieSteamCoalMiner *this;
  
  this = ::operator_new(0x808);
  ZombieSteamCoalMiner(this);
  return this;
}


/* ZombieSteamCoalMiner::hasTruck() */

bool __thiscall ZombieSteamCoalMiner::hasTruck(ZombieSteamCoalMiner *this)

{
  int iVar1;
  
  iVar1 = FUN_03c36790(*(undefined4 *)(this + 0xb0));
  return iVar1 == 0x12;
}


/* ZombieSteamCoalMiner::onApplyCondition(ZombieConditions) */

void __thiscall ZombieSteamCoalMiner::onApplyCondition(ZombieSteamCoalMiner *this,int param_2)

{
  char cVar1;
  
  if (param_2 == 0x37) {
    cVar1 = hasTruck(this);
    if (((cVar1 != '\0') && (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      cVar1 = (**(code **)(*(long *)this + 0x328))(this);
      if (cVar1 == '\0') {
        Zombie::setZombieState((Zombie *)this,0x1f);
      }
    }
    cVar1 = hasTruck(this);
    if (((cVar1 != '\0') && (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      cVar1 = (**(code **)(*(long *)this + 0x328))(this);
      if (cVar1 == '\0') {
        Zombie::setZombieState((Zombie *)this,0,0);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::onBurnedTruckAnimCompleted(std::string const&) */

void ZombieSteamCoalMiner::onBurnedTruckAnimCompleted(string *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    pcVar3 = *(code **)(*(long *)pZVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::onBrokenTruckAnimCompleted(std::string const&) */

void ZombieSteamCoalMiner::onBrokenTruckAnimCompleted(string *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    pcVar3 = *(code **)(*(long *)pZVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSteamCoalMiner::updateTruckDamage() */

void __thiscall ZombieSteamCoalMiner::updateTruckDamage(ZombieSteamCoalMiner *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  iVar1 = (**(code **)(*(long *)this + 0x208))(this);
  ZombieAnimRig_SteamCoalMiner::UpdateTruckDamageState
            ((ZombieAnimRig_SteamCoalMiner *)this_00,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::spawnTruckShatterEffect(Sexy::Point const&, std::string const&) */

void __thiscall
ZombieSteamCoalMiner::spawnTruckShatterEffect
          (ZombieSteamCoalMiner *this,Point *param_1,string *param_2)

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
  std::string::string((string *)&local_28,"POPANIM_EFFECTS_COAL_TRUCK_PARTICLES");
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
        goto LAB_03c38a68;
      }
    }
    pcVar7 = *(code **)(*(long *)this_00 + 0x80);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    (*pcVar7)(*(undefined4 *)(lVar5 + 0x1c4),this_00);
  }
LAB_03c38a68:
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::onHelmDropped(HelmType, int) */

void __thiscall
ZombieSteamCoalMiner::onHelmDropped(ZombieSteamCoalMiner *this,int param_2,int param_3)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == 0x12) && ((float)param_3 <= 0.0)) {
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBrokenTruckAnimCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_SteamCoalMiner::PlayBrokenTruck((ZombieAnimRig_SteamCoalMiner *)pZVar1,aRStack_50)
    ;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_SteamCoalMiner::HideTruck((ZombieAnimRig_SteamCoalMiner *)pZVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::onEnterState_StartWork(ZombieState) */

void ZombieSteamCoalMiner::onEnterState_StartWork(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onStartWorkAnimCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_SteamCoalMiner::PlayStartWork((ZombieAnimRig_SteamCoalMiner *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::tryPlaceTruck(Sexy::Point const&) */

void __thiscall ZombieSteamCoalMiner::tryPlaceTruck(ZombieSteamCoalMiner *this,Point *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Plant *this_00;
  long *plVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  GridItemCoalSteam *pGVar6;
  undefined8 extraout_x0;
  ZombieSteamCoalMinerProps *pZVar7;
  RtObject *this_02;
  undefined8 uVar8;
  Board *pBVar9;
  code *pcVar10;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(this,0x41);
  if (((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x60), cVar1 == '\0')) &&
     (cVar1 = ZombieFairyTaleGargantuar::canSpawnBoardAt((ZombieFairyTaleGargantuar *)this,param_1),
     cVar1 != '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    EntityFinder::GetEntitiesAtGridSquare
              (avStack_98,1,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_98);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)local_68);
      if (!bVar2) break;
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8)
      ;
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsThrownAway(this_00,true);
        pcVar10 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point((Point *)&local_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_80,local_7c,(DamageInfo *)local_68,this,
                   (Point *)&local_a0,0);
        (*pcVar10)(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      FUN_03c388c8((exception_ptr *)&local_a8);
    }
    plVar4 = (long *)FUN_03c39c28(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x120);
      Sexy::Point::Point((Point *)&local_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_80,local_7c,(DamageInfo *)local_68,this,(Point *)&local_a0,
                 0);
      (*pcVar10)(plVar4,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    EntityFinder::GetEntitiesAtGridSquare
              ((FastCurve *)&local_80,2,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_80);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
      if (!bVar2) break;
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0)
      ;
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_01 != (Zombie *)0x0) {
        cVar1 = RealObject::IsOnOpposingTeam(this_01,1);
        if ((cVar1 == '\0') && (cVar1 = Zombie::CanTakeFatalDamage(this_01), cVar1 != '\0')) {
          pcVar10 = *(code **)(*(long *)this_01 + 0x120);
          Sexy::Point::Point((Point *)&local_a8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_a0,local_9c,(DamageInfo *)local_68,this,
                     (exception_ptr *)&local_a8,0);
          (*pcVar10)(this_01,(DamageInfo *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
      FUN_03c388c8((__normal_iterator *)&local_b0);
    }
    pGVar6 = (GridItemCoalSteam *)FUN_03c39d0c(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (pGVar6 == (GridItemCoalSteam *)0x0) {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      pZVar7 = Zombie::GetProps<ZombieSteamCoalMinerProps>((Zombie *)this);
      this_02 = (RtObject *)
                Board::AddGridItem(pBVar9,(string *)(pZVar7 + 0x218),*(int *)param_1,
                                   *(int *)(param_1 + 4),1);
      pGVar6 = Sexy::RtObject::Cast<GridItemCoalSteam>(this_02);
      uVar3 = FUN_03c36774(*(undefined4 *)(this + 0x24));
      FUN_03c36778(pGVar6 + 0x24,uVar3);
      GridItemCoalSteam::SetIdle(pGVar6);
    }
    else {
      GridItemCoalSteam::ResetTimer(pGVar6);
    }
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_68,"coal_truck");
    Board::AddGridItem(pBVar9,(string *)local_68,*(int *)param_1,*(int *)(param_1 + 4),1);
    nop();
    std::string::~string((string *)local_68);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
    uVar8 = extraout_x0;
  }
  else {
    uVar8 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::StartWork(bool, int) */

void __thiscall ZombieSteamCoalMiner::StartWork(ZombieSteamCoalMiner *this,bool param_1,int param_2)

{
  long lVar1;
  GridItemHeavyShield *this_00;
  HeavyShieldAnimRig *this_01;
  ZombieHydraHeadAnimRig *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieFairyTaleGargantuar::getDefaultShieldSpawnPosition((ZombieFairyTaleGargantuar *)this);
  lVar1 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar1 != 0) {
    BoardEntity::CalcGridPosition();
    local_18 = local_10;
  }
  this_00 = (GridItemHeavyShield *)tryPlaceTruck(this,(Point *)&local_18);
  if (this_00 == (GridItemHeavyShield *)0x0) {
    std::string::string((string *)&local_10,"animation5");
    spawnTruckShatterEffect(this,(Point *)&local_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  else {
    FUN_03c36798(*(undefined4 *)(this + 0x2ac));
    FUN_03c36780(this_00 + 300);
    FUN_03c36788((float)param_2,this_00 + 0x128);
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    nop();
    HeavyShieldAnimRig::PlayStationary(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    GridItemHeavyShield::CalcDamageState(this_00);
  }
  Zombie::setHelm((Zombie *)0x0,this,0);
  this_02 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_SteamCoalMiner::HideTruck((ZombieAnimRig_SteamCoalMiner *)this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSteamCoalMiner::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieSteamCoalMiner::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_4,"use_action");
    if (bVar2) {
      fVar3 = (float)FUN_03c36794(*(undefined4 *)(param_1 + 0x2a8));
      StartWork((ZombieSteamCoalMiner *)param_1,false,(int)fVar3);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::StaticClassInit() */

void ZombieSteamCoalMiner::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieSteamCoalMiner");
      (*pcVar4)(plVar1,asStack_150,FUN_03c3af7c,0x808,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSteamCoalMiner,void(ZombieSteamCoalMiner::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieSteamCoalMiner,void(ZombieSteamCoalMiner::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSteamCoalMiner,void(ZombieSteamCoalMiner::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_Surfer_StartWork");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c3ad20(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSteamCoalMiner::StaticGetClass() */

long * ZombieSteamCoalMiner::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSteamCoalMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalMiner::GetClass() const */

long * ZombieSteamCoalMiner::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSteamCoalMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalMiner::onPlaceOnBoard() */

void __thiscall ZombieSteamCoalMiner::onPlaceOnBoard(ZombieSteamCoalMiner *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  updateTruckDamage(this);
  return;
}


/* ZombieSteamCoalMiner::getHeadDropFraction() const */

undefined4 ZombieSteamCoalMiner::getHeadDropFraction(void)

{
  Zombie *in_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar1;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  return *(undefined4 *)(lVar1 + 0x50);
}


/* ZombieSteamCoalMiner::takeHelmDamage(DamageInfo const&) */

void __thiscall ZombieSteamCoalMiner::takeHelmDamage(ZombieSteamCoalMiner *this,DamageInfo *param_1)

{
  Zombie::takeHelmDamage((DamageInfo *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMiner::onTakeHelmDamage(DamageInfo const&) */

void __thiscall
ZombieSteamCoalMiner::onTakeHelmDamage(ZombieSteamCoalMiner *this,DamageInfo *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ZombieSteamCoalMinerProps *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ZombieHydraHeadAnimRig *pZVar8;
  undefined8 local_78;
  undefined8 local_70;
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  cVar2 = hasTruck(this);
  if (cVar2 != '\0') {
    updateTruckDamage(this);
    if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
       (bVar3 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1), bVar3)) {
      pZVar4 = Zombie::GetProps<ZombieSteamCoalMinerProps>((Zombie *)this);
      std::vector<std::string,std::allocator<std::string>>::vector
                (avStack_68,(vector *)(pZVar4 + 0x228));
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_68);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_68);
      nop();
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      local_78 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar5,uVar6,lVar7 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
      if (bVar3) {
        *(int *)(this + 0x800) = *(int *)(this + 0x800) + 1;
      }
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_68);
    }
    iVar1 = *(int *)(this + 0x800);
    pZVar4 = Zombie::GetProps<ZombieSteamCoalMinerProps>((Zombie *)this);
    if (*(int *)(pZVar4 + 0x220) <= iVar1) {
      pZVar8 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_78);
      std::string::string((string *)avStack_68,"onBurnedTruckAnimCompleted");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_70,(string *)avStack_68);
      ZombieAnimRig_SteamCoalMiner::PlayBurnedTruck
                ((ZombieAnimRig_SteamCoalMiner *)pZVar8,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)avStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      Zombie::setHelm((Zombie *)0x0,this,0);
      pZVar8 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_SteamCoalMiner::HideTruck((ZombieAnimRig_SteamCoalMiner *)pZVar8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSteamCoalMiner::updateState_Walk() */

void __thiscall ZombieSteamCoalMiner::updateState_Walk(ZombieSteamCoalMiner *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = hasTruck(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  lVar2 = (**(code **)(*(long *)this + 0x228))(this);
  if ((lVar2 == 0) && (cVar1 = Zombie::HasCondition(this,0x8c), cVar1 == '\0')) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieSteamCoalMiner::CalcZombieAttackRect() */

void ZombieSteamCoalMiner::CalcZombieAttackRect(void)

{
  char cVar1;
  ZombieSteamCoalMiner *in_x0;
  ZombieSteamCoalMinerProps *pZVar2;
  int *in_x8;
  
  Zombie::CalcZombieAttackRect();
  cVar1 = hasTruck(in_x0);
  if (cVar1 != '\0') {
    pZVar2 = Zombie::GetProps<ZombieSteamCoalMinerProps>((Zombie *)in_x0);
    *in_x8 = (int)((float)*in_x8 + *(float *)(pZVar2 + 0x210));
  }
  return;
}

