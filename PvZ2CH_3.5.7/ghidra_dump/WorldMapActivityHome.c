// Class: WorldMapActivityHome


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::GetAssociatedMainWidget() */

void WorldMapActivityHome::GetAssociatedMainWidget(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapActivityHomeButton");
  uVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldMapActivityHome::GetItemCount() */

void __thiscall WorldMapActivityHome::GetItemCount(WorldMapActivityHome *this)

{
  FUN_045a2830(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
  return;
}


/* WorldMapActivityHome::GetItemRightMargin() */

float WorldMapActivityHome::GetItemRightMargin(void)

{
  int iVar1;
  
  iVar1 = FUN_045a2934(0x10);
  return (float)iVar1;
}


/* WorldMapActivityHome::GetPanelHeight() */

int __thiscall WorldMapActivityHome::GetPanelHeight(WorldMapActivityHome *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = std::
          unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
          ::size((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                  *)(this + 0xe0));
  iVar2 = (**(code **)(*(long *)this + 0x340))(this);
  return iVar2 + ((iVar1 + -1) / 5) * iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::InitView() */

void __thiscall WorldMapActivityHome::InitView(WorldMapActivityHome *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined4 local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x370))();
  if (-1 < iVar1) {
    uVar2 = FUN_045a2934(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar2,uVar2,*(undefined4 *)(this + 0x1d8),*(undefined4 *)(this + 0x1dc));
    plVar4 = (long *)(**(code **)(*(long *)this + 0x358))(this);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb0))(&local_10);
      pcVar6 = *(code **)(*(long *)this + 0x1a8);
      iVar1 = FUN_045a2934(0x14);
      lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14f18);
      iVar3 = FUN_045a2934(10);
      (*pcVar6)(this,local_10,
                (int)(((float)local_c - (float)iVar3) +
                     (float)(iVar1 + *(int *)(lVar5 + 0x3c)) * 0.5));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityHome::GetBaseHeight() */

int WorldMapActivityHome::GetBaseHeight(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14f18);
  iVar1 = FUN_045a2934(0x14);
  return iVar1 + *(int *)(lVar2 + 0x3c);
}


/* WorldMapActivityHome::ButtonPress(int) */

void WorldMapActivityHome::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapActivityHome::ButtonPress(int) */

