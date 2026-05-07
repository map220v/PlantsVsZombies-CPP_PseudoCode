// Class: GhostPepperProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GhostPepperProps::StaticClassInit() */

void GhostPepperProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GhostPepperProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04091128,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GhostPepperProps::StaticGetClass() */

long * GhostPepperProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GhostPepperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GhostPepperProps::GetClass() const */

long * GhostPepperProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GhostPepperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GhostPepperProps::GhostPepperProps() */

void __thiscall GhostPepperProps::GhostPepperProps(GhostPepperProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c4) = 1;
  *(undefined ***)this = &PTR_GetClass_067ce150;
  *(undefined4 *)(this + 700) = 0x40400000;
  *(undefined4 *)(this + 0x2d4) = 0x40400000;
  *(undefined4 *)(this + 0x2d8) = 0x40400000;
  *(undefined4 *)(this + 0x2b8) = 0x42480000;
  *(undefined4 *)(this + 0x2c0) = 0x41a00000;
  *(undefined4 *)(this + 0x2c8) = 0x43480000;
  *(undefined4 *)(this + 0x2cc) = 0x43480000;
  *(undefined4 *)(this + 0x2d0) = 0x43480000;
  *(undefined4 *)(this + 0x2dc) = 0x40000000;
  return;
}


/* GhostPepperProps::StaticNew() */

GhostPepperProps * GhostPepperProps::StaticNew(void)

{
  GhostPepperProps *this;
  
  this = ::operator_new(0x2e0);
  GhostPepperProps(this);
  return this;
}


/* GhostPepperProps::~GhostPepperProps() */

void __thiscall GhostPepperProps::~GhostPepperProps(GhostPepperProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ce150;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GhostPepperProps::~GhostPepperProps() */

void __thiscall GhostPepperProps::~GhostPepperProps(GhostPepperProps *this)

{
  ~GhostPepperProps(this);
  AK::FreeHook(this);
  return;
}

