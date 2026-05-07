// Class: ActionShowRechargeBundle


/* ActionShowRechargeBundle::OnRechargeBundleShowed() */

void __thiscall ActionShowRechargeBundle::OnRechargeBundleShowed(ActionShowRechargeBundle *this)

{
  this[0x18] = (ActionShowRechargeBundle)0x0;
  return;
}


/* ActionShowRechargeBundle::OnRechargeBundleClosed() */

void __thiscall ActionShowRechargeBundle::OnRechargeBundleClosed(ActionShowRechargeBundle *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[9] = (ActionShowRechargeBundle)0x1;
  return;
}


/* ActionShowRechargeBundle::~ActionShowRechargeBundle() */

void __thiscall ActionShowRechargeBundle::~ActionShowRechargeBundle(ActionShowRechargeBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_06859240;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowRechargeBundle::~ActionShowRechargeBundle() */

void __thiscall ActionShowRechargeBundle::~ActionShowRechargeBundle(ActionShowRechargeBundle *this)

{
  ~ActionShowRechargeBundle(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowRechargeBundle::StaticGetClass() */

long * ActionShowRechargeBundle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowRechargeBundle",uVar2,StaticNew);
  return sClass;
}


/* ActionShowRechargeBundle::GetClass() const */

long * ActionShowRechargeBundle::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowRechargeBundle",uVar2,StaticNew);
  return sClass;
}


/* ActionShowRechargeBundle::ActionShowRechargeBundle() */

void __thiscall ActionShowRechargeBundle::ActionShowRechargeBundle(ActionShowRechargeBundle *this)

{
  undefined4 uVar1;
  
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859240;
  uVar1 = PVZ_EOT();
  this[0x18] = (ActionShowRechargeBundle)0x1;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* ActionShowRechargeBundle::StaticNew() */

ActionShowRechargeBundle * ActionShowRechargeBundle::StaticNew(void)

{
  ActionShowRechargeBundle *this;
  
  this = ::operator_new(0x20);
  ActionShowRechargeBundle(this);
  return this;
}


/* ActionShowRechargeBundle::Update() */

void __thiscall ActionShowRechargeBundle::Update(ActionShowRechargeBundle *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  if ((this[0x18] != (ActionShowRechargeBundle)0x0) &&
     (fVar1 = *(float *)(this + 0x14), fVar2 = (float)PVZ_T(), fVar1 + 5.0 < fVar2)) {
    OnRechargeBundleClosed(this);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x14) = uVar3;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowRechargeBundle::Start() */

void __thiscall ActionShowRechargeBundle::Start(ActionShowRechargeBundle *this)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsNetworkModuleOK();
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    this[9] = (ActionShowRechargeBundle)0x1;
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnRechargeBundleClosed);
    Sexy::Delegate0::Delegate0<ActionShowRechargeBundle,void(ActionShowRechargeBundle::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ActivePopupUIClosed,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnRechargeBundleShowed);
    Sexy::Delegate0::Delegate0<ActionShowRechargeBundle,void(ActionShowRechargeBundle::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RechargeBundleShowed,aDStack_38);
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x14) = uVar3;
    RechargeBundleUI::requestNetwork();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowRechargeBundle::CreateIfNeed(bool&) */

void ActionShowRechargeBundle::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  wchar16 *pwVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  long lVar7;
  ActionShowRechargeBundle *this;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar8 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_90,pLVar8,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      std::string::string(asStack_90,"egypt4");
      pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar6);
      std::string::~string(asStack_90);
      nop();
      if ((cVar1 != '\0') && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
        lVar7 = LawnApp::GetWorldMap(gLawnApp);
        iVar2 = FUN_0454b280(*(undefined4 *)(lVar7 + 0xee4));
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        if (pPVar6 != (PlayerInfo *)0x0) {
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          ActiveItem::~ActiveItem(aAStack_88);
          if ((local_70 != '\0') &&
             ((iVar2 == 0x19 || (cVar1 = PlayerInfo::HasQueueingBundle(pPVar6), cVar1 != '\0')))) {
            pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
            if (pPVar6 != (PlayerInfo *)0x0) {
              std::string::string(asStack_90,"RechargeBundle");
              cVar1 = PlayerInfo::IsFirstPopToday(pPVar6,asStack_90);
              std::string::~string(asStack_90);
              nop();
              if (cVar1 == '\0') goto LAB_045608bc;
            }
            this = ::operator_new(0x20);
            *(undefined8 *)this = 0;
            this[8] = (ActionShowRechargeBundle)0x0;
            this[9] = (ActionShowRechargeBundle)0x0;
            this[10] = (ActionShowRechargeBundle)0x0;
            *(undefined4 *)(this + 0xc) = 0;
            *(undefined4 *)(this + 0x10) = 0;
            this[0x18] = (ActionShowRechargeBundle)0x0;
            *(undefined4 *)(this + 0x14) = 0;
            ActionShowRechargeBundle(this);
            goto LAB_045608c0;
          }
        }
      }
    }
  }
LAB_045608bc:
  this = (ActionShowRechargeBundle *)0x0;
LAB_045608c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

