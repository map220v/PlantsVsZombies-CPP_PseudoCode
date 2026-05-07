// Class: DragonBruitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitProps::StaticClassInit() */

void DragonBruitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonBruitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d783b8,0x360,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonBruitProps::StaticGetClass() */

long * DragonBruitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitProps::GetClass() const */

long * DragonBruitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitProps::DragonBruitProps() */

void __thiscall DragonBruitProps::DragonBruitProps(DragonBruitProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069b6cd0;
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x2b8));
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x2e0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x328));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x338));
  *(undefined4 *)(this + 800) = 2;
  *(undefined4 *)(this + 0x308) = 0x40a00000;
  *(undefined4 *)(this + 0x310) = 0x42f00000;
  *(undefined4 *)(this + 0x30c) = 0x40a00000;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x31c) = 0x43070000;
  *(undefined4 *)(this + 0x314) = 0x41200000;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x324) = 0x432f0000;
  *(undefined4 *)(this + 0x318) = 0x40000000;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x334) = 0x402ccccd;
  return;
}


/* DragonBruitProps::StaticNew() */

DragonBruitProps * DragonBruitProps::StaticNew(void)

{
  DragonBruitProps *this;
  
  this = ::operator_new(0x360);
  DragonBruitProps(this);
  return this;
}


/* DragonBruitProps::~DragonBruitProps() */

void __thiscall DragonBruitProps::~DragonBruitProps(DragonBruitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b6cd0;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x338));
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x2e0));
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DragonBruitProps::~DragonBruitProps() */

void __thiscall DragonBruitProps::~DragonBruitProps(DragonBruitProps *this)

{
  ~DragonBruitProps(this);
  AK::FreeHook(this);
  return;
}

