// Class: WorldMap_DailyActivityButton


/* WorldMap_DailyActivityButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_DailyActivityButton::Draw(WorldMap_DailyActivityButton *this,Graphics *param_1)

{
  undefined4 uVar1;
  
  uVar1 = LawnApp::IsDailyActivityChooseDialogValid(gLawnApp);
  FUN_04587848(this + 0x1a8,uVar1);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_DailyActivityButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_DailyActivityButton::Draw(WorldMap_DailyActivityButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_DailyActivityButton::OnKillChooseDialog(UIWidget*) */

void __thiscall
WorldMap_DailyActivityButton::OnKillChooseDialog
          (WorldMap_DailyActivityButton *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (param_1 != (UIWidget *)this) {
    cVar1 = LawnApp::IsDailyActivityChooseDialogValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillDailyActivityChooseDialog(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WorldMap_DailyActivityButton::KillChooseDialog() */

void WorldMap_DailyActivityButton::KillChooseDialog(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsDailyActivityChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillDailyActivityChooseDialog(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::onLoadComplete() */

void WorldMap_DailyActivityButton::onLoadComplete(void)

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
    iVar2 = FUN_04587c18(0x23);
    iVar3 = FUN_04587c18(0xffffffec);
    fVar5 = (float)iVar3;
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,fVar5);
    uVar4 = Sexy::SexyVector2::operator+(this,(SexyVector2 *)aFStack_10);
    UIWidget::SetPositionOffset(uVar4,fVar5);
    iVar2 = FUN_04587830(*(undefined4 *)(in_x0 + 0x38));
    iVar3 = FUN_0458783c(*(undefined4 *)(in_x0 + 0x3c));
    FUN_04587834(in_x0 + 0x38,(int)((float)iVar2 * 0.8));
    FUN_04587840(in_x0 + 0x3c,(int)((float)iVar3 * 0.8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::StaticClassInit() */

void WorldMap_DailyActivityButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_DailyActivityButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04587fc8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DailyActivityButton::StaticGetClass() */

long * WorldMap_DailyActivityButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_DailyActivityButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_DailyActivityButton::GetClass() const */

long * WorldMap_DailyActivityButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_DailyActivityButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_DailyActivityButton::onMsgErrorRequest(int, std::string const&) */

void WorldMap_DailyActivityButton::onMsgErrorRequest(int param_1,string *param_2)

{
  *(undefined1 *)((ulong)(uint)param_1 + 0x1d1) = 0;
  nop();
  return;
}


/* WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton() */

void __thiscall
WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton(WorldMap_DailyActivityButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06861440;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_DailyActivityButton_068615e8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton() */

void __thiscall
WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton(WorldMap_DailyActivityButton *this)

{
  ~WorldMap_DailyActivityButton(this + -0x10);
  return;
}


/* WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton() */

void __thiscall
WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton(WorldMap_DailyActivityButton *this)

{
  ~WorldMap_DailyActivityButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton() */

void __thiscall
WorldMap_DailyActivityButton::~WorldMap_DailyActivityButton(WorldMap_DailyActivityButton *this)

{
  ~WorldMap_DailyActivityButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::RequestData(ActivityTypeID) */

void __thiscall
WorldMap_DailyActivityButton::RequestData(WorldMap_DailyActivityButton *this,int param_2)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  ActivityManager *this_01;
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
  }
  else {
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,param_2,true,0);
    this[0x1d1] = (WorldMap_DailyActivityButton)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DailyActivityButton::OnTouch() */

void __thiscall WorldMap_DailyActivityButton::OnTouch(WorldMap_DailyActivityButton *this)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsDailyActivityChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    MessageRouter::Post<UIWidget*,WorldMap_DailyActivityButton*>
              ((MessageRouter *)gMessageRouter,Message::KillChooseDialog,this);
    LawnApp::KillGameMaskUI(gLawnApp);
    LawnApp::ShowDailyActivityChooseDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    this[0x1d0] = (WorldMap_DailyActivityButton)0x1;
    return;
  }
  LawnApp::KillDailyActivityChooseDialog(this_00);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::CheckActivityTips() */

void WorldMap_DailyActivityButton::CheckActivityTips(void)

{
  char cVar1;
  int iVar2;
  TravelLogManager *this;
  PlayerInfo *this_00;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 == '\0') {
LAB_045887cc:
    ActiveItem::~ActiveItem(aAStack_88);
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    if (local_70 != '\0') {
      Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr();
      cVar1 = PlantAdventureMgr::CheckActivated();
      if ((cVar1 != '\0') &&
         (this_00 = (PlayerInfo *)ProfileUtils::Profile(), this_00 != (PlayerInfo *)0x0)) {
        cVar1 = PlayerInfo::HasPlantAdventureFinished(this_00);
        if (cVar1 != '\0') goto LAB_04588844;
      }
    }
    cVar1 = '\0';
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    this = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
    cVar1 = TravelLogManager::HaveCompletedTask(this);
    if (cVar1 == '\0') goto LAB_045887cc;
LAB_04588844:
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::CheckVisibility(bool) */

void WorldMap_DailyActivityButton::CheckVisibility(bool param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  UniverseMap *this;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar4 == 0) ||
      (this = (UniverseMap *)FUN_04587858(*(undefined8 *)(lVar4 + 0x2b0)),
      this == (UniverseMap *)0x0)) || (cVar1 = UniverseMap::isInState(this,2), cVar1 != '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar2 = RiftUtils::IsWorldMapButtonsEnabled();
    cVar1 = '\0';
    if (cVar2 != '\0' || param_1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar1 = local_70;
      ActiveItem::~ActiveItem(aAStack_88);
      if (cVar1 == '\0') {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        cVar1 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar1 == '\0') {
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          ActiveItem::~ActiveItem(aAStack_88);
          cVar1 = local_70;
        }
        else {
          Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr();
          cVar1 = PlantAdventureMgr::CheckActivated();
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::WorldMap_DailyActivityButton() */

void __thiscall
WorldMap_DailyActivityButton::WorldMap_DailyActivityButton(WorldMap_DailyActivityButton *this)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
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
  this[0x1d1] = (WorldMap_DailyActivityButton)0x0;
  *(undefined ***)this = &PTR_GetClass_06861440;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_DailyActivityButton_068615e8;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_DAILY_ACTIVITY");
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
  FUN_04587bbc(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_DailyActivityButton)0x0;
  bVar2 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar2);
  bVar2 = (bool)CheckActivityTips();
  WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::Delegate0<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CheckValidChooseDialog,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnKillChooseDialog);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgErrorRequest);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DailyActivityButton::StaticNew() */

WorldMap_DailyActivityButton * WorldMap_DailyActivityButton::StaticNew(void)

{
  WorldMap_DailyActivityButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_DailyActivityButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyActivityButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_DailyActivityButton::onNotifyRefreshActivityList
          (WorldMap_DailyActivityButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    bVar1 = (bool)CheckVisibility(false);
    UIWidget::SetVisible((UIWidget *)this,bVar1);
    if (this[0x1d1] != (WorldMap_DailyActivityButton)0x0) {
      local_1c = 0x29f8;
      local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        UISingletonDialog<UITravelLog>::ShowDialog();
      }
      else {
        local_1c = 0x2a38;
        local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar1) {
          Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr();
          PlantAdventureMgr::onButtonClicked();
        }
        else {
          local_1c = 0x2970;
          local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (bVar1) {
            UISingletonDialog<ActivityLevelsChoose>::ShowDialog();
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
  this[0x1d1] = (WorldMap_DailyActivityButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

