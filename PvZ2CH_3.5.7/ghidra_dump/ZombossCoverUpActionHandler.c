// Class: ZombossCoverUpActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCoverUpActionHandler::StaticClassInit() */

void ZombossCoverUpActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossCoverUpActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0476d58c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossCoverUpActionHandler::StaticGetClass() */

long * ZombossCoverUpActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossCoverUpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossCoverUpActionHandler::GetClass() const */

long * ZombossCoverUpActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossCoverUpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossCoverUpActionHandler::ZombossCoverUpActionHandler() */

void __thiscall
ZombossCoverUpActionHandler::ZombossCoverUpActionHandler(ZombossCoverUpActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068d4060;
  return;
}


/* ZombossCoverUpActionHandler::StaticNew() */

ZombossCoverUpActionHandler * ZombossCoverUpActionHandler::StaticNew(void)

{
  ZombossCoverUpActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossCoverUpActionHandler(this);
  return this;
}


/* ZombossCoverUpActionHandler::~ZombossCoverUpActionHandler() */

void __thiscall
ZombossCoverUpActionHandler::~ZombossCoverUpActionHandler(ZombossCoverUpActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4060;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossCoverUpActionHandler::~ZombossCoverUpActionHandler() */

void __thiscall
ZombossCoverUpActionHandler::~ZombossCoverUpActionHandler(ZombossCoverUpActionHandler *this)

{
  ~ZombossCoverUpActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossCoverUpActionHandler::onUpdateAction() */

void __thiscall ZombossCoverUpActionHandler::onUpdateAction(ZombossCoverUpActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *pZVar2;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar1 = (**(code **)(*(long *)pZVar2 + 0xa90))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)pZVar2 + 0x248))(pZVar2);
  }
  return;
}


/* ZombossCoverUpActionHandler::regenerateIceCrust() const */

void __thiscall ZombossCoverUpActionHandler::regenerateIceCrust(ZombossCoverUpActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMech_IceAge *this_02;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech_IceAge>((RtObject *)this_01);
  ZombieZombossMech_IceAge::AddCrust(this_02);
  return;
}


/* ZombossCoverUpActionHandler::onRegenerateAnimationEnd(std::string const&) */

void ZombossCoverUpActionHandler::onRegenerateAnimationEnd(string *param_1)

{
  GlacierModule *this;
  
  regenerateIceCrust((ZombossCoverUpActionHandler *)param_1);
  ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
  this = (GlacierModule *)FUN_0476e5b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (GlacierModule *)0x0) {
    GlacierModule::Advance(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCoverUpActionHandler::onStartAction() */

void __thiscall ZombossCoverUpActionHandler::onStartAction(ZombossCoverUpActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRegenerateAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_IceAge::PlayRegenerateIceCrust
            ((ZombieAnimRig_ZombossMech_IceAge *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
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

