// Class: HeathSeekerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProps::StaticClassInit() */

void HeathSeekerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeathSeekerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0400ca0c,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeathSeekerProps::StaticGetClass() */

long * HeathSeekerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeathSeekerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeathSeekerProps::GetClass() const */

long * HeathSeekerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HeathSeekerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeathSeekerProps::HeathSeekerProps() */

void __thiscall HeathSeekerProps::HeathSeekerProps(HeathSeekerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 5;
  *(undefined ***)this = &PTR_GetClass_067b4a60;
  *(undefined4 *)(this + 0x2c8) = 0x19;
  *(undefined4 *)(this + 0x2d0) = 300;
  *(undefined4 *)(this + 700) = 5;
  *(undefined4 *)(this + 0x2c0) = 5;
  *(undefined4 *)(this + 0x2c4) = 0x28;
  *(undefined4 *)(this + 0x2cc) = 0x28;
  *(undefined4 *)(this + 0x2d4) = 3;
  *(undefined4 *)(this + 0x2d8) = 3;
  *(undefined4 *)(this + 0x2dc) = 3;
  *(undefined4 *)(this + 0x2e0) = 0x3e4ccccd;
  return;
}


/* HeathSeekerProps::StaticNew() */

HeathSeekerProps * HeathSeekerProps::StaticNew(void)

{
  HeathSeekerProps *this;
  
  this = ::operator_new(0x2e8);
  HeathSeekerProps(this);
  return this;
}


/* HeathSeekerProps::~HeathSeekerProps() */

void __thiscall HeathSeekerProps::~HeathSeekerProps(HeathSeekerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b4a60;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HeathSeekerProps::~HeathSeekerProps() */

void __thiscall HeathSeekerProps::~HeathSeekerProps(HeathSeekerProps *this)

{
  ~HeathSeekerProps(this);
  AK::FreeHook(this);
  return;
}

