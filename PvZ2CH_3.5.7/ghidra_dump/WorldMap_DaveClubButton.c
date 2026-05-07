// Class: WorldMap_DaveClubButton


/* WorldMap_DaveClubButton::BackToMap() */

void WorldMap_DaveClubButton::BackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillAdventureOpenedUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::StaticClassInit() */

void WorldMap_DaveClubButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_DaveClubButton");
    (*pcVar2)(plVar1,asStack_10,FUN_039128cc,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DaveClubButton::StaticGetClass() */

long * WorldMap_DaveClubButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_DaveClubButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_DaveClubButton::GetClass() const */

long * WorldMap_DaveClubButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_DaveClubButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_DaveClubButton::~WorldMap_DaveClubButton() */

void __thiscall WorldMap_DaveClubButton::~WorldMap_DaveClubButton(WorldMap_DaveClubButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066c3c00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_DaveClubButton_066c3da8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_DaveClubButton::~WorldMap_DaveClubButton() */

void __thiscall WorldMap_DaveClubButton::~WorldMap_DaveClubButton(WorldMap_DaveClubButton *this)

{
  ~WorldMap_DaveClubButton(this + -0x10);
  return;
}


/* WorldMap_DaveClubButton::~WorldMap_DaveClubButton() */

void __thiscall WorldMap_DaveClubButton::~WorldMap_DaveClubButton(WorldMap_DaveClubButton *this)

{
  ~WorldMap_DaveClubButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_DaveClubButton::~WorldMap_DaveClubButton() */

void __thiscall WorldMap_DaveClubButton::~WorldMap_DaveClubButton(WorldMap_DaveClubButton *this)

{
  ~WorldMap_DaveClubButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::OnGotExploreTeamStatus(bool) */

void __thiscall
WorldMap_DaveClubButton::OnGotExploreTeamStatus(WorldMap_DaveClubButton *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsAdventureOpenedUIValid(gLawnApp);
  if (cVar2 != '\0') {
    LawnApp::KillAdventureOpenedUI(pLVar1);
  }
  pLVar1 = gLawnApp;
  if (param_1) {
    GameStateMgr::ShowPlantAdventure(gGameStateMgr,5,5);
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,BackToMap);
    Sexy::Delegate0::Delegate0<WorldMap_DaveClubButton,void(WorldMap_DaveClubButton::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::WorldMap_DaveClubButton() */

void __thiscall WorldMap_DaveClubButton::WorldMap_DaveClubButton(WorldMap_DaveClubButton *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066c3c00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_DaveClubButton_066c3da8;
  std::string::string((string *)&local_40,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_DAVECLUB");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_40);
  nop();
  FUN_0391271c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefresh);
  local_70 = local_40;
  uStack_68 = uStack_38;
  local_60 = local_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_DaveClubButton,void(WorldMap_DaveClubButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DaveClubButton::StaticNew() */

WorldMap_DaveClubButton * WorldMap_DaveClubButton::StaticNew(void)

{
  WorldMap_DaveClubButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_DaveClubButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::onButtonClicked() */

void WorldMap_DaveClubButton::onButtonClicked(void)

{
  char cVar1;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,&DAT_05751da0,1,auStack_28);
  cVar1 = INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (cVar1 == '\0') {
    LawnApp::ShowNetworkError(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void __thiscall
WorldMap_DaveClubButton::OnNotifyRefresh(WorldMap_DaveClubButton *this,bool param_1,set *param_2)

{
  char cVar1;
  ulong uVar2;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::set<int,std::less<int>,std::allocator<int>>::size
                    ((set<int,std::less<int>,std::allocator<int>> *)param_2);
  if (uVar2 < 2) {
    local_1c = 0x299c;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar1 == '\0') {
      if (param_1) {
        UISingletonDialog<DaveClubUI>::ShowDialog();
      }
      else {
        LawnApp::ShowNetworkError(gLawnApp);
        UISingletonDialog<DaveClubUI>::CloseDialog();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::CheckActivated() */

void __thiscall WorldMap_DaveClubButton::CheckActivated(WorldMap_DaveClubButton *this)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  StoneLotteryConfig aSStack_c8 [64];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  bool local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03912498(local_80);
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
    uVar3 = 0;
  }
  else {
    StoneLotteryConfig::StoneLotteryConfig(aSStack_c8);
    cVar1 = LawnApp::IsChannelWithBigDeal();
    if (((cVar1 == '\0') ||
        (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aSStack_c8), cVar1 == '\0'))
       || (iVar2 = ActiveItem::GetLeftTimes(aAStack_88), iVar2 < 0)) {
      UIWidget::SetVisible((UIWidget *)this,false);
      uVar3 = 0;
    }
    else {
      UIWidget::SetVisible((UIWidget *)this,local_70);
      uVar3 = local_70;
    }
    StoneLotteryConfig::~StoneLotteryConfig(aSStack_c8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DaveClubButton::onWorldLoaded() */

void __thiscall WorldMap_DaveClubButton::onWorldLoaded(WorldMap_DaveClubButton *this)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  StoneLotteryConfig aSStack_c8 [64];
  ActiveItem aAStack_88 [8];
  undefined4 uStack_80;
  bool bStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03912498(uStack_80);
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
    uVar3 = 0;
  }
  else {
    StoneLotteryConfig::StoneLotteryConfig(aSStack_c8);
    cVar1 = LawnApp::IsChannelWithBigDeal();
    if (((cVar1 == '\0') ||
        (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aSStack_c8), cVar1 == '\0'))
       || (iVar2 = ActiveItem::GetLeftTimes(aAStack_88), iVar2 < 0)) {
      UIWidget::SetVisible((UIWidget *)this,false);
      uVar3 = 0;
    }
    else {
      UIWidget::SetVisible((UIWidget *)this,bStack_70);
      uVar3 = bStack_70;
    }
    StoneLotteryConfig::~StoneLotteryConfig(aSStack_c8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

