// Class: BonkchoySubsystem


/* BonkchoySubsystem::~BonkchoySubsystem() */

void __thiscall BonkchoySubsystem::~BonkchoySubsystem(BonkchoySubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067b34d0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BonkchoySubsystem::~BonkchoySubsystem() */

void __thiscall BonkchoySubsystem::~BonkchoySubsystem(BonkchoySubsystem *this)

{
  ~BonkchoySubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BonkchoySubsystem::StaticClassInit() */

void BonkchoySubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BonkchoySubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03ffd708,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BonkchoySubsystem::StaticGetClass() */

long * BonkchoySubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"BonkchoySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BonkchoySubsystem::GetClass() const */

long * BonkchoySubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"BonkchoySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BonkchoySubsystem::onFlyingEnd(Zombie*) */

void __thiscall BonkchoySubsystem::onFlyingEnd(BonkchoySubsystem *this,Zombie *param_1)

{
  char cVar1;
  
  if ((param_1 != (Zombie *)0x0) &&
     (cVar1 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,param_1),
     cVar1 != '\0')) {
    Zombie::ApplyCondition((Zombie *)0x40000000,0,param_1,2,1);
    return;
  }
  return;
}


/* BonkchoySubsystem::BonkchoySubsystem() */

void __thiscall BonkchoySubsystem::BonkchoySubsystem(BonkchoySubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067b34d0;
  return;
}


/* BonkchoySubsystem::StaticNew() */

BonkchoySubsystem * BonkchoySubsystem::StaticNew(void)

{
  BonkchoySubsystem *this;
  
  this = ::operator_new(0x10);
  BonkchoySubsystem(this);
  return this;
}

