// Class: PresentTypeCoin


/* PresentTypeCoin::~PresentTypeCoin() */

void __thiscall PresentTypeCoin::~PresentTypeCoin(PresentTypeCoin *this)

{
  *(undefined ***)this = &PTR_GetClass_068336c0;
  PresentType::~PresentType((PresentType *)this);
  return;
}


/* PresentTypeCoin::~PresentTypeCoin() */

void __thiscall PresentTypeCoin::~PresentTypeCoin(PresentTypeCoin *this)

{
  ~PresentTypeCoin(this);
  AK::FreeHook(this);
  return;
}


/* PresentTypeCoin::PresentTypeCoin() */

void __thiscall PresentTypeCoin::PresentTypeCoin(PresentTypeCoin *this)

{
  PresentType::PresentType((PresentType *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_068336c0;
  return;
}


/* PresentTypeCoin::StaticNew() */

PresentTypeCoin * PresentTypeCoin::StaticNew(void)

{
  PresentTypeCoin *this;
  
  this = ::operator_new(0x30);
  PresentTypeCoin(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentTypeCoin::StaticClassInit() */

void PresentTypeCoin::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresentTypeCoin");
    (*pcVar2)(plVar1,asStack_10,FUN_0431e0c0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentTypeCoin::StaticGetClass() */

long * PresentTypeCoin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PresentTypeCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentTypeCoin::GetClass() const */

long * PresentTypeCoin::GetClass(void)

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
  (*pcVar3)(plVar1,"PresentTypeCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

