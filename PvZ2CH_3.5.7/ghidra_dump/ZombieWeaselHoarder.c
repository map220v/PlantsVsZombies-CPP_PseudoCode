// Class: ZombieWeaselHoarder


/* ZombieWeaselHoarder::shouldSpawnChickensOnEatAttack() */

undefined8 ZombieWeaselHoarder::shouldSpawnChickensOnEatAttack(void)

{
  return 0;
}


/* ZombieWeaselHoarder::~ZombieWeaselHoarder() */

void __thiscall ZombieWeaselHoarder::~ZombieWeaselHoarder(ZombieWeaselHoarder *this)

{
  *(undefined ***)this = &PTR_GetClass_0689fed0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeaselHoarder_068a0908;
  ZombieChickenFarmer::~ZombieChickenFarmer((ZombieChickenFarmer *)this);
  return;
}


/* non-virtual thunk to ZombieWeaselHoarder::~ZombieWeaselHoarder() */

void __thiscall ZombieWeaselHoarder::~ZombieWeaselHoarder(ZombieWeaselHoarder *this)

{
  ~ZombieWeaselHoarder(this + -0x10);
  return;
}


/* ZombieWeaselHoarder::~ZombieWeaselHoarder() */

void __thiscall ZombieWeaselHoarder::~ZombieWeaselHoarder(ZombieWeaselHoarder *this)

{
  ~ZombieWeaselHoarder(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWeaselHoarder::~ZombieWeaselHoarder() */

void __thiscall ZombieWeaselHoarder::~ZombieWeaselHoarder(ZombieWeaselHoarder *this)

{
  ~ZombieWeaselHoarder(this + -0x10);
  return;
}


/* ZombieWeaselHoarder::ZombieWeaselHoarder() */

void __thiscall ZombieWeaselHoarder::ZombieWeaselHoarder(ZombieWeaselHoarder *this)

{
  ZombieChickenFarmer::ZombieChickenFarmer((ZombieChickenFarmer *)this);
  this[0x801] = (ZombieWeaselHoarder)0x0;
  *(undefined ***)this = &PTR_GetClass_0689fed0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeaselHoarder_068a0908;
  return;
}


/* ZombieWeaselHoarder::StaticNew() */

ZombieWeaselHoarder * ZombieWeaselHoarder::StaticNew(void)

{
  ZombieWeaselHoarder *this;
  
  this = ::operator_new(0x808);
  ZombieWeaselHoarder(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarder::StaticClassInit() */

void ZombieWeaselHoarder::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWeaselHoarder");
    (*pcVar2)(plVar1,asStack_10,FUN_0468c95c,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarder::StaticGetClass() */

long * ZombieWeaselHoarder::StaticGetClass(void)

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
  uVar2 = ZombieChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeaselHoarder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeaselHoarder::GetClass() const */

long * ZombieWeaselHoarder::GetClass(void)

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
  uVar2 = ZombieChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeaselHoarder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeaselHoarder::onTakeFatalDamage(DamageInfo const&) */

void ZombieWeaselHoarder::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  if ((param_1[0x801] != (DamageInfo)0x0) && (param_1[0x800] == (DamageInfo)0x0)) {
    ZombieChickenFarmer::tryStartChickening((ZombieChickenFarmer *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarder::tryStartChickening() */

void __thiscall ZombieWeaselHoarder::tryStartChickening(ZombieWeaselHoarder *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x801] == (ZombieWeaselHoarder)0x0) && (this[0x800] == (ZombieWeaselHoarder)0x0)) {
    cVar1 = Zombie::HasCondition(this,0x19);
    if ((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this,0x77), cVar1 == '\0')) {
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xa20);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<ZombieWeaselHoarder,void(ZombieWeaselHoarder::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      ZombieAnimRig_WeaselHoarder::PlayWeaselAttack
                ((ZombieAnimRig_WeaselHoarder *)pZVar2,aDStack_38);
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)pZVar2,false);
    }
    else {
      ZombieChickenFarmer::tryStartChickening((ZombieChickenFarmer *)this);
    }
    this[0x801] = (ZombieWeaselHoarder)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarder::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieWeaselHoarder::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    ZombieChickenFarmer::tryStartChickening((ZombieChickenFarmer *)param_1);
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}

