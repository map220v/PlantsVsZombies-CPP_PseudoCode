// Class: PlantGeneEnhancementView


/* PlantGeneEnhancementView::GetPlantGeneDisplayView() */

undefined8 __thiscall
PlantGeneEnhancementView::GetPlantGeneDisplayView(PlantGeneEnhancementView *this)

{
  return *(undefined8 *)(this + 0x128);
}


/* PlantGeneEnhancementView::ShowGeneFactorShop() */

void __thiscall PlantGeneEnhancementView::ShowGeneFactorShop(PlantGeneEnhancementView *this)

{
  PlantGeneFactorShop *this_00;
  
  if (*(long *)(this + 0x130) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe8);
  memset(this_00,0,0xe8);
  PlantGeneFactorShop::PlantGeneFactorShop(this_00);
  *(PlantGeneFactorShop **)(this + 0x130) = this_00;
  PlantGeneFactorShop::InitView(this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x130));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x130));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x130));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x130));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::CreateGeneEnhancementEntry(int, Sexy::Point const&) */

void __thiscall
PlantGeneEnhancementView::CreateGeneEnhancementEntry
          (PlantGeneEnhancementView *this,int param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PVZ2UIButton *this_00;
  undefined8 uVar8;
  string asStack_88 [8];
  string asStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  iVar1 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_03800484(0x32);
  iVar2 = *(int *)(this + 0x54);
  FUN_05478178(aPStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,param_1,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
             (Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  std::string::string(asStack_88,"GENE");
  uVar8 = FUN_03802028(param_1,asStack_88);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar8,2);
  std::string::string(asStack_80,"GENE");
  uVar8 = FUN_03802028(param_1,asStack_80);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar8,2);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  std::string::~string(asStack_80);
  nop();
  std::string::~string(asStack_88);
  nop();
  iVar3 = *(int *)param_2;
  iVar6 = FUN_03800484(0x32);
  iVar4 = *(int *)(param_2 + 4);
  uVar7 = FUN_03800484(100);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(iVar1 / 2 + iVar3) - iVar6,((iVar2 / 2 - iVar5) + iVar4) - iVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantGeneEnhancementView::ConfirmClose(UIMessageBox*, int) */

void __thiscall
PlantGeneEnhancementView::ConfirmClose
          (PlantGeneEnhancementView *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::CheckTips() */

void __thiscall PlantGeneEnhancementView::CheckTips(PlantGeneEnhancementView *this)

{
  PlantGeneEnhancementView PVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  GeneEnhancement *local_8;
  
  local_8 = ___stack_chk_guard;
  GeneEnhancement::GetGeneConfig(___stack_chk_guard);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  PVar1 = (PlantGeneEnhancementView)FUN_038023d8(lVar2 + 0x10);
  this[0xe4] = PVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  PVar1 = (PlantGeneEnhancementView)FUN_038023d8(lVar2 + 0x28);
  this[0xe5] = PVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  PVar1 = (PlantGeneEnhancementView)FUN_038023d8(lVar2 + 0x40);
  this[0xe6] = PVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  PVar1 = (PlantGeneEnhancementView)FUN_038023d8(lVar2 + 0x58);
  this[0xe7] = PVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  PVar1 = (PlantGeneEnhancementView)FUN_038023d8(lVar2 + 0x70);
  this[0xe8] = PVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementView::ClosePlantGeneDisplayView() */

void __thiscall PlantGeneEnhancementView::ClosePlantGeneDisplayView(PlantGeneEnhancementView *this)

{
  if (*(long *)(this + 0x128) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x128))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x128));
    *(undefined8 *)(this + 0x128) = 0;
  }
  CheckTips(this);
  return;
}


/* PlantGeneEnhancementView::CloseGeneFactorShop() */

void __thiscall PlantGeneEnhancementView::CloseGeneFactorShop(PlantGeneEnhancementView *this)

{
  if (*(long *)(this + 0x130) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x130))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x130));
    *(undefined8 *)(this + 0x130) = 0;
  }
  CheckTips(this);
  return;
}


/* PlantGeneEnhancementView::IsOnToturial() */

