// Class: VanillaProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaProjectileProps::StaticClassInit() */

void VanillaProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_039671e0,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaProjectileProps::StaticGetClass() */

long * VanillaProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaProjectileProps::GetClass() const */

long * VanillaProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaProjectileProps::~VanillaProjectileProps() */

void __thiscall VanillaProjectileProps::~VanillaProjectileProps(VanillaProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5830;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* VanillaProjectileProps::~VanillaProjectileProps() */

void __thiscall VanillaProjectileProps::~VanillaProjectileProps(VanillaProjectileProps *this)

{
  ~VanillaProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* VanillaProjectileProps::VanillaProjectileProps() */

void __thiscall VanillaProjectileProps::VanillaProjectileProps(VanillaProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066d5830;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e4));
  return;
}


/* VanillaProjectileProps::StaticNew() */

VanillaProjectileProps * VanillaProjectileProps::StaticNew(void)

{
  VanillaProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  VanillaProjectileProps(this);
  return this;
}

