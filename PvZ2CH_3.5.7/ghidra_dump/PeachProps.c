// Class: PeachProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeachProps::StaticClassInit() */

void PeachProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PeachProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f93cd0,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeachProps::PeachProps() */

void __thiscall PeachProps::PeachProps(PeachProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x40c00000;
  *(undefined4 *)(this + 0x2c4) = 0x96;
  *(undefined ***)this = &PTR_GetClass_067a4560;
  uVar1 = _FUN_03f86cb8;
  *(undefined4 *)(this + 700) = 0x40400000;
  *(undefined4 *)(this + 0x2c8) = uVar1;
  *(undefined4 *)(this + 0x2c0) = 0x40a00000;
  return;
}


/* PeachProps::StaticNew() */

PeachProps * PeachProps::StaticNew(void)

{
  PeachProps *this;
  
  this = ::operator_new(0x2d0);
  PeachProps(this);
  return this;
}


/* PeachProps::~PeachProps() */

void __thiscall PeachProps::~PeachProps(PeachProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4560;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PeachProps::~PeachProps() */

void __thiscall PeachProps::~PeachProps(PeachProps *this)

{
  ~PeachProps(this);
  AK::FreeHook(this);
  return;
}


/* PeachProps::StaticGetClass() */

long * PeachProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PeachProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeachProps::GetClass() const */

long * PeachProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PeachProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

