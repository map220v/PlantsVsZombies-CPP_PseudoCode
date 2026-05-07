// Class: DragonFruitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitProps::StaticClassInit() */

void DragonFruitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonFruitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040fdc5c,0x4f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonFruitProps::StaticGetClass() */

long * DragonFruitProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DragonFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitProps::GetClass() const */

long * DragonFruitProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DragonFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitProps::DragonFruitProps() */

void __thiscall DragonFruitProps::DragonFruitProps(DragonFruitProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067e1c60;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c0));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d8));
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* DragonFruitProps::StaticNew() */

DragonFruitProps * DragonFruitProps::StaticNew(void)

{
  DragonFruitProps *this;
  
  this = ::operator_new(0x4f0);
  DragonFruitProps(this);
  return this;
}


/* DragonFruitProps::~DragonFruitProps() */

void __thiscall DragonFruitProps::~DragonFruitProps(DragonFruitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e1c60;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d8));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DragonFruitProps::~DragonFruitProps() */

void __thiscall DragonFruitProps::~DragonFruitProps(DragonFruitProps *this)

{
  ~DragonFruitProps(this);
  AK::FreeHook(this);
  return;
}

