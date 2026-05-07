// Class: ZombieStunActionHandler


/* ZombieStunActionHandler::onCycleComplete() */

void __thiscall ZombieStunActionHandler::onCycleComplete(ZombieStunActionHandler *this)

{
  this[0x20] = (ZombieStunActionHandler)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStunActionHandler::StaticClassInit() */

void ZombieStunActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieStunActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f02fc4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStunActionHandler::StaticGetClass() */

long * ZombieStunActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieStunActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieStunActionHandler::GetClass() const */

long * ZombieStunActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieStunActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieStunActionHandler::ZombieStunActionHandler() */

void __thiscall ZombieStunActionHandler::ZombieStunActionHandler(ZombieStunActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0c090;
  return;
}


/* ZombieStunActionHandler::StaticNew() */

ZombieStunActionHandler * ZombieStunActionHandler::StaticNew(void)

{
  ZombieStunActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombieStunActionHandler(this);
  return this;
}


/* ZombieStunActionHandler::~ZombieStunActionHandler() */

void __thiscall ZombieStunActionHandler::~ZombieStunActionHandler(ZombieStunActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0c090;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieStunActionHandler::~ZombieStunActionHandler() */

void __thiscall ZombieStunActionHandler::~ZombieStunActionHandler(ZombieStunActionHandler *this)

{
  ~ZombieStunActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStunActionHandler::playStart() */

void __thiscall ZombieStunActionHandler::playStart(ZombieStunActionHandler *this)

{
  Zombie *this_00;
  long *plVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  code *pcVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  plVar1 = (long *)Zombie::GetAnimRig(this_00);
  pcVar3 = *(code **)(*plVar1 + 0x168);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  (*pcVar3)(plVar1,pZVar2 + 0x38,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStunActionHandler::onStartAction() */

void __thiscall ZombieStunActionHandler::onStartAction(ZombieStunActionHandler *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  this[0x28] = (ZombieStunActionHandler)0x0;
  *(undefined4 *)(this + 0x24) = uVar1;
  playStart(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStunActionHandler::playLoop() */

void __thiscall ZombieStunActionHandler::playLoop(ZombieStunActionHandler *this)

{
  Zombie *this_00;
  long *plVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  code *pcVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  plVar1 = (long *)Zombie::GetAnimRig(this_00);
  pcVar3 = *(code **)(*plVar1 + 0x168);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  (*pcVar3)(plVar1,pZVar2 + 0x40,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStunActionHandler::playEnd() */

void __thiscall ZombieStunActionHandler::playEnd(ZombieStunActionHandler *this)

{
  Zombie *this_00;
  long *plVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  plVar1 = (long *)Zombie::GetAnimRig(this_00);
  pcVar3 = *(code **)(*plVar1 + 0x170);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCycleComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar3)(plVar1,pZVar2 + 0x48,0,aRStack_50);
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


/* ZombieStunActionHandler::onUpdateAction() */

void __thiscall ZombieStunActionHandler::onUpdateAction(ZombieStunActionHandler *this)

{
  char cVar1;
  long extraout_x0;
  Zombie *this_00;
  PopAnimRig *this_01;
  float fVar2;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  fVar2 = (float)PVZ_T();
  if (fVar2 - *(float *)(this + 0x24) < *(float *)(extraout_x0 + 0x840)) {
    this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
    cVar1 = PopAnimRig::IsPlayingAnything(this_01);
    if (cVar1 == '\0') {
      playLoop(this);
      return;
    }
  }
  else if (this[0x28] == (ZombieStunActionHandler)0x0) {
    playEnd(this);
    this[0x28] = (ZombieStunActionHandler)0x1;
    return;
  }
  return;
}

