// Class: AnimateArtifactMowerSoulBell


/* AnimateArtifactMowerSoulBell::TriggerEndCallback(StandaloneEffect*) */

void AnimateArtifactMowerSoulBell::TriggerEndCallback(StandaloneEffect *param_1)

{
  if (*(int *)(param_1 + 0x40) != 1) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x98))(param_1,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerSoulBell::StaticClassInit() */

void AnimateArtifactMowerSoulBell::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateArtifactMowerSoulBell");
    (*pcVar2)(plVar1,asStack_10,FUN_04dc8e88,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerSoulBell::StaticGetClass() */

long * AnimateArtifactMowerSoulBell::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnimateArtifactMowerSoulBell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerSoulBell::GetClass() const */

long * AnimateArtifactMowerSoulBell::GetClass(void)

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
  (*pcVar3)(plVar1,"AnimateArtifactMowerSoulBell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerSoulBell::~AnimateArtifactMowerSoulBell() */

void __thiscall
AnimateArtifactMowerSoulBell::~AnimateArtifactMowerSoulBell(AnimateArtifactMowerSoulBell *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4950;
  AnimateArtifactMower::~AnimateArtifactMower((AnimateArtifactMower *)this);
  return;
}


/* AnimateArtifactMowerSoulBell::~AnimateArtifactMowerSoulBell() */

void __thiscall
AnimateArtifactMowerSoulBell::~AnimateArtifactMowerSoulBell(AnimateArtifactMowerSoulBell *this)

{
  ~AnimateArtifactMowerSoulBell(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerSoulBell::PlayAnimation(ArtifactAnimState) */

void __thiscall
AnimateArtifactMowerSoulBell::PlayAnimation(AnimateArtifactMowerSoulBell *this,uint param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  UIWidget *this_01;
  PopAnimRig *this_02;
  float fVar3;
  float fVar4;
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
      *(undefined4 *)(this + 0x40) = 0xffffffff;
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
      std::string::string(asStack_18,"trigger");
      std::string::string(asStack_10,"trigger03");
      PVZ_EOT();
      Effect_PopAnim::PlaySingleAndLoopingAnimation(pEVar2,asStack_18,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      fVar3 = (float)PVZ_T();
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
      std::string::string(asStack_10,"trigger1");
      fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(this_02,asStack_10);
      *(float *)(this + 0x44) = fVar3 + fVar4 + 2.3;
      std::string::~string(asStack_10);
      nop();
      *(undefined4 *)(this + 0x40) = 0;
    }
    else if (param_2 == 3) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"cooldown");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      *(undefined4 *)(this + 0x40) = 2;
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


/* AnimateArtifactMowerSoulBell::Create() */

void AnimateArtifactMowerSoulBell::Create(void)

{
  GameObject::Create<AnimateArtifactMowerSoulBell>();
  return;
}


/* AnimateArtifactMowerSoulBell::AnimateArtifactMowerSoulBell() */

void __thiscall
AnimateArtifactMowerSoulBell::AnimateArtifactMowerSoulBell(AnimateArtifactMowerSoulBell *this)

{
  undefined4 uVar1;
  
  AnimateArtifactMower::AnimateArtifactMower((AnimateArtifactMower *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_069c4950;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = uVar1;
  return;
}


/* AnimateArtifactMowerSoulBell::StaticNew() */

AnimateArtifactMowerSoulBell * AnimateArtifactMowerSoulBell::StaticNew(void)

{
  AnimateArtifactMowerSoulBell *this;
  
  this = ::operator_new(0x48);
  AnimateArtifactMowerSoulBell(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerSoulBell::Update(float) */

void AnimateArtifactMowerSoulBell::Update(float param_1)

{
  long in_x0;
  Effect_PopAnim *pEVar1;
  StandaloneEffect *pSVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(int *)(in_x0 + 0x40) == 0) &&
     (fVar5 = *(float *)(in_x0 + 0x44), fVar3 = (float)PVZ_T(), fVar5 < fVar3)) {
    *(undefined4 *)(in_x0 + 0x40) = 1;
    pEVar1 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38));
    std::string::string(asStack_58,"trigger02");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
    uVar4 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x44) = uVar4;
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"TriggerEndCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
               asStack_58);
    StandaloneEffect::SetCompletionCallback(pSVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

