// Class: MissileToeLvl5ProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5ProjectileProps::StaticClassInit() */

void MissileToeLvl5ProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MissileToeLvl5ProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf43b0,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeLvl5ProjectileProps::StaticGetClass() */

long * MissileToeLvl5ProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeLvl5ProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeLvl5ProjectileProps::GetClass() const */

long * MissileToeLvl5ProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeLvl5ProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeLvl5ProjectileProps::~MissileToeLvl5ProjectileProps() */

void __thiscall
MissileToeLvl5ProjectileProps::~MissileToeLvl5ProjectileProps(MissileToeLvl5ProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06741d80;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MissileToeLvl5ProjectileProps::~MissileToeLvl5ProjectileProps() */

void __thiscall
MissileToeLvl5ProjectileProps::~MissileToeLvl5ProjectileProps(MissileToeLvl5ProjectileProps *this)

{
  ~MissileToeLvl5ProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* MissileToeLvl5ProjectileProps::MissileToeLvl5ProjectileProps() */

void __thiscall
MissileToeLvl5ProjectileProps::MissileToeLvl5ProjectileProps(MissileToeLvl5ProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined ***)this = &PTR_GetClass_06741d80;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* MissileToeLvl5ProjectileProps::StaticNew() */

MissileToeLvl5ProjectileProps * MissileToeLvl5ProjectileProps::StaticNew(void)

{
  MissileToeLvl5ProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  MissileToeLvl5ProjectileProps(this);
  return this;
}

