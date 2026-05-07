// Class: ActionShowPlantAdventure


/* ActionShowPlantAdventure::Start() */

void ActionShowPlantAdventure::Start(void)

{
  LawnApp::ShowAdventureOpenedUI(gLawnApp);
  return;
}


/* ActionShowPlantAdventure::~ActionShowPlantAdventure() */

void __thiscall ActionShowPlantAdventure::~ActionShowPlantAdventure(ActionShowPlantAdventure *this)

{
  *(undefined ***)this = &PTR_GetClass_06858e40;
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowPlantAdventure::~ActionShowPlantAdventure() */

void __thiscall ActionShowPlantAdventure::~ActionShowPlantAdventure(ActionShowPlantAdventure *this)

{
  ~ActionShowPlantAdventure(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowPlantAdventure::ActionShowPlantAdventure() */

void __thiscall ActionShowPlantAdventure::ActionShowPlantAdventure(ActionShowPlantAdventure *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858e40;
  Set8BytesTo0(this + 0x18);
  return;
}


/* ActionShowPlantAdventure::StaticNew() */

ActionShowPlantAdventure * ActionShowPlantAdventure::StaticNew(void)

{
  ActionShowPlantAdventure *this;
  
  this = ::operator_new(0x20);
  ActionShowPlantAdventure(this);
  return this;
}


/* ActionShowPlantAdventure::StaticGetClass() */

long * ActionShowPlantAdventure::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowPlantAdventure",uVar2,StaticNew);
  return sClass;
}


/* ActionShowPlantAdventure::GetClass() const */

long * ActionShowPlantAdventure::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowPlantAdventure",uVar2,StaticNew);
  return sClass;
}


/* ActionShowPlantAdventure::ActionShowPlantAdventure(std::string const&) */

void __thiscall
ActionShowPlantAdventure::ActionShowPlantAdventure(ActionShowPlantAdventure *this,string *param_1)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858e40;
  FUN_05475d88(this + 0x18,param_1);
  return;
}


/* ActionShowPlantAdventure::OnPlantAdventureClosed() */

void __thiscall ActionShowPlantAdventure::OnPlantAdventureClosed(ActionShowPlantAdventure *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[9] = (ActionShowPlantAdventure)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowPlantAdventure::CreateIfNeed(bool&) */

void ActionShowPlantAdventure::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionShowPlantAdventure *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if ((this_00 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::HasFirstPlantAdventureOpenInfo(this_00), cVar1 != '\0')) {
      PlayerInfo::GetFirstPlantAdventureOpenInfo();
      this_01 = ::operator_new(0x20);
      ActionShowPlantAdventure(this_01,asStack_10);
      std::string::~string(asStack_10);
      goto LAB_04554e38;
    }
  }
  this_01 = (ActionShowPlantAdventure *)0x0;
LAB_04554e38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

