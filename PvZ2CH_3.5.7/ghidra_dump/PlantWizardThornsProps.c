// Class: PlantWizardThornsProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThornsProps::StaticClassInit() */

void PlantWizardThornsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWizardThornsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e4eda8,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWizardThornsProps::StaticGetClass() */

long * PlantWizardThornsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWizardThornsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWizardThornsProps::GetClass() const */

long * PlantWizardThornsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWizardThornsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWizardThornsProps::PlantWizardThornsProps() */

void __thiscall PlantWizardThornsProps::PlantWizardThornsProps(PlantWizardThornsProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2d8) = 2;
  *(undefined ***)this = &PTR_GetClass_069dfa30;
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2cc) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x443b8000;
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 0x2d4) = 0x40a00000;
  *(undefined4 *)(this + 0x2dc) = 0x41200000;
  *(undefined4 *)(this + 0x2d0) = 0x43480000;
  *(undefined4 *)(this + 0x2e4) = 0x40a00000;
  *(undefined4 *)(this + 0x2c8) = 0x43960000;
  *(undefined4 *)(this + 0x2e0) = 0x3d4ccccd;
  return;
}


/* PlantWizardThornsProps::StaticNew() */

PlantWizardThornsProps * PlantWizardThornsProps::StaticNew(void)

{
  PlantWizardThornsProps *this;
  
  this = ::operator_new(0x2e8);
  PlantWizardThornsProps(this);
  return this;
}


/* PlantWizardThornsProps::~PlantWizardThornsProps() */

void __thiscall PlantWizardThornsProps::~PlantWizardThornsProps(PlantWizardThornsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069dfa30;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantWizardThornsProps::~PlantWizardThornsProps() */

void __thiscall PlantWizardThornsProps::~PlantWizardThornsProps(PlantWizardThornsProps *this)

{
  ~PlantWizardThornsProps(this);
  AK::FreeHook(this);
  return;
}

