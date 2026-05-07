// Class: AnimateArtifactMowerWithPrismTower


/* AnimateArtifactMowerWithPrismTower::~AnimateArtifactMowerWithPrismTower() */

void __thiscall
AnimateArtifactMowerWithPrismTower::~AnimateArtifactMowerWithPrismTower
          (AnimateArtifactMowerWithPrismTower *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a310;
  AnimateArtifactMower::~AnimateArtifactMower((AnimateArtifactMower *)this);
  return;
}


/* AnimateArtifactMowerWithPrismTower::~AnimateArtifactMowerWithPrismTower() */

void __thiscall
AnimateArtifactMowerWithPrismTower::~AnimateArtifactMowerWithPrismTower
          (AnimateArtifactMowerWithPrismTower *this)

{
  ~AnimateArtifactMowerWithPrismTower(this);
  AK::FreeHook(this);
  return;
}


/* AnimateArtifactMowerWithPrismTower::AnimateArtifactMowerWithPrismTower() */

void __thiscall
AnimateArtifactMowerWithPrismTower::AnimateArtifactMowerWithPrismTower
          (AnimateArtifactMowerWithPrismTower *this)

{
  AnimateArtifactMower::AnimateArtifactMower((AnimateArtifactMower *)this);
  *(undefined ***)this = &PTR_GetClass_0669a310;
  DVec3::DVec3((DVec3 *)(this + 0x40));
  return;
}


/* AnimateArtifactMowerWithPrismTower::StaticNew() */

AnimateArtifactMowerWithPrismTower * AnimateArtifactMowerWithPrismTower::StaticNew(void)

{
  AnimateArtifactMowerWithPrismTower *this;
  
  this = ::operator_new(0x50);
  AnimateArtifactMowerWithPrismTower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerWithPrismTower::StaticClassInit() */

void AnimateArtifactMowerWithPrismTower::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateArtifactMowerWithPrismTower");
    (*pcVar2)(plVar1,asStack_10,FUN_037d3cd4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerWithPrismTower::StaticGetClass() */

long * AnimateArtifactMowerWithPrismTower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnimateArtifactMowerWithPrismTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerWithPrismTower::GetClass() const */

long * AnimateArtifactMowerWithPrismTower::GetClass(void)

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
  (*pcVar3)(plVar1,"AnimateArtifactMowerWithPrismTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerWithPrismTower::PlayPrismTowerAnimation(ArtifactPrismTowerAnimState) */

void __thiscall
AnimateArtifactMowerWithPrismTower::PlayPrismTowerAnimation
          (AnimateArtifactMowerWithPrismTower *this,uint param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (param_2 == 0) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"trigger");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else if (param_2 == 1) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "AnimateArtifactMowerWithPrismTower::PlayPrismTowerAnimation() %d is invalid",
                 (ulong)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerWithPrismTower::Init(std::string) */

void AnimateArtifactMowerWithPrismTower::Init(AnimateArtifactMower *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  AnimateArtifactMower::Init(param_1,asStack_10);
  std::string::~string(asStack_10);
  PlayPrismTowerAnimation((AnimateArtifactMowerWithPrismTower *)param_1,1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x40),(SexyVector3 *)(param_1 + 0x28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerWithPrismTower::Create() */

void AnimateArtifactMowerWithPrismTower::Create(void)

{
  GameObject::Create<AnimateArtifactMowerWithPrismTower>();
  return;
}

