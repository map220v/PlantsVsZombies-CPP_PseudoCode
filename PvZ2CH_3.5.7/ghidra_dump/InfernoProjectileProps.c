// Class: InfernoProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProjectileProps::StaticClassInit() */

void InfernoProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfernoProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b0e270,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProjectileProps::StaticGetClass() */

long * InfernoProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InfernoProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoProjectileProps::GetClass() const */

long * InfernoProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"InfernoProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoProjectileProps::InfernoProjectileProps() */

void __thiscall InfernoProjectileProps::InfernoProjectileProps(InfernoProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_0672bbf0;
  *(undefined4 *)(this + 0x1e4) = 0x3f800000;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x1e8));
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x210));
  *(undefined4 *)(this + 0x240) = 1;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  return;
}


/* InfernoProjectileProps::StaticNew() */

InfernoProjectileProps * InfernoProjectileProps::StaticNew(void)

{
  InfernoProjectileProps *this;
  
  this = ::operator_new(0x248);
  InfernoProjectileProps(this);
  return this;
}


/* InfernoProjectileProps::~InfernoProjectileProps() */

void __thiscall InfernoProjectileProps::~InfernoProjectileProps(InfernoProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672bbf0;
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x210));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x1e8));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* InfernoProjectileProps::~InfernoProjectileProps() */

void __thiscall InfernoProjectileProps::~InfernoProjectileProps(InfernoProjectileProps *this)

{
  ~InfernoProjectileProps(this);
  AK::FreeHook(this);
  return;
}

