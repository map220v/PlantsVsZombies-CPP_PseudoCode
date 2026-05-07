// Class: DusklobberProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberProps::StaticClassInit() */

void DusklobberProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DusklobberProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd49c8,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberProps::StaticGetClass() */

long * DusklobberProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberProps::GetClass() const */

long * DusklobberProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberProps::DusklobberProps() */

void __thiscall DusklobberProps::DusklobberProps(DusklobberProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 4;
  *(undefined ***)this = &PTR_GetClass_0673c630;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* DusklobberProps::StaticNew() */

DusklobberProps * DusklobberProps::StaticNew(void)

{
  DusklobberProps *this;
  
  this = ::operator_new(0x2c8);
  DusklobberProps(this);
  return this;
}


/* DusklobberProps::~DusklobberProps() */

void __thiscall DusklobberProps::~DusklobberProps(DusklobberProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673c630;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DusklobberProps::~DusklobberProps() */

void __thiscall DusklobberProps::~DusklobberProps(DusklobberProps *this)

{
  ~DusklobberProps(this);
  AK::FreeHook(this);
  return;
}

