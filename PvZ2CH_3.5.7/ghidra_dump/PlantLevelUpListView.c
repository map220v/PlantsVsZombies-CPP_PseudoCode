// Class: PlantLevelUpListView


/* PlantLevelUpListView::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantLevelUpListView::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantLevelUpListView::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantLevelUpListView::ScrollTargetReached(PlantLevelUpListView *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantLevelUpListView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantLevelUpListView::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantLevelUpListView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantLevelUpListView::ScrollTargetInterrupted(PlantLevelUpListView *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantLevelUpListView::RefreshSkillButtonRender() */

void __thiscall PlantLevelUpListView::RefreshSkillButtonRender(PlantLevelUpListView *this)

{
  this[0x1c0] = (PlantLevelUpListView)0x1;
  return;
}


/* PlantLevelUpListView::HideDisplayItems(bool) */

void __thiscall PlantLevelUpListView::HideDisplayItems(PlantLevelUpListView *this,bool param_1)

{
  long *plVar1;
  
  if (*(PlantDisplayBoard **)(this + 0x1a8) != (PlantDisplayBoard *)0x0) {
    PlantDisplayBoard::HideDisplayItems(*(PlantDisplayBoard **)(this + 0x1a8),param_1);
  }
  (**(code **)(**(long **)(this + 0x128) + 0x158))(*(long **)(this + 0x128),0);
  (**(code **)(**(long **)(this + 0x128) + 0x188))(*(long **)(this + 0x128),1);
  plVar1 = *(long **)(this + 0x140);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x140) + 0x188))(*(long **)(this + 0x140),1);
  }
  return;
}


/* PlantLevelUpListView::EnableAutoNext() */

void __thiscall PlantLevelUpListView::EnableAutoNext(PlantLevelUpListView *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    FUN_04391bb0(*(long *)(this + 0x1a8) + 0xd3);
    return;
  }
  return;
}


/* PlantLevelUpListView::DisableAutoNext() */

void __thiscall PlantLevelUpListView::DisableAutoNext(PlantLevelUpListView *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    FUN_04391bbc(*(long *)(this + 0x1a8) + 0xd3);
    return;
  }
  return;
}


/* PlantLevelUpListView::AutoTestSelected(int) */

undefined8 PlantLevelUpListView::AutoTestSelected(int param_1)

{
  (**(code **)(**(long **)((ulong)(uint)param_1 + 0x120) + 0x310))
            (*(long **)((ulong)(uint)param_1 + 0x120));
  return 1;
}


/* PlantLevelUpListView::SetCurrentPlantProp(Sexy::RtWeakPtr<MagentoProductProps> const&) */

void __thiscall
PlantLevelUpListView::SetCurrentPlantProp(PlantLevelUpListView *this,RtWeakPtr *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_1);
  return;
}


/* PlantLevelUpListView::LevelUpOk() */

void __thiscall PlantLevelUpListView::LevelUpOk(PlantLevelUpListView *this)

{
  undefined4 uVar1;
  NameMapperBase *this_00;
  long lVar2;
  NetworkMgr *this_01;
  long *plVar3;
  
  ProfileUtils::Profile();
  if ((*(int *)(this + 0x170) == 0) || (*(int *)(this + 0x170) == 2)) {
    this_00 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    uVar1 = NameMapperBase::GetIdForName(this_00,(string *)(lVar2 + 0x80));
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
    (**(code **)(*plVar3 + 0x448))(plVar3,uVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::AutoTestPlantLevelUp() */

void __thiscall PlantLevelUpListView::AutoTestPlantLevelUp(PlantLevelUpListView *this)

{
  LawnApp *pLVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPlantLevelUpCheckDialog(gLawnApp);
  pLVar1 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xe8));
  LawnApp::ShowPlantLevelUpCheckDialog(pLVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  LawnApp::KillGameMaskUI(gLawnApp);
  LevelUpOk(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::~PlantLevelUpListView() */

void __thiscall PlantLevelUpListView::~PlantLevelUpListView(PlantLevelUpListView *this)

{
  LawnApp *pLVar1;
  char cVar2;
  PrimeText *this_00;
  long *plVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683e190;
  *(undefined ***)(this + 0xd8) = &PTR__PlantLevelUpListView_0683e4d0;
  *(undefined **)(this + 0xe0) = &DAT_0683e518;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 0x18))();
    *(undefined8 *)(this + 0x158) = 0;
  }
  if (*(long *)(this + 0x1c8) != 0) {
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
    *(undefined8 *)(this + 0x1c8) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"AudioCommon");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"Effects_LevelUp");
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
  std::string::~string((string *)(this + 0x1d8));
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 0x198);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantLevelUpListView::~PlantLevelUpListView() */

void __thiscall PlantLevelUpListView::~PlantLevelUpListView(PlantLevelUpListView *this)

{
  ~PlantLevelUpListView(this + -0xd8);
  return;
}


/* PlantLevelUpListView::~PlantLevelUpListView() */

void __thiscall PlantLevelUpListView::~PlantLevelUpListView(PlantLevelUpListView *this)

