// Class: ZombieAirMissileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissileProps::StaticClassInit() */

void ZombieAirMissileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAirMissileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0479f294,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirMissileProps::StaticGetClass() */

long * ZombieAirMissileProps::StaticGetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAirMissileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirMissileProps::GetClass() const */

long * ZombieAirMissileProps::GetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAirMissileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirMissileProps::ZombieAirMissileProps() */

void __thiscall ZombieAirMissileProps::ZombieAirMissileProps(ZombieAirMissileProps *this)

{
  ZombieSkyCityProps::ZombieSkyCityProps((ZombieSkyCityProps *)this);
  *(undefined ***)this = &PTR_GetClass_068dd0d0;
  *(undefined4 *)(this + 0x238) = 0;
  return;
}


/* ZombieAirMissileProps::StaticNew() */

ZombieAirMissileProps * ZombieAirMissileProps::StaticNew(void)

{
  ZombieAirMissileProps *this;
  
  this = ::operator_new(0x240);
  ZombieAirMissileProps(this);
  return this;
}


/* ZombieAirMissileProps::~ZombieAirMissileProps() */

void __thiscall ZombieAirMissileProps::~ZombieAirMissileProps(ZombieAirMissileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068dd0d0;
  ZombieSkyCityProps::~ZombieSkyCityProps((ZombieSkyCityProps *)this);
  return;
}


/* ZombieAirMissileProps::~ZombieAirMissileProps() */

void __thiscall ZombieAirMissileProps::~ZombieAirMissileProps(ZombieAirMissileProps *this)

{
  ~ZombieAirMissileProps(this);
  AK::FreeHook(this);
  return;
}

