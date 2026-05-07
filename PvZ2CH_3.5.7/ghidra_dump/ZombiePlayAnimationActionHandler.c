// Class: ZombiePlayAnimationActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePlayAnimationActionHandler::StaticClassInit() */

void ZombiePlayAnimationActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePlayAnimationActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f02cf0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePlayAnimationActionHandler::StaticGetClass() */

long * ZombiePlayAnimationActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePlayAnimationActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePlayAnimationActionHandler::GetClass() const */

long * ZombiePlayAnimationActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePlayAnimationActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePlayAnimationActionHandler::ZombiePlayAnimationActionHandler() */

void __thiscall
ZombiePlayAnimationActionHandler::ZombiePlayAnimationActionHandler
          (ZombiePlayAnimationActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &PTR_GetClass_06a0bf30;
  return;
}


/* ZombiePlayAnimationActionHandler::StaticNew() */

ZombiePlayAnimationActionHandler * ZombiePlayAnimationActionHandler::StaticNew(void)

{
  ZombiePlayAnimationActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombiePlayAnimationActionHandler(this);
  return this;
}


/* ZombiePlayAnimationActionHandler::~ZombiePlayAnimationActionHandler() */

void __thiscall
ZombiePlayAnimationActionHandler::~ZombiePlayAnimationActionHandler
          (ZombiePlayAnimationActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0bf30;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombiePlayAnimationActionHandler::~ZombiePlayAnimationActionHandler() */

void __thiscall
ZombiePlayAnimationActionHandler::~ZombiePlayAnimationActionHandler
          (ZombiePlayAnimationActionHandler *this)

{
  ~ZombiePlayAnimationActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePlayAnimationActionHandler::startAnimation() */

void __thiscall
ZombiePlayAnimationActionHandler::startAnimation(ZombiePlayAnimationActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *this_00;
  long *plVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  plVar2 = (long *)Zombie::GetAnimRig(this_00);
  pcVar3 = *(code **)(*plVar2 + 0x170);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar3)(plVar2,pZVar1 + 0x38,0,aRStack_50);
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


/* ZombiePlayAnimationActionHandler::onStartAction() */

void __thiscall
ZombiePlayAnimationActionHandler::onStartAction(ZombiePlayAnimationActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(pZVar1 + 0x40);
  startAnimation(this);
  return;
}


/* ZombiePlayAnimationActionHandler::onAnimationDone(std::string const&) */

void ZombiePlayAnimationActionHandler::onAnimationDone(string *param_1)

{
  if (0 < *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    startAnimation((ZombiePlayAnimationActionHandler *)param_1);
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
  return;
}

