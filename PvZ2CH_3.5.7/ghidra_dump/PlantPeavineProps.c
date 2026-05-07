// Class: PlantPeavineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavineProps::StaticClassInit() */

void PlantPeavineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPeavineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d20e48,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeavineProps::StaticGetClass() */

long * PlantPeavineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeavineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeavineProps::GetClass() const */

long * PlantPeavineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeavineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeavineProps::PlantPeavineProps() */

void __thiscall PlantPeavineProps::PlantPeavineProps(PlantPeavineProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_069a9dd0;
  *(undefined4 *)(this + 700) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c0) = 0x3f19999a;
  *(undefined4 *)(this + 0x2c4) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x2c8) = 0x3e19999a;
  *(undefined4 *)(this + 0x2cc) = 0x3e99999a;
  return;
}


/* PlantPeavineProps::StaticNew() */

PlantPeavineProps * PlantPeavineProps::StaticNew(void)

{
  PlantPeavineProps *this;
  
  this = ::operator_new(0x2d0);
  PlantPeavineProps(this);
  return this;
}


/* PlantPeavineProps::~PlantPeavineProps() */

void __thiscall PlantPeavineProps::~PlantPeavineProps(PlantPeavineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a9dd0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantPeavineProps::~PlantPeavineProps() */

void __thiscall PlantPeavineProps::~PlantPeavineProps(PlantPeavineProps *this)

{
  ~PlantPeavineProps(this);
  AK::FreeHook(this);
  return;
}

