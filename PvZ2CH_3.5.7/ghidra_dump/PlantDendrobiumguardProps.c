// Class: PlantDendrobiumguardProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguardProps::StaticClassInit() */

void PlantDendrobiumguardProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDendrobiumguardProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ceb79c,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguardProps::StaticGetClass() */

long * PlantDendrobiumguardProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDendrobiumguardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDendrobiumguardProps::GetClass() const */

long * PlantDendrobiumguardProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDendrobiumguardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDendrobiumguardProps::PlantDendrobiumguardProps() */

void __thiscall
PlantDendrobiumguardProps::PlantDendrobiumguardProps(PlantDendrobiumguardProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 2;
  *(undefined ***)this = &PTR_GetClass_069a2e70;
  *(undefined4 *)(this + 0x2c4) = 0x41a00000;
  *(undefined4 *)(this + 0x2b8) = 0x42700000;
  *(undefined4 *)(this + 700) = 0x42480000;
  *(undefined4 *)(this + 0x2c8) = 0x3e4ccccd;
  return;
}


/* PlantDendrobiumguardProps::StaticNew() */

PlantDendrobiumguardProps * PlantDendrobiumguardProps::StaticNew(void)

{
  PlantDendrobiumguardProps *this;
  
  this = ::operator_new(0x2d0);
  PlantDendrobiumguardProps(this);
  return this;
}


/* PlantDendrobiumguardProps::~PlantDendrobiumguardProps() */

void __thiscall
PlantDendrobiumguardProps::~PlantDendrobiumguardProps(PlantDendrobiumguardProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a2e70;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantDendrobiumguardProps::~PlantDendrobiumguardProps() */

void __thiscall
PlantDendrobiumguardProps::~PlantDendrobiumguardProps(PlantDendrobiumguardProps *this)

{
  ~PlantDendrobiumguardProps(this);
  AK::FreeHook(this);
  return;
}

