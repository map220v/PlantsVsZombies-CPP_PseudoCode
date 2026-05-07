// Class: GridItemAnimRig_FlowerPot


/* GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot() */

void __thiscall
GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot(GridItemAnimRig_FlowerPot *this)

{
  *(undefined ***)this = &PTR_GetClass_0676f7a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimRig_FlowerPot_0676fa08;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot() */

void __thiscall
GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot(GridItemAnimRig_FlowerPot *this)

{
  ~GridItemAnimRig_FlowerPot(this + -0x10);
  return;
}


/* GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot() */

void __thiscall
GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot(GridItemAnimRig_FlowerPot *this)

{
  ~GridItemAnimRig_FlowerPot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot() */

void __thiscall
GridItemAnimRig_FlowerPot::~GridItemAnimRig_FlowerPot(GridItemAnimRig_FlowerPot *this)

{
  ~GridItemAnimRig_FlowerPot(this + -0x10);
  return;
}


/* GridItemAnimRig_FlowerPot::GridItemAnimRig_FlowerPot() */

void __thiscall
GridItemAnimRig_FlowerPot::GridItemAnimRig_FlowerPot(GridItemAnimRig_FlowerPot *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (GridItemAnimRig_FlowerPot)0x0;
  this[0x3b9] = (GridItemAnimRig_FlowerPot)0x0;
  *(undefined ***)this = &PTR_GetClass_0676f7a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimRig_FlowerPot_0676fa08;
  return;
}


/* GridItemAnimRig_FlowerPot::StaticNew() */

GridItemAnimRig_FlowerPot * GridItemAnimRig_FlowerPot::StaticNew(void)

{
  GridItemAnimRig_FlowerPot *this;
  
  this = ::operator_new(0x3c0);
  GridItemAnimRig_FlowerPot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimRig_FlowerPot::StaticClassInit() */

void GridItemAnimRig_FlowerPot::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimRig_FlowerPot");
    (*pcVar2)(plVar1,asStack_10,FUN_03d70b94,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimRig_FlowerPot::StaticGetClass() */

long * GridItemAnimRig_FlowerPot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimRig_FlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimRig_FlowerPot::GetClass() const */

long * GridItemAnimRig_FlowerPot::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimRig_FlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimRig_FlowerPot::onAnimStopped() */

void __thiscall GridItemAnimRig_FlowerPot::onAnimStopped(GridItemAnimRig_FlowerPot *this)

{
  (**(code **)(*(long *)this + 0x118))();
  return;
}


/* GridItemAnimRig_FlowerPot::SetPlantIsOnTile(bool) */

void __thiscall
GridItemAnimRig_FlowerPot::SetPlantIsOnTile(GridItemAnimRig_FlowerPot *this,bool param_1)

{
  if (this[0x3b8] == (GridItemAnimRig_FlowerPot)param_1) {
    return;
  }
  this[0x3b8] = (GridItemAnimRig_FlowerPot)param_1;
  if (!param_1) {
    nop();
    return;
  }
  TwinsRedStarProjectile::damageEntity((BoardEntity *)this);
  return;
}

