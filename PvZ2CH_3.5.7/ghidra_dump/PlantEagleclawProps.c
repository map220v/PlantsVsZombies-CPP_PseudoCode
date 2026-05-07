// Class: PlantEagleclawProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclawProps::StaticClassInit() */

void PlantEagleclawProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEagleclawProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042abbbc,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEagleclawProps::StaticGetClass() */

long * PlantEagleclawProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEagleclawProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEagleclawProps::GetClass() const */

long * PlantEagleclawProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEagleclawProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEagleclawProps::PlantEagleclawProps() */

void __thiscall PlantEagleclawProps::PlantEagleclawProps(PlantEagleclawProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_0682ad20;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x2c0) = 0x40800000;
  return;
}


/* PlantEagleclawProps::StaticNew() */

PlantEagleclawProps * PlantEagleclawProps::StaticNew(void)

{
  PlantEagleclawProps *this;
  
  this = ::operator_new(0x2c8);
  PlantEagleclawProps(this);
  return this;
}


/* PlantEagleclawProps::~PlantEagleclawProps() */

void __thiscall PlantEagleclawProps::~PlantEagleclawProps(PlantEagleclawProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0682ad20;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantEagleclawProps::~PlantEagleclawProps() */

void __thiscall PlantEagleclawProps::~PlantEagleclawProps(PlantEagleclawProps *this)

{
  ~PlantEagleclawProps(this);
  AK::FreeHook(this);
  return;
}

