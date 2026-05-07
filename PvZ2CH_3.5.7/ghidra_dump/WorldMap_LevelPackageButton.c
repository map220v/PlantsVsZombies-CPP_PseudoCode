// Class: WorldMap_LevelPackageButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelPackageButton::StaticClassInit() */

void WorldMap_LevelPackageButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LevelPackageButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045aaf24,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LevelPackageButton::StaticGetClass() */

long * WorldMap_LevelPackageButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LevelPackageButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LevelPackageButton::GetClass() const */

long * WorldMap_LevelPackageButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LevelPackageButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton() */

void __thiscall
WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton(WorldMap_LevelPackageButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068681b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LevelPackageButton_06868358;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton() */

void __thiscall
WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton(WorldMap_LevelPackageButton *this)

{
  ~WorldMap_LevelPackageButton(this + -0x10);
  return;
}


/* WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton() */

void __thiscall
WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton(WorldMap_LevelPackageButton *this)

{
  ~WorldMap_LevelPackageButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton() */

void __thiscall
WorldMap_LevelPackageButton::~WorldMap_LevelPackageButton(WorldMap_LevelPackageButton *this)

{
  ~WorldMap_LevelPackageButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelPackageButton::GetRecentExpirePackageTime() */

void WorldMap_LevelPackageButton::GetRecentExpirePackageTime(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  long lVar4;
  WorldLevelPackageManager *pWVar5;
  int iVar6;
  long lVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  lVar7 = 0;
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  RechargeDailySignActivityManager::GetBannerImageName();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  do {
    FUN_05475d88(asStack_10,asStack_18);
    lVar4 = PlayerInfo::GetWorldLevelPackageExpireTime(pPVar2,asStack_10,iVar6,3);
    std::string::~string(asStack_10);
    pWVar5 = (WorldLevelPackageManager *)
             Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    FUN_05475d88(asStack_10,asStack_18);
    cVar1 = WorldLevelPackageManager::CheckPackageValid(pWVar5,asStack_10,iVar6);
    std::string::~string(asStack_10);
    if (((lVar3 < lVar4) && (cVar1 != '\0')) && ((lVar7 == 0 || (lVar4 < lVar7)))) {
      lVar7 = lVar4;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelPackageButton::WorldMap_LevelPackageButton() */

void __thiscall
WorldMap_LevelPackageButton::WorldMap_LevelPackageButton(WorldMap_LevelPackageButton *this)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  *(undefined ***)this = &PTR_GetClass_068681b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LevelPackageButton_06868358;
  std::string::string((string *)&local_40,"IMAGE_UI_HUD_WORLDMAP_WORLD_LEVEL_PACKAGE_ICON");
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
  FUN_045aad80(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  uVar2 = GetRecentExpirePackageTime();
  *(undefined8 *)(this + 0x1d0) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_70 = local_40;
  uStack_68 = uStack_38;
  local_60 = local_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_LevelPackageButton,void(WorldMap_LevelPackageButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LevelPackageButton::StaticNew() */

WorldMap_LevelPackageButton * WorldMap_LevelPackageButton::StaticNew(void)

{
  WorldMap_LevelPackageButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_LevelPackageButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelPackageButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_LevelPackageButton::Draw(WorldMap_LevelPackageButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  PrimeTypeface *pPVar5;
  LotteryResultProgressBar *this_01;
  undefined8 uVar6;
  int extraout_w1;
  GraphicsAutoState aGStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = LawnApp::GetRealServerTime(gLawnApp);
  FUN_05476574(auStack_38);
  if (*(long *)(this + 0x1d0) != 0) {
    lVar4 = *(long *)(this + 0x1d0) - lVar4;
    if (lVar4 < 1) {
      uVar6 = GetRecentExpirePackageTime();
      *(undefined8 *)(this + 0x1d0) = uVar6;
    }
    else {
      StringHelper::ToTimeString((StringHelper *)0x3,(float)lVar4,extraout_w1);
      FUN_054766c8(auStack_38,aCStack_18);
      FUN_05476c50(aCStack_18);
    }
  }
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar1 = FUN_045aaddc(0x5a);
  this_01 = (LotteryResultProgressBar *)
            UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar3 = FUN_045aaddc(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar3);
  FUN_05477b24(auStack_30,auStack_38);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar5,param_1,aIStack_28,auStack_30,1,1,aCStack_18,0);
  FUN_05476c50(auStack_30);
  FUN_05476c50(auStack_38);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_LevelPackageButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_LevelPackageButton::Draw(WorldMap_LevelPackageButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_LevelPackageButton::UpdateExpireTime() */

void __thiscall WorldMap_LevelPackageButton::UpdateExpireTime(WorldMap_LevelPackageButton *this)

{
  undefined8 uVar1;
  
  uVar1 = GetRecentExpirePackageTime();
  *(undefined8 *)(this + 0x1d0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelPackageButton::CheckVisibility(bool) */

void WorldMap_LevelPackageButton::CheckVisibility(bool param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  UniverseMap *this;
  WorldLevelPackageManager *pWVar5;
  string asStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  if ((((lVar4 == 0) ||
       (this = (UniverseMap *)FUN_045aa61c(*(undefined8 *)(lVar4 + 0x2b0)),
       this == (UniverseMap *)0x0)) || (cVar1 = UniverseMap::isInState(this,2), cVar1 != '\0')) ||
     ((cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 == '\0' && (!param_1)))) {
    bVar2 = 0;
  }
  else {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    ActiveItem::~ActiveItem(aAStack_88);
    Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    RechargeDailySignActivityManager::GetBannerImageName();
    pWVar5 = (WorldLevelPackageManager *)
             Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    FUN_05475d88(asStack_90,asStack_98);
    bVar2 = WorldLevelPackageManager::HasValidPackage(pWVar5,asStack_90);
    bVar2 = bVar2 & local_70;
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelPackageButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_LevelPackageButton::onNotifyRefreshActivityList
          (WorldMap_LevelPackageButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  WorldLevelPackageManager *pWVar4;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_c4 = 0x2a6e;
    local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_045aa620(local_80);
      if ((cVar2 != '\0') && (local_70 != '\0')) {
        WorldLevelPackageNetworkData::WorldLevelPackageNetworkData
                  ((WorldLevelPackageNetworkData *)local_b8);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
        if (cVar2 != '\0') {
          pWVar4 = (WorldLevelPackageManager *)
                   Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
          WorldLevelPackageManager::LoadData(pWVar4,(WorldLevelPackageNetworkData *)local_b8);
          pWVar4 = (WorldLevelPackageManager *)
                   Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
          WorldLevelPackageManager::RefreshValidPackage(pWVar4);
          bVar1 = (bool)CheckVisibility(false);
          UIWidget::SetVisible((UIWidget *)this,bVar1);
        }
        WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData
                  ((WorldLevelPackageNetworkData *)local_b8);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
    else {
      bVar1 = (bool)CheckVisibility(bVar1);
      UIWidget::SetVisible((UIWidget *)this,bVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