{
  ~PlantLevelUpListView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantLevelUpListView::~PlantLevelUpListView() */

void __thiscall PlantLevelUpListView::~PlantLevelUpListView(PlantLevelUpListView *this)

{
  ~PlantLevelUpListView(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::TutorialLevelUpFinishFirstStep() */

void __thiscall PlantLevelUpListView::TutorialLevelUpFinishFirstStep(PlantLevelUpListView *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    lVar6 = ProfileUtils::Profile();
    iVar2 = FUN_04391b90(*(undefined4 *)(lVar6 + 0x40));
    if ((iVar2 == 0x1d) && (*(long *)(this + 0x1c8) != 0)) {
      Sexy::Point::Point((Point *)&local_20,*(int *)(*(long *)(this + 0x138) + 0x48),
                         *(int *)(*(long *)(this + 0x138) + 0x4c));
      for (lVar6 = *(long *)(*(long *)(this + 0x138) + 0x20); lVar6 != 0;
          lVar6 = *(long *)(lVar6 + 0x20)) {
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  (aUStack_10,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
        Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aUStack_10);
      }
      iVar2 = FUN_043924ac(0x28);
      pLVar1 = gLawnApp;
      iVar3 = FUN_043924ac(0x1e);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,(float)iVar2 + (float)local_20,
                 (float)iVar3 + (float)local_1c);
      fVar8 = (float)FUN_043924c0(0x42c80000);
      uVar7 = *(undefined8 *)(this + 0x138);
      std::string::string((string *)aUStack_10,"");
      LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,(int)fVar8,uVar7,aUStack_10);
      std::string::~string((string *)aUStack_10);
      nop();
      lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
      uVar4 = FUN_043924ac(0xffffffce);
      uVar5 = FUN_043924ac(0x96);
      FUN_04391c9c(0x42b40000,lVar6 + 0xf8,lVar6 + 0x100,uVar4,uVar5);
    }
    this[0x1d0] = (PlantLevelUpListView)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantLevelUpListView::onQueuedNarrationFinished() */

void PlantLevelUpListView::onQueuedNarrationFinished(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
  FUN_04391c90(lVar1 + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::TutorialFinish() */

void __thiscall PlantLevelUpListView::TutorialFinish(PlantLevelUpListView *this)

{
  char cVar1;
  int iVar2;
  PlayerInfo *pPVar3;
  TutorialEffectMgr *this_00;
  long *plVar4;
  CrazyNPCManager *pCVar5;
  string asStack_60 [8];
  string asStack_58 [8];
  RtMixedPtrBase aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    iVar2 = FUN_04391b90(*(undefined4 *)(pPVar3 + 0x40));
    if (iVar2 == 8) {
      PlayerInfo::CompleteTutorial(pPVar3,8);
    }
    else if ((iVar2 == 0x1d) &&
            (pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp),
            pCVar5 != (CrazyNPCManager *)0x0)) {
      std::string::string(asStack_60,"TUTORIAL_LEVEL_UP_LEGEND_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onQueuedNarrationFinished);
      Sexy::Delegate0::Delegate0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>
                (aDStack_38,aRStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar5,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
    if (*(long *)(this + 0x1c8) != 0) {
      LawnApp::KillGameMaskUI(gLawnApp);
      ToolPacketData::GetProps();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      if (cVar1 != '\0') {
        ToolPacketData::GetProps();
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        (**(code **)(*plVar4 + 0x48))();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      *(undefined8 *)(this + 0x1c8) = 0;
    }
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x118),1);
    this_00 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    std::string::string((string *)aRStack_50,"[ADVICE_PLANT_LEVEL_UP_END]");
    TutorialEffectMgr::DisplayAdvice(this_00,(string *)aRStack_50);
    std::string::~string((string *)aRStack_50);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantLevelUpListView::DrawAll(PlantLevelUpListView *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if ((((*(long *)(this + 0x1c8) != 0) && (this[0x1d3] == (PlantLevelUpListView)0x0)) &&
      (lVar6 = LawnApp::GetGameMaskUI(gLawnApp), lVar6 == 0)) &&
     (lVar6 = PlantScrollListUI::GetFirstPlantContentByName(*(PlantScrollListUI **)(this + 0x120)),
     lVar6 != 0)) {
    Sexy::Point::Point((Point *)&local_20,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
    for (lVar7 = *(long *)(lVar6 + 0x20); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      UnchartedModePlantNumData::UnchartedModePlantNumData
                (aUStack_10,*(int *)(lVar7 + 0x48),*(int *)(lVar7 + 0x4c));
      Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aUStack_10);
    }
    iVar2 = FUN_043924ac(0x32);
    pLVar1 = gLawnApp;
    iVar3 = FUN_043924ac(0x23);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)iVar2 + (float)local_20,(float)iVar3 + (float)local_1c)
    ;
    fVar8 = (float)FUN_043924c0(0x42f00000);
    std::string::string((string *)aUStack_10,"");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,(int)fVar8,lVar6,aUStack_10);
    std::string::~string((string *)aUStack_10);
    nop();
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar4 = FUN_043924ac(0x2d);
    uVar5 = FUN_043924ac(0x12);
    FUN_04391c9c(0,lVar6 + 0xf8,lVar6 + 0x100,uVar4,uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::onPlantLevelUpSuccess() */

void PlantLevelUpListView::onPlantLevelUpSuccess(void)

{
  LawnApp *pLVar1;
  char cVar2;
  long in_x0;
  PlayerInfo *this;
  MagentoProductProps *this_00;
  long lVar3;
  wchar16 *pwVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_30 [8];
  string asStack_28 [8];
  GachaItemInfo aGStack_20 [12];
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  UISingletonDialog<AdaptiveMessageBox>::CloseDialog();
  GachaItemInfo::GachaItemInfo(aGStack_20);
  this = (PlayerInfo *)ProfileUtils::Profile();
  this_00 = (MagentoProductProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8));
  cVar2 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_00,*(int *)(in_x0 + 0x1b4),(LevelUpPriceData *)aGStack_20);
  if (cVar2 == '\0') goto LAB_04396888;
  if (local_10 == 2) {
    PlayerInfo::SubtractCoins(this,local_14);
  }
  lVar3 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  if (lVar3 == 0) {
LAB_043968d8:
    pLVar1 = gLawnApp;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8));
    FUN_05475d88(asStack_28,lVar3 + 0x80);
    LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,0,asStack_28,*(undefined4 *)(in_x0 + 0x1b4));
    std::string::~string(asStack_28);
  }
  else {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_30;
    std::string::string(asStack_28,"AutoTestPlantLevelUp");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_28,pLVar5,in_x3,in_x4);
    std::string::~string(asStack_28);
    nop();
    if (cVar2 == '\0') goto LAB_043968d8;
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  *(undefined1 *)(in_x0 + 0x1c0) = 1;
LAB_04396888:
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLevelUpListView::DisplayPlantLevel(int) */

void __thiscall PlantLevelUpListView::DisplayPlantLevel(PlantLevelUpListView *this,int param_1)

{
  if (*(long *)(this + 0x1a8) != 0) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::DisplayLevelSelect,param_1);
    return;
  }
  return;
}


/* PlantLevelUpListView::ButtonPress(int) */

void PlantLevelUpListView::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantLevelUpListView::ButtonPress(int) */

void __thiscall PlantLevelUpListView::ButtonPress(PlantLevelUpListView *this,int param_1)

