// Class: WorldMapDailyActivityChooseDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::GetAssociatedMainWidget() */

void WorldMapDailyActivityChooseDialog::GetAssociatedMainWidget(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapDailyActivityButton");
  uVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldMapDailyActivityChooseDialog::GetItemCount() */

void __thiscall
WorldMapDailyActivityChooseDialog::GetItemCount(WorldMapDailyActivityChooseDialog *this)

{
  FUN_045997f4(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x200));
  return;
}


/* WorldMapDailyActivityChooseDialog::GetItemRightMargin() */

float WorldMapDailyActivityChooseDialog::GetItemRightMargin(void)

{
  int iVar1;
  
  iVar1 = FUN_04599828(0x10);
  return (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::InitView() */

void __thiscall WorldMapDailyActivityChooseDialog::InitView(WorldMapDailyActivityChooseDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x378))();
  if (-1 < iVar1) {
    uVar2 = FUN_04599828(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar2,uVar2,*(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214));
    plVar4 = (long *)(**(code **)(*(long *)this + 0x358))(this);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb0))(&local_10);
      iVar1 = FUN_04599828(0x14);
      lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b141c8);
      iVar3 = FUN_04599828(10);
      (**(code **)(*(long *)this + 0x1a8))
                (this,local_10 - *(int *)(this + 0x210) / 2,
                 (local_c - *(int *)(this + 0x214)) -
                 (int)((float)(iVar1 + *(int *)(lVar5 + 0x3c)) * 0.5 - (float)iVar3));
    }
  }
  this[0x59] = (WorldMapDailyActivityChooseDialog)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapDailyActivityChooseDialog::GetBaseHeight() */

int WorldMapDailyActivityChooseDialog::GetBaseHeight(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b141c8);
  iVar1 = FUN_04599828(0x14);
  return iVar1 + *(int *)(lVar2 + 0x3c);
}


/* WorldMapDailyActivityChooseDialog::ButtonPress(int) */

void WorldMapDailyActivityChooseDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapDailyActivityChooseDialog::ButtonPress(int) */

