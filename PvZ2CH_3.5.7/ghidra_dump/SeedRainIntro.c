// Class: SeedRainIntro


/* SeedRainIntro::OnGameplayStarted() */

void SeedRainIntro::OnGameplayStarted(void)

{
  return;
}


/* SeedRainIntro::onNarrationFinished() */

void SeedRainIntro::onNarrationFinished(void)

{
  return;
}


/* SeedRainIntro::OnLevelEnded() */

void __thiscall SeedRainIntro::OnLevelEnded(SeedRainIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* SeedRainIntro::initializeModule() */

void __thiscall SeedRainIntro::initializeModule(SeedRainIntro *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  uVar1 = PVZ_EOT();
  this[300] = (SeedRainIntro)0x0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x120) = uVar1;
  *(undefined4 *)(this + 0x124) = uVar1;
  return;
}


/* SeedRainIntro::isInState(SDIState) const */

bool __thiscall SeedRainIntro::isInState(SeedRainIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e50e1c(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* SeedRainIntro::getSeedRainIntroStateSerialization() */

void __thiscall SeedRainIntro::getSeedRainIntroStateSerialization(SeedRainIntro *this)

{
  FUN_03e50e1c(*(undefined4 *)(this + 0x50));
  return;
}


/* SeedRainIntro::OnUpdate() */

void __thiscall SeedRainIntro::OnUpdate(SeedRainIntro *this)

{
  StateMachine<SDIState>::UpdateState((StateMachine<SDIState> *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::onZombieSpawned(Zombie*) */

void __thiscall SeedRainIntro::onZombieSpawned(SeedRainIntro *this,Zombie *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar3 + 8),"iceage_walrus");
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118),(RtWeakPtrBase *)aRStack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
      *(undefined4 *)(this + 0x128) = uVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::AddCollectableSeedRain(std::string const&) */

void SeedRainIntro::AddCollectableSeedRain(string *param_1)

{
  int iVar1;
  Collectable *this;
  string *extraout_x0;
  string *psVar2;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  float local_48 [4];
  Vec3 aVStack_38 [16];
  DVec3 aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_58);
  local_58 = 4;
  local_54 = 2;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_58,(Point *)0x2);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)local_48,(float)local_50,(float)local_4c - (float)iVar1 * 0.5,0.0);
  EATextSquish::Vec3::Vec3(aVStack_38,local_48[0] - 50.0,-50.0,0.0);
  psVar2 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"seed_rain");
  this = (Collectable *)Board::AddCollectableWithDefaultMotion(psVar2,(SexyVector3 *)asStack_18);
  std::string::~string(asStack_18);
  nop();
  nop();
  CollectableSeedRain::SetPlantSeedType(extraout_x0);
  Sexy::Point::Point((Point *)asStack_18,(TPoint *)&local_58);
  CollectableSeedRain::SetTargetGrid((CollectableSeedRain *)extraout_x0,asStack_18);
  DVec3::DVec3(aDStack_28);
  DVec3::DVec3((DVec3 *)asStack_18);
  switch(local_54) {
  case 0:
    CalculateTossVelocity
              ((SexyVector3 *)aVStack_38,(SexyVector3 *)local_48,10.0,2.0,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)asStack_18);
    break;
  case 1:
    CalculateTossVelocity
              ((SexyVector3 *)aVStack_38,(SexyVector3 *)local_48,10.0,2.5,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)asStack_18);
    break;
  case 2:
    CalculateTossVelocity
              ((SexyVector3 *)aVStack_38,(SexyVector3 *)local_48,10.0,3.0,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)asStack_18);
    break;
  case 3:
    CalculateTossVelocity
              ((SexyVector3 *)aVStack_38,(SexyVector3 *)local_48,10.0,3.5,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)asStack_18);
    break;
  default:
    CalculateTossVelocity
              ((SexyVector3 *)aVStack_38,(SexyVector3 *)local_48,10.0,4.0,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)asStack_18);
  }
  Collectable::SetMotionNewtonian(this,(SexyVector3 *)aDStack_28,(SexyVector3 *)asStack_18,true);
  Collectable::SetKeepOnBoard(this,true);
  Collectable::SetNeverExpire(this,true);
  Collectable::SetDisableTouch(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::onEnterState_AcornIntro(SDIState) */

void SeedRainIntro::onEnterState_AcornIntro(string *param_1)

{
  bool bVar1;
  float fVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  param_1[300] = (string)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"acorn");
  AddCollectableSeedRain(param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x110),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  fVar2 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x124) = fVar2 + 3.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::onEnterState_DaveIntro(SDIState) */