{
  ButtonPress((int)this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::ButtonDepress(int) */

void __thiscall PlantLevelUpListView::ButtonDepress(PlantLevelUpListView *this,int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  PlayerInfo *this_00;
  long lVar4;
  char *pcVar5;
  NewPlantUIMgr *pNVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0:
    LawnApp::KillPlantSkillTipsUI(gLawnApp);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_X_Close_Release");
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    break;
  case 1:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xe8));
    LawnApp::ShowPlantLevelUpInfoDialog(pLVar1,aRStack_10,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    break;
  case 2:
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    iVar3 = FUN_04391b90(*(undefined4 *)(this_00 + 0x40));
    if ((iVar3 != 0x1d) || (this[0x1d0] != (PlantLevelUpListView)0x0)) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
      cVar2 = PlayerInfo::GetIsPlantUnlocked(this_00,(string *)(lVar4 + 0x80));
      pLVar1 = gLawnApp;
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xe8));
        LawnApp::ShowPlantLevelUpCheckDialog(pLVar1,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      iVar3 = FUN_04391b90(*(undefined4 *)(this_00 + 0x40));
      if (iVar3 == 0x1d) {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      LawnApp::KillGameMaskUI(gLawnApp);
    }
    break;
  case 3:
    LawnApp::KillPlantSkillTipsUI(gLawnApp);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_X_Close_Release");
    pNVar6 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
    NewPlantUIMgr::Switch(pNVar6,1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantLevelUpListView::ButtonDepress(int) */

void __thiscall PlantLevelUpListView::ButtonDepress(PlantLevelUpListView *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::InitSkillUI(bool) */

void __thiscall PlantLevelUpListView::InitSkillUI(PlantLevelUpListView *this,bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  PlantSkillButtonUI *pPVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    if (this[0x1d3] == (PlantLevelUpListView)0x0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    }
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_18);
    if (param_1) {
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0xf0));
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0xf8));
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x100));
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x108));
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x110));
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x148));
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x150));
      if (*(long **)(this + 0x100) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x100) + 0x18))();
        *(undefined8 *)(this + 0x100) = 0;
      }
      if (*(long **)(this + 0x108) == (long *)0x0) {
        plVar11 = *(long **)(this + 0x110);
      }
      else {
        (**(code **)(**(long **)(this + 0x108) + 0x18))();
        *(undefined8 *)(this + 0x108) = 0;
        plVar11 = *(long **)(this + 0x110);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
        *(undefined8 *)(this + 0x110) = 0;
      }
      if (*(long **)(this + 0xf8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xf8) + 0x18))();
        *(undefined8 *)(this + 0xf8) = 0;
      }
      if (*(long **)(this + 0xf0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xf0) + 0x18))();
        *(undefined8 *)(this + 0xf0) = 0;
      }
      if (*(long **)(this + 0x148) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x148) + 0x18))();
        *(undefined8 *)(this + 0x148) = 0;
      }
      if (*(long **)(this + 0x150) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x150) + 0x18))();
        *(undefined8 *)(this + 0x150) = 0;
      }
    }
    if (this[0x1d2] == (PlantLevelUpListView)0x0) {
      plVar11 = *(long **)(this + 0x138);
      if (plVar11 != (long *)0x0) {
        uVar1 = FUN_043924ac(0x271);
        uVar2 = FUN_043924ac(300);
        (**(code **)(*plVar11 + 0x1a8))(plVar11,uVar1,uVar2);
      }
      iVar3 = FUN_043924ac(0x14a);
      iVar4 = FUN_043924ac(10);
      if (*(int *)(this + 0x1b8) == 5) {
        if (*(int *)(this + 0x1b4) < 5) {
          iVar5 = FUN_043924ac(0x1e);
          iVar3 = iVar3 - iVar5;
          iVar5 = FUN_043924ac(8);
          plVar11 = *(long **)(this + 0x138);
          iVar4 = iVar4 - iVar5;
          if (plVar11 != (long *)0x0) {
            uVar1 = FUN_043924ac(0x285);
            uVar2 = FUN_043924ac(300);
            (**(code **)(*plVar11 + 0x1a8))(plVar11,uVar1,uVar2);
          }
        }
      }
      else if (*(int *)(this + 0x1b8) <= *(int *)(this + 0x1b4)) {
        iVar5 = FUN_043924ac(0x17);
        iVar4 = iVar4 + iVar5;
      }
      iVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      PlantType::GetCurrentLevelSkillType(iVar5,true);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pPVar8 = ::operator_new(0x108);
      PlantSkillButtonUI::PlantSkillButtonUI(pPVar8,a_Stack_18,2,0,*(undefined4 *)(this + 0x1b4));
      *(PlantSkillButtonUI **)(this + 0xf0) = pPVar8;
      PlantSkillButtonUI::SetContent(pPVar8,(RtWeakPtr *)a_Stack_18);
      iVar5 = *(int *)(this + 0x1b4);
      if (iVar5 == 1) {
        iVar5 = 2;
      }
      iVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      PlantType::GetCurrentLevelSkillType(iVar6,SUB41(iVar5,0));
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pPVar8 = ::operator_new(0x108);
      PlantSkillButtonUI::PlantSkillButtonUI
                (pPVar8,a_Stack_18,iVar5,1,*(undefined4 *)(this + 0x1b4));
      *(PlantSkillButtonUI **)(this + 0xf8) = pPVar8;
      PlantSkillButtonUI::SetContent(pPVar8,(RtWeakPtr *)a_Stack_18);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
      plVar11 = *(long **)(this + 0xf8);
      uVar1 = FUN_043924ac(0x122);
      (**(code **)(*plVar11 + 0x1a8))(plVar11,iVar3,uVar1);
      plVar11 = *(long **)(this + 0xf0);
      pcVar10 = *(code **)(*plVar11 + 0x1a8);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
      iVar5 = *(int *)(lVar9 + 0x38);
      uVar1 = FUN_043924ac(0x122);
      (*pcVar10)(plVar11,iVar3 + iVar5 + iVar4,uVar1);
      iVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      PlantType::GetCurrentLevelSkillType(iVar5,true);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pPVar8 = ::operator_new(0x108);
      PlantSkillButtonUI::PlantSkillButtonUI(pPVar8,a_Stack_18,3,2,*(undefined4 *)(this + 0x1b4));
      *(PlantSkillButtonUI **)(this + 0x100) = pPVar8;
      PlantSkillButtonUI::SetContent(pPVar8,(RtWeakPtr *)a_Stack_18);
      iVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      PlantType::GetCurrentLevelSkillType(iVar5,true);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pPVar8 = ::operator_new(0x108);
      PlantSkillButtonUI::PlantSkillButtonUI(pPVar8,a_Stack_18,4,3,*(undefined4 *)(this + 0x1b4));
      *(PlantSkillButtonUI **)(this + 0x108) = pPVar8;
      PlantSkillButtonUI::SetContent(pPVar8,(RtWeakPtr *)a_Stack_18);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
      plVar11 = *(long **)(this + 0x100);
      pcVar10 = *(code **)(*plVar11 + 0x1a8);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
      iVar5 = *(int *)(lVar9 + 0x38);
      uVar1 = FUN_043924ac(0x122);
      (*pcVar10)(plVar11,iVar3 + (iVar4 + iVar5) * 2,uVar1);
      plVar11 = *(long **)(this + 0x108);
      pcVar10 = *(code **)(*plVar11 + 0x1a8);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
      iVar5 = *(int *)(lVar9 + 0x38);
      uVar1 = FUN_043924ac(0x122);
      (*pcVar10)(plVar11,(iVar4 + iVar5) * 3 + iVar3,uVar1);
      if (*(int *)(this + 0x1b8) == 5) {
        iVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        PlantType::GetCurrentLevelSkillType(iVar5,true);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        pPVar8 = ::operator_new(0x108);
        PlantSkillButtonUI::PlantSkillButtonUI(pPVar8,a_Stack_18,5,3,*(undefined4 *)(this + 0x1b4));
        *(PlantSkillButtonUI **)(this + 0x110) = pPVar8;
        PlantSkillButtonUI::SetContent(pPVar8,(RtWeakPtr *)a_Stack_18);
        (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
        plVar11 = *(long **)(this + 0x110);
        pcVar10 = *(code **)(*plVar11 + 0x1a8);
        lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
        iVar5 = *(int *)(lVar9 + 0x38);
        uVar1 = FUN_043924ac(0x122);
        (*pcVar10)(plVar11,iVar3 + (iVar4 + iVar5) * 4,uVar1);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::RefreshCurrentData() */

void __thiscall PlantLevelUpListView::RefreshCurrentData(PlantLevelUpListView *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar5;
  PlantType *pPVar6;
  ulong uVar7;
  MagentoProductProps *this_03;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  GachaItemInfo aGStack_20 [4];
  uint local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (0 < *(int *)(lVar4 + 0x90)) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar8 = *(uint *)(lVar4 + 0x90);
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar4 + 0x80));
      if (cVar1 == '\0') {
        iVar3 = 0;
      }
      else {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        iVar3 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar4 + 0x80),false);
        if (iVar3 < 1) {
          pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          lVar4 = PlantType::GetProps(pPVar6);
          iVar3 = *(int *)(lVar4 + 0x28);
        }
        GachaItemInfo::GachaItemInfo(aGStack_20);
        this_03 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        MagentoProductProps::GetCurrentLevelPriceData(this_03,iVar3,(LevelUpPriceData *)aGStack_20);
        uVar8 = local_1c;
      }
      fVar10 = (float)(int)uVar8;
      if (uVar8 == 0) {
        fVar10 = 1.0;
        uVar8 = 1;
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar2 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar4 + 0x80),false);
      uVar9 = NEON_fminnm((float)iVar2 / fVar10,0x3f800000);
      *(undefined4 *)(this + 0x1b0) = uVar9;
      pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      lVar4 = PlantType::GetProps(pPVar6);
      if (iVar3 < *(int *)(lVar4 + 0x2c)) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        uVar7 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar4 + 0x80),false);
        Sexy::StrFormat(L"%d/%d",aGStack_20,uVar7 & 0xffffffff,(ulong)uVar8);
      }
      else {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        uVar7 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar4 + 0x80),false);
        Sexy::StrFormat(L"%d",aGStack_20,uVar7 & 0xffffffff);
      }
      FUN_054766c8(this + 0x198,aGStack_20);
      FUN_05476c50(aGStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::Update() */

void PlantLevelUpListView::Update(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  char cVar1;
  PlantLevelUpListView PVar2;
  int iVar3;
  undefined4 uVar4;
  PlantLevelUpListView *in_x0;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar5;
  PlantType *pPVar6;
  long lVar7;
  long *plVar8;
  PopAnimRig *this_02;
  RtWeakPtr *pRVar9;
  wchar16 *pwVar10;
  MagentoProductProps *this_03;
  PlantLevelUpListView *pPVar11;
  RtWeakPtr<Sexy::SoundResource> *pRVar12;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  code *pcVar13;
  float fVar14;
  float fVar15;
  bool local_31;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [4];
  int local_1c;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_31 = false;
  if (in_x0[0x1d3] == (PlantLevelUpListView)0x0) {
    PlantAvatarScrollListUI::CurrentPlantChange
              (*(PlantAvatarScrollListUI **)(in_x0 + 0x120),&local_31);
    if (local_31 != false) {
      PVar2 = in_x0[0x1d3];
      in_x0[0x1d1] = (PlantLevelUpListView)0x0;
joined_r0x04398d94:
      if (PVar2 == (PlantLevelUpListView)0x0) {
        pRVar9 = (RtWeakPtr *)
                 PlantScrollListUI::GetCurrentPlantProps(*(PlantScrollListUI **)(in_x0 + 0x120));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(in_x0 + 0xe8),pRVar9);
        lVar7 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        if (lVar7 != 0) {
          pwVar10 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          pRVar12 = aRStack_28;
          std::string::string((string *)aRStack_20,"AutoTestPlantLevelUp");
          cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar10,(wchar16 *)aRStack_20,(LineBreakCategory *)pRVar12,in_x3,in_x4)
          ;
          std::string::~string((string *)aRStack_20);
          nop();
          if (cVar1 != '\0') {
            MessageRouter::Post((_func_void *)gMessageRouter);
          }
        }
      }
      goto LAB_04398b54;
    }
    PVar2 = in_x0[0x1d3];
    if (in_x0[0x1c0] != (PlantLevelUpListView)0x0) {
      in_x0[0x1d1] = (PlantLevelUpListView)0x0;
      goto joined_r0x04398d94;
    }
  }
  else {
    if (in_x0[0x1c0] == (PlantLevelUpListView)0x0) goto LAB_04398b04;
    in_x0[0x1d1] = (PlantLevelUpListView)0x0;
LAB_04398b54:
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    if (in_x0[0x1d3] == (PlantLevelUpListView)0x0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8));
    }
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    lVar7 = PlantType::GetProps(pPVar6);
    *(undefined4 *)(in_x0 + 0x1b8) = *(undefined4 *)(lVar7 + 0x2c);
    pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    lVar7 = PlantType::GetProps(pPVar6);
    iVar3 = *(int *)(lVar7 + 0x28);
    *(int *)(in_x0 + 0x1bc) = iVar3;
    in_x0[0x1d2] = (PlantLevelUpListView)(iVar3 == *(int *)(in_x0 + 0x1b8));
    if (in_x0[0x1d3] == (PlantLevelUpListView)0x0) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8));
      pPVar11 = (PlantLevelUpListView *)(lVar7 + 0x80);
    }
    else {
      pPVar11 = in_x0 + 0x1d8;
    }
    iVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)pPVar11,false);
    if (iVar3 < 1) {
      pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      lVar7 = PlantType::GetProps(pPVar6);
      *(undefined4 *)(in_x0 + 0x1b4) = *(undefined4 *)(lVar7 + 0x28);
    }
    else {
      if (in_x0[0x1d3] == (PlantLevelUpListView)0x0) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8));
        pPVar11 = (PlantLevelUpListView *)(lVar7 + 0x80);
      }
      else {
        pPVar11 = in_x0 + 0x1d8;
      }
      uVar4 = PlayerInfo::GetPlantStarLevel(this_01,(string *)pPVar11,false);
      *(undefined4 *)(in_x0 + 0x1b4) = uVar4;
    }
    if (in_x0[0x1d3] == (PlantLevelUpListView)0x0) {
      if (*(long **)(in_x0 + 0x158) != (long *)0x0) {
        (**(code **)(**(long **)(in_x0 + 0x158) + 0x18))();
        *(undefined8 *)(in_x0 + 0x158) = 0;
      }
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
      plVar8 = (long *)CreateStandalonePlantAnimRig(aRStack_20,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      (**(code **)(*plVar8 + 0x1a0))(plVar8,0);
      *(long **)(in_x0 + 0x158) = plVar8;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(lVar7 + 0x80));
      if ((cVar1 == '\0') || (*(int *)(in_x0 + 0x1b8) <= *(int *)(in_x0 + 0x1b4))) {
        (**(code **)(**(long **)(in_x0 + 0x138) + 0x158))(*(long **)(in_x0 + 0x138),0);
      }
      else {
        (**(code **)(**(long **)(in_x0 + 0x138) + 0x158))(*(long **)(in_x0 + 0x138),1);
        GachaItemInfo::GachaItemInfo((GachaItemInfo *)aRStack_20);
        this_03 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                          (this_03,*(int *)(in_x0 + 0x1b4),(LevelUpPriceData *)aRStack_20);
        if (cVar1 == '\0') {
          (**(code **)(**(long **)(in_x0 + 0x138) + 0x158))(*(long **)(in_x0 + 0x138));
        }
        else if (local_10 == 2) {
          iVar3 = PlayerInfo::GetNumCoins(this_01,false);
          if (local_14 <= iVar3) {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
            iVar3 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar7 + 0x80),false);
            if (local_1c <= iVar3) goto LAB_04398cc8;
          }
          in_x0[0x1d1] = (PlantLevelUpListView)0x1;
        }
      }
