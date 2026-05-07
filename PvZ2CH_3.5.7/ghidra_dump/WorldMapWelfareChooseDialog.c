// Class: WorldMapWelfareChooseDialog


/* WorldMapWelfareChooseDialog::GetPanelHeight() */

int __thiscall WorldMapWelfareChooseDialog::GetPanelHeight(WorldMapWelfareChooseDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = std::
          unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
          ::size((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                  *)(this + 0x150));
  iVar3 = (**(code **)(*(long *)this + 0x340))(this);
  iVar1 = iVar2 + 2;
  if (-1 < iVar2 + -1) {
    iVar1 = iVar2 + -1;
  }
  return iVar3 + (iVar1 >> 2) * iVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::GetAssociatedMainWidget() */

void WorldMapWelfareChooseDialog::GetAssociatedMainWidget(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapWelfareButtonExtra");
  uVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldMapWelfareChooseDialog::GetItemCount() */

void __thiscall WorldMapWelfareChooseDialog::GetItemCount(WorldMapWelfareChooseDialog *this)

{
  FUN_0459d570(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x200));
  return;
}


/* WorldMapWelfareChooseDialog::GetItemRightMargin() */

float WorldMapWelfareChooseDialog::GetItemRightMargin(void)

{
  int iVar1;
  
  iVar1 = FUN_0459d5a4(0x10);
  return (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::InitView() */

void __thiscall WorldMapWelfareChooseDialog::InitView(WorldMapWelfareChooseDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x378))();
  if (-1 < iVar1) {
    uVar2 = FUN_0459d5a4(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar2,uVar2,*(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214));
    plVar6 = (long *)(**(code **)(*(long *)this + 0x358))(this);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0xb0))(&local_10);
      iVar3 = FUN_0459d5a4(0x14);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b147f8);
      iVar4 = FUN_0459d5a4(10);
      iVar1 = *(int *)(this + 0x210);
      iVar5 = FUN_0459d5a4(0x32);
      (**(code **)(*(long *)this + 0x1a8))
                (this,(local_10 - iVar1) + iVar5,
                 (int)((float)(iVar3 + *(int *)(lVar7 + 0x3c)) * 0.5 - (float)iVar4) + local_c);
    }
  }
  this[0x59] = (WorldMapWelfareChooseDialog)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapWelfareChooseDialog::GetBaseHeight() */

int WorldMapWelfareChooseDialog::GetBaseHeight(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b147f8);
  iVar1 = FUN_0459d5a4(0x14);
  return iVar1 + *(int *)(lVar2 + 0x3c);
}


/* WorldMapWelfareChooseDialog::ButtonPress(int) */

void WorldMapWelfareChooseDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapWelfareChooseDialog::ButtonPress(int) */

void __thiscall
WorldMapWelfareChooseDialog::ButtonPress(WorldMapWelfareChooseDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::ButtonDepress(int) */

void __thiscall
WorldMapWelfareChooseDialog::ButtonDepress(WorldMapWelfareChooseDialog *this,int param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  char *pcVar2;
  RtObject *pRVar3;
  WorldMap_WelfareButtonExtra *pWVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)(this + 0xe0) + 0x30))(this + 0xe0);
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
    switch(param_1) {
    case 0x14:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a53);
      }
      break;
    case 0x20:
      std::string::string(asStack_10,"OpenAnniversaryUI");
      Cpp2Lua(asStack_10);
      std::string::~string(asStack_10);
      nop();
      break;
    case 0x22:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x29d6);
      }
      break;
    case 0x26:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x29fd);
      }
      break;
    case 0x2a:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a26);
      }
      break;
    case 0x2e:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a33);
      }
      break;
    case 0x3c:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a34);
      }
      break;
    case 0x3d:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a4c);
      }
      break;
    case 0x42:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a5b);
      }
      break;
    case 0x43:
      uVar5 = LawnApp::GetRealServerTime(gLawnApp);
      Sexy::StrFormat("https://ad-cdn.hrgame.com.cn/pvz2/hemudu/index.html?v=%d",asStack_10,uVar5);
      (**(code **)(*(long *)gLawnApp + 0x168))(gLawnApp,asStack_10,0);
      std::string::~string(asStack_10);
      break;
    case 0x44:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a60);
      }
      break;
    case 0x48:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a63);
      }
      break;
    case 0x49:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a6f);
      }
      break;
    case 0x4b:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a74);
      }
      break;
    case 0x4c:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a76);
      }
      break;
    case 0x4e:
      pRVar3 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar3),
         pWVar4 != (WorldMap_WelfareButtonExtra *)0x0)) {
        WorldMap_WelfareButtonExtra::RequestData(pWVar4,0x2a89);
      }
    }
    LawnApp::KillWelfareChooseDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapWelfareChooseDialog::ButtonDepress(int) */

