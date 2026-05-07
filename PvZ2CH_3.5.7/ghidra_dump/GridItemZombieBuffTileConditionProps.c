// Class: GridItemZombieBuffTileConditionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileConditionProps::StaticClassInit() */

void GridItemZombieBuffTileConditionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBuffTileConditionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e16e04,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTileConditionProps::StaticGetClass() */

long * GridItemZombieBuffTileConditionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBuffTileConditionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileConditionProps::GetClass() const */

long * GridItemZombieBuffTileConditionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBuffTileConditionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileConditionProps::GridItemZombieBuffTileConditionProps() */

void __thiscall
GridItemZombieBuffTileConditionProps::GridItemZombieBuffTileConditionProps
          (GridItemZombieBuffTileConditionProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  GridItemZombieBuffTileProps::GridItemZombieBuffTileProps((GridItemZombieBuffTileProps *)this);
  *(undefined ***)this = &PTR_GetClass_06784a60;
  *(undefined4 *)(this + 0xe8) = 0;
  std::string::string((string *)(this + 0xf0),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTileConditionProps::StaticNew() */

GridItemZombieBuffTileConditionProps * GridItemZombieBuffTileConditionProps::StaticNew(void)

{
  GridItemZombieBuffTileConditionProps *this;
  
  this = ::operator_new(0xf8);
  GridItemZombieBuffTileConditionProps(this);
  return this;
}


/* GridItemZombieBuffTileConditionProps::~GridItemZombieBuffTileConditionProps() */

void __thiscall
GridItemZombieBuffTileConditionProps::~GridItemZombieBuffTileConditionProps
          (GridItemZombieBuffTileConditionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06784a60;
  std::string::~string((string *)(this + 0xf0));
  GridItemZombieBuffTileProps::~GridItemZombieBuffTileProps((GridItemZombieBuffTileProps *)this);
  return;
}


/* GridItemZombieBuffTileConditionProps::~GridItemZombieBuffTileConditionProps() */

void __thiscall
GridItemZombieBuffTileConditionProps::~GridItemZombieBuffTileConditionProps
          (GridItemZombieBuffTileConditionProps *this)

{
  ~GridItemZombieBuffTileConditionProps(this);
  AK::FreeHook(this);
  return;
}