LAB_04398cc8:
      if (*(int *)(in_x0 + 0x1b8) <= *(int *)(in_x0 + 0x1b4)) {
        (**(code **)(**(long **)(in_x0 + 0x138) + 0x158))(*(long **)(in_x0 + 0x138),0);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    InitSkillUI(in_x0,true);
    in_x0[0x1c0] = (PlantLevelUpListView)0x0;
    RefreshCurrentData(in_x0);
    psVar5 = *(string **)(in_x0 + 0x1a8);
    if (psVar5 != (string *)0x0) {
      if (in_x0[0x1d3] == (PlantLevelUpListView)0x0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe8));
      }
      PlantDisplayBoard::SetPlantName(psVar5);
      PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(in_x0 + 0x1a8));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    PVar2 = in_x0[0x1d3];
  }
  if (PVar2 == (PlantLevelUpListView)0x0) {
    this_02 = *(PopAnimRig **)(in_x0 + 0x158);
    if (this_02 != (PopAnimRig *)0x0) {
      fVar14 = (float)PVZ_RealT();
      fVar15 = (float)PVZ_RealDt();
      PopAnimRig::UpdateAnim(this_02,fVar14,fVar15);
    }
    plVar8 = *(long **)(in_x0 + 0x1c8);
    if ((plVar8 != (long *)0x0) && (fVar14 = (float)FUN_04391b98((int)plVar8[3]), 0.0 < fVar14)) {
      pcVar13 = *(code **)(*plVar8 + 0x80);
      PVZ_RealT();
      (*pcVar13)(plVar8);
    }
  }
