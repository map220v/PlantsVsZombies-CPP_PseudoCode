// Class: WorldMapActivityHomeExtra


/* WorldMapActivityHomeExtra::onCloseDialog() */

void WorldMapActivityHomeExtra::onCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WorldMapActivityHomeExtra::KillMyChildren() */

void WorldMapActivityHomeExtra::KillMyChildren(void)

{
  char cVar1;
  LawnApp *this;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsChooseWelfareDialogValid(gLawnApp);
  if (((cVar1 != '\0') || (cVar1 = LawnApp::IsChoosePlantsDialogValid(this), cVar1 != '\0')) ||
     (cVar1 = LawnApp::IsChooseActivityLevelsDialogValid(this), cVar1 != '\0')) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    this = gLawnApp;
  }
  LawnApp::KillChooseWelfareDialog(this);
  LawnApp::KillChoosePlantsDialog(gLawnApp);
  LawnApp::KillChooseActivityLevelsDialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::GetAssociatedMainWidget() */

void WorldMapActivityHomeExtra::GetAssociatedMainWidget(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapActivityHomeButtonExtra");
  uVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldMapActivityHomeExtra::GetItemCount() */

void __thiscall WorldMapActivityHomeExtra::GetItemCount(WorldMapActivityHomeExtra *this)

{
  FUN_045a6860(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
  return;
}


/* WorldMapActivityHomeExtra::GetItemRightMargin() */

float WorldMapActivityHomeExtra::GetItemRightMargin(void)

{
  int iVar1;
  
  iVar1 = FUN_045a68f0(0x10);
  return (float)iVar1;
}


/* WorldMapActivityHomeExtra::GetPanelHeight() */

int __thiscall WorldMapActivityHomeExtra::GetPanelHeight(WorldMapActivityHomeExtra *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = std::
          unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
          ::size((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                  *)(this + 0xe0));
  iVar2 = (**(code **)(*(long *)this + 0x340))(this);
  iVar2 = iVar2 + ((iVar1 + -1) / 5) * iVar2;
  if ((this[0x1e0] != (WorldMapActivityHomeExtra)0x0) ||
     (this[0x1e1] != (WorldMapActivityHomeExtra)0x0)) {
    iVar1 = FUN_045a68f0(0x19);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::InitView() */

void __thiscall WorldMapActivityHomeExtra::InitView(WorldMapActivityHomeExtra *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x370))();
  if (-1 < iVar1) {
    uVar2 = FUN_045a68f0(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar2,uVar2,*(undefined4 *)(this + 0x1d8),*(undefined4 *)(this + 0x1dc));
    plVar6 = (long *)(**(code **)(*(long *)this + 0x358))(this);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0xb0))(&local_10);
      pcVar8 = *(code **)(*(long *)this + 0x1a8);
      iVar3 = FUN_045a68f0(0x3c);
      iVar4 = FUN_045a68f0(0x14);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b151e0);
      iVar1 = *(int *)(lVar7 + 0x3c);
      iVar5 = FUN_045a68f0(10);
      (*pcVar8)(this,local_10 + iVar3,
                (int)(((float)local_c - (float)(iVar4 + iVar1) * 0.5) - (float)iVar5));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityHomeExtra::GetBaseHeight() */

int WorldMapActivityHomeExtra::GetBaseHeight(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b151e0);
  iVar1 = FUN_045a68f0(0x14);
  return iVar1 + *(int *)(lVar2 + 0x3c);
}


/* WorldMapActivityHomeExtra::ButtonPress(int) */

void WorldMapActivityHomeExtra::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapActivityHomeExtra::ButtonPress(int) */

