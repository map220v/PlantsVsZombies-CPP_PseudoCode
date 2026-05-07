// Class: CypripediumProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumProjectileProps::StaticClassInit() */

void CypripediumProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CypripediumProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042720b8,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CypripediumProjectileProps::StaticGetClass() */

long * CypripediumProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumProjectileProps::GetClass() const */

long * CypripediumProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumProjectileProps::~CypripediumProjectileProps() */

void __thiscall
CypripediumProjectileProps::~CypripediumProjectileProps(CypripediumProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068205e0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* CypripediumProjectileProps::~CypripediumProjectileProps() */

void __thiscall
CypripediumProjectileProps::~CypripediumProjectileProps(CypripediumProjectileProps *this)

{
  ~CypripediumProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* CypripediumProjectileProps::CypripediumProjectileProps() */

void __thiscall
CypripediumProjectileProps::CypripediumProjectileProps(CypripediumProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068205e0;
  *(undefined4 *)(this + 0x1e0) = 0x42c80000;
  return;
}


/* CypripediumProjectileProps::StaticNew() */

CypripediumProjectileProps * CypripediumProjectileProps::StaticNew(void)

{
  CypripediumProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  CypripediumProjectileProps(this);
  return this;
}

