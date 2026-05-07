// Class: FirecrackerFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirecrackerFlowerProps::StaticClassInit() */

void FirecrackerFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FirecrackerFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f470bc,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirecrackerFlowerProps::StaticGetClass() */

long * FirecrackerFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FirecrackerFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirecrackerFlowerProps::GetClass() const */

long * FirecrackerFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"FirecrackerFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FirecrackerFlowerProps::FirecrackerFlowerProps() */

void __thiscall FirecrackerFlowerProps::FirecrackerFlowerProps(FirecrackerFlowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3e800000;
  *(undefined ***)this = &PTR_GetClass_06797d70;
  *(undefined4 *)(this + 700) = 0x3f000000;
  Set8BytesTo0(this + 0x2c8);
  *(undefined4 *)(this + 0x2c0) = 0x3f99999a;
  *(undefined4 *)(this + 0x2c4) = 0x43af0000;
  return;
}


/* FirecrackerFlowerProps::StaticNew() */

FirecrackerFlowerProps * FirecrackerFlowerProps::StaticNew(void)

{
  FirecrackerFlowerProps *this;
  
  this = ::operator_new(0x2d0);
  FirecrackerFlowerProps(this);
  return this;
}


/* FirecrackerFlowerProps::~FirecrackerFlowerProps() */

void __thiscall FirecrackerFlowerProps::~FirecrackerFlowerProps(FirecrackerFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06797d70;
  std::string::~string((string *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* FirecrackerFlowerProps::~FirecrackerFlowerProps() */

void __thiscall FirecrackerFlowerProps::~FirecrackerFlowerProps(FirecrackerFlowerProps *this)

{
  ~FirecrackerFlowerProps(this);
  AK::FreeHook(this);
  return;
}

