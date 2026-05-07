// Class: PlantSarraceniaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSarraceniaProps::StaticClassInit() */

void PlantSarraceniaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSarraceniaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d1adcc,0x370,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSarraceniaProps::StaticGetClass() */

long * PlantSarraceniaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSarraceniaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSarraceniaProps::GetClass() const */

long * PlantSarraceniaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSarraceniaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSarraceniaProps::PlantSarraceniaProps() */

void __thiscall PlantSarraceniaProps::PlantSarraceniaProps(PlantSarraceniaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a9290;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x318));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x340));
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x2b8) = 0x40400000;
  *(undefined4 *)(this + 0x2c0) = 0x418c0000;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 700) = 0x41a00000;
  *(undefined4 *)(this + 0x2cc) = 0x42b40000;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x2c4) = 0x41700000;
  *(undefined4 *)(this + 0x2d0) = 0x43fa0000;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x2c8) = 0x3fc00000;
  *(undefined4 *)(this + 0x2d4) = 0x42c80000;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  return;
}


/* PlantSarraceniaProps::StaticNew() */

PlantSarraceniaProps * PlantSarraceniaProps::StaticNew(void)

{
  PlantSarraceniaProps *this;
  
  this = ::operator_new(0x370);
  PlantSarraceniaProps(this);
  return this;
}


/* PlantSarraceniaProps::~PlantSarraceniaProps() */

void __thiscall PlantSarraceniaProps::~PlantSarraceniaProps(PlantSarraceniaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a9290;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x340));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x318));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantSarraceniaProps::~PlantSarraceniaProps() */

void __thiscall PlantSarraceniaProps::~PlantSarraceniaProps(PlantSarraceniaProps *this)

{
  ~PlantSarraceniaProps(this);
  AK::FreeHook(this);
  return;
}