void __thiscall
WorldMapDailyActivityChooseDialog::ButtonPress(WorldMapDailyActivityChooseDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WorldMapDailyActivityChooseDialog::ButtonDepress(int) */

void __thiscall
WorldMapDailyActivityChooseDialog::ButtonDepress
          (WorldMapDailyActivityChooseDialog *this,int param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  char *pcVar2;
  FestivalManager *this_01;
  RtObject *pRVar3;
  WorldMap_DailyActivityButton *pWVar4;
  
  cVar1 = (**(code **)(*(long *)(this + 0xe0) + 0x30))(this + 0xe0);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
  if (param_1 == 0x2d) {
    pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar3 != (RtObject *)0x0) &&
       (pWVar4 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(pRVar3),
       pWVar4 != (WorldMap_DailyActivityButton *)0x0)) {
      WorldMap_DailyActivityButton::RequestData(pWVar4,0x2a38);
    }
  }
  else if (param_1 == 0x33) {
    pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar3 != (RtObject *)0x0) &&
       (pWVar4 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(pRVar3),
       pWVar4 != (WorldMap_DailyActivityButton *)0x0)) {
      this_01 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      FestivalManager::FestivalInit(this_01);
      WorldMap_DailyActivityButton::RequestData(pWVar4,0x2970);
    }
  }
  else if (((param_1 == 0x24) &&
           (pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this),
           pRVar3 != (RtObject *)0x0)) &&
          (pWVar4 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(pRVar3),
          pWVar4 != (WorldMap_DailyActivityButton *)0x0)) {
    WorldMap_DailyActivityButton::RequestData(pWVar4,0x29f8);
  }
  LawnApp::KillDailyActivityChooseDialog(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to WorldMapDailyActivityChooseDialog::ButtonDepress(int) */

void __thiscall
WorldMapDailyActivityChooseDialog::ButtonDepress
          (WorldMapDailyActivityChooseDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog() */

void __thiscall
WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog
          (WorldMapDailyActivityChooseDialog *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06865540;
  *(undefined **)(this + 0xd8) = &DAT_068658d0;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapDailyActivityChooseDialog_06865918;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0x150));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_UI_Anniversary");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"LUA_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_Anniversary");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UPDATE_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::~unordered_map((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x1c0));
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::~unordered_map((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x188));
  InterfaceChooseDialog::~InterfaceChooseDialog((InterfaceChooseDialog *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog() */

void __thiscall
WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog
          (WorldMapDailyActivityChooseDialog *this)

{
  ~WorldMapDailyActivityChooseDialog(this + -0xe0);
  return;
}


/* WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog() */

void __thiscall
WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog
          (WorldMapDailyActivityChooseDialog *this)

{
  ~WorldMapDailyActivityChooseDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog() */

void __thiscall
WorldMapDailyActivityChooseDialog::~WorldMapDailyActivityChooseDialog
          (WorldMapDailyActivityChooseDialog *this)

{
  ~WorldMapDailyActivityChooseDialog(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::GetHomeActivityPos(HomeActityType, Sexy::SexyVector2&) */

void __thiscall
WorldMapDailyActivityChooseDialog::GetHomeActivityPos
          (WorldMapDailyActivityChooseDialog *this,undefined4 param_2,float *param_3)

{
  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
  *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
             ::find(this_00,(HomeActityType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar3) {
    puVar4 = (undefined8 *)
             std::
             map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
             ::operator[](this_00,(HomeActityType *)local_24);
    iVar1 = *(int *)(this + 0x48);
    iVar2 = *(int *)(this + 0x4c);
    *(undefined8 *)param_3 = *puVar4;
    *param_3 = *param_3 + (float)iVar1;
    param_3[1] = param_3[1] + (float)iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* non-virtual thunk to WorldMapDailyActivityChooseDialog::GetHomeActivityPos(HomeActityType,
   Sexy::SexyVector2&) */

void __thiscall
WorldMapDailyActivityChooseDialog::GetHomeActivityPos(WorldMapDailyActivityChooseDialog *this)

{
  GetHomeActivityPos(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::PrepareActivityConfig() */

void __thiscall
WorldMapDailyActivityChooseDialog::PrepareActivityConfig(WorldMapDailyActivityChooseDialog *this)

{
  vector<int,std::allocator<int>> *this_00;
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  *this_01;
  char cVar1;
  string *psVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  undefined *__n;
  size_t sVar5;
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x1f8);
  this_01 = (unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             *)(this + 0x118);
  __n = &__stack_chk_guard;
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::clear(this_01);
  local_10[0] = 0x24;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_01,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_QUEST",(size_t)__n);
  sVar5 = 0x2d;
  local_10[0] = 0x2d;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_01,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_PLANT_ADVENTURE",sVar5);
  sVar5 = 0x33;
  local_10[0] = 0x33;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_01,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_CHALLENGE",sVar5);
  std::vector<int,std::allocator<int>>::clear(this_00);
  std::string::string((string *)local_10,"egypt6");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x24;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(1,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x2d;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt11");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x33;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WorldMapDailyActivityChooseDialog::LayoutItems() */

void __thiscall
WorldMapDailyActivityChooseDialog::LayoutItems(WorldMapDailyActivityChooseDialog *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  PVZ2UIButton *pPVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long local_210;
  undefined1 auStack_1f8 [12];
  int local_1ec;
  PVZ2UIButton *local_1e8;
  string asStack_1e0 [8];
  undefined8 local_1d8;
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  int local_1c0 [4];
  undefined1 local_1b0 [3] [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = (**(code **)(*(long *)this + 0x350))();
  uVar5 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar5);
  local_1e8 = (PVZ2UIButton *)0x0;
  std::
  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
  ::clear((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
           *)(this + 0xe8));
  fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar18 = (float)(**(code **)(*(long *)this + 0x330))(this);
  fVar19 = (float)(**(code **)(*(long *)this + 0x338))(this);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0x150));
  local_1ec = 0;
  Set8BytesTo0(asStack_1e0);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b141c8);
  iVar6 = FUN_04599828(0x14);
  iVar1 = *(int *)(lVar11 + 0x3c);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14090);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14090);
  iVar8 = SalesProgressBar::GetCurrentLevel(this_01);
  if (iVar4 < 1) {
    uVar9 = 0xffffffff;
  }
  else {
    fVar20 = (float)(int)((float)iVar7 * 0.9);
    lVar11 = 0;
    uVar9 = 0xffffffff;
    do {
      while( true ) {
        piVar12 = (int *)FUN_04599820(*(undefined8 *)(this + 0x1f8),lVar11);
        local_1ec = *piVar12;
        local_1d8 = std::
                    unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                            *)(this + 0x188),&local_1ec);
        uVar13 = FUN_04599a0c();
        local_1b0[0]._0_8_ = uVar13;
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_1d8,(exception_ptr *)local_1b0);
        if ((cVar3 != '\0') ||
           (lVar14 = std::__detail::
                     _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                     operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                 *)&local_1d8), *(char *)(lVar14 + 4) == '\0')) break;
        uVar13 = std::
                 unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                 ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                               *)(this + 0x118),&local_1ec);
        thunk_FUN_05475e00(asStack_1e0,uVar13);
        std::string::string((string *)local_1b0,"");
        FUN_05462980(auStack_178,(string *)local_1b0);
        std::string::~string((string *)local_1b0);
        nop();
        FUN_0544a0a4(auStack_110,0);
        FUN_0545ec84(auStack_168,asStack_1e0);
        FUN_05462824((string *)local_1b0,auStack_178);
        local_210 = StringHelper::ToImage((string *)local_1b0,false);
        std::string::~string((string *)local_1b0);
        if (local_210 == 0) {
          local_210 = CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14090);
          std::string::string(asStack_1d0,"WorldMapDailyActivityChooseDialog");
          FUN_05462824(asStack_1c8,auStack_178);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)local_1b0,asStack_1c8,1,
                     auStack_1f8);
          std::string::string((string *)local_1c0,"");
          BehaviorLog::inGameBehavior(asStack_1d0,(vector *)local_1b0,(string *)local_1c0);
          std::string::~string((string *)local_1c0);
          nop();
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)local_1b0);
          std::string::~string(asStack_1c8);
          std::string::~string(asStack_1d0);
          nop();
          if (local_210 == 0) break;
        }
        uVar9 = uVar9 + 1;
        FUN_05478178((Color *)local_1c0,&DAT_056f11a8,asStack_1d0);
        Sexy::Color::Color((Color *)local_1b0,1);
        pPVar15 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar15,local_1ec,(ButtonListener *)(this + 0xd8),(wstring *)local_1c0,
                   (Color *)local_1b0);
        local_1e8 = pPVar15;
        FUN_05476c50((Color *)local_1c0);
        nop();
        pPVar15 = local_1e8;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_1b0,local_210,2);
        Sexy::Color::Color((Color *)local_1c0,0x5a,0x5a,0x5a);
        PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_1b0,(Color *)local_1c0);
        pPVar15 = local_1e8;
        iVar10 = FUN_04599828(8);
        iVar2 = (iVar6 + iVar1) * ((int)uVar9 >> 2);
        (**(code **)(*(long *)pPVar15 + 0x198))
                  (pPVar15,(int)fVar17,iVar10 + iVar2,(int)((float)iVar7 * 0.9),
                   (int)((float)iVar8 * 0.9));
        local_1c0[0] = local_1ec;
        puVar16 = (undefined8 *)
                  std::
                  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                  ::operator[]((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                                *)(this + 0xe8),(HomeActityType *)local_1c0);
        iVar10 = FUN_04599828(8);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_1b0,fVar17,(float)(iVar2 + iVar10));
        *puVar16 = local_1b0[0]._0_8_;
        if ((uVar9 & 3) == 3) {
          fVar17 = fVar20 + fVar19 + fVar17;
          if ((float)*(int *)(this + 0x210) < fVar17) {
            *(int *)(this + 0x210) = (int)fVar17;
          }
          fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
        }
        else {
          fVar17 = fVar17 + fVar20 + fVar18;
        }
        lVar11 = lVar11 + 1;
        (**(code **)(*(long *)this + 0x60))(this,local_1e8);
        local_1b0[0] = std::make_pair<int&,PVZ2UIButton*&>(&local_1ec,&local_1e8);
        std::
        unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
        ::insert<std::pair<int,PVZ2UIButton*>,void>
                  ((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0x150),(pair *)local_1b0);
        if (iVar4 <= (int)lVar11) goto LAB_0459a490;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar4);
