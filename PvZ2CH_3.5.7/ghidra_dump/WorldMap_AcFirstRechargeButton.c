// Class: WorldMap_AcFirstRechargeButton


/* WorldMap_AcFirstRechargeButton::OnNotyFirstRechargeSuc(bool) */

undefined1 WorldMap_AcFirstRechargeButton::OnNotyFirstRechargeSuc(bool param_1)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::StaticClassInit() */

void WorldMap_AcFirstRechargeButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_AcFirstRechargeButton");
    (*pcVar2)(plVar1,asStack_10,FUN_03aed6e8,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AcFirstRechargeButton::StaticGetClass() */

long * WorldMap_AcFirstRechargeButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AcFirstRechargeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AcFirstRechargeButton::GetClass() const */

long * WorldMap_AcFirstRechargeButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AcFirstRechargeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton() */

void __thiscall
WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton
          (WorldMap_AcFirstRechargeButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06723cd0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AcFirstRechargeButton_06723e78;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1d0) + 0x18))();
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton() */

void __thiscall
WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton
          (WorldMap_AcFirstRechargeButton *this)

{
  ~WorldMap_AcFirstRechargeButton(this + -0x10);
  return;
}


/* WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton() */

void __thiscall
WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton
          (WorldMap_AcFirstRechargeButton *this)

{
  ~WorldMap_AcFirstRechargeButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton() */

void __thiscall
WorldMap_AcFirstRechargeButton::~WorldMap_AcFirstRechargeButton
          (WorldMap_AcFirstRechargeButton *this)

{
  ~WorldMap_AcFirstRechargeButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::WorldMap_AcFirstRechargeButton() */

void __thiscall
WorldMap_AcFirstRechargeButton::WorldMap_AcFirstRechargeButton(WorldMap_AcFirstRechargeButton *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  long lVar2;
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
  *(undefined ***)this = &PTR_GetClass_06723cd0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AcFirstRechargeButton_06723e78;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_FIRST_RECHARGE");
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
  this_00 = gLawnApp;
  std::string::string((string *)&local_50,"Effects_FirstRecharge");
  LawnApp::LoadGroup(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  FUN_03aed2fc(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::
  Delegate0<WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotyFirstRechargeSuc);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)(bool)>>
            ((MessageRouter *)puVar1,Message::AcFirstRechargeSuc,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_b0);
  *(undefined8 *)(this + 0x1d0) = 0;
  lVar2 = ___stack_chk_guard;
  this[0x1d8] = (WorldMap_AcFirstRechargeButton)0x0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AcFirstRechargeButton::StaticNew() */

WorldMap_AcFirstRechargeButton * WorldMap_AcFirstRechargeButton::StaticNew(void)

{
  WorldMap_AcFirstRechargeButton *this;
  
  this = ::operator_new(0x1e0);
  WorldMap_AcFirstRechargeButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::InitShinningAnim() */

void __thiscall
WorldMap_AcFirstRechargeButton::InitShinningAnim(WorldMap_AcFirstRechargeButton *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  long *plVar3;
  Insets *pIVar4;
  StandaloneEffect *this_00;
  FastCurve aFStack_30 [8];
  string asStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  RtWeakPtr aRStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1d0) == 0) {
    pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x1d0) = pEVar1;
    std::string::string(asStack_28,"POPANIM_EFFECTS_FIRST_RECHARGE_ICON_SHINNING");
    GetPAMByName(asStack_28);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_28);
    nop();
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x1d0),(PopAnim *)pRVar2,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1d0),true);
    Sexy::Insets::Insets((Insets *)asStack_28);
    plVar3 = (long *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x1d0));
    (**(code **)(*plVar3 + 0x90))(plVar3,asStack_28);
    FUN_03aecd88(this + 0x38,local_20);
    FUN_03aecd90(this + 0x3c,local_1c);
    pIVar4 = (Insets *)UIWidget::GetRect((UIWidget *)this);
    Sexy::Insets::Insets((Insets *)aRStack_18,pIVar4);
    this_00 = *(StandaloneEffect **)(this + 0x1d0);
    Sexy::FastCurve::SetOutRange(aFStack_30,(float)(local_10 / 2),(float)(local_c / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_30,900000);
    (**(code **)(**(long **)(this + 0x1d0) + 0xb8))(0x3f4ccccd,0x3f4ccccd,*(long **)(this + 0x1d0));
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1d0),true);
    pEVar1 = *(Effect_PopAnim **)(this + 0x1d0);
    std::string::string((string *)aFStack_30,"animation");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,aFStack_30,0);
    std::string::~string((string *)aFStack_30);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::CheckEnable() */

