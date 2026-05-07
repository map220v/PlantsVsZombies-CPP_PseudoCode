// Class: PlantAdventureUI


/* PlantAdventureUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantAdventureUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAdventureUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall PlantAdventureUI::ScrollTargetReached(PlantAdventureUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantAdventureUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantAdventureUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAdventureUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantAdventureUI::ScrollTargetInterrupted(PlantAdventureUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantAdventureUI::ButtonDepress(int) */

void __thiscall PlantAdventureUI::ButtonDepress(PlantAdventureUI *this,int param_1)

{
  if (param_1 != 0x2711) {
    return;
  }
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* non-virtual thunk to PlantAdventureUI::ButtonDepress(int) */

void __thiscall PlantAdventureUI::ButtonDepress(PlantAdventureUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantAdventureUI::OnRefreshAdventureEditor() */

void PlantAdventureUI::OnRefreshAdventureEditor(void)

{
  char cVar1;
  
  cVar1 = LawnApp::IsAdventureTeamEditorUIValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PlantAdventureUI::OnBackToMap() */

void PlantAdventureUI::OnBackToMap(void)

{
  long lVar1;
  LawnApp *this;
  
  if (gLawnApp != (LawnApp *)0x0) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    this = gLawnApp;
    lVar1 = LawnApp::GetAdventureBonusUI(gLawnApp);
    if (lVar1 != 0) {
      LawnApp::KillAdventureBonusUI(this);
      this = gLawnApp;
    }
    lVar1 = LawnApp::GetAdventureSurpriseUI(this);
    if (lVar1 != 0) {
      LawnApp::KillAdventureSurpriseUI(this);
    }
  }
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::~PlantAdventureUI() */

void __thiscall PlantAdventureUI::~PlantAdventureUI(PlantAdventureUI *this)

{
  LawnApp *pLVar1;
  char cVar2;
  PrimeText *this_00;
  long *plVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0682ee90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f1c8;
  *(undefined ***)(this + 0xe0) = &PTR__PlantAdventureUI_0682f210;
  if (*(long *)(this + 0x170) != 0) {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x170) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Ads");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantAdventureUI::~PlantAdventureUI() */

void __thiscall PlantAdventureUI::~PlantAdventureUI(PlantAdventureUI *this)

{
  ~PlantAdventureUI(this + -0xe0);
  return;
}


/* PlantAdventureUI::~PlantAdventureUI() */

void __thiscall PlantAdventureUI::~PlantAdventureUI(PlantAdventureUI *this)

{
  ~PlantAdventureUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAdventureUI::~PlantAdventureUI() */

void __thiscall PlantAdventureUI::~PlantAdventureUI(PlantAdventureUI *this)

{
  ~PlantAdventureUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::Draw(Sexy::Graphics*) */

void __thiscall PlantAdventureUI::Draw(PlantAdventureUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  long *plVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [8];
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,aIStack_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7338);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar8 = *(int *)(this + 0x100);
  iVar1 = *(int *)(this + 0xf8);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = *(int *)(this + 0xfc);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar5 = FUN_042d2d60(0x14);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,iVar1 + (iVar8 - iVar3) / 2,(iVar2 - iVar4) + iVar5,iVar6,iVar7);
  TodStringTranslate(L"[PLANT_ADVENTURE]");
  iVar8 = *(int *)(this + 0x100);
  iVar1 = *(int *)(this + 0xf8);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = *(int *)(this + 0xfc);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar5 = FUN_042d2d60(0x12);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Insets::Insets(aIStack_28,iVar1 + (iVar8 - iVar3) / 2,(iVar2 - iVar4) + iVar5,iVar6,iVar7);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x108));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af76b8);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x128));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6f88);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,this + 0x148,uVar9,aIStack_18,5,1);
  plVar13 = *(long **)(this + 0x170);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x98))(plVar13,param_1);
  }
  FUN_05478178(aIStack_28,&DAT_056f11a8,auStack_30);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,aIStack_28,(Insets *)(this + 0x128),uVar9,aIStack_18,0,1);
  FUN_05476c50(aIStack_28);
  nop();
  Sexy::Insets::Insets(aIStack_28,(Insets *)(this + 0x138));
  iVar8 = FUN_042d2d60(0x32);
  local_20 = local_20 + iVar8;
  FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,0,1);
  FUN_05476c50(auStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::GetDungeonWidgetStartBtn(std::string) */

void __thiscall PlantAdventureUI::GetDungeonWidgetStartBtn(undefined8 param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdventureDungeonScrollPanel::GetDungeonList();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      uVar4 = 0;
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
LAB_042d9184:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    lVar5 = *plVar3;
    NetworkCacheQueue::getSinaUserID();
    cVar1 = std::operator==(asStack_28,param_2);
    std::string::~string(asStack_28);
    if (cVar1 != '\0') {
      uVar4 = FUN_042d259c(*(undefined8 *)(lVar5 + 0x2e0));
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
      goto LAB_042d9184;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::GetDungeonWidgetSkipBtn(std::string) */

void __thiscall PlantAdventureUI::GetDungeonWidgetSkipBtn(undefined8 param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdventureDungeonScrollPanel::GetDungeonList();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      uVar4 = 0;
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
LAB_042d9290:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    lVar5 = *plVar3;
    NetworkCacheQueue::getSinaUserID();
    cVar1 = std::operator==(asStack_28,param_2);
    std::string::~string(asStack_28);
    if (cVar1 != '\0') {
      uVar4 = FUN_042d25a0(*(undefined8 *)(lVar5 + 0x2f0));
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
      goto LAB_042d9290;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::GetDungeonWidgetFinishBtn(std::string) */

void __thiscall PlantAdventureUI::GetDungeonWidgetFinishBtn(undefined8 param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdventureDungeonScrollPanel::GetDungeonList();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      uVar4 = 0;
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
LAB_042d939c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    lVar5 = *plVar3;
    NetworkCacheQueue::getSinaUserID();
    cVar1 = std::operator==(asStack_28,param_2);
    std::string::~string(asStack_28);
    if (cVar1 != '\0') {
      uVar4 = FUN_042d25a4(*(undefined8 *)(lVar5 + 0x2f8));
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
      goto LAB_042d939c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::Update() */

void __thiscall PlantAdventureUI::Update(PlantAdventureUI *this)

{
  wstring *pwVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PlantAdventureConfig *this_02;
  long *plVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  code *pcVar8;
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xec] != (PlantAdventureUI)0x0) {
    UIFutureGiftShop::Update((UIFutureGiftShop *)this);
    iVar2 = *(int *)(this + 0xe8);
    if (iVar2 == 0) {
      std::string::string(asStack_18,"egypt5");
      uVar5 = GetDungeonWidgetStartBtn(this,asStack_18);
      std::string::~string(asStack_18);
      nop();
      LawnApp::KillGameMaskUI(gLawnApp);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7140);
      LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7140);
      SalesProgressBar::GetCurrentLevel(pSVar7);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
      LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
      SalesProgressBar::GetCurrentLevel(pSVar7);
      std::string::string((string *)awStack_20,"");
      Sexy::Insets::Insets((Insets *)asStack_18);
      GameMaskUI::ShowMask(uVar5,1,(string *)awStack_20,asStack_18);
      std::string::~string((string *)awStack_20);
      nop();
      *(undefined4 *)(this + 0xe8) = 1;
    }
    else if (iVar2 == 2) {
      std::string::string(asStack_18,"egypt5");
      uVar5 = GetDungeonWidgetSkipBtn(this,asStack_18);
      std::string::~string(asStack_18);
      nop();
      LawnApp::KillGameMaskUI(gLawnApp);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7140);
      LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7140);
      SalesProgressBar::GetCurrentLevel(pSVar7);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
      LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
      SalesProgressBar::GetCurrentLevel(pSVar7);
      std::string::string((string *)awStack_20,"");
      Sexy::Insets::Insets((Insets *)asStack_18);
      GameMaskUI::ShowMask(uVar5,1,(string *)awStack_20,asStack_18);
      std::string::~string((string *)awStack_20);
      nop();
      *(undefined4 *)(this + 0xe8) = 3;
    }
    else if (iVar2 == 4) {
      std::string::string(asStack_18,"egypt5");
      uVar5 = GetDungeonWidgetFinishBtn(this,asStack_18);
      std::string::~string(asStack_18);
      nop();
      LawnApp::KillGameMaskUI(gLawnApp);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7140);
      LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7140);
      SalesProgressBar::GetCurrentLevel(pSVar7);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
      LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
      SalesProgressBar::GetCurrentLevel(pSVar7);
      std::string::string((string *)awStack_20,"");
      Sexy::Insets::Insets((Insets *)asStack_18);
      GameMaskUI::ShowMask(uVar5,1,(string *)awStack_20,asStack_18);
      std::string::~string((string *)awStack_20);
      nop();
      *(undefined4 *)(this + 0xe8) = 5;
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      if (*(int *)(this + 0xe8) == 6) {
        PlayerInfo::CompleteTutorial(this_01,0x27);
        *(undefined4 *)(this + 0xe8) = 7;
      }
      pwVar1 = (wstring *)(this + 0xf0);
      this_02 = (PlantAdventureConfig *)LawnApp::GetPlantAdventureConfig(gLawnApp);
      iVar2 = PlantAdventureConfig::GetMaxTeam(this_02);
      TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_TEAM_COUNT]");
      iVar3 = PlayerInfo::GetPlantAdventureTeamCount(this_01);
      TodReplaceNumberString(awStack_20,L"{ILDE}",iVar2 - iVar3);
      FUN_054766c8(pwVar1,asStack_18);
      FUN_05476c50(asStack_18);
      FUN_05476c50(awStack_20);
      TodReplaceNumberString(pwVar1,L"{MAX}",iVar2);
      FUN_054766c8(pwVar1,asStack_18);
      FUN_05476c50(asStack_18);
    }
    plVar4 = *(long **)(this + 0x170);
    if (plVar4 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar4 + 0x80);
      PVZ_RealT();
      (*pcVar8)(plVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::GetDungeonWidget(int) */

void __thiscall PlantAdventureUI::GetDungeonWidget(PlantAdventureUI *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdventureDungeonScrollPanel::GetDungeonList();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
      lVar4 = 0;
LAB_042d988c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar4);
    }
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar4 = *plVar3;
    iVar2 = FUN_042d2598(*(undefined4 *)(lVar4 + 0xf4));
    if (iVar2 == param_1) {
      std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
                ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)avStack_20);
      goto LAB_042d988c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::OnAdventureStarted(int, bool, bool) */

