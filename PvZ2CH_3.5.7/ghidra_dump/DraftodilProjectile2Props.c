// Class: DraftodilProjectile2Props


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraftodilProjectile2Props::StaticClassInit() */

void DraftodilProjectile2Props::StaticClassInit(void)

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
    std::string::string(asStack_10,"DraftodilProjectile2Props");
    (*pcVar2)(plVar1,asStack_10,FUN_04017024,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DraftodilProjectile2Props::StaticGetClass() */

long * DraftodilProjectile2Props::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DraftodilProjectile2Props",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraftodilProjectile2Props::GetClass() const */

long * DraftodilProjectile2Props::GetClass(void)

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
  (*pcVar3)(plVar1,"DraftodilProjectile2Props",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraftodilProjectile2Props::DraftodilProjectile2Props() */

void __thiscall
DraftodilProjectile2Props::DraftodilProjectile2Props(DraftodilProjectile2Props *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1f0) = 0x32;
  *(undefined ***)this = &PTR_GetClass_067b6450;
  *(undefined4 *)(this + 0x1f8) = 0x5a;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 500) = 0x46;
  *(undefined4 *)(this + 0x1e8) = 0x3f000000;
  *(undefined4 *)(this + 0x1e0) = 0x42c80000;
  *(undefined4 *)(this + 0x1ec) = 0x3f800000;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x200));
  return;
}


/* DraftodilProjectile2Props::StaticNew() */

DraftodilProjectile2Props * DraftodilProjectile2Props::StaticNew(void)

{
  DraftodilProjectile2Props *this;
  
  this = ::operator_new(0x228);
  DraftodilProjectile2Props(this);
  return this;
}


/* DraftodilProjectile2Props::~DraftodilProjectile2Props() */

void __thiscall
DraftodilProjectile2Props::~DraftodilProjectile2Props(DraftodilProjectile2Props *this)

{
  *(undefined ***)this = &PTR_GetClass_067b6450;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x200));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* DraftodilProjectile2Props::~DraftodilProjectile2Props() */

void __thiscall
DraftodilProjectile2Props::~DraftodilProjectile2Props(DraftodilProjectile2Props *this)

{
  ~DraftodilProjectile2Props(this);
  AK::FreeHook(this);
  return;
}

