// Class: WorldMap_ChallengeButton


/* WorldMap_ChallengeButton::OnKillChooseDialog(UIWidget*) */

void __thiscall
WorldMap_ChallengeButton::OnKillChooseDialog(WorldMap_ChallengeButton *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (param_1 != (UIWidget *)this) {
    cVar1 = LawnApp::IsChallengeChooseDialogValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillChallengeChooseDialog(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WorldMap_ChallengeButton::KillChooseDialog() */

void WorldMap_ChallengeButton::KillChooseDialog(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsChallengeChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillChallengeChooseDialog(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WorldMap_ChallengeButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_ChallengeButton::Draw(WorldMap_ChallengeButton *this,Graphics *param_1)

{
  undefined4 uVar1;
  
  uVar1 = LawnApp::IsChallengeChooseDialogValid(gLawnApp);
  FUN_04585c0c(this + 0x1a8,uVar1);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_ChallengeButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_ChallengeButton::Draw(WorldMap_ChallengeButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::onLoadComplete() */

void WorldMap_ChallengeButton::onLoadComplete(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidget *in_x0;
  SexyVector2 *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 uVar4;
  float fVar5;
  FastCurve aFStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    this = (SexyVector2 *)UIWidget::GetPositionOffset(in_x0);
    iVar2 = FUN_045861c0(0x19);
    iVar3 = FUN_045861c0(0xffffffec);
    fVar5 = (float)iVar3;
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,fVar5);
    uVar4 = Sexy::SexyVector2::operator+(this,(SexyVector2 *)aFStack_10);
    UIWidget::SetPositionOffset(uVar4,fVar5);
    iVar2 = FUN_04585bec(*(undefined4 *)(in_x0 + 0x38));
    iVar3 = FUN_04585bf8(*(undefined4 *)(in_x0 + 0x3c));
    FUN_04585bf0(in_x0 + 0x38,(int)((float)iVar2 * 0.8));
    FUN_04585bfc(in_x0 + 0x3c,(int)((float)iVar3 * 0.8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::StaticClassInit() */

void WorldMap_ChallengeButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ChallengeButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04586570,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ChallengeButton::StaticGetClass() */

long * WorldMap_ChallengeButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ChallengeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ChallengeButton::GetClass() const */

long * WorldMap_ChallengeButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ChallengeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ChallengeButton::onMsgErrorRequest(int, std::string const&) */

void WorldMap_ChallengeButton::onMsgErrorRequest(int param_1,string *param_2)

{
  *(undefined1 *)((ulong)(uint)param_1 + 0x1d1) = 0;
  nop();
  return;
}


/* WorldMap_ChallengeButton::~WorldMap_ChallengeButton() */

void __thiscall WorldMap_ChallengeButton::~WorldMap_ChallengeButton(WorldMap_ChallengeButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06861260;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ChallengeButton_06861408;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_ChallengeButton::~WorldMap_ChallengeButton() */

void __thiscall WorldMap_ChallengeButton::~WorldMap_ChallengeButton(WorldMap_ChallengeButton *this)

{
  ~WorldMap_ChallengeButton(this + -0x10);
  return;
}


/* WorldMap_ChallengeButton::~WorldMap_ChallengeButton() */

void __thiscall WorldMap_ChallengeButton::~WorldMap_ChallengeButton(WorldMap_ChallengeButton *this)

{
  ~WorldMap_ChallengeButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ChallengeButton::~WorldMap_ChallengeButton() */

void __thiscall WorldMap_ChallengeButton::~WorldMap_ChallengeButton(WorldMap_ChallengeButton *this)

{
  ~WorldMap_ChallengeButton(this + -0x10);
  return;
}


/* WorldMap_ChallengeButton::onNotifyStaticConfig(int, S2C_StaticConfig const*) */

void __thiscall
WorldMap_ChallengeButton::onNotifyStaticConfig
          (WorldMap_ChallengeButton *this,int param_1,S2C_StaticConfig *param_2)

{
  DangerRoomManager *this_00;
  ActivityManager *this_01;
  
  if (param_1 != 0) {
    this[0x1d1] = (WorldMap_ChallengeButton)0x0;
    nop();
    return;
  }
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::InitProps(this_00,(S2C_DangerRoomPropertySheet *)(param_2 + 0x18));
  this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_01,0x297e,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::RequestData(int) */

void __thiscall WorldMap_ChallengeButton::RequestData(WorldMap_ChallengeButton *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  ActivityManager *this_01;
  PVZ2UIDialog *pPVar2;
  long lVar3;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    nop();
    goto LAB_045867dc;
  }
  if (param_1 == 0x297e) {
    lVar3 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar1 = FUN_04585c08(*(undefined1 *)(lVar3 + 0x1f9));
    if (cVar1 != '\0') goto LAB_045867c0;
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    INetworkMsgProcess::RequestStaticConfig(this_03);
  }
  else {
LAB_045867c0:
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,param_1,true,0);
  }
  this[0x1d1] = (WorldMap_ChallengeButton)0x1;
LAB_045867dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ChallengeButton::OnTouch() */

void __thiscall WorldMap_ChallengeButton::OnTouch(WorldMap_ChallengeButton *this)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsChallengeChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    MessageRouter::Post<UIWidget*,WorldMap_ChallengeButton*>
              ((MessageRouter *)gMessageRouter,Message::KillChooseDialog,this);
    LawnApp::KillGameMaskUI(gLawnApp);
    LawnApp::ShowChallengeChooseDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    this[0x1d0] = (WorldMap_ChallengeButton)0x1;
    return;
  }
  LawnApp::KillChallengeChooseDialog(this_00);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::CheckVisibility(bool) */

void WorldMap_ChallengeButton::CheckVisibility(bool param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  UniverseMap *this;
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar5 == 0) ||
      (this = (UniverseMap *)FUN_04585c04(*(undefined8 *)(lVar5 + 0x2b0)),
      this == (UniverseMap *)0x0)) || (cVar2 = UniverseMap::isInState(this,2), cVar2 != '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = RiftUtils::IsWorldMapButtonsEnabled();
    bVar3 = bVar3 | param_1;
    if (bVar3 != 0) {
      Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      cVar2 = DangerRoomManager::IsOpened();
      if (cVar2 == '\0') {
        Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar2 = PVPManager::IsActivated();
        if (cVar2 == '\0') {
          iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar4);
          bVar1 = local_70;
          ActiveItem::~ActiveItem(aAStack_88);
          if (bVar1 == 0) {
            iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar4);
            ActiveItem::~ActiveItem(aAStack_88);
            bVar3 = local_70;
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::CheckActivityTips() */

void WorldMap_ChallengeButton::CheckActivityTips(void)

{
  char cVar1;
  int iVar2;
  PlayerInfo *pPVar3;
  undefined8 uVar4;
  ActiveItem aAStack_108 [24];
  char local_f0;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_108);
  if (iVar2 < 0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActiveItem::operator=(aAStack_108,aAStack_88);
    ActiveItem::~ActiveItem(aAStack_88);
    if (local_f0 != '\0') {
      pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
      cVar1 = PlayerInfo::GetPVZ1ModeFirstPlay(pPVar3);
      if (cVar1 != '\0') goto LAB_04587078;
    }
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActiveItem::operator=(aAStack_108,aAStack_88);
    ActiveItem::~ActiveItem(aAStack_88);
    if (local_f0 == '\0') {
      uVar4 = 0;
      goto LAB_0458707c;
    }
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    cVar1 = PlayerInfo::GetCustomLevelFirstPlay(pPVar3);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_0458707c;
    }
  }
LAB_04587078:
  uVar4 = 1;
LAB_0458707c:
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::WorldMap_ChallengeButton() */

void __thiscall WorldMap_ChallengeButton::WorldMap_ChallengeButton(WorldMap_ChallengeButton *this)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
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
  this[0x1d1] = (WorldMap_ChallengeButton)0x0;
  *(undefined ***)this = &PTR_GetClass_06861260;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ChallengeButton_06861408;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_CHALLENGE_NEW");
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
  FUN_04586118(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_ChallengeButton)0x0;
  bVar2 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar2);
  bVar2 = (bool)CheckActivityTips();
  WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::Delegate0<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CheckValidChooseDialog,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnKillChooseDialog);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgErrorRequest);
  local_100 = local_68;
  uStack_f8 = uStack_60;
  local_f0 = local_58;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStaticConfig);
  local_120 = local_50;
  uStack_118 = uStack_48;
  local_110 = local_40;
  MessageRouter::
  Subscribe<int,S2C_StaticConfig_const*,Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(int,S2C_StaticConfig_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyStaticConfig,&local_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ChallengeButton::StaticNew() */

WorldMap_ChallengeButton * WorldMap_ChallengeButton::StaticNew(void)

{
  WorldMap_ChallengeButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_ChallengeButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChallengeButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_ChallengeButton::onNotifyRefreshActivityList
          (WorldMap_ChallengeButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  DangerRoomManager *this_00;
  PlayerInfo *pPVar5;
  CustomLevelSettingManager *this_01;
  CustomLevelMgr *pCVar6;
  CustomLevelShopMgr *this_02;
  NewPVPMgr *pNVar7;
  int local_1ac;
  undefined8 local_1a8 [14];
  ActiveItem aAStack_138 [128];
  undefined8 local_b8 [22];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    bVar1 = (bool)CheckVisibility(false);
    UIWidget::SetVisible((UIWidget *)this,bVar1);
    if (this[0x1d1] != (WorldMap_ChallengeButton)0x0) {
      local_1ac = 0x297e;
      local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1ac);
      local_b8[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8);
      if (bVar1) {
        this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        DangerRoomManager::ShowMainDialog(this_00);
      }
      else {
        local_1ac = 0x2a54;
        local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                 ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1ac)
        ;
        local_b8[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8);
        if (!bVar1) {
          local_1ac = 0x2a58;
          local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                    &local_1ac);
          local_b8[0] = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8);
          if (bVar1) {
            GameStateMgr::ShowCustomLevel(gGameStateMgr,5,5);
            pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
            PlayerInfo::SetCustomLevelFirstPlay(pPVar5,false);
            iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar3);
            CustomLevelShopData::CustomLevelShopData((CustomLevelShopData *)local_b8);
            cVar2 = ActiveItem::GetDataSerialized(aAStack_138,(RtObject *)local_b8);
            if (cVar2 != '\0') {
              this_02 = (CustomLevelShopMgr *)
                        Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
              CustomLevelShopMgr::loadData(this_02,(CustomLevelShopData *)local_b8);
            }
            CustomNetworkExtraData::CustomNetworkExtraData((CustomNetworkExtraData *)local_1a8);
            cVar2 = ActiveItem::GetDataSerialized(aAStack_138,(RtObject *)local_1a8);
            if (cVar2 != '\0') {
              pCVar6 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
              CustomLevelMgr::SetExtraData(pCVar6,(CustomNetworkExtraData *)local_1a8);
            }
            this_01 = (CustomLevelSettingManager *)
                      Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
            CustomLevelSettingManager::SynizeData(this_01);
            pCVar6 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
            CustomLevelMgr::SynServerPlantBanList(pCVar6);
            CustomNetworkExtraData::~CustomNetworkExtraData((CustomNetworkExtraData *)local_1a8);
            CustomLevelShopData::~CustomLevelShopData((CustomLevelShopData *)local_b8);
            ActiveItem::~ActiveItem(aAStack_138);
          }
          else {
            local_1ac = 0x2a61;
            local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                     ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                      &local_1ac);
            local_b8[0] = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_2);
            bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8);
            if (bVar1) {
              pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
              iVar3 = PlayerInfo::GetPVZ2UnchartedModeWorldCount(pPVar5);
              iVar4 = PVZ2UnchartedModeUtils::GetWorldCount();
              if (iVar3 < iVar4) {
                pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
                PlayerInfo::SetPVZ2UnchartedModeWorldCount(pPVar5,iVar4);
                UISingletonDialog<UIUnchartedEntry>::ShowDialog();
              }
              else {
                UISingletonDialog<UIUnchartedEntry>::ShowDialog();
              }
            }
            else {
              local_1ac = 0x2a65;
              local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                        &local_1ac);
              local_b8[0] = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
              bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8);
              if (bVar1) {
                cVar2 = CardGameUtils::HasCompleteTutorial();
                if (cVar2 == '\0') {
                  CardGameUtils::EnterTutorial();
                }
                else {
                  GameStateMgr::QueueWarpTunnel(gGameStateMgr);
                  std::string::string((string *)local_b8,"card_game");
                  CardGameUtils::GoToCardGameWorldMap((string *)local_b8,true);
                  std::string::~string((string *)local_b8);
                  nop();
                }
              }
              else {
                local_1ac = 0x2a6b;
                local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          &local_1ac);
                local_b8[0] = std::
                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
                bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8);
                if (bVar1) {
                  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
                  FUN_04586174((function<bool(Sexy::Touch_const&)> *)aAStack_138);
                  NewPVPMgr::RequestMainEntryData
                            (pNVar7,(function<bool(Sexy::Touch_const&)> *)aAStack_138);
                  std::function<bool(Sexy::Touch_const&)>::~function
                            ((function<bool(Sexy::Touch_const&)> *)aAStack_138);
                }
                else {
                  local_1ac = 0x2a88;
                  local_1a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                            &local_1ac);
                  local_b8[0] = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
                  bVar1 = eastl::operator!=((rbtree_iterator *)local_1a8,(rbtree_iterator *)local_b8
                                           );
                  if (bVar1) {
                    std::string::string((string *)local_b8,"");
                    PlantWarsUtils::GoToPlantWarsWorldMap((string *)local_b8);
                    std::string::~string((string *)local_b8);
                    nop();
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar1 = (bool)CheckActivityTips();
    WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar1);
  }
  else {
    nop();
  }
  this[0x1d1] = (WorldMap_ChallengeButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