LAB_04398b04:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::Draw(Sexy::Graphics*) */

void __thiscall PlantLevelUpListView::Draw(PlantLevelUpListView *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Image *pIVar10;
  long lVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  string *psVar12;
  PlantType *this_02;
  CachedUIResourcePtr<Sexy::Image> *this_03;
  string *extraout_x1;
  float fVar13;
  float fVar14;
  Sexy aSStack_68 [8];
  wstring awStack_60 [8];
  int local_58;
  int local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d3] != (PlantLevelUpListView)0x0) goto LAB_04398f94;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar2 = FUN_043924ac(0xd);
  iVar6 = *(int *)(this + 0x174);
  iVar3 = FUN_043924ac(0x19);
  iVar7 = *(int *)(this + 0x178);
  iVar4 = FUN_043924ac(0x1a);
  iVar8 = *(int *)(this + 0x17c);
  iVar5 = FUN_043924ac(0x27);
  Sexy::Insets::Insets
            ((Insets *)&local_58,iVar2 + iVar6,iVar3 + iVar7,iVar8 - iVar4,
             *(int *)(this + 0x180) - iVar5);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00230);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar9);
  TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TITLE]");
  iVar6 = FUN_043924ac(0xf);
  iVar7 = FUN_043924ac(0x28);
  Sexy::Insets::Insets(aIStack_28,0,iVar6,*(int *)(this + 0x50),iVar7);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,(Insets *)&local_38,aIStack_28,uVar9,(Insets *)&local_18,2,1);
  FUN_05476c50((Insets *)&local_38);
  iVar6 = local_58;
  iVar8 = FUN_043924ac(0x3c);
  iVar7 = local_54;
  iVar2 = FUN_043924ac(9);
  iVar3 = FUN_043924ac(0x96);
  iVar4 = FUN_043924ac(0x28);
  Sexy::Insets::Insets((Insets *)&local_48,iVar6 + iVar8,iVar7 + iVar2,iVar3,iVar4);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00570);
  iVar7 = local_54;
  iVar6 = local_58;
  iVar8 = FUN_043924ac(0x10e);
  iVar2 = FUN_043924ac(0x122);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar6,iVar7,iVar8,iVar2);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affb40);
  iVar6 = FUN_043924ac(0x113);
  iVar7 = FUN_043924ac(0x1ca);
  iVar8 = FUN_043924ac(300);
  Sexy::Graphics::DrawImage(param_1,pIVar10,local_58 + iVar6,local_54,iVar7,iVar8);
  iVar7 = FUN_043924ac(10);
  iVar6 = *(int *)(this + 0x184);
  iVar8 = FUN_043924ac(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar6 - iVar7,*(int *)(this + 0x188),iVar8 + *(int *)(this + 0x18c)
             ,*(int *)(this + 400));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00688);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar9);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_68,extraout_x1);
  TodStringTranslate(awStack_60);
  iVar6 = local_48;
  iVar2 = FUN_043924ac(0x32);
  iVar8 = local_40;
  iVar7 = local_44;
  iVar3 = FUN_043924ac(100);
  Sexy::Insets::Insets(aIStack_28,iVar6 - iVar2,iVar7,iVar8 + iVar3,local_3c);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,(Insets *)&local_38,aIStack_28,uVar9,(Insets *)&local_18,2,1);
  FUN_05476c50((Insets *)&local_38);
  FUN_05476c50(awStack_60);
  std::string::~string((string *)aSStack_68);
  iVar7 = local_48;
  iVar2 = FUN_043924ac(0x1e);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00990);
  iVar8 = local_44;
  iVar6 = *(int *)(lVar11 + 0x38);
  iVar3 = FUN_043924ac(0xfb);
  iVar4 = FUN_043924ac(0x91);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00990);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(int)((float)(iVar7 - iVar2) + (float)iVar6 * 1.2),iVar8 + iVar3,
             iVar4,*(int *)(lVar11 + 0x3c));
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b004a8);
  Draw3SliceImage(param_1,(Insets *)&local_18,uVar9);
  iVar7 = FUN_043924ac(5);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008b0);
  fVar14 = *(float *)(this + 0x1b0);
  iVar6 = *(int *)(lVar11 + 0x3c);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008b0);
  Sexy::Insets::Insets
            (aIStack_28,local_38 - iVar7,local_34 + (local_2c - iVar6) / 2,
             (int)((float)local_30 * fVar14),*(int *)(lVar11 + 0x3c));
  if (0.0 < *(float *)(this + 0x1b0)) {
    Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afffe0);
    Draw3SliceImage(param_1,(Insets *)&local_18,uVar9);
  }
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00990);
  iVar7 = local_48;
  iVar2 = FUN_043924ac(0x23);
  iVar8 = local_44;
  iVar3 = FUN_043924ac(0xf5);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00990);
  iVar6 = *(int *)(lVar11 + 0x38);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00990);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,iVar7 - iVar2,iVar8 + iVar3,(int)((float)iVar6 * 1.3),
             (int)((float)*(int *)(lVar11 + 0x3c) * 1.3));
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0x198,(Insets *)&local_38,uVar9,(Insets *)&local_18,5,1);
  iVar7 = FUN_043924ac(10);
  iVar8 = FUN_043924ac(0x1e);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affda0);
  iVar6 = *(int *)(lVar11 + 0x38);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affda0);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(local_48 + local_40) - iVar7,(local_44 + local_3c) - iVar8,iVar6,
             *(int *)(lVar11 + 0x3c));
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affdf0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affdf0);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
  switch(*(undefined4 *)(this + 0x1b4)) {
  case 1:
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06affdf0;
    break;
  case 2:
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b001b8;
    break;
  case 3:
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b004f8;
    break;
  case 4:
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00a58;
    break;
  case 5:
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06afff10;
    break;
  default:
    goto switchD_043996f4_default;
  }
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
  iVar8 = FUN_043924ac(5);
  iVar2 = FUN_043924ac(0x28);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,local_18 + iVar8,local_14 + iVar2,(int)((float)iVar6 * 1.5),
             (int)((float)iVar7 * 1.5));
