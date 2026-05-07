// Class: ArmorflameProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorflameProps::StaticClassInit() */

void ArmorflameProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmorflameProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042c1918,0x4f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorflameProps::StaticGetClass() */

long * ArmorflameProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameProps::GetClass() const */

long * ArmorflameProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmorflameProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorflameProps::ArmorflameProps() */

void __thiscall ArmorflameProps::ArmorflameProps(ArmorflameProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined ***)this = &PTR_GetClass_0682c900;
  *(undefined4 *)(this + 700) = 0x41200000;
  *(undefined4 *)(this + 0x2c0) = 0x3e800000;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c8));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3e0));
  return;
}


/* ArmorflameProps::StaticNew() */

ArmorflameProps * ArmorflameProps::StaticNew(void)

{
  ArmorflameProps *this;
  
  this = ::operator_new(0x4f8);
  ArmorflameProps(this);
  return this;
}


/* ArmorflameProps::~ArmorflameProps() */

void __thiscall ArmorflameProps::~ArmorflameProps(ArmorflameProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c900;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3e0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ArmorflameProps::~ArmorflameProps() */

void __thiscall ArmorflameProps::~ArmorflameProps(ArmorflameProps *this)

{
  ~ArmorflameProps(this);
  AK::FreeHook(this);
  return;
}

