// Class: RiftSubEventDefinition


/* RiftSubEventDefinition::RiftSubEventDefinition(RiftSubEventDefinition&&) */

void __thiscall
RiftSubEventDefinition::RiftSubEventDefinition
          (RiftSubEventDefinition *this,RiftSubEventDefinition *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}


/* RiftSubEventDefinition::RiftSubEventDefinition() */

void __thiscall RiftSubEventDefinition::RiftSubEventDefinition(RiftSubEventDefinition *this)

{
  Set8BytesTo0(this + 0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSubEventDefinition::ToString() const */

void RiftSubEventDefinition::ToString(void)

{
  long *in_x0;
  undefined8 uVar1;
  RiftSchedule *pRVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  time_t local_20;
  time_t local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  uVar1 = FUN_0547429c(in_x0 + 2);
  Sexy::StrFormat("Sub-Event Name (Key): %s\n",asStack_10,uVar1);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  pRVar2 = (RiftSchedule *)RiftSchedule::GetSchedule();
  lVar5 = *in_x0;
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  local_20 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(pRVar2,lVar5,lVar3);
  pRVar2 = (RiftSchedule *)RiftSchedule::GetSchedule();
  lVar5 = in_x0[1];
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  local_18 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(pRVar2,lVar5,lVar3);
  pcVar4 = ctime(&local_20);
  Sexy::StrFormat("Start: %s\n",asStack_10,pcVar4);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  pcVar4 = ctime(&local_18);
  Sexy::StrFormat("End: %s\n",asStack_10,pcVar4);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

