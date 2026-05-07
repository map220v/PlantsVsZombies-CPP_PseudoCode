// Class: MiniGame


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::GetSingletonPtr() */

void MiniGame::GetSingletonPtr(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06abba70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06abba70), iVar2 != 0)) {
    std::string::string((string *)&DAT_06abbb28,"MiniGameUI");
    __cxa_guard_release(&DAT_06abba70);
    __cxa_atexit(std::string::~string,&DAT_06abbb28,&DAT_06a88000);
    nop();
  }
  pcVar3 = (char *)FUN_0547429c(&DAT_06abbb28);
  Lua::CUIDialog::GetDialog(pcVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::ShowDialog() */

void MiniGame::ShowDialog(void)

{
  long lVar1;
  LuaFunctionCallback *this;
  bool local_31;
  string asStack_30 [8];
  long local_28;
  long local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetSingletonPtr();
  if (lVar1 == 0) {
    local_31 = false;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_28 = lVar1;
    local_20 = lVar1;
    this = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
    std::string::string(asStack_30,"luaMiniGameUI:CreateUI");
    Lua::LuaFunctionCallback::Execute(this,asStack_30,1,&local_31);
    std::string::~string(asStack_30);
    nop();
    if (local_31 != false) {
      lVar1 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&local_28);
    }
    Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&local_28);
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::CloseDialog() */

void MiniGame::CloseDialog(void)

{
  LuaFunctionCallback *pLVar1;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_31 = false;
  local_28 = 0;
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
  std::string::string(asStack_30,"luaMiniGameUI:Close");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,0,&local_31);
  Lua::LuaFunctionCallback::End(pLVar1);
  std::string::~string(asStack_30);
  nop();
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::OnActiveItemRefresh(ActiveItem*) */

void MiniGame::OnActiveItemRefresh(ActiveItem *param_1)

{
  long lVar1;
  LuaFunctionCallback *pLVar2;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetSingletonPtr();
  if (lVar1 != 0) {
    local_31 = false;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    pLVar2 = (LuaFunctionCallback *)
             Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
    std::string::string(asStack_30,"luaMiniGameUI:OnTabSelectionChanged");
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar2,asStack_30,0,&local_31)
    ;
    Lua::LuaFunctionCallback::End(pLVar2);
    std::string::~string(asStack_30);
    nop();
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::ResponseRankList(std::string const&) */

void MiniGame::ResponseRankList(string *param_1)

{
  long lVar1;
  LuaFunctionCallback *pLVar2;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetSingletonPtr();
  if (lVar1 != 0) {
    local_31 = false;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    pLVar2 = (LuaFunctionCallback *)
             Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::PushParamStdString(pLVar2,param_1);
    std::string::string(asStack_30,"luaMiniGameUI:ResponseRankList");
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar2,asStack_30,0,&local_31)
    ;
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::PushParamInt(pLVar2,1);
    Lua::LuaFunctionCallback::End(pLVar2);
    std::string::~string(asStack_30);
    nop();
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::InitDialog(Lua::CUIDialog*) */

void MiniGame::InitDialog(CUIDialog *param_1)

{
  long *plVar1;
  LoadingWidget *pLVar2;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (CUIDialog *)0x0) {
    __n_00 = auStack_18;
    std::string::string(asStack_10,"UITabControl_0");
    UI::Dialog::GetWidget<UITabControl>((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    __n = __n_00;
    std::string::string(asStack_10,"TabRank_Day_Scroll");
    plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar1 != (long *)0x0) {
      pLVar2 = ::operator_new(0xe0);
      LoadingWidget::LoadingWidget(pLVar2);
      std::string::append((string *)(pLVar2 + 0xc0),"TabRank_DayLoading",(size_t)__n);
      (**(code **)(*(long *)pLVar2 + 0x158))(pLVar2,0);
      (**(code **)(*plVar1 + 0x60))(plVar1,pLVar2);
    }
    std::string::string(asStack_10,"TabRank_Mon_Scroll");
    plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar1 != (long *)0x0) {
      pLVar2 = ::operator_new(0xe0);
      LoadingWidget::LoadingWidget(pLVar2);
      std::string::append((string *)(pLVar2 + 0xc0),"TabRank_MonLoading",(size_t)__n_00);
      (**(code **)(*(long *)pLVar2 + 0x158))(pLVar2,0);
      (**(code **)(*plVar1 + 0x60))(plVar1,pLVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::SetButtonsDisabled(bool) */

void MiniGame::SetButtonsDisabled(bool param_1)

{
  int iVar1;
  Dialog *this;
  UITabControl *this_00;
  long lVar2;
  long *plVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Dialog *)GetSingletonPtr();
  if (this != (Dialog *)0x0) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    iVar4 = 1;
    do {
      iVar1 = iVar4 + 1;
      lVar2 = UITabControl::GetTab(this_00,iVar4);
      plVar3 = (long *)FUN_0393f824(*(undefined8 *)(lVar2 + 0xd8));
      (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
      iVar4 = iVar1;
    } while (iVar1 != 5);
    std::string::string(asStack_10,"BtnClose");
    lVar2 = UI::Dialog::GetWidget(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar2 != 0) {
      std::string::string(asStack_10,"BtnClose");
      plVar3 = (long *)UI::Dialog::GetWidget(this,asStack_10);
      (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::ShowTab(int) */

void MiniGame::ShowTab(int param_1)

{
  Dialog *this;
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Dialog *)GetSingletonPtr();
  if (this != (Dialog *)0x0) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,param_1);
    UITabControl::SetTabSelected(this_00,pUVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::RequestDatas() */

void MiniGame::RequestDatas(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⨂';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⦰';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::IsOpened() */

void MiniGame::IsOpened(void)

{
  byte bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"egypt3");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar3);
  std::string::~string(asStack_90);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 & local_70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGame::IsHaveNewTips() */

void MiniGame::IsHaveNewTips(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  StructuredData aSStack_100 [120];
  ActiveItem aAStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  Sexy::StructuredData::StructuredData(aSStack_100);
  cVar2 = StringHelper::ReadJson(asStack_48,aSStack_100);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_100,"$.lt",0);
    bVar1 = 0 < iVar3;
  }
  Sexy::StructuredData::~StructuredData(aSStack_100);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

