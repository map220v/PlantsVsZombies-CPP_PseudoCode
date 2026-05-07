// Class: ZombieLostCityGargantuar


/* ZombieLostCityGargantuar::~ZombieLostCityGargantuar() */

void __thiscall ZombieLostCityGargantuar::~ZombieLostCityGargantuar(ZombieLostCityGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_068eb500;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityGargantuar_068ebf58;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityGargantuar::~ZombieLostCityGargantuar() */

void __thiscall ZombieLostCityGargantuar::~ZombieLostCityGargantuar(ZombieLostCityGargantuar *this)

{
  ~ZombieLostCityGargantuar(this + -0x10);
  return;
}


/* ZombieLostCityGargantuar::~ZombieLostCityGargantuar() */

void __thiscall ZombieLostCityGargantuar::~ZombieLostCityGargantuar(ZombieLostCityGargantuar *this)

{
  ~ZombieLostCityGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityGargantuar::~ZombieLostCityGargantuar() */

void __thiscall ZombieLostCityGargantuar::~ZombieLostCityGargantuar(ZombieLostCityGargantuar *this)

{
  ~ZombieLostCityGargantuar(this + -0x10);
  return;
}


/* ZombieLostCityGargantuar::ZombieLostCityGargantuar() */

void __thiscall ZombieLostCityGargantuar::ZombieLostCityGargantuar(ZombieLostCityGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_068eb500;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityGargantuar_068ebf58;
  return;
}


/* ZombieLostCityGargantuar::StaticNew() */

ZombieLostCityGargantuar * ZombieLostCityGargantuar::StaticNew(void)

{
  ZombieLostCityGargantuar *this;
  
  this = ::operator_new(0x808);
  ZombieLostCityGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityGargantuar::StaticClassInit() */

void ZombieLostCityGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLostCityGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_047db8d4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityGargantuar::StaticGetClass() */

long * ZombieLostCityGargantuar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityGargantuar::GetClass() const */

long * ZombieLostCityGargantuar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityGargantuar::onTakeBodyDamage(DamageInfo const&) */

void __thiscall
ZombieLostCityGargantuar::onTakeBodyDamage(ZombieLostCityGargantuar *this,DamageInfo *param_1)

{
  char cVar1;
  long lVar2;
  ZombieHydraHeadAnimRig *this_00;
  
  cVar1 = Zombie::HasHead((Zombie *)this);
  if (((cVar1 != '\0') && (0.0 < *(float *)(param_1 + 8))) &&
     (lVar2 = operator&(*(undefined8 *)(param_1 + 0x10),0x400), lVar2 != 0)) {
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_LostCityGargantuar::SetTorchLayers
              ((ZombieAnimRig_LostCityGargantuar *)this_00,true);
  }
  nop();
  return;
}


/* ZombieLostCityGargantuar::onTakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombieLostCityGargantuar::onTakeFatalDamage(ZombieLostCityGargantuar *this,DamageInfo *param_1)

{
  ZombieHydraHeadAnimRig *this_00;
  
  ZombieGargantuar::onTakeFatalDamage((ZombieGargantuar *)this,param_1);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_LostCityGargantuar::SetTorchLayers
            ((ZombieAnimRig_LostCityGargantuar *)this_00,false);
  return;
}


/* ZombieLostCityGargantuar::onLostHead() */

void __thiscall ZombieLostCityGargantuar::onLostHead(ZombieLostCityGargantuar *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_LostCityGargantuar::SetTorchLayers
            ((ZombieAnimRig_LostCityGargantuar *)this_00,false);
  nop();
  return;
}


/* ZombieLostCityGargantuar::onApplyCondition(ZombieConditions) */

void __thiscall
ZombieLostCityGargantuar::onApplyCondition(ZombieLostCityGargantuar *this,uint param_2)

{
  ZombieHydraHeadAnimRig *this_00;
  
  if (1 < param_2) {
    ZombieGargantuar::onApplyCondition((ZombieGargantuar *)this,param_2);
    return;
  }
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_LostCityGargantuar::SetTorchLayers
            ((ZombieAnimRig_LostCityGargantuar *)this_00,false);
  MessageRouter::Broadcast<Zombie*,ZombieLostCityGargantuar*>
            ((MessageRouter *)gMessageRouter,Message::ExplorerTorchExtinguished,this);
  ZombieGargantuar::onApplyCondition((ZombieGargantuar *)this,param_2);
  return;
}

