// Class: ZombieArtifactAcidImp


/* ZombieArtifactAcidImp::~ZombieArtifactAcidImp() */

void __thiscall ZombieArtifactAcidImp::~ZombieArtifactAcidImp(ZombieArtifactAcidImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0668cd70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArtifactAcidImp_0668d830;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieArtifactAcidImp::~ZombieArtifactAcidImp() */

void __thiscall ZombieArtifactAcidImp::~ZombieArtifactAcidImp(ZombieArtifactAcidImp *this)

{
  ~ZombieArtifactAcidImp(this + -0x10);
  return;
}


/* ZombieArtifactAcidImp::~ZombieArtifactAcidImp() */

void __thiscall ZombieArtifactAcidImp::~ZombieArtifactAcidImp(ZombieArtifactAcidImp *this)

{
  ~ZombieArtifactAcidImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieArtifactAcidImp::~ZombieArtifactAcidImp() */

void __thiscall ZombieArtifactAcidImp::~ZombieArtifactAcidImp(ZombieArtifactAcidImp *this)

{
  ~ZombieArtifactAcidImp(this + -0x10);
  return;
}


/* ZombieArtifactAcidImp::ZombieArtifactAcidImp() */

void __thiscall ZombieArtifactAcidImp::ZombieArtifactAcidImp(ZombieArtifactAcidImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_0668cd70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArtifactAcidImp_0668d830;
  return;
}


/* ZombieArtifactAcidImp::StaticNew() */

ZombieArtifactAcidImp * ZombieArtifactAcidImp::StaticNew(void)

{
  ZombieArtifactAcidImp *this;
  
  this = ::operator_new(0x818);
  ZombieArtifactAcidImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArtifactAcidImp::StaticClassInit() */

void ZombieArtifactAcidImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieArtifactAcidImp");
    (*pcVar2)(plVar1,asStack_10,FUN_0372c92c,0x818,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieArtifactAcidImp::StaticGetClass() */

long * ZombieArtifactAcidImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArtifactAcidImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArtifactAcidImp::GetClass() const */

long * ZombieArtifactAcidImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArtifactAcidImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArtifactAcidImp::onTakeFatalDamage(DamageInfo const&) */

void ZombieArtifactAcidImp::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  MessageRouter::Post<Zombie*,ZombieArtifactAcidImp*>
            ((MessageRouter *)gMessageRouter,Message::NotifyAcidZombieDie,
             (ZombieArtifactAcidImp *)param_1);
  return;
}

