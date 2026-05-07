// Class: DraftodilProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraftodilProjectileProps::StaticClassInit() */

void DraftodilProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DraftodilProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04016d00,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DraftodilProjectileProps::StaticGetClass() */

long * DraftodilProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DraftodilProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraftodilProjectileProps::GetClass() const */

long * DraftodilProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DraftodilProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraftodilProjectileProps::DraftodilProjectileProps() */

void __thiscall DraftodilProjectileProps::DraftodilProjectileProps(DraftodilProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1f0) = 0x32;
  *(undefined ***)this = &PTR_GetClass_067b61a0;
  *(undefined4 *)(this + 0x1f8) = 0x5a;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 500) = 0x46;
  *(undefined4 *)(this + 0x1e8) = 0x3f000000;
  *(undefined4 *)(this + 0x1e0) = 0x42c80000;
  *(undefined4 *)(this + 0x1ec) = 0x3f800000;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x200));
  return;
}


/* DraftodilProjectileProps::StaticNew() */

DraftodilProjectileProps * DraftodilProjectileProps::StaticNew(void)

{
  DraftodilProjectileProps *this;
  
  this = ::operator_new(0x228);
  DraftodilProjectileProps(this);
  return this;
}


/* DraftodilProjectileProps::~DraftodilProjectileProps() */

void __thiscall DraftodilProjectileProps::~DraftodilProjectileProps(DraftodilProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b61a0;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x200));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* DraftodilProjectileProps::~DraftodilProjectileProps() */

void __thiscall DraftodilProjectileProps::~DraftodilProjectileProps(DraftodilProjectileProps *this)

{
  ~DraftodilProjectileProps(this);
  AK::FreeHook(this);
  return;
}

