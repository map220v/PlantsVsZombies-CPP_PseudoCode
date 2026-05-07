// Class: MangosteenProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenProps::StaticClassInit() */

void MangosteenProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MangosteenProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b06450,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MangosteenProps::StaticGetClass() */

long * MangosteenProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MangosteenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MangosteenProps::GetClass() const */

long * MangosteenProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MangosteenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MangosteenProps::MangosteenProps() */

void __thiscall MangosteenProps::MangosteenProps(MangosteenProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672a8e0;
  *(undefined4 *)(this + 700) = 0x41200000;
  *(undefined4 *)(this + 0x2b8) = 0x40a00000;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  *(undefined4 *)(this + 0x2cc) = 0x40400000;
  *(undefined4 *)(this + 0x2d0) = 0x40400000;
  Set8BytesTo0(this + 0x2d8);
  *(undefined4 *)(this + 0x2e0) = 3;
  *(undefined4 *)(this + 0x2e8) = 1;
  *(undefined4 *)(this + 0x2e4) = 0x40a00000;
  *(undefined4 *)(this + 0x2ec) = 0x3f99999a;
  *(undefined4 *)(this + 0x2f0) = 0x43af0000;
  *(undefined4 *)(this + 0x2f4) = 0x43960000;
  return;
}


/* MangosteenProps::StaticNew() */

MangosteenProps * MangosteenProps::StaticNew(void)

{
  MangosteenProps *this;
  
  this = ::operator_new(0x2f8);
  MangosteenProps(this);
  return this;
}


/* MangosteenProps::~MangosteenProps() */

void __thiscall MangosteenProps::~MangosteenProps(MangosteenProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672a8e0;
  std::string::~string((string *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MangosteenProps::~MangosteenProps() */

void __thiscall MangosteenProps::~MangosteenProps(MangosteenProps *this)

{
  ~MangosteenProps(this);
  AK::FreeHook(this);
  return;
}

