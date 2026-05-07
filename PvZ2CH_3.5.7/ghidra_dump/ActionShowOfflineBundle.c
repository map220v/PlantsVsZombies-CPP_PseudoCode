// Class: ActionShowOfflineBundle


/* ActionShowOfflineBundle::OnOfflineBundleClosed() */

void __thiscall ActionShowOfflineBundle::OnOfflineBundleClosed(ActionShowOfflineBundle *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[9] = (ActionShowOfflineBundle)0x1;
  return;
}


/* ActionShowOfflineBundle::~ActionShowOfflineBundle() */

void __thiscall ActionShowOfflineBundle::~ActionShowOfflineBundle(ActionShowOfflineBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_068592c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowOfflineBundle::~ActionShowOfflineBundle() */

void __thiscall ActionShowOfflineBundle::~ActionShowOfflineBundle(ActionShowOfflineBundle *this)

{
  ~ActionShowOfflineBundle(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowOfflineBundle::StaticGetClass() */

long * ActionShowOfflineBundle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowOfflineBundle",uVar2,StaticNew);
  return sClass;
}


/* ActionShowOfflineBundle::GetClass() const */

long * ActionShowOfflineBundle::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowOfflineBundle",uVar2,StaticNew);
  return sClass;
}


/* ActionShowOfflineBundle::ActionShowOfflineBundle() */

void __thiscall ActionShowOfflineBundle::ActionShowOfflineBundle(ActionShowOfflineBundle *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068592c0;
  return;
}


/* ActionShowOfflineBundle::StaticNew() */

ActionShowOfflineBundle * ActionShowOfflineBundle::StaticNew(void)

{
  ActionShowOfflineBundle *this;
  
  this = ::operator_new(0x18);
  ActionShowOfflineBundle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowOfflineBundle::Start() */

void __thiscall ActionShowOfflineBundle::Start(ActionShowOfflineBundle *this)

{
  undefined *this_00;
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gMessageRouter;
  if (cVar1 == '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnOfflineBundleClosed);
    Sexy::Delegate0::Delegate0<ActionShowOfflineBundle,void(ActionShowOfflineBundle::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)this_00,Message::ActivePopupUIClosed,aDStack_38);
    LawnApp::ShowLostNetActivityUI(gLawnApp);
  }
  else {
    this[9] = (ActionShowOfflineBundle)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowOfflineBundle::CreateIfNeed(bool&) */

void ActionShowOfflineBundle::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  long lVar6;
  LostNetActivityConfig *this;
  ActionShowOfflineBundle *this_00;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = aLStack_18;
    std::string::string(asStack_10,"PopUpDisabled");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar7,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 == '\0') && (*param_1 == false)) {
      std::string::string(asStack_10,"egypt4");
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar5);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        lVar6 = ProfileMgr::GetCurrentProfile(pPVar4);
        if (lVar6 != 0) {
          lVar6 = LawnApp::GetWorldMap(gLawnApp);
          iVar2 = FUN_0454b280(*(undefined4 *)(lVar6 + 0xee4));
          if ((iVar2 == 0x19) && (cVar1 = LawnApp::IsNetworkModuleOK(), cVar1 == '\0')) {
            this = (LostNetActivityConfig *)LawnApp::GetLostNetActivityConfig(gLawnApp);
            iVar2 = LostNetActivityConfig::GetCurrentBonus(this);
            if (0 < iVar2) {
              this_00 = ::operator_new(0x18);
              *(undefined8 *)this_00 = 0;
              this_00[8] = (ActionShowOfflineBundle)0x0;
              this_00[9] = (ActionShowOfflineBundle)0x0;
              this_00[10] = (ActionShowOfflineBundle)0x0;
              *(undefined4 *)(this_00 + 0xc) = 0;
              *(undefined4 *)(this_00 + 0x10) = 0;
              ActionShowOfflineBundle(this_00);
              goto LAB_0455bffc;
            }
          }
        }
      }
    }
  }
  this_00 = (ActionShowOfflineBundle *)0x0;
LAB_0455bffc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

