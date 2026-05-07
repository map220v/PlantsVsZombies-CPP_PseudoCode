// Class: GridItemspearrainProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemspearrainProps::StaticClassInit() */

void GridItemspearrainProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemspearrainProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e44dbc,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemspearrainProps::StaticGetClass() */

long * GridItemspearrainProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemspearrainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemspearrainProps::GetClass() const */

long * GridItemspearrainProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemspearrainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemspearrainProps::GridItemspearrainProps() */

void __thiscall GridItemspearrainProps::GridItemspearrainProps(GridItemspearrainProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_069df690;
  return;
}


/* GridItemspearrainProps::StaticNew() */

GridItemspearrainProps * GridItemspearrainProps::StaticNew(void)

{
  GridItemspearrainProps *this;
  
  this = ::operator_new(0xd0);
  GridItemspearrainProps(this);
  return this;
}


/* GridItemspearrainProps::~GridItemspearrainProps() */

void __thiscall GridItemspearrainProps::~GridItemspearrainProps(GridItemspearrainProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069df690;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemspearrainProps::~GridItemspearrainProps() */

void __thiscall GridItemspearrainProps::~GridItemspearrainProps(GridItemspearrainProps *this)

{
  ~GridItemspearrainProps(this);
  AK::FreeHook(this);
  return;
}

