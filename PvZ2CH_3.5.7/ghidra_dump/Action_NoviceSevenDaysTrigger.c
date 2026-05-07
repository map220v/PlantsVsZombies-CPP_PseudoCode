// Class: Action_NoviceSevenDaysTrigger


/* Action_NoviceSevenDaysTrigger::~Action_NoviceSevenDaysTrigger() */

void __thiscall
Action_NoviceSevenDaysTrigger::~Action_NoviceSevenDaysTrigger(Action_NoviceSevenDaysTrigger *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a7c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_NoviceSevenDaysTrigger::~Action_NoviceSevenDaysTrigger() */

void __thiscall
Action_NoviceSevenDaysTrigger::~Action_NoviceSevenDaysTrigger(Action_NoviceSevenDaysTrigger *this)

{
  ~Action_NoviceSevenDaysTrigger(this);
  AK::FreeHook(this);
  return;
}


/* Action_NoviceSevenDaysTrigger::StaticGetClass() */

long * Action_NoviceSevenDaysTrigger::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_NoviceSevenDaysTrigger",uVar2,StaticNew);
  return sClass;
}


/* Action_NoviceSevenDaysTrigger::GetClass() const */

long * Action_NoviceSevenDaysTrigger::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_NoviceSevenDaysTrigger",uVar2,StaticNew);
  return sClass;
}


/* Action_NoviceSevenDaysTrigger::Action_NoviceSevenDaysTrigger() */

void __thiscall
Action_NoviceSevenDaysTrigger::Action_NoviceSevenDaysTrigger(Action_NoviceSevenDaysTrigger *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a7c0;
  return;
}


/* Action_NoviceSevenDaysTrigger::StaticNew() */

Action_NoviceSevenDaysTrigger * Action_NoviceSevenDaysTrigger::StaticNew(void)

{
  Action_NoviceSevenDaysTrigger *this;
  
  this = ::operator_new(0x18);
  Action_NoviceSevenDaysTrigger(this);
  return this;
}


/* Action_NoviceSevenDaysTrigger::Start() */

void __thiscall Action_NoviceSevenDaysTrigger::Start(Action_NoviceSevenDaysTrigger *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::ShouldRequestTrigger(this_01);
  if (cVar1 != '\0') {
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar2 + 0x1e0))();
  }
  this[9] = (Action_NoviceSevenDaysTrigger)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_NoviceSevenDaysTrigger::CreateIfNeed(bool&) */

void Action_NoviceSevenDaysTrigger::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  Action_NoviceSevenDaysTrigger *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if ((this_00 != (PlayerInfo *)0x0) &&
     (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
    std::string::string(asStack_10,"egypt1");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (2 < iVar2) {
      this_01 = ::operator_new(0x18);
      *(undefined8 *)this_01 = 0;
      this_01[8] = (Action_NoviceSevenDaysTrigger)0x0;
      this_01[9] = (Action_NoviceSevenDaysTrigger)0x0;
      this_01[10] = (Action_NoviceSevenDaysTrigger)0x0;
      *(undefined4 *)(this_01 + 0xc) = 0;
      *(undefined4 *)(this_01 + 0x10) = 0;
      Action_NoviceSevenDaysTrigger(this_01);
      goto LAB_04555c8c;
    }
  }
  this_01 = (Action_NoviceSevenDaysTrigger *)0x0;
LAB_04555c8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

