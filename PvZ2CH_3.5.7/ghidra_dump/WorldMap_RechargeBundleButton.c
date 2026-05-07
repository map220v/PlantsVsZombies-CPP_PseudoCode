// Class: WorldMap_RechargeBundleButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButton::StaticClassInit() */

void WorldMap_RechargeBundleButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_RechargeBundleButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045a968c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RechargeBundleButton::StaticGetClass() */

long * WorldMap_RechargeBundleButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_RechargeBundleButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RechargeBundleButton::GetClass() const */

long * WorldMap_RechargeBundleButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_RechargeBundleButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton() */

void __thiscall
WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton(WorldMap_RechargeBundleButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068674f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RechargeBundleButton_06867698;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton() */

void __thiscall
WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton(WorldMap_RechargeBundleButton *this)

{
  ~WorldMap_RechargeBundleButton(this + -0x10);
  return;
}


/* WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton() */

void __thiscall
WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton(WorldMap_RechargeBundleButton *this)

{
  ~WorldMap_RechargeBundleButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton() */

void __thiscall
WorldMap_RechargeBundleButton::~WorldMap_RechargeBundleButton(WorldMap_RechargeBundleButton *this)

{
  ~WorldMap_RechargeBundleButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButton::WorldMap_RechargeBundleButton() */

void __thiscall
WorldMap_RechargeBundleButton::WorldMap_RechargeBundleButton(WorldMap_RechargeBundleButton *this)

{
  undefined *puVar1;
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
  *(undefined ***)this = &PTR_GetClass_068674f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RechargeBundleButton_06867698;
  std::string::string((string *)&local_40,"IMAGE_UI_HUD_WORLDMAP_RECHARGE_BUNDLE");
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
  FUN_045a94b0(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_70 = local_40;
  uStack_68 = uStack_38;
  local_60 = local_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_RechargeBundleButton,void(WorldMap_RechargeBundleButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RechargeBundleButton::StaticNew() */

WorldMap_RechargeBundleButton * WorldMap_RechargeBundleButton::StaticNew(void)

{
  WorldMap_RechargeBundleButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_RechargeBundleButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_RechargeBundleButton::Draw(WorldMap_RechargeBundleButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  vector *pvVar5;
  long lVar6;
  PrimeTypeface *pPVar7;
  LotteryResultProgressBar *this_02;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  Insets aIStack_40 [16];
  Color aCStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = LawnApp::GetRealServerTime(gLawnApp);
  pvVar5 = (vector *)PlayerInfo::GetDisplayingBundleList(this_01);
  std::vector<BundleDisplay,std::allocator<BundleDisplay>>::vector
            ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)&local_20,pvVar5);
  FUN_05476574(auStack_50);
  lVar6 = FUN_045a9280(local_20,local_18);
  if (lVar6 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      while ((auVar11 = FUN_045a9294(local_20,lVar9), 0 < *(int *)(auVar11._0_8_ + 0x10) &&
             ((lVar8 = *(long *)(auVar11._0_8_ + 8), lVar8 < lVar10 || (lVar10 == 0))))) {
        lVar9 = lVar9 + 1;
        lVar10 = lVar8;
        if (lVar9 == lVar6) goto LAB_045a9c04;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar6);
LAB_045a9c04:
    if (0 < lVar10 - lVar4) {
      StringHelper::ToTimeString((StringHelper *)0x3,(float)(lVar10 - lVar4),auVar11._8_4_);
      goto LAB_045a9c28;
    }
  }
  TodStringTranslate(L"[RECHARGEBUNDLE_REFRESH_BUNDLE]");
LAB_045a9c28:
  FUN_054766c8(auStack_50,aCStack_30);
  FUN_05476c50(aCStack_30);
  pPVar7 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar1 = FUN_045a950c(0x5a);
  this_02 = (LotteryResultProgressBar *)
            UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  iVar3 = FUN_045a950c(0x1e);
  Sexy::Insets::Insets(aIStack_40,0,iVar1,iVar2,iVar3);
  FUN_05477b24(auStack_48,auStack_50);
  Sexy::Color::Color(aCStack_30,1);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar7,param_1,aIStack_40,auStack_48,1,1,aCStack_30,0);
  FUN_05476c50(auStack_48);
  FUN_05476c50(auStack_50);
  std::vector<BundleDisplay,std::allocator<BundleDisplay>>::~vector
            ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)&local_20);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_RechargeBundleButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_RechargeBundleButton::Draw(WorldMap_RechargeBundleButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButton::CheckVisibility(bool) */

void WorldMap_RechargeBundleButton::CheckVisibility(bool param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  UniverseMap *this;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar4 != 0) &&
      (this = (UniverseMap *)FUN_045a927c(*(undefined8 *)(lVar4 + 0x2b0)),
      this != (UniverseMap *)0x0)) && (cVar1 = UniverseMap::isInState(this,2), cVar1 == '\0')) {
    bVar2 = RiftUtils::IsWorldMapButtonsEnabled();
    bVar2 = bVar2 | param_1;
    if (bVar2 != 0) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_045a9da8;
    }
  }
  bVar2 = 0;
LAB_045a9da8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RechargeBundleButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_RechargeBundleButton::onNotifyRefreshActivityList
          (WorldMap_RechargeBundleButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2983;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      bVar1 = (bool)CheckVisibility(false);
      UIWidget::SetVisible((UIWidget *)this,bVar1);
      LawnApp::ShowRechargeBundleUI(gLawnApp);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

