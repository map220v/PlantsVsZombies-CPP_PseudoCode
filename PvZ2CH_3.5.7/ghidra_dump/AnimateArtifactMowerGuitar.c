// Class: AnimateArtifactMowerGuitar


/* AnimateArtifactMowerGuitar::PlayIdle(StandaloneEffect*) */

void AnimateArtifactMowerGuitar::PlayIdle(StandaloneEffect *param_1)

{
  (**(code **)(*(long *)param_1 + 0x98))(param_1,0);
  return;
}


/* AnimateArtifactMowerGuitar::~AnimateArtifactMowerGuitar() */

void __thiscall
AnimateArtifactMowerGuitar::~AnimateArtifactMowerGuitar(AnimateArtifactMowerGuitar *this)

{
  *(undefined ***)this = &PTR_GetClass_0669ba50;
  AnimateArtifactMower::~AnimateArtifactMower((AnimateArtifactMower *)this);
  return;
}


/* AnimateArtifactMowerGuitar::~AnimateArtifactMowerGuitar() */

void __thiscall
AnimateArtifactMowerGuitar::~AnimateArtifactMowerGuitar(AnimateArtifactMowerGuitar *this)

{
  ~AnimateArtifactMowerGuitar(this);
  AK::FreeHook(this);
  return;
}


/* AnimateArtifactMowerGuitar::AnimateArtifactMowerGuitar() */

void __thiscall
AnimateArtifactMowerGuitar::AnimateArtifactMowerGuitar(AnimateArtifactMowerGuitar *this)

{
  AnimateArtifactMower::AnimateArtifactMower((AnimateArtifactMower *)this);
  *(undefined ***)this = &PTR_GetClass_0669ba50;
  return;
}


/* AnimateArtifactMowerGuitar::StaticNew() */

AnimateArtifactMowerGuitar * AnimateArtifactMowerGuitar::StaticNew(void)

{
  AnimateArtifactMowerGuitar *this;
  
  this = ::operator_new(0x40);
  AnimateArtifactMowerGuitar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerGuitar::StaticClassInit() */

void AnimateArtifactMowerGuitar::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateArtifactMowerGuitar");
    (*pcVar2)(plVar1,asStack_10,FUN_037e3a90,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerGuitar::StaticGetClass() */

long * AnimateArtifactMowerGuitar::StaticGetClass(void)

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
  uVar2 = AnimateArtifactMower::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateArtifactMowerGuitar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerGuitar::GetClass() const */

long * AnimateArtifactMowerGuitar::GetClass(void)

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
  uVar2 = AnimateArtifactMower::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateArtifactMowerGuitar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerGuitar::PlayAnimation(ArtifactAnimState) */

void __thiscall
AnimateArtifactMowerGuitar::PlayAnimation(AnimateArtifactMowerGuitar *this,uint param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (param_2 == 0) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else if (param_2 == 1) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_18,"prepare");
      std::string::string(asStack_10,"ok");
      PVZ_EOT();
      Effect_PopAnim::PlaySingleAndLoopingAnimation(pEVar2,asStack_18,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
    }
    else if (param_2 == 2) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"trigger");
      Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else if (param_2 == 3) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"cooldown");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      Sexy::OutputDebugStrF
                ((wchar_t *)"AnimateArtifactMower::PlayAnimation() %d is invalid",(ulong)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerGuitar::Update(float) */

float AnimateArtifactMowerGuitar::Update(float param_1)

{
  char cVar1;
  WorldMapCamera *this;
  float extraout_s0;
  float fVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), param_1 = extraout_s0,
     cVar1 != '\0')) {
    this = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar2 = (float)WorldMapCamera::SetUseClipViewport(this,false);
    return fVar2;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerGuitar::Init(std::string) */

void __thiscall AnimateArtifactMowerGuitar::Init(AnimateArtifactMowerGuitar *this,Sexy *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  string *extraout_x1;
  string asStack_28 [8];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<ArtifactMowerGuitar_Effect>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::StringToUpper(param_2,extraout_x1);
  std::operator+("POPANIM_EFFECTS_",(string *)aRStack_18);
  std::string::~string((string *)aRStack_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar1) {
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GetPAMByName(asStack_28);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    iVar2 = 0;
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(pEVar3,true);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetKeepAlive(pSVar5,true);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)0x0,2,iVar2);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)(local_20 + -0x41),(float)(local_1c + -0x14),0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),(SexyVector3 *)aRStack_18);
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(float *)(this + 0x30) = 10.0 - (float)iVar2;
    }
    iVar2 = Board::MakeRenderOrder(0x64d48,2,0);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,*(float *)(this + 0x28),*(float *)(this + 0x2c),
               *(float *)(this + 0x30));
    StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)aRStack_18,iVar2);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetPopAnimDelegates(pEVar3);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerGuitar::Create() */

void AnimateArtifactMowerGuitar::Create(void)

{
  GameObject::Create<AnimateArtifactMowerGuitar>();
  return;
}

