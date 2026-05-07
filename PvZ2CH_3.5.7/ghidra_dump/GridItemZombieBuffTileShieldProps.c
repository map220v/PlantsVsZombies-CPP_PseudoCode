// Class: GridItemZombieBuffTileShieldProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileShieldProps::StaticClassInit() */

void GridItemZombieBuffTileShieldProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBuffTileShieldProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e15d28,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTileShieldProps::StaticGetClass() */

long * GridItemZombieBuffTileShieldProps::StaticGetClass(void)

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
  uVar2 = GridItemZombieBuffTileProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieBuffTileShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileShieldProps::GetClass() const */

long * GridItemZombieBuffTileShieldProps::GetClass(void)

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
  uVar2 = GridItemZombieBuffTileProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieBuffTileShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileShieldProps::GridItemZombieBuffTileShieldProps() */

void __thiscall
GridItemZombieBuffTileShieldProps::GridItemZombieBuffTileShieldProps
          (GridItemZombieBuffTileShieldProps *this)

{
  GridItemZombieBuffTileProps::GridItemZombieBuffTileProps((GridItemZombieBuffTileProps *)this);
  *(undefined4 *)(this + 0xe4) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06784620;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  return;
}


/* GridItemZombieBuffTileShieldProps::StaticNew() */

GridItemZombieBuffTileShieldProps * GridItemZombieBuffTileShieldProps::StaticNew(void)

{
  GridItemZombieBuffTileShieldProps *this;
  
  this = ::operator_new(0xf0);
  GridItemZombieBuffTileShieldProps(this);
  return this;
}


/* GridItemZombieBuffTileShieldProps::~GridItemZombieBuffTileShieldProps() */

void __thiscall
GridItemZombieBuffTileShieldProps::~GridItemZombieBuffTileShieldProps
          (GridItemZombieBuffTileShieldProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06784620;
  GridItemZombieBuffTileProps::~GridItemZombieBuffTileProps((GridItemZombieBuffTileProps *)this);
  return;
}


/* GridItemZombieBuffTileShieldProps::~GridItemZombieBuffTileShieldProps() */

void __thiscall
GridItemZombieBuffTileShieldProps::~GridItemZombieBuffTileShieldProps
          (GridItemZombieBuffTileShieldProps *this)

{
  ~GridItemZombieBuffTileShieldProps(this);
  AK::FreeHook(this);
  return;
}

