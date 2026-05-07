// Class: HurrikaleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HurrikaleProps::StaticClassInit() */

void HurrikaleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HurrikaleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040aab98,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HurrikaleProps::StaticGetClass() */

long * HurrikaleProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HurrikaleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HurrikaleProps::GetClass() const */

long * HurrikaleProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HurrikaleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HurrikaleProps::HurrikaleProps() */

void __thiscall HurrikaleProps::HurrikaleProps(HurrikaleProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067d2660;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  return;
}


/* HurrikaleProps::StaticNew() */

HurrikaleProps * HurrikaleProps::StaticNew(void)

{
  HurrikaleProps *this;
  
  this = ::operator_new(0x2d0);
  HurrikaleProps(this);
  return this;
}


/* HurrikaleProps::~HurrikaleProps() */

void __thiscall HurrikaleProps::~HurrikaleProps(HurrikaleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d2660;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HurrikaleProps::~HurrikaleProps() */

void __thiscall HurrikaleProps::~HurrikaleProps(HurrikaleProps *this)

{
  ~HurrikaleProps(this);
  AK::FreeHook(this);
  return;
}