void __thiscall WorldMapActivityHomeExtra::ButtonPress(WorldMapActivityHomeExtra *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::ButtonDepress(int) */

void __thiscall
WorldMapActivityHomeExtra::ButtonDepress(WorldMapActivityHomeExtra *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  RtObject *pRVar5;
  WorldMap_ActivityHomeButtonExtra *pWVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_045a685c(*(undefined4 *)(lVar2 + 0x40));
  if ((iVar1 != 0x35) || (param_1 == 5)) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    switch(param_1) {
    case 1:
      UILimitedGacha::createWithNetwork();
      break;
    case 0x15:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x29c0);
      }
      break;
    case 0x1f:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x2983);
      }
      break;
    case 0x20:
      std::string::string(asStack_10,"OpenAnniversaryUI");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
      break;
    case 0x21:
      plVar4 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn");
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x338))(plVar4,3);
      }
      break;
    case 0x25:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x29f3);
      }
      break;
    case 0x28:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x2a1b);
      }
      break;
    case 0x2b:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x2a27);
      }
      break;
    case 0x2c:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x2a32);
      }
      break;
    case 0x31:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButtonExtra>(pRVar5),
         pWVar6 != (WorldMap_ActivityHomeButtonExtra *)0x0)) {
        WorldMap_ActivityHomeButtonExtra::RequestData(pWVar6,0x2a3f);
      }
    }
    LawnApp::KillActivityHomeExtra(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapActivityHomeExtra::ButtonDepress(int) */

void __thiscall
WorldMapActivityHomeExtra::ButtonDepress(WorldMapActivityHomeExtra *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::~WorldMapActivityHomeExtra() */

void __thiscall
WorldMapActivityHomeExtra::~WorldMapActivityHomeExtra(WorldMapActivityHomeExtra *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06866d00;
  *(undefined **)(this + 0xd8) = &DAT_06867088;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_World_Unlock_Pack");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0xe0));
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
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1c0));
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::~unordered_map((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x188));
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::~unordered_map((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x150));
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::~unordered_map((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                    *)(this + 0x118));
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::~unordered_map((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityHomeExtra::~WorldMapActivityHomeExtra() */

void __thiscall
WorldMapActivityHomeExtra::~WorldMapActivityHomeExtra(WorldMapActivityHomeExtra *this)

{
  ~WorldMapActivityHomeExtra(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::PrepareActivityConfig() */

void __thiscall WorldMapActivityHomeExtra::PrepareActivityConfig(WorldMapActivityHomeExtra *this)

{
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  string *psVar1;
  size_t in_x2;
  int local_c;
  long local_8;
  
  this_00 = (unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::clear(this_00);
  local_c = 1;
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x1c0);
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GACHA",in_x2);
  local_c = 0x20;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"LUA_IMAGE_UI_ANNIVERSARY_AND_ICON",in_x2);
  local_c = 0x15;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANT_SPECIAL_OFFER",in_x2);
  local_c = 0x21;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_WORLD_UNLOCK_PACK_ICON_LIGHT",in_x2);
  local_c = 0x1f;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_RECHARGE_BUNDLE",in_x2);
  local_c = 0x28;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LUCKBAG",in_x2);
  local_c = 0x25;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NEWER_PRESENT",in_x2);
  local_c = 0x2b;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NEWRECALL",in_x2);
  local_c = 0x2c;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SECRET_STORE",in_x2);
  local_c = 0x31;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MONTHLY_CARD",in_x2);
  std::vector<int,std::allocator<int>>::clear(this_01);
  local_c = 1;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x20;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x15;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x21;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x1f;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x28;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x25;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x2b;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x2c;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x31;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::InitDangerRoomTutotrial() */

void __thiscall WorldMapActivityHomeExtra::InitDangerRoomTutotrial(WorldMapActivityHomeExtra *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_28;
  string asStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_18[0] = CONCAT44(local_18[0]._4_4_,5);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
             ::find((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                     *)(this + 0xe0),(int *)local_18);
  local_18[0] = FUN_045a6ecc();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_18);
  if (bVar1) {
    lVar5 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_28);
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 != 0) {
      std::string::string(asStack_20,"[ADVICE_GOTO_DANGER_ROOM]");
      Sexy::Insets::Insets((Insets *)local_18);
      lVar5 = GameMaskUI::ShowMask(lVar5,2,asStack_20,(Insets *)local_18);
      std::string::~string(asStack_20);
      nop();
      if (lVar5 != 0) {
        uVar2 = FUN_045a68f0(0xffffff06);
        uVar3 = FUN_045a68f0(0xffffff6a);
        FUN_045a6898(lVar5 + 0x114,uVar2,uVar3);
      }
      goto LAB_045a76dc;
    }
  }
  plVar4 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x348))(plVar4,0x35);
  }
LAB_045a76dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::LayoutItems() */

