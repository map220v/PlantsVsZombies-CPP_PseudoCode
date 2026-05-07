// Class: GiantEelProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantEelProjectileProps::StaticClassInit() */

void GiantEelProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiantEelProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d38384,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantEelProjectileProps::StaticGetClass() */

long * GiantEelProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiantEelProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantEelProjectileProps::GetClass() const */

long * GiantEelProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GiantEelProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantEelProjectileProps::GiantEelProjectileProps() */

void __thiscall GiantEelProjectileProps::GiantEelProjectileProps(GiantEelProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069adee0;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1e0));
  return;
}


/* GiantEelProjectileProps::StaticNew() */

GiantEelProjectileProps * GiantEelProjectileProps::StaticNew(void)

{
  GiantEelProjectileProps *this;
  
  this = ::operator_new(0x208);
  GiantEelProjectileProps(this);
  return this;
}


/* GiantEelProjectileProps::~GiantEelProjectileProps() */

void __thiscall GiantEelProjectileProps::~GiantEelProjectileProps(GiantEelProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069adee0;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* GiantEelProjectileProps::~GiantEelProjectileProps() */

void __thiscall GiantEelProjectileProps::~GiantEelProjectileProps(GiantEelProjectileProps *this)

{
  ~GiantEelProjectileProps(this);
  AK::FreeHook(this);
  return;
}

