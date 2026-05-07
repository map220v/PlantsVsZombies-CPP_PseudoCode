// Class: BasePowerup


/* BasePowerup::SetPowerupType(Sexy::RtWeakPtr<PowerupType>) */

void __thiscall BasePowerup::SetPowerupType(BasePowerup *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_2);
  return;
}


/* BasePowerup::GetType() */

void __thiscall BasePowerup::GetType(BasePowerup *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x10));
  return;
}


/* BasePowerup::Draw(Sexy::Graphics*) */

void BasePowerup::Draw(Graphics *param_1)

{
  return;
}


/* BasePowerup::onEnterState_Idle(PowerupState) */

void BasePowerup::onEnterState_Idle(long param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


/* BasePowerup::getPowerupStateSerialization() */

void __thiscall BasePowerup::getPowerupStateSerialization(BasePowerup *this)

{
  FUN_03b7532c(*(undefined4 *)(this + 0x28));
  return;
}


/* BasePowerup::isInState(unsigned int) const */

bool __thiscall BasePowerup::isInState(BasePowerup *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = getPowerupStateSerialization(this);
  return uVar1 == param_1;
}


/* BasePowerup::~BasePowerup() */

void __thiscall BasePowerup::~BasePowerup(BasePowerup *this)

{
  *(undefined ***)this = &PTR_GetClass_06734020;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* BasePowerup::~BasePowerup() */

void __thiscall BasePowerup::~BasePowerup(BasePowerup *this)

{
  ~BasePowerup(this);
  AK::FreeHook(this);
  return;
}


/* BasePowerup::Update() */

void __thiscall BasePowerup::Update(BasePowerup *this)

{
  StateMachine<PowerupState>::UpdateState((StateMachine<PowerupState> *)(this + 0x28));
  return;
}


/* BasePowerup::ResetTimeRemaining() */

void __thiscall BasePowerup::ResetTimeRemaining(BasePowerup *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(lVar1 + 0x68);
  return;
}


/* BasePowerup::onEnterState_Selected(PowerupState) */

void BasePowerup::onEnterState_Selected(long param_1)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x68);
  return;
}


/* BasePowerup::BasePowerup() */

void __thiscall BasePowerup::BasePowerup(BasePowerup *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06734020;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[0x18] = (BasePowerup)0x0;
  this[0x19] = (BasePowerup)0x0;
  this[0x1a] = (BasePowerup)0x0;
  this[0x1b] = (BasePowerup)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  StateMachine<PowerupState>::StateMachine((StateMachine<PowerupState> *)(this + 0x28));
  return;
}


/* BasePowerup::StaticNew() */

BasePowerup * BasePowerup::StaticNew(void)

{
  BasePowerup *this;
  
  this = ::operator_new(200);
  BasePowerup(this);
  return this;
}


/* BasePowerup::SetIsInWarning(bool) */

void __thiscall BasePowerup::SetIsInWarning(BasePowerup *this,bool param_1)

{
  if ((this[0x1b] != (BasePowerup)param_1) && (this[0x1b] = (BasePowerup)param_1, param_1)) {
    MessageRouter::Post<BasePowerup*,BasePowerup*>
              ((MessageRouter *)gMessageRouter,Message::PowerupWarning,this);
    return;
  }
  return;
}


/* BasePowerup::onEnterState_Activated(PowerupState) */

void BasePowerup::onEnterState_Activated(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_PowerUp_Menu_Select");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasePowerup::StaticClassInit() */

void BasePowerup::StaticClassInit(void)

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
  Delegate1<PowerupState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PowerupState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"BasePowerup");
      (*pcVar4)(plVar1,asStack_150,FUN_03b76a68,200,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PowerupState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x88);
  Sexy::Delegate1<PowerupState>::Delegate1<BasePowerup,void(BasePowerup::*)(PowerupState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x90);
  Sexy::Delegate0::Delegate0<BasePowerup,void(BasePowerup::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x98);
  Sexy::Delegate1<PowerupState>::Delegate1<BasePowerup,void(BasePowerup::*)(PowerupState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUP_Idle");
  StateDefinition<PowerupState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b76574(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa0);
  Sexy::Delegate1<PowerupState>::Delegate1<BasePowerup,void(BasePowerup::*)(PowerupState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<BasePowerup,void(BasePowerup::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb0);
  Sexy::Delegate1<PowerupState>::Delegate1<BasePowerup,void(BasePowerup::*)(PowerupState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUP_Selected");
  StateDefinition<PowerupState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b76574(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb8);
  Sexy::Delegate1<PowerupState>::Delegate1<BasePowerup,void(BasePowerup::*)(PowerupState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc0);
  Sexy::Delegate0::Delegate0<BasePowerup,void(BasePowerup::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc8);
  Sexy::Delegate1<PowerupState>::Delegate1<BasePowerup,void(BasePowerup::*)(PowerupState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUP_Activated");
  StateDefinition<PowerupState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b76574(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BasePowerup::StaticGetClass() */

long * BasePowerup::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BasePowerup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BasePowerup::GetClass() const */

long * BasePowerup::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BasePowerup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasePowerup::setState(PowerupState) */

void __thiscall BasePowerup::setState(BasePowerup *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PowerupState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PowerupState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PowerupState>::GetStateDefinition
                     ((StateMachineTable<PowerupState> *)pSVar2,param_2);
  StateDefinition<PowerupState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PowerupState>::SetContext(aSStack_a8,this);
  StateMachine<PowerupState>::SetState
            ((StateMachine<PowerupState> *)(this + 0x28),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BasePowerup::Deselect() */

void __thiscall BasePowerup::Deselect(BasePowerup *this)

{
  setState(this,0);
  return;
}


/* BasePowerup::Select() */

void __thiscall BasePowerup::Select(BasePowerup *this)

{
  setState(this,1);
  return;
}


/* BasePowerup::Activate() */

void __thiscall BasePowerup::Activate(BasePowerup *this)

{
  setState(this,2);
  Board::ActivatePowerup(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* BasePowerup::Deactivate() */

void __thiscall BasePowerup::Deactivate(BasePowerup *this)

{
  setState(this,0);
  Board::DeactivatePowerup(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* BasePowerup::updateState_Activated() */

void __thiscall BasePowerup::updateState_Activated(BasePowerup *this)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  
  if (this[0x19] == (BasePowerup)0x0) {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x1c);
    *(float *)(this + 0x1c) = fVar3 - fVar2;
    if (fVar3 - fVar2 <= 0.0) {
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_PowerUp_Menu_TimeUp");
      Deactivate(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasePowerup::DecrementTimeByUseCost() */

void __thiscall BasePowerup::DecrementTimeByUseCost(BasePowerup *this)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x19] == (BasePowerup)0x0) {
    fVar3 = *(float *)(this + 0x1c);
    local_10 = 0.0;
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
    ;
    local_c = fVar3 - *(float *)(lVar1 + 0x6c);
    pfVar2 = eastl::max_alt<float>(&local_10,&local_c);
    fVar3 = *pfVar2;
    *(float *)(this + 0x1c) = fVar3;
    if (fVar3 == 0.0) {
      if (local_8 == ___stack_chk_guard) {
        Deactivate(this);
        return;
      }
      goto LAB_03b775cc;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03b775cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasePowerup::setPowerupStateSerialization(int) */

void __thiscall BasePowerup::setPowerupStateSerialization(BasePowerup *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PowerupState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PowerupState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PowerupState>::GetStateDefinition
                     ((StateMachineTable<PowerupState> *)pSVar2,param_1);
  StateDefinition<PowerupState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PowerupState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x28),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

