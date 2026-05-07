// Class: ActionStartNarrativeID


/* ActionStartNarrativeID::~ActionStartNarrativeID() */

void __thiscall ActionStartNarrativeID::~ActionStartNarrativeID(ActionStartNarrativeID *this)

{
  *(undefined ***)this = &PTR_GetClass_068589c0;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionStartNarrativeID::~ActionStartNarrativeID() */

void __thiscall ActionStartNarrativeID::~ActionStartNarrativeID(ActionStartNarrativeID *this)

{
  ~ActionStartNarrativeID(this);
  AK::FreeHook(this);
  return;
}


/* ActionStartNarrativeID::ActionStartNarrativeID() */

void __thiscall ActionStartNarrativeID::ActionStartNarrativeID(ActionStartNarrativeID *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068589c0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x28),(DummyInit *)0x0);
  return;
}


/* ActionStartNarrativeID::StaticNew() */

ActionStartNarrativeID * ActionStartNarrativeID::StaticNew(void)

{
  ActionStartNarrativeID *this;
  
  this = ::operator_new(0x58);
  ActionStartNarrativeID(this);
  return this;
}


/* ActionStartNarrativeID::ActionStartNarrativeID(std::string const&, std::string const&,
   Sexy::Delegate0) */

void __thiscall
ActionStartNarrativeID::ActionStartNarrativeID
          (ActionStartNarrativeID *this,undefined8 param_1,undefined8 param_2,Delegate2 *param_4)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068589c0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x28),(DummyInit *)0x0);
  thunk_FUN_05475e00(this + 0x18,param_1);
  thunk_FUN_05475e00(this + 0x20,param_2);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x28),param_4);
  return;
}


/* ActionStartNarrativeID::StaticGetClass() */

long * ActionStartNarrativeID::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionStartNarrativeID",uVar2,StaticNew);
  return sClass;
}


/* ActionStartNarrativeID::GetClass() const */

long * ActionStartNarrativeID::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionStartNarrativeID",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionStartNarrativeID::CreateIfNeed(bool&) */

void ActionStartNarrativeID::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionStartNarrativeID *pAVar2;
  size_t in_x2;
  string asStack_78 [8];
  string asStack_70 [8];
  MapNarrativeInfo local_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  RiverEntityProperties aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetCurrentWorldName(this_00);
  cVar1 = FUN_0547419c(asStack_78);
  if (cVar1 != '\0') {
    std::string::append(asStack_78,"egypt",in_x2);
  }
  FUN_05475d88(asStack_70,asStack_78);
  WorldMap::GetNarrativeToQueue(aRStack_50,asStack_70);
  MapNarrativeInfo::MapNarrativeInfo(local_68,(MapNarrativeInfo *)aRStack_50);
  RiverEntityProperties::~RiverEntityProperties(aRStack_50);
  std::string::~string(asStack_70);
  if (local_68[0] == (MapNarrativeInfo)0x0) {
    pAVar2 = (ActionStartNarrativeID *)0x0;
  }
  else {
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    pAVar2 = ::operator_new(0x58);
    ActionStartNarrativeID(pAVar2,auStack_60,auStack_58,aDStack_38);
  }
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)local_68);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pAVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionStartNarrativeID::Start() */

void __thiscall ActionStartNarrativeID::Start(ActionStartNarrativeID *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ActionStartNarrativeID,void(ActionStartNarrativeID::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,this + 0x18,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionStartNarrativeID::onNarrationFinished() */

void __thiscall ActionStartNarrativeID::onNarrationFinished(ActionStartNarrativeID *this)

{
  string *psVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    psVar1 = (string *)(this + 0x20);
    PlayerInfo::CompleteNarrationEvent(this_01,psVar1);
    bVar2 = std::operator==(psVar1,"nar_worldmap_plantbox_intro");
    uVar4 = 0x25;
    if (!bVar2) {
      bVar2 = std::operator==(psVar1,"nar_worldmap_plantgj_intro");
      if (!bVar2) goto LAB_0455c484;
      uVar4 = 0x29;
    }
    MessageRouter::Post<int,TutorialEvent>
              ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,uVar4);
  }
LAB_0455c484:
  this[9] = (ActionStartNarrativeID)0x1;
  iVar3 = FUN_0454b228(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x40));
  if (iVar3 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x28));
  }
  WorldMapAction::RestorePrevInput((WorldMapAction *)this);
  return;
}

