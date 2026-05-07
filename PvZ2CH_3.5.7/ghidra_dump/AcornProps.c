// Class: AcornProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AcornProps::StaticClassInit() */

void AcornProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AcornProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f92f64,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AcornProps::AcornProps() */

void __thiscall AcornProps::AcornProps(AcornProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x43160000;
  *(undefined ***)this = &PTR_GetClass_067a41a0;
  *(undefined4 *)(this + 700) = 0x3dcccccd;
  return;
}


/* AcornProps::StaticNew() */

AcornProps * AcornProps::StaticNew(void)

{
  AcornProps *this;
  
  this = ::operator_new(0x2c0);
  AcornProps(this);
  return this;
}


/* AcornProps::~AcornProps() */

void __thiscall AcornProps::~AcornProps(AcornProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a41a0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AcornProps::~AcornProps() */

void __thiscall AcornProps::~AcornProps(AcornProps *this)

{
  ~AcornProps(this);
  AK::FreeHook(this);
  return;
}


/* AcornProps::StaticGetClass() */

long * AcornProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AcornProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AcornProps::GetClass() const */

long * AcornProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AcornProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

