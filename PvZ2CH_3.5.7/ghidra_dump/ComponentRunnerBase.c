// Class: ComponentRunnerBase


/* ComponentRunnerBase::StaticNew() */

undefined8 ComponentRunnerBase::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunnerBase::StaticClassInit() */

void ComponentRunnerBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentRunnerBase");
    (*pcVar2)(plVar1,asStack_10,FUN_03b86a70,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRunnerBase::StaticGetClass() */

long * ComponentRunnerBase::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentRunnerBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentRunnerBase::GetClass() const */

long * ComponentRunnerBase::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentRunnerBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentRunnerBase::ComponentRunnerBase() */

void __thiscall ComponentRunnerBase::ComponentRunnerBase(ComponentRunnerBase *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_067356c0;
  return;
}


/* ComponentRunnerBase::~ComponentRunnerBase() */

void __thiscall ComponentRunnerBase::~ComponentRunnerBase(ComponentRunnerBase *this)

{
  *(undefined ***)this = &PTR_GetClass_067356c0;
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentRunnerBase::~ComponentRunnerBase() */

void __thiscall ComponentRunnerBase::~ComponentRunnerBase(ComponentRunnerBase *this)

{
  ~ComponentRunnerBase(this);
  AK::FreeHook(this);
  return;
}

