// Class: RotoshroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RotoshroomProps::StaticClassInit() */

void RotoshroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RotoshroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f94ee8,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RotoshroomProps::RotoshroomProps() */

void __thiscall RotoshroomProps::RotoshroomProps(RotoshroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  this[700] = (RotoshroomProps)0x0;
  *(undefined ***)this = &PTR_GetClass_067a4a60;
  return;
}


/* RotoshroomProps::StaticNew() */

RotoshroomProps * RotoshroomProps::StaticNew(void)

{
  RotoshroomProps *this;
  
  this = ::operator_new(0x2c0);
  RotoshroomProps(this);
  return this;
}


/* RotoshroomProps::~RotoshroomProps() */

void __thiscall RotoshroomProps::~RotoshroomProps(RotoshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4a60;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* RotoshroomProps::~RotoshroomProps() */

void __thiscall RotoshroomProps::~RotoshroomProps(RotoshroomProps *this)

{
  ~RotoshroomProps(this);
  AK::FreeHook(this);
  return;
}


/* RotoshroomProps::StaticGetClass() */

long * RotoshroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RotoshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RotoshroomProps::GetClass() const */

long * RotoshroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RotoshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