void __thiscall WorldMapActivityHome::ButtonPress(WorldMapActivityHome *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::ButtonDepress(int) */

void __thiscall WorldMapActivityHome::ButtonDepress(WorldMapActivityHome *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  char *pcVar3;
  RtObject *pRVar4;
  WorldMap_ActivityHomeButton *pWVar5;
  FestivalManager *this_01;
  UIWidget *this_02;
  LevelOfTheDaySystem *pLVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_045a281c(*(undefined4 *)(lVar2 + 0x40));
  if ((iVar1 != 0x35) || (param_1 == 5)) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    switch(param_1) {
    case 0:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2975);
      }
      break;
    case 1:
      UILimitedGacha::createWithNetwork();
      break;
    case 2:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2978);
      }
      break;
    case 3:
      std::string::string(asStack_10,"OpenAnniversaryUI");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
      break;
    case 4:
      LawnApp::ShowGeilivableLottery(SUB81(gLawnApp,0));
      break;
    case 5:
      if (iVar1 == 0x35) {
        LawnApp::KillGameMaskUI(gLawnApp);
      }
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x297e);
      }
      break;
    case 6:
      UIRedPacket::create(1,0);
      break;
    case 7:
      std::string::string(asStack_10,"OpenSpringShopUI");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
      break;
    case 8:
      std::string::string(asStack_10,"OpenDinosaurDanger");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
      break;
    case 9:
      std::string::string(asStack_10,"OpenPlantTreeMain");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
      break;
    case 10:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2990);
      }
      break;
    case 0xb:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2994);
      }
      break;
    case 0xc:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        pLVar6 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
        LevelOfTheDaySystem::setCurLotdAcType(pLVar6,2);
        LawnApp::ShowLevelofDayEntrance(gLawnApp);
      }
      break;
    case 0xd:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        pLVar6 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
        LevelOfTheDaySystem::setCurLotdAcType(pLVar6,3);
        UISingletonDialog<TimeTravelSelEntranceUI>::ShowDialog();
      }
      break;
    case 0xe:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x299a);
      }
      break;
    case 0xf:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29a5);
      }
      break;
    case 0x10:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a02);
      }
      break;
    case 0x11:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x299c);
      }
      break;
    case 0x13:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29b5);
      }
      break;
    case 0x14:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a53);
      }
      break;
    case 0x15:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29c0);
      }
      break;
    case 0x16:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29a6);
      }
      break;
    case 0x17:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29c4);
      }
      break;
    case 0x18:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29c2);
      }
      break;
    case 0x19:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29c5);
      }
      break;
    case 0x1a:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29cc);
      }
      break;
    case 0x1b:
      std::string::string(asStack_10,"UIWorldMapStarConvertButton");
      this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (this_02 != (UIWidget *)0x0) {
        UIWidget::SetVisible(this_02,false);
      }
      GameStateMgr::ShowJoustDashboardScreen(gGameStateMgr);
      break;
    case 0x1c:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29d1);
      }
      break;
    case 0x1d:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29d4);
      }
      break;
    case 0x1e:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a31);
      }
      break;
    case 0x22:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29d6);
      }
      break;
    case 0x23:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29d7);
      }
      break;
    case 0x24:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29f8);
      }
      break;
    case 0x26:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29fd);
      }
      break;
    case 0x27:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x29f5);
      }
      break;
    case 0x2a:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a26);
      }
      break;
    case 0x2d:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a38);
      }
      break;
    case 0x2e:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a33);
      }
      break;
    case 0x2f:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a3a);
      }
      break;
    case 0x30:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a39);
      }
      break;
    case 0x32:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2a45);
      }
      break;
    case 0x33:
      pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar4 != (RtObject *)0x0) &&
         (pWVar5 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(pRVar4),
         pWVar5 != (WorldMap_ActivityHomeButton *)0x0)) {
        this_01 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
        FestivalManager::FestivalInit(this_01);
        WorldMap_ActivityHomeButton::RequestData(pWVar5,0x2970);
      }
    }
    LawnApp::KillActivityHome(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapActivityHome::ButtonDepress(int) */

void __thiscall WorldMapActivityHome::ButtonDepress(WorldMapActivityHome *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::~WorldMapActivityHome() */

void __thiscall WorldMapActivityHome::~WorldMapActivityHome(WorldMapActivityHome *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068668e0;
  *(undefined **)(this + 0xd8) = &DAT_06866c68;
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


/* WorldMapActivityHome::~WorldMapActivityHome() */

void __thiscall WorldMapActivityHome::~WorldMapActivityHome(WorldMapActivityHome *this)

{
  ~WorldMapActivityHome(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::PrepareActivityConfig() */

void __thiscall WorldMapActivityHome::PrepareActivityConfig(WorldMapActivityHome *this)

{
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  string *psVar1;
  undefined *__n;
  int local_c;
  long local_8;
  
  __n = &__stack_chk_guard;
  this_00 = (unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::clear(this_00);
  local_c = 1;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GACHA",(size_t)__n);
  local_c = 2;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GACHA",(size_t)__n);
  local_c = 3;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANT",(size_t)__n);
  local_c = 4;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DRAW_DOLL",(size_t)__n);
  local_c = 5;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_ENDLESS_CHALLENGE",(size_t)__n);
  local_c = 6;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_RED_PACKET",(size_t)__n);
  local_c = 7;
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x1c0);
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SPRING_SHOP",(size_t)__n);
  local_c = 8;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DINO_CRISIS",(size_t)__n);
  local_c = 9;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANTTREE",(size_t)__n);
  local_c = 10;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_CHILDRENDAY",(size_t)__n);
  local_c = 0xb;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_CHILDRENDAY2018",(size_t)__n);
  local_c = 0xc;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_SUMMSEREVENT",(size_t)__n);
  local_c = 0xd;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_TIMETRAVEL",(size_t)__n);
  local_c = 0xe;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MODERN_WECHAT",(size_t)__n);
  local_c = 0xf;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NATIONAL_HOLIDAY",(size_t)__n);
  local_c = 0x10;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MINI_GAME",(size_t)__n);
  local_c = 0x11;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_DAVECLUB",(size_t)__n);
  local_c = 0x13;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_CHRISMAS_EVENT",(size_t)__n);
  local_c = 0x14;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_FESTIVAL_EVENT",(size_t)__n);
  local_c = 0x15;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANT_SPECIAL_OFFER",(size_t)__n);
  local_c = 0x16;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PRERECHARGEAWARD",(size_t)__n);
  local_c = 0x17;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_WORLDCUP",(size_t)__n);
  local_c = 0x18;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DRAGONBOAT",(size_t)__n);
  local_c = 0x19;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_EXP_PLANT",(size_t)__n);
  local_c = 0x1a;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NATIONAL_HOLIDAY",(size_t)__n);
  local_c = 0x1b;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_JOUST",(size_t)__n);
  local_c = 0x1c;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_5TH_EVENT",(size_t)__n);
  local_c = 0x1d;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_WEBGAME",(size_t)__n);
  local_c = 0x1e;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LIMIT_LOTTERY",(size_t)__n);
  local_c = 0x22;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DAILY_SIGN",(size_t)__n);
  local_c = 0x23;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NEWYEAR_2018",(size_t)__n);
  local_c = 0;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_BOSSCHALLENGE",(size_t)__n);
  local_c = 0x24;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_QUEST",(size_t)__n);
  local_c = 0x26;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DAVETREASURE",(size_t)__n);
  local_c = 0x27;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_RECHARGEREWARD",(size_t)__n);
  local_c = 0x2a;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_HAPPYVASEBREAKER",(size_t)__n);
  local_c = 0x2d;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_PLANT_ADVENTURE",(size_t)__n);
  local_c = 0x2e;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PENNYGUIDE",(size_t)__n);
  local_c = 0x2f;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_ANNIVERSARY_TREASURE",(size_t)__n)
  ;
  local_c = 0x30;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MYSTERY_STORE",(size_t)__n);
  local_c = 0x32;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_FIGHT_ZODIAC",(size_t)__n);
  local_c = 0x33;
  psVar1 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,&local_c);
  std::string::append(psVar1,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_CHALLENGE",(size_t)__n);
  std::vector<int,std::allocator<int>>::clear(this_01);
  local_c = 9;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 10;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0xb;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 5;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 1;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 3;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 6;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 7;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 4;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0xc;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0xd;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0xe;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0xf;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x10;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x11;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x13;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x14;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x15;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x16;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x17;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x18;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x19;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x1a;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x1b;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x1c;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x1d;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x1e;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x22;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x23;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x24;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x26;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x27;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x2a;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x2d;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x2e;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x2f;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x30;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x32;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  local_c = 0x33;
  std::vector<int,std::allocator<int>>::push_back(this_01,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::InitDangerRoomTutotrial() */

void __thiscall WorldMapActivityHome::InitDangerRoomTutotrial(WorldMapActivityHome *this)

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
  local_18[0] = FUN_045a2fc0();
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
        uVar2 = FUN_045a2934(0xffffff06);
        uVar3 = FUN_045a2934(0xffffff6a);
        FUN_045a28dc(lVar5 + 0x114,uVar2,uVar3);
      }
      goto LAB_045a4914;
    }
  }
  plVar4 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x348))(plVar4,0x35);
  }
LAB_045a4914:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::InitJoustTutotrial() */

void __thiscall WorldMapActivityHome::InitJoustTutotrial(WorldMapActivityHome *this)

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
  
  local_18[0] = CONCAT44(local_18[0]._4_4_,0x1b);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
             ::find((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                     *)(this + 0xe0),(int *)local_18);
  local_18[0] = FUN_045a2fc0();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_18);
  if (bVar1) {
    lVar5 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_28);
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 != 0) {
      std::string::string(asStack_20,"");
      Sexy::Insets::Insets((Insets *)local_18);
      lVar5 = GameMaskUI::ShowMask(lVar5,2,asStack_20,(Insets *)local_18);
      std::string::~string(asStack_20);
      nop();
      if (lVar5 != 0) {
        uVar2 = FUN_045a2934(0xffffff06);
        uVar3 = FUN_045a2934(0xffffff6a);
        FUN_045a28dc(lVar5 + 0x114,uVar2,uVar3);
      }
      goto LAB_045a4a50;
    }
  }
  plVar4 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x348))(plVar4,0x23);
  }
