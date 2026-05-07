// Class: TallnutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TallnutProps::StaticClassInit() */

void TallnutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TallnutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8ff38,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TallnutProps::TallnutProps() */

void __thiscall TallnutProps::TallnutProps(TallnutProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3520;
  *(undefined4 *)(this + 0x2b8) = 0;
  return;
}


/* TallnutProps::StaticNew() */

TallnutProps * TallnutProps::StaticNew(void)

{
  TallnutProps *this;
  
  this = ::operator_new(0x2c0);
  TallnutProps(this);
  return this;
}


/* TallnutProps::~TallnutProps() */

void __thiscall TallnutProps::~TallnutProps(TallnutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3520;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TallnutProps::~TallnutProps() */

void __thiscall TallnutProps::~TallnutProps(TallnutProps *this)

{
  ~TallnutProps(this);
  AK::FreeHook(this);
  return;
}


/* TallnutProps::StaticGetClass() */

long * TallnutProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TallnutProps::GetClass() const */

long * TallnutProps::GetClass(void)

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
  (*pcVar3)(plVar1,"TallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

