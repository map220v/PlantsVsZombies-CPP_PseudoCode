// Class: LevelEditorWaveEvent


/* LevelEditorWaveEvent::TouchBegan(Sexy::Touch const&) */

void __thiscall LevelEditorWaveEvent::TouchBegan(LevelEditorWaveEvent *this,Touch *param_1)

{
  *(int *)(this + 0xd8) = (int)*(undefined8 *)param_1;
  return;
}


/* LevelEditorWaveEvent::~LevelEditorWaveEvent() */

void __thiscall LevelEditorWaveEvent::~LevelEditorWaveEvent(LevelEditorWaveEvent *this)

{
  *(undefined ***)this = &PTR_GetClass_06967f30;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEvent::~LevelEditorWaveEvent() */

void __thiscall LevelEditorWaveEvent::~LevelEditorWaveEvent(LevelEditorWaveEvent *this)

{
  ~LevelEditorWaveEvent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEvent::OnDragEventFinished() */

void __thiscall LevelEditorWaveEvent::OnDragEventFinished(LevelEditorWaveEvent *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == 4) && (*(long *)(this + 0xe0) != 0)) {
    FUN_04b536bc(*(long *)(this + 0xe0) + 0xd8);
    uVar4 = *(undefined8 *)(this + 0xe0);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_11]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(0x118);
    iVar2 = FUN_04b54f08(0x8c);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,-iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveEvent::Reload() */

void __thiscall LevelEditorWaveEvent::Reload(LevelEditorWaveEvent *this)

{
  char cVar1;
  int iVar2;
  CustomLevelMgr *pCVar3;
  
  pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  cVar1 = CustomLevelMgr::IsWaveEventSandStormVaild(pCVar3,*(int *)(this + 0xd4));
  if (cVar1 == '\0') {
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    cVar1 = CustomLevelMgr::IsWaveEventSpiderStormValid(pCVar3,*(int *)(this + 0xd4));
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0xdc) = 0x17;
      return;
    }
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    cVar1 = CustomLevelMgr::IsWaveEventRaidingPartyValid(pCVar3,*(int *)(this + 0xd4));
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0xdc) = 0x18;
      return;
    }
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    cVar1 = CustomLevelMgr::IsWaveEventParachuteRainValid(pCVar3,*(int *)(this + 0xd4));
    if (cVar1 == '\0') {
      pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      cVar1 = CustomLevelMgr::IsWaveEventBlackHoleValid(pCVar3,*(int *)(this + 0xd4));
      if (cVar1 == '\0') {
        pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        cVar1 = CustomLevelMgr::IsWaveEventPortalValid(pCVar3,*(int *)(this + 0xd4));
        if (cVar1 == '\0') {
          pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
          cVar1 = CustomLevelMgr::IsWaveEventDinoValid(pCVar3,*(int *)(this + 0xd4));
          if (cVar1 == '\0') {
            pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
            cVar1 = CustomLevelMgr::IsWaveEventSummonZombieValid(pCVar3,*(int *)(this + 0xd4));
            if (cVar1 != '\0') {
              *(undefined4 *)(this + 0xdc) = 0x1e;
            }
          }
          else {
            *(undefined4 *)(this + 0xdc) = 0x1a;
          }
        }
        else {
          *(undefined4 *)(this + 0xdc) = 0x19;
        }
      }
      else {
        *(undefined4 *)(this + 0xdc) = 0x1d;
      }
    }
    else {
      *(undefined4 *)(this + 0xdc) = 0x1c;
    }
  }
  else {
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    iVar2 = CustomLevelMgr::GetSandStormType(pCVar3,*(int *)(this + 0xd4));
    if (iVar2 == 1) {
      *(undefined4 *)(this + 0xdc) = 0x1b;
      return;
    }
    *(undefined4 *)(this + 0xdc) = 0x16;
  }
  return;
}


/* LevelEditorWaveEvent::Init(int) */

