// Class: WorldMapShopChooseDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::GetAssociatedMainWidget() */

void WorldMapShopChooseDialog::GetAssociatedMainWidget(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapShopButton");
  uVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldMapShopChooseDialog::GetItemCount() */

void __thiscall WorldMapShopChooseDialog::GetItemCount(WorldMapShopChooseDialog *this)

{
  FUN_0459ad58(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x200));
  return;
}


/* WorldMapShopChooseDialog::GetItemRightMargin() */

float WorldMapShopChooseDialog::GetItemRightMargin(void)

{
  int iVar1;
  
  iVar1 = FUN_0459ae0c(0x10);
  return (float)iVar1;
}


/* WorldMapShopChooseDialog::GetPanelHeight() */

int __thiscall WorldMapShopChooseDialog::GetPanelHeight(WorldMapShopChooseDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = std::
          unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
          ::size((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                  *)(this + 0x150));
  iVar2 = (**(code **)(*(long *)this + 0x340))(this);
  iVar3 = iVar1 + 2;
  if (-1 < iVar1 + -1) {
    iVar3 = iVar1 + -1;
  }
  iVar2 = iVar2 + (iVar3 >> 2) * iVar2;
  if (this[0x218] != (WorldMapShopChooseDialog)0x0) {
    iVar3 = FUN_0459ae0c(0x19);
    iVar2 = iVar2 + iVar3;
  }
  return iVar2;
}


/* WorldMapShopChooseDialog::onPVPLogin(bool) */

void __thiscall WorldMapShopChooseDialog::onPVPLogin(WorldMapShopChooseDialog *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  UISingletonDialog<PvpExchangeDlg>::ShowDialog();
  LawnApp::KillShopChooseDialog(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::InitView() */

void __thiscall WorldMapShopChooseDialog::InitView(WorldMapShopChooseDialog *this)

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
    uVar2 = FUN_0459ae0c(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar2,uVar2,*(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214));
    plVar4 = (long *)(**(code **)(*(long *)this + 0x358))(this);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb0))(&local_10);
      iVar1 = FUN_0459ae0c(0x14);
      lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14280);
      iVar3 = FUN_0459ae0c(10);
      (**(code **)(*(long *)this + 0x1a8))
                (this,local_10 - *(int *)(this + 0x210) / 2,
                 (local_c - *(int *)(this + 0x214)) -
                 (int)((float)(iVar1 + *(int *)(lVar5 + 0x3c)) * 0.5 - (float)iVar3));
    }
  }
  this[0x59] = (WorldMapShopChooseDialog)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapShopChooseDialog::GetBaseHeight() */

int WorldMapShopChooseDialog::GetBaseHeight(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14280);
  iVar1 = FUN_0459ae0c(0x14);
  return iVar1 + *(int *)(lVar2 + 0x3c);
}


/* WorldMapShopChooseDialog::ButtonPress(int) */

void WorldMapShopChooseDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapShopChooseDialog::ButtonPress(int) */

void __thiscall WorldMapShopChooseDialog::ButtonPress(WorldMapShopChooseDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::ButtonDepress(int) */

void __thiscall WorldMapShopChooseDialog::ButtonDepress(WorldMapShopChooseDialog *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  char *pcVar3;
  INetworkMsgProcess *this_01;
  RtObject *pRVar4;
  WorldMap_ShopButton *pWVar5;
  long lVar6;
  WorldMap *pWVar7;
  long *plVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)(this + 0xe0) + 0x30))(this + 0xe0);
  if (cVar1 == '\0') goto LAB_0459b328;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
  switch(param_1) {
  case 1:
    UILimitedGacha::createWithNetwork();
    break;
  case 0x14:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a53);
    }
    break;
  case 0x15:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x29c0);
    }
    break;
  case 0x1e:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a31);
    }
    break;
  case 0x1f:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2983);
    }
    break;
  case 0x20:
    pcVar3 = "OpenAnniversaryUI";
    goto LAB_0459b430;
  case 0x21:
    plVar8 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn");
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x338))(plVar8,3);
    }
    break;
  case 0x25:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x29f3);
    }
    break;
  case 0x27:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x29c6);
    }
    break;
  case 0x28:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a1b);
    }
    break;
  case 0x2b:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a27);
    }
    break;
  case 0x2c:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a32);
    }
    break;
  case 0x30:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a39);
    }
    break;
  case 0x31:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a3f);
    }
    break;
  case 0x36:
    LawnApp::ShowStarConvert(gLawnApp);
    break;
  case 0x37:
    pcVar3 = "OpenDaveShopUI";
