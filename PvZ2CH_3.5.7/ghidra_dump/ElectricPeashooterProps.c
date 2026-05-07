// Class: ElectricPeashooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeashooterProps::StaticClassInit() */

void ElectricPeashooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeashooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c11394,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeashooterProps::StaticGetClass() */

long * ElectricPeashooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeashooterProps::GetClass() const */

long * ElectricPeashooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeashooterProps::ElectricPeashooterProps() */

void __thiscall ElectricPeashooterProps::ElectricPeashooterProps(ElectricPeashooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 3;
  *(undefined4 *)(this + 0x2c8) = 4;
  *(undefined ***)this = &PTR_GetClass_06747ff0;
  *(undefined4 *)(this + 0x2cc) = 4;
  *(undefined4 *)(this + 0x2d4) = 2;
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x2dc) = 0x3f800000;
  return;
}


/* ElectricPeashooterProps::StaticNew() */

ElectricPeashooterProps * ElectricPeashooterProps::StaticNew(void)

{
  ElectricPeashooterProps *this;
  
  this = ::operator_new(0x2e0);
  ElectricPeashooterProps(this);
  return this;
}


/* ElectricPeashooterProps::~ElectricPeashooterProps() */

void __thiscall ElectricPeashooterProps::~ElectricPeashooterProps(ElectricPeashooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06747ff0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ElectricPeashooterProps::~ElectricPeashooterProps() */

void __thiscall ElectricPeashooterProps::~ElectricPeashooterProps(ElectricPeashooterProps *this)

{
  ~ElectricPeashooterProps(this);
  AK::FreeHook(this);
  return;
}

