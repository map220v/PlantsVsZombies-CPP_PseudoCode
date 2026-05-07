// Class: ImpatiensshooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImpatiensshooterProps::StaticClassInit() */

void ImpatiensshooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ImpatiensshooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04050f58,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ImpatiensshooterProps::StaticGetClass() */

long * ImpatiensshooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensshooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensshooterProps::GetClass() const */

long * ImpatiensshooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensshooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensshooterProps::ImpatiensshooterProps() */

void __thiscall ImpatiensshooterProps::ImpatiensshooterProps(ImpatiensshooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067bfcd0;
  return;
}


/* ImpatiensshooterProps::StaticNew() */

ImpatiensshooterProps * ImpatiensshooterProps::StaticNew(void)

{
  ImpatiensshooterProps *this;
  
  this = ::operator_new(0x2c0);
  ImpatiensshooterProps(this);
  return this;
}


/* ImpatiensshooterProps::~ImpatiensshooterProps() */

void __thiscall ImpatiensshooterProps::~ImpatiensshooterProps(ImpatiensshooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067bfcd0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ImpatiensshooterProps::~ImpatiensshooterProps() */

void __thiscall ImpatiensshooterProps::~ImpatiensshooterProps(ImpatiensshooterProps *this)

{
  ~ImpatiensshooterProps(this);
  AK::FreeHook(this);
  return;
}

