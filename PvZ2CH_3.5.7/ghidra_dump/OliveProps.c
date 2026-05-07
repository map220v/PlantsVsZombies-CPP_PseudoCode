// Class: OliveProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveProps::StaticClassInit() */

void OliveProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"OliveProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0425cfe0,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OliveProps::StaticGetClass() */

long * OliveProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OliveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OliveProps::GetClass() const */

long * OliveProps::GetClass(void)

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
  (*pcVar3)(plVar1,"OliveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OliveProps::OliveProps() */

void __thiscall OliveProps::OliveProps(OliveProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0681cd00;
  return;
}


/* OliveProps::StaticNew() */

OliveProps * OliveProps::StaticNew(void)

{
  OliveProps *this;
  
  this = ::operator_new(0x2b8);
  OliveProps(this);
  return this;
}


/* OliveProps::~OliveProps() */

void __thiscall OliveProps::~OliveProps(OliveProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681cd00;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* OliveProps::~OliveProps() */

void __thiscall OliveProps::~OliveProps(OliveProps *this)

{
  ~OliveProps(this);
  AK::FreeHook(this);
  return;
}

