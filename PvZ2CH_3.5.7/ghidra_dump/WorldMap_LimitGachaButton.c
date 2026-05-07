// Class: WorldMap_LimitGachaButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitGachaButton::StaticClassInit() */

void WorldMap_LimitGachaButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LimitGachaButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0395d8a4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LimitGachaButton::StaticGetClass() */

long * WorldMap_LimitGachaButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LimitGachaButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LimitGachaButton::GetClass() const */

long * WorldMap_LimitGachaButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LimitGachaButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitGachaButton::onButtonClicked() */

void WorldMap_LimitGachaButton::onButtonClicked(void)

{
  undefined *puVar1;
  LawnApp *this;
  char cVar2;
  DTimerManager *this_00;
  undefined8 uVar3;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)afStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,(Delegate0 *)afStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    UILimitedGacha::s_isActive = 1;
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_50,"UILimitedGacha");
    FUN_03dba6f4(afStack_38);
    DTimerManager::addTimer(this_00,asStack_50,(function *)afStack_38,5.0,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
    std::string::~string(asStack_50);
    nop();
    puVar1 = gMessageRouter;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)UILimitedGacha::onNotifyRefreshActivityList);
    MessageRouter::
    Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
              ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar3);
    puVar1 = gMessageRouter;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)UILimitedGacha::onMsgErrorRequest);
    MessageRouter::
    Subscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
              ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar3);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_50,
               &DAT_05752860,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_02,(vector *)asStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_50);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WorldMap_LimitGachaButton::onNotifyBackFromRift() */

void WorldMap_LimitGachaButton::onNotifyBackFromRift(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2972,false,0);
  return;
}


/* WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton() */

void __thiscall
WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton(WorldMap_LimitGachaButton *this)

