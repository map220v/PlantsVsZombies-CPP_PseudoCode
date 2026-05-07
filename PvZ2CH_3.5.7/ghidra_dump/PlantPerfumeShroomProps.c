// Class: PlantPerfumeShroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPerfumeShroomProps::StaticClassInit() */

void PlantPerfumeShroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPerfumeShroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04180934,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPerfumeShroomProps::StaticGetClass() */

long * PlantPerfumeShroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPerfumeShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPerfumeShroomProps::GetClass() const */

long * PlantPerfumeShroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPerfumeShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPerfumeShroomProps::PlantPerfumeShroomProps() */

void __thiscall PlantPerfumeShroomProps::PlantPerfumeShroomProps(PlantPerfumeShroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f7cc0;
  ComponentPropagatedBurstProps::ComponentPropagatedBurstProps
            ((ComponentPropagatedBurstProps *)(this + 0x2b8));
  *(undefined4 *)(this + 0x2e8) = 1;
  *(undefined4 *)(this + 0x2ec) = 2;
  return;
}


/* PlantPerfumeShroomProps::StaticNew() */

PlantPerfumeShroomProps * PlantPerfumeShroomProps::StaticNew(void)

{
  PlantPerfumeShroomProps *this;
  
  this = ::operator_new(0x2f0);
  PlantPerfumeShroomProps(this);
  return this;
}


/* PlantPerfumeShroomProps::~PlantPerfumeShroomProps() */

void __thiscall PlantPerfumeShroomProps::~PlantPerfumeShroomProps(PlantPerfumeShroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f7cc0;
  ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps
            ((ComponentPropagatedBurstProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantPerfumeShroomProps::~PlantPerfumeShroomProps() */

void __thiscall PlantPerfumeShroomProps::~PlantPerfumeShroomProps(PlantPerfumeShroomProps *this)

{
  ~PlantPerfumeShroomProps(this);
  AK::FreeHook(this);
  return;
}