LAB_045a4a50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WorldMapActivityHome::LayoutItems() */

void __thiscall WorldMapActivityHome::LayoutItems(WorldMapActivityHome *this)

{
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  LotteryResultProgressBar *this_00;
  PVZ2UIButton *pPVar14;
  UILimitedGacha *this_01;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar15;
  string *extraout_x1_01;
  code *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  string *local_298;
  int local_284;
  undefined1 auStack_270 [4];
  int local_26c;
  PVZ2UIButton *local_268;
  string asStack_260 [8];
  undefined8 local_258;
  string asStack_250 [8];
  string asStack_248 [8];
  Color aCStack_240 [16];
  undefined1 local_230 [2] [16];
  string asStack_210 [24];
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = (**(code **)(*(long *)this + 0x350))();
  uVar6 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar6);
  local_268 = (PVZ2UIButton *)0x0;
  fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar18 = (float)(**(code **)(*(long *)this + 0x330))(this);
  fVar19 = (float)(**(code **)(*(long *)this + 0x338))(this);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0xe0));
  local_26c = 0;
  Set8BytesTo0(asStack_260);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14f18);
  iVar7 = FUN_045a2934(0x14);
  iVar1 = *(int *)(lVar10 + 0x3c);
  if (iVar5 < 1) {
    local_284 = -1;
  }
  else {
    local_284 = -1;
    lVar10 = 0;
    do {
      while( true ) {
        piVar11 = (int *)FUN_045a2860(*(undefined8 *)(this + 0x1c0),lVar10);
        local_26c = *piVar11;
        local_258 = std::
                    unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                            *)(this + 0x150),&local_26c);
        uVar12 = FUN_045a3068();
        local_230[0]._0_8_ = uVar12;
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_258,(exception_ptr *)local_230);
        if ((cVar3 != '\0') ||
           (lVar13 = std::__detail::
                     _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                     operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                 *)&local_258), *(char *)(lVar13 + 4) == '\0')) break;
        uVar12 = std::
                 unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                 ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                               *)(this + 0x118),&local_26c);
        thunk_FUN_05475e00(asStack_260,uVar12);
        std::string::string((string *)local_230,"");
        FUN_05462980(auStack_178,(string *)local_230);
        std::string::~string((string *)local_230);
        nop();
        FUN_0544a0a4(auStack_110,0);
        FUN_0545ec84(auStack_168,asStack_260);
        if (local_26c == 1) {
          this_01 = (UILimitedGacha *)FUN_054603b8(auStack_168,&DAT_055a8370);
          UILimitedGacha::GetGachaMainPlantName(this_01);
          Sexy::Upper((Sexy *)aCStack_240,extraout_x1);
          FUN_0545ec84(auStack_168,(string *)local_230);
          std::string::~string((string *)local_230);
          std::string::~string((string *)aCStack_240);
        }
        else if (local_26c == 3) {
          std::string::string(asStack_250,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SUBENTRY_4");
          nop();
          std::string::string((string *)aCStack_240,"Anniversary/icon_res");
          FUN_05475d88((string *)local_230,asStack_250);
          GetLuaSharedData<std::string>(asStack_248,aCStack_240,(string *)local_230);
          std::string::~string((string *)local_230);
          std::string::~string((string *)aCStack_240);
          nop();
          cVar3 = FUN_0547419c(asStack_248);
          pLVar2 = gLawnApp;
          if (cVar3 == '\0') {
            std::string::string((string *)aCStack_240,"LUA_UI_Anniversary");
            cVar3 = LawnApp::IsGroupLoadComplete(pLVar2,(string *)aCStack_240);
            pLVar2 = gLawnApp;
            bVar4 = 0;
            if (cVar3 == '\0') {
              std::string::string((string *)local_230,"UPDATE_UI_Anniversary");
              bVar4 = LawnApp::IsGroupLoadComplete(pLVar2,(string *)local_230);
              bVar4 = bVar4 ^ 1;
              std::string::~string((string *)local_230);
              nop();
            }
            std::string::~string((string *)aCStack_240);
            nop();
            if (bVar4 != 0) goto LAB_045a531c;
          }
          else {
LAB_045a531c:
            thunk_FUN_05475e00(asStack_248,asStack_250);
          }
          FUN_05462980(auStack_178,asStack_248);
          std::string::~string(asStack_248);
          std::string::~string(asStack_250);
        }
        else if (local_26c == 0x15) {
          FUN_054603b8(auStack_168,&DAT_055a8370);
          std::string::string(asStack_248,"");
          nop();
          iVar8 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar8);
          NetworkOfferInfo::NetworkOfferInfo((NetworkOfferInfo *)local_230);
          cVar3 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
          psVar15 = extraout_x1_00;
          if (cVar3 != '\0') {
            iVar8 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar8);
            FUN_05474278(asStack_248,aCStack_240);
            std::string::~string((string *)aCStack_240);
            psVar15 = extraout_x1_01;
          }
          Sexy::Upper((Sexy *)asStack_248,psVar15);
          FUN_0545ec84(auStack_168,aCStack_240);
          std::string::~string((string *)aCStack_240);
          NetworkOfferInfo::~NetworkOfferInfo((NetworkOfferInfo *)local_230);
          ActiveItem::~ActiveItem(aAStack_1f8);
          std::string::~string(asStack_248);
        }
        else if (local_26c == 0x14) {
          iVar8 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar8);
          cVar3 = FUN_045a2824(local_1f0);
          if ((cVar3 != '\0') && (local_1e0 != '\0')) {
            NetworkFestivalEntryInfo::NetworkFestivalEntryInfo
                      ((NetworkFestivalEntryInfo *)local_230);
            cVar3 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
            if ((cVar3 != '\0') && (lVar13 = StringHelper::ToImage(asStack_210,false), lVar13 != 0))
            {
              FUN_05462980(auStack_178,asStack_210);
            }
            NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo
                      ((NetworkFestivalEntryInfo *)local_230);
          }
          ActiveItem::~ActiveItem(aAStack_1f8);
        }
        local_298 = asStack_248;
        FUN_05462824((string *)local_230,auStack_178);
        this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_230,false);
        std::string::~string((string *)local_230);
        if (this_00 == (LotteryResultProgressBar *)0x0) {
          this_00 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14e08);
          FUN_05462824((string *)local_230,auStack_178);
          uVar12 = FUN_0547429c((string *)local_230);
          Sexy::OutputDebugStrF((wchar_t *)"Worldmap Activity Home normalimage str : %s",uVar12);
          std::string::~string((string *)local_230);
          std::string::string(local_298,"WorlMapActivityHome");
          FUN_05462824((string *)aAStack_1f8,auStack_178);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)local_230,
                     (string *)aAStack_1f8,1,auStack_270);
          std::string::string((string *)aCStack_240,"");
          BehaviorLog::inGameBehavior(local_298,(vector *)local_230,(string *)aCStack_240);
          std::string::~string((string *)aCStack_240);
          nop();
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)local_230);
          std::string::~string((string *)aAStack_1f8);
          std::string::~string(local_298);
          nop();
          if (this_00 == (LotteryResultProgressBar *)0x0) break;
        }
        local_284 = local_284 + 1;
        FUN_05478178(aCStack_240,&DAT_056f11a8,local_298);
        Sexy::Color::Color((Color *)local_230,1);
        pPVar14 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar14,local_26c,(ButtonListener *)(this + 0xd8),(wstring *)aCStack_240,
                   (Color *)local_230);
        local_268 = pPVar14;
        FUN_05476c50(aCStack_240);
        nop();
        pPVar14 = local_268;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_230,this_00,1);
        Sexy::Color::Color(aCStack_240,0x5a,0x5a,0x5a);
        PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)local_230,aCStack_240);
        pPVar14 = local_268;
        pcVar16 = *(code **)(*(long *)local_268 + 0x198);
        iVar8 = FUN_045a2934(8);
        uVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        uVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
        (*pcVar16)(pPVar14,(int)fVar17,iVar8 + (iVar7 + iVar1) * (local_284 / 5),uVar6,uVar9);
        if (local_284 % 5 == 4) {
          iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_00);
          fVar17 = fVar17 + fVar19 + (float)iVar8;
          if ((float)*(int *)(this + 0x1d8) < fVar17) {
            *(int *)(this + 0x1d8) = (int)fVar17;
          }
          fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
        }
        else {
          iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_00);
          fVar17 = fVar17 + fVar18 + (float)iVar8;
        }
        lVar10 = lVar10 + 1;
        (**(code **)(*(long *)this + 0x60))(this,local_268);
        local_230[0] = std::make_pair<int&,PVZ2UIButton*&>(&local_26c,&local_268);
        std::
        unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
        ::insert<std::pair<int,PVZ2UIButton*>,void>
                  ((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0xe0),(pair *)local_230);
        if (iVar5 <= (int)lVar10) goto LAB_045a5170;
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar5);
LAB_045a5170:
    if (3 < local_284) goto LAB_045a518c;
  }
  *(int *)(this + 0x1d8) = (int)((fVar19 - fVar18) + fVar17);
