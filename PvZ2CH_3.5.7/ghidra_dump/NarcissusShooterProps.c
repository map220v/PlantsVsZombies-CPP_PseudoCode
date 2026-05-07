// Class: NarcissusShooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusShooterProps::StaticClassInit() */

void NarcissusShooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"NarcissusShooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0424d434,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusShooterProps::StaticGetClass() */

long * NarcissusShooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusShooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusShooterProps::GetClass() const */

long * NarcissusShooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusShooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusShooterProps::NarcissusShooterProps() */

void __thiscall NarcissusShooterProps::NarcissusShooterProps(NarcissusShooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x3f000000;
  *(undefined4 *)(this + 0x2c4) = 0x1e;
  *(undefined ***)this = &PTR_GetClass_068177f0;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined4 *)(this + 0x2b8) = 0x3f666666;
  *(undefined4 *)(this + 0x2cc) = 0x40400000;
  *(undefined4 *)(this + 0x2c8) = 0x3f666666;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x2d4) = 0x41a00000;
  return;
}


/* NarcissusShooterProps::StaticNew() */

NarcissusShooterProps * NarcissusShooterProps::StaticNew(void)

{
  NarcissusShooterProps *this;
  
  this = ::operator_new(0x2d8);
  NarcissusShooterProps(this);
  return this;
}


/* NarcissusShooterProps::~NarcissusShooterProps() */

void __thiscall NarcissusShooterProps::~NarcissusShooterProps(NarcissusShooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068177f0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* NarcissusShooterProps::~NarcissusShooterProps() */

void __thiscall NarcissusShooterProps::~NarcissusShooterProps(NarcissusShooterProps *this)

{
  ~NarcissusShooterProps(this);
  AK::FreeHook(this);
  return;
}

