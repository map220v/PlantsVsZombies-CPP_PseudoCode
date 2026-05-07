// Class: CaulipowerProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CaulipowerProjectileProps::StaticClassInit() */

void CaulipowerProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CaulipowerProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bce79c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CaulipowerProjectileProps::StaticGetClass() */

long * CaulipowerProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CaulipowerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CaulipowerProjectileProps::GetClass() const */

long * CaulipowerProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CaulipowerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CaulipowerProjectileProps::~CaulipowerProjectileProps() */

void __thiscall
CaulipowerProjectileProps::~CaulipowerProjectileProps(CaulipowerProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673bc40;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* CaulipowerProjectileProps::~CaulipowerProjectileProps() */

void __thiscall
CaulipowerProjectileProps::~CaulipowerProjectileProps(CaulipowerProjectileProps *this)

{
  ~CaulipowerProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* CaulipowerProjectileProps::CaulipowerProjectileProps() */

void __thiscall
CaulipowerProjectileProps::CaulipowerProjectileProps(CaulipowerProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0673bc40;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e4));
  return;
}


/* CaulipowerProjectileProps::StaticNew() */

CaulipowerProjectileProps * CaulipowerProjectileProps::StaticNew(void)

{
  CaulipowerProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  CaulipowerProjectileProps(this);
  return this;
}