void __thiscall
WorldMapWelfareChooseDialog::ButtonDepress(WorldMapWelfareChooseDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog() */

void __thiscall
WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog(WorldMapWelfareChooseDialog *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06865dc0;
  *(undefined **)(this + 0xd8) = &DAT_06866150;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapWelfareChooseDialog_06866198;
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


/* non-virtual thunk to WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog() */

void __thiscall
WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog(WorldMapWelfareChooseDialog *this)

{
  ~WorldMapWelfareChooseDialog(this + -0xe0);
  return;
}


/* WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog() */

void __thiscall
WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog(WorldMapWelfareChooseDialog *this)

{
  ~WorldMapWelfareChooseDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog() */

void __thiscall
WorldMapWelfareChooseDialog::~WorldMapWelfareChooseDialog(WorldMapWelfareChooseDialog *this)

{
  ~WorldMapWelfareChooseDialog(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::GetHomeActivityPos(HomeActityType, Sexy::SexyVector2&) */

void __thiscall
WorldMapWelfareChooseDialog::GetHomeActivityPos
          (WorldMapWelfareChooseDialog *this,undefined4 param_2,float *param_3)

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


/* non-virtual thunk to WorldMapWelfareChooseDialog::GetHomeActivityPos(HomeActityType,
   Sexy::SexyVector2&) */

void __thiscall WorldMapWelfareChooseDialog::GetHomeActivityPos(WorldMapWelfareChooseDialog *this)

{
  GetHomeActivityPos(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::PrepareActivityConfig() */

void __thiscall
WorldMapWelfareChooseDialog::PrepareActivityConfig(WorldMapWelfareChooseDialog *this)

{
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  char cVar1;
  string *psVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  size_t in_x2;
  size_t sVar5;
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = (unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x1f8);
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::clear(this_00);
  local_10[0] = 0x14;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_RECHARGE_WELFARE_EVENT",in_x2);
  sVar5 = 0x20;
  local_10[0] = 0x20;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"LUA_IMAGE_UI_ANNIVERSARY_AND_ICON",sVar5);
  local_10[0] = 0x22;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DAILY_SIGN",sVar5);
  local_10[0] = 0x2a;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_HAPPYVASEBREAKER",sVar5);
  sVar5 = 0x2e;
  local_10[0] = 0x2e;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PENNYGUIDE",sVar5);
  sVar5 = 0x26;
  local_10[0] = 0x26;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_DAVETREASURE",sVar5);
  local_10[0] = 0x3c;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LUCKY_LOTTERY",sVar5);
  sVar5 = 0x3d;
  local_10[0] = 0x3d;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NOVICESEVENDAYS",sVar5);
  sVar5 = 0x42;
  local_10[0] = 0x42;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PENNYCLASSROOM",sVar5);
  sVar5 = 0x43;
  local_10[0] = 0x43;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SPECIAL_EVENT",sVar5);
  sVar5 = 0x44;
  local_10[0] = 0x44;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GROWTH_PACKAGE",sVar5);
  sVar5 = 0x48;
  local_10[0] = 0x48;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_ENTRY",sVar5);
  sVar5 = 0x49;
  local_10[0] = 0x49;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_CORNUCOPIA",sVar5);
  sVar5 = 0x4b;
  local_10[0] = 0x4b;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_INVITATION",sVar5);
  sVar5 = 0x4c;
  local_10[0] = 0x4c;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GIFT_FOR_RETURN",sVar5);
  sVar5 = 0x4e;
  local_10[0] = 0x4e;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LUCKY_CHEST",sVar5);
  std::vector<int,std::allocator<int>>::clear(this_01);
  std::string::string((string *)local_10,"egypt4");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x22;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x3c;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x2a;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(4,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x2e;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt2");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"egypt6");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x4b;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt7");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x2000000);
  if (cVar1 != '\0') {
    local_10[0] = 0x43;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(5,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x44;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt4");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x4c;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar4,0x17);
  if (cVar1 != '\0') {
    local_10[0] = 0x14;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x20;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x26;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x48;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x49;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x4e;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::FillState() */

void __thiscall WorldMapWelfareChooseDialog::FillState(WorldMapWelfareChooseDialog *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  BigInt *this_00;
  PennyTaskManager *this_01;
  HappyVaseBreakerTaskManager *this_02;
  DaveTaskManager *this_03;
  UIInvitationMgr *pUVar5;
  long lVar6;
  bool local_146;
  bool local_145;
  int local_144;
  ActiveItem aAStack_140 [24];
  char local_128;
  undefined8 local_c0;
  int local_b8;
  char local_ac;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = (**(code **)(*(long *)this + 0x350))();
  local_146 = false;
  local_145 = false;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      local_146 = false;
      local_145 = false;
      piVar4 = (int *)FUN_0459d59c(*(undefined8 *)(this + 0x1f8),lVar6);
      local_144 = *piVar4;
      switch(local_144) {
      case 0x14:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          cVar1 = RechargeWelfareUI::CheckActivityOpenAtLeastOne();
          if (cVar1 != '\0') {
            local_146 = true;
          }
          cVar1 = RechargeWelfareUI::CheckAnyNotReceivedReward();
          if (cVar1 != '\0') goto LAB_0459e8f8;
        }
        break;
      default:
        goto switchD_0459e5d8_caseD_15;
      case 0x20:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        cVar1 = local_128;
        ActiveItem::~ActiveItem(aAStack_140);
        if (cVar1 != '\0') {
          local_146 = true;
          local_145 = SUB41(*(undefined4 *)(this + 0x218),0);
        }
        iVar3 = LawnApp::GetPlatform(gLawnApp);
        if ((((iVar3 == 0xa5) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 8)) ||
            (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0xb)) ||
           (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 6)) {
          local_146 = false;
          local_145 = false;
        }
        goto LAB_0459e600;
      case 0x22:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
        }
        DailySignConfig::DailySignConfig((DailySignConfig *)&local_c0);
        cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)&local_c0);
        if (cVar1 != '\0') {
          if (local_b8 == 1) {
            local_146 = false;
          }
          local_145 = local_ac == '\0';
        }
        DailySignConfig::~DailySignConfig((DailySignConfig *)&local_c0);
        ActiveItem::~ActiveItem(aAStack_140);
        goto LAB_0459e600;
      case 0x26:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          this_03 = (DaveTaskManager *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
          cVar1 = DaveTaskManager::HaveCompletedTask(this_03);
          if (cVar1 == '\0') {
            Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
            cVar1 = DaveTreasureDataManager::HasAnyNotReceivedReward();
            if (cVar1 == '\0') {
              local_145 = false;
              break;
            }
          }
LAB_0459e8f8:
          local_145 = true;
        }
        break;
      case 0x2a:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          this_02 = (HappyVaseBreakerTaskManager *)
                    Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
          local_145 = (bool)HappyVaseBreakerTaskManager::HaveCompletedTask(this_02);
          if (local_145 != false) {
            local_145 = true;
          }
        }
        break;
      case 0x2e:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          this_01 = (PennyTaskManager *)Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr();
          local_145 = (bool)PennyTaskManager::HaveCompletedTask(this_01);
          if (local_145 != false) {
            local_145 = true;
          }
        }
        break;
      case 0x3c:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          local_145 = false;
        }
        break;
      case 0x3d:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          local_145 = false;
        }
        break;
      case 0x42:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          this_00 = (BigInt *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
          local_145 = (bool)BigInt::IsNegative(this_00);
        }
        break;
      case 0x43:
        cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x2000000);
        if (cVar1 != '\0') {
          local_146 = true;
          local_145 = false;
        }
        goto LAB_0459e600;
      case 0x44:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          local_145 = false;
        }
        break;
      case 0x48:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        goto joined_r0x0459e5f0;
      case 0x49:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          local_145 = false;
        }
        break;
      case 0x4b:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 == '\0') {
          ActiveItem::~ActiveItem(aAStack_140);
        }
        else {
          local_146 = true;
          InvitationData::InvitationData((InvitationData *)&local_c0);
          ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)&local_c0);
          pUVar5 = (UIInvitationMgr *)Sexy::LazySingleton<UIInvitationMgr>::GetInstance();
          UIInvitationMgr::LoadData(pUVar5,(InvitationData *)&local_c0);
          pUVar5 = (UIInvitationMgr *)Sexy::LazySingleton<UIInvitationMgr>::GetInstance();
          local_145 = (bool)UIInvitationMgr::SetNotice(pUVar5);
          InvitationData::~InvitationData((InvitationData *)&local_c0);
          ActiveItem::~ActiveItem(aAStack_140);
        }
        goto LAB_0459e600;
      case 0x4c:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_128 != '\0') {
          local_146 = true;
          local_145 = (bool)UIGiftFoReturn::GetHasTips();
        }
        break;
      case 0x4e:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
