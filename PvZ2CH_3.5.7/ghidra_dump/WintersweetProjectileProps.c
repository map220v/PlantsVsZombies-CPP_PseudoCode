// Class: WintersweetProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProjectileProps::StaticClassInit() */

void WintersweetProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WintersweetProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040f1fe0,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WintersweetProjectileProps::StaticGetClass() */

long * WintersweetProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetProjectileProps::GetClass() const */

long * WintersweetProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetProjectileProps::~WintersweetProjectileProps() */

void __thiscall
WintersweetProjectileProps::~WintersweetProjectileProps(WintersweetProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0900;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* WintersweetProjectileProps::~WintersweetProjectileProps() */

void __thiscall
WintersweetProjectileProps::~WintersweetProjectileProps(WintersweetProjectileProps *this)

{
  ~WintersweetProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* WintersweetProjectileProps::WintersweetProjectileProps() */

void __thiscall
WintersweetProjectileProps::WintersweetProjectileProps(WintersweetProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 5;
  *(undefined ***)this = &PTR_GetClass_067e0900;
  return;
}


/* WintersweetProjectileProps::StaticNew() */

WintersweetProjectileProps * WintersweetProjectileProps::StaticNew(void)

{
  WintersweetProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  WintersweetProjectileProps(this);
  return this;
}