LAB_045a518c:
  uVar6 = (**(code **)(*(long *)this + 0x348))(this);
  *(undefined4 *)(this + 0x1dc) = uVar6;
  std::string::~string(asStack_260);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_284);
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::FillState() */

void __thiscall WorldMapActivityHome::FillState(WorldMapActivityHome *this)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  PennyTaskManager *this_00;
  PlayerInfo *pPVar7;
  HappyVaseBreakerTaskManager *this_01;
  DaveTaskManager *this_02;
  TravelLogManager *this_03;
  long lVar8;
  wchar_t *pwVar9;
  ulong uVar10;
  char *__s;
  ulong uVar11;
  long lVar12;
  bool local_166;
  bool local_165;
  int local_164;
  string asStack_160 [8];
  undefined8 local_158;
  int local_150;
  int local_14c;
  int local_148;
  char local_144;
  ActiveItem aAStack_108 [24];
  char local_f0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = (**(code **)(*(long *)this + 0x350))();
  local_166 = false;
  local_165 = false;
  if (0 < iVar4) {
    pcVar1 = "Fill States HomeTimeTravelActivity : open is %d, attach is %d";
    lVar12 = 0;
    do {
      local_166 = false;
      local_165 = false;
      piVar6 = (int *)FUN_045a2860(*(undefined8 *)(this + 0x1c0),lVar12);
      local_164 = *piVar6;
      switch(local_164) {
      case 0:
        cVar2 = BossChallenge::IsOpened();
        if (cVar2 != '\0') {
          local_166 = true;
        }
        cVar2 = BossChallenge::IsHaveNewTips();
        if (cVar2 == '\0') goto LAB_045a5798;
        goto LAB_045a6008;
      case 1:
        iVar5 = LawnApp::GetPlatform(gLawnApp);
        if (((iVar5 == 6) || (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 1)) ||
           (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 0x70)) {
          local_166 = false;
        }
        else {
          iVar5 = LawnApp::GetPlatform(gLawnApp);
          if (iVar5 == 0x39) {
            local_166 = false;
          }
        }
        goto switchD_045a5754_caseD_3;
      case 2:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_f0 == '\0') {
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          cVar2 = local_70;
          ActiveItem::~ActiveItem(aAStack_88);
          ActiveItem::~ActiveItem(aAStack_108);
          if (cVar2 != '\0') goto LAB_045a5ff0;
        }
        else {
          ActiveItem::~ActiveItem(aAStack_108);
LAB_045a5ff0:
          local_166 = true;
        }
        cVar2 = WorldMap_ActivityHomeButtonExtra::CheckFirstRechargeActivityTips();
        goto joined_r0x045a6080;
      case 3:
      case 0x15:
        goto switchD_045a5754_caseD_3;
      case 4:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar2 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if ((cVar2 == '\0') || (cVar2 = LawnApp::IsChannelWithBigDeal(), cVar2 == '\0')) {
          cVar2 = WorldMap_ActivityHomeButton::CheckDrawDollActivityTips();
        }
        else {
          local_166 = true;
          cVar2 = WorldMap_ActivityHomeButton::CheckDrawDollActivityTips();
        }
joined_r0x045a6080:
        if (cVar2 == '\0') goto switchD_045a5754_caseD_3;
LAB_045a6008:
        local_165 = true;
        goto LAB_045a5798;
      case 5:
        Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        cVar2 = DangerRoomManager::IsOpened();
        if (cVar2 != '\0') {
          local_166 = true;
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          iVar5 = ActiveItem::GetLeftDays(aAStack_88);
          if (-1 < iVar5) {
            local_165 = true;
          }
          break;
        }
        goto switchD_045a5754_caseD_3;
      case 6:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
        }
        pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
        std::string::string(asStack_160,"mat_redpacket_b");
        iVar5 = PlayerInfo::GetMaterialNum(pPVar7,asStack_160);
        if (iVar5 < 1) {
          std::string::string((string *)&local_158,"mat_redpacket_s");
          iVar5 = PlayerInfo::GetMaterialNum(pPVar7,(string *)&local_158);
          std::string::~string((string *)&local_158);
          nop();
          std::string::~string(asStack_160);
          nop();
          if (iVar5 < 1) goto LAB_045a5ab4;
        }
        else {
          std::string::~string(asStack_160);
          nop();
        }
        local_165 = true;
        goto LAB_045a5ab4;
      case 7:
        std::string::string((string *)&local_158,"SpringShop/active");
        bVar3 = GetLuaSharedData<bool>((string *)&local_158,false);
        std::string::~string((string *)&local_158);
        nop();
        if (bVar3) {
          local_166 = true;
        }
        __s = "SpringShop/warning";
        goto LAB_045a5f34;
      case 8:
        std::string::string((string *)&local_158,"DinosaurDanger/active");
        bVar3 = GetLuaSharedData<bool>((string *)&local_158,false);
        std::string::~string((string *)&local_158);
        nop();
        if (bVar3) {
          local_166 = true;
        }
        __s = "DinosaurDanger/warning";
LAB_045a5f34:
        std::string::string((string *)&local_158,__s);
        bVar3 = GetLuaSharedData<bool>((string *)&local_158,false);
        std::string::~string((string *)&local_158);
        nop();
        if (bVar3) goto LAB_045a6008;
        goto LAB_045a5798;
      case 9:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        local_166 = false;
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_045a5798;
      case 10:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        goto LAB_045a5e6c;
      case 0xb:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
LAB_045a5e6c:
        ActivityManager::GetActiveItem(iVar5);
        LevelofTheDayActivityInfo::LevelofTheDayActivityInfo
                  ((LevelofTheDayActivityInfo *)&local_158);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_158);
        if ((cVar2 == '\0') ||
           (Sexy::OutputDebugStrF
                      ((wchar_t *)"Fill States HomeChildrenDayActivity, GetDataSerialized passed"),
           local_70 == '\0')) {
          uVar10 = (ulong)local_166;
          uVar11 = (ulong)local_165;
        }
        else {
          local_166 = true;
          if (((local_150 < 8) && (0 < local_148)) && (local_14c == 0)) {
            uVar11 = 1;
            local_165 = true;
            uVar10 = 1;
          }
          else {
            uVar11 = (ulong)local_165;
            uVar10 = 1;
          }
        }
        pwVar9 = (wchar_t *)"Fill States HomeChildrenDayActivity : open is %d, attach is %d";
        goto LAB_045a5dfc;
      case 0xc:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        LevelofTheDayActivityInfo::LevelofTheDayActivityInfo
                  ((LevelofTheDayActivityInfo *)&local_158);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_158);
        if ((cVar2 == '\0') ||
           (Sexy::OutputDebugStrF
                      ((wchar_t *)"Fill States HomeChildrenDayActivity, GetDataSerialized passed"),
           local_70 == '\0')) {
          uVar10 = (ulong)local_166;
          uVar11 = (ulong)local_165;
        }
        else {
          local_166 = true;
          if (((local_150 < 8) && (0 < local_148)) && (local_14c == 0)) {
            uVar11 = 1;
            local_165 = true;
            uVar10 = 1;
          }
          else {
            uVar11 = (ulong)local_165;
            uVar10 = 1;
          }
        }
        pwVar9 = (wchar_t *)"Fill States HomeSummerEventActivity : open is %d, attach is %d";
        goto LAB_045a5dfc;
      case 0xd:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        LevelofTheDayActivityInfo::LevelofTheDayActivityInfo
                  ((LevelofTheDayActivityInfo *)&local_158);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_158);
        pwVar9 = (wchar_t *)pcVar1;
        if ((cVar2 == '\0') ||
           (Sexy::OutputDebugStrF
                      ((wchar_t *)"Fill States HomeTimeTravelActivity, GetDataSerialized passed"),
           local_70 == '\0')) {
          uVar10 = (ulong)local_166;
          uVar11 = (ulong)local_165;
        }
        else {
          local_166 = true;
          if (((local_150 < 8) && (0 < local_148)) && (local_14c == 0)) {
            uVar11 = 1;
            local_165 = true;
            uVar10 = 1;
          }
          else {
            uVar11 = (ulong)local_165;
            uVar10 = 1;
          }
        }
