// Class: GridItemMagichatProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagichatProps::StaticClassInit() */

void GridItemMagichatProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagichatProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f2da4c,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagichatProps::StaticGetClass() */

long * GridItemMagichatProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagichatProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagichatProps::GetClass() const */

long * GridItemMagichatProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagichatProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagichatProps::GridItemMagichatProps() */

void __thiscall GridItemMagichatProps::GridItemMagichatProps(GridItemMagichatProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a12e70;
  return;
}


/* GridItemMagichatProps::StaticNew() */

GridItemMagichatProps * GridItemMagichatProps::StaticNew(void)

{
  GridItemMagichatProps *this;
  
  this = ::operator_new(0x138);
  GridItemMagichatProps(this);
  return this;
}


/* GridItemMagichatProps::~GridItemMagichatProps() */

void __thiscall GridItemMagichatProps::~GridItemMagichatProps(GridItemMagichatProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a12e70;
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemMagichatProps::~GridItemMagichatProps() */

void __thiscall GridItemMagichatProps::~GridItemMagichatProps(GridItemMagichatProps *this)

{
  ~GridItemMagichatProps(this);
  AK::FreeHook(this);
  return;
}

