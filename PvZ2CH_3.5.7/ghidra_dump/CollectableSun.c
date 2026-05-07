// Class: CollectableSun


/* CollectableSun::onCollectableInitialize() */

void __thiscall CollectableSun::onCollectableInitialize(CollectableSun *this)

{
  *(undefined4 *)(this + 500) = 0;
  this[0x1f8] = (CollectableSun)0x0;
  return;
}


/* CollectableSun::~CollectableSun() */

void __thiscall CollectableSun::~CollectableSun(CollectableSun *this)

{
  *(undefined ***)this = &PTR_GetClass_067577a0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSun_067579f0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSun::~CollectableSun() */

void __thiscall CollectableSun::~CollectableSun(CollectableSun *this)

{
  ~CollectableSun(this + -0x10);
  return;
}


/* CollectableSun::~CollectableSun() */

void __thiscall CollectableSun::~CollectableSun(CollectableSun *this)

{
  ~CollectableSun(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSun::~CollectableSun() */

void __thiscall CollectableSun::~CollectableSun(CollectableSun *this)

{
  ~CollectableSun(this + -0x10);
  return;
}


/* CollectableSun::CollectableSun() */

void __thiscall CollectableSun::CollectableSun(CollectableSun *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_067577a0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSun_067579f0;
  return;
}


/* CollectableSun::StaticNew() */

CollectableSun * CollectableSun::StaticNew(void)

{
  CollectableSun *this;
  
  this = ::operator_new(0x200);
  CollectableSun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSun::StaticClassInit() */

void CollectableSun::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSun");
    (*pcVar2)(plVar1,asStack_10,FUN_03c69814,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSun::StaticGetClass() */

long * CollectableSun::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSun::GetClass() const */

long * CollectableSun::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSun::onUpdate() */

void __thiscall CollectableSun::onUpdate(CollectableSun *this)

{
  float fVar1;
  float fVar2;
  
  Collectable::onUpdate((Collectable *)this);
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x972) != '\0')
     ) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)FUN_03c68eac(*(undefined4 *)(this + 0x1e8));
    if (fVar2 < fVar1) {
      Collectable::TryToCollect((Collectable *)this);
    }
  }
  if (this[0x1f8] != (CollectableSun)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)FUN_03c68eac(*(undefined4 *)(this + 0x1e8));
    if (fVar2 < fVar1) {
      Collectable::TryToCollect((Collectable *)this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSun::StartCaptureEffect(std::string) */

void __thiscall CollectableSun::StartCaptureEffect(CollectableSun *this,undefined8 param_2)

{
  Effect_PopAnim *this_00;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::SetMotionIdle((Collectable *)this);
  Collectable::SetNeverExpire((Collectable *)this,true);
  DandelionBomb::getAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"transition_red");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aRStack_20,param_2,0);
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSun::onFinishMotion() */

void __thiscall CollectableSun::onFinishMotion(CollectableSun *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  
  Collectable::onFinishMotion((Collectable *)this);
  if (*(int *)(this + 500) == 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((pPVar2 != (PlayerInfo *)0x0) &&
       ((cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar2,2), cVar1 != '\0' ||
        ((cVar1 = RiftUtils::IsPlayingRiftLevel(), cVar1 != '\0' &&
         (cVar1 = RiftUtils::IsRiftTimedLevel(), cVar1 != '\0')))))) {
      Collectable::TryToCollect((Collectable *)this);
      return;
    }
  }
  return;
}

