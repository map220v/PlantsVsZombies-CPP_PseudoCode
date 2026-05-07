// Class: WhiteMelonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhiteMelonProps::StaticClassInit() */

void WhiteMelonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhiteMelonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042315bc,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhiteMelonProps::StaticGetClass() */

long * WhiteMelonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhiteMelonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhiteMelonProps::GetClass() const */

long * WhiteMelonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WhiteMelonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhiteMelonProps::WhiteMelonProps() */

void __thiscall WhiteMelonProps::WhiteMelonProps(WhiteMelonProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06811870;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  return;
}


/* WhiteMelonProps::StaticNew() */

WhiteMelonProps * WhiteMelonProps::StaticNew(void)

{
  WhiteMelonProps *this;
  
  this = ::operator_new(0x2d8);
  WhiteMelonProps(this);
  return this;
}


/* WhiteMelonProps::~WhiteMelonProps() */

void __thiscall WhiteMelonProps::~WhiteMelonProps(WhiteMelonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06811870;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* WhiteMelonProps::~WhiteMelonProps() */

void __thiscall WhiteMelonProps::~WhiteMelonProps(WhiteMelonProps *this)

{
  ~WhiteMelonProps(this);
  AK::FreeHook(this);
  return;
}

