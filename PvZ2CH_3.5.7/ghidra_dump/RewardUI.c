// Class: RewardUI


/* RewardUI::~RewardUI() */

void __thiscall RewardUI::~RewardUI(RewardUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0693dc90;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RewardUI::~RewardUI() */

void __thiscall RewardUI::~RewardUI(RewardUI *this)

{
  ~RewardUI(this);
  AK::FreeHook(this);
  return;
}


/* RewardUI::Update() */

void __thiscall RewardUI::Update(RewardUI *this)

{
  StateMachine<RewardAniState>::UpdateState((StateMachine<RewardAniState> *)(this + 0xd8));
  return;
}


/* RewardUI::RewardUI() */

void __thiscall RewardUI::RewardUI(RewardUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0693dc90;
  StateMachine<RewardAniState>::StateMachine((StateMachine<RewardAniState> *)(this + 0xd8));
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  return;
}


/* RewardUI::StaticNew() */

RewardUI * RewardUI::StaticNew(void)

{
  RewardUI *this;
  
  this = ::operator_new(0x178);
  RewardUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardUI::StaticClassInit() */

void RewardUI::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<RewardAniState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<RewardAniState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"RewardUI");
      (*pcVar4)(plVar1,asStack_150,FUN_04a7f9fc,0x178,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<RewardAniState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x318);
  Sexy::Delegate1<RewardAniState>::Delegate1<RewardUI,void(RewardUI::*)(RewardAniState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x320);
  Sexy::Delegate0::Delegate0<RewardUI,void(RewardUI::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x328);
  Sexy::Delegate1<RewardAniState>::Delegate1<RewardUI,void(RewardUI::*)(RewardAniState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"REWARD_ANI_STATE_Init");
  StateDefinition<RewardAniState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a7f508(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x330);
  Sexy::Delegate1<RewardAniState>::Delegate1<RewardUI,void(RewardUI::*)(RewardAniState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x338);
  Sexy::Delegate0::Delegate0<RewardUI,void(RewardUI::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x340);
  Sexy::Delegate1<RewardAniState>::Delegate1<RewardUI,void(RewardUI::*)(RewardAniState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"REWARD_ANI_STATE_Update");
  StateDefinition<RewardAniState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a7f508(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x348);
  Sexy::Delegate1<RewardAniState>::Delegate1<RewardUI,void(RewardUI::*)(RewardAniState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x350);
  Sexy::Delegate0::Delegate0<RewardUI,void(RewardUI::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<RewardAniState>::Delegate1<RewardUI,void(RewardUI::*)(RewardAniState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"REWARD_ANI_STATE_End");
  StateDefinition<RewardAniState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a7f508(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RewardUI::StaticGetClass() */

long * RewardUI::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RewardUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RewardUI::GetClass() const */

long * RewardUI::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RewardUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardUI::setState(RewardAniState) */

void __thiscall RewardUI::setState(RewardUI *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RewardAniState>(this_00,pRVar1);
  StateMachineTable<RewardAniState>::GetStateDefinitionWithContext(aSStack_a8,pSVar2,param_2,this);
  StateMachine<RewardAniState>::SetState
            ((StateMachine<RewardAniState> *)(this + 0xd8),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

