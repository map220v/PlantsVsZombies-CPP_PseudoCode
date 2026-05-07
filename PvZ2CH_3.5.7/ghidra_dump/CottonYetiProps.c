// Class: CottonYetiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiProps::StaticClassInit() */

void CottonYetiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CottonYetiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f982fc,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CottonYetiProps::CottonYetiProps() */

void __thiscall CottonYetiProps::CottonYetiProps(CottonYetiProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_067a5500;
  *(undefined4 *)(this + 0x2c0) = 0x40400000;
  *(undefined4 *)(this + 700) = 0x42480000;
  *(undefined4 *)(this + 0x2c4) = 0x3dcccccd;
  return;
}


/* CottonYetiProps::StaticNew() */

CottonYetiProps * CottonYetiProps::StaticNew(void)

{
  CottonYetiProps *this;
  
  this = ::operator_new(0x2c8);
  CottonYetiProps(this);
  return this;
}


/* CottonYetiProps::~CottonYetiProps() */

void __thiscall CottonYetiProps::~CottonYetiProps(CottonYetiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5500;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CottonYetiProps::~CottonYetiProps() */

void __thiscall CottonYetiProps::~CottonYetiProps(CottonYetiProps *this)

{
  ~CottonYetiProps(this);
  AK::FreeHook(this);
  return;
}


/* CottonYetiProps::StaticGetClass() */

long * CottonYetiProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CottonYetiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CottonYetiProps::GetClass() const */

long * CottonYetiProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CottonYetiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