LAB_0459b430:
    std::string::string(asStack_10,pcVar3);
    Cpp2Lua(asStack_10);
    std::string::~string(asStack_10);
    nop();
    break;
  case 0x38:
    pWVar7 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    std::string::string(asStack_10,"Gacha");
    WorldMap::SwitchToStore(pWVar7,asStack_10);
    std::string::~string(asStack_10);
    nop();
    break;
  case 0x39:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x29c1);
    }
    break;
  case 0x3b:
    lVar6 = ProfileUtils::Profile();
    iVar2 = FUN_0459ad44(*(undefined4 *)(lVar6 + 0x40));
    if (iVar2 == 0) {
      pcVar3 = "OpenMonthlyCardUI";
      goto LAB_0459b430;
    }
    break;
  case 0x3e:
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
    if ((pRVar4 != (RtObject *)0x0) &&
       (pWVar5 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar4),
       pWVar5 != (WorldMap_ShopButton *)0x0)) {
      WorldMap_ShopButton::RequestData(pWVar5,0x2a50);
    }
    break;
  case 0x41:
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPLogin(this_01);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Map_Select_Universe_Release");
    goto LAB_0459b328;
  }
  LawnApp::KillShopChooseDialog(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
LAB_0459b328:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapShopChooseDialog::ButtonDepress(int) */

void __thiscall WorldMapShopChooseDialog::ButtonDepress(WorldMapShopChooseDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::~WorldMapShopChooseDialog() */

void __thiscall WorldMapShopChooseDialog::~WorldMapShopChooseDialog(WorldMapShopChooseDialog *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06865960;
  *(undefined **)(this + 0xd8) = &DAT_06865cf0;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapShopChooseDialog_06865d38;
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
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
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


/* non-virtual thunk to WorldMapShopChooseDialog::~WorldMapShopChooseDialog() */

void __thiscall WorldMapShopChooseDialog::~WorldMapShopChooseDialog(WorldMapShopChooseDialog *this)

{
  ~WorldMapShopChooseDialog(this + -0xe0);
  return;
}


/* WorldMapShopChooseDialog::~WorldMapShopChooseDialog() */

void __thiscall WorldMapShopChooseDialog::~WorldMapShopChooseDialog(WorldMapShopChooseDialog *this)

{
  ~WorldMapShopChooseDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMapShopChooseDialog::~WorldMapShopChooseDialog() */

void __thiscall WorldMapShopChooseDialog::~WorldMapShopChooseDialog(WorldMapShopChooseDialog *this)

{
  ~WorldMapShopChooseDialog(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::GetHomeActivityPos(HomeActityType, Sexy::SexyVector2&) */

void __thiscall
WorldMapShopChooseDialog::GetHomeActivityPos
          (WorldMapShopChooseDialog *this,undefined4 param_2,float *param_3)

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


/* non-virtual thunk to WorldMapShopChooseDialog::GetHomeActivityPos(HomeActityType,
   Sexy::SexyVector2&) */

void __thiscall WorldMapShopChooseDialog::GetHomeActivityPos(WorldMapShopChooseDialog *this)

{
  GetHomeActivityPos(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::PrepareActivityConfig() */

void __thiscall WorldMapShopChooseDialog::PrepareActivityConfig(WorldMapShopChooseDialog *this)

{
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  char cVar1;
  string *psVar2;
  PlayerInfo *pPVar3;
  ProfileMgr *pPVar4;
  size_t in_x2;
  size_t sVar5;
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = (unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::clear(this_00);
  local_10[0] = 0x36;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x1f8);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_STAR_CONVERT",in_x2);
  local_10[0] = 0x37;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_DAVE_SHOP",in_x2);
  local_10[0] = 0x38;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_TREASURE",in_x2);
  sVar5 = 0x30;
  local_10[0] = 0x30;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MYSTERY_STORE",sVar5);
  local_10[0] = 0x27;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_RECHARGEREWARD",sVar5);
  sVar5 = 0x39;
  local_10[0] = 0x39;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_FIRST_RECHARGE",sVar5);
  local_10[0] = 1;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_GACHA",sVar5);
  sVar5 = 0x20;
  local_10[0] = 0x20;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"LUA_IMAGE_UI_ANNIVERSARY_AND_ICON",sVar5);
  local_10[0] = 0x15;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANT_SPECIAL_OFFER",sVar5);
  local_10[0] = 0x21;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_WORLD_UNLOCK_PACK_ICON_LIGHT",sVar5);
  local_10[0] = 0x25;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NEWER_PRESENT",sVar5);
  local_10[0] = 0x1f;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_RECHARGE_BUNDLE",sVar5);
  sVar5 = 0x28;
  local_10[0] = 0x28;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LUCKBAG",sVar5);
  sVar5 = 0x2c;
  local_10[0] = 0x2c;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SECRET_STORE",sVar5);
  local_10[0] = 0x2b;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_NEWRECALL",sVar5);
  local_10[0] = 0x3b;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MONTHLYCARD",sVar5);
  local_10[0] = 0x1e;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LIMIT_LOTTERY",sVar5);
  sVar5 = 0x3e;
  local_10[0] = 0x3e;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_ARTIFACT_PRESENT",sVar5);
  sVar5 = 0x14;
  local_10[0] = 0x14;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_FESTIVAL_EVENT",sVar5);
  local_10[0] = 0x31;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_MONTHLY_CARD",sVar5);
  local_10[0] = 0x41;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PVP_SHOP",sVar5);
  sVar5 = 0x4a;
  local_10[0] = 0x4a;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_GENE",sVar5);
  std::vector<int,std::allocator<int>>::clear(this_01);
  local_10[0] = 0x38;
  std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  local_10[0] = 0x36;
  std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x17);
  if (cVar1 != '\0') {
    local_10[0] = 0x1f;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x37;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x27;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 1;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x15;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x21;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x25;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x2b;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x3b;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x1e;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x31;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
    local_10[0] = 0x41;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt8");
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar3);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x39;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt14");
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar3);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x30;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt9");
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar3);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x3e;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WorldMapShopChooseDialog::LayoutItems() */

void __thiscall WorldMapShopChooseDialog::LayoutItems(WorldMapShopChooseDialog *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  PVZ2UIButton *pPVar14;
  undefined8 *puVar15;
  WorldMap_RechargeBundleButtonExtra *this_02;
  UILimitedGacha *this_03;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *psVar16;
  string *extraout_x1_02;
  string *extraout_x1_03;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_284;
  undefined1 auStack_270 [12];
  int local_264;
  PVZ2UIButton *local_260;
  string asStack_258 [8];
  undefined8 local_250;
  string asStack_248 [8];
  int local_240 [4];
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
  iVar3 = (**(code **)(*(long *)this + 0x350))();
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  local_260 = (PVZ2UIButton *)0x0;
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
  local_264 = 0;
  Set8BytesTo0(asStack_258);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14280);
  iVar5 = FUN_0459ae0c(0x14);
  iVar1 = *(int *)(lVar10 + 0x3c);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14258);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14258);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
  if (iVar3 < 1) {
    local_284 = 0xffffffff;
  }
  else {
    local_284 = 0xffffffff;
    fVar20 = (float)(int)((float)iVar6 * 0.9);
    lVar10 = 0;
    do {
      while( true ) {
        piVar11 = (int *)FUN_0459ad84(*(undefined8 *)(this + 0x1f8),lVar10);
        local_264 = *piVar11;
        local_250 = std::
                    unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                            *)(this + 0x188),&local_264);
        uVar12 = FUN_0459b238();
        local_230[0]._0_8_ = uVar12;
        cVar2 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_250,(exception_ptr *)local_230);
        if ((cVar2 != '\0') ||
           (lVar13 = std::__detail::
                     _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                     operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                 *)&local_250), *(char *)(lVar13 + 4) == '\0')) break;
        uVar12 = std::
                 unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                 ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                               *)(this + 0x118),&local_264);
        thunk_FUN_05475e00(asStack_258,uVar12);
        std::string::string((string *)local_230,"");
        FUN_05462980(auStack_178,(string *)local_230);
        std::string::~string((string *)local_230);
        nop();
        FUN_0544a0a4(auStack_110,0);
        FUN_0545ec84(auStack_168,asStack_258);
        if (local_264 == 1) {
          this_03 = (UILimitedGacha *)FUN_054603b8(auStack_168,&DAT_055a8370);
          UILimitedGacha::GetGachaMainPlantName(this_03);
          Sexy::Upper((Sexy *)local_240,extraout_x1);
          FUN_0545ec84(auStack_168,(string *)local_230);
          std::string::~string((string *)local_230);
          std::string::~string((string *)local_240);
        }
        else if (local_264 == 0x20) {
          FUN_054603b8(auStack_168,&DAT_055a8370);
          std::string::string(asStack_248,"");
          nop();
          iVar9 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar9);
          AnniversaryGeneralConfig::AnniversaryGeneralConfig((AnniversaryGeneralConfig *)local_230);
          cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
          psVar16 = extraout_x1_00;
          if (cVar2 != '\0') {
            iVar9 = PlantChipNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar9);
            FUN_05474278(asStack_248,(Color *)local_240);
            std::string::~string((string *)local_240);
            psVar16 = extraout_x1_02;
          }
          Sexy::Upper((Sexy *)asStack_248,psVar16);
          FUN_0545ec84(auStack_168,(Color *)local_240);
          std::string::~string((string *)local_240);
          AnniversaryGeneralConfig::~AnniversaryGeneralConfig((AnniversaryGeneralConfig *)local_230)
          ;
          ActiveItem::~ActiveItem(aAStack_1f8);
          std::string::~string(asStack_248);
        }
        else if (local_264 == 0x15) {
          FUN_054603b8(auStack_168,&DAT_055a8370);
          std::string::string(asStack_248,"");
          nop();
          iVar9 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar9);
          NetworkOfferInfo::NetworkOfferInfo((NetworkOfferInfo *)local_230);
          cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
          psVar16 = extraout_x1_01;
          if (cVar2 != '\0') {
            iVar9 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar9);
            FUN_05474278(asStack_248,(Color *)local_240);
            std::string::~string((string *)local_240);
            psVar16 = extraout_x1_03;
          }
          Sexy::Upper((Sexy *)asStack_248,psVar16);
          FUN_0545ec84(auStack_168,(Color *)local_240);
          std::string::~string((string *)local_240);
          NetworkOfferInfo::~NetworkOfferInfo((NetworkOfferInfo *)local_230);
          ActiveItem::~ActiveItem(aAStack_1f8);
          std::string::~string(asStack_248);
        }
        else if (local_264 == 0x14) {
          iVar9 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar9);
          cVar2 = FUN_0459ad4c(local_1f0);
          if ((cVar2 != '\0') && (local_1e0 != '\0')) {
            NetworkFestivalEntryInfo::NetworkFestivalEntryInfo
                      ((NetworkFestivalEntryInfo *)local_230);
            cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_230);
            if ((cVar2 != '\0') && (lVar13 = StringHelper::ToImage(asStack_210,false), lVar13 != 0))
            {
              FUN_05462980(auStack_178,asStack_210);
            }
            NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo
                      ((NetworkFestivalEntryInfo *)local_230);
          }
          ActiveItem::~ActiveItem(aAStack_1f8);
        }
        FUN_05462824((string *)local_230,auStack_178);
        lVar13 = StringHelper::ToImage((string *)local_230,false);
        std::string::~string((string *)local_230);
        if (lVar13 == 0) {
          lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14258);
          std::string::string(asStack_248,"WorldMapShopChooseDialog");
          FUN_05462824((string *)aAStack_1f8,auStack_178);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)local_230,
                     (string *)aAStack_1f8,1,auStack_270);
          std::string::string((string *)local_240,"");
          BehaviorLog::inGameBehavior(asStack_248,(vector *)local_230,(string *)local_240);
          std::string::~string((string *)local_240);
          nop();
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)local_230);
          std::string::~string((string *)aAStack_1f8);
          std::string::~string(asStack_248);
          nop();
          if (lVar13 == 0) break;
        }
        local_284 = local_284 + 1;
        if (local_264 == 0x1f) {
          this_02 = ::operator_new(0x300);
          WorldMap_RechargeBundleButtonExtra::WorldMap_RechargeBundleButtonExtra
                    (this_02,local_264,(ButtonListener *)(this + 0xd8));
          this_02[0x59] = (WorldMap_RechargeBundleButtonExtra)0x0;
          this[0x218] = (WorldMapShopChooseDialog)0x1;
          local_260 = (PVZ2UIButton *)this_02;
        }
        else {
          FUN_05478178((Color *)local_240,&DAT_056f11a8,asStack_248);
          Sexy::Color::Color((Color *)local_230,1);
          pPVar14 = ::operator_new(0x300);
          PVZ2UIButton::PVZ2UIButton
                    (pPVar14,local_264,(ButtonListener *)(this + 0xd8),(wstring *)local_240,
                     (Color *)local_230);
          local_260 = pPVar14;
          FUN_05476c50((Color *)local_240);
          nop();
        }
        pPVar14 = local_260;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_230,lVar13,2);
        Sexy::Color::Color((Color *)local_240,0x5a,0x5a,0x5a);
        PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)local_230,(Color *)local_240);
        pPVar14 = local_260;
        iVar8 = FUN_0459ae0c(8);
        iVar9 = (iVar5 + iVar1) * ((int)local_284 >> 2);
        (**(code **)(*(long *)pPVar14 + 0x198))
                  (pPVar14,(int)fVar17,iVar8 + iVar9,(int)((float)iVar6 * 0.9),
                   (int)((float)iVar7 * 0.9));
        local_240[0] = local_264;
        puVar15 = (undefined8 *)
                  std::
                  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                  ::operator[]((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                                *)(this + 0xe8),(HomeActityType *)local_240);
        iVar8 = FUN_0459ae0c(8);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_230,fVar17,(float)(iVar9 + iVar8));
        *puVar15 = local_230[0]._0_8_;
        if ((local_284 & 3) == 3) {
          fVar17 = fVar20 + fVar19 + fVar17;
          if ((float)*(int *)(this + 0x210) < fVar17) {
            *(int *)(this + 0x210) = (int)fVar17;
          }
          fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
        }
        else {
          fVar17 = fVar17 + fVar20 + fVar18;
        }
        lVar10 = lVar10 + 1;
        (**(code **)(*(long *)this + 0x60))(this,local_260);
        local_230[0] = std::make_pair<int&,PVZ2UIButton*&>(&local_264,&local_260);
        std::
        unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
        ::insert<std::pair<int,PVZ2UIButton*>,void>
                  ((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0x150),(pair *)local_230);
        if (iVar3 <= (int)lVar10) goto LAB_0459c3f0;
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar3);
LAB_0459c3f0:
    if (2 < (int)local_284) goto LAB_0459c40c;
  }
  *(int *)(this + 0x210) = (int)((fVar19 - fVar18) + fVar17);
