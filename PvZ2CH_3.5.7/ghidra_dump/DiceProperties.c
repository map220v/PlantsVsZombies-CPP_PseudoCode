// Class: DiceProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiceProperties::StaticClassInit() */

void DiceProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DiceProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038dcd64,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DiceProperties::StaticGetClass() */

long * DiceProperties::StaticGetClass(void)

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
  uVar2 = HotUIAnimProperties::StaticGetClass();
  (*pcVar3)(plVar1,"DiceProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DiceProperties::GetClass() const */

long * DiceProperties::GetClass(void)

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
  uVar2 = HotUIAnimProperties::StaticGetClass();
  (*pcVar3)(plVar1,"DiceProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DiceProperties::GetWidgetClass() const */

long * DiceProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (Dice::sClass != (long *)0x0) {
    return Dice::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  Dice::sClass = plVar1;
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055d36a8,uVar2,Dice::StaticNew);
  Dice::StaticClassInit();
  return Dice::sClass;
}


/* DiceProperties::DiceProperties() */

void __thiscall DiceProperties::DiceProperties(DiceProperties *this)

{
  HotUIAnimProperties::HotUIAnimProperties((HotUIAnimProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066bc010;
  return;
}


/* DiceProperties::StaticNew() */

DiceProperties * DiceProperties::StaticNew(void)

{
  DiceProperties *this;
  
  this = ::operator_new(0x170);
  DiceProperties(this);
  return this;
}


/* DiceProperties::~DiceProperties() */

void __thiscall DiceProperties::~DiceProperties(DiceProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066bc010;
  HotUIAnimProperties::~HotUIAnimProperties((HotUIAnimProperties *)this);
  return;
}


/* DiceProperties::~DiceProperties() */

void __thiscall DiceProperties::~DiceProperties(DiceProperties *this)

{
  ~DiceProperties(this);
  AK::FreeHook(this);
  return;
}

