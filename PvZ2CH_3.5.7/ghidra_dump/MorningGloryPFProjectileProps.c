// Class: MorningGloryPFProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectileProps::StaticClassInit() */

void MorningGloryPFProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MorningGloryPFProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041764ec,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryPFProjectileProps::StaticGetClass() */

long * MorningGloryPFProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryPFProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryPFProjectileProps::GetClass() const */

long * MorningGloryPFProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryPFProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryPFProjectileProps::~MorningGloryPFProjectileProps() */

void __thiscall
MorningGloryPFProjectileProps::~MorningGloryPFProjectileProps(MorningGloryPFProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f5f20;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MorningGloryPFProjectileProps::~MorningGloryPFProjectileProps() */

void __thiscall
MorningGloryPFProjectileProps::~MorningGloryPFProjectileProps(MorningGloryPFProjectileProps *this)

{
  ~MorningGloryPFProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* MorningGloryPFProjectileProps::MorningGloryPFProjectileProps() */

void __thiscall
MorningGloryPFProjectileProps::MorningGloryPFProjectileProps(MorningGloryPFProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e4) = 0x3f000000;
  *(undefined4 *)(this + 0x1e0) = 3;
  *(undefined ***)this = &PTR_GetClass_067f5f20;
  *(undefined4 *)(this + 0x1e8) = 0x40c00000;
  return;
}


/* MorningGloryPFProjectileProps::StaticNew() */

MorningGloryPFProjectileProps * MorningGloryPFProjectileProps::StaticNew(void)

{
  MorningGloryPFProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  MorningGloryPFProjectileProps(this);
  return this;
}