void __thiscall LevelEditorWaveEvent::Init(LevelEditorWaveEvent *this,int param_1)

{
  *(int *)(this + 0xd4) = param_1;
  Reload(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEvent::SetCurrentEvent(int) */

void __thiscall LevelEditorWaveEvent::SetCurrentEvent(LevelEditorWaveEvent *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xdc) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b534f4(*(undefined4 *)(lVar3 + 0x40));
  if (iVar1 == 0x3c) {
    LawnApp::KillGameMaskUI(gLawnApp);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_14]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(this,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(300);
    uVar2 = FUN_04b54f08(0xffffff38);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEvent::LevelEditorWaveEvent() */

void __thiscall LevelEditorWaveEvent::LevelEditorWaveEvent(LevelEditorWaveEvent *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06967f30;
  *(undefined4 *)(this + 0xdc) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDragEventFinished);
  Sexy::Delegate0::Delegate0<LevelEditorWaveEvent,void(LevelEditorWaveEvent::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)this_00,Message::CustomLevelTutorialFinishDragWaveEvent,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEvent::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorWaveEvent::TouchEnded(LevelEditorWaveEvent *this,Touch *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  LevelEditorMultifunctionAssembly *this_00;
  LevelEditorWaveEventSelect *this_01;
  undefined8 uVar5;
  int local_48;
  int local_44;
  string asStack_40 [8];
  Insets aIStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd8) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xdc) == 0) {
      this_01 = ::operator_new(0x110);
      LevelEditorWaveEventSelect::LevelEditorWaveEventSelect(this_01);
      lVar1 = gLawnApp;
      iVar3 = FUN_04b54f08(500);
      iVar2 = FUN_04b54f08(0x17c);
      uVar4 = FUN_04b54f08(0x15e);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,(*(int *)(lVar1 + 0xd4) - iVar3) / 2,(*(int *)(lVar1 + 0xd8) - iVar2) / 2,
                 iVar3,uVar4);
      LevelEditorWaveEventSelect::Init(this_01);
      uVar5 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b54eac(afStack_28,this,uVar5);
      LevelEditorWaveEventSelect::SetSelectEvent(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      LevelEditorWaveEventSelect::TriggerTutorial(this_01);
    }
    else {
      this_00 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar3 = local_48 + *(int *)(this + 0x50);
      iVar2 = FUN_04b54f08(0x28);
      Sexy::Insets::Insets(aIStack_38,iVar3 + iVar2 / 2,local_44 - iVar2 / 2,iVar2,iVar2);
      FUN_04b54c84(afStack_28,this_00,this);
      std::string::string(asStack_40,"set");
      LevelEditorMultifunctionAssembly::AttachButton(this_00,1,aIStack_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      iVar3 = *(int *)(this + 0x50);
      iVar2 = FUN_04b54f08(0x28);
      Sexy::Insets::Insets
                (aIStack_38,local_48 + iVar3 + iVar2 / 2,
                 (local_44 + *(int *)(this + 0x54)) - iVar2 / 2,iVar2,iVar2);
      FUN_04b54ce0(afStack_28,this_00,this);
      std::string::string(asStack_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton(this_00,2,aIStack_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
      LevelEditorMultifunctionAssembly::TriggerTutorial(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEvent::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWaveEvent::Draw(LevelEditorWaveEvent *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86198);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  iVar1 = *(int *)(this + 0xdc);
  if (iVar1 == 0x16) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86660;
  }
  else if (iVar1 == 0x17) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b862c0;
  }
  else if (iVar1 == 0x18) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b866b0;
  }
  else if (iVar1 == 0x19) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86310;
  }
  else if (iVar1 == 0x1a) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b861c0;
  }
  else if (iVar1 == 0x1b) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86218;
  }
  else if (iVar1 == 0x1c) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85fe8;
  }
  else if (iVar1 == 0x1d) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b863b8;
  }
  else {
    if (iVar1 != 0x1e) goto LAB_04b5f120;
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b860c0;
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  DrawAdaptiveImage(param_1,aIStack_18,uVar2);
LAB_04b5f120:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEvent::SettingCurrentEvent() */

void __thiscall LevelEditorWaveEvent::SettingCurrentEvent(LevelEditorWaveEvent *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  LevelEditorWaveEventSummonZombie *this_00;
  long *plVar5;
  LevelEditorZombieSelectList *pLVar6;
  LevelEditorWaveEventBlackHole *this_01;
  LevelEditorWaveEventStorm *this_02;
  ProfileMgr *this_03;
  long lVar7;
  LevelEditorWaveEventSpiderRain *this_04;
  LevelEditorWaveEventRaidingParty *this_05;
  LevelEditorWaveEventPortal *this_06;
  LevelEditorWaveEventDinoStrike *this_07;
  CustomLevelMgr *pCVar8;
  LevelEditorWaveEventParachuteRain *this_08;
  undefined1 auStack_10 [4];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0xdc)) {
  case 0x16:
    this_02 = ::operator_new(0x118);
    LevelEditorWaveEventStorm::LevelEditorWaveEventStorm(this_02);
    iVar1 = FUN_04b54f08(0x168);
    uVar2 = FUN_04b54f08(0xaa);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,iVar1);
    pCVar8 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSandStormType(pCVar8,*(int *)(this + 0xd4),0);
    LevelEditorWaveEventStorm::Init(this_02,*(int *)(this + 0xd4));
    plVar5 = (long *)LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_02,true);
    LevelEditorWaveEventStorm::TriggerTutorial(this_02);
    pLVar6 = ::operator_new(0x120);
    LevelEditorZombieSelectList::LevelEditorZombieSelectList(pLVar6);
    iVar1 = FUN_04b54f08(0x2ee);
    uVar2 = FUN_04b54f08(0x19);
    uVar3 = FUN_04b54f08(100);
    (**(code **)(*(long *)pLVar6 + 0x198))
              (pLVar6,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,uVar3);
    (**(code **)(*(long *)pLVar6 + 0x318))(pLVar6);
    (**(code **)(*plVar5 + 0x60))(plVar5,pLVar6);
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(this_03);
    iVar1 = FUN_04b534f4(*(undefined4 *)(lVar7 + 0x40));
    if (iVar1 == 0x3c) {
      *(long **)(this + 0xe0) = plVar5;
    }
    break;
  case 0x17:
    this_04 = ::operator_new(400);
    LevelEditorWaveEventSpiderRain::LevelEditorWaveEventSpiderRain(this_04);
    (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
    iVar1 = FUN_04b54f08(0x168);
    iVar4 = FUN_04b54f08(0xa0);
    uVar2 = FUN_04b54f08(0xd2);
    (**(code **)(*(long *)this_04 + 0x198))
              (this_04,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,local_c - iVar4,iVar1,uVar2);
    LevelEditorWaveEventSpiderRain::Init(this_04,*(int *)(this + 0xd4));
    LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_04,true);
    break;
  case 0x18:
    this_05 = ::operator_new(0x128);
    LevelEditorWaveEventRaidingParty::LevelEditorWaveEventRaidingParty(this_05);
    (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
    iVar1 = FUN_04b54f08(0x104);
    iVar4 = FUN_04b54f08(0xa0);
    uVar2 = FUN_04b54f08(0xd2);
    (**(code **)(*(long *)this_05 + 0x198))
              (this_05,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,local_c - iVar4,iVar1,uVar2);
    LevelEditorWaveEventRaidingParty::Init(this_05,*(int *)(this + 0xd4));
    LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_05,true);
    break;
  case 0x19:
    this_06 = ::operator_new(0x230);
    LevelEditorWaveEventPortal::LevelEditorWaveEventPortal(this_06);
    (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
    iVar1 = FUN_04b54f08(0x140);
    iVar4 = FUN_04b54f08(0xd2);
    uVar2 = FUN_04b54f08(0x104);
    (**(code **)(*(long *)this_06 + 0x198))
              (this_06,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,local_c - iVar4,iVar1,uVar2);
    LevelEditorWaveEventPortal::Init(this_06,*(int *)(this + 0xd4));
    LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_06,true);
    break;
  case 0x1a:
    this_07 = ::operator_new(400);
    LevelEditorWaveEventDinoStrike::LevelEditorWaveEventDinoStrike(this_07);
    (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
    iVar1 = FUN_04b54f08(0x104);
    iVar4 = FUN_04b54f08(0xa0);
    uVar2 = FUN_04b54f08(0xd2);
    (**(code **)(*(long *)this_07 + 0x198))
              (this_07,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,local_c - iVar4,iVar1,uVar2);
    LevelEditorWaveEventDinoStrike::Init(this_07,*(int *)(this + 0xd4));
    LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_07,true);
    break;
  case 0x1b:
    this_00 = ::operator_new(0x118);
    LevelEditorWaveEventStorm::LevelEditorWaveEventStorm((LevelEditorWaveEventStorm *)this_00);
    iVar1 = FUN_04b54f08(0x168);
    uVar2 = FUN_04b54f08(0xaa);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,iVar1);
    pCVar8 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSandStormType(pCVar8,*(int *)(this + 0xd4),1);
    LevelEditorWaveEventStorm::Init((LevelEditorWaveEventStorm *)this_00,*(int *)(this + 0xd4));
    goto LAB_04b64a28;
  case 0x1c:
    this_08 = ::operator_new(0x128);
    LevelEditorWaveEventParachuteRain::LevelEditorWaveEventParachuteRain(this_08);
    (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
    iVar1 = FUN_04b54f08(0x168);
    iVar4 = FUN_04b54f08(0xa0);
    uVar2 = FUN_04b54f08(0xd2);
    (**(code **)(*(long *)this_08 + 0x198))
              (this_08,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,local_c - iVar4,iVar1,uVar2);
    LevelEditorWaveEventParachuteRain::Init(this_08,*(int *)(this + 0xd4));
    LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_08,true);
    break;
  case 0x1d:
    this_01 = ::operator_new(0x128);
    LevelEditorWaveEventBlackHole::LevelEditorWaveEventBlackHole(this_01);
    (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
    iVar1 = FUN_04b54f08(0x168);
    iVar4 = FUN_04b54f08(0xa0);
    uVar2 = FUN_04b54f08(0xd2);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,local_c - iVar4,iVar1,uVar2);
    LevelEditorWaveEventBlackHole::Init(this_01,*(int *)(this + 0xd4));
    LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
    break;
  case 0x1e:
    this_00 = ::operator_new(0x178);
    LevelEditorWaveEventSummonZombie::LevelEditorWaveEventSummonZombie(this_00);
    iVar1 = FUN_04b54f08(0x168);
    uVar2 = FUN_04b54f08(0x96);
    uVar3 = FUN_04b54f08(0x1ae);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,uVar3);
    LevelEditorWaveEventSummonZombie::Init(this_00,*(int *)(this + 0xd4));
LAB_04b64a28:
    plVar5 = (long *)LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    pLVar6 = ::operator_new(0x120);
    LevelEditorZombieSelectList::LevelEditorZombieSelectList(pLVar6);
    iVar1 = FUN_04b54f08(0x2ee);
    uVar2 = FUN_04b54f08(0x19);
    uVar3 = FUN_04b54f08(100);
    (**(code **)(*(long *)pLVar6 + 0x198))
              (pLVar6,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,uVar2,iVar1,uVar3);
    (**(code **)(*(long *)pLVar6 + 0x318))(pLVar6);
    (**(code **)(*plVar5 + 0x60))(plVar5,pLVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

