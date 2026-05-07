// Class: WorldMap_AdsLotteryButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsLotteryButton::StaticClassInit() */

void WorldMap_AdsLotteryButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_AdsLotteryButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04bfa2e8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AdsLotteryButton::StaticGetClass() */

long * WorldMap_AdsLotteryButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AdsLotteryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AdsLotteryButton::GetClass() const */

long * WorldMap_AdsLotteryButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AdsLotteryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton() */

void __thiscall
WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton(WorldMap_AdsLotteryButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0697ebb0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AdsLotteryButton_0697ed58;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton() */

void __thiscall
WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton(WorldMap_AdsLotteryButton *this)

{
  ~WorldMap_AdsLotteryButton(this + -0x10);
  return;
}


/* WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton() */

void __thiscall
WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton(WorldMap_AdsLotteryButton *this)

{
  ~WorldMap_AdsLotteryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton() */

void __thiscall
WorldMap_AdsLotteryButton::~WorldMap_AdsLotteryButton(WorldMap_AdsLotteryButton *this)

{
  ~WorldMap_AdsLotteryButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsLotteryButton::checkVisiable() */

void __thiscall WorldMap_AdsLotteryButton::checkVisiable(WorldMap_AdsLotteryButton *this)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  else {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05755470,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsLotteryButton::WorldMap_AdsLotteryButton() */

void __thiscall
WorldMap_AdsLotteryButton::WorldMap_AdsLotteryButton(WorldMap_AdsLotteryButton *this)

{
  undefined *puVar1;
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
  this[0x1d0] = (WorldMap_AdsLotteryButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0697ebb0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AdsLotteryButton_0697ed58;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_ADS_LOTTERY");
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
  FUN_04bfa158(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_AdsLotteryButton,void(WorldMap_AdsLotteryButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEASquaredAdsAvailableChanged);
  Sexy::Delegate0::Delegate0<WorldMap_AdsLotteryButton,void(WorldMap_AdsLotteryButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::EASquaredAdsAvailableChanged,(Delegate0 *)afStack_38);
  checkVisiable(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AdsLotteryButton::StaticNew() */

WorldMap_AdsLotteryButton * WorldMap_AdsLotteryButton::StaticNew(void)

{
  WorldMap_AdsLotteryButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_AdsLotteryButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsLotteryButton::changeAvailable() */

void __thiscall WorldMap_AdsLotteryButton::changeAvailable(WorldMap_AdsLotteryButton *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long *plVar4;
  string asStack_c0 [8];
  AdsData aAStack_b8 [8];
  int local_b0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  bool local_70;
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
    goto LAB_04bfa948;
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04bf9ed4(local_80);
  if (cVar1 != '\0') {
    if (local_70 != false) {
      cVar1 = FUN_0547419c(auStack_48);
      if (cVar1 != '\0') goto LAB_04bfa998;
      AdsData::AdsData(aAStack_b8);
      ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aAStack_b8);
      if (local_b0 != 2) {
        UIWidget::SetVisible((UIWidget *)this,false);
        AdsData::~AdsData(aAStack_b8);
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_04bfa948;
      }
      LawnApp::GetAdsMapLimit();
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_c0,false,pPVar3);
      if (cVar1 == '\0') {
LAB_04bfaa48:
        std::string::~string(asStack_c0);
      }
      else {
        plVar4 = (long *)EASquared::Instance();
        cVar1 = (**(code **)(*plVar4 + 0x58))();
        if ((cVar1 == '\0') || (cVar1 = LawnApp::IsAdChannel(gLawnApp,1), cVar1 == '\0'))
        goto LAB_04bfaa48;
        plVar4 = (long *)EASquared::Instance();
        cVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x2a9c);
        if (cVar1 == '\0') goto LAB_04bfaa48;
        std::string::~string(asStack_c0);
        cVar1 = LawnApp::TestCanShowWorldmapButton(gLawnApp);
        if (cVar1 != '\0') {
          UIWidget::SetVisible((UIWidget *)this,local_70);
        }
      }
      AdsData::~AdsData(aAStack_b8);
      if (local_70 != false) goto LAB_04bfa998;
    }
    UIWidget::SetVisible((UIWidget *)this,false);
  }
LAB_04bfa998:
  if (this[0x1d0] != (WorldMap_AdsLotteryButton)0x0) {
    this[0x1d0] = (WorldMap_AdsLotteryButton)0x0;
    UISingletonDialog<UIAdsLottery>::ShowDialog();
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04bfa948:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AdsLotteryButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_AdsLotteryButton::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  if (((ulong)param_2 & 0xff) == 0) {
    return;
  }
  changeAvailable((WorldMap_AdsLotteryButton *)(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsLotteryButton::onEASquaredAdsAvailableChanged() */

void __thiscall
WorldMap_AdsLotteryButton::onEASquaredAdsAvailableChanged(WorldMap_AdsLotteryButton *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long *plVar4;
  string asStack_c0 [8];
  AdsData aAStack_b8 [8];
  int iStack_b0;
  ActiveItem aAStack_88 [8];
  undefined4 uStack_80;
  bool bStack_70;
  undefined1 auStack_48 [64];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
    goto LAB_04bfa948;
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04bf9ed4(uStack_80);
  if (cVar1 != '\0') {
    if (bStack_70 != false) {
      cVar1 = FUN_0547419c(auStack_48);
      if (cVar1 != '\0') goto LAB_04bfa998;
      AdsData::AdsData(aAStack_b8);
      ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aAStack_b8);
      if (iStack_b0 != 2) {
        UIWidget::SetVisible((UIWidget *)this,false);
        AdsData::~AdsData(aAStack_b8);
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_04bfa948;
      }
      LawnApp::GetAdsMapLimit();
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_c0,false,pPVar3);
      if (cVar1 == '\0') {
LAB_04bfaa48:
        std::string::~string(asStack_c0);
      }
      else {
        plVar4 = (long *)EASquared::Instance();
        cVar1 = (**(code **)(*plVar4 + 0x58))();
        if ((cVar1 == '\0') || (cVar1 = LawnApp::IsAdChannel(gLawnApp,1), cVar1 == '\0'))
        goto LAB_04bfaa48;
        plVar4 = (long *)EASquared::Instance();
        cVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x2a9c);
        if (cVar1 == '\0') goto LAB_04bfaa48;
        std::string::~string(asStack_c0);
        cVar1 = LawnApp::TestCanShowWorldmapButton(gLawnApp);
        if (cVar1 != '\0') {
          UIWidget::SetVisible((UIWidget *)this,bStack_70);
        }
      }
      AdsData::~AdsData(aAStack_b8);
      if (bStack_70 != false) goto LAB_04bfa998;
    }
    UIWidget::SetVisible((UIWidget *)this,false);
  }
LAB_04bfa998:
  if (this[0x1d0] != (WorldMap_AdsLotteryButton)0x0) {
    this[0x1d0] = (WorldMap_AdsLotteryButton)0x0;
    UISingletonDialog<UIAdsLottery>::ShowDialog();
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04bfa948:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

