// Class: ArmamintPeashooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmamintPeashooterProps::StaticClassInit() */

void ArmamintPeashooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmamintPeashooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04296274,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmamintPeashooterProps::StaticGetClass() */

long * ArmamintPeashooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmamintPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmamintPeashooterProps::GetClass() const */

long * ArmamintPeashooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmamintPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmamintPeashooterProps::ArmamintPeashooterProps() */

void __thiscall ArmamintPeashooterProps::ArmamintPeashooterProps(ArmamintPeashooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 5;
  *(undefined ***)this = &PTR_GetClass_06827320;
  *(undefined4 *)(this + 0x2c4) = 5;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x2cc) = 0x3f800000;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 0x2d4) = 0x3f800000;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* ArmamintPeashooterProps::StaticNew() */

ArmamintPeashooterProps * ArmamintPeashooterProps::StaticNew(void)

{
  ArmamintPeashooterProps *this;
  
  this = ::operator_new(0x2d8);
  ArmamintPeashooterProps(this);
  return this;
}


/* ArmamintPeashooterProps::~ArmamintPeashooterProps() */

void __thiscall ArmamintPeashooterProps::~ArmamintPeashooterProps(ArmamintPeashooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06827320;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ArmamintPeashooterProps::~ArmamintPeashooterProps() */

void __thiscall ArmamintPeashooterProps::~ArmamintPeashooterProps(ArmamintPeashooterProps *this)

{
  ~ArmamintPeashooterProps(this);
  AK::FreeHook(this);
  return;
}

