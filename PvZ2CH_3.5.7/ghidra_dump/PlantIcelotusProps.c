// Class: PlantIcelotusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotusProps::StaticClassInit() */

void PlantIcelotusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantIcelotusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce73b4,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcelotusProps::StaticGetClass() */

long * PlantIcelotusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantIcelotusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIcelotusProps::GetClass() const */

long * PlantIcelotusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantIcelotusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIcelotusProps::PlantIcelotusProps() */

void __thiscall PlantIcelotusProps::PlantIcelotusProps(PlantIcelotusProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined ***)this = &PTR_GetClass_069a25e0;
  *(undefined4 *)(this + 0x2c8) = 2;
  *(undefined4 *)(this + 700) = 5;
  *(undefined4 *)(this + 0x2cc) = 1;
  *(undefined4 *)(this + 0x2d0) = 3;
  *(undefined4 *)(this + 0x2d4) = 1;
  *(undefined4 *)(this + 0x2c0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2d8) = 0x41200000;
  return;
}


/* PlantIcelotusProps::StaticNew() */

PlantIcelotusProps * PlantIcelotusProps::StaticNew(void)

{
  PlantIcelotusProps *this;
  
  this = ::operator_new(0x2e0);
  PlantIcelotusProps(this);
  return this;
}


/* PlantIcelotusProps::~PlantIcelotusProps() */

void __thiscall PlantIcelotusProps::~PlantIcelotusProps(PlantIcelotusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a25e0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantIcelotusProps::~PlantIcelotusProps() */

void __thiscall PlantIcelotusProps::~PlantIcelotusProps(PlantIcelotusProps *this)

{
  ~PlantIcelotusProps(this);
  AK::FreeHook(this);
  return;
}

