// Class: PlantHappyLeekProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeekProps::StaticClassInit() */

void PlantHappyLeekProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHappyLeekProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03fad95c,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHappyLeekProps::StaticGetClass() */

long * PlantHappyLeekProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHappyLeekProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHappyLeekProps::GetClass() const */

long * PlantHappyLeekProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHappyLeekProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHappyLeekProps::PlantHappyLeekProps() */

void __thiscall PlantHappyLeekProps::PlantHappyLeekProps(PlantHappyLeekProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a6f30;
  return;
}


/* PlantHappyLeekProps::StaticNew() */

PlantHappyLeekProps * PlantHappyLeekProps::StaticNew(void)

{
  PlantHappyLeekProps *this;
  
  this = ::operator_new(0x2d8);
  PlantHappyLeekProps(this);
  return this;
}


/* PlantHappyLeekProps::~PlantHappyLeekProps() */

void __thiscall PlantHappyLeekProps::~PlantHappyLeekProps(PlantHappyLeekProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a6f30;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantHappyLeekProps::~PlantHappyLeekProps() */

void __thiscall PlantHappyLeekProps::~PlantHappyLeekProps(PlantHappyLeekProps *this)

{
  ~PlantHappyLeekProps(this);
  AK::FreeHook(this);
  return;
}