LAB_0459c40c:
  uVar4 = (**(code **)(*(long *)this + 0x348))(this);
  *(undefined4 *)(this + 0x214) = uVar4;
  std::string::~string(asStack_258);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_284);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::FillState() */

void __thiscall WorldMapShopChooseDialog::FillState(WorldMapShopChooseDialog *this)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte extraout_var;
  int *piVar6;
  long lVar7;
  long lVar8;
  PlayerInfo *pPVar9;
  FirstRechargeExtraManager *this_00;
  long lVar10;
  byte bVar11;
  bool local_b6;
  bool local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  lVar10 = 0;
  local_8 = ___stack_chk_guard;
  iVar4 = (**(code **)(*(long *)this + 0x350))();
  local_b6 = false;
  local_b5 = false;
  if (0 < iVar4) {
    do {
      local_b6 = false;
      local_b5 = false;
      piVar6 = (int *)FUN_0459ad84(*(undefined8 *)(this + 0x1f8),lVar10);
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
           ((iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 0x70 ||
            (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 0x39)))) {
          local_b6 = false;
        }
        break;
      default:
        goto switchD_0459c904_caseD_2;
      case 0x14:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b6 = true;
          local_b5 = true;
        }
        goto LAB_0459cb00;
      case 0x15:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        goto LAB_0459cb60;
      case 0x1e:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b5 = false;
