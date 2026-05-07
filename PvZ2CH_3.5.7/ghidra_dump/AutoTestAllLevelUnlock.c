// Class: AutoTestAllLevelUnlock


/* AutoTestAllLevelUnlock::EnterWorldMapFinish() */

void __thiscall AutoTestAllLevelUnlock::EnterWorldMapFinish(AutoTestAllLevelUnlock *this)

{
  this[0x28] = (AutoTestAllLevelUnlock)0x1;
  return;
}


/* AutoTestAllLevelUnlock::AutoConfirmOver() */

void AutoTestAllLevelUnlock::AutoConfirmOver(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* AutoTestAllLevelUnlock::ShowWorldPrebview() */

void AutoTestAllLevelUnlock::ShowWorldPrebview(void)

{
  long *plVar1;
  
  plVar1 = (long *)LawnApp::GetWorldInfoUI(gLawnApp);
  (**(code **)(*plVar1 + 0x310))(plVar1,1);
  return;
}


/* AutoTestAllLevelUnlock::StaticGetClass() */

long * AutoTestAllLevelUnlock::StaticGetClass(void)

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
  uVar2 = AutoTest::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTestAllLevelUnlock",uVar2,StaticNew);
  return sClass;
}


/* AutoTestAllLevelUnlock::GetClass() const */

long * AutoTestAllLevelUnlock::GetClass(void)

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
  uVar2 = AutoTest::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTestAllLevelUnlock",uVar2,StaticNew);
  return sClass;
}


/* AutoTestAllLevelUnlock::EnterUniverse() */

void __thiscall AutoTestAllLevelUnlock::EnterUniverse(AutoTestAllLevelUnlock *this)

{
  char cVar1;
  long lVar2;
  UniverseMap *this_00;
  size_t in_x2;
  
  cVar1 = FUN_0547419c((string *)(this + 0x20));
  if (cVar1 == '\0') {
    return;
  }
  std::string::append((string *)(this + 0x20),"egypt",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  this_00 = (UniverseMap *)FUN_043dae14(*(undefined8 *)(lVar2 + 0x2b0));
  UniverseMap::TransitionToUniverse(this_00,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevelUnlock::EnterWorldMap() */

void __thiscall AutoTestAllLevelUnlock::EnterWorldMap(AutoTestAllLevelUnlock *this)

{
  string *psVar1;
  char cVar2;
  undefined8 uVar3;
  WorldDataManager *this_00;
  long lVar4;
  long lVar5;
  WorldMapList *this_01;
  ulong uVar6;
  string *psVar7;
  size_t in_x2;
  ulong uVar8;
  string asStack_10 [8];
  long local_8;
  
  psVar7 = (string *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c(psVar7);
  if (cVar2 == '\0') {
    uVar3 = FUN_0547429c(psVar7);
    Sexy::StrFormat("%s1",asStack_10,uVar3);
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar4 = WorldDataManager::FindEventByLevelName(this_00,asStack_10);
    lVar5 = LawnApp::GetWorldMap(gLawnApp);
    if (((lVar5 != 0) && (lVar5 = FUN_043dae14(*(undefined8 *)(lVar5 + 0x2b0)), lVar5 != 0)) &&
       (lVar4 != 0)) {
      psVar1 = (string *)(this + 0x18);
      cVar2 = FUN_0547419c(psVar7);
      if (cVar2 == '\0') {
        thunk_FUN_05475e00(psVar1,psVar7);
        std::string::append(psVar7,"",in_x2);
      }
      this_01 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
      uVar8 = (ulong)*(int *)(this + 0x14);
      uVar3 = *(undefined8 *)(this_01 + 8);
      uVar6 = FUN_043dae2c(uVar3,*(undefined8 *)(this_01 + 0x10));
      if (uVar8 < uVar6) {
        do {
          psVar7 = (string *)FUN_043dae4c(uVar3,uVar8);
          cVar2 = WorldMapList::IsWorldEnabled(this_01,psVar7);
          if (cVar2 != '\0') {
            cVar2 = std::operator==(psVar7,psVar1);
            if (cVar2 != '\0') break;
            *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
          }
          uVar3 = *(undefined8 *)(this_01 + 8);
          uVar8 = uVar8 + 1;
          uVar6 = FUN_043dae2c(uVar3,*(undefined8 *)(this_01 + 0x10));
        } while (uVar8 < uVar6);
      }
      this[0x28] = (AutoTestAllLevelUnlock)0x0;
      LawnApp::ShowWorldPreview(gLawnApp,psVar1);
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevelUnlock::updateState(bool) */

void __thiscall AutoTestAllLevelUnlock::updateState(AutoTestAllLevelUnlock *this,bool param_1)

{
  undefined *puVar1;
  long lVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    PVZCheats::CheatSkipAllTutorials();
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,EnterWorldMap);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UniverseMapReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,EnterWorldMapFinish);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestEnterWorldMap,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,UpdateUnlockState);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::AutoTestUpdateLevelUnlockState,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowWorldPrebview);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestShowWorldPreview,aDStack_38);
    lVar2 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar2 != 0) && (lVar2 = FUN_043dae10(*(undefined8 *)(lVar2 + 0x2f0)), lVar2 != 0)) {
      EnterUniverse(this);
    }
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,EnterWorldMap);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::UniverseMapReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,EnterWorldMapFinish);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestEnterWorldMap,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,UpdateUnlockState);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestUpdateLevelUnlockState,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowWorldPrebview);
    Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestShowWorldPreview,aDStack_38)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestAllLevelUnlock::AutoTestAllLevelUnlock() */

