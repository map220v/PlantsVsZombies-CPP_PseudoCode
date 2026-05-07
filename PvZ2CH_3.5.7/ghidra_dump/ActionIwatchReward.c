// Class: ActionIwatchReward


/* ActionIwatchReward::onIwatchRewardClosed() */

void __thiscall ActionIwatchReward::onIwatchRewardClosed(ActionIwatchReward *this)

{
  this[9] = (ActionIwatchReward)0x1;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ActionIwatchReward::~ActionIwatchReward() */

void __thiscall ActionIwatchReward::~ActionIwatchReward(ActionIwatchReward *this)

{
  *(undefined ***)this = &PTR_GetClass_068594c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionIwatchReward::~ActionIwatchReward() */

void __thiscall ActionIwatchReward::~ActionIwatchReward(ActionIwatchReward *this)

{
  ~ActionIwatchReward(this);
  AK::FreeHook(this);
  return;
}


/* ActionIwatchReward::Start() */

void ActionIwatchReward::Start(void)

{
  nop();
  return;
}


/* ActionIwatchReward::StaticGetClass() */

long * ActionIwatchReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionIwatchReward",uVar2,StaticNew);
  return sClass;
}


/* ActionIwatchReward::GetClass() const */

long * ActionIwatchReward::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionIwatchReward",uVar2,StaticNew);
  return sClass;
}


/* ActionIwatchReward::ActionIwatchReward() */

void __thiscall ActionIwatchReward::ActionIwatchReward(ActionIwatchReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068594c0;
  return;
}


/* ActionIwatchReward::StaticNew() */

ActionIwatchReward * ActionIwatchReward::StaticNew(void)

{
  ActionIwatchReward *this;
  
  this = ::operator_new(0x18);
  ActionIwatchReward(this);
  return this;
}

