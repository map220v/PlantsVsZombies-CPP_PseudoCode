// Class: TrainingCampZombieDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::GetLayoutName() */

void __thiscall TrainingCampZombieDlg::GetLayoutName(TrainingCampZombieDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"TrainingCampZombie");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* TrainingCampZombieDlg::onFinishAtOnceCallback(int) */

void __thiscall
TrainingCampZombieDlg::onFinishAtOnceCallback(TrainingCampZombieDlg *this,int param_1)

{
  INetworkMsgProcess *this_00;
  
  if (param_1 != 1) {
    return;
  }
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPTrainingFinishAtOnce(this_00);
  return;
}


/* TrainingCampZombieDlg::checkPageBtns() */

void __thiscall TrainingCampZombieDlg::checkPageBtns(TrainingCampZombieDlg *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = UIPage::GetCurPage(*(UIPage **)(this + 0x198));
  iVar2 = UIPage::GetMaxPage(*(UIPage **)(this + 0x198));
  (**(code **)(**(long **)(this + 0x1a0) + 0x188))(*(long **)(this + 0x1a0),iVar1 < 2);
  (**(code **)(**(long **)(this + 0x1a8) + 0x188))(*(long **)(this + 0x1a8),iVar2 <= iVar1);
  (**(code **)(**(long **)(this + 0x198) + 0x158))(*(long **)(this + 0x198),1 < iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::onTutorialTrainZombieClick() */

void __thiscall TrainingCampZombieDlg::onTutorialTrainZombieClick(TrainingCampZombieDlg *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  GameMaskUI *this_00;
  MetricsCollector *this_01;
  undefined8 uVar4;
  string *psVar5;
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)FUN_04adf97c(*(undefined8 *)(this + 0x150),0);
  psVar5 = (string *)*puVar2;
  std::string::string(asStack_18,"pvp_change");
  ZombieItemWidget::SetType(psVar5);
  std::string::~string(asStack_18);
  nop();
  iVar1 = *(int *)(this + 0x1d0);
  *(int *)(this + 0x1d0) = iVar1 + 1;
  puVar2 = (undefined8 *)FUN_04adf97c(*(undefined8 *)(this + 0x150),0);
  TrainingItemWidget::SetSellNum((TrainingItemWidget *)*puVar2,iVar1 + 1);
  if (*(int *)(this + 0x1d0) < 5) {
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    if (lVar3 != 0) {
      TodStringTranslate(L"[PVP_TUTORIAL_CLICKTRAIN20ZB]");
      TodReplaceNumberString(awStack_20,L"{NUMBER}",5 - *(int *)(this + 0x1d0));
      FUN_054766c8(awStack_20,asStack_18);
      FUN_05476c50(asStack_18);
      this_00 = (GameMaskUI *)LawnApp::GetGameMaskUI(gLawnApp);
      GameMaskUI::RefreshDialogText(this_00,awStack_20);
      FUN_05476c50(awStack_20);
    }
  }
  else {
    this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::LogPvpGuideComplete(this_01,9);
    uVar4 = *(undefined8 *)(this + 0x1b0);
    std::string::string((string *)awStack_20,"");
    Sexy::Insets::Insets((Insets *)asStack_18);
    GameMaskUI::ShowMask(uVar4,2,awStack_20,asStack_18);
    std::string::~string((string *)awStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::RefreshDesc() */

void __thiscall TrainingCampZombieDlg::RefreshDesc(TrainingCampZombieDlg *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  SysFont *pSVar4;
  long lVar5;
  TrainingCamp *pTVar6;
  UIWidgetText *pUVar7;
  ulong uVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar5 = Sexy::SysFont::CreateImageFont(pSVar4);
  uVar1 = FUN_04adf958(*(undefined4 *)(lVar5 + 8));
  pSVar4 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pTVar6 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar4);
  iVar2 = TrainingCamp::GetTrainingSpace(pTVar6);
  pSVar4 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pTVar6 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar4);
  uVar3 = TrainingCamp::GetSpaceUsed(pTVar6);
  this[0x1cc] = (TrainingCampZombieDlg)((int)uVar1 < (int)(iVar2 + uVar3));
  std::string::string(asStack_10,"UIText_Space");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar7 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d/%d",asStack_10,(ulong)(iVar2 + uVar3),(ulong)uVar1);
    PuzzleTip::SetTip(pUVar7,asStack_10);
    FUN_05476c50(asStack_10);
  }
  std::string::string(asStack_10,"UIText_4");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar7 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d/%d",asStack_10,(ulong)uVar3,(ulong)uVar1);
    PuzzleTip::SetTip(pUVar7,asStack_10);
    FUN_05476c50(asStack_10);
  }
  std::string::string(asStack_10,"UIText_6");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar7 != (UIWidgetText *)0x0) {
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar8 = FUN_04adf954(*(undefined4 *)(lVar5 + 8));
    Sexy::StrFormat(L"%d",asStack_10,uVar8 & 0xffffffff);
    PuzzleTip::SetTip(pUVar7,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::onPVPTutorialTrainingFinished() */

void __thiscall TrainingCampZombieDlg::onPVPTutorialTrainingFinished(TrainingCampZombieDlg *this)

{
  MetricsCollector *this_00;
  UIWidgetText *pUVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  string *psVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
  MetricsCollector::LogPvpGuideComplete(this_00,0xb);
  std::string::string(asStack_18,"UIText_Space");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d/%d",asStack_18,0x14,0x50);
    PuzzleTip::SetTip(pUVar1,asStack_18);
    FUN_05476c50(asStack_18);
  }
  std::string::string(asStack_18,"UIText_4");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d/%d",asStack_18,0x14,0x50);
    PuzzleTip::SetTip(pUVar1,asStack_18);
    FUN_05476c50(asStack_18);
  }
  std::string::string(asStack_18,"UIText_6");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d",asStack_18,2000);
    PuzzleTip::SetTip(pUVar1,asStack_18);
    FUN_05476c50(asStack_18);
  }
  *(undefined4 *)(this + 0x1d0) = 0x14;
  puVar2 = (undefined8 *)FUN_04adf97c(*(undefined8 *)(this + 0x168),0);
  psVar5 = (string *)*puVar2;
  std::string::string(asStack_18,"pvp_change");
  ZombieItemWidget::SetType(psVar5);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_UpDesc");
  UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_18,false);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_SellDesc");
  UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_18,false);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"BtnSell_OK");
  UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_18,false);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"BtnSell_Cancel");
  UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_18,false);
  std::string::~string(asStack_18);
  nop();
  lVar3 = UITabControl::GetTab(*(UITabControl **)(this + 0x148),2);
  uVar4 = FUN_04adf96c(*(undefined8 *)(lVar3 + 0xd8));
  std::string::string(asStack_20,"");
  Sexy::Insets::Insets((Insets *)asStack_18);
  GameMaskUI::ShowMask(uVar4,2,asStack_20,asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::RefreshTraining() */

void __thiscall TrainingCampZombieDlg::RefreshTraining(TrainingCampZombieDlg *this)

{
  bool bVar1;
  SysFont *this_00;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  string *psVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar9 = 0;
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  this_00 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::SysFont::CreateImageFont(this_00);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_01);
  local_18 = FUN_04ae0830(*puVar2);
  while( true ) {
    local_10 = FUN_04ae0880(puVar2[1]);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar6 = *(undefined8 *)(this + 0x150);
    if (!bVar1) break;
    uVar3 = FUN_04adf970(uVar6,*(undefined8 *)(this + 0x158));
    if (uVar3 <= uVar8) goto LAB_04ae09c0;
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar9 = iVar9 + 1;
      puVar5 = (undefined8 *)FUN_04adf97c(uVar6,uVar8);
      uVar8 = (ulong)iVar9;
      ZombieItemWidget::SetType((string *)*puVar5);
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  uVar3 = FUN_04adf970(uVar6,*(undefined8 *)(this + 0x158));
LAB_04ae09c0:
  while (bVar1 = uVar8 < uVar3, uVar8 = uVar8 + 1, bVar1) {
    puVar2 = (undefined8 *)FUN_04adf97c(uVar6);
    psVar7 = (string *)*puVar2;
    std::string::string((string *)&local_10,"");
    ZombieItemWidget::SetType(psVar7);
    std::string::~string((string *)&local_10);
    nop();
    uVar6 = *(undefined8 *)(this + 0x150);
    uVar3 = FUN_04adf970(uVar6,*(undefined8 *)(this + 0x158));
  }
  (**(code **)(*(long *)this + 0x340))(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::RefreshTotalSeconds() */

void __thiscall TrainingCampZombieDlg::RefreshTotalSeconds(TrainingCampZombieDlg *this)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  TrainingCampZombieDlg TVar4;
  int iVar5;
  int iVar6;
  SysFont *pSVar7;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined8 *puVar8;
  TrainingData *this_01;
  UIWidgetText *pUVar9;
  long lVar10;
  PVPManager *pPVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  int extraout_w1;
  long *plVar14;
  code *pcVar15;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar2 = true;
  fVar1 = 0.0;
  local_8 = ___stack_chk_guard;
  pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar6 = 0;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::SysFont::CreateImageFont(pSVar7);
  puVar8 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  local_18 = FUN_04ae0830(*puVar8);
  while( true ) {
    local_10 = FUN_04ae0880(puVar8[1]);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar3) break;
    this_01 = (TrainingData *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*(int *)(this_01 + 8) < 1) {
      if (0 < *(int *)(this_01 + 0xc)) {
        iVar5 = TrainingData::GetTotalSeconds(this_01);
        iVar6 = iVar6 + 1;
        bVar2 = false;
        fVar1 = fVar1 + (float)iVar5;
      }
    }
    else {
      iVar6 = iVar6 + 1;
      if (0 < *(int *)(this_01 + 0xc)) {
        iVar5 = TrainingData::GetTotalSeconds(this_01);
        bVar2 = false;
        fVar1 = fVar1 + (float)iVar5;
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  std::string::string((string *)&local_10,"UIText_1");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (pUVar9 != (UIWidgetText *)0x0) {
    StringHelper::ToTimeString((StringHelper *)0x0,fVar1,extraout_w1);
    PuzzleTip::SetTip(pUVar9,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
  }
  plVar14 = *(long **)(this + 0x1b0);
  if (plVar14 != (long *)0x0) {
    pcVar15 = *(code **)(*plVar14 + 0x188);
    pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar10 = Sexy::SysFont::CreateImageFont(pSVar7);
    iVar5 = FUN_04adf95c(*(undefined4 *)(lVar10 + 0xc));
    (*pcVar15)(plVar14,iVar5 < iVar6);
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar5 = PVPManager::TimeToGem(pPVar11,(int)fVar1);
    TodStringTranslate(L"[PVP_TRAINING_FINISH_AT_ONCE]");
    TodReplaceNumberString((wstring *)&local_18,L"{NUMBER}",iVar5);
    FUN_054766c8((move_iterator<SexyURL::KeyedValue*> *)&local_18,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    thunk_FUN_05477b9c(*(long *)(this + 0x1b0) + 0xd8,
                       (move_iterator<SexyURL::KeyedValue*> *)&local_18);
    plVar14 = *(long **)(this + 0x1b0);
    pcVar15 = *(code **)(*plVar14 + 800);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
    (*pcVar15)(plVar14,uVar12);
    FUN_05476c50((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  plVar14 = *(long **)(this + 0x1b8);
  if (plVar14 != (long *)0x0) {
    pcVar15 = *(code **)(*plVar14 + 0x188);
    pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar10 = Sexy::SysFont::CreateImageFont(pSVar7);
    iVar5 = FUN_04adf95c(*(undefined4 *)(lVar10 + 0xc));
    (*pcVar15)(plVar14,iVar5 < iVar6);
    pPVar11 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar6 = PVPManager::TimeToGem(pPVar11,(int)fVar1);
    CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0x1b8),iVar6);
  }
  std::string::string((string *)&local_10,"UIText_Tips");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Widget_TotalTime");
  plVar14 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (bVar2) {
    pwVar13 = L"[PVP_TRAINING_START_TIP]";
    TVar4 = (TrainingCampZombieDlg)0x1;
  }
  else {
    pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar10 = Sexy::SysFont::CreateImageFont(pSVar7);
    TVar4 = (TrainingCampZombieDlg)FUN_04adf960(*(undefined1 *)(lVar10 + 0x28));
    if (TVar4 == (TrainingCampZombieDlg)0x0) {
      pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar10 = Sexy::SysFont::CreateImageFont(pSVar7);
      TVar4 = (TrainingCampZombieDlg)FUN_04adf964(*(undefined1 *)(lVar10 + 0x29));
      if (TVar4 == (TrainingCampZombieDlg)0x0) {
        TVar4 = this[0x1cc];
        uVar12 = 1;
        if (TVar4 == (TrainingCampZombieDlg)0x0) goto LAB_04ae0d78;
        pwVar13 = L"[PVP_TRAINING_FULL_LIST_TIP]";
      }
      else {
        pwVar13 = L"[PVP_TRAINING_FULL_TYPE_TIP]";
      }
    }
    else {
      pwVar13 = L"[PVP_TRAINING_FULL_SPACE_TIP]";
    }
  }
  uVar12 = 0;
  TodStringTranslate(pwVar13);
  PuzzleTip::SetTip(pUVar9,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
LAB_04ae0d78:
  (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,TVar4);
  (**(code **)(*plVar14 + 0x158))(plVar14,uVar12);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::Update() */

void __thiscall TrainingCampZombieDlg::Update(TrainingCampZombieDlg *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  MetricsCollector *this_01;
  PVZ2UIButton *pPVar3;
  float fVar4;
  undefined4 uVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04adf950(*(undefined4 *)(lVar2 + 0x1100));
  if (iVar1 == 5) {
    iVar1 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x148));
    if ((iVar1 == 2) && (this[0x1d4] == (TrainingCampZombieDlg)0x0)) {
      this[0x1d4] = (TrainingCampZombieDlg)0x1;
      this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(this_01,0xc);
      std::string::string(asStack_18,"BtnClose");
      pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_20,"");
      Sexy::Insets::Insets((Insets *)asStack_18);
      GameMaskUI::ShowMask(pPVar3,2,asStack_20,asStack_18);
      std::string::~string(asStack_20);
      nop();
    }
  }
  else {
    fVar4 = (float)PVZ_T();
    if (0.5 <= fVar4 - *(float *)(this + 0x1c4)) {
      RefreshTotalSeconds(this);
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x1c4) = uVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::onPVPTrainingFinishGems(int) */

void __thiscall
TrainingCampZombieDlg::onPVPTrainingFinishGems(TrainingCampZombieDlg *this,int param_1)

{
  PVPFinishButton *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(CardGameDeckButton **)(this + 0x1b8) != (CardGameDeckButton *)0x0) {
    CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0x1b8),param_1);
    pPVar1 = *(PVPFinishButton **)(this + 0x1b8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onFinishAtOnceCallback);
    Sexy::Delegate1<int>::Delegate1<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)(int)>
              (aDStack_38,aCStack_50);
    PVPFinishButton::ShowBuyConfirm(pPVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrainingCampZombieDlg::TrainingCampZombieDlg() */

void __thiscall TrainingCampZombieDlg::TrainingCampZombieDlg(TrainingCampZombieDlg *this)

{
  undefined *puVar1;
  int iVar2;
  PrimeText *this_00;
  ProfileMgr *this_01;
  long lVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<TrainingCampZombieDlg>::UISingletonDialog
            ((UISingletonDialog<TrainingCampZombieDlg> *)this);
  UI::PageListener::PageListener((PageListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0694b4a0;
  *(undefined **)(this + 0xd8) = &DAT_0694b7f8;
  *(undefined **)(this + 0x138) = &DAT_0694b840;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  this[0x1c0] = (TrainingCampZombieDlg)0x0;
  *(undefined4 *)(this + 0x1c8) = 0;
  this[0x1cc] = (TrainingCampZombieDlg)0x0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  iVar2 = FUN_04adf950(*(undefined4 *)(lVar3 + 0x1100));
  puVar1 = gMessageRouter;
  if (iVar2 != 5) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTrainingItemReduceClicked);
    local_80 = local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
    MessageRouter::
    Subscribe<TrainingItemWidget*,Sexy::CBMemberTranslatorX<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)(TrainingItemWidget*)>>
              ((MessageRouter *)puVar1,Message::TrainingItemReduceClicked,&local_80);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPTrainingSellResult);
    local_90 = local_38;
    local_a0 = local_48;
    uStack_98 = uStack_40;
    MessageRouter::
    Subscribe<bool,Sexy::CBMemberTranslatorX<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)(bool)>>
              ((MessageRouter *)puVar1,Message::PVPTrainingSellResult,&local_a0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPTrainingZombieChanged);
    local_a0 = local_30;
    uStack_98 = uStack_28;
    local_90 = local_20;
    MessageRouter::
    Subscribe<bool,Sexy::CBMemberTranslatorX<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)(bool)>>
              ((MessageRouter *)puVar1,Message::PVPTrainingZombieChanged,&local_a0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPTrainingFinishGems);
    local_b0 = local_8;
    local_c0 = local_18;
    uStack_b8 = uStack_10;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)(int)>>
              ((MessageRouter *)puVar1,Message::PVPTrainingFinishGems,&local_c0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::initTrainedEffect() */

void __thiscall TrainingCampZombieDlg::initTrainedEffect(TrainingCampZombieDlg *this)

{
  char cVar1;
  TrainedEffectWidget *pTVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar2 = ::operator_new(0x178);
  TrainedEffectWidget::TrainedEffectWidget(pTVar2);
  *(TrainedEffectWidget **)(this + 0x1d8) = pTVar2;
  std::string::string(asStack_50,"POPANIM_UI_PVP_INBATTLEANIM_CARD_EFFECT");
  UIWidgetAnim::SetAnimRig((UIWidgetAnim *)pTVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  lVar5 = *(long *)(this + 0x1d8);
  Sexy::FastCurve::SetOutRange((FastCurve *)asStack_50,0.5,0.5);
  FUN_04adf940(lVar5 + 0xe0,asStack_50);
  pTVar2 = *(TrainedEffectWidget **)(this + 0x1d8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTrainedEffectStopped);
  Sexy::Delegate0::Delegate0<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)()>
            (aDStack_38,asStack_50);
  TrainedEffectWidget::SetStopCallback(pTVar2,aDStack_38);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1d8));
  cVar1 = std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::empty
                    ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)
                     (this + 0x150));
  if (cVar1 == '\0') {
    plVar4 = *(long **)(this + 0x1d8);
    plVar3 = (long *)FUN_04adf97c(*(undefined8 *)(this + 0x150),0);
    (**(code **)(*plVar4 + 0x198))
              (plVar4,0,0,*(undefined4 *)(*plVar3 + 0x50),*(undefined4 *)(*plVar3 + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrainingCampZombieDlg::~TrainingCampZombieDlg() */

void __thiscall TrainingCampZombieDlg::~TrainingCampZombieDlg(TrainingCampZombieDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694b4a0;
  *(undefined **)(this + 0xd8) = &DAT_0694b7f8;
  *(undefined **)(this + 0x138) = &DAT_0694b840;
  std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::clear
            ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)(this + 0x150));
  std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::clear
            ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)(this + 0x168));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::~vector
            ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)(this + 0x168));
  std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::~vector
            ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)(this + 0x150));
  UISingletonDialog<TrainingCampZombieDlg>::~UISingletonDialog
            ((UISingletonDialog<TrainingCampZombieDlg> *)this);
  return;
}