void __thiscall AutoTestAllLevelUnlock::AutoTestAllLevelUnlock(AutoTestAllLevelUnlock *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  AutoTest::AutoTest((AutoTest *)this);
  *(undefined ***)this = &PTR_GetClass_06847380;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = uVar2;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  this[0x28] = (AutoTestAllLevelUnlock)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ChangeWorldMap);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::changeAutoTestStartUnlockLevel,&local_40);
  return;
}


/* AutoTestAllLevelUnlock::StaticNew() */

AutoTestAllLevelUnlock * AutoTestAllLevelUnlock::StaticNew(void)

{
  AutoTestAllLevelUnlock *this;
  
  this = ::operator_new(0x30);
  AutoTestAllLevelUnlock(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevelUnlock::ChangeWorldMap(std::string const&) */

void __thiscall AutoTestAllLevelUnlock::ChangeWorldMap(AutoTestAllLevelUnlock *this,string *param_1)

{
  long lVar1;
  UniverseMap *this_00;
  string *psVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  this_00 = (UniverseMap *)FUN_043dae14(*(undefined8 *)(lVar1 + 0x2b0));
  UniverseMap::TransitionToUniverse(this_00,false);
  thunk_FUN_05475e00(this + 0x20,param_1);
  psVar2 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoTestUnlockLevel");
  CheatManager::SetToggleValue(psVar2,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevelUnlock::UpdateUnlockState() */

void __thiscall AutoTestAllLevelUnlock::UpdateUnlockState(AutoTestAllLevelUnlock *this)

{
  AutoTestAllLevelUnlock *pAVar1;
  int iVar2;
  LawnApp *this_00;
  char cVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  undefined8 uVar6;
  WorldDataManager *pWVar7;
  long lVar8;
  WorldMap *pWVar9;
  WorldMapList *this_01;
  ulong uVar10;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar11;
  string *psVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  if (pPVar5 != (PlayerInfo *)0x0) {
    iVar2 = *(int *)(this + 0x10);
    pAVar1 = this + 0x18;
    *(uint *)(this + 0x10) = iVar2 + 1U;
    uVar6 = FUN_0547429c(pAVar1);
    Sexy::StrFormat("%s%d",asStack_68,uVar6,(ulong)(iVar2 + 1U));
    uVar6 = FUN_0547429c(pAVar1);
    Sexy::StrFormat("%s_level_%d",asStack_60,uVar6,(ulong)*(uint *)(this + 0x10));
    pWVar7 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar8 = WorldDataManager::FindEventByLevelName(pWVar7,asStack_68);
    while (lVar8 != 0) {
      cVar3 = PlayerInfo::GetLevelCompleted(pPVar5,asStack_68);
      if (cVar3 == '\0') goto LAB_043de244;
      iVar2 = *(int *)(this + 0x10);
      *(uint *)(this + 0x10) = iVar2 + 1U;
      uVar6 = FUN_0547429c(pAVar1);
      Sexy::StrFormat("%s%d",asStack_50,uVar6,(ulong)(iVar2 + 1U));
      FUN_05474278(asStack_68,asStack_50);
      std::string::~string(asStack_50);
      pWVar7 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar8 = WorldDataManager::FindEventByLevelName(pWVar7,asStack_68);
    }
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    this_01 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
    uVar13 = (long)*(int *)(this + 0x14);
    do {
      uVar6 = *(undefined8 *)(this_01 + 8);
      uVar10 = FUN_043dae2c(uVar6,*(undefined8 *)(this_01 + 0x10));
      this_00 = gLawnApp;
      if (uVar10 <= uVar13) {
        FUN_05478178(asStack_50,L"PASS -- AutoTest Unlock Level Over!",asStack_58);
        this_02 = (PVZ2UIDialog *)LawnApp::ShowPVZ2DialogOneLine(this_00,(wstring *)asStack_50);
        FUN_05476c50(asStack_50);
        nop();
        FUN_05478178(asStack_58,L"[BUTTON_OK]",auStack_70);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,AutoConfirmOver);
        Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
                  (aDStack_38,asStack_50);
        PVZ2UIDialog::AddButton(this_02,asStack_58,aDStack_38,1);
        FUN_05476c50(asStack_58);
        nop();
        pPVar11 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface
                            (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
        Sexy::Color::Color((Color *)asStack_50,1);
        PVZ2UIDialog::SetHeaderFont(this_02,pPVar11,(Color *)asStack_50);
        PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
        psVar12 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        std::string::string(asStack_50,"AutoTestUnlockLevel");
        CheatManager::SetToggleValue(psVar12,SUB81(asStack_50,0));
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_60);
        std::string::~string(asStack_68);
        goto LAB_043de318;
      }
      psVar12 = (string *)FUN_043dae4c(uVar6,uVar13);
      cVar3 = WorldMapList::IsWorldEnabled(this_01,psVar12);
      uVar13 = uVar13 + 1;
    } while (cVar3 == '\0');
    ChangeWorldMap(this,psVar12);
    *(undefined4 *)(this + 0x10) = 1;
    uVar6 = FUN_0547429c(psVar12);
    Sexy::StrFormat("%s%d",asStack_50,uVar6,1);
    FUN_05474278(asStack_68,asStack_50);
    std::string::~string(asStack_50);
    uVar6 = FUN_0547429c(psVar12);
    Sexy::StrFormat("%s_level_%d",asStack_50,uVar6,(ulong)*(uint *)(this + 0x10));
    FUN_05474278(asStack_60,asStack_50);
    std::string::~string(asStack_50);
LAB_043de244:
    uVar6 = FUN_0547429c(asStack_68);
    Sexy::StrFormat("[AutoTest-- UnlockLevel: %s Level]",asStack_58,uVar6);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    PlayerInfo::SetLevelCompleted(pPVar5,asStack_68,true);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    ProfileUtils::CompleteToEvent(asStack_60,false,false,pPVar5);
    pWVar9 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::refreshMapPathGroups(pWVar9);
    pWVar9 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::CenterOnMapEvent(pWVar9,asStack_60,false);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
  }
LAB_043de318:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AutoTestAllLevelUnlock::~AutoTestAllLevelUnlock() */

void __thiscall AutoTestAllLevelUnlock::~AutoTestAllLevelUnlock(AutoTestAllLevelUnlock *this)

{
  *(undefined ***)this = &PTR_GetClass_06847380;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  AutoTest::~AutoTest((AutoTest *)this);
  return;
}


/* AutoTestAllLevelUnlock::~AutoTestAllLevelUnlock() */

void __thiscall AutoTestAllLevelUnlock::~AutoTestAllLevelUnlock(AutoTestAllLevelUnlock *this)

{
  ~AutoTestAllLevelUnlock(this);
  AK::FreeHook(this);
  return;
}

