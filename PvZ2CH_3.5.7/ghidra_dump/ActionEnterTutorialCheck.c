// Class: ActionEnterTutorialCheck


/* ActionEnterTutorialCheck::~ActionEnterTutorialCheck() */

void __thiscall ActionEnterTutorialCheck::~ActionEnterTutorialCheck(ActionEnterTutorialCheck *this)

{
  *(undefined ***)this = &PTR_GetClass_068588c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionEnterTutorialCheck::~ActionEnterTutorialCheck() */

void __thiscall ActionEnterTutorialCheck::~ActionEnterTutorialCheck(ActionEnterTutorialCheck *this)

{
  ~ActionEnterTutorialCheck(this);
  AK::FreeHook(this);
  return;
}


/* ActionEnterTutorialCheck::StaticGetClass() */

long * ActionEnterTutorialCheck::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionEnterTutorialCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionEnterTutorialCheck::GetClass() const */

long * ActionEnterTutorialCheck::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionEnterTutorialCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionEnterTutorialCheck::ActionEnterTutorialCheck() */

void __thiscall ActionEnterTutorialCheck::ActionEnterTutorialCheck(ActionEnterTutorialCheck *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068588c0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* ActionEnterTutorialCheck::StaticNew() */

ActionEnterTutorialCheck * ActionEnterTutorialCheck::StaticNew(void)

{
  ActionEnterTutorialCheck *this;
  
  this = ::operator_new(0x18);
  ActionEnterTutorialCheck(this);
  return this;
}


/* ActionEnterTutorialCheck::Update() */

void __thiscall ActionEnterTutorialCheck::Update(ActionEnterTutorialCheck *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x14) < fVar1) {
    (**(code **)(*(long *)this + 0x58))();
  }
  return;
}


/* ActionEnterTutorialCheck::CreateIfNeed(bool&) */

ActionEnterTutorialCheck * ActionEnterTutorialCheck::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  ActionEnterTutorialCheck *this_00;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this);
    if ((lVar2 != 0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      this_00 = ::operator_new(0x18);
      this_00[8] = (ActionEnterTutorialCheck)0x0;
      this_00[9] = (ActionEnterTutorialCheck)0x0;
      this_00[10] = (ActionEnterTutorialCheck)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined4 *)(this_00 + 0x14) = 0;
      ActionEnterTutorialCheck(this_00);
      return this_00;
    }
  }
  return (ActionEnterTutorialCheck *)0x0;
}


/* ActionEnterTutorialCheck::OnNotifyTutorialCheck(bool) */

void __thiscall
ActionEnterTutorialCheck::OnNotifyTutorialCheck(ActionEnterTutorialCheck *this,bool param_1)

{
  TutorialMgr *this_00;
  
  if (!param_1) {
    this_00 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
    TutorialMgr::CompleteAllTutorials(this_00);
  }
  (**(code **)(*(long *)this + 0x58))(this);
  return;
}


/* ActionEnterTutorialCheck::Start() */

void __thiscall ActionEnterTutorialCheck::Start(ActionEnterTutorialCheck *this)

{
  undefined *puVar1;
  TutorialMgr *this_00;
  float fVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyTutorialCheck);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ActionEnterTutorialCheck,void(ActionEnterTutorialCheck::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialCheck,&local_40);
  this_00 = (TutorialMgr *)Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::CheckTutorial(this_00);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x14) = fVar2 + 8.0;
  return;
}