void WorldMap_AcFirstRechargeButton::CheckEnable(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined1 uVar3;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    std::string::string(asStack_90,"egypt8");
    cVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if ((cVar1 != '\0') && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      cVar1 = FUN_03aecdc4(local_80);
      uVar3 = 0;
      if (cVar1 != '\0') {
        uVar3 = local_70;
      }
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_03aee380;
    }
  }
  uVar3 = 0;
LAB_03aee380:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WorldMap_AcFirstRechargeButton::onUpdate() */

void __thiscall WorldMap_AcFirstRechargeButton::onUpdate(WorldMap_AcFirstRechargeButton *this)

{
  char cVar1;
  
  cVar1 = CheckEnable();
  if ((cVar1 != '\0') && (*(StandaloneEffect **)(this + 0x1d0) != (StandaloneEffect *)0x0)) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1d0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::onButtonClicked() */

void __thiscall
WorldMap_AcFirstRechargeButton::onButtonClicked(WorldMap_AcFirstRechargeButton *this)

{
  LawnApp *this_00;
  char cVar1;
  ActivityManager *this_01;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CheckEnable();
  if (cVar1 != '\0') {
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
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(this_01,0x29c1,false,0);
      this[0x1d8] = (WorldMap_AcFirstRechargeButton)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_AcFirstRechargeButton::Draw(WorldMap_AcFirstRechargeButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  FirstRechargeExtraManager *this_00;
  Image *pIVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = CheckEnable();
  if (cVar1 != '\0') {
    if (*(StandaloneEffect **)(this + 0x1d0) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1d0),param_1);
    }
    this_00 = (FirstRechargeExtraManager *)
              Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
    iVar2 = FirstRechargeExtraManager::IsBonusReadyGot(this_00);
    if (-1 < iVar2) {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8e20);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_AcFirstRechargeButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_AcFirstRechargeButton::Draw(WorldMap_AcFirstRechargeButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::CheckActivated() */

void __thiscall WorldMap_AcFirstRechargeButton::CheckActivated(WorldMap_AcFirstRechargeButton *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    UIWidget::SetVisible((UIWidget *)this,false);
    cVar1 = '\0';
  }
  else {
    std::string::string(asStack_90,"egypt8");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if ((cVar1 == '\0') || (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03aecdc4(local_80);
      cVar1 = '\0';
      if ((cVar2 != '\0') && (cVar1 = local_70, local_70 != '\0')) {
        UIWidget::SetVisible((UIWidget *)this,true);
        InitShinningAnim(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::onWorldLoaded() */

void __thiscall WorldMap_AcFirstRechargeButton::onWorldLoaded(WorldMap_AcFirstRechargeButton *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 uStack_80;
  char cStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    UIWidget::SetVisible((UIWidget *)this,false);
    cVar1 = '\0';
  }
  else {
    std::string::string(asStack_90,"egypt8");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if ((cVar1 == '\0') || (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03aecdc4(uStack_80);
      cVar1 = '\0';
      if ((cVar2 != '\0') && (cVar1 = cStack_70, cStack_70 != '\0')) {
        UIWidget::SetVisible((UIWidget *)this,true);
        InitShinningAnim(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AcFirstRechargeButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_AcFirstRechargeButton::onNotifyRefreshActivityList
          (WorldMap_AcFirstRechargeButton *this,bool param_1,set *param_2)

{
  WorldMap_AcFirstRechargeButton WVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  FirstRechargeExtraManager *this_00;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0 [13];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    cVar2 = FUN_03aecdc4(local_80);
    if ((cVar2 != '\0') && (local_70 != '\0')) {
      InitShinningAnim(this);
      local_fc = 0x29c1;
      local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
      local_f0[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
      if (bVar3) {
        FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
                  ((FirstRechargeExtraNetworkData *)local_f0);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_f0);
        if (cVar2 != '\0') {
          bVar4 = FirstRechargeExtraNetworkData::IsPopUp((FirstRechargeExtraNetworkData *)local_f0);
          WVar1 = this[0x1d8];
          this_00 = (FirstRechargeExtraManager *)
                    Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
          FirstRechargeExtraManager::LoadData
                    (this_00,(FirstRechargeExtraNetworkData *)local_f0,(bool)(bVar4 | (byte)WVar1));
        }
        this[0x1d8] = (WorldMap_AcFirstRechargeButton)0x0;
        FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData
                  ((FirstRechargeExtraNetworkData *)local_f0);
      }
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