LAB_0459a490:
    if (2 < (int)uVar9) goto LAB_0459a4ac;
  }
  *(int *)(this + 0x210) = (int)((fVar19 - fVar18) + fVar17);
LAB_0459a4ac:
  uVar5 = (**(code **)(*(long *)this + 0x348))(this);
  *(undefined4 *)(this + 0x214) = uVar5;
  std::string::~string(asStack_1e0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::FillState() */

void __thiscall
WorldMapDailyActivityChooseDialog::FillState(WorldMapDailyActivityChooseDialog *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  TravelLogManager *this_00;
  PlayerInfo *this_01;
  long lVar5;
  bool local_96;
  bool local_95;
  int local_94;
  undefined8 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  lVar5 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = (**(code **)(*(long *)this + 0x350))();
  local_96 = false;
  local_95 = false;
  if (0 < iVar2) {
    do {
      while( true ) {
        local_96 = false;
        local_95 = false;
        piVar4 = (int *)FUN_04599820(*(undefined8 *)(this + 0x1f8),lVar5);
        local_94 = *piVar4;
        if (local_94 != 0x2d) break;
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr();
          local_96 = (bool)PlantAdventureMgr::CheckActivated();
          local_95 = false;
          this_01 = (PlayerInfo *)ProfileUtils::Profile();
          if ((this_01 != (PlayerInfo *)0x0) &&
             (cVar1 = PlayerInfo::HasPlantAdventureFinished(this_01), cVar1 != '\0')) {
            local_95 = true;
          }
        }
LAB_0459a718:
        lVar5 = lVar5 + 1;
        ActiveItem::~ActiveItem(aAStack_88);
        local_90 = std::make_pair<int&,bool>(&local_94,&local_96);
        std::
        unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
        ::insert<std::pair<HomeActityType,unsigned_char>,void>
                  ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x188),(pair *)&local_90);
        local_90 = std::make_pair<int&,bool>(&local_94,&local_95);
        std::
        unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
        ::insert<std::pair<HomeActityType,unsigned_char>,void>
                  ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x1c0),(pair *)&local_90);
        if (iVar2 <= (int)lVar5) goto LAB_0459a764;
      }
      if (local_94 == 0x33) {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          local_96 = true;
          local_95 = false;
        }
        goto LAB_0459a718;
      }
      if (local_94 == 0x24) {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          local_96 = true;
          this_00 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
          local_95 = (bool)TravelLogManager::HaveCompletedTask(this_00);
          if (local_95 != false) {
            local_95 = true;
          }
        }
        goto LAB_0459a718;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar2);
  }