switchD_043996f4_default:
  if (this[0x1d3] != (PlantLevelUpListView)0x0) goto LAB_04398f94;
  if (*(long *)(this + 0x158) != 0) {
    iVar6 = FUN_043924ac(0x14);
    iVar6 = -iVar6;
    iVar7 = FUN_043924ac(0x5a);
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
    if (bVar1) {
      this_02 = (PlantType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
      ;
      lVar11 = PlantType::GetProps(this_02);
      if (lVar11 == 0) goto LAB_043996a0;
      fVar14 = (float)FUN_043924c0(*(undefined4 *)(lVar11 + 0x2a8));
      iVar6 = (int)(fVar14 + (float)iVar6);
      fVar13 = (float)FUN_043924c0(*(undefined4 *)(lVar11 + 0x2ac));
      fVar14 = *(float *)(lVar11 + 0x2a4) * 1.7;
      iVar7 = (int)(fVar13 + (float)iVar7);
    }
    else {
LAB_043996a0:
      fVar14 = 1.7;
    }
    UIUtil::DrawPopAnim(param_1,*(PopAnimRig **)(this + 0x158),iVar6,iVar7,fVar14,0.0,0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  if (*(long *)(this + 0x1c8) != 0) {
    Sexy::Widget::DeferOverlay((Widget *)this,1);
  }
LAB_04398f94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::InitView() */

void __thiscall PlantLevelUpListView::InitView(PlantLevelUpListView *this)

{
  ButtonListener *pBVar1;
  TRect *pTVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  PrimeText *this_00;
  PVZ2UIButton *pPVar17;
  long lVar18;
  LotteryResultProgressBar *pLVar19;
  SalesProgressBar *pSVar20;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar21;
  PlantType *pPVar22;
  BouncingArrow *pBVar23;
  MagentoProductProps *this_03;
  PVZ2UIScrollingWidget *this_04;
  RareFilterPanel *this_05;
  PlantScrollListUI *this_06;
  RtWeakPtr *pRVar24;
  long *plVar25;
  PlantLevelUpListView *pPVar26;
  code *pcVar27;
  undefined8 uVar28;
  RtWeakPtr<Sexy::ResourceInfo> *this_07;
  float fVar29;
  float fVar30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [56];
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  int local_34;
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this[0x59] = (PlantLevelUpListView)0x0;
  lVar18 = gLawnApp;
  pBVar1 = (ButtonListener *)(this + 0xe0);
  iVar4 = FUN_043924ac(0x2f8);
  iVar5 = FUN_043924ac(0x23a);
  iVar16 = *(int *)(lVar18 + 0xd8);
  iVar6 = FUN_043924ac(10);
  (**(code **)(*(long *)this + 0x198))
            (this,(int)(((float)*(int *)(lVar18 + 0xd4) - (float)iVar4) * 0.5),
             (int)((float)iVar6 + ((float)iVar16 - (float)iVar5) * 0.5),iVar4,iVar5);
  FUN_05478178(aRStack_78,&DAT_056f11a8,aRStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar17;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b00520,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00548,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  iVar5 = FUN_043924ac(0x2f8);
  lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar16 = *(int *)(lVar18 + 0x38);
  iVar4 = FUN_043924ac(0x14);
  iVar16 = (iVar5 - iVar16) + iVar4;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    iVar4 = -iVar4;
  }
  else {
    iVar5 = FUN_043924ac(0x32);
    iVar16 = iVar16 + iVar5;
    iVar5 = FUN_043924ac(0xfffffff6);
    iVar4 = iVar5 - iVar4;
  }
  plVar25 = *(long **)(this + 0x128);
  pcVar27 = *(code **)(*plVar25 + 0x198);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar27)(plVar25,iVar16,iVar4,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  FUN_05478178(aRStack_78,&DAT_056f11a8,aRStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,3,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x140) = pPVar17;
  FUN_05476c50(aRStack_78);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x140);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b002f8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b002f8,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  uVar7 = FUN_043924ac(0xf);
  uVar8 = FUN_043924ac(10);
  plVar25 = *(long **)(this + 0x140);
  pcVar27 = *(code **)(*plVar25 + 0x198);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b002f8);
  uVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b002f8);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar27)(plVar25,uVar7,uVar8,uVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
  cVar3 = NewPlantUIMgr::HasFinishedTutorial();
  if (cVar3 == '\0') {
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140));
  }
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    FUN_05478178(aRStack_78,&DAT_056f11a8,aRStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar17 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar17,1,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x130) = pPVar17;
    FUN_05476c50(aRStack_78);
    nop();
    pPVar17 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06affaa0,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06afff90,2);
    PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
    plVar25 = *(long **)(this + 0x130);
    pcVar27 = *(code **)(*plVar25 + 0x198);
    uVar7 = FUN_043924ac(0xdf);
    uVar8 = FUN_043924ac(0x140);
    pLVar19 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaa0);
    iVar16 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
    pSVar20 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaa0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar20);
    (*pcVar27)(plVar25,uVar7,uVar8,(int)((float)iVar16 * 1.2),(int)((float)iVar4 * 1.2));
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
    FUN_05478178(aRStack_78,&DAT_056f11a8,aRStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar17 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar17,2,pBVar1,(wstring *)aRStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x138) = pPVar17;
    FUN_05476c50(aRStack_78);
    nop();
    pPVar17 = *(PVZ2UIButton **)(this + 0x138);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06affc58,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b009e0,3);
    PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
    plVar25 = *(long **)(this + 0x138);
    pcVar27 = *(code **)(*plVar25 + 0x198);
    uVar8 = FUN_043924ac(0x271);
    uVar9 = FUN_043924ac(300);
    lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
    uVar7 = *(undefined4 *)(lVar18 + 0x38);
    lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affeb8);
    (*pcVar27)(plVar25,uVar8,uVar9,uVar7,*(undefined4 *)(lVar18 + 0x3c));
    pPVar17 = *(PVZ2UIButton **)(this + 0x138);
    TodStringTranslate(L"[PLANT_LEVEL_UP_BUTTON_CONTENT]");
    uVar28 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar17,(Insets *)&local_40,uVar28,0);
    FUN_05476c50((Insets *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  }
  iVar16 = *(int *)(*(long *)(this + 0x128) + 0x4c);
  iVar4 = *(int *)(*(long *)(this + 0x128) + 0x54);
  iVar5 = FUN_043924ac(0x14);
  iVar6 = FUN_043924ac(0x23a);
  iVar11 = FUN_043924ac(0);
  iVar12 = FUN_043924ac(0x28);
  iVar13 = FUN_043924ac(0x2f8);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
  iVar14 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar15 = FUN_043924ac(9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar11,iVar12,iVar13,
             ((iVar16 + iVar4 + iVar5 + iVar6) - iVar14) + iVar15);
  *(ulong *)(this + 0x174) = CONCAT44(iStack_3c,local_40);
  *(ulong *)(this + 0x17c) = CONCAT44(local_34,uStack_38);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    pTVar2 = (TRect *)(this + 0x184);
    iVar5 = FUN_043924ac(0x3c);
    iVar6 = FUN_043924ac(0x19);
    iVar11 = FUN_043924ac(0x28);
    iVar16 = *(int *)(this + 0x178);
    iVar12 = FUN_043924ac(0x122);
    iVar13 = FUN_043924ac(0x1e);
    iVar4 = *(int *)(this + 0x50);
    iVar14 = FUN_043924ac(0x14);
    iVar15 = FUN_043924ac(0xb7);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar6 + iVar5,iVar11 + iVar16 + iVar12,
               ((iVar4 - iVar13) - iVar5) - iVar14,iVar15);
    *(ulong *)pTVar2 = CONCAT44(iStack_3c,local_40);
    *(ulong *)(this + 0x18c) = CONCAT44(local_34,uStack_38);
    this_04 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_04,(ScrollWidgetListener *)(this + 0xd8));
    lVar18 = *(long *)this_04;
    *(PVZ2UIScrollingWidget **)(this + 0x118) = this_04;
    (**(code **)(lVar18 + 0x1a0))(this_04,pTVar2);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x118),1);
    this_05 = ::operator_new(0xd8);
    RareFilterPanel::RareFilterPanel(this_05);
    pcVar27 = *(code **)(*(long *)this_05 + 0x1a0);
    iVar16 = FUN_043924ac(0x14);
    iVar4 = FUN_043924ac(5);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar16,*(int *)(this + 0x188),iVar4 + iVar5,*(int *)(this + 400))
    ;
    (*pcVar27)(this_05,(Insets *)&local_40);
    RareFilterPanel::initView(this_05);
    (**(code **)(*(long *)this + 0x60))(this,this_05);
    this_06 = ::operator_new(0x100);
    PlantScrollListUI::PlantScrollListUI(this_06,pTVar2);
    *(PlantScrollListUI **)(this + 0x120) = this_06;
    (**(code **)(**(long **)(this + 0x118) + 0x60))(*(long **)(this + 0x118),this_06);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
    iVar16 = FUN_04391b90(*(undefined4 *)(this_02 + 0x40));
    if ((iVar16 == 8) || (iVar16 == 0x1d)) {
      Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x118),0);
    }
    pRVar24 = (RtWeakPtr *)
              PlantScrollListUI::GetCurrentPlantProps(*(PlantScrollListUI **)(this + 0x120));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),pRVar24);
  }
  psVar21 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  }
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar21);
  pPVar22 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  lVar18 = PlantType::GetProps(pPVar22);
  *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(lVar18 + 0x2c);
  pPVar22 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  lVar18 = PlantType::GetProps(pPVar22);
  iVar16 = *(int *)(lVar18 + 0x28);
  *(int *)(this + 0x1bc) = iVar16;
  if (iVar16 == *(int *)(this + 0x1b8)) {
    this[0x1d2] = (PlantLevelUpListView)0x1;
  }
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    iVar16 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar18 + 0x80),false);
    if (0 < iVar16) goto LAB_0439fa54;
