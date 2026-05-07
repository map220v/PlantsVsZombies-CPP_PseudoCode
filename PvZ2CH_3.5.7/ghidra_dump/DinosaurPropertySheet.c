// Class: DinosaurPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPropertySheet::StaticClassInit() */

void DinosaurPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_048179e4,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurPropertySheet::StaticGetClass() */

long * DinosaurPropertySheet::StaticGetClass(void)

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
  uVar2 = CreaturePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurPropertySheet::GetClass() const */

long * DinosaurPropertySheet::GetClass(void)

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
  uVar2 = CreaturePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurPropertySheet::DinosaurPropertySheet() */

void __thiscall DinosaurPropertySheet::DinosaurPropertySheet(DinosaurPropertySheet *this)

{
  CreaturePropertySheet::CreaturePropertySheet((CreaturePropertySheet *)this);
  *(undefined4 *)(this + 0xa0) = 5;
  *(undefined ***)this = &PTR_GetClass_06903730;
  *(undefined4 *)(this + 0xa4) = 0x41f00000;
  return;
}


/* DinosaurPropertySheet::StaticNew() */

DinosaurPropertySheet * DinosaurPropertySheet::StaticNew(void)

{
  DinosaurPropertySheet *this;
  
  this = ::operator_new(0xa8);
  DinosaurPropertySheet(this);
  return this;
}


/* DinosaurPropertySheet::~DinosaurPropertySheet() */

void __thiscall DinosaurPropertySheet::~DinosaurPropertySheet(DinosaurPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06903730;
  CreaturePropertySheet::~CreaturePropertySheet((CreaturePropertySheet *)this);
  return;
}


/* DinosaurPropertySheet::~DinosaurPropertySheet() */

void __thiscall DinosaurPropertySheet::~DinosaurPropertySheet(DinosaurPropertySheet *this)

{
  ~DinosaurPropertySheet(this);
  AK::FreeHook(this);
  return;
}

