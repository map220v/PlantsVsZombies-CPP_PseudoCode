// Class: GridIcelotusDropwaterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwaterProps::StaticClassInit() */

void GridIcelotusDropwaterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridIcelotusDropwaterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce6e40,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridIcelotusDropwaterProps::StaticGetClass() */

long * GridIcelotusDropwaterProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridIcelotusDropwaterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridIcelotusDropwaterProps::GetClass() const */

long * GridIcelotusDropwaterProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridIcelotusDropwaterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridIcelotusDropwaterProps::GridIcelotusDropwaterProps() */

void __thiscall
GridIcelotusDropwaterProps::GridIcelotusDropwaterProps(GridIcelotusDropwaterProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_069a2040;
  *(undefined4 *)(this + 0xd4) = 0x40400000;
  return;
}


/* GridIcelotusDropwaterProps::StaticNew() */

GridIcelotusDropwaterProps * GridIcelotusDropwaterProps::StaticNew(void)

{
  GridIcelotusDropwaterProps *this;
  
  this = ::operator_new(0xd8);
  GridIcelotusDropwaterProps(this);
  return this;
}


/* GridIcelotusDropwaterProps::~GridIcelotusDropwaterProps() */

void __thiscall
GridIcelotusDropwaterProps::~GridIcelotusDropwaterProps(GridIcelotusDropwaterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a2040;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridIcelotusDropwaterProps::~GridIcelotusDropwaterProps() */

void __thiscall
GridIcelotusDropwaterProps::~GridIcelotusDropwaterProps(GridIcelotusDropwaterProps *this)

{
  ~GridIcelotusDropwaterProps(this);
  AK::FreeHook(this);
  return;
}

