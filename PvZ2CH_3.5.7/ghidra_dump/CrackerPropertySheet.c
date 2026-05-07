// Class: CrackerPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerPropertySheet::StaticClassInit() */

void CrackerPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"CrackerPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_040a1840,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrackerPropertySheet::StaticGetClass() */

long * CrackerPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CrackerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CrackerPropertySheet::GetClass() const */

long * CrackerPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"CrackerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CrackerPropertySheet::CrackerPropertySheet() */

void __thiscall CrackerPropertySheet::CrackerPropertySheet(CrackerPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d0bb0;
  return;
}


/* CrackerPropertySheet::StaticNew() */

CrackerPropertySheet * CrackerPropertySheet::StaticNew(void)

{
  CrackerPropertySheet *this;
  
  this = ::operator_new(0x2c8);
  CrackerPropertySheet(this);
  return this;
}


/* CrackerPropertySheet::~CrackerPropertySheet() */

void __thiscall CrackerPropertySheet::~CrackerPropertySheet(CrackerPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0bb0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CrackerPropertySheet::~CrackerPropertySheet() */

void __thiscall CrackerPropertySheet::~CrackerPropertySheet(CrackerPropertySheet *this)

{
  ~CrackerPropertySheet(this);
  AK::FreeHook(this);
  return;
}

