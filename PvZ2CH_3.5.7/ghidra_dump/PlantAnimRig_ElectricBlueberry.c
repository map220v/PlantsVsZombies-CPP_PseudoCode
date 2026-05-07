// Class: PlantAnimRig_ElectricBlueberry


/* PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry() */

void __thiscall
PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry
          (PlantAnimRig_ElectricBlueberry *this)

{
  *(undefined ***)this = &PTR_GetClass_067dc2b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ElectricBlueberry_067dc518;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry() */

void __thiscall
PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry
          (PlantAnimRig_ElectricBlueberry *this)

{
  ~PlantAnimRig_ElectricBlueberry(this + -0x10);
  return;
}


/* PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry() */

void __thiscall
PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry
          (PlantAnimRig_ElectricBlueberry *this)

{
  ~PlantAnimRig_ElectricBlueberry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry() */

void __thiscall
PlantAnimRig_ElectricBlueberry::~PlantAnimRig_ElectricBlueberry
          (PlantAnimRig_ElectricBlueberry *this)

{
  ~PlantAnimRig_ElectricBlueberry(this + -0x10);
  return;
}


/* PlantAnimRig_ElectricBlueberry::PlantAnimRig_ElectricBlueberry() */

void __thiscall
PlantAnimRig_ElectricBlueberry::PlantAnimRig_ElectricBlueberry(PlantAnimRig_ElectricBlueberry *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067dc2b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ElectricBlueberry_067dc518;
  return;
}


/* PlantAnimRig_ElectricBlueberry::StaticNew() */

PlantAnimRig_ElectricBlueberry * PlantAnimRig_ElectricBlueberry::StaticNew(void)

{
  PlantAnimRig_ElectricBlueberry *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_ElectricBlueberry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricBlueberry::StaticClassInit() */

void PlantAnimRig_ElectricBlueberry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ElectricBlueberry");
    (*pcVar2)(plVar1,asStack_10,FUN_040d8f90,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ElectricBlueberry::StaticGetClass() */

long * PlantAnimRig_ElectricBlueberry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ElectricBlueberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ElectricBlueberry::GetClass() const */

long * PlantAnimRig_ElectricBlueberry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ElectricBlueberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricBlueberry::getCyclingAnimName() */

void PlantAnimRig_ElectricBlueberry::getCyclingAnimName(void)

{
  int iVar1;
  long in_x0;
  char *__s;
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  iVar1 = FUN_040d82b4(*(undefined4 *)(in_x0 + 0x21c));
  if (iVar1 == 1) {
    std::string::string(asStack_40,"idle2_1");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle2_2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle2_3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle2_4");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    if (iVar1 == 2) {
      std::string::string(asStack_40,"idle3_1");
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"idle3_2");
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      __s = "idle3_3";
    }
    else if (iVar1 == 0) {
      std::string::string(asStack_40,"idle1_1");
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      __s = "idle1_2";
    }
    else {
      std::string::string(asStack_40,"idle4_1");
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"idle4_2");
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      __s = "idle4_3";
    }
    std::string::string(asStack_40,__s);
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  FUN_05475d88();
  std::string::~string(asStack_40);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricBlueberry::getPreviewAnimName() */

void __thiscall
PlantAnimRig_ElectricBlueberry::getPreviewAnimName(PlantAnimRig_ElectricBlueberry *this)

{
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::string::string(asStack_40,"idle3_1");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle3_2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle3_3");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  ProbabilitySet<std::string>::PickItem();
  FUN_05475d88();
  std::string::~string(asStack_40);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ElectricBlueberry::PlayPreviewAnim(bool) */

void PlantAnimRig_ElectricBlueberry::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPreviewAnimName((PlantAnimRig_ElectricBlueberry *)(ulong)param_1);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* PlantAnimRig_ElectricBlueberry::onAnimStopped() */

void __thiscall PlantAnimRig_ElectricBlueberry::onAnimStopped(PlantAnimRig_ElectricBlueberry *this)

{
  int iVar1;
  
  iVar1 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  if (iVar1 != 2) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  (**(code **)(*(long *)this + 0x180))(this);
  return;
}

