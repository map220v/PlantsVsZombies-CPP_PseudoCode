// Class: DragonFruitLavaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitLavaProps::StaticClassInit() */

void DragonFruitLavaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonFruitLavaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040fdf1c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonFruitLavaProps::StaticGetClass() */

long * DragonFruitLavaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonFruitLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitLavaProps::GetClass() const */

long * DragonFruitLavaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonFruitLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitLavaProps::DragonFruitLavaProps() */

void __thiscall DragonFruitLavaProps::DragonFruitLavaProps(DragonFruitLavaProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_067e2710;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0xd8));
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


/* DragonFruitLavaProps::StaticNew() */

DragonFruitLavaProps * DragonFruitLavaProps::StaticNew(void)

{
  DragonFruitLavaProps *this;
  
  this = ::operator_new(0x1f0);
  DragonFruitLavaProps(this);
  return this;
}


/* DragonFruitLavaProps::~DragonFruitLavaProps() */

void __thiscall DragonFruitLavaProps::~DragonFruitLavaProps(DragonFruitLavaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e2710;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* DragonFruitLavaProps::~DragonFruitLavaProps() */

void __thiscall DragonFruitLavaProps::~DragonFruitLavaProps(DragonFruitLavaProps *this)

{
  ~DragonFruitLavaProps(this);
  AK::FreeHook(this);
  return;
}

