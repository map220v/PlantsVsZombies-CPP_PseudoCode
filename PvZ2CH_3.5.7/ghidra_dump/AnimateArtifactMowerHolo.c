// Class: AnimateArtifactMowerHolo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerHolo::StaticClassInit() */

void AnimateArtifactMowerHolo::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateArtifactMowerHolo");
    (*pcVar2)(plVar1,asStack_10,FUN_04dc8970,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerHolo::StaticGetClass() */

long * AnimateArtifactMowerHolo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnimateArtifactMowerHolo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerHolo::GetClass() const */

long * AnimateArtifactMowerHolo::GetClass(void)

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
  (*pcVar3)(plVar1,"AnimateArtifactMowerHolo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerHolo::~AnimateArtifactMowerHolo() */

void __thiscall AnimateArtifactMowerHolo::~AnimateArtifactMowerHolo(AnimateArtifactMowerHolo *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4680;
  AnimateArtifactMower::~AnimateArtifactMower((AnimateArtifactMower *)this);
  return;
}


/* AnimateArtifactMowerHolo::~AnimateArtifactMowerHolo() */

void __thiscall AnimateArtifactMowerHolo::~AnimateArtifactMowerHolo(AnimateArtifactMowerHolo *this)

{
  ~AnimateArtifactMowerHolo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerHolo::Update(float) */

void AnimateArtifactMowerHolo::Update(float param_1)

{
  long in_x0;
  Effect_PopAnim *pEVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(int *)(in_x0 + 0x40) == 2) &&
     (fVar3 = *(float *)(in_x0 + 0x44), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
    *(undefined4 *)(in_x0 + 0x40) = 3;
    pEVar1 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38));
    std::string::string(asStack_10,"trigger_end");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerHolo::TriggerEndCallback(StandaloneEffect*) */

void AnimateArtifactMowerHolo::TriggerEndCallback(StandaloneEffect *param_1)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  ZombossSummonActionHandler *this;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x40) == 1) {
    *(undefined4 *)(param_1 + 0x40) = 2;
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
    std::string::string(asStack_10,"trigger_loop");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar1) {
      fVar3 = (float)PVZ_T();
      this = (ZombossSummonActionHandler *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      fVar4 = (float)ZombossSummonActionHandler::getStartSpawningTime(this);
      *(float *)(param_1 + 0x44) = fVar4 + fVar3;
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else if (*(int *)(param_1 + 0x40) == 3) {
    (**(code **)(*(long *)param_1 + 0x98))();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerHolo::Create() */

void AnimateArtifactMowerHolo::Create(void)

{
  GameObject::Create<AnimateArtifactMowerHolo>();
  return;
}


/* AnimateArtifactMowerHolo::AnimateArtifactMowerHolo() */

void __thiscall AnimateArtifactMowerHolo::AnimateArtifactMowerHolo(AnimateArtifactMowerHolo *this)

{
  undefined4 uVar1;
  
  AnimateArtifactMower::AnimateArtifactMower((AnimateArtifactMower *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_069c4680;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = uVar1;
  return;
}


/* AnimateArtifactMowerHolo::StaticNew() */

AnimateArtifactMowerHolo * AnimateArtifactMowerHolo::StaticNew(void)

{
  AnimateArtifactMowerHolo *this;
  
  this = ::operator_new(0x48);
  AnimateArtifactMowerHolo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerHolo::PlayAnimation(ArtifactAnimState) */

void __thiscall AnimateArtifactMowerHolo::PlayAnimation(AnimateArtifactMowerHolo *this,uint param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *pSVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (param_2 == 0) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      *(undefined4 *)(this + 0x40) = 0;
    }
    else if (param_2 == 2) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"trigger_start");
      Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"TriggerEndCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
                 asStack_58);
      StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      *(undefined4 *)(this + 0x40) = 1;
    }
    else if (param_2 == 3) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"cooldown");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      *(undefined4 *)(this + 0x40) = 4;
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

