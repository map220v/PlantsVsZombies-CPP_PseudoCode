// Class: BloomerangProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomerangProps::StaticClassInit() */

void BloomerangProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BloomerangProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f92b50,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BloomerangProps::BloomerangProps() */

void __thiscall BloomerangProps::BloomerangProps(BloomerangProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 3;
  *(undefined ***)this = &PTR_GetClass_067a4100;
  *(undefined4 *)(this + 0x2b8) = 5;
  this[0x2c0] = (BloomerangProps)0x0;
  *(undefined4 *)(this + 0x2cc) = 0x3e800000;
  *(undefined4 *)(this + 0x2c4) = 0x43160000;
  *(undefined4 *)(this + 0x2c8) = 0x3dcccccd;
  return;
}


/* BloomerangProps::StaticNew() */

BloomerangProps * BloomerangProps::StaticNew(void)

{
  BloomerangProps *this;
  
  this = ::operator_new(0x2d0);
  BloomerangProps(this);
  return this;
}


/* BloomerangProps::~BloomerangProps() */

void __thiscall BloomerangProps::~BloomerangProps(BloomerangProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4100;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BloomerangProps::~BloomerangProps() */

void __thiscall BloomerangProps::~BloomerangProps(BloomerangProps *this)

{
  ~BloomerangProps(this);
  AK::FreeHook(this);
  return;
}


/* BloomerangProps::StaticGetClass() */

long * BloomerangProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BloomerangProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomerangProps::GetClass() const */

long * BloomerangProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BloomerangProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

