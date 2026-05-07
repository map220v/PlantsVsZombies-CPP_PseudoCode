// Class: PlasmaCloudProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlasmaCloudProjectileProps::StaticClassInit() */

void PlasmaCloudProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlasmaCloudProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04087218,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlasmaCloudProjectileProps::StaticGetClass() */

long * PlasmaCloudProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlasmaCloudProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlasmaCloudProjectileProps::GetClass() const */

long * PlasmaCloudProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlasmaCloudProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlasmaCloudProjectileProps::~PlasmaCloudProjectileProps() */

void __thiscall
PlasmaCloudProjectileProps::~PlasmaCloudProjectileProps(PlasmaCloudProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067cc190;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PlasmaCloudProjectileProps::~PlasmaCloudProjectileProps() */

void __thiscall
PlasmaCloudProjectileProps::~PlasmaCloudProjectileProps(PlasmaCloudProjectileProps *this)

{
  ~PlasmaCloudProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PlasmaCloudProjectileProps::PlasmaCloudProjectileProps() */

void __thiscall
PlasmaCloudProjectileProps::PlasmaCloudProjectileProps(PlasmaCloudProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067cc190;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  return;
}


/* PlasmaCloudProjectileProps::StaticNew() */

PlasmaCloudProjectileProps * PlasmaCloudProjectileProps::StaticNew(void)

{
  PlasmaCloudProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  PlasmaCloudProjectileProps(this);
  return this;
}

