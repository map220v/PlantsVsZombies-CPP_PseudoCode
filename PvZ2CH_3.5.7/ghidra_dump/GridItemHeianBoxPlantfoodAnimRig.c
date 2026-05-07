// Class: GridItemHeianBoxPlantfoodAnimRig


/* GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig() */

void __thiscall
GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig
          (GridItemHeianBoxPlantfoodAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06767030;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxPlantfoodAnimRig_06767170;
  GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig((GridItemHeianBoxAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig() */

void __thiscall
GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig
          (GridItemHeianBoxPlantfoodAnimRig *this)

{
  ~GridItemHeianBoxPlantfoodAnimRig(this + -0x10);
  return;
}


/* GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig() */

void __thiscall
GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig
          (GridItemHeianBoxPlantfoodAnimRig *this)

{
  ~GridItemHeianBoxPlantfoodAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig() */

void __thiscall
GridItemHeianBoxPlantfoodAnimRig::~GridItemHeianBoxPlantfoodAnimRig
          (GridItemHeianBoxPlantfoodAnimRig *this)

{
  ~GridItemHeianBoxPlantfoodAnimRig(this + -0x10);
  return;
}


/* GridItemHeianBoxPlantfoodAnimRig::GridItemHeianBoxPlantfoodAnimRig() */

void __thiscall
GridItemHeianBoxPlantfoodAnimRig::GridItemHeianBoxPlantfoodAnimRig
          (GridItemHeianBoxPlantfoodAnimRig *this)

{
  GridItemHeianBoxAnimRig::GridItemHeianBoxAnimRig((GridItemHeianBoxAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06767030;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxPlantfoodAnimRig_06767170;
  return;
}


/* GridItemHeianBoxPlantfoodAnimRig::StaticNew() */

GridItemHeianBoxPlantfoodAnimRig * GridItemHeianBoxPlantfoodAnimRig::StaticNew(void)

{
  GridItemHeianBoxPlantfoodAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemHeianBoxPlantfoodAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxPlantfoodAnimRig::StaticClassInit() */

void GridItemHeianBoxPlantfoodAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxPlantfoodAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d29618,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxPlantfoodAnimRig::StaticGetClass() */

long * GridItemHeianBoxPlantfoodAnimRig::StaticGetClass(void)

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
  uVar2 = GridItemHeianBoxAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxPlantfoodAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxPlantfoodAnimRig::GetClass() const */

long * GridItemHeianBoxPlantfoodAnimRig::GetClass(void)

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
  uVar2 = GridItemHeianBoxAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxPlantfoodAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

