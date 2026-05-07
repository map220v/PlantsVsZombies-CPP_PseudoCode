// Class: GridItemFlowerPotProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPotProps::StaticClassInit() */

void GridItemFlowerPotProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFlowerPotProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d71708,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlowerPotProps::StaticGetClass() */

long * GridItemFlowerPotProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFlowerPotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFlowerPotProps::GetClass() const */

long * GridItemFlowerPotProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFlowerPotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFlowerPotProps::GridItemFlowerPotProps() */

void __thiscall GridItemFlowerPotProps::GridItemFlowerPotProps(GridItemFlowerPotProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_0676f710;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0xd0));
  return;
}


/* GridItemFlowerPotProps::StaticNew() */

GridItemFlowerPotProps * GridItemFlowerPotProps::StaticNew(void)

{
  GridItemFlowerPotProps *this;
  
  this = ::operator_new(0xf8);
  GridItemFlowerPotProps(this);
  return this;
}


/* GridItemFlowerPotProps::~GridItemFlowerPotProps() */

void __thiscall GridItemFlowerPotProps::~GridItemFlowerPotProps(GridItemFlowerPotProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0676f710;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemFlowerPotProps::~GridItemFlowerPotProps() */

void __thiscall GridItemFlowerPotProps::~GridItemFlowerPotProps(GridItemFlowerPotProps *this)

{
  ~GridItemFlowerPotProps(this);
  AK::FreeHook(this);
  return;
}

