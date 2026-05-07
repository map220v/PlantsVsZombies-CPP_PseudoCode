// Class: BoomFlowerPlantfoodProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerPlantfoodProjectileProps::StaticClassInit() */

void BoomFlowerPlantfoodProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomFlowerPlantfoodProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041171b8,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerPlantfoodProjectileProps::StaticGetClass() */

long * BoomFlowerPlantfoodProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"BoomFlowerPlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerPlantfoodProjectileProps::GetClass() const */

long * BoomFlowerPlantfoodProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"BoomFlowerPlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerPlantfoodProjectileProps::~BoomFlowerPlantfoodProjectileProps() */

void __thiscall
BoomFlowerPlantfoodProjectileProps::~BoomFlowerPlantfoodProjectileProps
          (BoomFlowerPlantfoodProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e73b0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BoomFlowerPlantfoodProjectileProps::~BoomFlowerPlantfoodProjectileProps() */

void __thiscall
BoomFlowerPlantfoodProjectileProps::~BoomFlowerPlantfoodProjectileProps
          (BoomFlowerPlantfoodProjectileProps *this)

{
  ~BoomFlowerPlantfoodProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BoomFlowerPlantfoodProjectileProps::BoomFlowerPlantfoodProjectileProps() */

void __thiscall
BoomFlowerPlantfoodProjectileProps::BoomFlowerPlantfoodProjectileProps
          (BoomFlowerPlantfoodProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067e73b0;
  return;
}


/* BoomFlowerPlantfoodProjectileProps::StaticNew() */

BoomFlowerPlantfoodProjectileProps * BoomFlowerPlantfoodProjectileProps::StaticNew(void)

{
  BoomFlowerPlantfoodProjectileProps *this;
  
  this = ::operator_new(0x1e0);
  BoomFlowerPlantfoodProjectileProps(this);
  return this;
}

