// Class: ExplodeONutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExplodeONutProps::StaticClassInit() */

void ExplodeONutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ExplodeONutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03902f84,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExplodeONutProps::StaticGetClass() */

long * ExplodeONutProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ExplodeONutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ExplodeONutProps::GetClass() const */

long * ExplodeONutProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ExplodeONutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ExplodeONutProps::ExplodeONutProps() */

void __thiscall ExplodeONutProps::ExplodeONutProps(ExplodeONutProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066bfbd0;
  return;
}


/* ExplodeONutProps::StaticNew() */

ExplodeONutProps * ExplodeONutProps::StaticNew(void)

{
  ExplodeONutProps *this;
  
  this = ::operator_new(0x2c0);
  ExplodeONutProps(this);
  return this;
}


/* ExplodeONutProps::~ExplodeONutProps() */

void __thiscall ExplodeONutProps::~ExplodeONutProps(ExplodeONutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066bfbd0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ExplodeONutProps::~ExplodeONutProps() */

void __thiscall ExplodeONutProps::~ExplodeONutProps(ExplodeONutProps *this)

{
  ~ExplodeONutProps(this);
  AK::FreeHook(this);
  return;
}