LAB_045a5dfc:
        Sexy::OutputDebugStrF(pwVar9,uVar10,uVar11);
        LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo
                  ((LevelofTheDayActivityInfo *)&local_158);
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_045a5798;
      case 0xe:
        Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstance();
        cVar2 = TwoYearBirthdayMgr::NeedShowChannelActivity();
        if (cVar2 != '\0') {
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          if (local_70 != '\0') {
            local_166 = true;
            lVar8 = ProfileUtils::Profile();
            if ((lVar8 != 0) &&
               (cVar2 = FUN_045a2820(*(undefined1 *)(lVar8 + 0x10ba)), cVar2 == '\0')) {
              local_165 = true;
            }
          }
          break;
        }
switchD_045a5754_caseD_3:
        goto LAB_045a5798;
      case 0xf:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x10:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x11:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      default:
        goto switchD_045a5754_caseD_12;
      case 0x13:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x14:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x16:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x17:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
        }
        goto LAB_045a5b10;
      case 0x18:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x19:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x1a:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x045a5d24;
      case 0x1b:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
        }
        goto LAB_045a5b10;
      case 0x1c:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
joined_r0x045a5d24:
        if (local_70 == '\0') break;
        local_165 = true;
        local_166 = true;
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_045a5798;
      case 0x1d:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
        }
