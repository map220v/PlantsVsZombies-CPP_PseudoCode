// Class: ZombossSharkMinionAttackActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSharkMinionAttackActionHandler::StaticClassInit() */

void ZombossSharkMinionAttackActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSharkMinionAttackActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04842528,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSharkMinionAttackActionHandler::StaticGetClass() */

long * ZombossSharkMinionAttackActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSharkMinionAttackActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSharkMinionAttackActionHandler::GetClass() const */

long * ZombossSharkMinionAttackActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSharkMinionAttackActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSharkMinionAttackActionHandler::ZombossSharkMinionAttackActionHandler() */

void __thiscall
ZombossSharkMinionAttackActionHandler::ZombossSharkMinionAttackActionHandler
          (ZombossSharkMinionAttackActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06909530;
  return;
}


/* ZombossSharkMinionAttackActionHandler::StaticNew() */

ZombossSharkMinionAttackActionHandler * ZombossSharkMinionAttackActionHandler::StaticNew(void)

{
  ZombossSharkMinionAttackActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossSharkMinionAttackActionHandler(this);
  return this;
}


/* ZombossSharkMinionAttackActionHandler::~ZombossSharkMinionAttackActionHandler() */

void __thiscall
ZombossSharkMinionAttackActionHandler::~ZombossSharkMinionAttackActionHandler
          (ZombossSharkMinionAttackActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06909530;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSharkMinionAttackActionHandler::~ZombossSharkMinionAttackActionHandler() */

void __thiscall
ZombossSharkMinionAttackActionHandler::~ZombossSharkMinionAttackActionHandler
          (ZombossSharkMinionAttackActionHandler *this)

{
  ~ZombossSharkMinionAttackActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossSharkMinionAttackActionHandler::onSummonAnimDone(std::string const&) */

void ZombossSharkMinionAttackActionHandler::onSummonAnimDone(string *param_1)

{
  long *extraout_x0;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  nop();
  (**(code **)(*extraout_x0 + 600))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSharkMinionAttackActionHandler::onStartAction() */

void __thiscall
ZombossSharkMinionAttackActionHandler::onStartAction(ZombossSharkMinionAttackActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlaySummoning((ZombieAnimRig_ZombossMech *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech_Beach::TellMinionsToAttack
            ((ZombieZombossMech_Beach *)this_00,*(int *)(pZVar1 + 0x38));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

