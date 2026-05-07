// Class: CactusProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CactusProjectileProps::StaticClassInit() */

void CactusProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CactusProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0417beac,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CactusProjectileProps::StaticGetClass() */

long * CactusProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CactusProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CactusProjectileProps::GetClass() const */

long * CactusProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CactusProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CactusProjectileProps::~CactusProjectileProps() */

void __thiscall CactusProjectileProps::~CactusProjectileProps(CactusProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f73a0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* CactusProjectileProps::~CactusProjectileProps() */

void __thiscall CactusProjectileProps::~CactusProjectileProps(CactusProjectileProps *this)

{
  ~CactusProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* CactusProjectileProps::CactusProjectileProps() */

void __thiscall CactusProjectileProps::CactusProjectileProps(CactusProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x5a;
  *(undefined4 *)(this + 0x1e4) = 10;
  *(undefined ***)this = &PTR_GetClass_067f73a0;
  return;
}


/* CactusProjectileProps::StaticNew() */

CactusProjectileProps * CactusProjectileProps::StaticNew(void)

{
  CactusProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  CactusProjectileProps(this);
  return this;
}

