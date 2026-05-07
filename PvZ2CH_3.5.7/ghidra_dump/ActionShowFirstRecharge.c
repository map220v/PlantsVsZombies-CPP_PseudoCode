// Class: ActionShowFirstRecharge


/* ActionShowFirstRecharge::OnFirstRechargeClosed() */

void __thiscall ActionShowFirstRecharge::OnFirstRechargeClosed(ActionShowFirstRecharge *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[9] = (ActionShowFirstRecharge)0x1;
  return;
}


/* ActionShowFirstRecharge::~ActionShowFirstRecharge() */

void __thiscall ActionShowFirstRecharge::~ActionShowFirstRecharge(ActionShowFirstRecharge *this)

{
  *(undefined ***)this = &PTR_GetClass_068591c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowFirstRecharge::~ActionShowFirstRecharge() */

void __thiscall ActionShowFirstRecharge::~ActionShowFirstRecharge(ActionShowFirstRecharge *this)

{
  ~ActionShowFirstRecharge(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowFirstRecharge::StaticGetClass() */

long * ActionShowFirstRecharge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowFirstRecharge",uVar2,StaticNew);
  return sClass;
}


/* ActionShowFirstRecharge::GetClass() const */

long * ActionShowFirstRecharge::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowFirstRecharge",uVar2,StaticNew);
  return sClass;
}


/* ActionShowFirstRecharge::ActionShowFirstRecharge() */

void __thiscall ActionShowFirstRecharge::ActionShowFirstRecharge(ActionShowFirstRecharge *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068591c0;
  return;
}


/* ActionShowFirstRecharge::StaticNew() */

ActionShowFirstRecharge * ActionShowFirstRecharge::StaticNew(void)

{
  ActionShowFirstRecharge *this;
  
  this = ::operator_new(0x18);
  ActionShowFirstRecharge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowFirstRecharge::Start() */

void __thiscall ActionShowFirstRecharge::Start(ActionShowFirstRecharge *this)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = NetworkHelper::getFirstChargeRewardIndex();
  if (iVar2 != -1) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    this_00 = gMessageRouter;
    if (cVar1 != '\0') {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnFirstRechargeClosed);
      Sexy::Delegate0::Delegate0<ActionShowFirstRecharge,void(ActionShowFirstRecharge::*)()>
                (aDStack_38,aCStack_50);
      MessageRouter::Subscribe((MessageRouter *)this_00,Message::ActivePopupUIClosed,aDStack_38);
      LawnApp::ShowRechargeRewardUI(gLawnApp);
      goto LAB_04557110;
    }
  }
  this[9] = (ActionShowFirstRecharge)0x1;
LAB_04557110:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowFirstRecharge::CreateIfNeed(bool&) */

void ActionShowFirstRecharge::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  ActionShowFirstRecharge *this;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar6 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_10,pLVar6,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      std::string::string(asStack_10,"egypt4");
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar5);
      std::string::~string(asStack_10);
      nop();
      if ((cVar1 != '\0') && (iVar2 = NetworkHelper::getFirstChargeRewardIndex(), iVar2 != -1)) {
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        if (pPVar5 != (PlayerInfo *)0x0) {
          std::string::string(asStack_10,"FirstRecharge");
          cVar1 = PlayerInfo::IsFirstPopToday(pPVar5,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (cVar1 == '\0') goto LAB_0455be78;
        }
        this = ::operator_new(0x18);
        *(undefined8 *)this = 0;
        this[8] = (ActionShowFirstRecharge)0x0;
        this[9] = (ActionShowFirstRecharge)0x0;
        this[10] = (ActionShowFirstRecharge)0x0;
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 0x10) = 0;
        ActionShowFirstRecharge(this);
        goto LAB_0455be7c;
      }
    }
  }
LAB_0455be78:
  this = (ActionShowFirstRecharge *)0x0;
LAB_0455be7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

