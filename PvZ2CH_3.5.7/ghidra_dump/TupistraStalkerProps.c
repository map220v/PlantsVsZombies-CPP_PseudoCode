// Class: TupistraStalkerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TupistraStalkerProps::StaticClassInit() */

void TupistraStalkerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TupistraStalkerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041559c0,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TupistraStalkerProps::StaticGetClass() */

long * TupistraStalkerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TupistraStalkerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TupistraStalkerProps::GetClass() const */

long * TupistraStalkerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"TupistraStalkerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TupistraStalkerProps::TupistraStalkerProps() */

void __thiscall TupistraStalkerProps::TupistraStalkerProps(TupistraStalkerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f1020;
  Set8BytesTo0((string *)(this + 0x2d0));
  *(undefined4 *)(this + 700) = 0x40400000;
  *(undefined4 *)(this + 0x2b8) = 0x43960000;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c8) = 0x44160000;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  std::string::append((string *)(this + 0x2d0),"leaf",0x44160000);
  return;
}


/* TupistraStalkerProps::StaticNew() */

TupistraStalkerProps * TupistraStalkerProps::StaticNew(void)

{
  TupistraStalkerProps *this;
  
  this = ::operator_new(0x2d8);
  TupistraStalkerProps(this);
  return this;
}


/* TupistraStalkerProps::~TupistraStalkerProps() */

void __thiscall TupistraStalkerProps::~TupistraStalkerProps(TupistraStalkerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f1020;
  std::string::~string((string *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TupistraStalkerProps::~TupistraStalkerProps() */

void __thiscall TupistraStalkerProps::~TupistraStalkerProps(TupistraStalkerProps *this)

{
  ~TupistraStalkerProps(this);
  AK::FreeHook(this);
  return;
}

