// Class: ZombieBeachSurfer


/* ZombieBeachSurfer::onSlamAnimCompleted(std::string const&) */

void ZombieBeachSurfer::onSlamAnimCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieBeachSurfer::onSurfToWalkAnimCompleted(std::string const&) */

void ZombieBeachSurfer::onSurfToWalkAnimCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieBeachSurfer::hasHeadParticle() const */

undefined8 __thiscall ZombieBeachSurfer::hasHeadParticle(ZombieBeachSurfer *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x21), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}


/* ZombieBeachSurfer::~ZombieBeachSurfer() */

void __thiscall ZombieBeachSurfer::~ZombieBeachSurfer(ZombieBeachSurfer *this)

{
  *(undefined ***)this = &PTR_GetClass_06884710;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachSurfer_06885170;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBeachSurfer::~ZombieBeachSurfer() */

void __thiscall ZombieBeachSurfer::~ZombieBeachSurfer(ZombieBeachSurfer *this)

{
  ~ZombieBeachSurfer(this + -0x10);
  return;
}


/* ZombieBeachSurfer::~ZombieBeachSurfer() */

void __thiscall ZombieBeachSurfer::~ZombieBeachSurfer(ZombieBeachSurfer *this)

{
  ~ZombieBeachSurfer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBeachSurfer::~ZombieBeachSurfer() */

void __thiscall ZombieBeachSurfer::~ZombieBeachSurfer(ZombieBeachSurfer *this)

{
  ~ZombieBeachSurfer(this + -0x10);
  return;
}


/* ZombieBeachSurfer::ZombieBeachSurfer() */

void __thiscall ZombieBeachSurfer::ZombieBeachSurfer(ZombieBeachSurfer *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06884710;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachSurfer_06885170;
  return;
}


/* ZombieBeachSurfer::StaticNew() */

ZombieBeachSurfer * ZombieBeachSurfer::StaticNew(void)

{
  ZombieBeachSurfer *this;
  
  this = ::operator_new(0x800);
  ZombieBeachSurfer(this);
  return this;
}


/* ZombieBeachSurfer::isOnWater() const */

void __thiscall ZombieBeachSurfer::isOnWater(ZombieBeachSurfer *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar1);
  return;
}


/* ZombieBeachSurfer::hasBoard() */

bool __thiscall ZombieBeachSurfer::hasBoard(ZombieBeachSurfer *this)

{
  int iVar1;
  
  iVar1 = FUN_04644a3c(*(undefined4 *)(this + 0xb0));
  return iVar1 == 0xb;
}


/* ZombieBeachSurfer::onApplyCondition(ZombieConditions) */

void __thiscall ZombieBeachSurfer::onApplyCondition(ZombieBeachSurfer *this,int param_2)

{
  char cVar1;
  
  if ((param_2 == 3) || (param_2 == 4)) {
    cVar1 = hasBoard(this);
    if ((cVar1 != '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 == '\0')) {
      Zombie::EndCondition((Zombie *)this,param_2);
      return;
    }
  }
  else if ((((param_2 == 0x37) && (cVar1 = hasBoard(this), cVar1 != '\0')) &&
           (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x20);
      return;
    }
  }
  return;
}


/* ZombieBeachSurfer::IsSurfing() const */

void __thiscall ZombieBeachSurfer::IsSurfing(ZombieBeachSurfer *this)

{
  Zombie::isInState((Zombie *)this,0x1f);
  return;
}


/* ZombieBeachSurfer::IsOnFoot() const */

byte __thiscall ZombieBeachSurfer::IsOnFoot(ZombieBeachSurfer *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = Zombie::isInState((Zombie *)this,0x21);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* ZombieBeachSurfer::onEnterState_Surfing(ZombieState) */

void ZombieBeachSurfer::onEnterState_Surfing(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_BeachSurfer::PlaySurf((ZombieAnimRig_BeachSurfer *)this);
  return;
}


/* ZombieBeachSurfer::updateBoardDamage() */

void __thiscall ZombieBeachSurfer::updateBoardDamage(ZombieBeachSurfer *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  iVar1 = (**(code **)(*(long *)this + 0x208))(this);
  ZombieAnimRig_BeachSurfer::UpdateSurfboardDamageState((ZombieAnimRig_BeachSurfer *)this_00,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::spawnBoardShatterEffect(Sexy::Point const&, std::string const&) */

void __thiscall
ZombieBeachSurfer::spawnBoardShatterEffect(ZombieBeachSurfer *this,Point *param_1,string *param_2)

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
  std::string::string((string *)&local_28,"POPANIM_EFFECTS_SURF_BOARD_PARTICLES");
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
        goto LAB_046462b8;
      }
    }
    pcVar7 = *(code **)(*(long *)this_00 + 0x80);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    (*pcVar7)(*(undefined4 *)(lVar5 + 0x1c4),this_00);
  }
LAB_046462b8:
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
/* ZombieBeachSurfer::canSpawnBoardAt(Sexy::Point const&) const */

void __thiscall ZombieBeachSurfer::canSpawnBoardAt(ZombieBeachSurfer *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  Plant *this_00;
  ZombieBeachSurferProps *pZVar6;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)param_1;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = *(int *)(param_1 + 4);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,iVar1,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 == (Plant *)0x0) {
    bVar3 = 0;
    bVar4 = Board::CanAddGraveStoneAt
                      (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),true);
    bVar5 = 0;
  }
  else {
    bVar3 = Plant::IsInvincible(this_00,false);
    bVar4 = Board::CanAddGraveStoneAt
                      (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),true);
    pZVar6 = Zombie::GetProps<ZombieBeachSurferProps>((Zombie *)this);
    bVar5 = PlantRestrictionSet::IsExcluded((Plant *)(pZVar6 + 0x218));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((bVar5 | bVar4 <= bVar3) ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::updateState_Surfing() */

void __thiscall ZombieBeachSurfer::updateState_Surfing(ZombieBeachSurfer *this)

{
  char cVar1;
  int iVar2;
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  ZombieBeachSurferProps *pZVar3;
  SexyVector3 *this_01;
  RtObject *this_02;
  GridItemPlantShield *pGVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar6 = (float)Zombie::GetWalkSpeed((Zombie *)this);
  }
  else {
    fVar6 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar7 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_00);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pZVar3 = Zombie::GetProps<ZombieBeachSurferProps>((Zombie *)this);
  fVar8 = *(float *)(pZVar3 + 0x210);
  fVar9 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  fVar10 = (float)PVZ_Dt();
  uVar11 = 0;
  uVar12 = 0;
  EATextSquish::Vec3::Vec3
            (aVStack_28,fVar10 * fVar9 * -((float)iVar2 * fVar6 * fVar7 * fVar8),0.0,0.0);
  pcVar5 = *(code **)(*(long *)this + 0x78);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar11;
  local_10 = uVar12;
  (*pcVar5)(this,&local_18);
  this_02 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (((this_02 != (RtObject *)0x0) &&
      (pGVar4 = Sexy::RtObject::Cast<GridItemPlantShield>(this_02),
      pGVar4 != (GridItemPlantShield *)0x0)) || (cVar1 = isOnWater(this), cVar1 == '\0')) {
    ZombieVan::prepareBumping((ZombieVan *)this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::onEnterState_SlamBoard(ZombieState) */

void ZombieBeachSurfer::onEnterState_SlamBoard(Zombie *param_1)

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
  std::string::string(asStack_58,"onSlamAnimCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_BeachSurfer::PlaySlam((ZombieAnimRig_BeachSurfer *)pZVar1,aRStack_50);
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
/* ZombieBeachSurfer::onEnterState_SurfingToWalking(ZombieState) */

void ZombieBeachSurfer::onEnterState_SurfingToWalking(Zombie *param_1)

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
  std::string::string(asStack_58,"onSurfToWalkAnimCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_BeachSurfer::PlaySurfToWalk((ZombieAnimRig_BeachSurfer *)pZVar1,aRStack_50);
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
/* ZombieBeachSurfer::tryPlaceBoard(Sexy::Point const&) */

void __thiscall ZombieBeachSurfer::tryPlaceBoard(ZombieBeachSurfer *this,Point *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Plant *this_00;
  long *plVar4;
  undefined8 extraout_x0;
  undefined8 uVar5;
  Board *this_01;
  code *pcVar6;
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
        pcVar6 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)local_68,this,aPStack_90,0);
        (*pcVar6)(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      FUN_0464618c((exception_ptr *)&local_98);
    }
    plVar4 = (long *)FUN_04646b54(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (plVar4 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar4 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)local_68,this,aPStack_90,0);
      (*pcVar6)(plVar4,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_68,"surfboard");
    Board::AddGridItem(this_01,(string *)local_68,*(int *)param_1,*(int *)(param_1 + 4),1);
    nop();
    std::string::~string((string *)local_68);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    uVar5 = extraout_x0;
  }
  else {
    uVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::slamBoard(bool, int) */

void __thiscall ZombieBeachSurfer::slamBoard(ZombieBeachSurfer *this,bool param_1,int param_2)

{
  long lVar1;
  GridItemHeavyShield *this_00;
  SurfboardAnimRig *this_01;
  ZombieHydraHeadAnimRig *this_02;
  HeavyShieldAnimRig *this_03;
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
  this_00 = (GridItemHeavyShield *)tryPlaceBoard(this,(Point *)&local_18);
  if (this_00 == (GridItemHeavyShield *)0x0) {
    std::string::string((string *)&local_10,"animation5");
    spawnBoardShatterEffect(this,(Point *)&local_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  else {
    FUN_04644a44(*(undefined4 *)(this + 0x2ac));
    FUN_04644a2c(this_00 + 300);
    FUN_04644a34((float)param_2,this_00 + 0x128);
    if (param_1) {
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      nop();
      HeavyShieldAnimRig::PlayStationary(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    else {
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      nop();
      SurfboardAnimRig::PlayStationary(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    GridItemHeavyShield::CalcDamageState(this_00);
  }
  Zombie::setHelm((Zombie *)0x0,this,0);
  this_02 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_BeachSurfer::HideSurfboard((ZombieAnimRig_BeachSurfer *)this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachSurfer::onHelmDropped(HelmType, int) */

undefined8 __thiscall
ZombieBeachSurfer::onHelmDropped(ZombieBeachSurfer *this,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *this_00;
  
  if ((param_2 == 0xb) && (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 == '\0')) {
    if (0.0 < (float)param_3) {
      slamBoard(this,true,param_3);
      return 0;
    }
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_BeachSurfer::HideSurfboard((ZombieAnimRig_BeachSurfer *)this_00);
    iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar2 == 1) {
      Zombie::setZombieState((Zombie *)this,1,1);
    }
  }
  return 0;
}


/* ZombieBeachSurfer::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieBeachSurfer::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x20);
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_4,"use_action");
    if (bVar2) {
      fVar3 = (float)FUN_04644a40(*(undefined4 *)(param_1 + 0x2a8));
      slamBoard((ZombieBeachSurfer *)param_1,false,(int)fVar3);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::StaticClassInit() */

void ZombieBeachSurfer::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBeachSurfer");
      (*pcVar4)(plVar1,asStack_150,FUN_04647e4c,0x800,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachSurfer,void(ZombieBeachSurfer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBeachSurfer,void(ZombieBeachSurfer::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachSurfer,void(ZombieBeachSurfer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Surfer_Surfing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04647a98(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachSurfer,void(ZombieBeachSurfer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBeachSurfer,void(ZombieBeachSurfer::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachSurfer,void(ZombieBeachSurfer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Surfer_SlamBoard");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04647a98(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachSurfer,void(ZombieBeachSurfer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieBeachSurfer,void(ZombieBeachSurfer::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBeachSurfer,void(ZombieBeachSurfer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Surfer_SurfingToWalking");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04647a98(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBeachSurfer::StaticGetClass() */

long * ZombieBeachSurfer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachSurfer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachSurfer::GetClass() const */

long * ZombieBeachSurfer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachSurfer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::ShatterBoardInstantly() */

void __thiscall ZombieBeachSurfer::ShatterBoardInstantly(ZombieBeachSurfer *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this_00;
  char *__s;
  Point aPStack_48 [8];
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04644a3c(*(undefined4 *)(this + 0xb0));
  if (iVar1 == 0xb) {
    Zombie::setHelm((Zombie *)0x0,this,0);
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_BeachSurfer::HideSurfboard((ZombieAnimRig_BeachSurfer *)this_00);
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
    ProbabilitySet<char_const*>::AddItem((ProbabilitySet<char_const*> *)aPStack_38,"animation",9);
    ProbabilitySet<char_const*>::AddItem((ProbabilitySet<char_const*> *)aPStack_38,"animation2",10);
    ProbabilitySet<char_const*>::AddItem((ProbabilitySet<char_const*> *)aPStack_38,"animation3",5);
    ZombieFairyTaleGargantuar::getDefaultShieldSpawnPosition((ZombieFairyTaleGargantuar *)this);
    __s = (char *)ProbabilitySet<char_const*>::PickItem((ProbabilitySet<char_const*> *)aPStack_38);
    std::string::string(asStack_40,__s);
    spawnBoardShatterEffect(this,aPStack_48,asStack_40);
    std::string::~string(asStack_40);
    nop();
    ProbabilitySet<char_const*>::~ProbabilitySet((ProbabilitySet<char_const*> *)aPStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachSurfer::onPlaceOnBoard() */

void __thiscall ZombieBeachSurfer::onPlaceOnBoard(ZombieBeachSurfer *this)

{
  char cVar1;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  cVar1 = isOnWater(this);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  updateBoardDamage(this);
  return;
}


/* ZombieBeachSurfer::onPlaceOnStreet() */

void __thiscall ZombieBeachSurfer::onPlaceOnStreet(ZombieBeachSurfer *this)

{
  Zombie::onPlaceOnStreet((Zombie *)this);
  updateBoardDamage(this);
  return;
}


/* ZombieBeachSurfer::getHeadDropFraction() const */

undefined1  [16] __thiscall ZombieBeachSurfer::getHeadDropFraction(ZombieBeachSurfer *this)

{
  char cVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar1 != '\0') {
    return ZEXT816(0);
  }
  Zombie::getHeadDropFraction((Zombie *)this);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


/* ZombieBeachSurfer::takeHelmDamage(DamageInfo const&) */

void ZombieBeachSurfer::takeHelmDamage(DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if ((cVar1 == '\0') &&
     (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x1000000), bVar2)) {
    Zombie::takeHelmDamage(param_1);
    return;
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurfer::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombieBeachSurfer::onTakeHelmDamage(ZombieBeachSurfer *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(RtObject **)param_1 == (RtObject *)0x0) ||
      (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), !bVar1)) &&
     (cVar2 = hasBoard(this), cVar2 != '\0')) {
    std::string::string(asStack_10,"Play_SurferZombie_ImpactBoard");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
  }
  nop();
  updateBoardDamage(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachSurfer::ShouldDrawShadow() const */

byte __thiscall ZombieBeachSurfer::ShouldDrawShadow(ZombieBeachSurfer *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Zombie::ShouldDrawShadow((Zombie *)this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = Zombie::isInState((Zombie *)this,0x1f);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* ZombieBeachSurfer::updateState_Walk() */

void __thiscall ZombieBeachSurfer::updateState_Walk(ZombieBeachSurfer *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = hasBoard(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  lVar2 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar2 != 0) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  return;
}


/* ZombieBeachSurfer::CalcZombieAttackRect() */

void ZombieBeachSurfer::CalcZombieAttackRect(void)

{
  char cVar1;
  ZombieBeachSurfer *in_x0;
  ZombieBeachSurferProps *pZVar2;
  int *in_x8;
  
  Zombie::CalcZombieAttackRect();
  cVar1 = hasBoard(in_x0);
  if (cVar1 != '\0') {
    pZVar2 = Zombie::GetProps<ZombieBeachSurferProps>((Zombie *)in_x0);
    *in_x8 = (int)((float)*in_x8 + *(float *)(pZVar2 + 0x214));
  }
  return;
}


/* ZombieBeachSurfer::ShouldClipWithWater() const */

undefined8 __thiscall ZombieBeachSurfer::ShouldClipWithWater(ZombieBeachSurfer *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsControlled((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 != '\0')) {
    return 0;
  }
  uVar2 = Zombie::ShouldClipWithWater((Zombie *)this);
  return uVar2;
}