LAB_045a5b10:
        local_165 = false;
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_045a5798;
      case 0x1e:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
        break;
      case 0x22:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
        }
        DailySignConfig::DailySignConfig((DailySignConfig *)&local_158);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_158);
        if (cVar2 != '\0') {
          if (local_150 == 1) {
            local_166 = false;
          }
          if (local_144 == '\0') {
            local_165 = true;
          }
          else {
            local_165 = false;
          }
        }
        DailySignConfig::~DailySignConfig((DailySignConfig *)&local_158);
LAB_045a5ab4:
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_045a5798;
      case 0x23:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
        break;
      case 0x24:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
          this_03 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
          local_165 = (bool)TravelLogManager::HaveCompletedTask(this_03);
          if (local_165 != false) {
            local_165 = true;
          }
        }
        break;
      case 0x26:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
          this_02 = (DaveTaskManager *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
          local_165 = (bool)DaveTaskManager::HaveCompletedTask(this_02);
          if (local_165 != false) {
            local_165 = true;
          }
        }
        break;
      case 0x27:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
        break;
      case 0x2a:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
          this_01 = (HappyVaseBreakerTaskManager *)
                    Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
          local_165 = (bool)HappyVaseBreakerTaskManager::HaveCompletedTask(this_01);
          if (local_165 != false) {
            local_165 = true;
          }
        }
        break;
      case 0x2d:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr();
          local_166 = (bool)PlantAdventureMgr::CheckActivated();
          local_165 = false;
          pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
          if ((pPVar7 != (PlayerInfo *)0x0) &&
             (cVar2 = PlayerInfo::HasPlantAdventureFinished(pPVar7), cVar2 != '\0')) {
            local_165 = true;
          }
        }
        break;
      case 0x2e:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_166 = true;
          this_00 = (PennyTaskManager *)Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr();
          local_165 = (bool)PennyTaskManager::HaveCompletedTask(this_00);
          if (local_165 != false) {
            local_165 = true;
          }
        }
        break;
      case 0x2f:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
        break;
      case 0x30:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
        break;
      case 0x32:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
        break;
      case 0x33:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_165 = false;
          local_166 = true;
        }
      }
      ActiveItem::~ActiveItem(aAStack_88);
