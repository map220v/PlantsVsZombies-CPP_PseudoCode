// Class: PowerVineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerVineProps::StaticClassInit() */

void PowerVineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerVineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d1590c,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerVineProps::StaticGetClass() */

long * PowerVineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerVineProps::GetClass() const */

long * PowerVineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerVineProps::PowerVineProps() */

void __thiscall PowerVineProps::PowerVineProps(PowerVineProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined ***)this = &PTR_GetClass_069a8760;
  *(undefined4 *)(this + 700) = 2;
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined4 *)(this + 0x2c4) = 0x41700000;
  DVec2::DVec2((DVec2 *)(this + 0x2c8),-8.0,8.0);
  *(undefined4 *)(this + 0x2d0) = 0x3f000000;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  return;
}


/* PowerVineProps::StaticNew() */

PowerVineProps * PowerVineProps::StaticNew(void)

{
  PowerVineProps *this;
  
  this = ::operator_new(0x318);
  PowerVineProps(this);
  return this;
}


/* PowerVineProps::~PowerVineProps() */

void __thiscall PowerVineProps::~PowerVineProps(PowerVineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a8760;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PowerVineProps::~PowerVineProps() */

void __thiscall PowerVineProps::~PowerVineProps(PowerVineProps *this)

{
  ~PowerVineProps(this);
  AK::FreeHook(this);
  return;
}

