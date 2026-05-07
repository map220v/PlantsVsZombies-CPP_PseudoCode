// Class: DinosaurYoungerPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurYoungerPropertySheet::StaticClassInit() */

void DinosaurYoungerPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurYoungerPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0482ec90,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurYoungerPropertySheet::StaticGetClass() */

long * DinosaurYoungerPropertySheet::StaticGetClass(void)

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
  uVar2 = DinosaurPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurYoungerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurYoungerPropertySheet::GetClass() const */

long * DinosaurYoungerPropertySheet::GetClass(void)

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
  uVar2 = DinosaurPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurYoungerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurYoungerPropertySheet::DinosaurYoungerPropertySheet() */

void __thiscall
DinosaurYoungerPropertySheet::DinosaurYoungerPropertySheet(DinosaurYoungerPropertySheet *this)

{
  bool bVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06905e80;
  Set8BytesTo0(this + 0xc0);
  Set8BytesTo0(this + 200);
  Set8BytesTo0(this + 0xd0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,90.0,125.0);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 100) = local_10;
  this[0xd8] = (DinosaurYoungerPropertySheet)0x1;
  *(undefined4 *)(this + 0xac) = 0x3f000000;
  *(undefined4 *)(this + 0xa8) = 0x43110000;
  *(undefined4 *)(this + 0xb0) = 0x40000000;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0x40000000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurYoungerPropertySheet::StaticNew() */

DinosaurYoungerPropertySheet * DinosaurYoungerPropertySheet::StaticNew(void)

{
  DinosaurYoungerPropertySheet *this;
  
  this = ::operator_new(0xe0);
  DinosaurYoungerPropertySheet(this);
  return this;
}


/* DinosaurYoungerPropertySheet::~DinosaurYoungerPropertySheet() */

void __thiscall
DinosaurYoungerPropertySheet::~DinosaurYoungerPropertySheet(DinosaurYoungerPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06905e80;
  std::string::~string((string *)(this + 0xd0));
  std::string::~string((string *)(this + 200));
  std::string::~string((string *)(this + 0xc0));
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurYoungerPropertySheet::~DinosaurYoungerPropertySheet() */

void __thiscall
DinosaurYoungerPropertySheet::~DinosaurYoungerPropertySheet(DinosaurYoungerPropertySheet *this)

{
  ~DinosaurYoungerPropertySheet(this);
  AK::FreeHook(this);
  return;
}

