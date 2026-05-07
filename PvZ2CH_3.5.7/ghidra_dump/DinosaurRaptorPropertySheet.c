// Class: DinosaurRaptorPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptorPropertySheet::StaticClassInit() */

void DinosaurRaptorPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurRaptorPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04823214,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRaptorPropertySheet::StaticGetClass() */

long * DinosaurRaptorPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurRaptorPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRaptorPropertySheet::GetClass() const */

long * DinosaurRaptorPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurRaptorPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRaptorPropertySheet::DinosaurRaptorPropertySheet() */

void __thiscall
DinosaurRaptorPropertySheet::DinosaurRaptorPropertySheet(DinosaurRaptorPropertySheet *this)

{
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06904a90;
  Sexy::Insets::Insets((Insets *)(this + 0xbc));
  *(undefined4 *)(this + 0xa8) = 5;
  *(undefined4 *)(this + 0xac) = 2;
  *(undefined4 *)(this + 0xcc) = 0x28;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}


/* DinosaurRaptorPropertySheet::StaticNew() */

DinosaurRaptorPropertySheet * DinosaurRaptorPropertySheet::StaticNew(void)

{
  DinosaurRaptorPropertySheet *this;
  
  this = ::operator_new(0xd0);
  DinosaurRaptorPropertySheet(this);
  return this;
}


/* DinosaurRaptorPropertySheet::~DinosaurRaptorPropertySheet() */

void __thiscall
DinosaurRaptorPropertySheet::~DinosaurRaptorPropertySheet(DinosaurRaptorPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06904a90;
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurRaptorPropertySheet::~DinosaurRaptorPropertySheet() */

void __thiscall
DinosaurRaptorPropertySheet::~DinosaurRaptorPropertySheet(DinosaurRaptorPropertySheet *this)

{
  ~DinosaurRaptorPropertySheet(this);
  AK::FreeHook(this);
  return;
}

