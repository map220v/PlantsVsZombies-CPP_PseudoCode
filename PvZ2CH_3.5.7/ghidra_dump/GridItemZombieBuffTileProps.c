// Class: GridItemZombieBuffTileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileProps::StaticClassInit() */

void GridItemZombieBuffTileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBuffTileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e15648,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTileProps::StaticGetClass() */

long * GridItemZombieBuffTileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBuffTileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileProps::GetClass() const */

long * GridItemZombieBuffTileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBuffTileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileProps::GridItemZombieBuffTileProps() */

void __thiscall
GridItemZombieBuffTileProps::GridItemZombieBuffTileProps(GridItemZombieBuffTileProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06784280;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  return;
}


/* GridItemZombieBuffTileProps::StaticNew() */

GridItemZombieBuffTileProps * GridItemZombieBuffTileProps::StaticNew(void)

{
  GridItemZombieBuffTileProps *this;
  
  this = ::operator_new(0xe8);
  GridItemZombieBuffTileProps(this);
  return this;
}


/* GridItemZombieBuffTileProps::~GridItemZombieBuffTileProps() */

void __thiscall
GridItemZombieBuffTileProps::~GridItemZombieBuffTileProps(GridItemZombieBuffTileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06784280;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemZombieBuffTileProps::~GridItemZombieBuffTileProps() */

void __thiscall
GridItemZombieBuffTileProps::~GridItemZombieBuffTileProps(GridItemZombieBuffTileProps *this)

{
  ~GridItemZombieBuffTileProps(this);
  AK::FreeHook(this);
  return;
}

