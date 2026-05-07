// Class: WorldMap_AdsRewardButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::onLoadComplete() */

void WorldMap_AdsRewardButton::onLoadComplete(void)

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
    iVar2 = FUN_04bf8b48(0x14);
    iVar3 = FUN_04bf8b48(0);
    fVar5 = (float)iVar3;
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,fVar5);
    uVar4 = Sexy::SexyVector2::operator+(this,(SexyVector2 *)aFStack_10);
    UIWidget::SetPositionOffset(uVar4,fVar5);
    iVar2 = FUN_04bf8740(*(undefined4 *)(in_x0 + 0x38));
    iVar3 = FUN_04bf874c(*(undefined4 *)(in_x0 + 0x3c));
    FUN_04bf8744(in_x0 + 0x38,(int)((float)iVar2 * 0.8));
    FUN_04bf8750(in_x0 + 0x3c,(int)((float)iVar3 * 0.8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::StaticClassInit() */

void WorldMap_AdsRewardButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_AdsRewardButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04bf8da4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AdsRewardButton::StaticGetClass() */

long * WorldMap_AdsRewardButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AdsRewardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AdsRewardButton::GetClass() const */

long * WorldMap_AdsRewardButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AdsRewardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton() */

void __thiscall WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton(WorldMap_AdsRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0697e9b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AdsRewardButton_0697eb58;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton() */

void __thiscall WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton(WorldMap_AdsRewardButton *this)

{
  ~WorldMap_AdsRewardButton(this + -0x10);
  return;
}


/* WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton() */

void __thiscall WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton(WorldMap_AdsRewardButton *this)

{
  ~WorldMap_AdsRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton() */

void __thiscall WorldMap_AdsRewardButton::~WorldMap_AdsRewardButton(WorldMap_AdsRewardButton *this)

{
  ~WorldMap_AdsRewardButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::onGetReward(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall WorldMap_AdsRewardButton::onGetReward(undefined8 param_1,int param_2)

{
  NetworkMgr *this;
  long *plVar1;
  char *__s;
  TGALogMgr *local_58;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    this = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
    if (*(code **)(*plVar1 + 0x3a8) != INetworkMsgProcess::RequestADSReward) {
      (**(code **)(*plVar1 + 0x3a8))();
    }
    local_58 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __s = "2";
  }
  else {
    local_58 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __s = "4";
  }
  std::string::string(asStack_28,__s);
  std::string::string(asStack_20,"");
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  TGALogMgr::LogAD(local_58,asStack_28,asStack_20,2,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::checkVisiable() */

void __thiscall WorldMap_AdsRewardButton::checkVisiable(WorldMap_AdsRewardButton *this)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsAdChannel(gLawnApp,1);
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  else {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05755450,1,auStack_28);
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
/* WorldMap_AdsRewardButton::WorldMap_AdsRewardButton() */

void __thiscall WorldMap_AdsRewardButton::WorldMap_AdsRewardButton(WorldMap_AdsRewardButton *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
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
  *(undefined ***)this = &PTR_GetClass_0697e9b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AdsRewardButton_0697eb58;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_ADS_REWARD_COINS");
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
  FUN_04bf8aec(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEASquaredAdsAvailableChanged);
  Sexy::Delegate0::Delegate0<WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::EASquaredAdsAvailableChanged,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAdsReward);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<S2C_ADSReward_const&,Sexy::CBMemberTranslatorX<WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)(S2C_ADSReward_const&)>>
            ((MessageRouter *)puVar1,Message::NotifyAdsReward,&local_b0);
  checkVisiable(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AdsRewardButton::StaticNew() */

WorldMap_AdsRewardButton * WorldMap_AdsRewardButton::StaticNew(void)

{
  WorldMap_AdsRewardButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_AdsRewardButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::changeAvailable() */

void __thiscall WorldMap_AdsRewardButton::changeAvailable(WorldMap_AdsRewardButton *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  AdsData aAStack_b8 [8];
  int local_b0;
  int local_ac;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  bool local_70;
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_04bf8780(local_80);
  if (cVar1 == '\0') {
LAB_04bf98ac:
    cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  }
  else {
    if (local_70 != false) {
      cVar1 = FUN_0547419c(auStack_48);
      if (cVar1 != '\0') goto LAB_04bf98ac;
      AdsData::AdsData(aAStack_b8);
      ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aAStack_b8);
      if (local_b0 != 1) {
        UIWidget::SetVisible((UIWidget *)this,false);
        AdsData::~AdsData(aAStack_b8);
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_04bf98c0;
      }
      std::string::string(asStack_d0,"IMAGE_UI_HUD_WORLDMAP_ADS_REWARD_");
      nop();
      GetRewardType(local_ac);
      thunk_FUN_054757c0(asStack_d0,asStack_c8);
      cVar1 = FUN_0547419c(asStack_c8);
      if (cVar1 == '\0') {
        FUN_05475d88(asStack_c0,asStack_d0);
        UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_c0);
        std::string::~string(asStack_c0);
      }
      else {
        std::string::string(asStack_c0,"");
        UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_c0);
        std::string::~string(asStack_c0);
        nop();
      }
      plVar4 = (long *)EASquared::Instance();
      cVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4,7);
      LawnApp::GetAdsMapLimit();
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar2 = ProfileUtils::HasCompletedLevel(asStack_c0,false,pPVar5);
      if (cVar2 == '\0') {
LAB_04bf99d0:
        std::string::~string(asStack_c0);
      }
      else {
        plVar4 = (long *)EASquared::Instance();
        cVar2 = (**(code **)(*plVar4 + 0x58))();
        if (((cVar2 == '\0') || (cVar2 = LawnApp::IsAdChannel(gLawnApp,1), cVar2 == '\0')) ||
           (cVar1 == '\0')) goto LAB_04bf99d0;
        std::string::~string(asStack_c0);
        cVar1 = LawnApp::TestCanShowWorldmapButton(gLawnApp);
        if (cVar1 != '\0') {
          UIWidget::SetVisible((UIWidget *)this,local_70);
        }
      }
      std::string::~string(asStack_c8);
      std::string::~string(asStack_d0);
      AdsData::~AdsData(aAStack_b8);
      if (local_70 != false) goto LAB_04bf98ac;
    }
    UIWidget::SetVisible((UIWidget *)this,false);
    cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  }
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04bf98c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::onEASquaredAdsAvailableChanged() */

void __thiscall
WorldMap_AdsRewardButton::onEASquaredAdsAvailableChanged(WorldMap_AdsRewardButton *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  AdsData aAStack_b8 [8];
  int iStack_b0;
  int iStack_ac;
  ActiveItem aAStack_88 [8];
  undefined4 uStack_80;
  bool bStack_70;
  undefined1 auStack_48 [64];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_04bf8780(uStack_80);
  if (cVar1 == '\0') {
LAB_04bf98ac:
    cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  }
  else {
    if (bStack_70 != false) {
      cVar1 = FUN_0547419c(auStack_48);
      if (cVar1 != '\0') goto LAB_04bf98ac;
      AdsData::AdsData(aAStack_b8);
      ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aAStack_b8);
      if (iStack_b0 != 1) {
        UIWidget::SetVisible((UIWidget *)this,false);
        AdsData::~AdsData(aAStack_b8);
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_04bf98c0;
      }
      std::string::string(asStack_d0,"IMAGE_UI_HUD_WORLDMAP_ADS_REWARD_");
      nop();
      GetRewardType(iStack_ac);
      thunk_FUN_054757c0(asStack_d0,asStack_c8);
      cVar1 = FUN_0547419c(asStack_c8);
      if (cVar1 == '\0') {
        FUN_05475d88(asStack_c0,asStack_d0);
        UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_c0);
        std::string::~string(asStack_c0);
      }
      else {
        std::string::string(asStack_c0,"");
        UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_c0);
        std::string::~string(asStack_c0);
        nop();
      }
      plVar4 = (long *)EASquared::Instance();
      cVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4,7);
      LawnApp::GetAdsMapLimit();
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar2 = ProfileUtils::HasCompletedLevel(asStack_c0,false,pPVar5);
      if (cVar2 == '\0') {
LAB_04bf99d0:
        std::string::~string(asStack_c0);
      }
      else {
        plVar4 = (long *)EASquared::Instance();
        cVar2 = (**(code **)(*plVar4 + 0x58))();
        if (((cVar2 == '\0') || (cVar2 = LawnApp::IsAdChannel(gLawnApp,1), cVar2 == '\0')) ||
           (cVar1 == '\0')) goto LAB_04bf99d0;
        std::string::~string(asStack_c0);
        cVar1 = LawnApp::TestCanShowWorldmapButton(gLawnApp);
        if (cVar1 != '\0') {
          UIWidget::SetVisible((UIWidget *)this,bStack_70);
        }
      }
      std::string::~string(asStack_c8);
      std::string::~string(asStack_d0);
      AdsData::~AdsData(aAStack_b8);
      if (bStack_70 != false) goto LAB_04bf98ac;
    }
    UIWidget::SetVisible((UIWidget *)this,false);
    cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  }
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04bf98c0:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap_AdsRewardButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_AdsRewardButton::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  if (((ulong)param_2 & 0xff) == 0) {
    return;
  }
  changeAvailable((WorldMap_AdsRewardButton *)(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AdsRewardButton::onNotifyAdsReward(S2C_ADSReward const&) */

void __thiscall
WorldMap_AdsRewardButton::onNotifyAdsReward(WorldMap_AdsRewardButton *this,S2C_ADSReward *param_1)

{
  char cVar1;
  AdsRewardUI *this_00;
  int *piVar2;
  NameMapperBase *pNVar3;
  TGALogMgr *pTVar4;
  char *pcVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x8c) == -1) {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  else {
    std::string::string(asStack_30,"IMAGE_UI_HUD_WORLDMAP_ADS_REWARD_");
    nop();
    GetRewardType(*(int *)(param_1 + 0x8c));
    thunk_FUN_054757c0(asStack_30,asStack_28);
    cVar1 = FUN_0547419c(asStack_28);
    if (cVar1 == '\0') {
      FUN_05475d88(asStack_18,asStack_30);
      UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_18);
      std::string::~string(asStack_18);
    }
    else {
      std::string::string(asStack_18,"");
      UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_18);
      std::string::~string(asStack_18);
      nop();
    }
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_1 + 0x68));
  if ((cVar1 == '\0') &&
     (this_00 = (AdsRewardUI *)UISingletonDialog<AdsRewardUI>::ShowDialog(),
     this_00 != (AdsRewardUI *)0x0)) {
    iVar8 = 4;
    piVar2 = (int *)FUN_04bf8790(*(undefined8 *)(param_1 + 0x68));
    AdsRewardUI::setReward(this_00,*piVar2,piVar2[1]);
    pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    piVar2 = (int *)FUN_04bf8790(*(undefined8 *)(param_1 + 0x68));
    cVar1 = NameMapperBase::ContainsId(pNVar3,*piVar2);
    if (cVar1 == '\0') {
      OtherServerNameMapper::GetInstance();
      iVar8 = 2;
      puVar7 = (undefined4 *)FUN_04bf8790(*(undefined8 *)(param_1 + 0x68));
      cVar1 = FUN_04bf8770(*puVar7);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        iVar8 = 1;
        puVar7 = (undefined4 *)FUN_04bf8790(*(undefined8 *)(param_1 + 0x68));
        cVar1 = FUN_04bf8760(*puVar7);
        if (cVar1 == '\0') {
          pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
          piVar2 = (int *)FUN_04bf8790(*(undefined8 *)(param_1 + 0x68));
          cVar1 = NameMapperBase::ContainsId(pNVar3,*piVar2);
          iVar8 = 0;
          if (cVar1 != '\0') {
            iVar8 = 3;
          }
        }
      }
    }
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_48,"3");
    std::string::string(asStack_40,"");
    DString::DString((DString *)asStack_28,iVar8);
    pcVar5 = (char *)DString::c_str((DString *)asStack_28);
    std::string::string(asStack_38,pcVar5);
    lVar6 = FUN_04bf8790(*(undefined8 *)(param_1 + 0x68));
    DString::DString((DString *)asStack_18,*(int *)(lVar6 + 4));
    pcVar5 = (char *)DString::c_str((DString *)asStack_18);
    std::string::string(asStack_30,pcVar5);
    TGALogMgr::LogAD(pTVar4,asStack_48,asStack_40,2,asStack_38,asStack_30);
    std::string::~string(asStack_30);
    nop();
    DString::~DString((DString *)asStack_18);
    std::string::~string(asStack_38);
    nop();
    DString::~DString((DString *)asStack_28);
    std::string::~string(asStack_40);
    nop();
    std::string::~string(asStack_48);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

