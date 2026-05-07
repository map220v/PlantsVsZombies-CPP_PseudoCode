// Class: ActionRecallOffer


/* ActionRecallOffer::~ActionRecallOffer() */

void __thiscall ActionRecallOffer::~ActionRecallOffer(ActionRecallOffer *this)

{
  *(undefined ***)this = &PTR_GetClass_06859e40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionRecallOffer::~ActionRecallOffer() */

void __thiscall ActionRecallOffer::~ActionRecallOffer(ActionRecallOffer *this)

{
  ~ActionRecallOffer(this);
  AK::FreeHook(this);
  return;
}


/* ActionRecallOffer::End() */

void ActionRecallOffer::End(void)

{
  LawnApp::KillRecallOfferUI(gLawnApp);
  return;
}


/* ActionRecallOffer::Update() */

void __thiscall ActionRecallOffer::Update(ActionRecallOffer *this)

{
  char cVar1;
  
  cVar1 = RecallOfferUI::isActive();
  if (cVar1 == '\0') {
    this[9] = (ActionRecallOffer)0x1;
  }
  return;
}


/* ActionRecallOffer::StaticGetClass() */

long * ActionRecallOffer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionRecallOffer",uVar2,StaticNew);
  return sClass;
}


/* ActionRecallOffer::GetClass() const */

long * ActionRecallOffer::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionRecallOffer",uVar2,StaticNew);
  return sClass;
}


/* ActionRecallOffer::ActionRecallOffer() */

void __thiscall ActionRecallOffer::ActionRecallOffer(ActionRecallOffer *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859e40;
  return;
}


/* ActionRecallOffer::StaticNew() */

ActionRecallOffer * ActionRecallOffer::StaticNew(void)

{
  ActionRecallOffer *this;
  
  this = ::operator_new(0x18);
  ActionRecallOffer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRecallOffer::Start() */

void __thiscall ActionRecallOffer::Start(ActionRecallOffer *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      ActiveItem::~ActiveItem(aAStack_88);
      RecallOfferUI::RequestNetwork();
      goto LAB_0455f270;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionRecallOffer)0x1;
LAB_0455f270:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRecallOffer::CreateIfNeed(bool&) */

void ActionRecallOffer::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  ActionRecallOffer *this_00;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar5 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_90,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      if (local_70 != '\0') {
        std::string::string(asStack_90,"egypt3");
        this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
        cVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar4);
        std::string::~string(asStack_90);
        nop();
        if ((cVar1 != '\0') && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
          this_00 = ::operator_new(0x18);
          *(undefined8 *)this_00 = 0;
          this_00[8] = (ActionRecallOffer)0x0;
          this_00[9] = (ActionRecallOffer)0x0;
          this_00[10] = (ActionRecallOffer)0x0;
          *(undefined4 *)(this_00 + 0xc) = 0;
          *(undefined4 *)(this_00 + 0x10) = 0;
          ActionRecallOffer(this_00);
          goto LAB_04560d1c;
        }
      }
    }
  }
  this_00 = (ActionRecallOffer *)0x0;
LAB_04560d1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

