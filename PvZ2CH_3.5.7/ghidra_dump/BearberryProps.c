// Class: BearberryProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryProps::StaticClassInit() */

void BearberryProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BearberryProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04254594,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BearberryProps::StaticGetClass() */

long * BearberryProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BearberryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryProps::GetClass() const */

long * BearberryProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BearberryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryProps::BearberryProps() */

void __thiscall BearberryProps::BearberryProps(BearberryProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06819560;
  *(undefined4 *)(this + 0x2b8) = 0x3dcccccd;
  *(undefined4 *)(this + 700) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2c0) = 0x43af0000;
  *(undefined4 *)(this + 0x2c4) = 0x3f99999a;
  return;
}


/* BearberryProps::StaticNew() */

BearberryProps * BearberryProps::StaticNew(void)

{
  BearberryProps *this;
  
  this = ::operator_new(0x2c8);
  BearberryProps(this);
  return this;
}


/* BearberryProps::~BearberryProps() */

void __thiscall BearberryProps::~BearberryProps(BearberryProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06819560;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BearberryProps::~BearberryProps() */

void __thiscall BearberryProps::~BearberryProps(BearberryProps *this)

{
  ~BearberryProps(this);
  AK::FreeHook(this);
  return;
}

