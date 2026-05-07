// Class: ZombossImpCannonActionHandler


/* ZombossImpCannonActionHandler::onRocketLaunchFireAnimDone(std::string const&) */

void ZombossImpCannonActionHandler::onRocketLaunchFireAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionHandler::StaticClassInit() */

void ZombossImpCannonActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossImpCannonActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0471c50c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossImpCannonActionHandler::StaticGetClass() */

long * ZombossImpCannonActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossImpCannonActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossImpCannonActionHandler::GetClass() const */

long * ZombossImpCannonActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossImpCannonActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossImpCannonActionHandler::ZombossImpCannonActionHandler() */

void __thiscall
ZombossImpCannonActionHandler::ZombossImpCannonActionHandler(ZombossImpCannonActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068bfb50;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* ZombossImpCannonActionHandler::StaticNew() */

ZombossImpCannonActionHandler * ZombossImpCannonActionHandler::StaticNew(void)

{
  ZombossImpCannonActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossImpCannonActionHandler(this);
  return this;
}


/* ZombossImpCannonActionHandler::~ZombossImpCannonActionHandler() */

void __thiscall
ZombossImpCannonActionHandler::~ZombossImpCannonActionHandler(ZombossImpCannonActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068bfb50;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossImpCannonActionHandler::~ZombossImpCannonActionHandler() */

void __thiscall
ZombossImpCannonActionHandler::~ZombossImpCannonActionHandler(ZombossImpCannonActionHandler *this)

{
  ~ZombossImpCannonActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossImpCannonActionHandler::onRocketLaunchAnimDone(std::string const&) */

void ZombossImpCannonActionHandler::onRocketLaunchAnimDone(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *this_01;
  ZombossHydraSprayActionDefinition *pZVar1;
  float fVar2;
  
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ZombieAnimRig_ZombossMech_Pirate::PlayRocketLaunchLoop
            ((ZombieAnimRig_ZombossMech_Pirate *)this_01);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_00);
  fVar2 = (float)ZombieZombossMech::GetZomboss_T(this_00);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(float *)(param_1 + 0x24) = fVar2 + *(float *)(pZVar1 + 0x44);
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionHandler::onStartAction() */

void __thiscall ZombossImpCannonActionHandler::onStartAction(ZombossImpCannonActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMech_Pirate *extraout_x0;
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar3;
  nop();
  EntityComponent_GroundEffect::GetEffect();
  ZombieZombossMech_Pirate::SetCurrentImpCannonActionDef(extraout_x0,aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  std::string::string((string *)aRStack_58,"Play_Zomb_Global_Zomboss_Attack_Reticle_Start_Appear");
  RealObject::PlayPositionalSound((RealObject *)this_01,(string *)aRStack_58,0.0);
  std::string::~string((string *)aRStack_58);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x278);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onRocketStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionHandler::onRocketStartAnimDone(std::string const&) */

void ZombossImpCannonActionHandler::onRocketStartAnimDone(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRocketLaunchAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlayRocketLaunch((ZombieAnimRig_ZombossMech *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionHandler::onUpdateAction() */

void __thiscall ZombossImpCannonActionHandler::onUpdateAction(ZombossImpCannonActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  fVar3 = (float)PVZ_EOT();
  if (*(float *)(this + 0x24) < fVar3) {
    fVar4 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_01);
    pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar6 = *(float *)(pZVar1 + 0x40);
    fVar5 = (float)ZombieZombossMech::GetStunHpFactor(this_01);
    if (fVar5 * fVar6 < fVar4) {
      ZombieZombossMech::DoStun(this_01);
    }
    else {
      fVar4 = (float)ZombieZombossMech::GetZomboss_T(this_01);
      if (*(float *)(this + 0x24) < fVar4) {
        pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onRocketLaunchFireAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        ZombieAnimRig_ZombossMech_Pirate::PlayRocketLaunchFire
                  ((ZombieAnimRig_ZombossMech_Pirate *)pZVar2,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        *(float *)(this + 0x24) = fVar3;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

