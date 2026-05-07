// Class: PlantAnimRig_GloomVine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GloomVine::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_GloomVine::getPlantFoodMainAnimName(PlantAnimRig_GloomVine *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GloomVine::getPlantFoodOffAnimName() */

void __thiscall PlantAnimRig_GloomVine::getPlantFoodOffAnimName(PlantAnimRig_GloomVine *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_end");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GloomVine::getPlantFoodOnAnimName() */

void PlantAnimRig_GloomVine::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "plantfood_start";
  }
  else {
    __s = "plantfood_start_xt02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine() */

void __thiscall PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine(PlantAnimRig_GloomVine *this)

{
  *(undefined ***)this = &PTR_GetClass_069ae8e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GloomVine_069aeb48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine() */

void __thiscall PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine(PlantAnimRig_GloomVine *this)

{
  ~PlantAnimRig_GloomVine(this + -0x10);
  return;
}


/* PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine() */

void __thiscall PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine(PlantAnimRig_GloomVine *this)

{
  ~PlantAnimRig_GloomVine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine() */

void __thiscall PlantAnimRig_GloomVine::~PlantAnimRig_GloomVine(PlantAnimRig_GloomVine *this)

{
  ~PlantAnimRig_GloomVine(this + -0x10);
  return;
}


/* PlantAnimRig_GloomVine::StaticGetClass() */

long * PlantAnimRig_GloomVine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GloomVine",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_GloomVine::GetClass() const */

long * PlantAnimRig_GloomVine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GloomVine",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_GloomVine::PlantAnimRig_GloomVine() */

void __thiscall PlantAnimRig_GloomVine::PlantAnimRig_GloomVine(PlantAnimRig_GloomVine *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_GloomVine)0x0;
  *(undefined ***)this = &PTR_GetClass_069ae8e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GloomVine_069aeb48;
  return;
}


/* PlantAnimRig_GloomVine::StaticNew() */

PlantAnimRig_GloomVine * PlantAnimRig_GloomVine::StaticNew(void)

{
  PlantAnimRig_GloomVine *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_GloomVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GloomVine::getIdleAnimationName() */

void PlantAnimRig_GloomVine::getIdleAnimationName(void)

{
  long in_x0;
  char *__s;
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    std::string::string(asStack_40,"idle");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,100);
    std::string::~string(asStack_40);
    nop();
    __s = "idle2";
  }
  else {
    std::string::string(asStack_40,"idle_xt");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,100);
    std::string::~string(asStack_40);
    nop();
    __s = "idle_xt2";
  }
  std::string::string(asStack_40,__s);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,5);
  std::string::~string(asStack_40);
  nop();
  ProbabilitySet<std::string>::PickItem();
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