void __thiscall WorldMapActivityHomeExtra::LayoutItems(WorldMapActivityHomeExtra *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  LotteryResultProgressBar *this_00;
  PVZ2UIButton *pPVar13;
  WorldMap_RechargeBundleButtonExtra *this_01;
  UILimitedGacha *this_02;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *psVar14;
  string *extraout_x1_02;
  string *extraout_x1_03;
  code *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_264;
  PVZ2UIButton *local_260;
  string asStack_258 [8];
  undefined8 local_250;
  string asStack_248 [8];
  Color aCStack_240 [16];
  undefined1 local_230 [3] [16];
  ActiveItem aAStack_1f8 [128];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = (**(code **)(*(long *)this + 0x350))();
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  local_260 = (PVZ2UIButton *)0x0;
  fVar16 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar17 = (float)(**(code **)(*(long *)this + 0x330))(this);
  fVar18 = (float)(**(code **)(*(long *)this + 0x338))(this);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0xe0));
  local_264 = 0;
  Set8BytesTo0(asStack_258);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b151e0);
  iVar5 = FUN_045a68f0(0x14);
  iVar1 = *(int *)(lVar9 + 0x3c);
  if (iVar3 < 1) {
    iVar6 = -1;
  }
  else {
    lVar9 = 0;
    iVar6 = -1;
    do {
      while( true ) {
        piVar10 = (int *)FUN_045a688c(*(undefined8 *)(this + 0x1c0),lVar9);
        local_264 = *piVar10;
        local_250 = std::
                    unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                            *)(this + 0x150),&local_264);
        uVar11 = FUN_045a6f40();
        local_230[0]._0_8_ = uVar11;
        cVar2 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_250,(exception_ptr *)local_230);
        if ((cVar2 == '\0') &&
           (lVar12 = std::__detail::
                     _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                     operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                 *)&local_250), *(char *)(lVar12 + 4) != '\0')) break;
LAB_045a78ec:
        lVar9 = lVar9 + 1;
        if (iVar3 <= (int)lVar9) goto LAB_045a7b94;
      }
      uVar11 = std::
               unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
               ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                             *)(this + 0x118),&local_264);
      thunk_FUN_05475e00(asStack_258,uVar11);
      std::string::string((string *)local_230,"");
      FUN_05462980(auStack_178,(string *)local_230);
      std::string::~string((string *)local_230);
      nop();
      FUN_0544a0a4(auStack_110,0);
      FUN_0545ec84(auStack_168,asStack_258);
      if (local_264 == 1) {
        this_02 = (UILimitedGacha *)FUN_054603b8(auStack_168,&DAT_055a8370);
        UILimitedGacha::GetGachaMainPlantName(this_02);
        Sexy::Upper((Sexy *)aCStack_240,extraout_x1);
        FUN_0545ec84(auStack_168,(string *)local_230);
        std::string::~string((string *)local_230);
        std::string::~string((string *)aCStack_240);
      }
      else if (local_264 == 0x20) {
        FUN_054603b8(auStack_168,&DAT_055a8370);
        std::string::string(asStack_248,"");
        nop();
        iVar7 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar7);
        AnniversaryGeneralConfig::AnniversaryGeneralConfig((AnniversaryGeneralConfig *)local_230);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
        psVar14 = extraout_x1_00;
        if (cVar2 != '\0') {
          iVar7 = PlantChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar7);
          FUN_05474278(asStack_248,aCStack_240);
          std::string::~string((string *)aCStack_240);
          psVar14 = extraout_x1_02;
        }
        Sexy::Upper((Sexy *)asStack_248,psVar14);
        FUN_0545ec84(auStack_168,aCStack_240);
        std::string::~string((string *)aCStack_240);
        AnniversaryGeneralConfig::~AnniversaryGeneralConfig((AnniversaryGeneralConfig *)local_230);
        ActiveItem::~ActiveItem(aAStack_1f8);
        std::string::~string(asStack_248);
      }
      else if (local_264 == 0x15) {
        FUN_054603b8(auStack_168,&DAT_055a8370);
        std::string::string(asStack_248,"");
        nop();
        iVar7 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar7);
        NetworkOfferInfo::NetworkOfferInfo((NetworkOfferInfo *)local_230);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
        psVar14 = extraout_x1_01;
        if (cVar2 != '\0') {
          iVar7 = PlantNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar7);
          FUN_05474278(asStack_248,aCStack_240);
          std::string::~string((string *)aCStack_240);
          psVar14 = extraout_x1_03;
        }
        Sexy::Upper((Sexy *)asStack_248,psVar14);
        FUN_0545ec84(auStack_168,aCStack_240);
        std::string::~string((string *)aCStack_240);
        NetworkOfferInfo::~NetworkOfferInfo((NetworkOfferInfo *)local_230);
        ActiveItem::~ActiveItem(aAStack_1f8);
        std::string::~string(asStack_248);
      }
      FUN_05462824((string *)local_230,auStack_178);
      this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_230,false);
      std::string::~string((string *)local_230);
      if ((this_00 == (LotteryResultProgressBar *)0x0) &&
         (this_00 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14fa8),
         this_00 == (LotteryResultProgressBar *)0x0)) goto LAB_045a78ec;
      iVar6 = iVar6 + 1;
      if (local_264 == 0x1f) {
        this_01 = ::operator_new(0x300);
        WorldMap_RechargeBundleButtonExtra::WorldMap_RechargeBundleButtonExtra
                  (this_01,local_264,(ButtonListener *)(this + 0xd8));
        this[0x1e0] = (WorldMapActivityHomeExtra)0x1;
        local_260 = (PVZ2UIButton *)this_01;
      }
      else {
        FUN_05478178(aCStack_240,&DAT_056f11a8,asStack_248);
        Sexy::Color::Color((Color *)local_230,1);
        pPVar13 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar13,local_264,(ButtonListener *)(this + 0xd8),(wstring *)aCStack_240,
                   (Color *)local_230);
        local_260 = pPVar13;
        FUN_05476c50(aCStack_240);
        nop();
      }
      pPVar13 = local_260;
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_230,this_00,1);
      Sexy::Color::Color(aCStack_240,0x5a,0x5a,0x5a);
      PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)local_230,aCStack_240);
      pPVar13 = local_260;
      pcVar15 = *(code **)(*(long *)local_260 + 0x198);
      iVar7 = FUN_045a68f0(8);
      uVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
      uVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
      (*pcVar15)(pPVar13,(int)fVar16,iVar7 + (iVar5 + iVar1) * (iVar6 / 5),uVar4,uVar8);
      if (iVar6 % 5 == 4) {
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        fVar16 = fVar16 + fVar18 + (float)iVar7;
        if ((float)*(int *)(this + 0x1d8) < fVar16) {
          *(int *)(this + 0x1d8) = (int)fVar16;
        }
        fVar16 = (float)(**(code **)(*(long *)this + 0x328))(this);
      }
      else {
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        fVar16 = fVar16 + fVar17 + (float)iVar7;
      }
      lVar9 = lVar9 + 1;
      (**(code **)(*(long *)this + 0x60))(this,local_260);
      local_230[0] = std::make_pair<int&,PVZ2UIButton*&>(&local_264,&local_260);
      std::
      unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
      ::insert<std::pair<int,PVZ2UIButton*>,void>
                ((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                  *)(this + 0xe0),(pair *)local_230);
    } while ((int)lVar9 < iVar3);