void __thiscall
PlantAdventureUI::OnAdventureStarted(PlantAdventureUI *this,int param_1,bool param_2,bool param_3)

{
  LawnApp *this_00;
  DungeonWidget *this_01;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_2) {
    if (param_3) {
      this_01 = (DungeonWidget *)GetDungeonWidget(this,param_1);
      if (this_01 != (DungeonWidget *)0x0) {
        if (*(int *)(this + 0xe8) == 1) {
          *(undefined4 *)(this + 0xe8) = 2;
          DungeonWidget::RealStartAdventure(this_01);
        }
        else {
          DungeonWidget::RealStartAdventure(this_01);
        }
      }
    }
    else {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,param_3);
      FUN_05476c50(awStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAdventureUI::OnFreeExplore(int, bool) */

void __thiscall PlantAdventureUI::OnFreeExplore(PlantAdventureUI *this,int param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = GetDungeonWidget(this,param_1);
  if (lVar1 == 0) {
    return;
  }
  if (!param_2) {
    DungeonWidget::SkipAdventure((uint)lVar1);
    return;
  }
  FUN_042d26b8(lVar1 + 0xe1);
  DungeonWidget::SkipAdventure((uint)lVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::OnStopExplore(int, int, bool) */

void __thiscall
PlantAdventureUI::OnStopExplore(PlantAdventureUI *this,int param_1,int param_2,bool param_3)

{
  LawnApp *this_00;
  DungeonWidget *this_01;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_3) {
    this_01 = (DungeonWidget *)GetDungeonWidget(this,param_1);
    if (this_01 != (DungeonWidget *)0x0) {
      if (*(int *)(this + 0xe8) == 3) {
        *(undefined4 *)(this + 0xe8) = 4;
      }
      DungeonWidget::RealStopAdventure(this_01,param_2);
      DungeonWidget::NotifyRequestingStateFinish(this_01);
    }
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,param_3);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::OnAdventureFinished(int, bool, bool) */

void __thiscall
PlantAdventureUI::OnAdventureFinished(PlantAdventureUI *this,int param_1,bool param_2,bool param_3)

{
  LawnApp *this_00;
  DungeonWidget *this_01;
  PVZ2UIDialog *pPVar1;
  ReceivedDataCallback *pRVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_2) {
    if (param_3) {
      this_01 = (DungeonWidget *)GetDungeonWidget(this,param_1);
      if (this_01 != (DungeonWidget *)0x0) {
        if (*(int *)(this + 0xe8) == 5) {
          *(undefined4 *)(this + 0xe8) = 6;
          DungeonWidget::RealFinishAdventure(this_01);
        }
        else {
          DungeonWidget::RealFinishAdventure(this_01);
        }
      }
    }
    else {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
      pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BACK_TO_MAP]",auStack_60);
      pRVar2 = (ReceivedDataCallback *)LawnApp::GetPlantAdventureUI(gLawnApp);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (pRVar2,OnBackToMap);
      Sexy::Delegate0::Delegate0<PlantAdventureUI,void(PlantAdventureUI::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,param_3);
      FUN_05476c50(awStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::OnGotExplorePlantStatus(int, bool) */

void __thiscall
PlantAdventureUI::OnGotExplorePlantStatus(PlantAdventureUI *this,int param_1,bool param_2)

{
  LawnApp *pLVar1;
  long lVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  Delegate0 aDStack_f8 [48];
  WorldDungeonInfo aWStack_c8 [96];
  WorldDungeonInfo aWStack_68 [96];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_2) {
    lVar2 = GetDungeonWidget(this,param_1);
    if (lVar2 != 0) {
      DungeonWidget::GetDungeonInfo();
      pLVar1 = gLawnApp;
      WorldDungeonInfo::WorldDungeonInfo(aWStack_68,aWStack_c8);
      LawnApp::ShowAdventureTeamEditorUI(pLVar1,aWStack_68);
      WorldDungeonInfo::~WorldDungeonInfo(aWStack_68);
      WorldDungeonInfo::~WorldDungeonInfo(aWStack_c8);
    }
  }
  else {
    FUN_05478178((wstring *)aWStack_c8,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_108);
    FUN_05478178((wstring *)aWStack_68,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_100);
    pPVar3 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)aWStack_c8,(wstring *)aWStack_68);
    FUN_05476c50((wstring *)aWStack_68);
    nop();
    FUN_05476c50((wstring *)aWStack_c8);
    nop();
    FUN_05478178((wstring *)aWStack_c8,L"[DIALOG_STRING_OK]",auStack_100);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_f8,(wstring *)aWStack_68);
    PVZ2UIDialog::AddButton(pPVar3,(wstring *)aWStack_c8,aDStack_f8,param_2);
    FUN_05476c50((wstring *)aWStack_c8);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::InitPlantAdventureUI(std::string) */

void __thiscall PlantAdventureUI::InitPlantAdventureUI(PlantAdventureUI *this,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  LawnApp *pLVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIButton *this_02;
  SalesProgressBar *pSVar18;
  LotteryResultProgressBar *this_03;
  PVZ2UIScrollingWidget *pPVar19;
  PlantAdventureScrollPanel *pPVar20;
  AdventureDungeonScrollPanel *this_04;
  long lVar21;
  code *pcVar22;
  long *plVar23;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  Insets aIStack_118 [8];
  int local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Delegate0 aDStack_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  pLVar4 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_40,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Activity");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"LevelCommon");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"LevelCommon2");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Store");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Ads");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 == (PlayerInfo *)0x0) ||
     (iVar5 = FUN_042d2594(*(undefined4 *)(this_01 + 0x40)), iVar5 != 0x27)) {
    *(undefined4 *)(this + 0xe8) = 7;
  }
  else {
    PlayerInfo::RemoveAllAdventure(this_01,true,true,true);
    PlayerInfo::SetPlantAdventureState(this_01,0x28a1,1,-1,true,1);
    *(undefined4 *)(this + 0xe8) = 0;
  }
  LawnApp::KillPVZ2Dialog(gLawnApp);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar5 = FUN_042d2d60(0x6e);
  iVar6 = FUN_042d2d60(5);
  iVar5 = iVar5 + iVar6 * 2;
  iVar7 = FUN_042d2d60(0x2d0);
  iVar8 = FUN_042d2d60(500);
  iVar1 = (*(int *)(this + 0x50) - iVar7) / 2;
  iVar6 = FUN_042d2d60(0x14);
  iVar6 = iVar6 + (*(int *)(this + 0x54) - iVar8) / 2;
  iVar9 = FUN_042d2d60(10);
  iVar10 = FUN_042d2d60(0x10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar6,iVar7,iVar8);
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = local_38;
  iVar11 = FUN_042d2d60(10);
  iVar12 = FUN_042d2d60(0x22b);
  iVar13 = FUN_042d2d60(0x10);
  iVar14 = FUN_042d2d60(5);
  iVar15 = FUN_042d2d60(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 + iVar11 * 2 + iVar12,iVar6 + iVar11 + iVar13 + iVar14,iVar5,
             iVar15);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = local_38;
  iVar11 = FUN_042d2d60(10);
  iVar12 = FUN_042d2d60(0x10);
  iVar13 = FUN_042d2d60(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 + iVar11 * 2,iVar6 + iVar11 + iVar12,iVar5,
             iVar8 + (iVar12 + iVar11 * 2) * -2 + iVar13);
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = local_38;
  iVar13 = FUN_042d2d60(0x10);
  iVar11 = *(int *)(this + 0x10c);
  iVar14 = FUN_042d2d60(5);
  iVar12 = *(int *)(this + 0x114);
  iVar15 = FUN_042d2d60(7);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x108),(iVar13 + iVar11) - iVar14,
             *(int *)(this + 0x110),iVar12 + iVar13 * -2 + iVar15);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = local_38;
  iVar11 = FUN_042d2d60(3);
  iVar12 = FUN_042d2d60(10);
  iVar13 = FUN_042d2d60(0x10);
  iVar14 = FUN_042d2d60(8);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar9 + iVar1 + iVar10 + iVar5) - iVar11,iVar12 + iVar6 + iVar13,
             ((iVar12 * -5 + iVar7) - iVar5) + iVar14,(iVar8 + iVar12 * -4) - iVar12);
  iVar5 = *(int *)(this + 0x154);
  *(undefined8 *)(this + 0x128) = local_40;
  uVar2 = (ulong)local_40 >> 0x20;
  *(undefined8 *)(this + 0x130) = local_38;
  iVar12 = FUN_042d2d60(0x10);
  iVar11 = *(int *)(this + 0x134);
  iVar7 = FUN_042d2d60(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x128),(int)uVar2 + iVar5,*(int *)(this + 0x130),
             (iVar11 + iVar12 * -2) - iVar7);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = local_38;
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,&local_c0);
  Sexy::Color::Color((Color *)&local_40,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_02,0x2711,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)&local_40)
  ;
  FUN_05476c50((wstring *)&local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06af7430,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af7568,2);
  PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  pcVar22 = *(code **)(*(long *)this_02 + 0x198);
  iVar5 = FUN_042d2d60(0x2b0);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7430);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar18);
  iVar12 = FUN_042d2d60(0x22);
  this_03 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7430);
  uVar16 = LotteryResultProgressBar::GetCurrentLevel(this_03);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7430);
  uVar17 = SalesProgressBar::GetCurrentLevel(pSVar18);
  (*pcVar22)(this_02,iVar5 + iVar1,(iVar6 - iVar11) + iVar12,uVar16,uVar17);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  if (*(long *)(this + 0x158) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x158));
    *(undefined8 *)(this + 0x158) = 0;
  }
  pPVar19 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar19,(ScrollWidgetListener *)(this + 0xe0));
  lVar21 = *(long *)pPVar19;
  *(PVZ2UIScrollingWidget **)(this + 0x158) = pPVar19;
  (**(code **)(lVar21 + 0x1a0))(pPVar19,this + 0x118);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x158),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x158));
  plVar23 = *(long **)(this + 0x158);
  pcVar22 = *(code **)(*plVar23 + 0x60);
  FUN_05475d88((string *)&local_40,param_2);
  pPVar20 = ::operator_new(0x130);
  PlantAdventureScrollPanel::PlantAdventureScrollPanel(pPVar20,this + 0x148,(string *)&local_40);
  (*pcVar22)(plVar23,pPVar20);
  std::string::~string((string *)&local_40);
  if (*(long *)(this + 0x160) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x160));
    *(undefined8 *)(this + 0x160) = 0;
  }
  pPVar19 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar19,(ScrollWidgetListener *)(this + 0xe0));
  *(PVZ2UIScrollingWidget **)(this + 0x160) = pPVar19;
  Sexy::Insets::Insets(aIStack_118,(Insets *)(this + 0x138));
  iVar5 = FUN_042d2d60(0x32);
  local_110 = local_110 + iVar5;
  (**(code **)(**(long **)(this + 0x160) + 0x1a0))(*(long **)(this + 0x160),aIStack_118);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x160),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x160));
  this_04 = ::operator_new(0x140);
  AdventureDungeonScrollPanel::AdventureDungeonScrollPanel(this_04,(TRect *)(this + 0x128));
  *(AdventureDungeonScrollPanel **)(this + 0x168) = this_04;
  (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),this_04);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAdventureStarted);
  local_140 = local_f0;
  uStack_138 = uStack_e8;
  local_130 = local_e0;
  MessageRouter::
  Subscribe<int,bool,bool,Sexy::CBMemberTranslatorX<PlantAdventureUI,void(PlantAdventureUI::*)(int,bool,bool)>>
            ((MessageRouter *)puVar3,Message::AdventureStart,&local_140);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAdventureFinished);
  local_130 = local_c8;
  MessageRouter::
  Subscribe<int,bool,bool,Sexy::CBMemberTranslatorX<PlantAdventureUI,void(PlantAdventureUI::*)(int,bool,bool)>>
            ((MessageRouter *)puVar3,Message::AdventureFinished,&local_140);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGotExplorePlantStatus);
  local_160 = local_c0;
  uStack_158 = uStack_b8;
  local_150 = local_b0;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PlantAdventureUI,void(PlantAdventureUI::*)(int,bool)>>
            ((MessageRouter *)puVar3,Message::GotExplorePlantStatus,&local_160);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStopExplore);
  local_170 = local_68;
  local_180 = local_78;
  uStack_178 = uStack_70;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<PlantAdventureUI,void(PlantAdventureUI::*)(int,int,bool)>>
            ((MessageRouter *)puVar3,Message::StopExplore,&local_180);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFreeExplore);
  local_160 = local_40;
  uStack_158 = local_38;
  local_150 = local_30;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PlantAdventureUI,void(PlantAdventureUI::*)(int,bool)>>
            ((MessageRouter *)puVar3,Message::FreeExplore,&local_160);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshAdventureEditor);
  Sexy::Delegate0::Delegate0<PlantAdventureUI,void(PlantAdventureUI::*)()>
            (aDStack_a8,(Insets *)&local_108);
  MessageRouter::Subscribe((MessageRouter *)puVar3,Message::RefreshAdventureEditor,aDStack_a8);
  this[0xec] = (PlantAdventureUI)0x1;
  puVar3 = gMessageRouter;
  Sexy::Insets::Insets((Insets *)&local_108);
  MessageRouter::Post<int,PlantAdventureLogInfo_const&,int,PlantAdventureLogInfo>
            (puVar3,Message::PlantAdventure,1,local_108,uStack_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::PlantAdventureUI() */

void __thiscall PlantAdventureUI::PlantAdventureUI(PlantAdventureUI *this)

{
  PrimeText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0682ee90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f1c8;
  *(undefined ***)(this + 0xe0) = &PTR__PlantAdventureUI_0682f210;
  FUN_05476574(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  this[0x59] = (PlantAdventureUI)0x0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 == (PlayerInfo *)0x0) {
    std::string::string(asStack_10,"egypt5");
    InitPlantAdventureUI(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    FUN_042d258c(this_02 + 0x350,0);
    PlayerInfo::RemoveInvalidAdventures(this_02);
    PlayerInfo::GetFirstPlantAdventureOpenInfo();
    InitPlantAdventureUI(this,asStack_10);
    std::string::~string(asStack_10);
    PlayerInfo::RemoveAllPlantAdventureOpenInfo(this_02);
    FUN_042d258c(this_02 + 0x350,1);
    PlayerInfo::SAVE_PROFILE(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::PlantAdventureUI(std::string) */

void __thiscall PlantAdventureUI::PlantAdventureUI(PlantAdventureUI *this,undefined8 param_2)

{
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0682ee90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f1c8;
  *(undefined ***)(this + 0xe0) = &PTR__PlantAdventureUI_0682f210;
  FUN_05476574(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_05475d88(asStack_10,param_2);
  InitPlantAdventureUI(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureUI::SetTabIndex(int) */

void __thiscall PlantAdventureUI::SetTabIndex(PlantAdventureUI *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIScrollingWidget *this_02;
  AdventureDungeonScrollPanel *this_03;
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    FUN_042d258c(this_01 + 0x350,0);
    LawnApp::SetPlantAdventureTabIndex(gLawnApp,param_1);
    if (*(long *)(this + 0x160) != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x160));
      *(undefined8 *)(this + 0x160) = 0;
    }
    this_02 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xe0));
    *(PVZ2UIScrollingWidget **)(this + 0x160) = this_02;
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
    iVar1 = FUN_042d2d60(0x32);
    local_10 = local_10 + iVar1;
    (**(code **)(**(long **)(this + 0x160) + 0x1a0))(*(long **)(this + 0x160),aIStack_18);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x160),2);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x160));
    this_03 = ::operator_new(0x140);
    AdventureDungeonScrollPanel::AdventureDungeonScrollPanel(this_03,(TRect *)(this + 0x128));
    *(AdventureDungeonScrollPanel **)(this + 0x168) = this_03;
    (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),this_03);
    FUN_042d258c(this_01 + 0x350,1);
    PlayerInfo::SAVE_PROFILE(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