joined_r0x0459e5f0:
        if (local_128 != '\0') {
          local_146 = true;
          local_145 = false;
        }
      }
      ActiveItem::~ActiveItem(aAStack_140);
LAB_0459e600:
      local_c0 = std::make_pair<int&,bool>(&local_144,&local_146);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x188),(pair *)&local_c0);
      local_c0 = std::make_pair<int&,bool>(&local_144,&local_145);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x1c0),(pair *)&local_c0);
switchD_0459e5d8_caseD_15:
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::WorldMapWelfareChooseDialog(int) */

void __thiscall
WorldMapWelfareChooseDialog::WorldMapWelfareChooseDialog
          (WorldMapWelfareChooseDialog *this,int param_1)

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
  *(undefined ***)this = &PTR_GetClass_06865dc0;
  *(undefined **)(this + 0xd8) = &DAT_06866150;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapWelfareChooseDialog_06866198;
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x188),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x1c0),(hash *)0xa,aeStack_20,aaStack_18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  *(undefined4 *)(this + 0x218) = 0;
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
/* WorldMapWelfareChooseDialog::LayoutItems() */

void __thiscall WorldMapWelfareChooseDialog::LayoutItems(WorldMapWelfareChooseDialog *this)

{
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  PVZ2UIButton *pPVar17;
  undefined8 *puVar18;
  WorldMap_GiftFoReturnButton *this_02;
  UILimitedGacha *this_03;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *psVar19;
  string *extraout_x1_02;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ActiveItem *local_3c0;
  undefined1 auStack_3a8 [4];
  int local_3a4;
  PVZ2UIButton *local_3a0;
  string asStack_398 [8];
  undefined8 local_390;
  string asStack_388 [8];
  string asStack_380 [8];
  int local_378 [4];
  ActiveItem aAStack_368 [8];
  undefined4 local_360;
  char local_350;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [88];
  undefined1 auStack_280 [264];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 local_160;
  string asStack_158 [320];
  Sexy aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = (**(code **)(*(long *)this + 0x350))();
  uVar6 = operator|(0x10,8);
  FUN_05462470(auStack_2e8,uVar6);
  local_3a0 = (PVZ2UIButton *)0x0;
  std::
  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
  ::clear((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
           *)(this + 0xe8));
  fVar20 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar21 = (float)(**(code **)(*(long *)this + 0x330))(this);
  fVar22 = (float)(**(code **)(*(long *)this + 0x338))(this);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0x150));
  local_3a4 = 0;
  Set8BytesTo0(asStack_398);
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b147f8);
  iVar7 = FUN_0459d5a4(0x14);
  iVar1 = *(int *)(lVar13 + 0x3c);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b145a0);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b145a0);
  iVar9 = SalesProgressBar::GetCurrentLevel(this_01);
  if (iVar5 < 1) {
    uVar10 = 0xffffffff;
  }
  else {
    fVar23 = (float)(int)((float)iVar8 * 0.9);
    lVar13 = 0;
    uVar10 = 0xffffffff;
    do {
      while( true ) {
        piVar14 = (int *)FUN_0459d59c(*(undefined8 *)(this + 0x1f8),lVar13);
        local_3a4 = *piVar14;
        local_390 = std::
                    unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                            *)(this + 0x188),&local_3a4);
        uVar15 = FUN_0459d7ec();
        local_178._0_8_ = uVar15;
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_390,(exception_ptr *)local_178);
        if ((cVar3 != '\0') ||
           (lVar16 = std::__detail::
                     _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                     operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                 *)&local_390), *(char *)(lVar16 + 4) == '\0')) break;
        uVar15 = std::
                 unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                 ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                               *)(this + 0x118),&local_3a4);
        thunk_FUN_05475e00(asStack_398,uVar15);
        std::string::string((string *)local_178,"");
        FUN_05462980(auStack_2e8,(string *)local_178);
        std::string::~string((string *)local_178);
        nop();
        FUN_0544a0a4(auStack_280,0);
        FUN_0545ec84(auStack_2d8,asStack_398);
        if (local_3a4 == 1) {
          this_03 = (UILimitedGacha *)FUN_054603b8(auStack_2d8,&DAT_055a8370);
          UILimitedGacha::GetGachaMainPlantName(this_03);
          Sexy::Upper((Sexy *)local_378,extraout_x1);
          FUN_0545ec84(auStack_2d8,(string *)local_178);
          std::string::~string((string *)local_178);
          std::string::~string((string *)local_378);
        }
        else if (local_3a4 == 0x20) {
          FUN_054603b8(auStack_2d8,&DAT_055a8370);
          std::string::string(asStack_380,"");
          nop();
          iVar12 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar12);
          AnniversaryGeneralConfig::AnniversaryGeneralConfig((AnniversaryGeneralConfig *)local_178);
          cVar3 = ActiveItem::GetDataSerialized(aAStack_368,(RtObject *)local_178);
          psVar19 = extraout_x1_00;
          if (cVar3 != '\0') {
            iVar12 = PlantChipNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar12);
            FUN_05474278(asStack_380,(Color *)local_378);
            std::string::~string((string *)local_378);
            uVar15 = local_168;
            *(undefined4 *)(this + 0x218) = 0;
            auVar24 = FUN_0459d570(local_168,local_160);
            psVar19 = auVar24._8_8_;
            for (lVar16 = 0; lVar16 != auVar24._0_8_; lVar16 = lVar16 + 1) {
              auVar25 = FUN_0459d59c(uVar15,lVar16);
              psVar19 = auVar25._8_8_;
              if (*auVar25._0_8_ == 1) {
                *(undefined4 *)(this + 0x218) = 1;
                break;
              }
            }
          }
          Sexy::Upper((Sexy *)asStack_380,psVar19);
          FUN_0545ec84(auStack_2d8,(Color *)local_378);
          std::string::~string((string *)local_378);
          AnniversaryGeneralConfig::~AnniversaryGeneralConfig((AnniversaryGeneralConfig *)local_178)
          ;
          ActiveItem::~ActiveItem(aAStack_368);
          std::string::~string(asStack_380);
        }
        else if (local_3a4 == 3) {
          std::string::string(asStack_388,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SUBENTRY_4");
          nop();
          std::string::string((string *)local_378,"Anniversary/icon_res");
          FUN_05475d88((string *)local_178,asStack_388);
          GetLuaSharedData<std::string>(asStack_380,(Color *)local_378,(string *)local_178);
          std::string::~string((string *)local_178);
          std::string::~string((string *)local_378);
          nop();
          cVar3 = FUN_0547419c(asStack_380);
          pLVar2 = gLawnApp;
          if (cVar3 == '\0') {
            std::string::string((string *)local_378,"LUA_UI_Anniversary");
            cVar3 = LawnApp::IsGroupLoadComplete(pLVar2,(string *)local_378);
            pLVar2 = gLawnApp;
            bVar4 = 0;
            if (cVar3 == '\0') {
              std::string::string((string *)local_178,"UPDATE_UI_Anniversary");
              bVar4 = LawnApp::IsGroupLoadComplete(pLVar2,(string *)local_178);
              bVar4 = bVar4 ^ 1;
              std::string::~string((string *)local_178);
              nop();
            }
            std::string::~string((string *)local_378);
            nop();
            if (bVar4 != 0) goto LAB_0459f2d0;
          }
          else {
LAB_0459f2d0:
            thunk_FUN_05475e00(asStack_380,asStack_388);
          }
          FUN_05462980(auStack_2e8,asStack_380);
          std::string::~string(asStack_380);
          std::string::~string(asStack_388);
        }
        else if (local_3a4 == 0x15) {
          FUN_054603b8(auStack_2d8,&DAT_055a8370);
          std::string::string(asStack_380,"");
          nop();
          iVar12 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar12);
          NetworkOfferInfo::NetworkOfferInfo((NetworkOfferInfo *)local_178);
          cVar3 = ActiveItem::GetDataSerialized(aAStack_368,(RtObject *)local_178);
          psVar19 = extraout_x1_01;
          if (cVar3 != '\0') {
            iVar12 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar12);
            FUN_05474278(asStack_380,(Color *)local_378);
            std::string::~string((string *)local_378);
            psVar19 = extraout_x1_02;
          }
          Sexy::Upper((Sexy *)asStack_380,psVar19);
          FUN_0545ec84(auStack_2d8,(Color *)local_378);
          std::string::~string((string *)local_378);
          NetworkOfferInfo::~NetworkOfferInfo((NetworkOfferInfo *)local_178);
          ActiveItem::~ActiveItem(aAStack_368);
          std::string::~string(asStack_380);
        }
        else {
          if (local_3a4 == 0x14) {
            iVar12 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar12);
            cVar3 = FUN_0459d564(local_360);
            if ((cVar3 != '\0') && (local_350 != '\0')) {
              NetworkFestivalEntryInfo::NetworkFestivalEntryInfo
                        ((NetworkFestivalEntryInfo *)local_178);
              cVar3 = ActiveItem::GetDataSerialized(aAStack_368,(RtObject *)local_178);
              if (cVar3 != '\0') {
                lVar16 = StringHelper::ToImage(asStack_158,false);
                if (lVar16 != 0) {
                  FUN_05462980(auStack_2e8,asStack_158);
                }
              }
              NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo
                        ((NetworkFestivalEntryInfo *)local_178);
            }
          }
          else {
            if (local_3a4 != 0x48) goto LAB_0459eea0;
            iVar12 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar12);
            cVar3 = FUN_0459d564(local_360);
            if ((cVar3 != '\0') && (local_350 != '\0')) {
              BattleOrderData::BattleOrderData((BattleOrderData *)local_178);
              cVar3 = ActiveItem::GetDataSerialized(aAStack_368,(RtObject *)local_178);
              if (cVar3 != '\0') {
                Sexy::StringToUpper(aSStack_18,asStack_380);
                uVar15 = FUN_0547429c((Color *)local_378);
                Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_BATTLEORDER_%s",asStack_380,
                                uVar15);
                std::string::~string((string *)local_378);
                lVar16 = StringHelper::ToImage(asStack_380,false);
                if (lVar16 != 0) {
                  FUN_05462980(auStack_2e8,asStack_380);
                }
                std::string::~string(asStack_380);
              }
              BattleOrderData::~BattleOrderData((BattleOrderData *)local_178);
            }
          }
          local_3c0 = aAStack_368;
          ActiveItem::~ActiveItem(local_3c0);
        }
