// Class: NukeLauncherProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherProjectileProps::StaticClassInit() */

void NukeLauncherProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"NukeLauncherProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04242c20,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherProjectileProps::StaticGetClass() */

long * NukeLauncherProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherProjectileProps::GetClass() const */

long * NukeLauncherProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherProjectileProps::~NukeLauncherProjectileProps() */

void __thiscall
NukeLauncherProjectileProps::~NukeLauncherProjectileProps(NukeLauncherProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068161f0;
  std::string::~string((string *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* NukeLauncherProjectileProps::~NukeLauncherProjectileProps() */

void __thiscall
NukeLauncherProjectileProps::~NukeLauncherProjectileProps(NukeLauncherProjectileProps *this)

{
  ~NukeLauncherProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* NukeLauncherProjectileProps::NukeLauncherProjectileProps() */

void __thiscall
NukeLauncherProjectileProps::NukeLauncherProjectileProps(NukeLauncherProjectileProps *this)

{
  size_t in_x2;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068161f0;
  Set8BytesTo0((string *)(this + 0x1e0));
  std::string::append((string *)(this + 0x1e0),"radiation",in_x2);
  return;
}


/* NukeLauncherProjectileProps::StaticNew() */

NukeLauncherProjectileProps * NukeLauncherProjectileProps::StaticNew(void)

{
  NukeLauncherProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  NukeLauncherProjectileProps(this);
  return this;
}

