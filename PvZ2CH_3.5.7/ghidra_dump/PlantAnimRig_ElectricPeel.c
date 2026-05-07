// Class: PlantAnimRig_ElectricPeel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricPeel::getPlantFoodOnAnimName() */

void PlantAnimRig_ElectricPeel::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood_2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel() */

void __thiscall
PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel(PlantAnimRig_ElectricPeel *this)

{
  *(undefined ***)this = &PTR_GetClass_069ae550;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ElectricPeel_069ae7b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel() */

void __thiscall
PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel(PlantAnimRig_ElectricPeel *this)

{
  ~PlantAnimRig_ElectricPeel(this + -0x10);
  return;
}


/* PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel() */

void __thiscall
PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel(PlantAnimRig_ElectricPeel *this)

{
  ~PlantAnimRig_ElectricPeel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel() */

void __thiscall
PlantAnimRig_ElectricPeel::~PlantAnimRig_ElectricPeel(PlantAnimRig_ElectricPeel *this)

{
  ~PlantAnimRig_ElectricPeel(this + -0x10);
  return;
}


/* PlantAnimRig_ElectricPeel::PlantAnimRig_ElectricPeel() */

void __thiscall
PlantAnimRig_ElectricPeel::PlantAnimRig_ElectricPeel(PlantAnimRig_ElectricPeel *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_ElectricPeel)0x0;
  *(undefined ***)this = &PTR_GetClass_069ae550;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ElectricPeel_069ae7b8;
  return;
}


/* PlantAnimRig_ElectricPeel::StaticNew() */

PlantAnimRig_ElectricPeel * PlantAnimRig_ElectricPeel::StaticNew(void)

{
  PlantAnimRig_ElectricPeel *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ElectricPeel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricPeel::StaticClassInit() */

void PlantAnimRig_ElectricPeel::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ElectricPeel");
    (*pcVar2)(plVar1,asStack_10,FUN_04d37250,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ElectricPeel::StaticGetClass() */

long * PlantAnimRig_ElectricPeel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ElectricPeel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ElectricPeel::GetClass() const */

long * PlantAnimRig_ElectricPeel::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ElectricPeel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricPeel::PlayIdleLooped() */

void __thiscall PlantAnimRig_ElectricPeel::PlayIdleLooped(PlantAnimRig_ElectricPeel *this)

{
  int iVar1;
  string *__n;
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_88,"idle");
  nop();
  std::string::string(asStack_80,"idle2");
  nop();
  __n = asStack_70;
  std::string::string(asStack_78,"idle3");
  nop();
  if (this[0x3b8] != (PlantAnimRig_ElectricPeel)0x0) {
    std::string::append(asStack_88,"special_idle",(size_t)__n);
    std::string::append(asStack_80,"special_idle2",(size_t)__n);
    std::string::append(asStack_78,"special_idle3",(size_t)__n);
  }
  FUN_05475d88(asStack_70,asStack_88);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  FUN_05475d88(asStack_70,asStack_80);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,5);
  std::string::~string(asStack_70);
  FUN_05475d88(asStack_70,asStack_78);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,1);
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

