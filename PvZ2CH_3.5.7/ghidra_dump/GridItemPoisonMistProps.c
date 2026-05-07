// Class: GridItemPoisonMistProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMistProps::StaticClassInit() */

void GridItemPoisonMistProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPoisonMistProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04edabc0,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPoisonMistProps::StaticGetClass() */

long * GridItemPoisonMistProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPoisonMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPoisonMistProps::GetClass() const */

long * GridItemPoisonMistProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPoisonMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPoisonMistProps::GridItemPoisonMistProps() */

void __thiscall GridItemPoisonMistProps::GridItemPoisonMistProps(GridItemPoisonMistProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_069fc120;
  *(undefined4 *)(this + 0xd4) = 0x3e4ccccd;
  return;
}


/* GridItemPoisonMistProps::StaticNew() */

GridItemPoisonMistProps * GridItemPoisonMistProps::StaticNew(void)

{
  GridItemPoisonMistProps *this;
  
  this = ::operator_new(0xd8);
  GridItemPoisonMistProps(this);
  return this;
}


/* GridItemPoisonMistProps::~GridItemPoisonMistProps() */

void __thiscall GridItemPoisonMistProps::~GridItemPoisonMistProps(GridItemPoisonMistProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069fc120;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemPoisonMistProps::~GridItemPoisonMistProps() */

void __thiscall GridItemPoisonMistProps::~GridItemPoisonMistProps(GridItemPoisonMistProps *this)

{
  ~GridItemPoisonMistProps(this);
  AK::FreeHook(this);
  return;
}

