// Class: GridItemHeianBoxPlantfoodProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxPlantfoodProps::StaticClassInit() */

void GridItemHeianBoxPlantfoodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxPlantfoodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2908c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxPlantfoodProps::StaticGetClass() */

long * GridItemHeianBoxPlantfoodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBoxPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxPlantfoodProps::GetClass() const */

long * GridItemHeianBoxPlantfoodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBoxPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxPlantfoodProps::GridItemHeianBoxPlantfoodProps() */

void __thiscall
GridItemHeianBoxPlantfoodProps::GridItemHeianBoxPlantfoodProps(GridItemHeianBoxPlantfoodProps *this)

{
  GridItemHeianBoxProps::GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06766ca0;
  return;
}


/* GridItemHeianBoxPlantfoodProps::StaticNew() */

GridItemHeianBoxPlantfoodProps * GridItemHeianBoxPlantfoodProps::StaticNew(void)

{
  GridItemHeianBoxPlantfoodProps *this;
  
  this = ::operator_new(0xd8);
  GridItemHeianBoxPlantfoodProps(this);
  return this;
}


/* GridItemHeianBoxPlantfoodProps::~GridItemHeianBoxPlantfoodProps() */

void __thiscall
GridItemHeianBoxPlantfoodProps::~GridItemHeianBoxPlantfoodProps
          (GridItemHeianBoxPlantfoodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06766ca0;
  GridItemHeianBoxProps::~GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  return;
}


/* GridItemHeianBoxPlantfoodProps::~GridItemHeianBoxPlantfoodProps() */

void __thiscall
GridItemHeianBoxPlantfoodProps::~GridItemHeianBoxPlantfoodProps
          (GridItemHeianBoxPlantfoodProps *this)

{
  ~GridItemHeianBoxPlantfoodProps(this);
  AK::FreeHook(this);
  return;
}

