// Class: ZombieArtifactAcidBasic


/* ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic() */

void __thiscall ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic(ZombieArtifactAcidBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0668c030;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArtifactAcidBasic_0668ca58;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic() */

void __thiscall ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic(ZombieArtifactAcidBasic *this)

{
  ~ZombieArtifactAcidBasic(this + -0x10);
  return;
}


/* ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic() */

void __thiscall ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic(ZombieArtifactAcidBasic *this)

{
  ~ZombieArtifactAcidBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic() */

void __thiscall ZombieArtifactAcidBasic::~ZombieArtifactAcidBasic(ZombieArtifactAcidBasic *this)

{
  ~ZombieArtifactAcidBasic(this + -0x10);
  return;
}


/* ZombieArtifactAcidBasic::ZombieArtifactAcidBasic() */

void __thiscall ZombieArtifactAcidBasic::ZombieArtifactAcidBasic(ZombieArtifactAcidBasic *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_0668c030;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArtifactAcidBasic_0668ca58;
  return;
}


/* ZombieArtifactAcidBasic::StaticNew() */

ZombieArtifactAcidBasic * ZombieArtifactAcidBasic::StaticNew(void)

{
  ZombieArtifactAcidBasic *this;
  
  this = ::operator_new(0x810);
  ZombieArtifactAcidBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArtifactAcidBasic::StaticClassInit() */

void ZombieArtifactAcidBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieArtifactAcidBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0372c2a0,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieArtifactAcidBasic::StaticGetClass() */

long * ZombieArtifactAcidBasic::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArtifactAcidBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArtifactAcidBasic::GetClass() const */

long * ZombieArtifactAcidBasic::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieArtifactAcidBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArtifactAcidBasic::onTakeFatalDamage(DamageInfo const&) */

void ZombieArtifactAcidBasic::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  MessageRouter::Post<Zombie*,ZombieArtifactAcidBasic*>
            ((MessageRouter *)gMessageRouter,Message::NotifyAcidZombieDie,
             (ZombieArtifactAcidBasic *)param_1);
  return;
}