LAB_0459caf8:
          local_b6 = true;
        }
        goto LAB_0459cb00;
      case 0x1f:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 != '\0') {
          local_b5 = false;
          local_b6 = true;
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          RechargeRewardItem::RechargeRewardItem((RechargeRewardItem *)&local_b0);
          cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_b0);
          uVar2 = local_a8;
          bVar11 = local_b5;
          if (cVar3 != '\0') {
            lVar8 = FUN_0459ad58(local_a8,local_a0);
            lVar7 = 0;
            bVar11 = local_b5;
            while (lVar7 != lVar8) {
              lVar1 = lVar7 + 1;
              piVar6 = (int *)FUN_0459ad84(uVar2,lVar7);
              lVar7 = lVar1;
              if (*piVar6 == 1) {
                bVar11 = 1;
              }
            }
          }
          local_b5 = (bool)bVar11;
          RechargeRewardItem::~RechargeRewardItem((RechargeRewardItem *)&local_b0);
          goto LAB_0459c9ec;
        }
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
        if ((((iVar5 == 0xa5) || (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 8)) ||
            (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 0xb)) ||
           (iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 == 6)) {
          local_b6 = false;
          local_b5 = false;
        }
        break;
      case 0x21:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 != '\0') {
          local_b6 = true;
          local_b5 = true;
        }
        break;
      case 0x25:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 == '\0') goto LAB_0459c9b8;
        goto LAB_0459c9b0;
      case 0x27:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          local_b5 = false;
          goto LAB_0459caf8;
        }
        goto LAB_0459cb00;
      case 0x28:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