LAB_0459eea0:
        FUN_05462824((string *)local_178,auStack_2e8);
        lVar16 = StringHelper::ToImage((string *)local_178,false);
        std::string::~string((string *)local_178);
        if (lVar16 == 0) {
          lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b145a0);
          std::string::string(asStack_380,"WorldMapDailyActivityChooseDialog");
          FUN_05462824((string *)aAStack_368,auStack_2e8);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)local_178,
                     (string *)aAStack_368,1,auStack_3a8);
          std::string::string((string *)local_378,"");
          BehaviorLog::inGameBehavior(asStack_380,(vector *)local_178,(string *)local_378);
          std::string::~string((string *)local_378);
          nop();
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)local_178);
          std::string::~string((string *)aAStack_368);
          std::string::~string(asStack_380);
          nop();
          if (lVar16 == 0) break;
        }
        uVar10 = uVar10 + 1;
        if (local_3a4 == 0x4c) {
          this_02 = ::operator_new(0x300);
          WorldMap_GiftFoReturnButton::WorldMap_GiftFoReturnButton
                    (this_02,local_3a4,(ButtonListener *)(this + 0xd8));
          local_3a0 = (PVZ2UIButton *)this_02;
        }
        else {
          FUN_05478178((Color *)local_378,&DAT_056f11a8,asStack_380);
          Sexy::Color::Color((Color *)local_178,1);
          pPVar17 = ::operator_new(0x300);
          PVZ2UIButton::PVZ2UIButton
                    (pPVar17,local_3a4,(ButtonListener *)(this + 0xd8),(wstring *)local_378,
                     (Color *)local_178);
          local_3a0 = pPVar17;
          FUN_05476c50((Color *)local_378);
          nop();
        }
        pPVar17 = local_3a0;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_178,lVar16,2);
        Sexy::Color::Color((Color *)local_378,0x5a,0x5a,0x5a);
        PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)local_178,(Color *)local_378);
        pPVar17 = local_3a0;
        iVar11 = FUN_0459d5a4(8);
        iVar12 = (iVar7 + iVar1) * ((int)uVar10 >> 2);
        (**(code **)(*(long *)pPVar17 + 0x198))
                  (pPVar17,(int)fVar20,iVar11 + iVar12,(int)((float)iVar8 * 0.9),
                   (int)((float)iVar9 * 0.9));
        local_378[0] = local_3a4;
        puVar18 = (undefined8 *)
                  std::
                  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                  ::operator[]((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                                *)(this + 0xe8),(HomeActityType *)local_378);
        iVar11 = FUN_0459d5a4(8);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_178,fVar20,(float)(iVar12 + iVar11));
        *puVar18 = local_178._0_8_;
        if ((uVar10 & 3) == 3) {
          fVar20 = fVar23 + fVar22 + fVar20;
          if ((float)*(int *)(this + 0x210) < fVar20) {
            *(int *)(this + 0x210) = (int)fVar20;
          }
          fVar20 = (float)(**(code **)(*(long *)this + 0x328))(this);
        }
        else {
          fVar20 = fVar20 + fVar23 + fVar21;
        }
        lVar13 = lVar13 + 1;
        (**(code **)(*(long *)this + 0x60))(this,local_3a0);
        local_178 = std::make_pair<int&,PVZ2UIButton*&>(&local_3a4,&local_3a0);
        std::
        unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
        ::insert<std::pair<int,PVZ2UIButton*>,void>
                  ((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0x150),(pair *)local_178);
        if (iVar5 <= (int)lVar13) goto LAB_0459f060;
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar5);
LAB_0459f060:
    if (2 < (int)uVar10) goto LAB_0459f07c;
  }
  *(int *)(this + 0x210) = (int)((fVar22 - fVar21) + fVar20);