undefined8 __thiscall PlantGeneEnhancementView::IsOnToturial(PlantGeneEnhancementView *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  if (4 < *(int *)(this + 0xe0) - 1U) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = FUN_037fe578(*(undefined4 *)(lVar2 + 0x40));
    if (iVar1 != 0x45) {
      return 0;
    }
  }
  return 1;
}


/* PlantGeneEnhancementView::EndToturial() */

void __thiscall PlantGeneEnhancementView::EndToturial(PlantGeneEnhancementView *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  
  LawnApp::KillGameMaskUI(gLawnApp);
  cVar1 = IsOnToturial(this);
  if (cVar1 == '\0') {
    return;
  }
  *(undefined4 *)(this + 0xe0) = 6;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::CompleteTutorial(pPVar2,0x45);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::RefreshProgress() */

void __thiscall PlantGeneEnhancementView::RefreshProgress(PlantGeneEnhancementView *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  PlantGeneEnhancementView *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  pPVar4 = this + 0xec;
  do {
    iVar1 = (int)lVar3;
    uVar2 = GeneEnhancement::GetUnlockedGeneValue(iVar1);
    *(undefined4 *)pPVar4 = uVar2;
    lVar3 = lVar3 + 1;
    uVar2 = GeneEnhancement::GetMaxGeneValue(iVar1);
    *(undefined4 *)(pPVar4 + 4) = uVar2;
    pPVar4 = pPVar4 + 8;
  } while (lVar3 != 5);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_gene_factor");
  uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 0x114) = uVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"mat_univeral_gene_sequence");
  uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 0x118) = uVar2;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::OnBuyGeneFactor(int) */

void PlantGeneEnhancementView::OnBuyGeneFactor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  string asStack_10 [8];
  long lStack_8;
  
  uVar3 = (ulong)(uint)param_1;
  lVar4 = 0;
  lStack_8 = ___stack_chk_guard;
  puVar5 = (undefined4 *)(uVar3 + 0xec);
  do {
    iVar1 = (int)lVar4;
    uVar2 = GeneEnhancement::GetUnlockedGeneValue(iVar1);
    *puVar5 = uVar2;
    lVar4 = lVar4 + 1;
    uVar2 = GeneEnhancement::GetMaxGeneValue(iVar1);
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (lVar4 != 5);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"mat_gene_factor");
  uVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  *(undefined4 *)(uVar3 + 0x114) = uVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"mat_univeral_gene_sequence");
  uVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  *(undefined4 *)(uVar3 + 0x118) = uVar2;
  std::string::~string(asStack_10);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::onQueuedNarrationFinished() */

void __thiscall PlantGeneEnhancementView::onQueuedNarrationFinished(PlantGeneEnhancementView *this)