{
  WorldMapActivityBtnTurnChangeManager *pWVar1;
  
  *(undefined ***)this = &PTR_GetClass_066d2da0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LimitGachaButton_066d2f48;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pWVar1 = (WorldMapActivityBtnTurnChangeManager *)
           Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsLoaded(pWVar1,0x2972,false);
  pWVar1 = (WorldMapActivityBtnTurnChangeManager *)
           Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::updateData(pWVar1);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton() */

void __thiscall
WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton(WorldMap_LimitGachaButton *this)

{
  ~WorldMap_LimitGachaButton(this + -0x10);
  return;
}


/* WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton() */

void __thiscall
WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton(WorldMap_LimitGachaButton *this)

{
  ~WorldMap_LimitGachaButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton() */

void __thiscall
WorldMap_LimitGachaButton::~WorldMap_LimitGachaButton(WorldMap_LimitGachaButton *this)

{
  ~WorldMap_LimitGachaButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitGachaButton::WorldMap_LimitGachaButton() */

void __thiscall
WorldMap_LimitGachaButton::WorldMap_LimitGachaButton(WorldMap_LimitGachaButton *this)

{
  undefined *puVar1;
  char cVar2;
  ActivityManager *this_00;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066d2da0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LimitGachaButton_066d2f48;
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_0395d714(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBackFromRift);
  Sexy::Delegate0::Delegate0<WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBackFromRift,(Delegate0 *)afStack_38);
  cVar2 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar2 != '\0') {
    this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_00,0x2972,false,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LimitGachaButton::StaticNew() */

WorldMap_LimitGachaButton * WorldMap_LimitGachaButton::StaticNew(void)

{
  WorldMap_LimitGachaButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_LimitGachaButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitGachaButton::CheckActivated() */

void __thiscall WorldMap_LimitGachaButton::CheckActivated(WorldMap_LimitGachaButton *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  ActiveItem::~ActiveItem(aAStack_88);
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if ((((iVar3 == 6) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 1)) ||
      (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x70)) ||
     (iVar3 = LawnApp::GetPlatform(gLawnApp), bVar2 = local_70, iVar3 == 0x39)) {
    bVar2 = 0;
  }
  lVar4 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar4 == 0) {
    lVar4 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar4 == 0) || (lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 == 0))
    goto LAB_0395de18;
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
    if (cVar1 == '\0') {
      lVar4 = LawnApp::GetWorldMap(gLawnApp);
      lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
      cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar4 + 0x38));
      if (cVar1 == '\0') {
        lVar4 = LawnApp::GetWorldMap(gLawnApp);
        lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
        cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar4 + 0x38));
        if (cVar1 == '\0') {
          lVar4 = LawnApp::GetWorldMap(gLawnApp);
          lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
          cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar4 + 0x38));
          if (cVar1 == '\0') {
            lVar4 = LawnApp::GetWorldMap(gLawnApp);
            lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
            bVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar4 + 0x38));
            bVar2 = bVar2 ^ 1;
            goto LAB_0395de18;
          }
        }
      }
    }
  }
  else {
    lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar5 + 0x38));
    if (cVar1 == '\0') {
      lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
      cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar5 + 0x38));
      if (cVar1 == '\0') {
        lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
        cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar5 + 0x38));
        if (cVar1 == '\0') {
          lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
          cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar5 + 0x38));
          if (cVar1 == '\0') {
            lVar4 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
            bVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar4 + 0x38));
            bVar2 = bVar2 ^ 1;
            goto LAB_0395de18;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0395de18:
  UIWidget::SetVisible((UIWidget *)this,(bool)bVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitGachaButton::onWorldLoaded() */

void __thiscall WorldMap_LimitGachaButton::onWorldLoaded(WorldMap_LimitGachaButton *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ActiveItem aAStack_88 [24];
  undefined1 uStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  ActiveItem::~ActiveItem(aAStack_88);
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if ((((iVar3 == 6) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 1)) ||
      (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x70)) ||
     (iVar3 = LawnApp::GetPlatform(gLawnApp), bVar2 = uStack_70, iVar3 == 0x39)) {
    bVar2 = 0;
  }
  lVar4 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar4 == 0) {
    lVar4 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar4 == 0) || (lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 == 0))
    goto LAB_0395de18;
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
    if (cVar1 == '\0') {
      lVar4 = LawnApp::GetWorldMap(gLawnApp);
      lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
      cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar4 + 0x38));
      if (cVar1 == '\0') {
        lVar4 = LawnApp::GetWorldMap(gLawnApp);
        lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
        cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar4 + 0x38));
        if (cVar1 == '\0') {
          lVar4 = LawnApp::GetWorldMap(gLawnApp);
          lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
          cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar4 + 0x38));
          if (cVar1 == '\0') {
            lVar4 = LawnApp::GetWorldMap(gLawnApp);
            lVar4 = FUN_0395d498(*(undefined8 *)(lVar4 + 0x2f0));
            bVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar4 + 0x38));
            bVar2 = bVar2 ^ 1;
            goto LAB_0395de18;
          }
        }
      }
    }
  }
  else {
    lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar5 + 0x38));
    if (cVar1 == '\0') {
      lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
      cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar5 + 0x38));
      if (cVar1 == '\0') {
        lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
        cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar5 + 0x38));
        if (cVar1 == '\0') {
          lVar5 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
          cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar5 + 0x38));
          if (cVar1 == '\0') {
            lVar4 = FUN_0395d494(*(undefined8 *)(lVar4 + 0xe8));
            bVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar4 + 0x38));
            bVar2 = bVar2 ^ 1;
            goto LAB_0395de18;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0395de18:
  UIWidget::SetVisible((UIWidget *)this,(bool)bVar2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitGachaButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_LimitGachaButton::onNotifyRefreshActivityList
          (WorldMap_LimitGachaButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  UILimitedGacha *this_00;
  WorldMapActivityBtnTurnChangeManager *this_01;
  string *extraout_x1;
  int local_20c;
  undefined8 local_208;
  undefined8 local_200;
  ActiveItem aAStack_1f8 [24];
  char local_1e0;
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20c = 0x2972;
  local_208 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_20c);
  local_200 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_208,(rbtree_iterator *)&local_200);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0547419c(auStack_1b8);
    if ((cVar2 == '\0') && (local_1e0 != '\0')) {
      uVar4 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar4);
      std::string::string((string *)&local_200,"");
      FUN_05462980(auStack_178,(string *)&local_200);
      std::string::~string((string *)&local_200);
      nop();
      FUN_0544a0a4(auStack_110,0);
      FUN_054603b8(auStack_168,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GACHA");
      this_00 = (UILimitedGacha *)FUN_054603b8(auStack_168,&DAT_055a8370);
      UILimitedGacha::GetGachaMainPlantName(this_00);
      Sexy::Upper((Sexy *)&local_208,extraout_x1);
      FUN_0545ec84(auStack_168,(string *)&local_200);
      std::string::~string((string *)&local_200);
      std::string::~string((string *)&local_208);
      FUN_05462824((string *)&local_200,auStack_178);
      UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_200);
      std::string::~string((string *)&local_200);
      this_01 = (WorldMapActivityBtnTurnChangeManager *)
                Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
      WorldMapActivityBtnTurnChangeManager::setIsLoaded(this_01,0x2972,true);
      CheckActivated(this);
      FUN_054617bc(auStack_178);
      ActiveItem::~ActiveItem(aAStack_1f8);
    }
    else {
      ActiveItem::~ActiveItem(aAStack_1f8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

