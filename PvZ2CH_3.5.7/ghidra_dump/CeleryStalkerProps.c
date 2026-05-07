// Class: CeleryStalkerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CeleryStalkerProps::StaticClassInit() */

void CeleryStalkerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CeleryStalkerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0415faa4,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CeleryStalkerProps::StaticGetClass() */

long * CeleryStalkerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CeleryStalkerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CeleryStalkerProps::GetClass() const */

long * CeleryStalkerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CeleryStalkerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CeleryStalkerProps::CeleryStalkerProps() */

void __thiscall CeleryStalkerProps::CeleryStalkerProps(CeleryStalkerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f2b30;
  Sexy::Insets::Insets((Insets *)(this + 0x2d4));
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 0x2d8) = 0xffffffce;
  *(undefined4 *)(this + 0x2dc) = 0x40;
  *(undefined4 *)(this + 0x2e0) = 0x3c;
  *(undefined4 *)(this + 700) = 0x40400000;
  *(undefined4 *)(this + 0x2cc) = 0x43020000;
  *(undefined4 *)(this + 0x2c8) = 0x3f000000;
  *(undefined4 *)(this + 0x2d0) = 0x42c00000;
  *(undefined4 *)(this + 0x2e8) = 0x3f800000;
  *(undefined4 *)(this + 0x2e4) = 0x3f19999a;
  return;
}


/* CeleryStalkerProps::StaticNew() */

CeleryStalkerProps * CeleryStalkerProps::StaticNew(void)

{
  CeleryStalkerProps *this;
  
  this = ::operator_new(0x2f0);
  CeleryStalkerProps(this);
  return this;
}


/* CeleryStalkerProps::~CeleryStalkerProps() */

void __thiscall CeleryStalkerProps::~CeleryStalkerProps(CeleryStalkerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f2b30;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CeleryStalkerProps::~CeleryStalkerProps() */

void __thiscall CeleryStalkerProps::~CeleryStalkerProps(CeleryStalkerProps *this)

{
  ~CeleryStalkerProps(this);
  AK::FreeHook(this);
  return;
}

