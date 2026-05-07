// Class: GridItemArtifactSilverkeyGate


/* GridItemArtifactSilverkeyGate::CalcRenderOrder() const */

void __thiscall GridItemArtifactSilverkeyGate::CalcRenderOrder(GridItemArtifactSilverkeyGate *this)

{
  undefined4 uVar1;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  Board::MakeRenderOrder(0x65130,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemArtifactSilverkeyGate::CalcRenderOrder() const */

void __thiscall GridItemArtifactSilverkeyGate::CalcRenderOrder(GridItemArtifactSilverkeyGate *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::StaticClassInit() */

void GridItemArtifactSilverkeyGate::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactSilverkeyGate");
    (*pcVar2)(plVar1,asStack_10,FUN_0377a058,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactSilverkeyGate::StaticGetClass() */

long * GridItemArtifactSilverkeyGate::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactSilverkeyGate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactSilverkeyGate::GetClass() const */

long * GridItemArtifactSilverkeyGate::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactSilverkeyGate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactSilverkeyGate::SetAbsorbRadius(float) */

void __thiscall
GridItemArtifactSilverkeyGate::SetAbsorbRadius(GridItemArtifactSilverkeyGate *this,float param_1)

{
  *(float *)(this + 0x1d0) = param_1;
  return;
}


/* GridItemArtifactSilverkeyGate::SetPassiveField3Enable(bool) */

void __thiscall
GridItemArtifactSilverkeyGate::SetPassiveField3Enable
          (GridItemArtifactSilverkeyGate *this,bool param_1)

{
  this[500] = (GridItemArtifactSilverkeyGate)param_1;
  return;
}


/* GridItemArtifactSilverkeyGate::PlaySummonEffect() */

void __thiscall GridItemArtifactSilverkeyGate::PlaySummonEffect(GridItemArtifactSilverkeyGate *this)

{
  bool bVar1;
  SilverkeyGateEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x218));
  if (!bVar1) {
    return;
  }
  this_00 = (SilverkeyGateEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  SilverkeyGateEffect::PlaySummon(this_00);
  return;
}


/* GridItemArtifactSilverkeyGate::PlayWindEndEffect() */

void __thiscall
GridItemArtifactSilverkeyGate::PlayWindEndEffect(GridItemArtifactSilverkeyGate *this)

{
  bool bVar1;
  SilverkeyGateEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x218));
  if (!bVar1) {
    return;
  }
  this_00 = (SilverkeyGateEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  SilverkeyGateEffect::PlayEnd(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::PlayWindEffect() */

void __thiscall GridItemArtifactSilverkeyGate::PlayWindEffect(GridItemArtifactSilverkeyGate *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *this_01;
  CthulhuEyeballEffect *pCVar4;
  SilverkeyGateEffect *this_02;
  Point aPStack_30 [4];
  undefined4 local_2c;
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x218);
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_30);
  iVar1 = Board::MakeRenderOrder(0x65130,local_2c,0);
  Board::AddEffect<SilverkeyGateEffect>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_SILVERKEY_ABSORB");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar2,true);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(local_28 + 0x14),(float)(local_24 + -0x28),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_18,iVar1);
  pCVar4 = (CthulhuEyeballEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)asStack_20);
  CthulhuEyeballEffect::SetCthulhuEasyButton(pCVar4,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetPopAnimDelegates(pEVar2);
  this_02 = (SilverkeyGateEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  SilverkeyGateEffect::Start(this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::SetState(int) */

void __thiscall
GridItemArtifactSilverkeyGate::SetState(GridItemArtifactSilverkeyGate *this,int param_1)

{
  long extraout_x0;
  PopAnimRig *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_1) {
    *(int *)(this + 0x1a8) = param_1;
    switch(param_1) {
    case 0:
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"birth");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"OnPopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
                 (RtId *)aRStack_60,asStack_58);
      PopAnimRig::PlayAndStop
                (pPVar1,asStack_68,0,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId((RtId *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      break;
    case 1:
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      std::string::string(asStack_58,"loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
      PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      fVar2 = (float)PVZ_T();
      GridItem::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      nop();
      *(float *)(this + 0x1f8) = fVar2 + *(float *)(extraout_x0 + 0xd0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      PlayWindEffect(this);
      break;
    case 2:
      PlaySummonEffect(this);
      break;
    case 3:
      GridItemAnimation::GetAnimRig();
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"over");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"OnPopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
                 (RtId *)aRStack_60,asStack_58);
      PopAnimRig::PlayAndStop
                (pPVar1,asStack_68,0,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId((RtId *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      PlayWindEndEffect(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::onUpdate() */

void __thiscall GridItemArtifactSilverkeyGate::onUpdate(GridItemArtifactSilverkeyGate *this)

{
  int iVar1;
  bool bVar2;
  RtWeakPtr *this_00;
  long *plVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
  if (bVar2) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    (**(code **)(*plVar3 + 0x80))();
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1b8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x80))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x1f8) < fVar4) {
        if (this[500] == (GridItemArtifactSilverkeyGate)0x0) {
          SetState(this,3);
        }
        else {
          SetState(this,2);
        }
      }
    }
    else if (iVar1 == 4) {
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactSilverkeyGate::PlayEnd() */

void __thiscall GridItemArtifactSilverkeyGate::PlayEnd(GridItemArtifactSilverkeyGate *this)

{
  SetState(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::IsZombieBlacklisted(Sexy::RtWeakPtr<Zombie>,
   std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall
GridItemArtifactSilverkeyGate::IsZombieBlacklisted
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_037450a8(*param_3);
  uVar3 = FUN_037450f8(param_3[1]);
  local_18 = FUN_03766ca8(uVar2,uVar3,param_2);
  local_10 = FUN_037450f8(param_3[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::IsAbsorbTarget(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall
GridItemArtifactSilverkeyGate::IsAbsorbTarget
          (GridItemArtifactSilverkeyGate *this,RtWeakPtr *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  GameObject *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  Zombie *pZVar8;
  long lVar9;
  GridItemArtifactSilverkeyGateProps *pGVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  BoardEntity::CalcGridPosition();
  this_01 = (GameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = GameObject::IsDestroyed(this_01);
  if (cVar1 == '\0') {
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = RealObject::IsOnTeam(uVar5,2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = Creature::IsOnBoard();
      if (cVar1 != '\0') {
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar1 = (**(code **)(*plVar7 + 0x328))();
        if (cVar1 == '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
          cVar1 = (**(code **)(*plVar7 + 0x330))();
          if (cVar1 == '\0') {
            pZVar8 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
            cVar1 = Zombie::HasHead(pZVar8);
            if (cVar1 != '\0') {
              pZVar8 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
              iVar4 = Zombie::GetSizeType(pZVar8);
              if (iVar4 != 2) {
                pZVar8 = (Zombie *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                cVar1 = Zombie::IsControlled(pZVar8);
                if (cVar1 == '\0') {
                  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                  cVar1 = FUN_0373c80c(*(undefined4 *)(lVar9 + 0xcc));
                  if (cVar1 == '\0') {
                    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    cVar1 = Zombie::HasCondition(uVar5,0x2e);
                    if (cVar1 == '\0') {
                      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                      cVar1 = Zombie::HasCondition(uVar5,0x5a);
                      if (cVar1 == '\0') {
                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,
                                   (RtWeakPtrBase *)param_1);
                        pGVar10 = GridItem::GetProps<GridItemArtifactSilverkeyGateProps>();
                        cVar1 = IsZombieBlacklisted(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10
                                                    ,pGVar10 + 0xd8);
                        if (cVar1 == '\0') {
                          pZVar8 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = Zombie::IsOnBoardOrClose(pZVar8,1);
                          if (cVar1 == '\0') goto LAB_03766f70;
                          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = (**(code **)(*plVar7 + 0x338))();
                          if (cVar1 != '\0') goto LAB_03766f70;
                          pZVar8 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = Zombie::HasFogImmune(pZVar8);
                          if (cVar1 != '\0') goto LAB_03766f70;
                          pZVar8 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = Zombie::IsBerserk(pZVar8);
                          if (cVar1 != '\0') goto LAB_03766f70;
                          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = (**(code **)(*plVar7 + 0x4d8))();
                          if (cVar1 != '\0') goto LAB_03766f70;
                          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = (**(code **)(*plVar7 + 0x508))();
                          if (cVar1 != '\0') goto LAB_03766f70;
                          pZVar8 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          bVar3 = Zombie::IsParkourJumping(pZVar8);
                          bVar3 = bVar3 ^ 1;
                        }
                        else {
LAB_03766f70:
                          bVar3 = 0;
                        }
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
                        goto LAB_03766dc4;
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
  bVar3 = 0;
LAB_03766dc4:
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x200);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar5,uVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar2) {
    bVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* GridItemArtifactSilverkeyGate::DarkEffectFlyEnd(float) */

void GridItemArtifactSilverkeyGate::DarkEffectFlyEnd(float param_1)

{
  thunk_FUN_0376732c(gMessageRouter);
  return;
}


/* GridItemArtifactSilverkeyGate::GridItemArtifactSilverkeyGate() */

void __thiscall
GridItemArtifactSilverkeyGate::GridItemArtifactSilverkeyGate(GridItemArtifactSilverkeyGate *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06693900;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactSilverkeyGate_06693bb8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  *(undefined4 *)(this + 0x1d4) = 0;
  this[500] = (GridItemArtifactSilverkeyGate)0x0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1d0) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x1f0) = 4;
  *(undefined4 *)(this + 0x1f8) = uVar1;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x200));
  return;
}


/* GridItemArtifactSilverkeyGate::StaticNew() */

GridItemArtifactSilverkeyGate * GridItemArtifactSilverkeyGate::StaticNew(void)

{
  GridItemArtifactSilverkeyGate *this;
  
  this = ::operator_new(0x220);
  GridItemArtifactSilverkeyGate(this);
  return this;
}


/* GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate() */

void __thiscall
GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate(GridItemArtifactSilverkeyGate *this)

{
  *(undefined ***)this = &PTR_GetClass_06693900;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactSilverkeyGate_06693bb8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x200));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1d8));
  std::
  vector<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>>>
  ::~vector((vector<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>>>
             *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate() */

void __thiscall
GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate(GridItemArtifactSilverkeyGate *this)

{
  ~GridItemArtifactSilverkeyGate(this + -0x10);
  return;
}


/* GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate() */

void __thiscall
GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate(GridItemArtifactSilverkeyGate *this)

{
  ~GridItemArtifactSilverkeyGate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate() */

void __thiscall
GridItemArtifactSilverkeyGate::~GridItemArtifactSilverkeyGate(GridItemArtifactSilverkeyGate *this)

{
  ~GridItemArtifactSilverkeyGate(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::SpawnGargantuar(int) */

void __thiscall
GridItemArtifactSilverkeyGate::SpawnGargantuar(GridItemArtifactSilverkeyGate *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  string *psVar5;
  ZombieType *this_00;
  RealObject *pRVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  string asStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    iVar2 = 1;
    iVar1 = 0;
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_48,(vector *)(this + 0x1d8));
    lVar3 = FUN_03723dc4(local_48,local_40);
    lVar8 = 0;
    while (lVar8 != lVar3) {
      piVar4 = (int *)FUN_03724788(local_48,lVar8);
      if (*piVar4 < param_1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar8 = lVar8 + 1;
    }
    iVar1 = ClampInt(iVar1,0,(int)lVar8 + -1);
    iVar2 = *(int *)(this + 0x1f0);
    std::string::string(asStack_68,"silverkey_gargantuar");
    nop();
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    this_00 = (ZombieType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2b = 1;
    local_29 = 1;
    local_2c = 0;
    plVar9 = *(long **)(gLawnApp + 0x9f0);
    pcVar10 = *(code **)(*plVar9 + 0x318);
    local_30 = iVar1 + iVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_60);
    pRVar6 = (RealObject *)
             (*pcVar10)(plVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_58,0,
                        (RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    if (pRVar6 != (RealObject *)0x0) {
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_58 = *puVar7;
      local_50 = *(undefined4 *)(puVar7 + 1);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_58 = CONCAT44(local_58._4_4_,(float)iVar2 + (float)local_58);
      (**(code **)(*(long *)pRVar6 + 0x278))(pRVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_58);
      RealObject::JoinTeam(pRVar6,1);
      Zombie::SetFacing((Zombie *)pRVar6,1);
    }
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::~string(asStack_68);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactSilverkeyGate::SummonZombie() */

void __thiscall GridItemArtifactSilverkeyGate::SummonZombie(GridItemArtifactSilverkeyGate *this)

{
  SpawnGargantuar(this,*(int *)(this + 0x1fc));
  return;
}


/* GridItemArtifactSilverkeyGate::SetSpawnGargantuarLevelConditions(std::vector<int,
   std::allocator<int> >, int) */

void __thiscall
GridItemArtifactSilverkeyGate::SetSpawnGargantuarLevelConditions
          (GridItemArtifactSilverkeyGate *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 0x1f0) = param_3;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,void>
            ((vector<int,std::allocator<int>> *)(this + 0x1d8),uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::AbsorbTarget(Sexy::RtWeakPtr<Zombie>) */

void GridItemArtifactSilverkeyGate::AbsorbTarget
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4,RtWeakPtr<Sexy::ResourceInfo> *param_5)

{
  char cVar1;
  int iVar2;
  ZombieTosserSubSystem *pZVar3;
  undefined4 *puVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar5;
  ResourceInfo *pRVar6;
  undefined8 uVar7;
  RealObject *this_00;
  Board *this_01;
  float fVar8;
  float fVar9;
  ZombieTosserSubSystem *pZVar10;
  Zombie *pZVar11;
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  string asStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  puVar4 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  local_7c = puVar4[1];
  local_78 = puVar4[2];
  local_80 = *puVar4;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this);
  local_70 = *puVar5;
  local_68 = *(float *)(puVar5 + 1);
  local_60 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_70,(SexyVector3 *)&local_80);
  local_5c = param_2;
  local_58 = param_3;
  fVar8 = (float)DVec3::getLength((DVec3 *)&local_60);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if (fVar8 <= 0.0) {
    fVar8 = 0.1;
    pZVar11._0_4_ = (Zombie *)0x3d4ccccd;
  }
  else {
    fVar8 = fVar8 / ((float)iVar2 * 1.5);
    pZVar11._0_4_ = (Zombie *)(fVar8 * 0.5);
  }
  if (0.0 <= local_68) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    BoardEntity::CalcGridPosition();
    cVar1 = Board::IsShallowWater(this_01,(Point *)asStack_88);
    if (cVar1 == '\0') {
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_5);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
      std::string::string(asStack_88,"OnZombieTossEnd");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                (aRStack_50,aRStack_90,asStack_88);
      pZVar10._0_4_ = (ZombieTosserSubSystem *)0x3dcccccd;
    }
    else {
      this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
      fVar9 = (float)RealObject::CalcGroundZHeight(this_00,(SexyVector3 *)&local_80);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_5);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
      std::string::string(asStack_88,"OnZombieTossEnd");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                (aRStack_50,aRStack_90,asStack_88);
      pZVar10._0_4_ = (ZombieTosserSubSystem *)(fVar9 + 0.1);
    }
  }
  else {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_5);
    pZVar10._0_4_ = (ZombieTosserSubSystem *)(local_68 + 0.1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
    std::string::string(asStack_88,"OnZombieTossEnd");
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
              (aRStack_50,aRStack_90,asStack_88);
  }
  ZombieTosserSubSystem::LaunchZombieOriginalZHeight
            (pZVar10._0_4_,fVar8,pZVar3,pRVar6,(SexyVector3 *)&local_80,
             (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_88);
  nop();
  Sexy::RtId::~RtId(aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  Zombie::ApplyCondition(pZVar11._0_4_,0,uVar7,0x40,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,(RtWeakPtrBase *)aRStack_90);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_4 + 0x200),(RtWeakPtr *)asStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::PlayDarkEffect(Sexy::SexyVector2 const&) */

void __thiscall
GridItemArtifactSilverkeyGate::PlayDarkEffect
          (GridItemArtifactSilverkeyGate *this,SexyVector2 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *extraout_x0;
  char *pcVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  code *pcVar6;
  float fVar7;
  FastCurve aFStack_88 [8];
  FastCurve aFStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  FastCurve aFStack_70 [8];
  Point aPStack_68 [4];
  undefined4 local_64;
  int local_60;
  int local_5c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined4 local_50;
  float local_4c;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03728aac(0);
  Sexy::FastCurve::SetOutRange(aFStack_88,(float)iVar1,(float)iVar1);
  iVar1 = FUN_03728ae0();
  Sexy::FastCurve::SetOutRange(aFStack_80,(float)iVar1,(float)iVar1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_78)
  ;
  local_78 = 0x43480000;
  local_74 = 0x43200000;
  fVar7 = 160.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  Sexy::FastCurve::SetOutRange
            (aFStack_70,200.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),fVar7);
  uVar3 = AddCthulhuEnergyEffect::StaticGetClass();
  GameObject::Create(uVar3,0x27);
  nop();
  pcVar6 = *(code **)(*extraout_x0 + 0x88);
  local_50 = Sexy::SexyVector2::operator+(param_1,(SexyVector2 *)aFStack_88);
  local_4c = fVar7;
  (*pcVar6)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  pcVar6 = *(code **)(*extraout_x0 + 0x90);
  local_50 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_78,(SexyVector2 *)aFStack_80);
  local_4c = fVar7;
  (*pcVar6)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  pcVar6 = *(code **)(*extraout_x0 + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DarkEffectFlyEnd);
  Sexy::Delegate1<float>::
  Delegate1<GridItemArtifactSilverkeyGate,void(GridItemArtifactSilverkeyGate::*)(float)>
            (aDStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  (*pcVar6)(extraout_x0,aDStack_38);
  (**(code **)(*extraout_x0 + 0x78))(extraout_x0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_58);
  std::
  vector<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>>>
  ::push_back((vector<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddCthulhuEnergyEffect>>>
               *)(this + 0x1b8),(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_PVP_Battle_Get_Energy");
  BoardEntity::CalcGridPosition();
  uVar2 = Board::MakeRenderOrder(0x65130,local_64,0);
  BoardTransforms::GridToBoardSpace(aPStack_68);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aRStack_58,"POPANIM_EFFECTS_ARTIFACT_SILVERKEY_ABSORB");
  GetPAMByName((string *)aRStack_58);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::string::~string((string *)aRStack_58);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)&local_50,(float)local_60,(float)(local_5c + -0x78),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_50,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  FUN_03723aa0(this_00 + 0x1c,uVar2);
  std::string::string((string *)&local_50,"absorb");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_50,0);
  std::string::~string((string *)&local_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::OnZombieTossEnd(Zombie*) */

void __thiscall
GridItemArtifactSilverkeyGate::OnZombieTossEnd(GridItemArtifactSilverkeyGate *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x200);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar3,uVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      Zombie::TakeFatalDamage(param_1,(BoardEntity *)0x0);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
                 local_10);
      fVar6 = *(float *)(this + 0x1c);
      local_10._0_4_ = FUN_03726f28(*(undefined4 *)(this + 0x18),fVar6,*(undefined4 *)(this + 0x20))
      ;
      local_10._4_4_ = fVar6;
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar6 = local_10._4_4_ - (float)iVar2;
      local_10._4_4_ = fVar6;
      uVar5 = FUN_03728ac0((undefined4)local_10);
      local_10 = CONCAT44(local_10._4_4_,uVar5);
      uVar5 = FUN_03728ac0(fVar6);
      local_10 = CONCAT44(uVar5,(undefined4)local_10);
      PlayDarkEffect(this,(SexyVector2 *)&local_10);
      *(int *)(this + 0x1fc) = *(int *)(this + 0x1fc) + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::FindTarget(Sexy::TRect<int>, int) */

void GridItemArtifactSilverkeyGate::FindTarget
               (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *param_1
               ,GridItemArtifactSilverkeyGate *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardEntity::CalcGridPosition();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)local_60,local_78,local_74 + -1,iVar3 - local_78,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
             (Insets *)local_60);
  uVar5 = local_50;
  uVar4 = FUN_03724708(local_50,local_48);
  if (uVar4 != 0) {
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
      FUN_03724714(uVar5,uVar7);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_68);
      if ((bVar1) && (cVar2 = IsAbsorbTarget(param_2,(RtWeakPtr *)aRStack_68), cVar2 != '\0')) {
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   &local_38,(RtWeakPtr *)aRStack_68);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      uVar5 = local_50;
      uVar4 = FUN_03724708(local_50,local_48);
    }
  }
  BoardEntity::CalcGridPosition();
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_38);
  Sexy::Point::Point((Point *)aRStack_68,local_70,local_6c + -1);
  EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
            ((BoardEntitySorter_Closest *)local_60,(Point *)aRStack_68);
  std::
  sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,EntityFinder::BoardEntitySorter_Closest>
            (uVar5,uVar6,(Insets *)local_60);
  uVar4 = FUN_03724760(local_38,local_30);
  if ((ulong)(long)param_4 < uVar4) {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_38);
    uVar6 = __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)local_60,(long)param_4);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
    assign<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,void>
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)avStack_20
               ,uVar5,uVar6);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,(vector *)avStack_20);
  }
  else {
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,(vector *)&local_38);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)avStack_20);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGate::AbsorbZombies() */

void __thiscall GridItemArtifactSilverkeyGate::AbsorbZombies(GridItemArtifactSilverkeyGate *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  RtWeakPtrBase *pRVar8;
  float fVar9;
  float fVar10;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  *(undefined4 *)(this + 0x1fc) = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x200));
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar10 = *pfVar6;
  fVar9 = pfVar6[1];
  BoardEntity::CalcGridPosition();
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (aIStack_40,(int)fVar10,(int)fVar9 - iVar3,iVar4 * (iVar2 - local_58),iVar5 * 3);
  Sexy::Insets::Insets(aIStack_30,aIStack_40);
  FindTarget((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20,
             this,aIStack_30,*(undefined4 *)(this + 0x1d4));
  lVar7 = FUN_03724760(local_20,local_18);
  if (lVar7 != 0) {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      pRVar8 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,pRVar8);
      AbsorbTarget(this,aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemArtifactSilverkeyGate::OnPopAnimDone(std::string const&) */

void __thiscall
GridItemArtifactSilverkeyGate::OnPopAnimDone(GridItemArtifactSilverkeyGate *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"birth");
  if (bVar1) {
    SetState(this,1);
    AbsorbZombies(this);
    return;
  }
  bVar1 = std::operator==(param_1,"over");
  if (!bVar1) {
    return;
  }
  SetState(this,4);
  return;
}


/* GridItemArtifactSilverkeyGate::onGridItemInitialize() */

void __thiscall
GridItemArtifactSilverkeyGate::onGridItemInitialize(GridItemArtifactSilverkeyGate *this)

{
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  SetState(this,0);
  return;
}