void SeedRainIntro::onEnterState_DaveIntro(ReceivedDataCallback *param_1)

{
  bool bVar1;
  CrazyNPCManager *pCVar2;
  float fVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"SEEDRAIN_DAVE_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onNarrationFinished);
  Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>(aDStack_38,aRStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar2,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_58,"firepeashooter");
  AddCollectableSeedRain((string *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x108),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x120) = fVar3 + 3.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainIntro::SeedRainIntro() */

void __thiscall SeedRainIntro::SeedRainIntro(SeedRainIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678bd50;
  StateMachine<SDIState>::StateMachine((StateMachine<SDIState> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  return;
}


/* SeedRainIntro::StaticNew() */

SeedRainIntro * SeedRainIntro::StaticNew(void)

{
  SeedRainIntro *this;
  
  this = ::operator_new(0x130);
  SeedRainIntro(this);
  return this;
}


/* SeedRainIntro::clearBouncingArrows() */

void __thiscall SeedRainIntro::clearBouncingArrows(SeedRainIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xf0);
    uVar2 = FUN_03e50e20(uVar4,*(undefined8 *)(this + 0xf8));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e50e2c(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0xf0));
  return;
}


/* SeedRainIntro::~SeedRainIntro() */

void __thiscall SeedRainIntro::~SeedRainIntro(SeedRainIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678bd50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0xf0));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* SeedRainIntro::~SeedRainIntro() */

void __thiscall SeedRainIntro::~SeedRainIntro(SeedRainIntro *this)

