// Class: ActionShowPlantTrial


/* ActionShowPlantTrial::OnPlantTrialClosed() */

void __thiscall ActionShowPlantTrial::OnPlantTrialClosed(ActionShowPlantTrial *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[9] = (ActionShowPlantTrial)0x1;
  return;
}


/* ActionShowPlantTrial::~ActionShowPlantTrial() */

void __thiscall ActionShowPlantTrial::~ActionShowPlantTrial(ActionShowPlantTrial *this)

{
  *(undefined ***)this = &PTR_GetClass_06858dc0;
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowPlantTrial::~ActionShowPlantTrial() */

void __thiscall ActionShowPlantTrial::~ActionShowPlantTrial(ActionShowPlantTrial *this)

{
  ~ActionShowPlantTrial(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowPlantTrial::ActionShowPlantTrial() */

void __thiscall ActionShowPlantTrial::ActionShowPlantTrial(ActionShowPlantTrial *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858dc0;
  Set8BytesTo0(this + 0x18);
  return;
}


/* ActionShowPlantTrial::StaticNew() */

ActionShowPlantTrial * ActionShowPlantTrial::StaticNew(void)

{
  ActionShowPlantTrial *this;
  
  this = ::operator_new(0x20);
  ActionShowPlantTrial(this);
  return this;
}


/* ActionShowPlantTrial::StaticGetClass() */

long * ActionShowPlantTrial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowPlantTrial",uVar2,StaticNew);
  return sClass;
}


/* ActionShowPlantTrial::GetClass() const */

long * ActionShowPlantTrial::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowPlantTrial",uVar2,StaticNew);
  return sClass;
}


/* ActionShowPlantTrial::ActionShowPlantTrial(std::string const&) */

void __thiscall
ActionShowPlantTrial::ActionShowPlantTrial(ActionShowPlantTrial *this,string *param_1)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858dc0;
  FUN_05475d88(this + 0x18,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowPlantTrial::Start() */

void __thiscall ActionShowPlantTrial::Start(ActionShowPlantTrial *this)

{
  undefined *puVar1;
  PlantTrialConfig *this_00;
  TrialData *pTVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  FUN_05475d88(asStack_50,this + 0x18);
  pTVar2 = (TrialData *)PlantTrialConfig::GetTrialDataByPlantName(this_00,asStack_50);
  PlantTrialConfig::SetTrialDataCache(this_00,pTVar2);
  std::string::~string(asStack_50);
  GameStateMgr::ShowPlantTrial(gGameStateMgr,5,5);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_50,this + 0x18);
  MessageRouter::Post<int,std::string_const&,int,std::string>
            ((MessageRouter *)puVar1,Message::PlantTrialBuy,7,asStack_50);
  std::string::~string(asStack_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantTrialClosed);
  Sexy::Delegate0::Delegate0<ActionShowPlantTrial,void(ActionShowPlantTrial::*)()>
            (aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantTrialDialogClosed,aDStack_38);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  PlayerInfo::SetPopupPlantTrialToday(this_02,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

