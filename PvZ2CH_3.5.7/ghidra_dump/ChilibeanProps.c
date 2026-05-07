// Class: ChilibeanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChilibeanProps::StaticClassInit() */

void ChilibeanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChilibeanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f911f8,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChilibeanProps::ChilibeanProps() */

void __thiscall ChilibeanProps::ChilibeanProps(ChilibeanProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined ***)this = &PTR_GetClass_067a3ca0;
  return;
}


/* ChilibeanProps::StaticNew() */

ChilibeanProps * ChilibeanProps::StaticNew(void)

{
  ChilibeanProps *this;
  
  this = ::operator_new(0x2c0);
  ChilibeanProps(this);
  return this;
}


/* ChilibeanProps::~ChilibeanProps() */

void __thiscall ChilibeanProps::~ChilibeanProps(ChilibeanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3ca0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ChilibeanProps::~ChilibeanProps() */

void __thiscall ChilibeanProps::~ChilibeanProps(ChilibeanProps *this)

{
  ~ChilibeanProps(this);
  AK::FreeHook(this);
  return;
}


/* ChilibeanProps::StaticGetClass() */

long * ChilibeanProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChilibeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChilibeanProps::GetClass() const */

long * ChilibeanProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ChilibeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