{
  ~SeedRainIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SeedRainIntro::AddResourceRequirements(SeedRainIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantAcorn");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall SeedRainIntro::addBouncingArrow(SeedRainIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ade8b0);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0xf0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::onEnterState_FirepeashooterIntro(SDIState) */

void SeedRainIntro::onEnterState_FirepeashooterIntro(SeedRainIntro *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  Collectable *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  undefined4 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  FastCurve aFStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x108);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_00 = (Collectable *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Collectable::SetDisableTouch(this_00,false);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    fVar5 = (float)FUN_03e51094(*puVar3);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var2);
    fVar6 = (float)FUN_03e51094(*(undefined4 *)(lVar4 + 4));
    Sexy::FastCurve::SetOutRange(aFStack_10,fVar5,fVar6);
    addBouncingArrow(param_1,(SexyVector2 *)aFStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::updateState_FirepeashooterIntro() */

void __thiscall SeedRainIntro::updateState_FirepeashooterIntro(SeedRainIntro *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RtObject *this_00;
  CollectableSeedRain *this_01;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x108));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
    this_01 = Sexy::RtObject::Cast<CollectableSeedRain>(this_00);
    if ((this_01 != (CollectableSeedRain *)0x0) &&
       (cVar2 = CollectableSeedRain::GetIsSelect(this_01), cVar2 != '\0')) {
      clearBouncingArrows(this);
      BoardTransforms::GridToBoardSpaceX(0);
      iVar3 = FUN_03e51080();
      iVar4 = BoardTransforms::GridToBoardSpaceY(2);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar4 = FUN_03e51080(iVar4 - iVar5 / 2);
      Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar3,(float)iVar4);
      addBouncingArrow(this,(SexyVector2 *)aFStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::updateState_AcornIntro() */

void __thiscall SeedRainIntro::updateState_AcornIntro(SeedRainIntro *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RtObject *this_01;
  CollectableSeedRain *this_02;
  long lVar6;
  CrazyNPCManager *pCVar7;
  Collectable *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  undefined4 *puVar9;
  Board *this_04;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  if ((*(float *)(this + 0x124) < fVar10) &&
     (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00), bVar1)) {
    uVar11 = PVZ_EOT();
    *(undefined4 *)(this + 0x124) = uVar11;
    pCVar7 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"SEEDRAIN_ACORN_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>
              (aDStack_38,(FastCurve *)asStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar7,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    this_03 = (Collectable *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Collectable::SetDisableTouch(this_03,false);
    p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    puVar9 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var8);
    fVar10 = (float)FUN_03e51094(*puVar9);
    p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var8);
    fVar12 = (float)FUN_03e51094(*(undefined4 *)(lVar6 + 4));
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_50,fVar10,fVar12);
    addBouncingArrow(this,(SexyVector2 *)asStack_50);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_02 = Sexy::RtObject::Cast<CollectableSeedRain>(this_01);
    if ((this_02 != (CollectableSeedRain *)0x0) &&
       (cVar2 = CollectableSeedRain::GetIsSelect(this_02), cVar2 != '\0')) {
      clearBouncingArrows(this);
      for (iVar4 = 0; iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar4 < iVar3; iVar4 = iVar4 + 1)
      {
        iVar3 = *(int *)(this + 0x128);
        this_04 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_50,"");
        lVar6 = Board::GetPlantAt(this_04,iVar4,iVar3,asStack_50);
        std::string::~string(asStack_50);
        nop();
        if (lVar6 == 0) {
          BoardTransforms::GridToBoardSpaceX(iVar4);
          iVar4 = FUN_03e51080();
          iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x128));
          iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar3 = FUN_03e51080(iVar3 - iVar5 / 2);
          Sexy::FastCurve::SetOutRange((FastCurve *)asStack_50,(float)iVar4,(float)iVar3);
          addBouncingArrow(this,(SexyVector2 *)asStack_50);
          break;
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::registerForEvents() */

void __thiscall SeedRainIntro::registerForEvents(SeedRainIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03e50dfc(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnGameplayStarted);
    Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantPlanted);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<SeedRainIntro,void(SeedRainIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantPlanted,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieSpawned);
    local_b0 = local_50;
    uStack_a8 = uStack_48;
    local_a0 = local_40;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SeedRainIntro,void(SeedRainIntro::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_b0);
  }
  else {
    StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::StaticClassInit() */

void SeedRainIntro::StaticClassInit(void)

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
  Delegate1<SDIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SDIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"SeedRainIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e531ec,0x130,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<SDIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SDIState_DaveIntro");
  StateDefinition<SDIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e52c44(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SDIState_FirepeashooterIntro");
  StateDefinition<SDIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e52c44(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SDIState_GamePlaying");
  StateDefinition<SDIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e52c44(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<SDIState>::Delegate1<SeedRainIntro,void(SeedRainIntro::*)(SDIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SDIState_AcornIntro");
  StateDefinition<SDIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e52c44(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedRainIntro::StaticGetClass() */

long * SeedRainIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"SeedRainIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::setState(SDIState) */

void __thiscall SeedRainIntro::setState(SeedRainIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SDIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SDIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SDIState>::GetStateDefinition
                     ((StateMachineTable<SDIState> *)pSVar2,param_2);
  StateDefinition<SDIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SDIState>::SetContext(aSStack_a8,this);
  StateMachine<SDIState>::SetState
            ((StateMachine<SDIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainIntro::OnIntroStarted() */

void __thiscall SeedRainIntro::OnIntroStarted(SeedRainIntro *this)

{
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::onPlantPlanted(Plant*) */

void __thiscall SeedRainIntro::onPlantPlanted(SeedRainIntro *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    cVar1 = isInState(this,3);
    if ((cVar1 == '\0') || (param_1 == (Plant *)0x0)) goto LAB_03e53bbc;
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator==((string *)(lVar3 + 8),"acorn");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (!bVar2) goto LAB_03e53bbc;
  }
  else {
    StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  }
  clearBouncingArrows(this);
  setState(this,2);
LAB_03e53bbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainIntro::updateState_DaveIntro() */

void __thiscall SeedRainIntro::updateState_DaveIntro(SeedRainIntro *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x120)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x120) = uVar2;
  setState(this,1);
  return;
}


/* SeedRainIntro::updateState_GamePlaying() */

void __thiscall SeedRainIntro::updateState_GamePlaying(SeedRainIntro *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  if ((cVar1 != '\0') && (this[300] == (SeedRainIntro)0x0)) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    if (*pfVar2 <= 747.0) {
      setState(this,3);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntro::setSeedRainIntroStateSerialization(int) */

void __thiscall SeedRainIntro::setSeedRainIntroStateSerialization(SeedRainIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SDIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 4) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<SDIState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<SDIState>::GetStateDefinition
                       ((StateMachineTable<SDIState> *)pSVar2,param_1);
    StateDefinition<SDIState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<SDIState>::SetContext(aSStack_a8,this);
    StateMachine<DPEState>::SetStateNoTransition
              ((StateMachine<DPEState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

