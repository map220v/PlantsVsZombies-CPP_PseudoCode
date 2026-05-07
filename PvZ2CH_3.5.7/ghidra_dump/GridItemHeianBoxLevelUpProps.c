// Class: GridItemHeianBoxLevelUpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxLevelUpProps::StaticClassInit() */

void GridItemHeianBoxLevelUpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxLevelUpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2a988,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxLevelUpProps::StaticGetClass() */

long * GridItemHeianBoxLevelUpProps::StaticGetClass(void)

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
  uVar2 = GridItemHeianBoxProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxLevelUpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxLevelUpProps::GetClass() const */

long * GridItemHeianBoxLevelUpProps::GetClass(void)

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
  uVar2 = GridItemHeianBoxProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxLevelUpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxLevelUpProps::GridItemHeianBoxLevelUpProps() */

void __thiscall
GridItemHeianBoxLevelUpProps::GridItemHeianBoxLevelUpProps(GridItemHeianBoxLevelUpProps *this)

{
  GridItemHeianBoxProps::GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  *(undefined ***)this = &PTR_GetClass_067671b0;
  PlantingRestrictionSet::PlantingRestrictionSet((PlantingRestrictionSet *)(this + 0xd8));
  *(undefined4 *)(this + 0xd0) = 1;
  return;
}


/* GridItemHeianBoxLevelUpProps::StaticNew() */

GridItemHeianBoxLevelUpProps * GridItemHeianBoxLevelUpProps::StaticNew(void)

{
  GridItemHeianBoxLevelUpProps *this;
  
  this = ::operator_new(0x108);
  GridItemHeianBoxLevelUpProps(this);
  return this;
}


/* GridItemHeianBoxLevelUpProps::~GridItemHeianBoxLevelUpProps() */

void __thiscall
GridItemHeianBoxLevelUpProps::~GridItemHeianBoxLevelUpProps(GridItemHeianBoxLevelUpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067671b0;
  PlantingRestrictionSet::~PlantingRestrictionSet((PlantingRestrictionSet *)(this + 0xd8));
  GridItemHeianBoxProps::~GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  return;
}


/* GridItemHeianBoxLevelUpProps::~GridItemHeianBoxLevelUpProps() */

void __thiscall
GridItemHeianBoxLevelUpProps::~GridItemHeianBoxLevelUpProps(GridItemHeianBoxLevelUpProps *this)

{
  ~GridItemHeianBoxLevelUpProps(this);
  AK::FreeHook(this);
  return;
}