/* TrainingCampZombieDlg::~TrainingCampZombieDlg() */

void __thiscall TrainingCampZombieDlg::~TrainingCampZombieDlg(TrainingCampZombieDlg *this)

{
  ~TrainingCampZombieDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::RefreshSell() */

void __thiscall TrainingCampZombieDlg::RefreshSell(TrainingCampZombieDlg *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  SysFont *pSVar4;
  TrainingCamp *pTVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  LotteryResultProgressBar *this_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar13 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pSVar4 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pTVar5 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar4);
  TrainingCamp::GetHaveDatas(pTVar5,(vector *)&local_20);
  uVar15 = local_20;
  uVar6 = FUN_04adf984(local_20,local_18);
  uVar12 = *(undefined8 *)(this + 0x168);
  uVar7 = FUN_04adf970(uVar12,*(undefined8 *)(this + 0x170));
  uVar10 = 0;
  while ((uVar13 < uVar6 && (uVar10 < uVar7))) {
    lVar9 = FUN_04adf990(uVar15,uVar13);
    uVar11 = uVar10;
    if (0 < *(int *)(lVar9 + 8)) {
      uVar11 = uVar10 + 1;
      puVar8 = (undefined8 *)FUN_04adf97c(uVar12,uVar10);
      ZombieItemWidget::SetType((string *)*puVar8);
      uVar15 = local_20;
      uVar6 = FUN_04adf984(local_20,local_18);
      uVar12 = *(undefined8 *)(this + 0x168);
      uVar7 = FUN_04adf970(uVar12,*(undefined8 *)(this + 0x170));
    }
    uVar13 = uVar13 + 1;
    uVar10 = uVar11;
  }
  for (; uVar10 < uVar7; uVar10 = uVar10 + 1) {
    puVar8 = (undefined8 *)FUN_04adf97c(uVar12,uVar10);
    ZombieItemWidget::SetType((string *)*puVar8);
    uVar12 = *(undefined8 *)(this + 0x168);
    uVar7 = FUN_04adf970(uVar12,*(undefined8 *)(this + 0x170));
  }
  this_00 = (LotteryResultProgressBar *)
            PlantDisplayFrame::GetPlantDisplayPtr(*(PlantDisplayFrame **)(this + 400));
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    pSVar4 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pTVar5 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar4);
    iVar1 = TrainingCamp::GetSpaceUsed(pTVar5);
    pSVar4 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar9 = Sexy::SysFont::CreateImageFont(pSVar4);
    iVar2 = FUN_04adf958(*(undefined4 *)(lVar9 + 8));
    fVar16 = 0.0;
    if (0.0001 < (double)iVar2) {
      fVar16 = (float)iVar1 / (float)iVar2;
    }
    lVar14 = *(long *)(this + 400);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    lVar9 = *(long *)(this + 400);
    *(int *)(lVar14 + 0x50) = (int)((float)iVar1 * fVar16);
    uVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    *(undefined4 *)(lVar9 + 0x54) = uVar3;
  }
  std::vector<TrainingData,std::allocator<TrainingData>>::~vector
            ((vector<TrainingData,std::allocator<TrainingData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrainingCampZombieDlg::RefreshAll() */

void __thiscall TrainingCampZombieDlg::RefreshAll(TrainingCampZombieDlg *this)

{
  RefreshDesc(this);
  RefreshTraining(this);
  RefreshSell(this);
  return;
}


/* TrainingCampZombieDlg::onTrainedEffectStopped() */

void TrainingCampZombieDlg::onTrainedEffectStopped(void)

{
  TrainingCampZombieDlg *in_x0;
  
  RefreshDesc(in_x0);
  RefreshTraining(in_x0);
  RefreshSell(in_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::PageChanged() */

void __thiscall TrainingCampZombieDlg::PageChanged(TrainingCampZombieDlg *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  PVPManager *this_00;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  string *psVar7;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  bVar1 = true;
  PVPManager::GetZombieDatas(this_00,(vector *)&local_20);
  local_48 = FUN_04adf998(local_20,local_18);
  iVar3 = UIPage::GetCurPage(*(UIPage **)(this + 0x198));
  iVar3 = (iVar3 + -1) * 10;
  local_44 = iVar3 + 10;
  piVar4 = eastl::min_alt<int>(&local_44,&local_48);
  lVar6 = *(long *)(this + 0x180);
  local_44 = *piVar4;
  local_40 = FUN_04ae10e4(*(TaskResource **)(lVar6 + 8));
  local_38 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(lVar6 + 8));
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_38), bVar2
        ) {
    puVar5 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_40);
    psVar7 = (string *)*puVar5;
    if (iVar3 < local_44) {
      lVar6 = (long)iVar3;
      iVar3 = iVar3 + 1;
      FUN_04adf9ac(local_20,lVar6);
      ZombieItemWidget::SetType(psVar7);
    }
    else {
      ZombieItemWidget::SetType(psVar7);
      LevelEditorSliderWidget::SetDescription((wstring *)psVar7);
      if (bVar1) {
        bVar1 = false;
        std::string::string(asStack_30,"[PVP_ZOMBIE_LOCKED]");
        StringHelper::ToStringValue(asStack_30);
        LevelEditorSliderWidget::SetDescription((wstring *)psVar7);
        FUN_05476c50(auStack_28);
        std::string::~string(asStack_30);
        nop();
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_40);
  }
  checkPageBtns(this);
  std::vector<PVPZombieData,std::allocator<PVPZombieData>>::~vector
            ((vector<PVPZombieData,std::allocator<PVPZombieData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TrainingCampZombieDlg::PageChanged() */

void __thiscall TrainingCampZombieDlg::PageChanged(TrainingCampZombieDlg *this)

{
  PageChanged(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::playTrainedEffect() */

void __thiscall TrainingCampZombieDlg::playTrainedEffect(TrainingCampZombieDlg *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  DeviceImage *pDVar5;
  SeedPacketUtils *this_00;
  string *psVar6;
  PacketRenderData *pPVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  PVZ1ModeNetworkMgr *this_01;
  TrainedEffectWidget *this_02;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::empty
                    ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)
                     (this + 0x150));
  if ((cVar2 == '\0') && (*(long *)(this + 0x1d8) != 0)) {
    puVar4 = (undefined8 *)FUN_04adf97c(*(undefined8 *)(this + 0x150),0);
    this_01 = (PVZ1ModeNetworkMgr *)*puVar4;
    (**(code **)(*(long *)this_01 + 0xd0))(&local_40,this_01);
    (**(code **)(**(long **)(this + 0x140) + 0xd0))(auStack_38,*(long **)(this + 0x140));
    pDVar5 = (DeviceImage *)FUN_04adf94c(*(undefined8 *)(*(long *)(this + 0x1d8) + 0x118));
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    psVar6 = (string *)PVZ1ModeNetworkMgr::GetEndPlayInfo(this_01);
    pPVar7 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData
                       (this_00,psVar6,(string *)&PVPManager::PacketsZombiePrefix,-1);
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar5,pPVar7,false,-1,false,false);
    lVar8 = UITabControl::GetTab(*(UITabControl **)(this + 0x148),2);
    Sexy::Insets::Insets((Insets *)&local_28,0,0,0,0);
    if ((lVar8 != 0) &&
       (plVar9 = (long *)FUN_04adf96c(*(undefined8 *)(lVar8 + 0xd8)), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0xd0))(&local_30);
      Sexy::Insets::Insets
                ((Insets *)&local_18,local_30,local_2c,(int)plVar9[10],*(int *)((long)plVar9 + 0x54)
                );
      local_28 = local_18;
      local_20 = uStack_10;
    }
    this_02 = *(TrainedEffectWidget **)(this + 0x1d8);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,(float)local_40,(float)local_3c);
    iVar1 = (int)local_28 + (int)local_20;
    iVar3 = FUN_04adfd5c(100);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)(iVar1 - iVar3),
               (float)(local_28._4_4_ + local_20._4_4_ / 2));
    TrainedEffectWidget::PlayEffect(this_02,(SexyVector2 *)&local_30,(SexyVector2 *)&local_18);
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_PVP_Training_Over");
  }
  else {
    RefreshAll(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::onPVPTrainingZombieChanged(bool) */

void __thiscall
TrainingCampZombieDlg::onPVPTrainingZombieChanged(TrainingCampZombieDlg *this,bool param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar3 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x148));
    if (iVar3 == 1) {
      playTrainedEffect(this);
    }
    else if (iVar3 == 2) {
      Set8BytesTo0(asStack_20);
      cVar1 = std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::empty
                        ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)
                         (this + 0x150));
      if (cVar1 == '\0') {
        puVar6 = (undefined8 *)FUN_04adf97c(*(undefined8 *)(this + 0x150),0);
        uVar4 = PVZ1ModeNetworkMgr::GetEndPlayInfo((PVZ1ModeNetworkMgr *)*puVar6);
        thunk_FUN_05475e00(asStack_20,uVar4);
      }
      RefreshAll(this);
      cVar1 = FUN_0547419c(asStack_20);
      if (cVar1 == '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x168);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_18 = FUN_04ae1b4c(uVar4,uVar5,asStack_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar2) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          TrainingItemWidget::PlayFinishedEffect((TrainingItemWidget *)*puVar6);
        }
      }
      std::string::~string(asStack_20);
    }
  }
  else {
    RefreshAll(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::SetSelling(bool) */

void __thiscall TrainingCampZombieDlg::SetSelling(TrainingCampZombieDlg *this,bool param_1)

{
  TrainingCampZombieDlg TVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  string *psVar6;
  long lVar7;
  UIWidgetText *pUVar8;
  PVZ1ModeNetworkMgr *this_00;
  uint uVar9;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  TVar1 = this[0x1c0];
  local_8 = ___stack_chk_guard;
  if (TVar1 != (TrainingCampZombieDlg)param_1) {
    this[0x1c0] = (TrainingCampZombieDlg)param_1;
    std::string::string(asStack_10,"UIText_UpDesc");
    UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_10,(bool)((byte)this[0x1c0] ^ 1));
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIText_SellDesc");
    UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_10,(bool)this[0x1c0]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"BtnSell_OK");
    UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_10,(bool)this[0x1c0]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"BtnSell_Cancel");
    UI::Dialog::SetWidgetVisible((Dialog *)this,asStack_10,(bool)this[0x1c0]);
    std::string::~string(asStack_10);
    nop();
    TVar1 = this[0x1c0];
  }
  if (TVar1 != (TrainingCampZombieDlg)0x0) {
    uVar9 = 0;
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x168));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      this_00 = (PVZ1ModeNetworkMgr *)*puVar5;
      PVZ1ModeNetworkMgr::GetEndPlayInfo(this_00);
      cVar3 = FUN_0547419c();
      if (cVar3 == '\0') {
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
        ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar6);
        iVar4 = FUN_04adf968(*(undefined4 *)(this_00 + 0xf4));
        if (0 < iVar4) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          iVar4 = FUN_04adf968(*(undefined4 *)(this_00 + 0xf4));
          uVar9 = uVar9 + (*(int *)(lVar7 + 0x14) >> 1) * iVar4;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    std::string::string(asStack_10,"UIText_7");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::StrFormat(L"%d",(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,(ulong)uVar9);
    PuzzleTip::SetTip(pUVar8,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrainingCampZombieDlg::onTrainingItemReduceClicked(TrainingItemWidget*) */

void __thiscall
TrainingCampZombieDlg::onTrainingItemReduceClicked
          (TrainingCampZombieDlg *this,TrainingItemWidget *param_1)

{
  int iVar1;
  SysFont *this_00;
  TrainingCamp *pTVar2;
  undefined8 uVar3;
  
  iVar1 = UITabControl::GetTabSelectedID(*(UITabControl **)(this + 0x148));
  if (iVar1 == 1) {
    this_00 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pTVar2 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(this_00);
    uVar3 = PVZ1ModeNetworkMgr::GetEndPlayInfo((PVZ1ModeNetworkMgr *)param_1);
    TrainingCamp::SetTraining(pTVar2,uVar3,2);
    return;
  }
  if ((iVar1 == 2) && (param_1 != (TrainingItemWidget *)0x0)) {
    iVar1 = FUN_04adf968(*(undefined4 *)(param_1 + 0xf4));
    TrainingItemWidget::SetSellNum(param_1,iVar1 + 1);
    SetSelling(this,true);
    return;
  }
  return;
}


/* TrainingCampZombieDlg::onPVPTrainingSellResult(bool) */

void TrainingCampZombieDlg::onPVPTrainingSellResult(bool param_1)

{
  TrainingCampZombieDlg *this;
  
  this = (TrainingCampZombieDlg *)(ulong)param_1;
  RefreshSell(this);
  RefreshDesc(this);
  SetSelling(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::OnCreate() */

void __thiscall TrainingCampZombieDlg::OnCreate(TrainingCampZombieDlg *this)

{
  int iVar1;
  int iVar2;
  UIScrollControl *pUVar3;
  UITabControl *pUVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIButton *pPVar6;
  ProfileMgr *this_00;
  long lVar7;
  PVPFinishButton *this_01;
  undefined8 uVar8;
  UIPage *pUVar9;
  SysFont *this_02;
  string *psVar10;
  TrainingItemWidget *pTVar11;
  ZombieItemWidget *this_03;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_04;
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  *this_05;
  INetworkMsgProcess *this_06;
  UITabContent *pUVar12;
  long *plVar13;
  UIWidgetText *pUVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  TrainingItemWidget *local_88;
  int local_80;
  undefined4 local_7c;
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_40,"PVP_INBATTLEANIM");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UI_PVP_Upgrade");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"PVPGlobalAudio");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIScroll_Training");
  pUVar3 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,asStack_40);
  *(UIScrollControl **)(this + 0x140) = pUVar3;
  std::string::~string(asStack_40);
  nop();
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x140),false);
  std::string::string(asStack_40,"UITabControl_0");
  pUVar4 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_40);
  *(UITabControl **)(this + 0x148) = pUVar4;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_Bg");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar5,false);
  iVar1 = FUN_04adfd5c(0x1e);
  (**(code **)(*(long *)pUVar5 + 0x1a8))
            (pUVar5,*(undefined4 *)(pUVar5 + 0x48),*(int *)(pUVar5 + 0x4c) - iVar1);
  std::string::string(asStack_40,"UIButton_0");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
  *(PVZ2UIButton **)(this + 0x1b0) = pPVar6;
  std::string::~string(asStack_40);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar7 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04adf950(*(undefined4 *)(lVar7 + 0x1100));
  if (iVar1 != 5) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x158))(*(long **)(this + 0x1b0),0);
    FUN_05478178(asStack_78,&DAT_056f11a8,&local_80);
    Sexy::Color::Color((Color *)asStack_40,1);
    this_01 = ::operator_new(0x338);
    PVPFinishButton::PVPFinishButton
              (this_01,1,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
    *(PVPFinishButton **)(this + 0x1b8) = this_01;
    FUN_05476c50(asStack_78);
    nop();
    pPVar6 = *(PVZ2UIButton **)(this + 0x1b8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b81748,5);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b81660,5);
    PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
    lVar15 = *(long *)(this + 0x1b0);
    (**(code **)(**(long **)(this + 0x1b8) + 0x198))
              (*(long **)(this + 0x1b8),*(undefined4 *)(lVar15 + 0x48),
               *(undefined4 *)(lVar15 + 0x4c),*(undefined4 *)(lVar15 + 0x50),
               *(undefined4 *)(lVar15 + 0x54));
    (**(code **)(**(long **)(*(long *)(this + 0x1b0) + 0x20) + 0x60))
              (*(long **)(*(long *)(this + 0x1b0) + 0x20),*(undefined8 *)(this + 0x1b8));
  }
  std::string::string(asStack_40,"Panel_Zombie");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  *(undefined8 *)(this + 0x180) = uVar8;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIPage_0");
  pUVar9 = UI::Dialog::GetWidget<UIPage>((Dialog *)this,asStack_40);
  *(UIPage **)(this + 0x198) = pUVar9;
  std::string::~string(asStack_40);
  nop();
  UIPage::SetClickable(*(UIPage **)(this + 0x198),false);
  (**(code **)(**(long **)(this + 0x198) + 0x158))(*(long **)(this + 0x198),0);
  *(TrainingCampZombieDlg **)(*(long *)(this + 0x198) + 0x110) = this + 0x138;
  std::string::string(asStack_40,"BtnLeft");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
  *(PVZ2UIButton **)(this + 0x1a0) = pPVar6;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"BtnRight");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
  *(PVZ2UIButton **)(this + 0x1a8) = pPVar6;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"WidgetSellList");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  *(undefined8 *)(this + 0x188) = uVar8;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ProgressBar");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  *(UIWidgetImage **)(this + 400) = pUVar5;
  std::string::~string(asStack_40);
  nop();
  local_88 = (TrainingItemWidget *)0x0;
  this_02 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar15 = Sexy::SysFont::CreateImageFont(this_02);
  iVar2 = FUN_04adf95c(*(undefined4 *)(lVar15 + 0xc));
  psVar10 = (string *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::GetZombiePacketSize(psVar10);
  local_7c = *(undefined4 *)(*(AccessoryContent **)(this + 0x140) + 0x54);
  iVar1 = iVar2 * local_80;
  lVar15 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  *(int *)(lVar15 + 0x50) = iVar1;
  if (iVar2 < 1) {
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),1);
    UIScrollControl::ScrollToMax(*(UIScrollControl **)(this + 0x140),false);
    initTrainedEffect(this);
  }
  else {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
      iVar1 = iVar1 - local_80;
      pTVar11 = ::operator_new(0x120);
      TrainingItemWidget::TrainingItemWidget(pTVar11,0);
      local_88 = pTVar11;
      (**(code **)(*(long *)pTVar11 + 0x198))(pTVar11,iVar1,0,local_80,local_7c);
      Sexy::ScrollWidget::SetBackgroundImage((ScrollWidget *)local_88,(Image *)this);
      std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::push_back
                ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)(this + 0x150),
                 &local_88);
      (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),local_88);
    } while (iVar18 != iVar2);
    iVar1 = 0;
    iVar18 = 0;
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),1);
    UIScrollControl::ScrollToMax(*(UIScrollControl **)(this + 0x140),false);
    initTrainedEffect(this);
    do {
      iVar1 = iVar1 + 1;
      pTVar11 = ::operator_new(0x120);
      TrainingItemWidget::TrainingItemWidget(pTVar11,1);
      local_88 = pTVar11;
      (**(code **)(*(long *)pTVar11 + 0x198))(pTVar11,iVar18,0,local_80,local_7c);
      TrainingItemWidget::SetSellNum(local_88,0);
      Sexy::ScrollWidget::SetBackgroundImage((ScrollWidget *)local_88,(Image *)this);
      std::vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>>::push_back
                ((vector<TrainingItemWidget*,std::allocator<TrainingItemWidget*>> *)(this + 0x168),
                 &local_88);
      (**(code **)(**(long **)(this + 0x188) + 0x60))(*(long **)(this + 0x188),local_88);
      iVar18 = iVar18 + local_80;
    } while (iVar1 != iVar2);
  }
  iVar18 = 0;
  psVar10 = (string *)0x0;
  iVar2 = FUN_04adfd5c(10);
  iVar1 = iVar2;
  while( true ) {
    iVar16 = 0;
    iVar17 = 0;
    do {
      this_03 = ::operator_new(0x118);
      ZombieItemWidget::ZombieItemWidget(this_03,(string *)&StringHelper::Empty);
      ZombieItemWidget::SetTrainingCampZombieDlg(this_03,this);
      if (iVar16 == 0 && iVar18 == 0) {
        psVar10 = (string *)this_03;
      }
      iVar16 = iVar16 + 1;
      (**(code **)(**(long **)(this + 0x180) + 0x60))(*(long **)(this + 0x180),this_03);
      (**(code **)(*(long *)this_03 + 0x198))
                (this_03,iVar17,iVar1,*(undefined4 *)(this_03 + 0x50),
                 *(undefined4 *)(this_03 + 0x54));
      iVar17 = iVar17 + iVar2 + *(int *)(this_03 + 0x50);
    } while (iVar16 != 5);
    iVar1 = iVar1 + iVar2 + *(int *)(this_03 + 0x54);
    if (iVar18 != 0) break;
    iVar18 = 1;
  }
  iVar1 = FUN_04adf950(*(undefined4 *)(lVar7 + 0x1100));
  if (iVar1 == 5) {
    pUVar4 = *(UITabControl **)(this + 0x148);
    *(undefined4 *)(this + 0x1d0) = 0;
    this[0x1d4] = (TrainingCampZombieDlg)0x0;
    pUVar12 = (UITabContent *)UITabControl::GetTab(pUVar4,iVar18);
    UITabControl::SetTabSelected(pUVar4,pUVar12);
    std::string::string(asStack_40,"pvp_change");
    ZombieItemWidget::SetType(psVar10);
    std::string::~string(asStack_40);
    nop();
    if (*(long *)(this + 0x1b0) != 0) {
      FUN_054772c4(*(long *)(this + 0x1b0) + 0xd8,&DAT_056f11a8);
      pPVar6 = *(PVZ2UIButton **)(this + 0x1b0);
      FUN_05478178(asStack_40,L"[PVP_TRAINING_TUTORIAL_FREE]",asStack_78);
      PVZ2UIButton::AddText(pPVar6,asStack_40,PrimeText_Game::Typeface_FZShaoEr_20_Outline,0);
      FUN_05476c50(asStack_40);
      nop();
      std::string::string(asStack_40,"UIImage_3");
      plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
      (**(code **)(*plVar13 + 0x158))(plVar13,0);
      std::string::~string(asStack_40);
      nop();
    }
    std::string::string(asStack_40,"UIText_Space");
    pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (pUVar14 != (UIWidgetText *)0x0) {
      Sexy::StrFormat(L"%d/%d",asStack_40,0,0x50);
      PuzzleTip::SetTip(pUVar14,asStack_40);
      FUN_05476c50(asStack_40);
    }
    std::string::string(asStack_40,"UIText_4");
    pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (pUVar14 != (UIWidgetText *)0x0) {
      Sexy::StrFormat(L"%d/%d",asStack_40,0,0x50);
      PuzzleTip::SetTip(pUVar14,asStack_40);
      FUN_05476c50(asStack_40);
    }
    std::string::string(asStack_40,"UIText_6");
    pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (pUVar14 != (UIWidgetText *)0x0) {
      Sexy::StrFormat(L"%d",asStack_40,2000);
      PuzzleTip::SetTip(pUVar14,asStack_40);
      FUN_05476c50(asStack_40);
    }
    std::string::string(asStack_78,"");
    Sexy::Insets::Insets((Insets *)asStack_40);
    GameMaskUI::ShowMask(psVar10,1,asStack_78,asStack_40);
    std::string::~string(asStack_78);
    nop();
  }
  else {
    this_04 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    this_05 = (map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
               *)eastl::
                 hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 ::get_allocator(this_04);
    iVar1 = std::
            map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
            ::size(this_05);
    UIPage::SetMaxPage(*(UIPage **)(this + 0x198),(iVar1 + -1) / 10 + 1);
    RefreshAll(this);
    this[0x1c0] = SUB41(iVar18,0);
    SetSelling(this,false);
    this_06 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPTrainingInfos(this_06);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::onSellConfirmCallback(int) */

void __thiscall
TrainingCampZombieDlg::onSellConfirmCallback(TrainingCampZombieDlg *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  string *psVar4;
  INetworkMsgProcess *this_00;
  PVZ1ModeNetworkMgr *this_01;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x168));
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_01 = (PVZ1ModeNetworkMgr *)*puVar3;
      iVar2 = FUN_04adf968(*(undefined4 *)(this_01 + 0xf4));
      if (0 < iVar2) {
        psVar4 = (string *)PVZ1ModeNetworkMgr::GetEndPlayInfo(this_01);
        ServerZombieID::ServerZombieID((ServerZombieID *)local_30,psVar4);
        local_48 = ImageLib::Image::GetWidth((Image *)local_30);
        local_44 = FUN_04adf968(*(undefined4 *)(this_01 + 0xf4));
        std::vector<C2S_PVP_ZombieNum,std::allocator<C2S_PVP_ZombieNum>>::push_back
                  ((vector<C2S_PVP_ZombieNum,std::allocator<C2S_PVP_ZombieNum>> *)local_20,
                   (C2S_PVP_ZombieNum *)&local_48);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPTrainingSell(this_00,(vector *)local_20);
    std::vector<C2S_PVP_ZombieNum,std::allocator<C2S_PVP_ZombieNum>>::~vector
              ((vector<C2S_PVP_ZombieNum,std::allocator<C2S_PVP_ZombieNum>> *)local_20);
  }
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x168));
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x168));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_30,(__normal_iterator *)local_20),
        bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_30);
    TrainingItemWidget::SetSellNum((TrainingItemWidget *)*puVar3,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_30);
  }
  SetSelling(this,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingCampZombieDlg::ButtonDepress(int) */

void __thiscall TrainingCampZombieDlg::ButtonDepress(TrainingCampZombieDlg *this,int param_1)

{
  int iVar1;
  MetricsCollector *pMVar2;
  UIWidgetText *pUVar3;
  undefined8 *puVar4;
  CrazyNPCManager *pCVar5;
  TrainingConfirmDlg *pTVar6;
  ProfileMgr *pPVar7;
  long lVar8;
  INetworkMsgProcess *this_00;
  string *psVar9;
  UIPage *pUVar10;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0:
    UISingletonDialog<TrainingCampZombieDlg>::CloseDialog();
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar8 = ProfileMgr::GetCurrentProfile(pPVar7);
    iVar1 = FUN_04adf950(*(undefined4 *)(lVar8 + 0x1100));
    if (iVar1 == 5) {
      pMVar2 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(pMVar2,0xd);
      FUN_04adfaac(lVar8 + 0x1100);
      LawnApp::KillGameMaskUI(gLawnApp);
    }
    break;
  case 1:
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar8 = ProfileMgr::GetCurrentProfile(pPVar7);
    iVar1 = FUN_04adf950(*(undefined4 *)(lVar8 + 0x1100));
    if (iVar1 == 5) {
      pMVar2 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(pMVar2,10);
      std::string::string(asStack_50,"UIText_Space");
      pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
      std::string::~string(asStack_50);
      nop();
      if (pUVar3 != (UIWidgetText *)0x0) {
        Sexy::StrFormat(L"%d/%d",asStack_50,5,0x50);
        PuzzleTip::SetTip(pUVar3,asStack_50);
        FUN_05476c50(asStack_50);
      }
      std::string::string(asStack_50,"UIText_4");
      pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
      std::string::~string(asStack_50);
      nop();
      if (pUVar3 != (UIWidgetText *)0x0) {
        Sexy::StrFormat(L"%d/%d",asStack_50,5,0x50);
        PuzzleTip::SetTip(pUVar3,asStack_50);
        FUN_05476c50(asStack_50);
      }
      std::string::string(asStack_50,"UIText_6");
      pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
      std::string::~string(asStack_50);
      nop();
      if (pUVar3 != (UIWidgetText *)0x0) {
        Sexy::StrFormat(L"%d",asStack_50,2000);
        PuzzleTip::SetTip(pUVar3,asStack_50);
        FUN_05476c50(asStack_50);
      }
      puVar4 = (undefined8 *)FUN_04adf97c(*(undefined8 *)(this + 0x150),0);
      psVar9 = (string *)*puVar4;
      std::string::string(asStack_50,"");
      ZombieItemWidget::SetType(psVar9);
      std::string::~string(asStack_50);
      nop();
      LawnApp::KillGameMaskUI(gLawnApp);
      pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"PVP_TRAINZB_MORE");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPVPTutorialTrainingFinished);
      Sexy::Delegate0::Delegate0<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)()>
                (aDStack_38,asStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar5,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
    else {
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
      INetworkMsgProcess::RequestPVPTrainingFinishGems(this_00);
      if (*(PVZ2UIButton **)(this + 0x1b0) != (PVZ2UIButton *)0x0) {
        PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0x1b0),1.5);
      }
      if (*(PVZ2UIButton **)(this + 0x1b8) != (PVZ2UIButton *)0x0) {
        PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0x1b8),1.5);
      }
    }
    break;
  case 2:
    pUVar10 = *(UIPage **)(this + 0x198);
    iVar1 = UIPage::GetCurPage(pUVar10);
    UIPage::SetCurPage(pUVar10,iVar1 + -1);
    checkPageBtns(this);
    break;
  case 3:
    pUVar10 = *(UIPage **)(this + 0x198);
    iVar1 = UIPage::GetCurPage(pUVar10);
    UIPage::SetCurPage(pUVar10,iVar1 + 1);
    checkPageBtns(this);
    break;
  case 4:
    pTVar6 = (TrainingConfirmDlg *)UISingletonDialog<TrainingConfirmDlg>::ShowDialog();
    if (pTVar6 != (TrainingConfirmDlg *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onSellConfirmCallback);
      Sexy::Delegate1<int>::Delegate1<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)(int)>
                ((Delegate1<int> *)aDStack_38,asStack_50);
      TrainingConfirmDlg::SetCallback(pTVar6,(Delegate1<int> *)aDStack_38);
    }
    break;
  case 5:
    onSellConfirmCallback(this,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to TrainingCampZombieDlg::ButtonDepress(int) */

void __thiscall TrainingCampZombieDlg::ButtonDepress(TrainingCampZombieDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

