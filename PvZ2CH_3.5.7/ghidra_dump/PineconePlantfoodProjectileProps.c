// Class: PineconePlantfoodProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectileProps::StaticClassInit() */

void PineconePlantfoodProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PineconePlantfoodProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04280b38,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconePlantfoodProjectileProps::StaticGetClass() */

long * PineconePlantfoodProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PineconePlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconePlantfoodProjectileProps::GetClass() const */

long * PineconePlantfoodProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PineconePlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconePlantfoodProjectileProps::~PineconePlantfoodProjectileProps() */

void __thiscall
PineconePlantfoodProjectileProps::~PineconePlantfoodProjectileProps
          (PineconePlantfoodProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06824ed0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PineconePlantfoodProjectileProps::~PineconePlantfoodProjectileProps() */

void __thiscall
PineconePlantfoodProjectileProps::~PineconePlantfoodProjectileProps
          (PineconePlantfoodProjectileProps *this)

{
  ~PineconePlantfoodProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PineconePlantfoodProjectileProps::PineconePlantfoodProjectileProps() */

void __thiscall
PineconePlantfoodProjectileProps::PineconePlantfoodProjectileProps
          (PineconePlantfoodProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06824ed0;
  return;
}


/* PineconePlantfoodProjectileProps::StaticNew() */

PineconePlantfoodProjectileProps * PineconePlantfoodProjectileProps::StaticNew(void)

{
  PineconePlantfoodProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  PineconePlantfoodProjectileProps(this);
  return this;
}