LAB_0459a764:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::WorldMapDailyActivityChooseDialog(int) */

void __thiscall
WorldMapDailyActivityChooseDialog::WorldMapDailyActivityChooseDialog
          (WorldMapDailyActivityChooseDialog *this,int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  InterfaceChooseDialog::InterfaceChooseDialog((InterfaceChooseDialog *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06865540;
  *(undefined **)(this + 0xd8) = &DAT_068658d0;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapDailyActivityChooseDialog_06865918;
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x188),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x1c0),(hash *)0xa,aeStack_20,aaStack_18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_UI_Anniversary");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"LUA_UI_Anniversary");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_Anniversary");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UPDATE_UI_Anniversary");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  *(undefined4 *)(this + 0x210) = 0;
  PrepareActivityConfig(this);
  FillState(this);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::Draw(Sexy::Graphics*) */

void __thiscall
WorldMapDailyActivityChooseDialog::Draw(WorldMapDailyActivityChooseDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04599828(0x14);
  iVar1 = *(int *)(this + 0x214);
  nop();
  iVar3 = FUN_04599828(0);
  iVar4 = FUN_04599828(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,*(int *)(this + 0x210),iVar1 - iVar2);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b141c8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b141f0);
  iVar3 = *(int *)(this + 0x210);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b141f0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_04599828(0x14);
  iVar6 = FUN_04599828(10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar3 - iVar4) / 2,(iVar5 + (iVar1 - iVar2)) - iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapDailyActivityChooseDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
WorldMapDailyActivityChooseDialog::DrawAll
          (WorldMapDailyActivityChooseDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  Image *pIVar9;
  long lVar10;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar5 = (**(code **)(*(long *)this + 0x350))(this);
  local_24 = 0;
  if (0 < iVar5) {
    lVar10 = 0;
LAB_0459abb4:
    do {
      piVar7 = (int *)FUN_04599820(*(undefined8 *)(this + 0x1f8),lVar10);
      local_24 = *piVar7;
      local_20 = std::
                 unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                 ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                         *)(this + 0x1c0),&local_24);
      local_10 = FUN_04599a0c();
      cVar3 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_20,(exception_ptr *)&local_10);
      if ((cVar3 == '\0') &&
         (lVar8 = std::__detail::
                  _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                  operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                              *)&local_20), *(char *)(lVar8 + 4) != '\0')) {
        local_18 = std::
                   unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                   ::find((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                           *)(this + 0x150),&local_24);
        local_10 = FUN_04599a80();
        bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar4) {
          lVar8 = std::__detail::
                  _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                  operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                              *)&local_18);
          lVar8 = *(long *)(lVar8 + 8);
          if (lVar8 != 0) {
            iVar1 = *(int *)(lVar8 + 0x4c);
            iVar2 = *(int *)(lVar8 + 0x48);
            lVar10 = lVar10 + 1;
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b140e0);
            iVar6 = FUN_04599828(0x10);
            Sexy::Graphics::DrawImage(param_2,pIVar9,iVar2 - iVar6,iVar1);
            if (iVar5 <= (int)lVar10) break;
            goto LAB_0459abb4;
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

