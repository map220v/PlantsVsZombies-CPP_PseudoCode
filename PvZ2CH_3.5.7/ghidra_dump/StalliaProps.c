// Class: StalliaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StalliaProps::StaticClassInit() */

void StalliaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StalliaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0411d0bc,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StalliaProps::StaticGetClass() */

long * StalliaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StalliaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StalliaProps::GetClass() const */

long * StalliaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StalliaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StalliaProps::StalliaProps() */

void __thiscall StalliaProps::StalliaProps(StalliaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_067e83f0;
  *(undefined4 *)(this + 700) = 0x41700000;
  *(undefined4 *)(this + 0x2c0) = 0x40400000;
  return;
}


/* StalliaProps::StaticNew() */

StalliaProps * StalliaProps::StaticNew(void)

{
  StalliaProps *this;
  
  this = ::operator_new(0x2c8);
  StalliaProps(this);
  return this;
}


/* StalliaProps::~StalliaProps() */

void __thiscall StalliaProps::~StalliaProps(StalliaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e83f0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* StalliaProps::~StalliaProps() */

void __thiscall StalliaProps::~StalliaProps(StalliaProps *this)

{
  ~StalliaProps(this);
  AK::FreeHook(this);
  return;
}

