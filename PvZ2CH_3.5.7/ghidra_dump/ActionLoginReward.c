// Class: ActionLoginReward


/* ActionLoginReward::onLoginRewardDialogClosed() */

void __thiscall ActionLoginReward::onLoginRewardDialogClosed(ActionLoginReward *this)

{
  this[9] = (ActionLoginReward)0x1;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ActionLoginReward::~ActionLoginReward() */

void __thiscall ActionLoginReward::~ActionLoginReward(ActionLoginReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06858b40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionLoginReward::~ActionLoginReward() */

void __thiscall ActionLoginReward::~ActionLoginReward(ActionLoginReward *this)

{
  ~ActionLoginReward(this);
  AK::FreeHook(this);
  return;
}


/* ActionLoginReward::StaticGetClass() */

long * ActionLoginReward::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionLoginReward",uVar2,StaticNew);
  return sClass;
}


/* ActionLoginReward::GetClass() const */

long * ActionLoginReward::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionLoginReward",uVar2,StaticNew);
  return sClass;
}


/* ActionLoginReward::ActionLoginReward() */

void __thiscall ActionLoginReward::ActionLoginReward(ActionLoginReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858b40;
  return;
}


/* ActionLoginReward::StaticNew() */

ActionLoginReward * ActionLoginReward::StaticNew(void)

{
  ActionLoginReward *this;
  
  this = ::operator_new(0x18);
  ActionLoginReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLoginReward::Start() */

void __thiscall ActionLoginReward::Start(ActionLoginReward *this)

{
  undefined *this_00;
  ServerTime *this_01;
  CServerTimeHandler_LoginReward *this_02;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoginRewardDialogClosed);
  Sexy::Delegate0::Delegate0<ActionLoginReward,void(ActionLoginReward::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ActionLoginRewardEnd,aDStack_38);
  this_01 = (ServerTime *)ServerTime::Instance();
  this_02 = ::operator_new(8);
  CServerTimeHandler_LoginReward::CServerTimeHandler_LoginReward(this_02);
  ServerTime::GetServerTimeFromNet(this_01,(CServerTimeHandler *)this_02,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

