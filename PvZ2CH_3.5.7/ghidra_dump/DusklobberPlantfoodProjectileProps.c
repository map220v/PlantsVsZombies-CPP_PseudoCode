// Class: DusklobberPlantfoodProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberPlantfoodProjectileProps::StaticClassInit() */

void DusklobberPlantfoodProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DusklobberPlantfoodProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd62ec,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberPlantfoodProjectileProps::StaticGetClass() */

long * DusklobberPlantfoodProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberPlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberPlantfoodProjectileProps::GetClass() const */

long * DusklobberPlantfoodProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberPlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberPlantfoodProjectileProps::~DusklobberPlantfoodProjectileProps() */

void __thiscall
DusklobberPlantfoodProjectileProps::~DusklobberPlantfoodProjectileProps
          (DusklobberPlantfoodProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673dd80;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* DusklobberPlantfoodProjectileProps::~DusklobberPlantfoodProjectileProps() */

void __thiscall
DusklobberPlantfoodProjectileProps::~DusklobberPlantfoodProjectileProps
          (DusklobberPlantfoodProjectileProps *this)

{
  ~DusklobberPlantfoodProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* DusklobberPlantfoodProjectileProps::DusklobberPlantfoodProjectileProps() */

void __thiscall
DusklobberPlantfoodProjectileProps::DusklobberPlantfoodProjectileProps
          (DusklobberPlantfoodProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e4) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_0673dd80;
  *(undefined4 *)(this + 0x1f0) = 0x3f800000;
  *(undefined4 *)(this + 0x1e8) = 0x40047ae1;
  *(undefined4 *)(this + 0x1ec) = 0x43960000;
  *(undefined4 *)(this + 0x1e0) = 0x42480000;
  return;
}


/* DusklobberPlantfoodProjectileProps::StaticNew() */

DusklobberPlantfoodProjectileProps * DusklobberPlantfoodProjectileProps::StaticNew(void)

{
  DusklobberPlantfoodProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  DusklobberPlantfoodProjectileProps(this);
  return this;
}

