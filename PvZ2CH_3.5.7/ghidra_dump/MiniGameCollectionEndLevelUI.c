// Class: MiniGameCollectionEndLevelUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::~MiniGameCollectionEndLevelUI() */

void __thiscall
MiniGameCollectionEndLevelUI::~MiniGameCollectionEndLevelUI(MiniGameCollectionEndLevelUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b5b18;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066b57f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_EndLevel");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"EndLevelAward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionEndLevelUI::~MiniGameCollectionEndLevelUI() */

void __thiscall
MiniGameCollectionEndLevelUI::~MiniGameCollectionEndLevelUI(MiniGameCollectionEndLevelUI *this)

{
  ~MiniGameCollectionEndLevelUI(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameCollectionEndLevelUI::IsFinished() */

MiniGameCollectionEndLevelUI __thiscall
MiniGameCollectionEndLevelUI::IsFinished(MiniGameCollectionEndLevelUI *this)

{
  return this[0xe6];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::DrawScore(Sexy::Graphics*) */

void __thiscall
MiniGameCollectionEndLevelUI::DrawScore(MiniGameCollectionEndLevelUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  GraphicsAutoState aGStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_038b4cfc(0xbe);
  iVar2 = FUN_038b4cfc(0x9b);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(*(int *)(this + 0x50) - iVar1) / 2,*(int *)(this + 0x54) / 2,iVar1
             ,iVar2);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  Sexy::Graphics::Translate(param_1,local_38,local_34);
  Sexy::Color::Color(aCStack_18,99,0x19,0x10);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  iVar1 = local_30;
  iVar2 = FUN_038b4cfc(0x14);
  Sexy::Insets::Insets((Insets *)aCStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::FillRect(param_1,(TRect *)aCStack_18);
  FUN_05478178(awStack_48,L"[INTEGRAL_NUM]",auStack_58);
  TodReplaceNumberString(awStack_48,L"{NUM}",*(int *)(this + 0xe0));
  iVar1 = FUN_038b4cfc(0x14);
  Sexy::Insets::Insets(aIStack_28,0,0,local_30,iVar1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,3);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar3,aCStack_18,5,1);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_48);
  nop();
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::MiniGameCollectionEndLevelUI() */

void __thiscall
MiniGameCollectionEndLevelUI::MiniGameCollectionEndLevelUI(MiniGameCollectionEndLevelUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (MiniGameCollectionEndLevelUI)0x0;
  *(undefined ***)this = &PTR_GetClass_066b57f0;
  this[0xe5] = (MiniGameCollectionEndLevelUI)0x0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b5b18;
  this[0xe6] = (MiniGameCollectionEndLevelUI)0x0;
  Sexy::Delegate1<MiniGameCollectionEndLevelUI*>::Delegate1((DummyInit *)(this + 0xe8));
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_EndLevel");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"EndLevelAward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::OnAnimationFinish(std::string const&) */

void __thiscall
MiniGameCollectionEndLevelUI::OnAnimationFinish(MiniGameCollectionEndLevelUI *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"windows_in");
  if (bVar1) {
    pPVar3 = *(PopAnimRig **)(this + 0x118);
    std::string::string(asStack_40,"windows_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"windows_out");
    if (bVar1) {
      this[0xe6] = (MiniGameCollectionEndLevelUI)0x1;
      iVar2 = FUN_038b3858(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0x100));
      if (iVar2 != 0) {
        Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                  ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0xe8),(SexyURL *)this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionEndLevelUI::Update() */

void __thiscall MiniGameCollectionEndLevelUI::Update(MiniGameCollectionEndLevelUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = *(PopAnimRig **)(this + 0x118);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::ButtonDepress(int) */

void __thiscall
MiniGameCollectionEndLevelUI::ButtonDepress(MiniGameCollectionEndLevelUI *this,int param_1)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x517) {
    pPVar1 = *(PopAnimRig **)(this + 0x118);
    std::string::string(asStack_58,"windows_out");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimationFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<MiniGameCollectionEndLevelUI,void(MiniGameCollectionEndLevelUI::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MiniGameCollectionEndLevelUI::ButtonDepress(int) */

void __thiscall
MiniGameCollectionEndLevelUI::ButtonDepress(MiniGameCollectionEndLevelUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::ReSizeAnimPosition() */

void __thiscall MiniGameCollectionEndLevelUI::ReSizeAnimPosition(MiniGameCollectionEndLevelUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  long *plVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x118) != 0) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    lVar8 = FUN_038b3904(*(undefined8 *)(*(long *)(this + 0x118) + 0x20));
    if (lVar8 == 0) goto LAB_038b8670;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_38,(float)*(int *)(lVar8 + 0x3c),(float)*(int *)(lVar8 + 0x40));
    fVar14 = *(float *)(lVar8 + 0x28) * local_38;
    local_34 = *(float *)(lVar8 + 0x28) * local_34;
    fVar13 = (float)*(int *)(this + 0x54) - local_34;
    local_38 = fVar14;
    iVar2 = FUN_038b4cfc(0x28);
    FUN_038b3834((float)(int)(((float)*(int *)(this + 0x50) - fVar14) * 0.5),
                 (float)(int)((float)iVar2 + fVar13 * 0.5),auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x118),aSStack_30);
  }
  plVar11 = *(long **)(this + 0x120);
  if (plVar11 != (long *)0x0) {
    iVar2 = *(int *)(this + 0x50);
    pcVar12 = *(code **)(*plVar11 + 0x198);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7110);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar1 = *(int *)(this + 0x54);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7110);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
    iVar5 = FUN_038b4cfc(0xf);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7110);
    uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7110);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
    (*pcVar12)(plVar11,iVar2 / 2 - iVar3 / 2,(iVar1 - iVar4) - iVar5,uVar6,uVar7);
  }
LAB_038b8670:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::Init(bool, bool) */

void __thiscall
MiniGameCollectionEndLevelUI::Init(MiniGameCollectionEndLevelUI *this,bool param_1,bool param_2)

{
  PopAnim *pPVar1;
  PopAnimRig *pPVar2;
  PVZ2UIButton *pPVar3;
  SocialInfo *this_01;
  MiniGameCollectionEndOfPlayData *pMVar4;
  undefined1 auStack_b0 [8];
  Delegate1<std::string_const&> aDStack_a8 [48];
  string asStack_78 [56];
  MiniGameCollectionEndOfPlayData aMStack_40 [32];
  undefined4 local_20;
  long local_8;
  CachedResourcePtr *this_00;
  
  this[0xe4] = (MiniGameCollectionEndLevelUI)param_1;
  local_8 = ___stack_chk_guard;
  this[0xe5] = (MiniGameCollectionEndLevelUI)param_2;
  if (param_1) {
    this_00 = (CachedResourcePtr *)&DAT_06ab6fa0;
  }
  else {
    this_00 = (CachedResourcePtr *)&DAT_06ab7138;
  }
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_(this_00);
  pPVar2 = PopAnimRig::CreateRigOutsideTable<PopAnimRig>(pPVar1);
  *(PopAnimRig **)(this + 0x118) = pPVar2;
  std::string::string(asStack_78,"windows_in");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimationFinish);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<MiniGameCollectionEndLevelUI,void(MiniGameCollectionEndLevelUI::*)(std::string_const&)>
            (aDStack_a8,aMStack_40);
  PopAnimRig::PlayAndStop(pPVar2,asStack_78,0,aDStack_a8);
  std::string::~string(asStack_78);
  nop();
  FUN_05478178(asStack_78,L"[PVP_PLAYBACK_CONTINUE]",auStack_b0);
  Sexy::Color::Color((Color *)aMStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar3,0x517,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)aMStack_40)
  ;
  *(PVZ2UIButton **)(this + 0x120) = pPVar3;
  FUN_05476c50(asStack_78);
  nop();
  pPVar3 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab7110,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aMStack_40,&DAT_06ab6e58,3);
  PVZ2UIButton::SetDialogStates(pPVar3,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aMStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  ReSizeAnimPosition(this);
  if (this[0xe5] != (MiniGameCollectionEndLevelUI)0x0) {
    this_01 = (SocialInfo *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    pMVar4 = (MiniGameCollectionEndOfPlayData *)SocialInfo::GetReceivedSunList(this_01);
    MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData(aMStack_40,pMVar4);
    *(undefined4 *)(this + 0xe0) = local_20;
    MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData(aMStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::ShowReward() */

void __thiscall MiniGameCollectionEndLevelUI::ShowReward(MiniGameCollectionEndLevelUI *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  SocialInfo *this_00;
  MiniGameCollectionEndOfPlayData *pMVar4;
  CommonRewardDisplay *this_01;
  Widget *pWVar5;
  char *__s;
  undefined8 uVar6;
  TGALogMgr *this_02;
  size_t __n;
  DString aDStack_4c0 [16];
  MiniGameCollectionEndOfPlayData aMStack_4b0 [20];
  int local_49c;
  int local_498;
  int local_490;
  GAME_ITEM_INFO aGStack_488 [8];
  undefined1 auStack_480 [8];
  undefined1 auStack_478 [8];
  undefined1 auStack_470 [8];
  undefined1 auStack_468 [16];
  undefined1 auStack_458 [16];
  undefined1 auStack_448 [352];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe5] != (MiniGameCollectionEndLevelUI)0x0) {
    this_00 = (SocialInfo *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    pMVar4 = (MiniGameCollectionEndOfPlayData *)SocialInfo::GetReceivedSunList(this_00);
    MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData(aMStack_4b0,pMVar4);
    if (0 < local_490) {
      this_01 = (CommonRewardDisplay *)UISingletonDialog<CommonRewardDisplay>::ShowDialog();
      ProfileChangeItemAmount(local_49c,local_498,false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_488);
      __n = 1;
      pWVar5 = (Widget *)UIRewardFrameSelect::CreateUIRewardFrame(local_49c,local_498,true);
      CommonRewardDisplay::AddItemWidget(this_01,pWVar5);
      iVar1 = MiniGameCollectionUtils::GetTotalScore();
      iVar2 = MiniGameCollectionUtils::GetTotalToken();
      TGASecretStore::TGASecretStore((TGASecretStore *)aGStack_488);
      DString::DString(aDStack_4c0,2);
      __s = (char *)DString::c_str(aDStack_4c0);
      std::string::append((string *)aGStack_488,__s,__n);
      DString::~DString(aDStack_4c0);
      std::string::string((string *)aDStack_4c0,"");
      uVar3 = operator|(0x10,8);
      FUN_05462618(auStack_458,aDStack_4c0,uVar3);
      std::string::~string((string *)aDStack_4c0);
      nop();
      uVar6 = FUN_0546065c(auStack_448,iVar2);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar6 = FUN_0546065c(uVar6,local_498);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      FUN_0546065c(uVar6,iVar2 + local_498);
      FUN_05462824(aDStack_4c0,auStack_458);
      FUN_05474278(auStack_480,aDStack_4c0);
      std::string::~string((string *)aDStack_4c0);
      uVar6 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      thunk_FUN_05475e00(auStack_478,uVar6);
      std::string::string((string *)aDStack_4c0,"");
      FUN_05462618(auStack_2e8,aDStack_4c0,uVar3);
      std::string::~string((string *)aDStack_4c0);
      nop();
      uVar6 = FUN_0546065c(auStack_2d8,iVar1);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar6 = FUN_0546065c(uVar6,local_490);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      FUN_0546065c(uVar6,iVar1 + local_490);
      FUN_05462824(aDStack_4c0,auStack_2e8);
      FUN_05474278(auStack_470,aDStack_4c0);
      std::string::~string((string *)aDStack_4c0);
      std::string::string((string *)aDStack_4c0,"");
      FUN_05462618(auStack_178,aDStack_4c0,uVar3);
      std::string::~string((string *)aDStack_4c0);
      nop();
      uVar6 = FUN_0546065c(auStack_168,local_49c);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      FUN_0546065c(uVar6,local_498);
      FUN_05462824(aDStack_4c0,auStack_178);
      FUN_05474278(auStack_468,aDStack_4c0);
      std::string::~string((string *)aDStack_4c0);
      this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstancePtr();
      TGALogMgr::LogMiniGameCollectionData(this_02,(TGAMiniGameCollectionData *)aGStack_488);
      FUN_054617bc(auStack_178);
      FUN_054617bc(auStack_2e8);
      FUN_054617bc(auStack_458);
      DropGroupNode::~DropGroupNode((DropGroupNode *)aGStack_488);
    }
    MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData(aMStack_4b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndLevelUI::Draw(Sexy::Graphics*) */

void __thiscall
MiniGameCollectionEndLevelUI::Draw(MiniGameCollectionEndLevelUI *this,Graphics *param_1)

{
  char cVar1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  cVar1 = IsFinished(this);
  if (cVar1 == '\0') {
    Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
  }
  if (*(PopAnimRig **)(this + 0x118) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x118),param_1);
  }
  DrawScore(this,param_1);
  nop();
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