LAB_045a7b94:
    if (3 < iVar6) goto LAB_045a7bb0;
  }
  *(int *)(this + 0x1d8) = (int)((fVar18 - fVar17) + fVar16);
LAB_045a7bb0:
  uVar4 = (**(code **)(*(long *)this + 0x348))(this);
  *(undefined4 *)(this + 0x1dc) = uVar4;
  std::string::~string(asStack_258);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::FillState() */

void __thiscall WorldMapActivityHomeExtra::FillState(WorldMapActivityHomeExtra *this)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  bool local_b6;
  bool local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = 0;
  iVar4 = (**(code **)(*(long *)this + 0x350))();
  local_b6 = false;
  local_b5 = false;
  if (0 < iVar4) {
    do {
      local_b6 = false;
      local_b5 = false;
      piVar6 = (int *)FUN_045a688c(*(undefined8 *)(this + 0x1c0),lVar9);
      local_b4 = *piVar6;
      switch(local_b4) {
      case 1:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 != '\0') {
          local_b6 = true;
        }
        local_b5 = false;
        iVar5 = LawnApp::GetPlatform(gLawnApp);
        if (((iVar5 == 6) || (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 1)) ||
           (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 0x70)) {
          local_b6 = false;
        }
        else {
          iVar5 = LawnApp::GetPlatform(gLawnApp);
          if (iVar5 == 0x39) {
            local_b6 = false;
          }
        }
      case 0x29:
switchD_045a7f44_caseD_29:
        break;
      default:
        goto switchD_045a7f44_caseD_2;
      case 0x15:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        goto LAB_045a80a4;
      case 0x1f:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 == '\0') goto switchD_045a7f44_caseD_29;
        local_b5 = false;
        local_b6 = true;
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        RechargeRewardItem::RechargeRewardItem((RechargeRewardItem *)&local_b0);
        cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_b0);
        uVar2 = local_a8;
        uVar8 = local_b5;
        if (cVar3 != '\0') {
          lVar7 = FUN_045a6860(local_a8,local_a0);
          lVar10 = 0;
          uVar8 = local_b5;
          while (lVar10 != lVar7) {
            lVar1 = lVar10 + 1;
            piVar6 = (int *)FUN_045a688c(uVar2,lVar10);
            lVar10 = lVar1;
            if (*piVar6 == 1) {
              uVar8 = 1;
            }
          }
        }
        local_b5 = (bool)uVar8;
        RechargeRewardItem::~RechargeRewardItem((RechargeRewardItem *)&local_b0);
        ActiveItem::~ActiveItem(aAStack_88);
        break;
      case 0x20:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 != '\0') {
          local_b6 = true;
          local_b5 = true;
        }
        iVar5 = LawnApp::GetPlatform(gLawnApp);
        if ((((iVar5 != 0xa5) && (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 != 8)) &&
            (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 != 0xb)) &&
           (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 != 6)) goto switchD_045a7f44_caseD_29;
        local_b6 = false;
        local_b5 = false;
        break;
      case 0x21:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
