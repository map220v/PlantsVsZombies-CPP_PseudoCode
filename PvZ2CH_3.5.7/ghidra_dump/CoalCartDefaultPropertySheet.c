// Class: CoalCartDefaultPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoalCartDefaultPropertySheet::StaticClassInit() */

void CoalCartDefaultPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoalCartDefaultPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03c56034,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoalCartDefaultPropertySheet::~CoalCartDefaultPropertySheet() */

void __thiscall
CoalCartDefaultPropertySheet::~CoalCartDefaultPropertySheet(CoalCartDefaultPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06753720;
  std::string::~string((string *)(this + 0x98));
  ArmorPropertySheet::~ArmorPropertySheet((ArmorPropertySheet *)this);
  return;
}


/* CoalCartDefaultPropertySheet::~CoalCartDefaultPropertySheet() */

void __thiscall
CoalCartDefaultPropertySheet::~CoalCartDefaultPropertySheet(CoalCartDefaultPropertySheet *this)

{
  ~CoalCartDefaultPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* CoalCartDefaultPropertySheet::CoalCartDefaultPropertySheet() */

void __thiscall
CoalCartDefaultPropertySheet::CoalCartDefaultPropertySheet(CoalCartDefaultPropertySheet *this)

{
  ArmorPropertySheet::ArmorPropertySheet((ArmorPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06753720;
  Set8BytesTo0(this + 0x98);
  return;
}


/* CoalCartDefaultPropertySheet::StaticNew() */

CoalCartDefaultPropertySheet * CoalCartDefaultPropertySheet::StaticNew(void)

{
  CoalCartDefaultPropertySheet *this;
  
  this = ::operator_new(0xa0);
  CoalCartDefaultPropertySheet(this);
  return this;
}


/* CoalCartDefaultPropertySheet::StaticGetClass() */

long * CoalCartDefaultPropertySheet::StaticGetClass(void)

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
  uVar2 = ArmorPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"CoalCartDefaultPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoalCartDefaultPropertySheet::GetClass() const */

long * CoalCartDefaultPropertySheet::GetClass(void)

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
  uVar2 = ArmorPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"CoalCartDefaultPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

