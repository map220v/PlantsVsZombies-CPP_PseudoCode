// Class: ActionCheckForAndSpawnYeti


/* ActionCheckForAndSpawnYeti::~ActionCheckForAndSpawnYeti() */

void __thiscall
ActionCheckForAndSpawnYeti::~ActionCheckForAndSpawnYeti(ActionCheckForAndSpawnYeti *this)

{
  *(undefined ***)this = &PTR_GetClass_06858740;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionCheckForAndSpawnYeti::~ActionCheckForAndSpawnYeti() */

void __thiscall
ActionCheckForAndSpawnYeti::~ActionCheckForAndSpawnYeti(ActionCheckForAndSpawnYeti *this)

{
  ~ActionCheckForAndSpawnYeti(this);
  AK::FreeHook(this);
  return;
}


/* ActionCheckForAndSpawnYeti::ActionCheckForAndSpawnYeti() */

void __thiscall
ActionCheckForAndSpawnYeti::ActionCheckForAndSpawnYeti(ActionCheckForAndSpawnYeti *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858740;
  return;
}


/* ActionCheckForAndSpawnYeti::StaticNew() */

ActionCheckForAndSpawnYeti * ActionCheckForAndSpawnYeti::StaticNew(void)

{
  ActionCheckForAndSpawnYeti *this;
  
  this = ::operator_new(0x18);
  ActionCheckForAndSpawnYeti(this);
  return this;
}


/* ActionCheckForAndSpawnYeti::StaticGetClass() */

long * ActionCheckForAndSpawnYeti::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionCheckForAndSpawnYeti",uVar2,StaticNew);
  return sClass;
}


/* ActionCheckForAndSpawnYeti::GetClass() const */

long * ActionCheckForAndSpawnYeti::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionCheckForAndSpawnYeti",uVar2,StaticNew);
  return sClass;
}


/* ActionCheckForAndSpawnYeti::CreateIfNeed() */

ActionCheckForAndSpawnYeti * ActionCheckForAndSpawnYeti::CreateIfNeed(void)

{
  ActionCheckForAndSpawnYeti *this;
  
  this = ::operator_new(0x18);
  ActionCheckForAndSpawnYeti(this);
  return this;
}


/* ActionCheckForAndSpawnYeti::Start() */

void __thiscall ActionCheckForAndSpawnYeti::Start(ActionCheckForAndSpawnYeti *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::DoOnlineRefreshEventTime(this_01);
  this[9] = (ActionCheckForAndSpawnYeti)0x1;
  return;
}

