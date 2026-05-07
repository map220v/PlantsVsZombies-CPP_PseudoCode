// Class: GridItemAnimRig_LilyPad


/* GridItemAnimRig_LilyPad::onPopAnimInitialized() */

void __thiscall GridItemAnimRig_LilyPad::onPopAnimInitialized(GridItemAnimRig_LilyPad *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  this[0x3b8] = (GridItemAnimRig_LilyPad)0x0;
  this[0x3b9] = (GridItemAnimRig_LilyPad)0x0;
  return;
}


/* GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad() */

void __thiscall GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad(GridItemAnimRig_LilyPad *this)

{
  *(undefined ***)this = &PTR_GetClass_06807f90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimRig_LilyPad_068081f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad() */

void __thiscall GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad(GridItemAnimRig_LilyPad *this)

{
  ~GridItemAnimRig_LilyPad(this + -0x10);
  return;
}


/* GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad() */

void __thiscall GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad(GridItemAnimRig_LilyPad *this)

{
  ~GridItemAnimRig_LilyPad(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad() */

void __thiscall GridItemAnimRig_LilyPad::~GridItemAnimRig_LilyPad(GridItemAnimRig_LilyPad *this)

{
  ~GridItemAnimRig_LilyPad(this + -0x10);
  return;
}


/* GridItemAnimRig_LilyPad::GridItemAnimRig_LilyPad() */

void __thiscall GridItemAnimRig_LilyPad::GridItemAnimRig_LilyPad(GridItemAnimRig_LilyPad *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (GridItemAnimRig_LilyPad)0x0;
  this[0x3b9] = (GridItemAnimRig_LilyPad)0x0;
  *(undefined ***)this = &PTR_GetClass_06807f90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimRig_LilyPad_068081f8;
  return;
}


/* GridItemAnimRig_LilyPad::StaticNew() */

GridItemAnimRig_LilyPad * GridItemAnimRig_LilyPad::StaticNew(void)

{
  GridItemAnimRig_LilyPad *this;
  
  this = ::operator_new(0x3c0);
  GridItemAnimRig_LilyPad(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_LilyPad::StaticClassInit() */

void GridItemAnimRig_LilyPad::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimRig_LilyPad");
    (*pcVar2)(plVar1,asStack_10,FUN_041fa93c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimRig_LilyPad::StaticGetClass() */

long * GridItemAnimRig_LilyPad::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimRig_LilyPad",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimRig_LilyPad::GetClass() const */

long * GridItemAnimRig_LilyPad::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimRig_LilyPad",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_LilyPad::PlayPlantEnteredTile() */

void __thiscall GridItemAnimRig_LilyPad::PlayPlantEnteredTile(GridItemAnimRig_LilyPad *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle4");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimRig_LilyPad::SetPlantIsOnTile(bool) */

void __thiscall
GridItemAnimRig_LilyPad::SetPlantIsOnTile(GridItemAnimRig_LilyPad *this,bool param_1)

{
  if (this[0x3b8] == (GridItemAnimRig_LilyPad)param_1) {
    return;
  }
  this[0x3b8] = (GridItemAnimRig_LilyPad)param_1;
  if (!param_1) {
    nop();
    return;
  }
  PlayPlantEnteredTile(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_LilyPad::PlayIdle() */

void __thiscall GridItemAnimRig_LilyPad::PlayIdle(GridItemAnimRig_LilyPad *this)

{
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_70,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,600);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"idle2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x1e);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"idle3");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  nop();
  if (this[0x3b8] != (GridItemAnimRig_LilyPad)0x0) {
    std::string::string(asStack_70,"idle4");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x1e);
    std::string::~string(asStack_70);
    nop();
  }
  if (this[0x3b9] != (GridItemAnimRig_LilyPad)0x0) {
    std::string::string(asStack_70,"idle5");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
    std::string::~string(asStack_70);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_LilyPad::onAnimStopped() */

void __thiscall GridItemAnimRig_LilyPad::onAnimStopped(GridItemAnimRig_LilyPad *this)

{
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_70,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,600);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"idle2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x1e);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"idle3");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,10);
  std::string::~string(asStack_70);
  nop();
  if (this[0x3b8] != (GridItemAnimRig_LilyPad)0x0) {
    std::string::string(asStack_70,"idle4");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x1e);
    std::string::~string(asStack_70);
    nop();
  }
  if (this[0x3b9] != (GridItemAnimRig_LilyPad)0x0) {
    std::string::string(asStack_70,"idle5");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
    std::string::~string(asStack_70);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aDStack_38);
  std::string::~string(asStack_70);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

