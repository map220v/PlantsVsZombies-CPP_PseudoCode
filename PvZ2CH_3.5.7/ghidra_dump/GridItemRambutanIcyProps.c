// Class: GridItemRambutanIcyProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRambutanIcyProps::StaticClassInit() */

void GridItemRambutanIcyProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRambutanIcyProps");
    (*pcVar2)(plVar1,asStack_10,FUN_038a3ff0,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRambutanIcyProps::StaticGetClass() */

long * GridItemRambutanIcyProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRambutanIcyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRambutanIcyProps::GetClass() const */

long * GridItemRambutanIcyProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRambutanIcyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRambutanIcyProps::GridItemRambutanIcyProps() */

void __thiscall GridItemRambutanIcyProps::GridItemRambutanIcyProps(GridItemRambutanIcyProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40400000;
  *(undefined ***)this = &PTR_GetClass_066b2750;
  return;
}


/* GridItemRambutanIcyProps::StaticNew() */

GridItemRambutanIcyProps * GridItemRambutanIcyProps::StaticNew(void)

{
  GridItemRambutanIcyProps *this;
  
  this = ::operator_new(0xd8);
  GridItemRambutanIcyProps(this);
  return this;
}


/* GridItemRambutanIcyProps::~GridItemRambutanIcyProps() */

void __thiscall GridItemRambutanIcyProps::~GridItemRambutanIcyProps(GridItemRambutanIcyProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066b2750;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemRambutanIcyProps::~GridItemRambutanIcyProps() */

void __thiscall GridItemRambutanIcyProps::~GridItemRambutanIcyProps(GridItemRambutanIcyProps *this)

{
  ~GridItemRambutanIcyProps(this);
  AK::FreeHook(this);
  return;
}

