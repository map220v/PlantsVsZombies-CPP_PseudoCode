// Class: CardGameRoundAction


/* CardGameRoundAction::DoAction(int) */

void __thiscall CardGameRoundAction::DoAction(CardGameRoundAction *this,int param_1)

{
  if (*(int *)(this + 8) != param_1) {
    return;
  }
  (**(code **)(*(long *)this + 0x28))();
  return;
}


/* CardGameRoundAction::Init(int, Sexy::RtWeakPtr<CardGameRoundActionProperties>) */

void __thiscall
CardGameRoundAction::Init(CardGameRoundAction *this,undefined4 param_1,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_3);
  *(undefined4 *)(this + 8) = param_1;
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}


/* CardGameRoundAction::CardGameRoundAction() */

void __thiscall CardGameRoundAction::CardGameRoundAction(CardGameRoundAction *this)

{
  *(undefined ***)this = &PTR__CardGameRoundAction_069d6410;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* CardGameRoundAction::~CardGameRoundAction() */

void __thiscall CardGameRoundAction::~CardGameRoundAction(CardGameRoundAction *this)

{
  *(undefined ***)this = &PTR__CardGameRoundAction_069d6410;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


/* CardGameRoundAction::~CardGameRoundAction() */

void __thiscall CardGameRoundAction::~CardGameRoundAction(CardGameRoundAction *this)

{
  ~CardGameRoundAction(this);
  AK::FreeHook(this);
  return;
}


/* CardGameRoundAction::registerForEvents() */

void __thiscall CardGameRoundAction::registerForEvents(CardGameRoundAction *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x20);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<CardGameRoundAction,void(CardGameRoundAction::*)(int)>>
            ((MessageRouter *)puVar1,Message::CardGamePickCardStart,&local_40);
  return;
}

