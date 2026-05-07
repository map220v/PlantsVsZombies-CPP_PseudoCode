// Class: PlantIdleAwareAnimRig


/* PlantIdleAwareAnimRig::PlantIdleAwareAnimRig() */

void __thiscall PlantIdleAwareAnimRig::PlantIdleAwareAnimRig(PlantIdleAwareAnimRig *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066db330;
  *(undefined ***)(this + 0x10) = &PTR__PlantIdleAwareAnimRig_066db598;
  IdleAnimationSelector::IdleAnimationSelector((IdleAnimationSelector *)(this + 0x3b8));
  return;
}


/* PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig() */

void __thiscall PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig(PlantIdleAwareAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_066db330;
  *(undefined ***)(this + 0x10) = &PTR__PlantIdleAwareAnimRig_066db598;
  IdleAnimationSelector::~IdleAnimationSelector((IdleAnimationSelector *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig() */

void __thiscall PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig(PlantIdleAwareAnimRig *this)

{
  ~PlantIdleAwareAnimRig(this + -0x10);
  return;
}


/* PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig() */

void __thiscall PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig(PlantIdleAwareAnimRig *this)

{
  ~PlantIdleAwareAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig() */

void __thiscall PlantIdleAwareAnimRig::~PlantIdleAwareAnimRig(PlantIdleAwareAnimRig *this)

{
  ~PlantIdleAwareAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIdleAwareAnimRig::StaticClassInit() */

void PlantIdleAwareAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantIdleAwareAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03984948,0x3f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIdleAwareAnimRig::StaticGetClass() */

long * PlantIdleAwareAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantIdleAwareAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIdleAwareAnimRig::GetClass() const */

long * PlantIdleAwareAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantIdleAwareAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIdleAwareAnimRig::PlayIdleLooped() */

void __thiscall PlantIdleAwareAnimRig::PlayIdleLooped(PlantIdleAwareAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IdleAnimationSelector::GetLabel();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantIdleAwareAnimRig::StaticNew() */

PlantIdleAwareAnimRig * PlantIdleAwareAnimRig::StaticNew(void)

{
  PlantIdleAwareAnimRig *this;
  
  this = ::operator_new(0x3f0);
  PlantIdleAwareAnimRig(this);
  return this;
}