LAB_0439fed8:
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x1bc);
  }
  else {
    iVar16 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(this + 0x1d8),false);
    if (iVar16 < 1) goto LAB_0439fed8;
LAB_0439fa54:
    if (this[0x1d3] == (PlantLevelUpListView)0x0) {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
      pPVar26 = (PlantLevelUpListView *)(lVar18 + 0x80);
    }
    else {
      pPVar26 = this + 0x1d8;
    }
    uVar7 = PlayerInfo::GetPlantStarLevel(this_02,(string *)pPVar26,false);
    *(undefined4 *)(this + 0x1b4) = uVar7;
  }
  if (this[0x1d3] != (PlantLevelUpListView)0x0) goto LAB_0439fa78;
  psVar21 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  }
  this_07 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar21);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_78);
  plVar25 = (long *)CreateStandalonePlantAnimRig((Insets *)&local_40,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  (**(code **)(*plVar25 + 0x1a0))(plVar25,0);
  *(long **)(this + 0x158) = plVar25;
  lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_07);
  cVar3 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar18 + 0x80));
  if ((cVar3 == '\0') || (*(int *)(this + 0x1b8) <= *(int *)(this + 0x1b4))) {
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
  }
  else {
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
    GachaItemInfo::GachaItemInfo((GachaItemInfo *)&local_40);
    this_03 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_07);
    cVar3 = MagentoProductProps::GetCurrentLevelPriceData
                      (this_03,*(int *)(this + 0x1b4),(LevelUpPriceData *)&local_40);
    if (cVar3 == '\0') {
      (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138));
    }
    else if (local_30 == 2) {
      iVar16 = PlayerInfo::GetNumCoins(this_02,false);
      if (local_34 <= iVar16) {
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_07);
        iVar16 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar18 + 0x80),false);
        if (iStack_3c <= iVar16) goto LAB_0439feac;
      }
      this[0x1d1] = (PlantLevelUpListView)0x1;
    }
  }
