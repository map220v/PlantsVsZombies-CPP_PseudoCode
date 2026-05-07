// Class: DragonBabyBruitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBabyBruitProps::StaticClassInit() */

void DragonBabyBruitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonBabyBruitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d80894,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonBabyBruitProps::StaticGetClass() */

long * DragonBabyBruitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonBabyBruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBabyBruitProps::GetClass() const */

long * DragonBabyBruitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonBabyBruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBabyBruitProps::DragonBabyBruitProps() */

void __thiscall DragonBabyBruitProps::DragonBabyBruitProps(DragonBabyBruitProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069b7c90;
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x2b8));
  *(undefined4 *)(this + 0x2ec) = 0x41200000;
  *(undefined4 *)(this + 0x2f0) = 0x41200000;
  *(undefined4 *)(this + 0x2f4) = 0x40000000;
  *(undefined4 *)(this + 0x2e0) = 0x40a00000;
  *(undefined4 *)(this + 0x2e4) = 0x40a00000;
  *(undefined4 *)(this + 0x2e8) = 0x42a00000;
  *(undefined4 *)(this + 0x2f8) = 0x40600000;
  return;
}


/* DragonBabyBruitProps::StaticNew() */

DragonBabyBruitProps * DragonBabyBruitProps::StaticNew(void)

{
  DragonBabyBruitProps *this;
  
  this = ::operator_new(0x300);
  DragonBabyBruitProps(this);
  return this;
}


/* DragonBabyBruitProps::~DragonBabyBruitProps() */

void __thiscall DragonBabyBruitProps::~DragonBabyBruitProps(DragonBabyBruitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b7c90;
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DragonBabyBruitProps::~DragonBabyBruitProps() */

void __thiscall DragonBabyBruitProps::~DragonBabyBruitProps(DragonBabyBruitProps *this)

{
  ~DragonBabyBruitProps(this);
  AK::FreeHook(this);
  return;
}

