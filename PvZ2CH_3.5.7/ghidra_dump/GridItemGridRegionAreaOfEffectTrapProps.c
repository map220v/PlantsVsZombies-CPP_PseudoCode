// Class: GridItemGridRegionAreaOfEffectTrapProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrapProps::StaticClassInit() */

void GridItemGridRegionAreaOfEffectTrapProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGridRegionAreaOfEffectTrapProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e302e8,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGridRegionAreaOfEffectTrapProps::StaticGetClass() */

long * GridItemGridRegionAreaOfEffectTrapProps::StaticGetClass(void)

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
  uVar2 = GridItemTriggerTileProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGridRegionAreaOfEffectTrapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGridRegionAreaOfEffectTrapProps::GetClass() const */

long * GridItemGridRegionAreaOfEffectTrapProps::GetClass(void)

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
  uVar2 = GridItemTriggerTileProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGridRegionAreaOfEffectTrapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGridRegionAreaOfEffectTrapProps::GridItemGridRegionAreaOfEffectTrapProps() */

void __thiscall
GridItemGridRegionAreaOfEffectTrapProps::GridItemGridRegionAreaOfEffectTrapProps
          (GridItemGridRegionAreaOfEffectTrapProps *this)

{
  GridItemTriggerTileProps::GridItemTriggerTileProps((GridItemTriggerTileProps *)this);
  *(undefined ***)this = &PTR_GetClass_06788d50;
  Set8BytesTo0(this + 0x100);
  Set8BytesTo0(this + 0x108);
  *(undefined4 *)(this + 0x110) = 1;
  *(undefined4 *)(this + 0x114) = 1;
  *(undefined4 *)(this + 0x118) = 0;
  return;
}


/* GridItemGridRegionAreaOfEffectTrapProps::StaticNew() */

GridItemGridRegionAreaOfEffectTrapProps * GridItemGridRegionAreaOfEffectTrapProps::StaticNew(void)

{
  GridItemGridRegionAreaOfEffectTrapProps *this;
  
  this = ::operator_new(0x120);
  GridItemGridRegionAreaOfEffectTrapProps(this);
  return this;
}


/* GridItemGridRegionAreaOfEffectTrapProps::~GridItemGridRegionAreaOfEffectTrapProps() */

void __thiscall
GridItemGridRegionAreaOfEffectTrapProps::~GridItemGridRegionAreaOfEffectTrapProps
          (GridItemGridRegionAreaOfEffectTrapProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06788d50;
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  GridItemTriggerTileProps::~GridItemTriggerTileProps((GridItemTriggerTileProps *)this);
  return;
}


/* GridItemGridRegionAreaOfEffectTrapProps::~GridItemGridRegionAreaOfEffectTrapProps() */

void __thiscall
GridItemGridRegionAreaOfEffectTrapProps::~GridItemGridRegionAreaOfEffectTrapProps
          (GridItemGridRegionAreaOfEffectTrapProps *this)

{
  ~GridItemGridRegionAreaOfEffectTrapProps(this);
  AK::FreeHook(this);
  return;
}

