// Class: WitchFrogProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WitchFrogProps::StaticClassInit() */

void WitchFrogProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WitchFrogProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf8920,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WitchFrogProps::StaticGetClass() */

long * WitchFrogProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WitchFrogProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WitchFrogProps::GetClass() const */

long * WitchFrogProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WitchFrogProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WitchFrogProps::WitchFrogProps() */

void __thiscall WitchFrogProps::WitchFrogProps(WitchFrogProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_069a4c70;
  return;
}


/* WitchFrogProps::StaticNew() */

WitchFrogProps * WitchFrogProps::StaticNew(void)

{
  WitchFrogProps *this;
  
  this = ::operator_new(0x2c0);
  WitchFrogProps(this);
  return this;
}


/* WitchFrogProps::~WitchFrogProps() */

void __thiscall WitchFrogProps::~WitchFrogProps(WitchFrogProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a4c70;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* WitchFrogProps::~WitchFrogProps() */

void __thiscall WitchFrogProps::~WitchFrogProps(WitchFrogProps *this)

{
  ~WitchFrogProps(this);
  AK::FreeHook(this);
  return;
}

