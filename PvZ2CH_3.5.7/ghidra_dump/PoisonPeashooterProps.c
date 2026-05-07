// Class: PoisonPeashooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonPeashooterProps::StaticClassInit() */

void PoisonPeashooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoisonPeashooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc94e4,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonPeashooterProps::StaticGetClass() */

long * PoisonPeashooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PoisonPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonPeashooterProps::GetClass() const */

long * PoisonPeashooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PoisonPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonPeashooterProps::PoisonPeashooterProps() */

void __thiscall PoisonPeashooterProps::PoisonPeashooterProps(PoisonPeashooterProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 5;
  *(undefined ***)this = &PTR_GetClass_0699cda0;
  uVar1 = _FUN_04ccb5d0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 700) = 0x3f000000;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2b8) = uVar1;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  return;
}


/* PoisonPeashooterProps::StaticNew() */

PoisonPeashooterProps * PoisonPeashooterProps::StaticNew(void)

{
  PoisonPeashooterProps *this;
  
  this = ::operator_new(0x300);
  PoisonPeashooterProps(this);
  return this;
}


/* PoisonPeashooterProps::~PoisonPeashooterProps() */

void __thiscall PoisonPeashooterProps::~PoisonPeashooterProps(PoisonPeashooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699cda0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PoisonPeashooterProps::~PoisonPeashooterProps() */

void __thiscall PoisonPeashooterProps::~PoisonPeashooterProps(PoisonPeashooterProps *this)

{
  ~PoisonPeashooterProps(this);
  AK::FreeHook(this);
  return;
}