LAB_0459f07c:
  uVar6 = (**(code **)(*(long *)this + 0x348))(this);
  *(undefined4 *)(this + 0x214) = uVar6;
  std::string::~string(asStack_398);
  FUN_054617bc(auStack_2e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::Draw(Sexy::Graphics*) */

void __thiscall
WorldMapWelfareChooseDialog::Draw(WorldMapWelfareChooseDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0459d5a4(0x14);
  iVar1 = *(int *)(this + 0x214);
  nop();
  iVar3 = FUN_0459d5a4(0);
  iVar4 = FUN_0459d5a4(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,*(int *)(this + 0x210),iVar1 - iVar2);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b147f8);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14678);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14678);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14678);
  iVar1 = *(int *)(this + 0x210);
  iVar4 = FUN_0459d5a4(0x14);
  iVar5 = FUN_0459d5a4(2);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1 + iVar2 * -2,(iVar4 - iVar3) + iVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapWelfareChooseDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
WorldMapWelfareChooseDialog::DrawAll
          (WorldMapWelfareChooseDialog *this,ModalFlags *param_1,Graphics *param_2)

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
LAB_0459f940:
    do {
      piVar7 = (int *)FUN_0459d59c(*(undefined8 *)(this + 0x1f8),lVar10);
      local_24 = *piVar7;
      local_20 = std::
                 unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                 ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                         *)(this + 0x1c0),&local_24);
      local_10 = FUN_0459d7ec();
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
        local_10 = FUN_0459d860();
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
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b145f0);
            iVar6 = FUN_0459d5a4(0x10);
            Sexy::Graphics::DrawImage(param_2,pIVar9,iVar2 - iVar6,iVar1);
            if (iVar5 <= (int)lVar10) break;
            goto LAB_0459f940;
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

