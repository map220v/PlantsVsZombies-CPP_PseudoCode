// Class: StarChallengeCardGameTurnPass


/* StarChallengeCardGameTurnPass::gameplayStarted(int) */

void __thiscall
StarChallengeCardGameTurnPass::gameplayStarted(StarChallengeCardGameTurnPass *this,int param_1)

{
  *(int *)(this + 0x28) = param_1 + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeCardGameTurnPass::StaticClassInit() */

void StarChallengeCardGameTurnPass::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeCardGameTurnPass");
    (*pcVar2)(plVar1,asStack_10,FUN_035633cc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeCardGameTurnPass::StaticGetClass() */

long * StarChallengeCardGameTurnPass::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeCardGameTurnPass::~StarChallengeCardGameTurnPass() */

void __thiscall
StarChallengeCardGameTurnPass::~StarChallengeCardGameTurnPass(StarChallengeCardGameTurnPass *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0665a290;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeCardGameTurnPass::~StarChallengeCardGameTurnPass() */

void __thiscall
StarChallengeCardGameTurnPass::~StarChallengeCardGameTurnPass(StarChallengeCardGameTurnPass *this)

{
  ~StarChallengeCardGameTurnPass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeCardGameTurnPass::StarChallengeCardGameTurnPass() */

void __thiscall
StarChallengeCardGameTurnPass::StarChallengeCardGameTurnPass(StarChallengeCardGameTurnPass *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0665a290;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x28) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeCardGameTurnPass::StaticNew() */

StarChallengeCardGameTurnPass * StarChallengeCardGameTurnPass::StaticNew(void)

{
  StarChallengeCardGameTurnPass *this;
  
  this = ::operator_new(0x30);
  StarChallengeCardGameTurnPass(this);
  return this;
}


/* StarChallengeCardGameTurnPass::gameplayEnded() */

void __thiscall StarChallengeCardGameTurnPass::gameplayEnded(StarChallengeCardGameTurnPass *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  iVar1 = *(int *)(this + 0x28);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x40) < iVar1) {
    Challenge::Fail();
    Challenge::HideUI((Challenge *)this);
    return;
  }
  Challenge::Complete((Challenge *)this);
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeCardGameTurnPass::registerForEvents() */

void __thiscall
StarChallengeCardGameTurnPass::registerForEvents(StarChallengeCardGameTurnPass *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeCardGameTurnPass,void(StarChallengeCardGameTurnPass::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<StarChallengeCardGameTurnPass,void(StarChallengeCardGameTurnPass::*)(int)>>
            ((MessageRouter *)puVar1,Message::CardGamePickCardStart,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

