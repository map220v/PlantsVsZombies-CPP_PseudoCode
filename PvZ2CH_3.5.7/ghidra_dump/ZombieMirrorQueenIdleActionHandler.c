// Class: ZombieMirrorQueenIdleActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenIdleActionHandler::StaticClassInit() */

void ZombieMirrorQueenIdleActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenIdleActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f08530,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenIdleActionHandler::StaticGetClass() */

long * ZombieMirrorQueenIdleActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenIdleActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenIdleActionHandler::GetClass() const */

long * ZombieMirrorQueenIdleActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenIdleActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenIdleActionHandler::ZombieMirrorQueenIdleActionHandler() */

void __thiscall
ZombieMirrorQueenIdleActionHandler::ZombieMirrorQueenIdleActionHandler
          (ZombieMirrorQueenIdleActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0efb0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* ZombieMirrorQueenIdleActionHandler::StaticNew() */

ZombieMirrorQueenIdleActionHandler * ZombieMirrorQueenIdleActionHandler::StaticNew(void)

{
  ZombieMirrorQueenIdleActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieMirrorQueenIdleActionHandler(this);
  return this;
}


/* ZombieMirrorQueenIdleActionHandler::~ZombieMirrorQueenIdleActionHandler() */

void __thiscall
ZombieMirrorQueenIdleActionHandler::~ZombieMirrorQueenIdleActionHandler
          (ZombieMirrorQueenIdleActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0efb0;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieMirrorQueenIdleActionHandler::~ZombieMirrorQueenIdleActionHandler() */

void __thiscall
ZombieMirrorQueenIdleActionHandler::~ZombieMirrorQueenIdleActionHandler
          (ZombieMirrorQueenIdleActionHandler *this)

{
  ~ZombieMirrorQueenIdleActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMirrorQueenIdleActionHandler::onUpdateAction() */

void __thiscall
ZombieMirrorQueenIdleActionHandler::onUpdateAction(ZombieMirrorQueenIdleActionHandler *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x24)) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenIdleActionHandler::onStartAction() */

void __thiscall
ZombieMirrorQueenIdleActionHandler::onStartAction(ZombieMirrorQueenIdleActionHandler *this)

{
  bool bVar1;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  FUN_04f05fd0(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)pZVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x24) = fVar4 + *(float *)(pZVar3 + 0x38);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

