// Class: MeteorAdvancedProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorAdvancedProjectileProps::StaticClassInit() */

void MeteorAdvancedProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MeteorAdvancedProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d49780,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorAdvancedProjectileProps::StaticGetClass() */

long * MeteorAdvancedProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MeteorAdvancedProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorAdvancedProjectileProps::GetClass() const */

long * MeteorAdvancedProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MeteorAdvancedProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorAdvancedProjectileProps::~MeteorAdvancedProjectileProps() */

void __thiscall
MeteorAdvancedProjectileProps::~MeteorAdvancedProjectileProps(MeteorAdvancedProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1900;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MeteorAdvancedProjectileProps::~MeteorAdvancedProjectileProps() */

void __thiscall
MeteorAdvancedProjectileProps::~MeteorAdvancedProjectileProps(MeteorAdvancedProjectileProps *this)

{
  ~MeteorAdvancedProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* MeteorAdvancedProjectileProps::MeteorAdvancedProjectileProps() */

void __thiscall
MeteorAdvancedProjectileProps::MeteorAdvancedProjectileProps(MeteorAdvancedProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  this[0x1e0] = (MeteorAdvancedProjectileProps)0x0;
  *(undefined ***)this = &PTR_GetClass_069b1900;
  return;
}


/* MeteorAdvancedProjectileProps::StaticNew() */

MeteorAdvancedProjectileProps * MeteorAdvancedProjectileProps::StaticNew(void)

{
  MeteorAdvancedProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  MeteorAdvancedProjectileProps(this);
  return this;
}

