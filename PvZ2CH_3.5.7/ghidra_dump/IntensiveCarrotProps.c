// Class: IntensiveCarrotProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotProps::StaticClassInit() */

void IntensiveCarrotProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntensiveCarrotProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04167230,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntensiveCarrotProps::StaticGetClass() */

long * IntensiveCarrotProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntensiveCarrotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntensiveCarrotProps::GetClass() const */

long * IntensiveCarrotProps::GetClass(void)

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
  (*pcVar3)(plVar1,"IntensiveCarrotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntensiveCarrotProps::IntensiveCarrotProps() */

void __thiscall IntensiveCarrotProps::IntensiveCarrotProps(IntensiveCarrotProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067f3790;
  *(undefined4 *)(this + 0x2c0) = 0x40a00000;
  return;
}


/* IntensiveCarrotProps::StaticNew() */

IntensiveCarrotProps * IntensiveCarrotProps::StaticNew(void)

{
  IntensiveCarrotProps *this;
  
  this = ::operator_new(0x2c8);
  IntensiveCarrotProps(this);
  return this;
}


/* IntensiveCarrotProps::~IntensiveCarrotProps() */

void __thiscall IntensiveCarrotProps::~IntensiveCarrotProps(IntensiveCarrotProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f3790;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* IntensiveCarrotProps::~IntensiveCarrotProps() */

void __thiscall IntensiveCarrotProps::~IntensiveCarrotProps(IntensiveCarrotProps *this)

{
  ~IntensiveCarrotProps(this);
  AK::FreeHook(this);
  return;
}