LAB_0439feac:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
LAB_0439fa78:
  InitSkillUI(this,false);
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    std::string::string((string *)&local_40,"gravebuster");
    cVar3 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)&local_40);
    if ((cVar3 == '\0') || (iVar16 = FUN_04391b90(*(undefined4 *)(this_02 + 0x40)), iVar16 != 8)) {
      std::string::~string((string *)&local_40);
      nop();
    }
    else {
      std::string::~string((string *)&local_40);
      nop();
      PlayerInfo::CompleteTutorial(this_02,8);
    }
    iVar16 = FUN_04391b90(*(undefined4 *)(this_02 + 0x40));
    if (((iVar16 == 8) || (iVar16 == 0x1d)) && (*(long *)(this + 0x1c8) == 0)) {
      pBVar23 = GameObject::Create<BouncingArrow>();
      *(BouncingArrow **)(this + 0x1c8) = pBVar23;
      *(undefined4 *)(pBVar23 + 0x3c) = 0;
      iVar4 = FUN_043924ac(0x1b);
      iVar5 = FUN_043924ac(0x69);
      lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affc80);
      iVar16 = *(int *)(lVar18 + 0x3c);
      pSVar20 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00520);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar20);
      Sexy::Point::Point((Point *)&local_40,(int)((float)iVar4 + (float)iVar5 * 0.5),iVar16 + iVar6)
      ;
      *(ulong *)(pBVar23 + 0x30) = CONCAT44(iStack_3c,local_40);
    }
  }
  *(undefined8 *)(this + 0x1a8) = 0;
  psVar21 = ::operator_new(0x178);
  PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar21,1,this[0x1d3]);
  *(string **)(this + 0x1a8) = psVar21;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  }
  PlantDisplayBoard::SetPlantName(psVar21);
  plVar25 = *(long **)(this + 0x1a8);
  iVar5 = FUN_043924ac(0xd);
  iVar16 = *(int *)(this + 0x174);
  iVar6 = FUN_043924ac(0x13a);
  iVar11 = FUN_04392498(200);
  iVar12 = FUN_043924ac(0x18);
  iVar4 = *(int *)(this + 0x178);
  iVar13 = FUN_043924ac(0x1c);
  iVar14 = FUN_04392498(0xa0);
  uVar7 = FUN_043924ac(0x1aa);
  uVar8 = FUN_043924ac(0xcd);
  (**(code **)(*plVar25 + 0x198))
            (plVar25,(iVar5 + iVar16 + iVar6) - iVar11,(iVar12 + iVar4 + iVar13) - iVar14,uVar7,
             uVar8);
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 0x1a8));
  uVar28 = *(undefined8 *)(this + 0x1a8);
  iVar16 = FUN_043924ac(0x14);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)-iVar16,(float)-iVar16);
  PlantDisplayBoard::SetDisplayLevelButtonPosOffset(local_40,iStack_3c,uVar28);
  lVar18 = *(long *)(this + 0x1a8);
  iVar16 = FUN_043924ac(0xb9);
  iVar4 = FUN_043924ac(0x90);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)-iVar16,(float)iVar4);
  FUN_04391b9c(local_40,iStack_3c,lVar18 + 0x124);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1a8));
  if (this[0x1d3] != (PlantLevelUpListView)0x0) {
    uVar28 = *(undefined8 *)(this + 0x1a8);
    fVar29 = (float)FUN_043924c0(0x42700000);
    fVar30 = (float)FUN_043924c0(0xc1200000);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar29,fVar30);
    PlantDisplayBoard::SetDisplayLevelButtonPosOffset(local_40,iStack_3c,uVar28);
    lVar18 = *(long *)(this + 0x1a8);
    fVar29 = (float)FUN_043924c0(0x42480000);
    fVar30 = (float)FUN_043924c0(0xc0c00000);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar29,fVar30);
    FUN_04391b9c(local_40,iStack_3c,lVar18 + 0x124);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpListView::PlantLevelUpListView(std::string, bool) */

void __thiscall
PlantLevelUpListView::PlantLevelUpListView
          (PlantLevelUpListView *this,undefined8 param_2,PlantLevelUpListView param_3)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  TGALogMgr *pTVar3;
  Delegate0 *this_00;
  Delegate0 aDStack_b8 [48];
  TGAPlantWarsData aTStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0683e190;
  *(undefined ***)(this + 0xd8) = &PTR__PlantLevelUpListView_0683e4d0;
  *(undefined **)(this + 0xe0) = &DAT_0683e518;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x174));
  Sexy::Insets::Insets((Insets *)(this + 0x184));
  FUN_05476574(this + 0x198);
  FUN_05476574(this + 0x1a0);
  this[0x1d3] = param_3;
  FUN_05475d88(this + 0x1d8,param_2);
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"UI_Store");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"UI_Activity");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"LevelCommon");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"LevelCommon2");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_48,"AudioCommon");
  LawnApp::LoadGroup(pLVar2,asStack_48);
  std::string::~string(asStack_48);
  nop();
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  this[0x1c0] = (PlantLevelUpListView)0x0;
  this[0x1d1] = (PlantLevelUpListView)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  this[0x1d0] = (PlantLevelUpListView)0x0;
  this[0x1d2] = (PlantLevelUpListView)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  puVar1 = gMessageRouter;
  if (this[0x1d3] == (PlantLevelUpListView)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,TutorialFinish);
    Sexy::Delegate0::Delegate0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>
              (aDStack_b8,asStack_48);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TutorialFinish,aDStack_b8);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,TutorialLevelUpFinishFirstStep);
    Sexy::Delegate0::Delegate0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>
              (aDStack_b8,asStack_48);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::LevelUpTutorialFinishFirstStep,aDStack_b8);
  }
  puVar1 = gMessageRouter;
  this_00 = aDStack_b8;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshSkillButtonRender);
  Sexy::Delegate0::Delegate0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>
            (this_00,asStack_48);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RefreshCardData,this_00);
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLevelUpSuccess);
  Sexy::Delegate0::Delegate0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>
            (this_00,asStack_48);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantLevelUpSuccess,this_00);
  TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
  std::string::append((string *)aTStack_88,"old",(size_t)this_00);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
  TGALogMgr::LogPlantLevelup(pTVar3,1,asStack_48);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

