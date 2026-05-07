// Class: DinosaurAnkylosaurusPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurusPropertySheet::StaticClassInit() */

void DinosaurAnkylosaurusPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnkylosaurusPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0481f0a0,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnkylosaurusPropertySheet::StaticGetClass() */

long * DinosaurAnkylosaurusPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnkylosaurusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnkylosaurusPropertySheet::GetClass() const */

long * DinosaurAnkylosaurusPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnkylosaurusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnkylosaurusPropertySheet::DinosaurAnkylosaurusPropertySheet() */

void __thiscall
DinosaurAnkylosaurusPropertySheet::DinosaurAnkylosaurusPropertySheet
          (DinosaurAnkylosaurusPropertySheet *this)

{
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined4 *)(this + 0xa0) = 8;
  *(undefined ***)this = &PTR_GetClass_069044c0;
  *(undefined4 *)(this + 0xac) = 2;
  *(undefined4 *)(this + 0xb0) = 5;
  *(undefined4 *)(this + 0xa8) = 0x40a00000;
  *(undefined4 *)(this + 0xb4) = 4;
  *(undefined4 *)(this + 0x18) = 0x40800000;
  return;
}


/* DinosaurAnkylosaurusPropertySheet::StaticNew() */

DinosaurAnkylosaurusPropertySheet * DinosaurAnkylosaurusPropertySheet::StaticNew(void)

{
  DinosaurAnkylosaurusPropertySheet *this;
  
  this = ::operator_new(0xb8);
  DinosaurAnkylosaurusPropertySheet(this);
  return this;
}


/* DinosaurAnkylosaurusPropertySheet::~DinosaurAnkylosaurusPropertySheet() */

void __thiscall
DinosaurAnkylosaurusPropertySheet::~DinosaurAnkylosaurusPropertySheet
          (DinosaurAnkylosaurusPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_069044c0;
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurAnkylosaurusPropertySheet::~DinosaurAnkylosaurusPropertySheet() */

void __thiscall
DinosaurAnkylosaurusPropertySheet::~DinosaurAnkylosaurusPropertySheet
          (DinosaurAnkylosaurusPropertySheet *this)

{
  ~DinosaurAnkylosaurusPropertySheet(this);
  AK::FreeHook(this);
  return;
}

