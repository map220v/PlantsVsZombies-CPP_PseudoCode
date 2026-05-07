// Class: PlantainSuperSkillProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainSuperSkillProjectileProps::StaticClassInit() */

void PlantainSuperSkillProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantainSuperSkillProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03907774,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainSuperSkillProjectileProps::StaticGetClass() */

long * PlantainSuperSkillProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantainSuperSkillProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainSuperSkillProjectileProps::GetClass() const */

long * PlantainSuperSkillProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantainSuperSkillProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainSuperSkillProjectileProps::~PlantainSuperSkillProjectileProps() */

void __thiscall
PlantainSuperSkillProjectileProps::~PlantainSuperSkillProjectileProps
          (PlantainSuperSkillProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066c21f0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PlantainSuperSkillProjectileProps::~PlantainSuperSkillProjectileProps() */

void __thiscall
PlantainSuperSkillProjectileProps::~PlantainSuperSkillProjectileProps
          (PlantainSuperSkillProjectileProps *this)

{
  ~PlantainSuperSkillProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PlantainSuperSkillProjectileProps::PlantainSuperSkillProjectileProps() */

void __thiscall
PlantainSuperSkillProjectileProps::PlantainSuperSkillProjectileProps
          (PlantainSuperSkillProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  this[0x1e0] = (PlantainSuperSkillProjectileProps)0x1;
  *(undefined ***)this = &PTR_GetClass_066c21f0;
  return;
}


/* PlantainSuperSkillProjectileProps::StaticNew() */

PlantainSuperSkillProjectileProps * PlantainSuperSkillProjectileProps::StaticNew(void)

{
  PlantainSuperSkillProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  PlantainSuperSkillProjectileProps(this);
  return this;
}

