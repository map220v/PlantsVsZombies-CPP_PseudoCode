// Class: ZombossHelmLostActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHelmLostActionHandler::StaticClassInit() */

void ZombossHelmLostActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHelmLostActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0476d864,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHelmLostActionHandler::StaticGetClass() */

long * ZombossHelmLostActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossHelmLostActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHelmLostActionHandler::GetClass() const */

long * ZombossHelmLostActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossHelmLostActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHelmLostActionHandler::ZombossHelmLostActionHandler() */

void __thiscall
ZombossHelmLostActionHandler::ZombossHelmLostActionHandler(ZombossHelmLostActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068d41c0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* ZombossHelmLostActionHandler::StaticNew() */

ZombossHelmLostActionHandler * ZombossHelmLostActionHandler::StaticNew(void)

{
  ZombossHelmLostActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossHelmLostActionHandler(this);
  return this;
}


/* ZombossHelmLostActionHandler::~ZombossHelmLostActionHandler() */

void __thiscall
ZombossHelmLostActionHandler::~ZombossHelmLostActionHandler(ZombossHelmLostActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068d41c0;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossHelmLostActionHandler::~ZombossHelmLostActionHandler() */

void __thiscall
ZombossHelmLostActionHandler::~ZombossHelmLostActionHandler(ZombossHelmLostActionHandler *this)

{
  ~ZombossHelmLostActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossHelmLostActionHandler::onUpdateAction() */

void __thiscall ZombossHelmLostActionHandler::onUpdateAction(ZombossHelmLostActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *pZVar2;
  float fVar3;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar1 = (**(code **)(*(long *)pZVar2 + 0xa90))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)pZVar2 + 0x248))(pZVar2);
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
    return;
  }
  fVar3 = (float)PVZ_T();
  if (fVar3 <= *(float *)(this + 0x24)) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHelmLostActionHandler::onRevealAnimationEnd(std::string const&) */

void ZombossHelmLostActionHandler::onRevealAnimationEnd(string *param_1)

{
  char cVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  cVar1 = (**(code **)(*(long *)this_00 + 0xa90))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    ZombieAnimRig_ZombossMech_IceAge::PlayStun
              ((ZombieAnimRig_ZombossMech_IceAge *)pZVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHelmLostActionHandler::onStartAction() */

void __thiscall ZombossHelmLostActionHandler::onStartAction(ZombossHelmLostActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  long extraout_x0;
  float fVar2;
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
  std::string::string(asStack_58,"onRevealAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_IceAge::PlayReveal
            ((ZombieAnimRig_ZombossMech_IceAge *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  fVar2 = (float)PVZ_T();
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  nop();
  *(float *)(this + 0x24) = fVar2 + *(float *)(extraout_x0 + 0x38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

