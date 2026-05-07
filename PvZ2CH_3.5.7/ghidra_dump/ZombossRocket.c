// Class: ZombossRocket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::StaticClassInit() */

void ZombossRocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRocket");
    (*pcVar2)(plVar1,asStack_10,FUN_04741020,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRocket::StaticGetClass() */

long * ZombossRocket::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRocket::GetClass() const */

long * ZombossRocket::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRocket::IsFalling() */

void __thiscall ZombossRocket::IsFalling(ZombossRocket *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xc0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::isInvulnerablePlantInTargetSquare() const */

void __thiscall ZombossRocket::isInvulnerablePlantInTargetSquare(ZombossRocket *this)

{
  undefined1 uVar1;
  long lVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(this + 0xb0),*(int *)(this + 0xb4));
  lVar2 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlantGroup::HasPlantfoodedPlant();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombossRocket::ZombossRocket() */

void __thiscall ZombossRocket::ZombossRocket(ZombossRocket *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_068c6910;
  *(undefined ***)(this + 0x10) = &PTR__ZombossRocket_068c6af8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  Sexy::Point::Point((Point *)(this + 0xb0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xb8) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  return;
}


/* ZombossRocket::StaticNew() */

ZombossRocket * ZombossRocket::StaticNew(void)

{
  ZombossRocket *this;
  
  this = ::operator_new(0xd0);
  ZombossRocket(this);
  return this;
}


/* ZombossRocket::~ZombossRocket() */

void __thiscall ZombossRocket::~ZombossRocket(ZombossRocket *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6910;
  *(undefined ***)(this + 0x10) = &PTR__ZombossRocket_068c6af8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ZombossRocket::~ZombossRocket() */

void __thiscall ZombossRocket::~ZombossRocket(ZombossRocket *this)

{
  ~ZombossRocket(this + -0x10);
  return;
}


/* ZombossRocket::~ZombossRocket() */

void __thiscall ZombossRocket::~ZombossRocket(ZombossRocket *this)

{
  ~ZombossRocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombossRocket::~ZombossRocket() */

void __thiscall ZombossRocket::~ZombossRocket(ZombossRocket *this)

{
  ~ZombossRocket(this + -0x10);
  return;
}


/* ZombossRocket::onDestroy() */

void __thiscall ZombossRocket::onDestroy(ZombossRocket *this)

{
  bool bVar1;
  ZombieZombossMech *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (!bVar1) {
    return;
  }
  this_00 = (ZombieZombossMech *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  ZombieZombossMech::OnRocketDestroyed(this_00,this);
  return;
}


/* ZombossRocket::FadeOutCrosshairEffect() */

void __thiscall ZombossRocket::FadeOutCrosshairEffect(ZombossRocket *this)

{
  bool bVar1;
  Effect_ZombossCrosshair *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
  if (!bVar1) {
    return;
  }
  this_00 = (Effect_ZombossCrosshair *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Effect_ZombossCrosshair::StartOutro(this_00,1.0,1.7,180.0);
  return;
}


/* ZombossRocket::CounterCrosshairEffect() */

void __thiscall ZombossRocket::CounterCrosshairEffect(ZombossRocket *this)

{
  bool bVar1;
  Effect_ZombossCrosshair *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
  if (!bVar1) {
    return;
  }
  this_00 = (Effect_ZombossCrosshair *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Effect_ZombossCrosshair::StartOutro(this_00,0.618,1.7,0.0);
  return;
}


/* ZombossRocket::CounterRocketEffect() */

void __thiscall ZombossRocket::CounterRocketEffect(ZombossRocket *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xc0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* ZombossRocket::CounterRocket() */

void __thiscall ZombossRocket::CounterRocket(ZombossRocket *this)

{
  bool bVar1;
  long *plVar2;
  
  CounterCrosshairEffect(this);
  CounterRocketEffect(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    (**(code **)(*plVar2 + 0xaa0))(plVar2,this);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::InitializeRocketController(ZombieZombossMech const*, Sexy::Point const&) */

void __thiscall
ZombossRocket::InitializeRocketController
          (ZombossRocket *this,ZombieZombossMech *param_1,Point *param_2)

{
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (ZombieZombossMech *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)param_2;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xb8) = fVar1 + 20.0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRocket::onUpdate() */

void __thiscall ZombossRocket::onUpdate(ZombossRocket *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xb8) < fVar1) {
    FadeOutCrosshairEffect(this);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::StartCrosshairEffect(std::string const&, std::string const&) */

void __thiscall
ZombossRocket::StartCrosshairEffect(ZombossRocket *this,string *param_1,string *param_2)

{
  Effect_ZombossCrosshair *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_ZombossCrosshair>(*(Board **)(gLawnApp + 0x9f0));
  Effect_ZombossCrosshair::InitializeCrosshair
            (this_00,(Point *)(this + 0xb0),param_1,param_2,1.7,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 200),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::StartRocketEffect(std::string const&, std::string const&, float, float) */

void __thiscall
ZombossRocket::StartRocketEffect
          (ZombossRocket *this,string *param_1,string *param_2,float param_3,float param_4)

{
  Effect_ZombossRocket *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_ZombossRocket>(*(Board **)(gLawnApp + 0x9f0));
  Effect_ZombossRocket::InitializeRocket
            (this_00,this,(Point *)(this + 0xb0),param_1,param_2,param_3,param_4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xc0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::CreateExplosionEffect(std::string const&, std::string const&) */

void __thiscall
ZombossRocket::CreateExplosionEffect(ZombossRocket *this,string *param_1,string *param_2)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  Point *extraout_x1;
  int local_28;
  int local_24;
  TPoint aTStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  Effect_PopAnim::SetCentered(this_00,true);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xb0),extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_28,aTStack_20);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,0x64961);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRocket::OnRocketHitGround() */

void __thiscall ZombossRocket::OnRocketHitGround(ZombossRocket *this)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInvulnerablePlantInTargetSquare(this);
  if (cVar1 == '\0') {
    FadeOutCrosshairEffect(this);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
    if (bVar2) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      (**(code **)(*plVar4 + 0xa98))(plVar4,this);
    }
    else {
      Board::KillPlantNotInvincibleAt
                (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0xb0),*(int *)(this + 0xb4),true);
      std::string::string(asStack_18,"POPANIM_EFFECTS_SINGLEHANDED_MISSILE_EXPLOSION");
      std::string::string(asStack_10,"missile_explosion");
      CreateExplosionEffect(this,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_Zomb_Future_Zomboss_Attack_Projectile_Impact");
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    CounterRocket(this);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_Zomb_Future_Zomboss_Attack_Projectile_NoDamage");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