{
  int iVar1;
  GameMaskUI *pGVar2;
  CrazyNPCManager *pCVar3;
  char *__s;
  undefined8 uVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    *(undefined4 *)(this + 0xe0) = 2;
    UISingletonDialog<UIPlantGeneToturial>::CloseDialog();
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    __s = "GENE_ENHANCEMENT_SECOND";
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0xe0) = 3;
      uVar4 = *(undefined8 *)(this + 0x150);
      std::string::string(asStack_58,"");
      Sexy::Insets::Insets(aIStack_50);
      pGVar2 = (GameMaskUI *)GameMaskUI::ShowMask(uVar4,2,asStack_58,aIStack_50);
      GameMaskUI::EnableScale(pGVar2,true);
      std::string::~string(asStack_58);
      nop();
      goto LAB_03805720;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(this + 0xe0) = 4;
      LawnApp::KillGameMaskUI(gLawnApp);
      uVar4 = *(undefined8 *)(this + 0x158);
      std::string::string(asStack_58,"");
      Sexy::Insets::Insets(aIStack_50);
      pGVar2 = (GameMaskUI *)GameMaskUI::ShowMask(uVar4,2,asStack_58,aIStack_50);
      GameMaskUI::EnableScale(pGVar2,true);
      std::string::~string(asStack_58);
      nop();
      goto LAB_03805720;
    }
    if (iVar1 != 4) {
      if (iVar1 == 5) {
        *(undefined4 *)(this + 0xe0) = 6;
        EndToturial(this);
      }
      goto LAB_03805720;
    }
    *(undefined4 *)(this + 0xe0) = 5;
    LawnApp::KillGameMaskUI(gLawnApp);
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    __s = "GENE_ENHANCEMENT_THIRD";
  }
  std::string::string(asStack_60,__s);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onQueuedNarrationFinished);
  Sexy::Delegate0::Delegate0<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)()>
            (aDStack_38,aIStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
LAB_03805720:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementView::ClosePlantGeneBonus() */

void __thiscall PlantGeneEnhancementView::ClosePlantGeneBonus(PlantGeneEnhancementView *this)

{
  if (*(long *)(this + 0x120) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x120))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
  }
  CheckTips(this);
  onQueuedNarrationFinished(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::StartToturial() */

void __thiscall PlantGeneEnhancementView::StartToturial(PlantGeneEnhancementView *this)

{
  char cVar1;
  long lVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsOnToturial(this);
  if (cVar1 != '\0') {
    lVar2 = LawnApp::GetNarrationSystem(gLawnApp);
    if (lVar2 != 0) {
      *(undefined4 *)(this + 0xe0) = 1;
      UISingletonDialog<UIPlantGeneToturial>::ShowDialog();
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"GENE_ENHANCEMENT_FIRST");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onQueuedNarrationFinished);
      Sexy::Delegate0::Delegate0<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
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
/* PlantGeneEnhancementView::~PlantGeneEnhancementView() */

void __thiscall PlantGeneEnhancementView::~PlantGeneEnhancementView(PlantGeneEnhancementView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669e6b8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0669e390;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantGene");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x160));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementView::~PlantGeneEnhancementView() */

void __thiscall PlantGeneEnhancementView::~PlantGeneEnhancementView(PlantGeneEnhancementView *this)

{
  ~PlantGeneEnhancementView(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::ShowGeneEnhancementInfo() */

void PlantGeneEnhancementView::ShowGeneEnhancementInfo(void)

{
  AdaptorPlantGeneHowToPlayScreen *this;
  GeneEnhancement *this_00;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x1a8);
  memset(this,0,0x1a8);
  this_00 = (GeneEnhancement *)
            AdaptorPlantGeneHowToPlayScreen::AdaptorPlantGeneHowToPlayScreen(this);
  GeneEnhancement::GetGeneConfig(this_00);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  HowToPlayScreen::SetData((HowToPlayScreen *)this,(HowToPlayScreenData *)(lVar1 + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::PlantGeneEnhancementView() */

void __thiscall PlantGeneEnhancementView::PlantGeneEnhancementView(PlantGeneEnhancementView *this)

{
  PlantGeneEnhancementView *pPVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  PlantGeneEnhancementView *this_00;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0669e390;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669e6b8;
  this_00 = this + 0xec;
  do {
    pPVar1 = this_00 + 8;
    Sexy::FlagsMod::FlagsMod((FlagsMod *)this_00);
    this_00 = pPVar1;
  } while (pPVar1 != this + 0x114);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  this[0x148] = (PlantGeneEnhancementView)0x0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_PlantGene");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"Gacha");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshProgress);
  Sexy::Delegate0::Delegate0<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar2,Message::RefreshGeneEnhancement,aDStack_38);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyGeneFactor);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)(int)>>
            ((MessageRouter *)puVar2,Message::BuyGeneFactor,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementView::DrawTips(Sexy::Graphics*, bool, Sexy::Point const&) */

void __thiscall
PlantGeneEnhancementView::DrawTips
          (PlantGeneEnhancementView *this,Graphics *param_1,bool param_2,Point *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  
  if (!param_2) {
    return;
  }
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)param_3;
  iVar5 = FUN_03800484(0x32);
  iVar3 = *(int *)(this + 0x54);
  iVar4 = *(int *)(param_3 + 4);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2cc8);
  iVar6 = FUN_03800484(0x46);
  iVar7 = FUN_03800484(0xf);
  iVar8 = FUN_03800484(0x39);
  iVar9 = FUN_03800484(0x35);
  iVar10 = FUN_03800484(0x3c);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,iVar6 + ((iVar2 + iVar1 / 2) - iVar5),
             (((iVar4 + iVar3 / 2) - iVar5) - iVar7) - iVar8,iVar9,iVar10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantGeneEnhancementView::DrawAll
          (PlantGeneEnhancementView *this,ModalFlags *param_1,Graphics *param_2)

{
  PlantGeneEnhancementView PVar1;
  int iVar2;
  int iVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  PVar1 = this[0xe4];
  iVar2 = FUN_03800484(0x96);
  iVar3 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_10,-iVar2,-iVar3);
  DrawTips(this,param_2,(bool)PVar1,aPStack_10);
  PVar1 = this[0xe6];
  iVar2 = FUN_03800484(200);
  iVar3 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_10,iVar2,-iVar3);
  DrawTips(this,param_2,(bool)PVar1,aPStack_10);
  PVar1 = this[0xe8];
  iVar2 = FUN_03800484(0);
  Sexy::Point::Point(aPStack_10,iVar2,iVar2);
  DrawTips(this,param_2,(bool)PVar1,aPStack_10);
  PVar1 = this[0xe5];
  iVar2 = FUN_03800484(200);
  iVar3 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_10,-iVar2,iVar3);
  DrawTips(this,param_2,(bool)PVar1,aPStack_10);
  PVar1 = this[0xe7];
  iVar2 = FUN_03800484(0x96);
  iVar3 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_10,iVar2,iVar3);
  DrawTips(this,param_2,(bool)PVar1,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::DrawProgress(Sexy::Graphics*, std::pair<int, int> const&, Sexy::Point
   const&) */

void __thiscall
PlantGeneEnhancementView::DrawProgress
          (PlantGeneEnhancementView *this,Graphics *param_1,pair *param_2,Point *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  float fVar7;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)param_3;
  iVar3 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03800484(0x32);
  iVar2 = (iVar1 + iVar3 / 2) - iVar2;
  fVar7 = (float)*(int *)param_2 / (float)*(int *)(param_2 + 4);
  iVar1 = *(int *)(param_3 + 4) + *(int *)(this + 0x54) / 2;
  iVar3 = FUN_03800484(100);
  iVar4 = FUN_03800484(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab25d0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  if (fVar7 < 0.3) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab28b0);
    iVar3 = FUN_03800484(100);
    iVar4 = FUN_03800484(0x14);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar1,(int)((float)iVar3 * fVar7),iVar4);
  }
  else {
    iVar3 = FUN_03800484(100);
    iVar4 = FUN_03800484(0x14);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar1,(int)((float)iVar3 * fVar7),iVar4);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab28b0);
    Draw3SliceImage(param_1,aIStack_18,uVar5);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)param_2);
  std::operator+(asStack_50,"/");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 4));
  std::operator+(asStack_48,asStack_40);
  Sexy::ToWString(asStack_38);
  iVar3 = FUN_03800484(100);
  iVar4 = FUN_03800484(0x14);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar1,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneEnhancementView::Draw(PlantGeneEnhancementView *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Image *pIVar8;
  undefined8 uVar9;
  float fVar10;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar6 = *(int *)(this + 0x50);
  iVar1 = *(int *)(this + 0x54);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2cf0);
  iVar2 = *(int *)(lVar7 + 0x38);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2cf0);
  fVar10 = (float)iVar2 / (float)*(int *)(lVar7 + 0x3c);
  if ((float)iVar6 / (float)iVar1 < fVar10) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2cf0);
    fVar10 = fVar10 * (float)*(int *)(this + 0x54);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,(int)((float)(*(int *)(this + 0x50) / 2) - fVar10 * 0.5),0,(int)fVar10
               ,*(int *)(this + 0x54));
  }
  else {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2cf0);
    fVar10 = (float)*(int *)(this + 0x50) / fVar10;
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,0,(int)((float)(*(int *)(this + 0x54) / 2) - fVar10 * 0.5),
               *(int *)(this + 0x50),(int)fVar10);
  }
  iVar1 = FUN_03800484(0x78);
  iVar6 = *(int *)(this + 0x54);
  iVar2 = FUN_03800484(0x46);
  Sexy::Insets::Insets(aIStack_18,0,iVar6 - iVar1,*(int *)(this + 0x50),iVar2);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2a10);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  iVar1 = FUN_03800484(0xd2);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_03800484(0x17);
  iVar3 = FUN_03800484(100);
  iVar4 = FUN_03800484(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar6 - iVar1,iVar2,iVar3,iVar4);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2c98);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  iVar1 = FUN_03800484(0xd2);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_03800484(0x14);
  iVar3 = FUN_03800484(8);
  iVar4 = FUN_03800484(0x28);
  iVar5 = FUN_03800484(0x3c);
  Sexy::Insets::Insets(aIStack_18,(iVar6 - iVar1) - iVar2,iVar3,iVar4,iVar5);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2570);
  DrawAdaptiveImage(param_1,aIStack_18,uVar9);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x118));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_03800484(0xd2);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_03800484(0x14);
  iVar3 = FUN_03800484(0x17);
  iVar4 = FUN_03800484(0x3c);
  iVar5 = FUN_03800484(0x1e);
  Sexy::Insets::Insets(aIStack_28,(iVar6 - iVar1) + iVar2,iVar3,iVar4,iVar5);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  iVar1 = FUN_03800484(0x154);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_03800484(0x17);
  iVar3 = FUN_03800484(100);
  iVar4 = FUN_03800484(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar6 - iVar1,iVar2,iVar3,iVar4);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2c98);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  iVar1 = FUN_03800484(0x154);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_03800484(0x14);
  iVar3 = FUN_03800484(6);
  iVar4 = FUN_03800484(0x28);
  iVar5 = FUN_03800484(0x3c);
  Sexy::Insets::Insets(aIStack_18,(iVar6 - iVar1) - iVar2,iVar3,iVar4,iVar5);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2ae0);
  DrawAdaptiveImage(param_1,aIStack_18,uVar9);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x114));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_03800484(0x154);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_03800484(0x14);
  iVar3 = FUN_03800484(0x17);
  iVar4 = FUN_03800484(0x50);
  iVar5 = FUN_03800484(0x1e);
  Sexy::Insets::Insets(aIStack_28,(iVar6 - iVar1) + iVar2,iVar3,iVar4,iVar5);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  iVar6 = FUN_03800484(0x96);
  iVar1 = FUN_03800484(100);
  Sexy::Point::Point((Point *)aIStack_18,-iVar6,-iVar1);
  DrawProgress(this,param_1,(pair *)(this + 0xec),(Point *)aIStack_18);
  iVar6 = FUN_03800484(200);
  iVar1 = FUN_03800484(100);
  Sexy::Point::Point((Point *)aIStack_18,iVar6,-iVar1);
  DrawProgress(this,param_1,(pair *)(this + 0xfc),(Point *)aIStack_18);
  iVar6 = FUN_03800484(0);
  Sexy::Point::Point((Point *)aIStack_18,iVar6,iVar6);
  DrawProgress(this,param_1,(pair *)(this + 0x10c),(Point *)aIStack_18);
  iVar6 = FUN_03800484(200);
  iVar1 = FUN_03800484(100);
  Sexy::Point::Point((Point *)aIStack_18,-iVar6,iVar1);
  DrawProgress(this,param_1,(pair *)(this + 0xf4),(Point *)aIStack_18);
  iVar6 = FUN_03800484(0x96);
  iVar1 = FUN_03800484(100);
  Sexy::Point::Point((Point *)aIStack_18,iVar6,iVar1);
  DrawProgress(this,param_1,(pair *)(this + 0x104),(Point *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::ShowIfGeneNewAdditionInfo() */

void __thiscall PlantGeneEnhancementView::ShowIfGeneNewAdditionInfo(PlantGeneEnhancementView *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PlantGeneNewAdditionWidget *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneEnhancement::GetGeneConfig((GeneEnhancement *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  iVar1 = *(int *)(lVar3 + 0x88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar2 = LocalProfileSaveData::GetPlantGeneAdditionVersion();
  if (iVar1 != iVar2) {
    LocalProfileSaveData::SetPlantGeneAdditionVersion(iVar1);
    if (*(long *)(this + 0x140) == 0) {
      this_00 = ::operator_new(0xe8);
      memset(this_00,0,0xe8);
      PlantGeneNewAdditionWidget::PlantGeneNewAdditionWidget(this_00);
      *(PlantGeneNewAdditionWidget **)(this + 0x140) = this_00;
      PlantGeneNewAdditionWidget::InitView(this_00);
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
                (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
                (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
      LawnApp::PushOverlaysToTop(gLawnApp);
      Sexy::WidgetManager::AddBaseModal
                (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
                (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::RequestConfig() */

void __thiscall PlantGeneEnhancementView::RequestConfig(PlantGeneEnhancementView *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2800];
  string asStack_1f8 [496];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_03800210(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_1f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::InitView() */

void __thiscall PlantGeneEnhancementView::InitView(PlantGeneEnhancementView *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  TGALogMgr *this_00;
  Point *__n;
  ButtonListener *pBVar11;
  long *plVar12;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  pBVar11 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x58,pBVar11,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2598,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06ab25f8,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  uVar1 = FUN_03800484(0xf);
  uVar2 = FUN_03800484(8);
  uVar3 = FUN_03800484(0x37);
  uVar4 = FUN_03800484(0x32);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x21,pBVar11,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2b18,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06ab2b40,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  iVar5 = FUN_03800484(0x82);
  iVar8 = *(int *)(this + 0x50);
  uVar1 = FUN_03800484(0xf);
  uVar2 = FUN_03800484(0x2d);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar8 - iVar5,uVar1,uVar2,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x16,pBVar11,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x150) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x150);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2728,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06ab2728,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  plVar12 = *(long **)(this + 0x150);
  iVar6 = FUN_03800484(300);
  iVar8 = *(int *)(this + 0x50);
  iVar7 = FUN_03800484(0x7d);
  iVar5 = *(int *)(this + 0x54);
  uVar1 = FUN_03800484(0x73);
  uVar2 = FUN_03800484(0x50);
  (**(code **)(*plVar12 + 0x198))(plVar12,iVar8 - iVar6,iVar5 - iVar7,uVar1,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x150));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0xb,pBVar11,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2830,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06ab2830,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  iVar5 = FUN_03800484(0x41);
  iVar8 = *(int *)(this + 0x50);
  uVar1 = FUN_03800484(0xf);
  uVar2 = FUN_03800484(0x2d);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar8 - iVar5,uVar1,uVar2,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x2c,pBVar11,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2938,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06ab2938,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  iVar6 = FUN_03800484(0x9b);
  iVar8 = *(int *)(this + 0x50);
  iVar7 = FUN_03800484(0x7d);
  iVar5 = *(int *)(this + 0x54);
  uVar1 = FUN_03800484(0x73);
  uVar2 = FUN_03800484(0x50);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar8 - iVar6,iVar5 - iVar7,uVar1,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x42,pBVar11,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2990,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06ab2990,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  uVar1 = FUN_03800484(0x32);
  iVar5 = FUN_03800484(0x7d);
  iVar8 = *(int *)(this + 0x54);
  uVar2 = FUN_03800484(0x50);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,uVar1,iVar8 - iVar5,uVar2,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  iVar8 = FUN_03800484(0x96);
  iVar5 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_40,-iVar8,-iVar5);
  CreateGeneEnhancementEntry(this,0x65,aPStack_40);
  iVar8 = FUN_03800484(200);
  iVar5 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_40,iVar8,-iVar5);
  CreateGeneEnhancementEntry(this,0x67,aPStack_40);
  iVar8 = FUN_03800484(0);
  Sexy::Point::Point(aPStack_40,iVar8,iVar8);
  uVar10 = CreateGeneEnhancementEntry(this,0x69,aPStack_40);
  *(undefined8 *)(this + 0x158) = uVar10;
  iVar8 = FUN_03800484(200);
  iVar5 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_40,-iVar8,iVar5);
  CreateGeneEnhancementEntry(this,0x66,aPStack_40);
  iVar8 = FUN_03800484(0x96);
  iVar5 = FUN_03800484(100);
  Sexy::Point::Point(aPStack_40,iVar8,iVar5);
  __n = aPStack_40;
  CreateGeneEnhancementEntry(this,0x68,aPStack_40);
  RefreshProgress(this);
  CheckTips(this);
  RequestConfig(this);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)aPStack_40);
  std::string::append((string *)aPStack_40,"1",(size_t)__n);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogGeneEnhancementData(this_00,(TGAGeneEnhancementData *)aPStack_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::RequestDraw(int) */

void __thiscall PlantGeneEnhancementView::RequestDraw(PlantGeneEnhancementView *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2792];
  string asStack_200 [504];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  UISingletonDialog<UIPlantGeneSelectDrawMode>::CloseDialog();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_038001b4(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_200,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::ShowPlantGeneBonus(std::vector<int, std::allocator<int> > const&,
   std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
PlantGeneEnhancementView::ShowPlantGeneBonus
          (PlantGeneEnhancementView *this,vector *param_1,vector *param_2)

{
  PlantGeneBonus *this_00;
  vector<int,std::allocator<int>> avStack_38 [24];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x120) == 0) {
    this_00 = ::operator_new(0x188);
    PlantGeneBonus::PlantGeneBonus(this_00);
    *(PlantGeneBonus **)(this + 0x120) = this_00;
    std::vector<int,std::allocator<int>>::vector(avStack_38,param_1);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_20,param_2);
    PlantGeneBonus::InitView(this_00,avStack_38,avStack_20);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x120));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x120));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x120));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x120));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementView::ShowPlantGeneDisplayView(int) */