LAB_0459cb60:
        ActivityManager::GetActiveItem(iVar5);
        cVar3 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar3 != '\0') {
          local_b5 = false;
          local_b6 = true;
        }
        break;
      case 0x2b:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x0459c9ac;
      case 0x2c:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x0459c9ac;
      case 0x30:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') goto LAB_0459caf8;
LAB_0459cb00:
        ActiveItem::~ActiveItem(aAStack_88);
        break;
      case 0x31:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        goto joined_r0x0459c9ac;
      case 0x36:
      case 0x3b:
        goto LAB_0459c90c;
      case 0x37:
        pPVar9 = (PlayerInfo *)ProfileUtils::Profile();
        std::string::string((string *)&local_b0,"egypt10");
        cVar3 = PlayerInfo::GetLevelCompleted(pPVar9,(string *)&local_b0);
        std::string::~string((string *)&local_b0);
        nop();
        goto joined_r0x0459ca04;
      case 0x38:
        cVar3 = WorldMapUtils::GachaIsOpen();
joined_r0x0459ca04:
        if (cVar3 != '\0') {
LAB_0459c90c:
          local_b6 = true;
        }
        break;
      case 0x39:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          pPVar9 = (PlayerInfo *)ProfileUtils::Profile();
          std::string::string((string *)&local_b0,"egypt8");
          cVar3 = PlayerInfo::GetLevelCompleted(pPVar9,(string *)&local_b0);
          std::string::~string((string *)&local_b0);
          nop();
          if (cVar3 != '\0') {
            local_b6 = true;
            this_00 = (FirstRechargeExtraManager *)
                      Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
            FirstRechargeExtraManager::IsBonusReadyGot(this_00);
            local_b5 = (bool)((byte)~extraout_var >> 7);
          }
        }
