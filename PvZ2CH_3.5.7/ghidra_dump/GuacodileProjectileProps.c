// Class: GuacodileProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectileProps::StaticClassInit() */

void GuacodileProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GuacodileProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041f4be8,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuacodileProjectileProps::StaticGetClass() */

long * GuacodileProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GuacodileProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuacodileProjectileProps::GetClass() const */

long * GuacodileProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GuacodileProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuacodileProjectileProps::~GuacodileProjectileProps() */

void __thiscall GuacodileProjectileProps::~GuacodileProjectileProps(GuacodileProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068068e0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* GuacodileProjectileProps::~GuacodileProjectileProps() */

void __thiscall GuacodileProjectileProps::~GuacodileProjectileProps(GuacodileProjectileProps *this)

{
  ~GuacodileProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* GuacodileProjectileProps::GuacodileProjectileProps() */

void __thiscall GuacodileProjectileProps::GuacodileProjectileProps(GuacodileProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_068068e0;
  *(undefined4 *)(this + 0x1e4) = 0x42c80000;
  return;
}


/* GuacodileProjectileProps::StaticNew() */

GuacodileProjectileProps * GuacodileProjectileProps::StaticNew(void)

{
  GuacodileProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  GuacodileProjectileProps(this);
  return this;
}