void __thiscall
PlantGeneEnhancementView::ShowPlantGeneDisplayView(PlantGeneEnhancementView *this,int param_1)

{
  char cVar1;
  PlantGeneDisplayView *this_00;
  
  if (*(long *)(this + 0x128) == 0) {
    this_00 = ::operator_new(0x128);
    PlantGeneDisplayView::PlantGeneDisplayView(this_00);
    *(PlantGeneDisplayView **)(this + 0x128) = this_00;
    PlantGeneDisplayView::InitView(this_00,param_1);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x128));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x128));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x128));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x128));
    cVar1 = IsOnToturial(this);
    if (cVar1 != '\0') {
      PlantGeneDisplayView::StartToturial(*(PlantGeneDisplayView **)(this + 0x128));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementView::ButtonDepress(int) */

void __thiscall PlantGeneEnhancementView::ButtonDepress(PlantGeneEnhancementView *this,int param_1)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  UIPlantGeneSelectDrawMode *this_01;
  UIPlantGeneSequenceShop *this_02;
  char *pcVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
    this_02 = (UIPlantGeneSequenceShop *)UISingletonDialog<UIPlantGeneSequenceShop>::ShowDialog();
    UIPlantGeneSequenceShop::InitView(this_02);
  }
  else if (param_1 < 0x2d) {
    if (param_1 == 0x16) {
      this_01 = (UIPlantGeneSelectDrawMode *)
                UISingletonDialog<UIPlantGeneSelectDrawMode>::ShowDialog();
      cVar1 = IsOnToturial(this);
      if (cVar1 != '\0') {
        if (this[0x148] == (PlantGeneEnhancementView)0x0) {
          UIPlantGeneSelectDrawMode::StartToturial(this_01);
        }
        else {
          EndToturial(this);
        }
      }
    }
    else if (param_1 == 0x21) {
      ShowGeneFactorShop(this);
    }
    else if (param_1 == 0xb) {
      ShowGeneEnhancementInfo();
    }
  }
  else if (param_1 == 0x58) {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_UI_Button_X_Close_Release");
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  }
  else if (param_1 < 0x59) {
    if ((param_1 == 0x42) &&
       (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
       this_00 != (UIMessageBox *)0x0)) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[ACTIVITY_NOT_OPEN]");
      std::string::string(asStack_18," ");
      Sexy::ToWString(asStack_18);
      thunk_FUN_05477668(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
      TodStringTranslate(L"[TO_BE_AWAIT]");
      thunk_FUN_05477668(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_00,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar3 + 0xd8,asStack_18);
      FUN_05476c50(asStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else if (param_1 - 0x65U < 5) {
    ShowPlantGeneDisplayView(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantGeneEnhancementView::ButtonDepress(int) */

void __thiscall PlantGeneEnhancementView::ButtonDepress(PlantGeneEnhancementView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

