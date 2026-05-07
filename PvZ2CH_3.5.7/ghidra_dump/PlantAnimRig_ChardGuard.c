// Class: PlantAnimRig_ChardGuard


/* PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard() */

void __thiscall PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard(PlantAnimRig_ChardGuard *this)

{
  *(undefined ***)this = &PTR_GetClass_067d5370;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ChardGuard_067d55d8;
  std::string::~string((string *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard() */

void __thiscall PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard(PlantAnimRig_ChardGuard *this)

{
  ~PlantAnimRig_ChardGuard(this + -0x10);
  return;
}


/* PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard() */

void __thiscall PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard(PlantAnimRig_ChardGuard *this)

{
  ~PlantAnimRig_ChardGuard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard() */

void __thiscall PlantAnimRig_ChardGuard::~PlantAnimRig_ChardGuard(PlantAnimRig_ChardGuard *this)

{
  ~PlantAnimRig_ChardGuard(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ChardGuard::StaticClassInit() */

void PlantAnimRig_ChardGuard::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ChardGuard");
    (*pcVar2)(plVar1,asStack_10,FUN_040b4a28,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ChardGuard::StaticGetClass() */

long * PlantAnimRig_ChardGuard::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ChardGuard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ChardGuard::GetClass() const */

long * PlantAnimRig_ChardGuard::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ChardGuard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ChardGuard::PlantAnimRig_ChardGuard() */

void __thiscall PlantAnimRig_ChardGuard::PlantAnimRig_ChardGuard(PlantAnimRig_ChardGuard *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d5370;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ChardGuard_067d55d8;
  Set8BytesTo0(this + 0x3c0);
  PlantAnimRig_HollyKnight::SetNumDamageStates((PlantAnimRig_HollyKnight *)this,3);
  return;
}


/* PlantAnimRig_ChardGuard::StaticNew() */

PlantAnimRig_ChardGuard * PlantAnimRig_ChardGuard::StaticNew(void)

{
  PlantAnimRig_ChardGuard *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_ChardGuard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ChardGuard::getIdleAnimationName() */

void PlantAnimRig_ChardGuard::getIdleAnimationName(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+("idle_leaves",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ChardGuard::playIdleAnimation() */

void __thiscall PlantAnimRig_ChardGuard::playIdleAnimation(PlantAnimRig_ChardGuard *this)

{
  ActivityTypeID *pAVar1;
  int iVar2;
  string asStack_78 [8];
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (ActivityTypeID *)(this + 0x3b8);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::to_string<ActivityTypeID>(pAVar1);
  std::operator+("idle_leaves",asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::to_string<ActivityTypeID>(pAVar1);
  std::operator+("idle2_leaves",asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::to_string<ActivityTypeID>(pAVar1);
  std::operator+("idle3_leaves",asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,5);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_68);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  if (iVar2 != -1) {
    thunk_FUN_05475e00(this + 0x3c0,asStack_70);
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* PlantAnimRig_ChardGuard::PlayIdleLooped() */

undefined8 __thiscall PlantAnimRig_ChardGuard::PlayIdleLooped(PlantAnimRig_ChardGuard *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x218) != 1) {
    return 1;
  }
  uVar1 = playIdleAnimation(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ChardGuard::PlayPreviewAnim(bool) */

void PlantAnimRig_ChardGuard::PlayPreviewAnim(bool param_1)

{
  ActivityTypeID *pAVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  string asStack_78 [8];
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  pPVar3 = (PopAnimRig *)(ulong)param_1;
  lStack_8 = ___stack_chk_guard;
  pAVar1 = (ActivityTypeID *)(pPVar3 + 0x3b8);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::to_string<ActivityTypeID>(pAVar1);
  std::operator+("idle_leaves",asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::to_string<ActivityTypeID>(pAVar1);
  std::operator+("idle2_leaves",asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::to_string<ActivityTypeID>(pAVar1);
  std::operator+("idle3_leaves",asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,5);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_68);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_70,0,aDStack_38);
  if (iVar2 != -1) {
    thunk_FUN_05475e00(pPVar3 + 0x3c0,asStack_70);
    *(undefined4 *)(pPVar3 + 0x218) = 1;
  }
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}

