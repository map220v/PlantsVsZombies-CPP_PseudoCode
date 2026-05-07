// Class: EffectObject_DamageOverTime


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTime::StaticClassInit() */

void EffectObject_DamageOverTime::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_DamageOverTime");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd9330,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DamageOverTime::StaticGetClass() */

long * EffectObject_DamageOverTime::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DamageOverTime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DamageOverTime::GetClass() const */

long * EffectObject_DamageOverTime::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DamageOverTime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DamageOverTime::determineAndGetNextState() const */

undefined4 __thiscall
EffectObject_DamageOverTime::determineAndGetNextState(EffectObject_DamageOverTime *this)

{
  char cVar1;
  undefined4 uVar2;
  EffectObject_DamageOverTimeProps *pEVar3;
  
  pEVar3 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
  cVar1 = FUN_0547419c(pEVar3 + 0x30);
  if ((cVar1 != '\0') || (uVar2 = 0, -1 < *(int *)(this + 0x120))) {
    cVar1 = FUN_0547419c(pEVar3 + 0x38);
    if ((cVar1 == '\0') && (*(int *)(this + 0x120) < 1)) {
      uVar2 = 1;
    }
    else {
      cVar1 = FUN_0547419c(pEVar3 + 0x40);
      uVar2 = 0xffffffff;
      if ((cVar1 == '\0') && (uVar2 = 2, 1 < *(int *)(this + 0x120))) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


/* EffectObject_DamageOverTime::calculateTargetingRect() const */

void EffectObject_DamageOverTime::calculateTargetingRect(void)

{
  StandaloneEffect *in_x0;
  EffectObject_DamageOverTimeProps *pEVar1;
  Insets *in_x8;
  float fVar2;
  float in_s1;
  
  pEVar1 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
  fVar2 = (float)StandaloneEffect::GetBoardSpaceOrigin(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pEVar1 + 0x5c));
  *(int *)in_x8 = (int)((float)*(int *)in_x8 + fVar2);
  *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) + in_s1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTime::getDamageTypeFlags() const */

void EffectObject_DamageOverTime::getDamageTypeFlags(void)

{
  EffectObject_DamageOverTimeProps *pEVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_10;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  pEVar1 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
  uVar5 = *(undefined8 *)(pEVar1 + 0x70);
  local_10 = 0;
  uVar2 = FUN_03cd8f74(uVar5,*(undefined8 *)(pEVar1 + 0x78));
  if (uVar2 != 0) {
    do {
      puVar3 = (ulong *)FUN_03cd8f9c(uVar5,uVar4);
      if (*puVar3 != 0) {
        operator|=(&local_10,1L << (*puVar3 & 0x3f));
        uVar5 = *(undefined8 *)(pEVar1 + 0x70);
        uVar2 = FUN_03cd8f74(uVar5,*(undefined8 *)(pEVar1 + 0x78));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10);
  }
  return;
}


/* EffectObject_DamageOverTime::createDamageInfo() const */

void __thiscall EffectObject_DamageOverTime::createDamageInfo(EffectObject_DamageOverTime *this)

{
  EffectObject_DamageOverTimeProps *pEVar1;
  undefined8 uVar2;
  DamageInfo *in_x8;
  float fVar3;
  float fVar4;
  
  pEVar1 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
  DamageInfo::DamageInfo(in_x8);
  fVar4 = *(float *)(pEVar1 + 0x6c);
  fVar3 = (float)PVZ_Dt();
  *(float *)(in_x8 + 8) = fVar3 * fVar4;
  uVar2 = getDamageTypeFlags();
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 0x10) = uVar2;
  return;
}


/* EffectObject_DamageOverTime::createAnimationSequence() const */

void __thiscall
EffectObject_DamageOverTime::createAnimationSequence(EffectObject_DamageOverTime *this)

{
  char cVar1;
  EffectObject_DamageOverTimeProps *pEVar2;
  PIInterpolator *in_x8;
  
  pEVar2 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  cVar1 = FUN_0547419c(pEVar2 + 0x30);
  if (cVar1 == '\0') {
    AnimationSequence::AddSingleAnimation();
  }
  cVar1 = FUN_0547419c(pEVar2 + 0x38);
  if (cVar1 == '\0') {
    AnimationSequence::AddLoopingAnimation(*(undefined4 *)(pEVar2 + 0x58));
  }
  cVar1 = FUN_0547419c(pEVar2 + 0x40);
  if (cVar1 == '\0') {
    AnimationSequence::AddSingleAnimation();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTime::onUpdate() */

void __thiscall EffectObject_DamageOverTime::onUpdate(EffectObject_DamageOverTime *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  if (*(int *)(this + 0x120) == 1) {
    createDamageInfo(this);
    calculateTargetingRect();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_80,0x3f,auStack_90,*(undefined4 *)(this + 0x11c),
               *(undefined4 *)(this + 0x11c));
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if ((this_00 == (Zombie *)0x0) || (cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0')) {
        (**(code **)(*(long *)*puVar3 + 0x110))((long *)*puVar3,aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DamageOverTime::EffectObject_DamageOverTime() */

void __thiscall
EffectObject_DamageOverTime::EffectObject_DamageOverTime(EffectObject_DamageOverTime *this)

{
  void *pvVar1;
  
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_06760140;
  Sexy::Point::Point((Point *)(this + 0x118));
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::RegisterForAudio(pvVar1);
  return;
}


/* EffectObject_DamageOverTime::StaticNew() */

EffectObject_DamageOverTime * EffectObject_DamageOverTime::StaticNew(void)

{
  EffectObject_DamageOverTime *this;
  
  this = ::operator_new(0x128);
  EffectObject_DamageOverTime(this);
  return this;
}


/* EffectObject_DamageOverTime::~EffectObject_DamageOverTime() */

void __thiscall
EffectObject_DamageOverTime::~EffectObject_DamageOverTime(EffectObject_DamageOverTime *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_GetClass_06760140;
  pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::UnregisterForAudio(pvVar1);
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_DamageOverTime::~EffectObject_DamageOverTime() */

void __thiscall
EffectObject_DamageOverTime::~EffectObject_DamageOverTime(EffectObject_DamageOverTime *this)

{
  ~EffectObject_DamageOverTime(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTime::onAnimStopped(std::string const&) */

void EffectObject_DamageOverTime::onAnimStopped(string *param_1)

{
  int iVar1;
  EffectObject_DamageOverTimeProps *pEVar2;
  AudioMgr *this;
  string *psVar3;
  float fVar4;
  float in_s1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = determineAndGetNextState((EffectObject_DamageOverTime *)param_1);
  *(int *)(param_1 + 0x120) = iVar1;
  if ((iVar1 == -1) || (1 < iVar1)) {
    pEVar2 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
    fVar4 = (float)StandaloneEffect::GetBoardSpaceOrigin((StandaloneEffect *)param_1);
    this = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    EATextSquish::Vec3::Vec3(aVStack_18,fVar4,in_s1,0.0);
    AudioMgr::SendPositionalAudioValue(this,param_1,(SexyVector3 *)aVStack_18);
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,pEVar2 + 0x50);
  }
  Effect_PopAnim::onAnimStopped(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTime::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>,
   int, int) */

void EffectObject_DamageOverTime::onEffectObjectInitialize
               (undefined1 param_1 [16],float param_2,EffectObject_DamageOverTime *param_3,
               RtWeakPtrBase *param_4,int param_5,int param_6)

{
  int iVar1;
  EffectObject_DamageOverTimeProps *pEVar2;
  AudioMgr *this;
  string *psVar3;
  float fVar4;
  undefined8 local_30 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  createAnimationSequence(param_3);
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)param_3,(AnimationSequence *)aRStack_20);
  Sexy::Point::Point((Point *)local_30,param_5,param_6);
  *(undefined8 *)(param_3 + 0x118) = local_30[0];
  iVar1 = determineAndGetNextState(param_3);
  *(int *)(param_3 + 0x120) = iVar1;
  if ((iVar1 != -1) && (iVar1 < 2)) {
    pEVar2 = EffectObject::GetProps<EffectObject_DamageOverTimeProps>();
    fVar4 = (float)StandaloneEffect::GetBoardSpaceOrigin((StandaloneEffect *)param_3);
    this = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    EATextSquish::Vec3::Vec3((Vec3 *)local_30,fVar4,param_2,0.0);
    AudioMgr::SendPositionalAudioValue(this,param_3,(SexyVector3 *)local_30);
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,pEVar2 + 0x48);
  }
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

