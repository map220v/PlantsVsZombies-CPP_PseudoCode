// Class: GridItemAnimRig_BesiegeGuide


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_BesiegeGuide::PlayIdle() */

void __thiscall GridItemAnimRig_BesiegeGuide::PlayIdle(GridItemAnimRig_BesiegeGuide *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide() */

void __thiscall
GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide(GridItemAnimRig_BesiegeGuide *this)

{
  *(undefined ***)this = &PTR_GetClass_068d91c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimRig_BesiegeGuide_068d92e0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide() */

void __thiscall
GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide(GridItemAnimRig_BesiegeGuide *this)

{
  ~GridItemAnimRig_BesiegeGuide(this + -0x10);
  return;
}


/* GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide() */

void __thiscall
GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide(GridItemAnimRig_BesiegeGuide *this)

{
  ~GridItemAnimRig_BesiegeGuide(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide() */

void __thiscall
GridItemAnimRig_BesiegeGuide::~GridItemAnimRig_BesiegeGuide(GridItemAnimRig_BesiegeGuide *this)

{
  ~GridItemAnimRig_BesiegeGuide(this + -0x10);
  return;
}


/* GridItemAnimRig_BesiegeGuide::GridItemAnimRig_BesiegeGuide() */

void __thiscall
GridItemAnimRig_BesiegeGuide::GridItemAnimRig_BesiegeGuide(GridItemAnimRig_BesiegeGuide *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068d91c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimRig_BesiegeGuide_068d92e0;
  return;
}


/* GridItemAnimRig_BesiegeGuide::StaticNew() */

GridItemAnimRig_BesiegeGuide * GridItemAnimRig_BesiegeGuide::StaticNew(void)

{
  GridItemAnimRig_BesiegeGuide *this;
  
  this = ::operator_new(0x210);
  GridItemAnimRig_BesiegeGuide(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_BesiegeGuide::StaticClassInit() */

void GridItemAnimRig_BesiegeGuide::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimRig_BesiegeGuide");
    (*pcVar2)(plVar1,asStack_10,FUN_0478bbc0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimRig_BesiegeGuide::StaticGetClass() */

long * GridItemAnimRig_BesiegeGuide::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimRig_BesiegeGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimRig_BesiegeGuide::GetClass() const */

long * GridItemAnimRig_BesiegeGuide::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimRig_BesiegeGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_BesiegeGuide::PlayArrow(ArrowDir) */

void __thiscall
GridItemAnimRig_BesiegeGuide::PlayArrow(GridItemAnimRig_BesiegeGuide *this,undefined4 param_2)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  default:
    __s = "idle_left";
    break;
  case 2:
    __s = "idle_right";
    break;
  case 3:
    __s = "idle_up";
    break;
  case 4:
    __s = "idle_down";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

