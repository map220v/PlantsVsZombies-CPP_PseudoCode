// Class: WireGelsemiumProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProps::StaticClassInit() */

void WireGelsemiumProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WireGelsemiumProps");
    (*pcVar2)(plVar1,asStack_10,FUN_038a9dcc,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WireGelsemiumProps::StaticGetClass() */

long * WireGelsemiumProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WireGelsemiumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumProps::GetClass() const */

long * WireGelsemiumProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WireGelsemiumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumProps::WireGelsemiumProps() */

void __thiscall WireGelsemiumProps::WireGelsemiumProps(WireGelsemiumProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_066b2d70;
  *(undefined4 *)(this + 0x2c4) = 0x3e800000;
  *(undefined4 *)(this + 700) = 0x3ea3d70a;
  *(undefined4 *)(this + 0x2c8) = 0x3f000000;
  *(undefined4 *)(this + 0x2c0) = 0x42480000;
  return;
}


/* WireGelsemiumProps::StaticNew() */

WireGelsemiumProps * WireGelsemiumProps::StaticNew(void)

{
  WireGelsemiumProps *this;
  
  this = ::operator_new(0x2d0);
  WireGelsemiumProps(this);
  return this;
}


/* WireGelsemiumProps::~WireGelsemiumProps() */

void __thiscall WireGelsemiumProps::~WireGelsemiumProps(WireGelsemiumProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066b2d70;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* WireGelsemiumProps::~WireGelsemiumProps() */

void __thiscall WireGelsemiumProps::~WireGelsemiumProps(WireGelsemiumProps *this)

{
  ~WireGelsemiumProps(this);
  AK::FreeHook(this);
  return;
}

