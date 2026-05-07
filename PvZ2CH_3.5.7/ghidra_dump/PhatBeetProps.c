// Class: PhatBeetProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhatBeetProps::StaticClassInit() */

void PhatBeetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PhatBeetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0416a444,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PhatBeetProps::StaticGetClass() */

long * PhatBeetProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PhatBeetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PhatBeetProps::GetClass() const */

long * PhatBeetProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PhatBeetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PhatBeetProps::PhatBeetProps() */

void __thiscall PhatBeetProps::PhatBeetProps(PhatBeetProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067f3e70;
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  *(undefined4 *)(this + 0x2c4) = 0x40000000;
  *(undefined4 *)(this + 0x2cc) = 0x41200000;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x2d4) = 0x41000000;
  *(undefined4 *)(this + 0x2d8) = 0x41000000;
  return;
}


/* PhatBeetProps::StaticNew() */

PhatBeetProps * PhatBeetProps::StaticNew(void)

{
  PhatBeetProps *this;
  
  this = ::operator_new(0x2e0);
  PhatBeetProps(this);
  return this;
}


/* PhatBeetProps::~PhatBeetProps() */

void __thiscall PhatBeetProps::~PhatBeetProps(PhatBeetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f3e70;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PhatBeetProps::~PhatBeetProps() */

void __thiscall PhatBeetProps::~PhatBeetProps(PhatBeetProps *this)

{
  ~PhatBeetProps(this);
  AK::FreeHook(this);
  return;
}