LAB_045a5798:
      local_158 = std::make_pair<int&,bool>(&local_164,&local_166);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x150),(pair *)&local_158);
      local_158 = std::make_pair<int&,bool>(&local_164,&local_165);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x188),(pair *)&local_158);
switchD_045a5754_caseD_12:
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < iVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::WorldMapActivityHome(int) */

void __thiscall WorldMapActivityHome::WorldMapActivityHome(WorldMapActivityHome *this,int param_1)

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
  *(undefined ***)this = &PTR_GetClass_068668e0;
  *(undefined **)(this + 0xd8) = &DAT_06866c68;
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
/* WorldMapActivityHome::Draw(Sexy::Graphics*) */

void __thiscall WorldMapActivityHome::Draw(WorldMapActivityHome *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_045a2934(0x14);
  iVar1 = *(int *)(this + 0x1dc);
  nop();
  iVar3 = FUN_045a2934(0);
  iVar4 = FUN_045a2934(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,*(int *)(this + 0x1d8),iVar1 - iVar2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14f18);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityHome::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
WorldMapActivityHome::DrawAll(WorldMapActivityHome *this,ModalFlags *param_1,Graphics *param_2)

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
LAB_045a66a0:
    do {
      piVar7 = (int *)FUN_045a2860(*(undefined8 *)(this + 0x1c0),lVar10);
      local_24 = *piVar7;
      local_20 = std::
                 unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                 ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                         *)(this + 0x188),&local_24);
      local_10 = FUN_045a3068();
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
        local_10 = FUN_045a2fc0();
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
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14e58);
            iVar6 = FUN_045a2934(0x10);
            Sexy::Graphics::DrawImage(param_2,pIVar9,iVar2 - iVar6,iVar1);
            if (iVar5 <= (int)lVar10) break;
            goto LAB_045a66a0;
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