LAB_0459c9ec:
        ActiveItem::~ActiveItem(aAStack_88);
        break;
      case 0x3e:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
joined_r0x0459c9ac:
        if (local_70 != '\0') {
LAB_0459c9b0:
          local_b6 = true;
        }
LAB_0459c9b8:
        local_b5 = false;
        ActiveItem::~ActiveItem(aAStack_88);
        break;
      case 0x41:
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_70 != '\0') {
          Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          cVar3 = PVPManager::IsActivated();
          if (cVar3 != '\0') {
            lVar7 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
            if (lVar7 == 0) {
              lVar7 = LawnApp::GetWorldMap(gLawnApp);
              if ((lVar7 == 0) || (lVar7 = FUN_0459ad48(*(undefined8 *)(lVar7 + 0x2f0)), lVar7 == 0)
                 ) {
LAB_0459cef4:
                local_b6 = true;
                goto LAB_0459c9b8;
              }
              cVar3 = WorldMapUtils::IsRiftWorld((string *)(lVar7 + 0x38));
              if (cVar3 == '\0') {
                lVar7 = LawnApp::GetWorldMap(gLawnApp);
                lVar7 = FUN_0459ad48(*(undefined8 *)(lVar7 + 0x2f0));
                cVar3 = WorldMapUtils::IsPVZ1World((string *)(lVar7 + 0x38));
                if (cVar3 == '\0') {
                  lVar7 = LawnApp::GetWorldMap(gLawnApp);
                  lVar7 = FUN_0459ad48(*(undefined8 *)(lVar7 + 0x2f0));
                  cVar3 = WorldMapUtils::IsUnchartedWorld((string *)(lVar7 + 0x38));
                  if (cVar3 == '\0') {
                    lVar7 = LawnApp::GetWorldMap(gLawnApp);
                    lVar7 = FUN_0459ad48(*(undefined8 *)(lVar7 + 0x2f0));
                    cVar3 = WorldMapUtils::IsCardGameWorld((string *)(lVar7 + 0x38));
                    if (cVar3 == '\0') {
                      lVar7 = LawnApp::GetWorldMap(gLawnApp);
                      lVar7 = FUN_0459ad48(*(undefined8 *)(lVar7 + 0x2f0));
                      cVar3 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar7 + 0x38));
                      goto joined_r0x0459cfa8;
                    }
                  }
                }
              }
            }
            else {
              lVar8 = FUN_0459ad40(*(undefined8 *)(lVar7 + 0xe8));
              cVar3 = WorldMapUtils::IsRiftWorld((string *)(lVar8 + 0x38));
              if (cVar3 == '\0') {
                lVar8 = FUN_0459ad40(*(undefined8 *)(lVar7 + 0xe8));
                cVar3 = WorldMapUtils::IsPVZ1World((string *)(lVar8 + 0x38));
                if (cVar3 == '\0') {
                  lVar8 = FUN_0459ad40(*(undefined8 *)(lVar7 + 0xe8));
                  cVar3 = WorldMapUtils::IsUnchartedWorld((string *)(lVar8 + 0x38));
                  if (cVar3 == '\0') {
                    lVar8 = FUN_0459ad40(*(undefined8 *)(lVar7 + 0xe8));
                    cVar3 = WorldMapUtils::IsCardGameWorld((string *)(lVar8 + 0x38));
                    if (cVar3 == '\0') {
                      lVar7 = FUN_0459ad40(*(undefined8 *)(lVar7 + 0xe8));
                      cVar3 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar7 + 0x38));
joined_r0x0459cfa8:
                      if (cVar3 == '\0') goto LAB_0459cef4;
                    }
                  }
                }
              }
            }
            local_b6 = false;
          }
        }
        goto LAB_0459c9b8;
      }
      local_b0 = std::make_pair<int&,bool>(&local_b4,&local_b6);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x188),(pair *)&local_b0);
      local_b0 = std::make_pair<int&,bool>(&local_b4,&local_b5);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x1c0),(pair *)&local_b0);
