// Class: PowerPlantProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPlantProps::StaticClassInit() */

void PowerPlantProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPlantProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f955bc,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPlantProps::PowerPlantProps() */

void __thiscall PowerPlantProps::PowerPlantProps(PowerPlantProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0xfa;
  *(undefined ***)this = &PTR_GetClass_067a4c40;
  return;
}


/* PowerPlantProps::StaticNew() */

PowerPlantProps * PowerPlantProps::StaticNew(void)

{
  PowerPlantProps *this;
  
  this = ::operator_new(0x2c0);
  PowerPlantProps(this);
  return this;
}


/* PowerPlantProps::~PowerPlantProps() */

void __thiscall PowerPlantProps::~PowerPlantProps(PowerPlantProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4c40;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PowerPlantProps::~PowerPlantProps() */

void __thiscall PowerPlantProps::~PowerPlantProps(PowerPlantProps *this)

{
  ~PowerPlantProps(this);
  AK::FreeHook(this);
  return;
}


/* PowerPlantProps::StaticGetClass() */

long * PowerPlantProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPlantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPlantProps::GetClass() const */

long * PowerPlantProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPlantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

