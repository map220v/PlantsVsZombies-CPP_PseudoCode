// Class: ActionShowSalesUI


/* ActionShowSalesUI::OnShowSalesUIClosed() */

void __thiscall ActionShowSalesUI::OnShowSalesUIClosed(ActionShowSalesUI *this)

{
  this[9] = (ActionShowSalesUI)0x1;
  *(undefined4 *)(this + 0x14) = 2;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ActionShowSalesUI::~ActionShowSalesUI() */

void __thiscall ActionShowSalesUI::~ActionShowSalesUI(ActionShowSalesUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06858f40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowSalesUI::~ActionShowSalesUI() */

void __thiscall ActionShowSalesUI::~ActionShowSalesUI(ActionShowSalesUI *this)

{
  ~ActionShowSalesUI(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowSalesUI::StaticGetClass() */

long * ActionShowSalesUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowSalesUI",uVar2,StaticNew);
  return sClass;
}


/* ActionShowSalesUI::GetClass() const */

long * ActionShowSalesUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowSalesUI",uVar2,StaticNew);
  return sClass;
}


/* ActionShowSalesUI::ActionShowSalesUI() */

void __thiscall ActionShowSalesUI::ActionShowSalesUI(ActionShowSalesUI *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06858f40;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* ActionShowSalesUI::StaticNew() */

ActionShowSalesUI * ActionShowSalesUI::StaticNew(void)

{
  ActionShowSalesUI *this;
  
  this = ::operator_new(0x20);
  ActionShowSalesUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowSalesUI::CreateIfNeed(bool&) */

void ActionShowSalesUI::CreateIfNeed(bool *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionShowSalesUI *this_01;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar3,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (((cVar1 == '\0') && (*param_1 == false)) &&
     (cVar1 = LawnApp::IsPlatformChannel(gLawnApp), cVar1 != '\0')) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = PlayerInfo::IsSalesPoped(this_00);
    if (cVar1 == '\0') {
      this_01 = ::operator_new(0x20);
      *(undefined8 *)this_01 = 0;
      this_01[8] = (ActionShowSalesUI)0x0;
      this_01[9] = (ActionShowSalesUI)0x0;
      this_01[10] = (ActionShowSalesUI)0x0;
      *(undefined4 *)(this_01 + 0xc) = 0;
      *(undefined4 *)(this_01 + 0x10) = 0;
      *(undefined4 *)(this_01 + 0x14) = 0;
      *(undefined4 *)(this_01 + 0x18) = 0;
      ActionShowSalesUI(this_01);
      goto LAB_0455ba6c;
    }
  }
  this_01 = (ActionShowSalesUI *)0x0;
LAB_0455ba6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowSalesUI::Start() */

void __thiscall ActionShowSalesUI::Start(ActionShowSalesUI *this)

{
  undefined *this_00;
  char cVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gMessageRouter;
  if (cVar1 != '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnShowSalesUIClosed);
    Sexy::Delegate0::Delegate0<ActionShowSalesUI,void(ActionShowSalesUI::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)this_00,Message::ActivePopupUIClosed,aDStack_38);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      PlayerInfo::SetSalesPoped(this_02,true);
      cVar1 = PlayerInfo::IsActiveServerConfigValid(this_02);
      if (cVar1 == '\0') {
        LawnApp::RefreshSalesInfo();
      }
      cVar1 = PlayerInfo::IsSalesOpening(this_02);
      if (cVar1 != '\0') {
        MessageRouter::Post<bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::GotActActivityStates,true);
        goto LAB_0455c804;
      }
    }
  }
  OnShowSalesUIClosed(this);
LAB_0455c804:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

