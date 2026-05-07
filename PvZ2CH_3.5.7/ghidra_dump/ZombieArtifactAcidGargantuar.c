// Class: ZombieArtifactAcidGargantuar


/* ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar() */

void __thiscall
ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar(ZombieArtifactAcidGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_0668d860;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArtifactAcidGargantuar_0668e2b8;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar() */

void __thiscall
ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar(ZombieArtifactAcidGargantuar *this)

{
  ~ZombieArtifactAcidGargantuar(this + -0x10);
  return;
}


/* ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar() */

void __thiscall
ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar(ZombieArtifactAcidGargantuar *this)

{
  ~ZombieArtifactAcidGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar() */

void __thiscall
ZombieArtifactAcidGargantuar::~ZombieArtifactAcidGargantuar(ZombieArtifactAcidGargantuar *this)

{
  ~ZombieArtifactAcidGargantuar(this + -0x10);
  return;
}


/* ZombieArtifactAcidGargantuar::getEatingDamageType() const */

void ZombieArtifactAcidGargantuar::getEatingDamageType(void)

{
  operator|(0x800000000,0x800000000000);
  return;
}


/* ZombieArtifactAcidGargantuar::ZombieArtifactAcidGargantuar() */

void __thiscall
ZombieArtifactAcidGargantuar::ZombieArtifactAcidGargantuar(ZombieArtifactAcidGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_0668d860;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArtifactAcidGargantuar_0668e2b8;
  return;
}


/* ZombieArtifactAcidGargantuar::StaticNew() */

ZombieArtifactAcidGargantuar * ZombieArtifactAcidGargantuar::StaticNew(void)

{
  ZombieArtifactAcidGargantuar *this;
  
  this = ::operator_new(0x808);
  ZombieArtifactAcidGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArtifactAcidGargantuar::StaticClassInit() */

void ZombieArtifactAcidGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieArtifactAcidGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_0372cba4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieArtifactAcidGargantuar::StaticGetClass() */

long * ZombieArtifactAcidGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArtifactAcidGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArtifactAcidGargantuar::GetClass() const */

long * ZombieArtifactAcidGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArtifactAcidGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArtifactAcidGargantuar::onTakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombieArtifactAcidGargantuar::onTakeFatalDamage
          (ZombieArtifactAcidGargantuar *this,DamageInfo *param_1)

{
  ZombieGargantuar::onTakeFatalDamage((ZombieGargantuar *)this,param_1);
  MessageRouter::Post<Zombie*,ZombieArtifactAcidGargantuar*>
            ((MessageRouter *)gMessageRouter,Message::NotifyAcidZombieDie,this);
  return;
}

