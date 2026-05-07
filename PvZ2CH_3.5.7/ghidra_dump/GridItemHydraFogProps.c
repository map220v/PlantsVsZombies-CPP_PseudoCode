// Class: GridItemHydraFogProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFogProps::StaticClassInit() */

void GridItemHydraFogProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHydraFogProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f558dc,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydraFogProps::StaticGetClass() */

long * GridItemHydraFogProps::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHydraFogProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydraFogProps::GetClass() const */

long * GridItemHydraFogProps::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHydraFogProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydraFogProps::GridItemHydraFogProps() */

void __thiscall GridItemHydraFogProps::GridItemHydraFogProps(GridItemHydraFogProps *this)

{
  GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e850;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x138));
  return;
}


/* GridItemHydraFogProps::StaticNew() */

GridItemHydraFogProps * GridItemHydraFogProps::StaticNew(void)

{
  GridItemHydraFogProps *this;
  
  this = ::operator_new(0x160);
  GridItemHydraFogProps(this);
  return this;
}


/* GridItemHydraFogProps::~GridItemHydraFogProps() */

void __thiscall GridItemHydraFogProps::~GridItemHydraFogProps(GridItemHydraFogProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e850;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x138));
  GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  return;
}


/* GridItemHydraFogProps::~GridItemHydraFogProps() */

void __thiscall GridItemHydraFogProps::~GridItemHydraFogProps(GridItemHydraFogProps *this)

{
  ~GridItemHydraFogProps(this);
  AK::FreeHook(this);
  return;
}

