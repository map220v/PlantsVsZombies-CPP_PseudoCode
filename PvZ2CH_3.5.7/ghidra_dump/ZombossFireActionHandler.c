// Class: ZombossFireActionHandler


/* ZombossFireActionHandler::ZombossFireActionHandler() */

void __thiscall ZombossFireActionHandler::ZombossFireActionHandler(ZombossFireActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c6590;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  this[0x40] = (ZombossFireActionHandler)0x0;
  this[0x41] = (ZombossFireActionHandler)0x0;
  return;
}


/* ZombossFireActionHandler::~ZombossFireActionHandler() */

void __thiscall ZombossFireActionHandler::~ZombossFireActionHandler(ZombossFireActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6590;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossFireActionHandler::~ZombossFireActionHandler() */

void __thiscall ZombossFireActionHandler::~ZombossFireActionHandler(ZombossFireActionHandler *this)

{
  ~ZombossFireActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossFireActionHandler::SetRocketTargets(std::vector<Sexy::Point, std::allocator<Sexy::Point> >
   const&) */

void __thiscall
ZombossFireActionHandler::SetRocketTargets(ZombossFireActionHandler *this,vector *param_1)

{
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x28),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionHandler::StaticClassInit() */

void ZombossFireActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossFireActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04739af8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFireActionHandler::StaticGetClass() */

long * ZombossFireActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossFireActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFireActionHandler::GetClass() const */

long * ZombossFireActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossFireActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFireActionHandler::onUpdateAction() */

void __thiscall ZombossFireActionHandler::onUpdateAction(ZombossFireActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  if ((this[0x40] != (ZombossFireActionHandler)0x0) &&
     (cVar1 = (**(code **)(*(long *)this_01 + 0xa90))(), cVar1 != '\0')) {
    ZombieZombossMech::CounterAllRockets(this_01);
    return;
  }
  if (this[0x41] == (ZombossFireActionHandler)0x0) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionHandler::onRocketLaunchAnimDone(std::string const&) */

void ZombossFireActionHandler::onRocketLaunchAnimDone(string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar2;
  Point *pPVar3;
  RealObject *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0473a06c:
      ZombieZombossMech::StartRocketEffectsOn
                (this_01,(vector *)this,*(float *)(pZVar2 + 0x54),*(float *)(pZVar2 + 0x58),
                 (string *)(pZVar2 + 0x60));
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this);
      param_1[0x41] = (string)0x1;
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pPVar3 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_02 = (RealObject *)ZombieZombossMech::FindActiveRocketTargetingSquare(this_01,pPVar3);
    if (this_02 != (RealObject *)0x0) {
      RealObject::PlayPositionalSound(this_02,(string *)(pZVar2 + 0x60),0.0);
      goto LAB_0473a06c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombossFireActionHandler::StaticNew() */

ZombossFireActionHandler * ZombossFireActionHandler::StaticNew(void)

{
  ZombossFireActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossFireActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionHandler::onRocketStartAnimDone(std::string const&) */

void ZombossFireActionHandler::onRocketStartAnimDone(string *param_1)

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
  param_1[0x40] = (string)0x0;
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
/* ZombossFireActionHandler::onStartAction() */

void __thiscall ZombossFireActionHandler::onStartAction(ZombossFireActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this[0x40] = (ZombossFireActionHandler)0x1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  ZombieZombossMech::CreateRocketControllers(this_01,(vector *)(this + 0x28),(vector *)avStack_68);
  std::string::string(asStack_70,"Play_Zomb_Global_Zomboss_Attack_Reticle_Start_Appear");
  RealObject::PlayPositionalSound((RealObject *)this_01,asStack_70,0.0);
  std::string::~string(asStack_70);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x278);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onRocketStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             asStack_70);
  (*pcVar2)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  std::vector<ZombossRocket*,std::allocator<ZombossRocket*>>::~vector
            ((vector<ZombossRocket*,std::allocator<ZombossRocket*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

