// Class: GridItemCardGameZombieBarrelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrelProps::StaticClassInit() */

void GridItemCardGameZombieBarrelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieBarrelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1de7c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieBarrelProps::StaticGetClass() */

long * GridItemCardGameZombieBarrelProps::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieBarrelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieBarrelProps::GetClass() const */

long * GridItemCardGameZombieBarrelProps::GetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieBarrelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieBarrelProps::GridItemCardGameZombieBarrelProps() */

void __thiscall
GridItemCardGameZombieBarrelProps::GridItemCardGameZombieBarrelProps
          (GridItemCardGameZombieBarrelProps *this)

{
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d7900;
  GriditemBarrelParams::GriditemBarrelParams((GriditemBarrelParams *)(this + 0x168));
  GriditemBarrelParams::GriditemBarrelParams((GriditemBarrelParams *)(this + 0x198));
  *(undefined4 *)(this + 0x160) = 2;
  *(undefined4 *)(this + 400) = 1;
  return;
}


/* GridItemCardGameZombieBarrelProps::StaticNew() */

GridItemCardGameZombieBarrelProps * GridItemCardGameZombieBarrelProps::StaticNew(void)

{
  GridItemCardGameZombieBarrelProps *this;
  
  this = ::operator_new(0x1c0);
  GridItemCardGameZombieBarrelProps(this);
  return this;
}


/* GridItemCardGameZombieBarrelProps::~GridItemCardGameZombieBarrelProps() */

void __thiscall
GridItemCardGameZombieBarrelProps::~GridItemCardGameZombieBarrelProps
          (GridItemCardGameZombieBarrelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7900;
  GriditemBarrelParams::~GriditemBarrelParams((GriditemBarrelParams *)(this + 0x198));
  GriditemBarrelParams::~GriditemBarrelParams((GriditemBarrelParams *)(this + 0x168));
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieBarrelProps::~GridItemCardGameZombieBarrelProps() */

void __thiscall
GridItemCardGameZombieBarrelProps::~GridItemCardGameZombieBarrelProps
          (GridItemCardGameZombieBarrelProps *this)

{
  ~GridItemCardGameZombieBarrelProps(this);
  AK::FreeHook(this);
  return;
}