switchD_0459c904_caseD_2:
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::WorldMapShopChooseDialog(int) */

void __thiscall
WorldMapShopChooseDialog::WorldMapShopChooseDialog(WorldMapShopChooseDialog *this,int param_1)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  equal_to aeStack_30 [8];
  allocator aaStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  InterfaceChooseDialog::InterfaceChooseDialog((InterfaceChooseDialog *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06865960;
  *(undefined **)(this + 0xd8) = &DAT_06865cf0;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapShopChooseDialog_06865d38;
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x188),(hash *)0xa,aeStack_30,aaStack_28);
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x1c0),(hash *)0xa,aeStack_30,aaStack_28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"LUA_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_20,"LUA_UI_Anniversary");
    LawnApp::LoadGroup(pLVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UPDATE_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_20,"UPDATE_UI_Anniversary");
    LawnApp::LoadGroup(pLVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  *(undefined4 *)(this + 0x210) = 0;
  this[0x218] = (WorldMapShopChooseDialog)0x0;
  PrepareActivityConfig(this);
  FillState(this);
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLogin);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMapShopChooseDialog,void(WorldMapShopChooseDialog::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVPLogin,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::Draw(Sexy::Graphics*) */

void __thiscall WorldMapShopChooseDialog::Draw(WorldMapShopChooseDialog *this,Graphics *param_1)

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
  iVar2 = FUN_0459ae0c(0x14);
  iVar1 = *(int *)(this + 0x214);
  nop();
  iVar3 = FUN_0459ae0c(0);
  iVar4 = FUN_0459ae0c(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,*(int *)(this + 0x210),iVar1 - iVar2);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14280);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b142a8);
  iVar3 = *(int *)(this + 0x210);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b142a8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_0459ae0c(0x14);
  iVar6 = FUN_0459ae0c(10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar3 - iVar4) / 2,(iVar5 + (iVar1 - iVar2)) - iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapShopChooseDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
WorldMapShopChooseDialog::DrawAll
          (WorldMapShopChooseDialog *this,ModalFlags *param_1,Graphics *param_2)

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
LAB_0459d398:
    do {
      piVar7 = (int *)FUN_0459ad84(*(undefined8 *)(this + 0x1f8),lVar10);
      local_24 = *piVar7;
      local_20 = std::
                 unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                 ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                         *)(this + 0x1c0),&local_24);
      local_10 = FUN_0459b238();
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
        local_10 = FUN_0459b2ac();
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
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b144e0);
            iVar6 = FUN_0459ae0c(0x10);
            Sexy::Graphics::DrawImage(param_2,pIVar9,iVar2 - iVar6,iVar1);
            if (iVar5 <= (int)lVar10) break;
            goto LAB_0459d398;
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

