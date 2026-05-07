// Class: DinosaurRunnerPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunnerPropertySheet::StaticClassInit() */

void DinosaurRunnerPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurRunnerPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04833540,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunnerPropertySheet::StaticGetClass() */

long * DinosaurRunnerPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurRunnerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRunnerPropertySheet::GetClass() const */

long * DinosaurRunnerPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurRunnerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunnerPropertySheet::DinosaurRunnerPropertySheet() */

void __thiscall
DinosaurRunnerPropertySheet::DinosaurRunnerPropertySheet(DinosaurRunnerPropertySheet *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06907630;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,90.0,125.0);
  *(undefined4 *)(this + 0xb4) = 1;
  *(undefined4 *)(this + 0xbc) = 1;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 100) = local_10;
  *(undefined4 *)(this + 0xb0) = 3;
  *(undefined4 *)(this + 0xb8) = 2;
  *(undefined4 *)(this + 0xa8) = 0x43110000;
  *(undefined4 *)(this + 0xac) = 0x3f000000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRunnerPropertySheet::StaticNew() */

DinosaurRunnerPropertySheet * DinosaurRunnerPropertySheet::StaticNew(void)

{
  DinosaurRunnerPropertySheet *this;
  
  this = ::operator_new(0xc0);
  DinosaurRunnerPropertySheet(this);
  return this;
}


/* DinosaurRunnerPropertySheet::~DinosaurRunnerPropertySheet() */

void __thiscall
DinosaurRunnerPropertySheet::~DinosaurRunnerPropertySheet(DinosaurRunnerPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06907630;
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurRunnerPropertySheet::~DinosaurRunnerPropertySheet() */

void __thiscall
DinosaurRunnerPropertySheet::~DinosaurRunnerPropertySheet(DinosaurRunnerPropertySheet *this)

{
  ~DinosaurRunnerPropertySheet(this);
  AK::FreeHook(this);
  return;
}

