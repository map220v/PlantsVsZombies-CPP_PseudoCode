// Class: ActionRebateReward


/* ActionRebateReward::~ActionRebateReward() */

void __thiscall ActionRebateReward::~ActionRebateReward(ActionRebateReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06858ec0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionRebateReward::~ActionRebateReward() */

void __thiscall ActionRebateReward::~ActionRebateReward(ActionRebateReward *this)

{
  ~ActionRebateReward(this);
  AK::FreeHook(this);
  return;
}


/* ActionRebateReward::StaticGetClass() */

long * ActionRebateReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionRebateReward",uVar2,StaticNew);
  return sClass;
}


/* ActionRebateReward::GetClass() const */

long * ActionRebateReward::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionRebateReward",uVar2,StaticNew);
  return sClass;
}


/* ActionRebateReward::ActionRebateReward() */

void __thiscall ActionRebateReward::ActionRebateReward(ActionRebateReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858ec0;
  return;
}


/* ActionRebateReward::StaticNew() */

ActionRebateReward * ActionRebateReward::StaticNew(void)

{
  ActionRebateReward *this;
  
  this = ::operator_new(0x18);
  ActionRebateReward(this);
  return this;
}


/* ActionRebateReward::GotCheckRebateData(S2C_ChristmasCheckRebate*) */

void __thiscall
ActionRebateReward::GotCheckRebateData(ActionRebateReward *this,S2C_ChristmasCheckRebate *param_1)

{
  char cVar1;
  
  if ((param_1 != (S2C_ChristmasCheckRebate *)0x0) &&
     (cVar1 = S2C_ChristmasCheckRebate::CanGetReward(param_1), cVar1 != '\0')) {
    LawnApp::ShowNewerPresentUI(gLawnApp,0x3f4);
    return;
  }
  ActionIwatchReward::onIwatchRewardClosed((ActionIwatchReward *)this);
  return;
}


/* ActionRebateReward::AddMessage() */

void __thiscall ActionRebateReward::AddMessage(ActionRebateReward *this)

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
            ((ReceivedDataCallback *)this,GotCheckRebateData);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<S2C_ChristmasCheckRebate*,Sexy::CBMemberTranslatorX<ActionRebateReward,void(ActionRebateReward::*)(S2C_ChristmasCheckRebate*)>>
            ((MessageRouter *)puVar1,Message::GotChristmasCheckRebate,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRebateReward::AndroidRequestProcess() */

void __thiscall ActionRebateReward::AndroidRequestProcess(ActionRebateReward *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar2;
  int *piVar3;
  undefined8 local_50 [3];
  S2C_ChristmasCheckRebate aSStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_ChristmasCheckRebate::S2C_ChristmasCheckRebate(aSStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar2 = (vector *)PlayerInfo::GetRebateRewardState(this_01);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)local_50,pvVar2);
  iVar1 = PlayerInfo::GetRebateCharge(this_01);
  piVar3 = (int *)FUN_0454b2c8(local_50[0],0);
  if ((*piVar3 == 0) && (9 < iVar1)) {
    *piVar3 = 1;
  }
  piVar3 = (int *)FUN_0454b2c8(local_50[0],1);
  if ((*piVar3 == 0) && (0x1d < iVar1)) {
    *piVar3 = 1;
  }
  piVar3 = (int *)FUN_0454b2c8(local_50[0],2);
  if ((*piVar3 == 0) && (0x3b < iVar1)) {
    *piVar3 = 1;
  }
  PlayerInfo::SetRebateRewardState(this_01,(vector *)local_50);
  pvVar2 = (vector *)PlayerInfo::GetRebateRewardState(this_01);
  std::vector<int,std::allocator<int>>::operator=(avStack_20,pvVar2);
  GotCheckRebateData(this,aSStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
  S2C_ChristmasCheckRebate::~S2C_ChristmasCheckRebate(aSStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionRebateReward::Start() */

void __thiscall ActionRebateReward::Start(ActionRebateReward *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < lVar1) {
    AddMessage(this);
    AndroidRequestProcess(this);
    return;
  }
  ActionIwatchReward::onIwatchRewardClosed((ActionIwatchReward *)this);
  return;
}

