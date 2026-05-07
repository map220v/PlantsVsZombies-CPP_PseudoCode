// Class: ZombossSkyCityRushDownActionHandler


/* ZombossSkyCityRushDownActionHandler::onRushDownEnded(std::string const&) */

void ZombossSkyCityRushDownActionHandler::onRushDownEnded(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityRushDownActionHandler::StaticClassInit() */

void ZombossSkyCityRushDownActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityRushDownActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0472af6c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityRushDownActionHandler::StaticGetClass() */

long * ZombossSkyCityRushDownActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityRushDownActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityRushDownActionHandler::GetClass() const */

long * ZombossSkyCityRushDownActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityRushDownActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityRushDownActionHandler::ZombossSkyCityRushDownActionHandler() */

void __thiscall
ZombossSkyCityRushDownActionHandler::ZombossSkyCityRushDownActionHandler
          (ZombossSkyCityRushDownActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c3260;
  return;
}


/* ZombossSkyCityRushDownActionHandler::StaticNew() */

ZombossSkyCityRushDownActionHandler * ZombossSkyCityRushDownActionHandler::StaticNew(void)

{
  ZombossSkyCityRushDownActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossSkyCityRushDownActionHandler(this);
  return this;
}


/* ZombossSkyCityRushDownActionHandler::~ZombossSkyCityRushDownActionHandler() */

void __thiscall
ZombossSkyCityRushDownActionHandler::~ZombossSkyCityRushDownActionHandler
          (ZombossSkyCityRushDownActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3260;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSkyCityRushDownActionHandler::~ZombossSkyCityRushDownActionHandler() */

void __thiscall
ZombossSkyCityRushDownActionHandler::~ZombossSkyCityRushDownActionHandler
          (ZombossSkyCityRushDownActionHandler *this)

{
  ~ZombossSkyCityRushDownActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityRushDownActionHandler::onRushDownFlyEnded(std::string const&) */

void ZombossSkyCityRushDownActionHandler::onRushDownFlyEnded(string *param_1)

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
  std::string::string(asStack_58,"onRushDownEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_SkyCity::PlayRushDown
            ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityRushDownActionHandler::onStartAction() */

void __thiscall
ZombossSkyCityRushDownActionHandler::onStartAction(ZombossSkyCityRushDownActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  char *pcVar2;
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
  std::string::string(asStack_58,"onRushDownFlyEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_SkyCity::PlayRushDownFly
            ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Zomb_SkyCity_Zomboss_Attack_RushDown");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

