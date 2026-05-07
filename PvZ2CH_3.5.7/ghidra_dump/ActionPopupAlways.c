// Class: ActionPopupAlways


/* ActionPopupAlways::onActivePopupUIClosed() */

void __thiscall ActionPopupAlways::onActivePopupUIClosed(ActionPopupAlways *this)

{
  this[9] = (ActionPopupAlways)0x1;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ActionPopupAlways::~ActionPopupAlways() */

void __thiscall ActionPopupAlways::~ActionPopupAlways(ActionPopupAlways *this)

{
  *(undefined ***)this = &PTR_GetClass_06858cc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionPopupAlways::~ActionPopupAlways() */

void __thiscall ActionPopupAlways::~ActionPopupAlways(ActionPopupAlways *this)

{
  ~ActionPopupAlways(this);
  AK::FreeHook(this);
  return;
}


/* ActionPopupAlways::StaticGetClass() */

long * ActionPopupAlways::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionPopupAlways",uVar2,StaticNew);
  return sClass;
}


/* ActionPopupAlways::GetClass() const */

long * ActionPopupAlways::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionPopupAlways",uVar2,StaticNew);
  return sClass;
}


/* ActionPopupAlways::ActionPopupAlways() */

void __thiscall ActionPopupAlways::ActionPopupAlways(ActionPopupAlways *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858cc0;
  return;
}


/* ActionPopupAlways::StaticNew() */

ActionPopupAlways * ActionPopupAlways::StaticNew(void)

{
  ActionPopupAlways *this;
  
  this = ::operator_new(0x18);
  ActionPopupAlways(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionPopupAlways::checkShowActiveEntrance() */

void __thiscall ActionPopupAlways::checkShowActiveEntrance(ActionPopupAlways *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  PlayerInfo *pPVar4;
  RebateDateMgr *this_00;
  int *piVar5;
  ProfileMgr *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (PlayerInfo *)LawnApp::GetActivityConfig();
  this_00 = (RebateDateMgr *)RebateDateMgr::GetInstance();
  cVar2 = RebateDateMgr::IsValidTime(this_00);
  if (cVar2 == '\0') {
    cVar2 = '\0';
    if (pPVar4 != (PlayerInfo *)0x0) {
      piVar5 = (int *)PlayerInfo::GetNewTotalRechargeRewardStatus(pPVar4);
      iVar3 = ActivityConfig::GetCurrentActivityTimeStatus
                        ((ActivityConfig *)pPVar4,*piVar5,piVar5[1]);
      if (iVar3 == 1) {
        this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
        iVar3 = PlayerInfo::GetGoldenEggHammers(pPVar4);
        if ((iVar3 == 0) && (iVar3 = PlayerInfo::GetGoldenEggHammersLeft(pPVar4), iVar3 == 0)) {
          cVar2 = '\0';
        }
        else {
          puVar1 = gMessageRouter;
          cVar2 = '\x01';
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onActivePopupUIClosed);
          Sexy::Delegate0::Delegate0<ActionPopupAlways,void(ActionPopupAlways::*)()>
                    (aDStack_38,aCStack_50);
          MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ActivePopupUIClosed,aDStack_38);
          LawnApp::ShowActiveEntranceUI(gLawnApp,2);
        }
      }
    }
  }
  else {
    RebateDateMgr::GetInstance();
    cVar2 = RebateDateMgr::IsAnyRewardRemain();
    puVar1 = gMessageRouter;
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onActivePopupUIClosed);
      Sexy::Delegate0::Delegate0<ActionPopupAlways,void(ActionPopupAlways::*)()>
                (aDStack_38,aCStack_50);
      MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ActivePopupUIClosed,aDStack_38);
      LawnApp::ShowActiveEntranceUI(gLawnApp,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ActionPopupAlways::Start() */

void __thiscall ActionPopupAlways::Start(ActionPopupAlways *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  undefined4 uVar6;
  
  lVar4 = gLawnApp;
  if (*(char *)(gLawnApp + 0x298c) == '\0') {
    if (*(char *)(gLawnApp + 0x298d) != '\0') {
      piVar1 = (int *)(gLawnApp + 0x2984);
      iVar2 = *(int *)(gLawnApp + 0x2988);
      *(undefined1 *)(gLawnApp + 0x298d) = 0;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *piVar1 / iVar2;
      }
      if (*piVar1 == iVar3 * iVar2) {
        uVar6 = RandRangeInt(2,3);
        *(undefined4 *)(lVar4 + 0x2988) = uVar6;
        cVar5 = checkShowActiveEntrance(this);
        if (cVar5 != '\0') {
          return;
        }
      }
    }
  }
  else {
    *(undefined1 *)(gLawnApp + 0x298c) = 0;
    cVar5 = checkShowActiveEntrance(this);
    if (cVar5 != '\0') {
      return;
    }
  }
  this[9] = (ActionPopupAlways)0x1;
  return;
}

