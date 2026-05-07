// Class: GeishaPlantfoodProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaPlantfoodProjectileProps::StaticClassInit() */

void GeishaPlantfoodProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaPlantfoodProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2dcec,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaPlantfoodProjectileProps::StaticGetClass() */

long * GeishaPlantfoodProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeishaPlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaPlantfoodProjectileProps::GetClass() const */

long * GeishaPlantfoodProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GeishaPlantfoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaPlantfoodProjectileProps::~GeishaPlantfoodProjectileProps() */

void __thiscall
GeishaPlantfoodProjectileProps::~GeishaPlantfoodProjectileProps
          (GeishaPlantfoodProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674be00;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* GeishaPlantfoodProjectileProps::~GeishaPlantfoodProjectileProps() */

void __thiscall
GeishaPlantfoodProjectileProps::~GeishaPlantfoodProjectileProps
          (GeishaPlantfoodProjectileProps *this)

{
  ~GeishaPlantfoodProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* GeishaPlantfoodProjectileProps::GeishaPlantfoodProjectileProps() */

void __thiscall
GeishaPlantfoodProjectileProps::GeishaPlantfoodProjectileProps(GeishaPlantfoodProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0674be00;
  return;
}


/* GeishaPlantfoodProjectileProps::StaticNew() */

GeishaPlantfoodProjectileProps * GeishaPlantfoodProjectileProps::StaticNew(void)

{
  GeishaPlantfoodProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  GeishaPlantfoodProjectileProps(this);
  return this;
}

