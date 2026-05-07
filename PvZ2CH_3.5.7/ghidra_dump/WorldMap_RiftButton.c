// Class: WorldMap_RiftButton


/* WorldMap_RiftButton::onNetworkError(int) */

int WorldMap_RiftButton::onNetworkError(int param_1)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftButton::StaticClassInit() */

void WorldMap_RiftButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_RiftButton");
    (*pcVar2)(plVar1,asStack_10,FUN_036894c8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftButton::StaticGetClass() */

long * WorldMap_RiftButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_RiftButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RiftButton::GetClass() const */

long * WorldMap_RiftButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_RiftButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RiftButton::~WorldMap_RiftButton() */

void __thiscall WorldMap_RiftButton::~WorldMap_RiftButton(WorldMap_RiftButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0667c0b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RiftButton_0667c258;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_RiftButton::~WorldMap_RiftButton() */

void __thiscall WorldMap_RiftButton::~WorldMap_RiftButton(WorldMap_RiftButton *this)

{
  ~WorldMap_RiftButton(this + -0x10);
  return;
}


/* WorldMap_RiftButton::~WorldMap_RiftButton() */

void __thiscall WorldMap_RiftButton::~WorldMap_RiftButton(WorldMap_RiftButton *this)

{
  ~WorldMap_RiftButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_RiftButton::~WorldMap_RiftButton() */

void __thiscall WorldMap_RiftButton::~WorldMap_RiftButton(WorldMap_RiftButton *this)

{
  ~WorldMap_RiftButton(this + -0x10);
  return;
}


/* WorldMap_RiftButton::onRiftNetworkResponse(int, int) */

void __thiscall
WorldMap_RiftButton::onRiftNetworkResponse(WorldMap_RiftButton *this,int param_1,int param_2)

{
  if (param_1 == 1) {
    if (param_2 == 2) {
      WorldMapChallengeChooseDialog::onSuccessResponse();
      return;
    }
    if (param_2 == 4) {
      JoustUtils::ShowJoustNetworkIssuePopup(1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftButton::WorldMap_RiftButton() */

void __thiscall WorldMap_RiftButton::WorldMap_RiftButton(WorldMap_RiftButton *this)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0667c0b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RiftButton_0667c258;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_PENNY_ICON");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_03689338(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_RiftButton)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WorldMap_RiftButton,void(WorldMap_RiftButton::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<WorldMap_RiftButton,void(WorldMap_RiftButton::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_RiftButton,void(WorldMap_RiftButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_RiftButton,void(WorldMap_RiftButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapLoadComplete,(Delegate0 *)afStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftButton::StaticNew() */

WorldMap_RiftButton * WorldMap_RiftButton::StaticNew(void)

{
  WorldMap_RiftButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_RiftButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftButton::CheckActivated() */

void __thiscall WorldMap_RiftButton::CheckActivated(WorldMap_RiftButton *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_70 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_90,"egypt9");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (cVar1 != '\0') {
      lVar4 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
      if (lVar4 == 0) {
        lVar4 = LawnApp::GetWorldMap(gLawnApp);
        if ((lVar4 != 0) && (lVar4 = FUN_0368905c(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 != 0)) {
          cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
          goto joined_r0x03689c54;
        }
      }
      else {
        lVar4 = FUN_03689058(*(undefined8 *)(lVar4 + 0xe8));
        cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
joined_r0x03689c54:
        if (cVar2 == '\x01') goto LAB_03689be8;
      }
      UIWidget::SetVisible((UIWidget *)this,true);
      goto LAB_03689bf8;
    }
  }
LAB_03689be8:
  cVar1 = '\0';
  UIWidget::SetVisible((UIWidget *)this,false);
LAB_03689bf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftButton::onWorldLoaded() */

void __thiscall WorldMap_RiftButton::onWorldLoaded(WorldMap_RiftButton *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char cStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  ActiveItem::~ActiveItem(aAStack_88);
  if (cStack_70 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_90,"egypt9");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (cVar1 != '\0') {
      lVar4 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
      if (lVar4 == 0) {
        lVar4 = LawnApp::GetWorldMap(gLawnApp);
        if ((lVar4 != 0) && (lVar4 = FUN_0368905c(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 != 0)) {
          cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
          goto joined_r0x03689c54;
        }
      }
      else {
        lVar4 = FUN_03689058(*(undefined8 *)(lVar4 + 0xe8));
        cVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
joined_r0x03689c54:
        if (cVar2 == '\x01') goto LAB_03689be8;
      }
      UIWidget::SetVisible((UIWidget *)this,true);
      goto LAB_03689bf8;
    }
  }
LAB_03689be8:
  cVar1 = '\0';
  UIWidget::SetVisible((UIWidget *)this,false);
LAB_03689bf8:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

