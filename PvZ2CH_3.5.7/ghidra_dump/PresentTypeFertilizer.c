// Class: PresentTypeFertilizer


/* PresentTypeFertilizer::~PresentTypeFertilizer() */

void __thiscall PresentTypeFertilizer::~PresentTypeFertilizer(PresentTypeFertilizer *this)

{
  *(undefined ***)this = &PTR_GetClass_068337e0;
  PresentType::~PresentType((PresentType *)this);
  return;
}


/* PresentTypeFertilizer::~PresentTypeFertilizer() */

void __thiscall PresentTypeFertilizer::~PresentTypeFertilizer(PresentTypeFertilizer *this)

{
  ~PresentTypeFertilizer(this);
  AK::FreeHook(this);
  return;
}


/* PresentTypeFertilizer::PresentTypeFertilizer() */

void __thiscall PresentTypeFertilizer::PresentTypeFertilizer(PresentTypeFertilizer *this)

{
  PresentType::PresentType((PresentType *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_068337e0;
  return;
}


/* PresentTypeFertilizer::StaticNew() */

PresentTypeFertilizer * PresentTypeFertilizer::StaticNew(void)

{
  PresentTypeFertilizer *this;
  
  this = ::operator_new(0x30);
  PresentTypeFertilizer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTypeFertilizer::StaticClassInit() */

void PresentTypeFertilizer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresentTypeFertilizer");
    (*pcVar2)(plVar1,asStack_10,FUN_0431e95c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTypeFertilizer::StaticGetClass() */

long * PresentTypeFertilizer::StaticGetClass(void)

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
  uVar2 = PresentType::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTypeFertilizer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeFertilizer::GetClass() const */

long * PresentTypeFertilizer::GetClass(void)

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
  uVar2 = PresentType::StaticGetClass();
  (*pcVar3)(plVar1,"PresentTypeFertilizer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