LAB_045a80a4:
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 == '\0') goto switchD_045a7f44_caseD_29;
        local_b6 = true;
        local_b5 = true;
        break;
      case 0x25:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b6 = true;
        }
        goto LAB_045a8084;
      case 0x28:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 == '\0') goto switchD_045a7f44_caseD_29;
        local_b5 = false;
        local_b6 = true;
        break;
      case 0x2b:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b6 = true;
        }
        goto LAB_045a8084;
      case 0x2c:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b6 = true;
        }
LAB_045a8084:
        local_b5 = false;
        ActiveItem::~ActiveItem(aAStack_88);
        break;
      case 0x31:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b6 = true;
        }
        local_b5 = false;
        ActiveItem::~ActiveItem(aAStack_88);
      }
      local_b0 = std::make_pair<int&,bool>(&local_b4,&local_b6);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x150),(pair *)&local_b0);
      local_b0 = std::make_pair<int&,bool>(&local_b4,&local_b5);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x188),(pair *)&local_b0);
switchD_045a7f44_caseD_2:
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::WorldMapActivityHomeExtra(int) */

void __thiscall
WorldMapActivityHomeExtra::WorldMapActivityHomeExtra(WorldMapActivityHomeExtra *this,int param_1)

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
  *(undefined ***)this = &PTR_GetClass_06866d00;
  *(undefined **)(this + 0xd8) = &DAT_06867088;
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::unordered_map((ulong)(this + 0xe0),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::unordered_map((ulong)(this + 0x118),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x150),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x188),(hash *)0xa,aeStack_20,aaStack_18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_World_Unlock_Pack");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
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
  *(undefined4 *)(this + 0x1d8) = 0;
  this[0x1e0] = (WorldMapActivityHomeExtra)0x0;
  this[0x1e1] = (WorldMapActivityHomeExtra)0x0;
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
/* WorldMapActivityHomeExtra::Draw(Sexy::Graphics*) */

void __thiscall WorldMapActivityHomeExtra::Draw(WorldMapActivityHomeExtra *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_045a68f0(0x14);
  iVar1 = *(int *)(this + 0x1dc);
  nop();
  iVar3 = FUN_045a68f0(0);
  iVar4 = FUN_045a68f0(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,*(int *)(this + 0x1d8),iVar1 - iVar2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b151e0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHomeExtra::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
WorldMapActivityHomeExtra::DrawAll
          (WorldMapActivityHomeExtra *this,ModalFlags *param_1,Graphics *param_2)

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
LAB_045a8650:
    do {
      piVar7 = (int *)FUN_045a688c(*(undefined8 *)(this + 0x1c0),lVar10);
      local_24 = *piVar7;
      local_20 = std::
                 unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                 ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                         *)(this + 0x188),&local_24);
      local_10 = FUN_045a6f40();
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
                           *)(this + 0xe0),&local_24);
        local_10 = FUN_045a6ecc();
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
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15060);
            iVar6 = FUN_045a68f0(0x10);
            Sexy::Graphics::DrawImage(param_2,pIVar9,iVar2 - iVar6,iVar1);
            if (iVar5 <= (int)lVar10) break;
            goto LAB_045a8650;
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

