// Class: EndLevelUI


/* EndLevelUI::OutState() */

void __thiscall EndLevelUI::OutState(EndLevelUI *this)

{
  long *plVar1;
  
  if (*(StandaloneEffect **)(this + 0x118) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x118),false);
  }
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0xf8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::ShowContinueBtnBg() */

void __thiscall EndLevelUI::ShowContinueBtnBg(EndLevelUI *this)

{
  PVZ2UIButton *this_00;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this_00 = *(PVZ2UIButton **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  if (this_00 != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ad3f00,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ad3c40,3);
    PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndLevelUI::onAdsAnimStopped(std::string const&) */

void EndLevelUI::onAdsAnimStopped(string *param_1)

{
  long *plVar1;
  
  ShowContinueBtnBg((EndLevelUI *)param_1);
  plVar1 = *(long **)(param_1 + 0x100);
  if ((plVar1 != (long *)0x0) &&
     ((**(code **)(*plVar1 + 0x188))(plVar1,1), param_1[0x151] != (string)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x100) + 0x158))(*(long **)(param_1 + 0x100),0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::setNormalAwardCoinCount(int) */

void __thiscall EndLevelUI::setNormalAwardCoinCount(EndLevelUI *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  piVar2 = eastl::max_alt<int>(&local_c,local_14);
  iVar1 = *piVar2;
  *(int *)(this + 0x154) = iVar1;
  *(int *)(this + 0x15c) = iVar1;
  if (iVar1 < 1) {
    ShowContinueBtnBg(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndLevelUI::CheckEndlevelAdvertisement() */

bool EndLevelUI::CheckEndlevelAdvertisement(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  long lVar4;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar4 = PlayerInfo::GetAdvertisementWatchTime(pPVar3,7);
  cVar1 = TimeUtil::IsToday(lVar4);
  iVar2 = PlayerInfo::GetAdvertisementWatchCount(pPVar3,7);
  if (cVar1 != '\0') {
    return iVar2 < 3;
  }
  PlayerInfo::UpdateAdvertisementWatchCountInfo(pPVar3,7,0,1);
  return true;
}


/* EndLevelUI::FinishEndlevelAdvertisement() */

void EndLevelUI::FinishEndlevelAdvertisement(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  undefined8 uVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar1 = PlayerInfo::GetAdvertisementWatchCount(pPVar2,7);
  PlayerInfo::UpdateAdvertisementWatchCountInfo(pPVar2,7,iVar1 + 1,1);
  uVar3 = LawnApp::GetRealServerTime(gLawnApp);
  PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar2,7,uVar3,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::generateAdsBtn() */

void __thiscall EndLevelUI::generateAdsBtn(EndLevelUI *this)

{
  int iVar1;
  PVZ2UIButtonAds *pPVar2;
  long *plVar3;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(asStack_58,&DAT_056f11a8,auStack_60);
  Sexy::Color::Color((Color *)asStack_50,1);
  pPVar2 = ::operator_new(0x310);
  PVZ2UIButtonAds::PVZ2UIButtonAds
            (pPVar2,0x65,(ButtonListener *)(this + 0xd8),(wstring *)asStack_58,(Color *)asStack_50);
  *(PVZ2UIButtonAds **)(this + 0x100) = pPVar2;
  FUN_05476c50(asStack_58);
  nop();
  pPVar2 = *(PVZ2UIButtonAds **)(this + 0x100);
  pPVar2[0x59] = (PVZ2UIButtonAds)0x0;
  std::string::string(asStack_50,"POPANIM_EFFECTS_LEVELEND_ADS");
  PVZ2UIButtonAds::SetAnimRig(pPVar2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  PVZ2UIButtonAds::SetScale(*(PVZ2UIButtonAds **)(this + 0x100),0.85);
  pPVar2 = *(PVZ2UIButtonAds **)(this + 0x100);
  PVZ2UIButtonAds::SetSize
            (pPVar2,(int)((double)*(int *)(pPVar2 + 0x50) * 0.6),
             (int)((double)*(int *)(pPVar2 + 0x54) * 0.6));
  plVar3 = *(long **)(this + 0x100);
  iVar1 = FUN_03cc5120(0x8c);
  (**(code **)(*plVar3 + 0x1a8))(plVar3,iVar1 + *(int *)(this + 0x50) / 2,*(int *)(this + 0x54) / 2)
  ;
  pPVar2 = *(PVZ2UIButtonAds **)(this + 0x100);
  std::string::string(asStack_58,"idle");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAdsAnimStopped);
  Sexy::Delegate1<std::string_const&>::Delegate1<EndLevelUI,void(EndLevelUI::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PVZ2UIButtonAds::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 == 0x4a) || (iVar1 == 0x16)) {
    this[0x161] = (EndLevelUI)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::createAdsBtn() */

void __thiscall EndLevelUI::createAdsBtn(EndLevelUI *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)EASquared::Instance();
  cVar1 = (**(code **)(*plVar2 + 0xb8))(plVar2,0x39);
  if ((cVar1 != '\0') && (cVar1 = CheckEndlevelAdvertisement(), cVar1 != '\0')) {
    this[0x160] = (EndLevelUI)0x1;
    generateAdsBtn(this);
  }
  plVar2 = (long *)EASquared::Instance();
  pcVar3 = *(code **)(*plVar2 + 0x28);
  std::string::string(asStack_40,"EA2Mission");
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
  (*pcVar3)(plVar2,asStack_40,aDStack_38,1,2,3);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::DoubleCoinIn() */

void __thiscall EndLevelUI::DoubleCoinIn(EndLevelUI *this)

{
  string *psVar1;
  DTouchLayer *this_00;
  long *plVar2;
  undefined8 uVar3;
  DAction *pDVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  DRefPtr<DSpriteNode> aDStack_88 [8];
  DRefPtr<DSequence> aDStack_80 [8];
  DRefPtr<DScale> aDStack_78 [8];
  DRefPtr<DScale> aDStack_70 [8];
  string asStack_68 [8];
  float local_60 [2];
  EndLevelUI *local_58;
  DRefPtr<DSprite9SliceNode> aDStack_50 [8];
  function<bool(Sexy::Touch_const&)> afStack_48 [32];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  plVar5 = *(long **)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  pcVar6 = *(code **)(*plVar5 + 0x380);
  std::string::string((string *)&local_58,"CoinBg");
  psVar1 = (string *)(*pcVar6)(plVar5,(string *)&local_58);
  std::string::~string((string *)&local_58);
  nop();
  std::string::string((string *)&local_58,"CoinNum");
  this_00 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string((string *)&local_58);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_88);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  pcVar6 = *(code **)(*plVar5 + 0x2e8);
  std::string::string(asStack_68,"UI_ENDLEVEL_DOUBLE");
  plVar5 = (long *)(*pcVar6)(plVar5,asStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x130))(0x3f000000,0x3f000000);
  pcVar6 = *(code **)(*plVar5 + 0x110);
  fVar7 = (float)(**(code **)(*(long *)this_00 + 0x1c0))(this_00);
  (**(code **)(*(long *)this_00 + 0x370))((DRefPtr<DUpdateAction> *)local_60,this_00);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar2 + 0x218))((string *)&local_58);
  uVar8 = (**(code **)(*(long *)this_00 + 0x1c8))(this_00);
  (*pcVar6)(local_60[0] + local_58._0_4_ * 0.5 + fVar7,uVar8,plVar5);
  std::string::~string(asStack_68);
  nop();
  if (*(code **)(*(long *)this_00 + 0x238) == DTransformNode::getParent) {
    plVar5 = (long *)DTransformNode::getParent((DTransformNode *)this_00);
  }
  else {
    plVar5 = (long *)(**(code **)(*(long *)this_00 + 0x238))();
  }
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  (**(code **)(*plVar5 + 0x30))(plVar5,uVar3);
  DRefPtr<DSequence>::DRefPtr(aDStack_80);
  DRefPtr<DScale>::DRefPtr(aDStack_78);
  DRefPtr<DScale>::DRefPtr(aDStack_70);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(0x40400000);
  pDVar4 = (DAction *)(**(code **)(*plVar5 + 0x68))(0x3f800000);
  pDVar4 = (DAction *)DAction::setDuration(pDVar4,0.2);
  DAction::setTween(pDVar4,2);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5,uVar3);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  pDVar4 = (DAction *)(**(code **)(*plVar5 + 0x40))(plVar5,uVar3);
  FUN_03cc4f80(afStack_28);
  DAction::onDone(pDVar4,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  (**(code **)(*plVar5 + 0x298))(plVar5,uVar3);
  DRefPtr<DTransformNode>::DRefPtr((DRefPtr<DTransformNode> *)asStack_68);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x130))(0x3f000000,0x3f000000);
  pcVar6 = *(code **)(*plVar5 + 0x110);
  uVar8 = (**(code **)(*(long *)psVar1 + 0x1c0))(psVar1);
  fVar7 = (float)(**(code **)(*(long *)psVar1 + 0x1c8))(psVar1);
  (*pcVar6)(uVar8,fVar7 + 100.0,plVar5);
  plVar5 = *(long **)(this + 0xe0);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
  (**(code **)(*plVar5 + 0x370))(plVar5,uVar3);
  DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)local_60);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
  pcVar6 = *(code **)(*plVar5 + 0x40);
  local_58 = this;
  DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_50,(DRefPtr *)asStack_68);
  FUN_03cc683c(afStack_48,(string *)&local_58);
  pDVar4 = (DAction *)(*pcVar6)(plVar5,0,afStack_48);
  pDVar4 = (DAction *)DAction::setDelayTime(pDVar4,0.4);
  FUN_03cc4fcc(afStack_28);
  DAction::onDone(pDVar4,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_48);
  FUN_03553580((string *)&local_58);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
  (**(code **)(*plVar5 + 0x298))(plVar5,uVar3);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)local_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndLevelUI::~EndLevelUI() */

void __thiscall EndLevelUI::~EndLevelUI(EndLevelUI *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_0675ec90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0675efb8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  plVar1 = (long *)EASquared::Instance();
  (**(code **)(*plVar1 + 0x48))();
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x120))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* EndLevelUI::~EndLevelUI() */

void __thiscall EndLevelUI::~EndLevelUI(EndLevelUI *this)

{
  ~EndLevelUI(this);
  AK::FreeHook(this);
  return;
}


/* EndLevelUI::GetChestRewards() */

void EndLevelUI::GetChestRewards(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  PopAnim *pPVar4;
  EffectAnimRig_EndLevelBox *this_01;
  
  lVar1 = gGameStateMgr;
  cVar2 = FUN_03cc4354(*(undefined1 *)(gGameStateMgr + 0x1eb2));
  if ((cVar2 == '\0') &&
     ((cVar2 = FUN_03cc434c(*(undefined1 *)(lVar1 + 0x1eb4)), cVar2 == '\0' ||
      (cVar2 = FUN_03cc4358(*(undefined1 *)(lVar1 + 0x1eb3)), cVar2 == '\0')))) {
    return;
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  GemBank::GlobalFakeCurrency = PlayerInfo::GetNumGems(this_00,false);
  CoinBank::GlobalFakeCurrency = PlayerInfo::GetNumCoins(this_00,false);
  MessageRouter::Post((_func_void *)gMessageRouter);
  pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06ad3c68);
  this_01 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_EndLevelBox>(pPVar4);
  if (this_01 != (EffectAnimRig_EndLevelBox *)0x0) {
    EffectAnimRig_EndLevelBox::collectHardAward(this_01);
    (**(code **)(*(long *)this_01 + 0x18))(this_01);
  }
  bVar3 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
  SaveGameMgr::ClearSaveGame(bVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::Draw(Sexy::Graphics*) */

void __thiscall EndLevelUI::Draw(EndLevelUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long lVar11;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  cVar5 = FUN_03cc4340(this[0x158]);
  if (cVar5 == '\0') {
    Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
  }
  if (*(PopAnimRig **)(this + 0x108) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x108),param_1);
  }
  if (*(StandaloneEffect **)(this + 0x118) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x118),param_1);
  }
  if ((this[0x161] != (EndLevelUI)0x0) && (lVar11 = *(long *)(this + 0x100), lVar11 != 0)) {
    iVar6 = FUN_03cc5120(0x82);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(lVar11 + 0x50);
    iVar4 = *(int *)(lVar11 + 0x54);
    iVar7 = FUN_03cc5120(3);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad3ed0);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad3ed0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad3ed0);
    iVar9 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,iVar6 + iVar1 / 2 + iVar3,(iVar4 + iVar2 / 2) - iVar7,
               (int)((float)iVar8 * 0.4),(int)((float)iVar9 * 0.4));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::EndLevelUI() */

void __thiscall EndLevelUI::EndLevelUI(EndLevelUI *this)

{
  bool bVar1;
  char cVar2;
  DNodeWidget *pDVar3;
  PVZ2UIButton *this_00;
  PopAnim *pPVar4;
  WorldDataManager *this_01;
  string *psVar5;
  long lVar6;
  EffectAnimRig_EndLevel *this_02;
  undefined1 auVar7 [16];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0675ec90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0675efb8;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  *(undefined8 *)(this + 0x118) = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x120));
  this[0x150] = (EndLevelUI)0x1;
  this[0x151] = (EndLevelUI)0x0;
  *(undefined4 *)(this + 0x154) = 0;
  this[0x158] = (EndLevelUI)0x0;
  this[0x160] = (EndLevelUI)0x0;
  this[0x161] = (EndLevelUI)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  pDVar3 = ::operator_new(0x138);
  DNodeWidget::DNodeWidget(pDVar3);
  *(DNodeWidget **)(this + 0xe0) = pDVar3;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pDVar3);
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"UI_EndLevel");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"EndLevelAward");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"UI_Fragment_Pieces");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"UI_Fragment_Material");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"UI_Fragment_Avatar");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"UI_HeadshotFrame");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pDVar3 = *(DNodeWidget **)(this + 0xe0);
  std::string::string(asStack_18,"UI_Ads");
  DNodeWidget::loadGroup(pDVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  FUN_05478178(awStack_20,L"[CONTINUE_BUTTON]",auStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,100,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)asStack_18);
  *(PVZ2UIButton **)(this + 0xe8) = this_00;
  FUN_05476c50(awStack_20);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
  ShowContinueBtnBg(this);
  pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06ad3e40);
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  psVar5 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  lVar6 = WorldDataManager::FindWorldDataByLevelName(this_01,psVar5);
  if (lVar6 != 0) {
    auVar7 = FUN_05474184((Sexy *)(lVar6 + 0x38));
    if (auVar7._0_8_ != 0) {
      Sexy::StringToLower((Sexy *)(lVar6 + 0x38),auVar7._8_8_);
      bVar1 = std::operator!=("egypt",asStack_18);
      lVar6 = gGameStateMgr;
      if ((bVar1) &&
         ((cVar2 = FUN_03cc4350(*(undefined1 *)(gGameStateMgr + 0x1eb1)), cVar2 != '\0' ||
          (cVar2 = FUN_03cc434c(*(undefined1 *)(lVar6 + 0x1eb4)), cVar2 != '\0')))) {
        pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06ad3c90);
      }
      std::string::~string(asStack_18);
    }
  }
  this_02 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_EndLevel>(pPVar4);
  *(EffectAnimRig_EndLevel **)(this + 0x108) = this_02;
  EffectAnimRig_EndLevel::setParentEndLevelUI(this_02,this);
  EffectAnimRig_EndLevel::playWindowsIn(*(EffectAnimRig_EndLevel **)(this + 0x108));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::createStandaloneEffect(CollectableType const*) */

void __thiscall EndLevelUI::createStandaloneEffect(EndLevelUI *this,CollectableType *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  Effect_StaticImage *pEVar4;
  Effect_BouncingArrow *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar5;
  string *psVar6;
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_05474184((string *)(param_1 + 0x48));
  if (lVar3 == 0) {
    lVar3 = FUN_05474184(param_1 + 0x60);
    if (lVar3 == 0) {
      pEVar4 = (Effect_StaticImage *)0x0;
      goto LAB_03cc7d64;
    }
    pEVar4 = GameObject::CreateOutsideTable<Effect_StaticImage>();
    nop();
    LawnApp::GetImageFromStringId(gLawnApp,(int)(param_1 + 0x60));
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 == '\0') {
      LawnApp::GetUIImageFromStringId(gLawnApp);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_28,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Effect_BouncingArrow::SetTransX(this_00,true);
    FUN_05475d88(asStack_20,param_1 + 8);
    FUN_05475ffc(aRStack_10,asStack_20,0,6);
    bVar2 = std::operator==((string *)aRStack_10,"piece_");
    std::string::~string((string *)aRStack_10);
    if (bVar2) {
      FUN_05475ffc(asStack_18,asStack_20,6,0xffffffffffffffff);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Effect_StaticImage::SetPieceName((string *)this_00);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    else {
      std::string::~string(asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  else {
    pEVar4 = (Effect_StaticImage *)GameObject::CreateOutsideTable<Effect_PopAnim>();
    nop();
    GetPAMByName((string *)(param_1 + 0x48));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar5,(RtClass *)0x0);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector3 *)(param_1 + 0x68),-1);
    Effect_PopAnim::SetCentered(this_01,true);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_01,param_1 + 0x58,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (pEVar4 != (Effect_StaticImage *)0x0) {
    FUN_03cc43f4(pEVar4 + 0x1c);
    (**(code **)(*(long *)pEVar4 + 0x80))(*(undefined4 *)(param_1 + 0x50),pEVar4);
  }
LAB_03cc7d64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pEVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::setOtherReward(int, int) */

void __thiscall EndLevelUI::setOtherReward(EndLevelUI *this,int param_1,int param_2)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  bool bVar1;
  long lVar2;
  int *piVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                       (this_00,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + param_2;
  }
  else {
    piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[](this_00,local_24);
    *piVar3 = param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::CreateCustomLevelRateMenu() */

void __thiscall EndLevelUI::CreateCustomLevelRateMenu(EndLevelUI *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  RtObject *this_00;
  CustomLevelAppraiseUI *this_01;
  CustomLevelMgr *pCVar9;
  long lVar10;
  PVZ2UIButton *pPVar11;
  DTransformNode *pDVar12;
  undefined8 uVar13;
  char *pcVar14;
  UINewPVPTopZombieQueue *this_02;
  undefined8 uVar15;
  PVPManager *this_03;
  string *psVar16;
  code *pcVar17;
  long *plVar18;
  float fVar19;
  __normal_iterator *local_198;
  undefined1 auStack_178 [8];
  float local_170;
  float local_16c;
  DRefPtr<DSpriteNode> aDStack_168 [8];
  DRefPtr<DStringNode> aDStack_160 [8];
  DRefPtr<DStringNode> aDStack_158 [8];
  DRefPtr<DStringNode> aDStack_150 [8];
  DRefPtr<DMenu> aDStack_148 [8];
  DRefPtr<DSpriteNode> aDStack_140 [8];
  DRefPtr<DStringNode> aDStack_138 [8];
  DRefPtr<DSpriteNode> aDStack_130 [8];
  DRefPtr<DSpriteNode> aDStack_128 [8];
  DRefPtr<DSpriteNode> aDStack_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  DRefPtr<DSprite9SliceNode> aDStack_c0 [8];
  DRefPtr<DSprite9SliceNode> aDStack_b8 [8];
  DRefPtr<DSprite9SliceNode> aDStack_b0 [8];
  DRefPtr<DSprite9SliceNode> aDStack_a8 [8];
  DRefPtr<DSprite9SliceNode> aDStack_a0 [8];
  DRefPtr<DSprite9SliceNode> aDStack_98 [8];
  string asStack_90 [56];
  string asStack_58 [48];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UICustomLevelAppraise");
  this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_90);
  std::string::~string(asStack_90);
  nop();
  if ((this_00 == (RtObject *)0x0) ||
     (this_01 = Sexy::RtObject::Cast<CustomLevelAppraiseUI>(this_00),
     this_01 == (CustomLevelAppraiseUI *)0x0)) {
    bVar3 = true;
  }
  else {
    cVar2 = CustomLevelAppraiseUI::IsSupported(this_01);
    if ((cVar2 == '\0') && (cVar2 = CustomLevelAppraiseUI::IsNotSupported(this_01), cVar2 == '\0'))
    {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    bVar1 = false;
    iVar4 = FUN_03cc5120(0x90);
    iVar5 = FUN_03cc5120(0x2d);
    iVar7 = *(int *)(this + 0x50);
    iVar6 = FUN_03cc5120(0x1e);
    Sexy::Insets::Insets
              ((Insets *)&local_100,(iVar7 - iVar4) - iVar6,(*(int *)(this + 0x54) - iVar5) - iVar6,
               iVar4,iVar5);
    pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    lVar10 = CustomLevelMgr::GetNetworkFavouriteData(pCVar9);
    iVar7 = *(int *)(lVar10 + 0x18);
    iVar4 = CustomLevelUtils::GetLevelDetailsLevelID();
    if (iVar7 == iVar4) {
      pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      lVar10 = CustomLevelMgr::GetNetworkFavouriteData(pCVar9);
      bVar1 = *(int *)(lVar10 + 0x1c) == 1;
    }
    pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    iVar7 = CustomLevelUtils::GetLevelDetailsLevelID();
    cVar2 = CustomLevelMgr::IsMyFavourite(pCVar9,iVar7);
    if ((cVar2 == '\0') && (!bVar1)) {
      FUN_05478178((string *)&local_d0,L"[COLLECT_LEVEL]",&local_108);
      Sexy::Color::Color((Color *)asStack_90,1);
      pPVar11 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar11,0x67,(ButtonListener *)(this + 0xd8),(wstring *)&local_d0,
                 (Color *)asStack_90);
      *(PVZ2UIButton **)(this + 0xf8) = pPVar11;
      FUN_05476c50((string *)&local_d0);
      nop();
      pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_d0,&DAT_06ad3f00,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_90,&DAT_06ad3c40,3);
      PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)&local_d0,(PVZ2UIImage *)asStack_90);
      uVar8 = local_100;
      plVar18 = *(long **)(this + 0xf8);
      iVar5 = iStack_fc - iVar5;
      iVar7 = FUN_03cc5120(10);
      (**(code **)(*plVar18 + 0x198))(plVar18,uVar8,iVar5 - iVar7,local_f8,local_f4);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    }
    cVar2 = CustomLevelAppraiseUI::IsReported(this_01);
    if (cVar2 == '\0') {
      FUN_05478178((string *)&local_d0,L"[REPORT]",&local_108);
      Sexy::Color::Color((Color *)asStack_90,1);
      pPVar11 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar11,0x66,(ButtonListener *)(this + 0xd8),(wstring *)&local_d0,
                 (Color *)asStack_90);
      *(PVZ2UIButton **)(this + 0xf0) = pPVar11;
      FUN_05476c50((string *)&local_d0);
      nop();
      pPVar11 = *(PVZ2UIButton **)(this + 0xf0);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_d0,&DAT_06ad3f00,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_90,&DAT_06ad3c40,3);
      PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)&local_d0,(PVZ2UIImage *)asStack_90);
      plVar18 = *(long **)(this + 0xf0);
      uVar8 = FUN_03cc5120(0x1e);
      (**(code **)(*plVar18 + 0x198))(plVar18,uVar8,iStack_fc,local_f8,local_f4);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
      iVar7 = FUN_03cc4348(*(undefined4 *)(gGameStateMgr + 0x1ec0));
      goto joined_r0x03cc8a74;
    }
  }
  iVar7 = FUN_03cc4348(*(undefined4 *)(gGameStateMgr + 0x1ec0));
joined_r0x03cc8a74:
  if (((iVar7 == 10) && (iVar7 = CustomLevelUtils::GetLevelDetailsRateResult(), iVar7 == 0)) &&
     (bVar3)) {
    bVar3 = 30.0 <= *(float *)(this + 0x164);
  }
  else {
    bVar3 = false;
  }
  (**(code **)(**(long **)(this + 0xe0) + 800))(&local_170,*(long **)(this + 0xe0));
  fVar19 = *(float *)(this + 0x164);
  iVar5 = (int)(local_16c * 0.5 + -8.0);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_168);
  pDVar12 = (DTransformNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_168);
  std::string::string((string *)&local_d0,"TimeBg");
  plVar18 = (long *)DTransformNode::setName(pDVar12,(string *)&local_d0);
  pcVar17 = *(code **)(*plVar18 + 0x2e8);
  std::string::string(asStack_90,"IMAGE_UI_GENERIC_COUNTER_BG");
  (*pcVar17)(plVar18,asStack_90);
  std::string::~string(asStack_90);
  nop();
  std::string::~string((string *)&local_d0);
  nop();
  plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_168);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x110))(local_170 * 0.5 + 57.0,(float)(iVar5 + 0x12));
  (**(code **)(*plVar18 + 0x140))(0x3fa66666);
  plVar18 = *(long **)(this + 0xe0);
  uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_168);
  (**(code **)(*plVar18 + 0x370))(plVar18,uVar13);
  DRefPtr<DStringNode>::DRefPtr(aDStack_160);
  plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  pcVar17 = *(code **)(*plVar18 + 0x338);
  DString::Format(&DAT_055f7b80,asStack_90,(ulong)(uint)(int)(fVar19 * 0.00027777778),
                  (ulong)(uint)(int)(fVar19 * 0.016666668),
                  (ulong)(uint)(int)((fVar19 - (float)((int)(fVar19 * 0.016666668) * 0x3c)) -
                                    (float)((int)(fVar19 * 0.00027777778) * 0xe10)));
  pcVar14 = DString::operator_cast_to_char_((DString *)asStack_90);
  plVar18 = (long *)(*pcVar17)(plVar18,pcVar14);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x350))(plVar18,1);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x358))(plVar18,1);
  pcVar17 = *(code **)(*plVar18 + 0x340);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  plVar18 = (long *)(*pcVar17)(plVar18,uVar13);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x138))(0,0,0x43480000,0x42200000);
  (**(code **)(*plVar18 + 0x110))(local_170 * 0.5 + -98.0,(float)iVar5);
  DString::~DString((DString *)asStack_90);
  plVar18 = *(long **)(this + 0xe0);
  uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_160);
  (**(code **)(*plVar18 + 0x370))(plVar18,uVar13);
  DRefPtr<DStringNode>::DRefPtr(aDStack_158);
  plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x338))(plVar18,&DAT_055f7ba8);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x350))(plVar18,1);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x358))(plVar18,1);
  pcVar17 = *(code **)(*plVar18 + 0x340);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  plVar18 = (long *)(*pcVar17)(plVar18,uVar13);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x138))(0,0,0x43480000,0x42200000);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x110))(local_170 * 0.5 + -68.0,(float)iVar5);
  (**(code **)(*plVar18 + 0x140))(0x3f333333);
  plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar18 + 0xd8))(plVar18,0);
  plVar18 = *(long **)(this + 0xe0);
  uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
  (**(code **)(*plVar18 + 0x370))(plVar18,uVar13);
  DRefPtr<DStringNode>::DRefPtr(aDStack_150);
  plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x338))(plVar18,&DAT_055f7bb8);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x350))(plVar18,1);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x358))(plVar18,1);
  pcVar17 = *(code **)(*plVar18 + 0x340);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  plVar18 = (long *)(*pcVar17)(plVar18,uVar13);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x138))(0,0,0x43480000,0x42200000);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x110))(local_170 * 0.5 + -65.0,(float)(iVar5 + 0x28));
  plVar18 = (long *)(**(code **)(*plVar18 + 0x140))(0x3f333333);
  (**(code **)(*plVar18 + 0xd8))(plVar18,0);
  plVar18 = *(long **)(this + 0xe0);
  uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
  pcVar17 = *(code **)(*plVar18 + 0x370);
  (*pcVar17)(plVar18,uVar13);
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)asStack_90);
  DString::DString((DString *)&local_d0,0xf);
  pcVar14 = (char *)DString::c_str((DString *)&local_d0);
  std::string::append(asStack_90,pcVar14,(size_t)pcVar17);
  DString::~DString((DString *)&local_d0);
  iVar7 = CustomLevelUtils::GetLevelDetailsLevelID();
  DString::DString((DString *)&local_d0,iVar7);
  pcVar14 = (char *)DString::c_str((DString *)&local_d0);
  std::string::append(asStack_58,pcVar14,(size_t)pcVar17);
  DString::~DString((DString *)&local_d0);
  std::string::append(asStack_28,"1",(size_t)pcVar17);
  if (bVar3) {
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
    (**(code **)(*plVar18 + 0xd8))(plVar18,1);
    DRefPtr<DMenu>::DRefPtr(aDStack_148);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x110))(0,0);
    (**(code **)(*plVar18 + 0x130))(0,0);
    plVar18 = *(long **)(this + 0xe0);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
    (**(code **)(*plVar18 + 0x368))(plVar18,uVar13,1);
    fVar19 = local_170;
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_140);
    pDVar12 = (DTransformNode *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
    std::string::string((string *)&local_100,"likeBg");
    plVar18 = (long *)DTransformNode::setName(pDVar12,(string *)&local_100);
    pcVar17 = *(code **)(*plVar18 + 0x2e8);
    std::string::string((string *)&local_d0,"IMAGE_UI_GENERIC_COUNTER_BG");
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    nop();
    std::string::~string((string *)&local_100);
    nop();
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x110))
                                ((float)(int)((fVar19 * 0.5 + -60.0) - 5.0),(float)(iVar5 + 0xaf));
    (**(code **)(*plVar18 + 0x140))(0x3fa66666);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
    (**(code **)(*plVar18 + 0xd8))(plVar18,0);
    DRefPtr<DStringNode>::DRefPtr(aDStack_138);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_138);
    pcVar17 = *(code **)(*plVar18 + 0x338);
    DString::Format("%d",(string *)&local_d0,0xdd5a);
    pcVar14 = DString::operator_cast_to_char_((DString *)&local_d0);
    plVar18 = (long *)(*pcVar17)(plVar18,pcVar14);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x350))(plVar18,1);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x358))(plVar18,1);
    pcVar17 = *(code **)(*plVar18 + 0x340);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    plVar18 = (long *)(*pcVar17)(plVar18,uVar13);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x138))(0,0,0x43200000,0x42200000);
    (**(code **)(*plVar18 + 0x110))(0xc2200000,0xc0a00000);
    DString::~DString((DString *)&local_d0);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_138);
    (**(code **)(*plVar18 + 0x30))(plVar18,uVar13);
    plVar18 = *(long **)(this + 0xe0);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_140);
    (**(code **)(*plVar18 + 0x370))(plVar18,uVar13);
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_130);
    pDVar12 = (DTransformNode *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    std::string::string((string *)&local_100,"dislikeBg");
    plVar18 = (long *)DTransformNode::setName(pDVar12,(string *)&local_100);
    pcVar17 = *(code **)(*plVar18 + 0x2e8);
    std::string::string((string *)&local_d0,"IMAGE_UI_GENERIC_COUNTER_BG");
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    nop();
    std::string::~string((string *)&local_100);
    nop();
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x110))
                                ((float)(int)(fVar19 * 0.5 + 55.0),(float)(iVar5 + 0xaf));
    (**(code **)(*plVar18 + 0x140))(0x3fa66666);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    (**(code **)(*plVar18 + 0xd8))(plVar18,0);
    plVar18 = *(long **)(this + 0xe0);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_130);
    (**(code **)(*plVar18 + 0x370))(plVar18,uVar13);
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_128);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
    pcVar17 = *(code **)(*plVar18 + 0x2e8);
    std::string::string((string *)&local_d0,"UI/endlevel/like");
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_120);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
    pcVar17 = *(code **)(*plVar18 + 0x2e8);
    std::string::string((string *)&local_d0,"UI/endlevel/after_like");
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    nop();
    DRefPtr<DButton>::DRefPtr((DRefPtr<DButton> *)&local_118);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x388))(plVar18,uVar13);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x3a0))(plVar18,uVar13);
    pcVar17 = *(code **)(*plVar18 + 0x350);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_d0,(DRefPtr *)&local_118);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_c8,(DRefPtr *)aDStack_160);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_c0,(DRefPtr *)aDStack_150);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_b8,(DRefPtr *)aDStack_148);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_b0,(DRefPtr *)aDStack_168);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_a8,(DRefPtr *)aDStack_158);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_a0,(DRefPtr *)aDStack_140);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_98,(DRefPtr *)aDStack_138);
    FUN_03cc5edc((function<bool(Sexy::Touch_const&)> *)&local_f0,(string *)&local_d0);
    plVar18 = (long *)(*pcVar17)(plVar18,(function<bool(Sexy::Touch_const&)> *)&local_f0);
    (**(code **)(*plVar18 + 0x110))(local_170 * 0.5 + -60.0,(float)(iVar5 + 0x69));
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_f0);
    FUN_03cc556c((string *)&local_d0);
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)&local_110);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
    pcVar17 = *(code **)(*plVar18 + 0x2e8);
    std::string::string((string *)&local_d0,"UI/endlevel/dislike");
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)&local_108);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
    pcVar17 = *(code **)(*plVar18 + 0x2e8);
    std::string::string((string *)&local_d0,"UI/endlevel/after_dislike");
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    nop();
    DRefPtr<DButton>::DRefPtr((DRefPtr<DButton> *)&local_100);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x388))(plVar18,uVar13);
    uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x3a0))(plVar18,uVar13);
    pcVar17 = *(code **)(*plVar18 + 0x350);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_d0,(DRefPtr *)&local_100);
    DRefPtr<DSprite9SliceNode>::DRefPtr
              ((DRefPtr<DSprite9SliceNode> *)&local_c8,(DRefPtr *)aDStack_160);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_c0,(DRefPtr *)aDStack_150);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_b8,(DRefPtr *)aDStack_148);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_b0,(DRefPtr *)aDStack_168);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_a8,(DRefPtr *)aDStack_158);
    DRefPtr<DSprite9SliceNode>::DRefPtr(aDStack_a0,(DRefPtr *)aDStack_130);
    FUN_03cc6018((function<bool(Sexy::Touch_const&)> *)&local_f0,(string *)&local_d0);
    plVar18 = (long *)(*pcVar17)(plVar18,(function<bool(Sexy::Touch_const&)> *)&local_f0);
    (**(code **)(*plVar18 + 0x110))(local_170 * 0.5 + 60.0,(float)(iVar5 + 0x69));
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_f0);
    FUN_03cc56c0((string *)&local_d0);
    plVar18 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_148);
    pcVar17 = *(code **)(*plVar18 + 0x378);
    local_f0 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
    local_e8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
    std::vector<DButton*,std::allocator<DButton*>>::vector
              ((vector<DButton*,std::allocator<DButton*>> *)&local_d0,
               (function<bool(Sexy::Touch_const&)> *)&local_f0,2,auStack_178);
    (*pcVar17)(plVar18,(string *)&local_d0);
    std::vector<DButton*,std::allocator<DButton*>>::~vector
              ((vector<DButton*,std::allocator<DButton*>> *)&local_d0);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_100);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_108);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_110);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_118);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_120);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_128);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_130);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_138);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_140);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_148);
  }
  local_198 = (__normal_iterator *)&local_118;
  iVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  ProfileUtils::Profile();
  if (this_02 != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar2 = FUN_03cc435c(this_02[0x199]), iVar7 < cVar2; iVar7 = iVar7 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_02,iVar7);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_110);
      if ((bVar3) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_110), cVar2 != '\0')) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_110);
        SeedPacket::GetPlantType();
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_108);
        if (bVar3) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_110);
          SeedPacket::GetPlantType();
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_100);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_108);
          if (cVar2 != '\0') {
            this_03 = (PVPManager *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_110);
            psVar16 = (string *)PVPManager::GetPVPMapDataList(this_03);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_d0,psVar16);
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_108);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_110);
    }
  }
  iVar7 = 0;
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_d0);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_d0);
  std::
  sort<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar13,uVar15);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_d0);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_d0);
  local_118 = std::
              unique<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                        (uVar13,uVar15);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_108,local_198);
  local_110 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_d0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_100,(__normal_iterator *)&local_110);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)&local_d0,local_108,
             CONCAT44(iStack_fc,local_100));
  iVar5 = FUN_03cc4374(local_d0,local_c8);
  if (0 < 8 - iVar5) {
    do {
      iVar7 = iVar7 + 1;
      std::string::string((string *)&local_100,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_d0,(string *)&local_100);
      std::string::~string((string *)&local_100);
      nop();
    } while (iVar7 != 8 - iVar5);
  }
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_20,(vector *)&local_d0);
  pCVar9 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetLogData(pCVar9,(TGACustomLevelData *)asStack_90);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_d0);
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)asStack_90);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_150);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_158);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_160);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_168);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::OnCustomLevelEnd() */

void __thiscall EndLevelUI::OnCustomLevelEnd(EndLevelUI *this)

{
  int iVar1;
  string *psVar2;
  char *pcVar3;
  string *this_00;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 *__n_00;
  float fVar4;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2344];
  string asStack_3c0 [952];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114);
  if (fVar4 == 0.0) {
    *(float *)(this + 0x164) = fVar4;
    iVar1 = FUN_03cc4348(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  }
  else {
    fVar4 = (float)PVZ_T();
    fVar4 = fVar4 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114);
    *(float *)(this + 0x164) = fVar4;
    iVar1 = FUN_03cc4348(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  }
  if (iVar1 == 10) {
    __n_00 = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    fVar4 = *(float *)(this + 0x164);
    __n = __n_00;
    std::string::string(asStack_d40,"id");
    psVar2 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_d40);
    iVar1 = CustomLevelUtils::GetLevelDetailsLevelID();
    DString::DString(aDStack_ce8,iVar1);
    pcVar3 = (char *)DString::c_str(aDStack_ce8);
    std::string::append(psVar2,pcVar3,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"s");
    psVar2 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,(int)fVar4);
    pcVar3 = (char *)DString::c_str(aDStack_ce8);
    std::string::append(psVar2,pcVar3,(size_t)__n_00);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    psVar2 = asStack_d40;
    std::string::string((string *)aDStack_ce8,"f");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,(string *)aDStack_ce8);
    std::string::append(this_00,"0",(size_t)psVar2);
    std::string::~string((string *)aDStack_ce8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_03cc4e6c(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_3c0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  else {
    CustomLevelUtils::RecordFinishedLevel(fVar4);
    CreateCustomLevelRateMenu(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::OnPennyClassroomEnd() */

void __thiscall EndLevelUI::OnPennyClassroomEnd(EndLevelUI *this)

{
  int iVar1;
  int iVar2;
  BaseTaskResource *this_00;
  BaseResStreamsDriver *this_01;
  string *psVar3;
  char *pcVar4;
  DNetwork *this_02;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2552];
  string asStack_2f0 [744];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (BaseTaskResource *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
  iVar1 = Sexy::BaseTaskResource::GetType(this_00);
  this_01 = (BaseResStreamsDriver *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
  iVar2 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(this_01);
  __n = __n_00;
  std::string::string(asStack_d40,"s");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,iVar1);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"i");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03cc4ec8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_2f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* EndLevelUI::CoinIn() */

void __thiscall EndLevelUI::CoinIn(EndLevelUI *this)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  bool bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  DTransformNode *pDVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  DAction *pDVar10;
  int *piVar11;
  NameMapperBase *this_01;
  RiftShopMgr *this_02;
  ulong uVar12;
  XMLParser *this_03;
  ulong uVar13;
  code *pcVar14;
  int iVar15;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88 [2];
  float local_80;
  float local_7c;
  DRefPtr<DSequence> aDStack_78 [8];
  DRefPtr<DMove> aDStack_70 [8];
  string asStack_68 [4];
  float local_64;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  uint local_38;
  float local_34;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0xe0) + 800))(&local_a8,*(long **)(this + 0xe0));
  iVar15 = (int)(local_a4 * 0.5 + 25.0);
  if (0 < *(int *)(this + 0x154)) {
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)&local_a0);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    std::string::string(asStack_68,"CoinBg");
    plVar6 = (long *)DTransformNode::setName(pDVar5,asStack_68);
    pcVar14 = *(code **)(*plVar6 + 0x2e8);
    std::string::string((string *)&local_38,"UI_ENDLEVEL_COINBG");
    (*pcVar14)(plVar6,(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    std::string::~string(asStack_68);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    (**(code **)(*plVar6 + 0x218))(&local_98);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    pcVar14 = *(code **)(*plVar6 + 0x210);
    DVec2::DVec2((DVec2 *)&local_38,(float)local_98,48.0);
    plVar6 = (long *)(*pcVar14)(plVar6,(string *)&local_38);
    (**(code **)(*plVar6 + 0x110))(local_a8 * 0.5,(float)iVar15);
    plVar6 = *(long **)(this + 0xe0);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    (**(code **)(*plVar6 + 0x370))(plVar6,uVar7);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    (**(code **)(*plVar6 + 0x218))(&local_90);
    DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)local_88);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_88);
    std::string::string(asStack_68,"Coin");
    plVar6 = (long *)DTransformNode::setName(pDVar5,asStack_68);
    pcVar14 = *(code **)(*plVar6 + 0x2e8);
    std::string::string((string *)&local_38,"UI_ENDLEVEL_GOLD");
    plVar6 = (long *)(*pcVar14)(plVar6,(string *)&local_38);
    (**(code **)(*plVar6 + 0x110))(local_90 * 0.5 + -40.0,local_8c * 0.5);
    std::string::~string((string *)&local_38);
    nop();
    std::string::~string(asStack_68);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_88);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar7);
    DRefPtr<DStringNode>::DRefPtr((DRefPtr<DStringNode> *)&local_80);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    std::string::string((string *)&local_38,"CoinNum");
    DTransformNode::setName(pDVar5,(string *)&local_38);
    std::string::~string((string *)&local_38);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    pcVar14 = *(code **)(*plVar6 + 0x338);
    DString::DString((DString *)&local_38,*(int *)(this + 0x154));
    pcVar8 = DString::operator_cast_to_char_((DString *)&local_38);
    plVar6 = (long *)(*pcVar14)(plVar6,pcVar8);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x358))(plVar6,1);
    pcVar14 = *(code **)(*plVar6 + 0x340);
    uVar7 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    plVar6 = (long *)(*pcVar14)(plVar6,uVar7);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x138))(0,0,0x43480000,0x42200000);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x110))(local_90 * 0.5,local_8c * 0.5);
    (**(code **)(*plVar6 + 0x130))(0,0x3f000000);
    DString::~DString((DString *)&local_38);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar7);
    DRefPtr<DSequence>::DRefPtr(aDStack_78);
    DRefPtr<DMove>::DRefPtr(aDStack_70);
    DRefPtr<DMove>::DRefPtr((DRefPtr<DMove> *)asStack_68);
    lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
    pcVar14 = *(code **)(*(long *)(lVar9 + 0x90) + 0x10);
    DVec2::DVec2((DVec2 *)&local_38,-10.0,0.0);
    pDVar10 = (DAction *)(*pcVar14)(lVar9 + 0x90,(string *)&local_38);
    DAction::setDuration(pDVar10,0.0);
    lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
    pcVar14 = *(code **)(*(long *)(lVar9 + 0x90) + 0x10);
    DVec2::DVec2((DVec2 *)&local_38,10.0,0.0);
    pDVar10 = (DAction *)(*pcVar14)(lVar9 + 0x90,(string *)&local_38);
    DAction::setDuration(pDVar10,0.1);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6,uVar7);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
    pDVar10 = (DAction *)(**(code **)(*plVar6 + 0x40))(plVar6,uVar7);
    FUN_03cc4f24(afStack_58,this);
    DAction::onDone(pDVar10,(function *)afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
    (**(code **)(*plVar6 + 0x298))(plVar6,uVar7);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    (**(code **)(*plVar6 + 0x218))((string *)&local_38);
    iVar15 = iVar15 + (int)local_34;
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_68);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_80);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)local_88);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_a0);
  }
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x120);
  lVar9 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size(this_00);
  if (lVar9 != 0) {
    bVar1 = false;
    iVar15 = iVar15 + 10;
    local_a0 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         (this_00);
    local_98 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_a0,(rbtree_iterator *)&local_98),
          bVar3) {
      piVar11 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a0)
      ;
      GetGameItemInfo(*piVar11,0x7fffffff,0);
      if (local_38 != 0) {
        this_01 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        std::string::string(asStack_68,"mat_mystery_crystal");
        uVar4 = NameMapperBase::GetIdForName(this_01,asStack_68);
        uVar2 = local_38;
        std::string::~string(asStack_68);
        nop();
        if (uVar4 == uVar2) {
          bVar1 = true;
        }
        DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)&local_90);
        pDVar5 = (DTransformNode *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        Sexy::StrFormat("OtherReward%d",(string *)aDStack_70,(ulong)local_38);
        plVar6 = (long *)DTransformNode::setName(pDVar5,(string *)aDStack_70);
        pcVar14 = *(code **)(*plVar6 + 0x2e8);
        std::string::string(asStack_68,"IMAGE_UI_ENDLEVEL_COINBG");
        (*pcVar14)(plVar6,asStack_68);
        std::string::~string(asStack_68);
        nop();
        std::string::~string((string *)aDStack_70);
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        (**(code **)(*plVar6 + 0x218))(local_88);
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        pcVar14 = *(code **)(*plVar6 + 0x210);
        DVec2::DVec2((DVec2 *)asStack_68,local_88[0],48.0);
        plVar6 = (long *)(*pcVar14)(plVar6,asStack_68);
        (**(code **)(*plVar6 + 0x110))(local_a8 * 0.5,(float)iVar15);
        plVar6 = *(long **)(this + 0xe0);
        uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        (**(code **)(*plVar6 + 0x370))(plVar6,uVar7);
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        (**(code **)(*plVar6 + 0x218))(&local_80);
        DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)aDStack_78);
        pDVar5 = (DTransformNode *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
        std::string::string(asStack_68,"Coin");
        plVar6 = (long *)DTransformNode::setName(pDVar5,asStack_68);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x2e8))(plVar6,auStack_18);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x110))(local_80 * 0.5 + -40.0,local_7c * 0.5);
        (**(code **)(*plVar6 + 0x140))(0x3ee66666);
        std::string::~string(asStack_68);
        nop();
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
        (**(code **)(*plVar6 + 0x30))(plVar6,uVar7);
        DRefPtr<DStringNode>::DRefPtr((DRefPtr<DStringNode> *)aDStack_70);
        pDVar5 = (DTransformNode *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
        std::string::string(asStack_68,"CoinNum");
        DTransformNode::setName(pDVar5,asStack_68);
        std::string::~string(asStack_68);
        nop();
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
        pcVar14 = *(code **)(*plVar6 + 0x338);
        DString::DString((DString *)asStack_68,piVar11[1]);
        pcVar8 = DString::operator_cast_to_char_((DString *)asStack_68);
        plVar6 = (long *)(*pcVar14)(plVar6,pcVar8);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,0);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x358))(plVar6,1);
        pcVar14 = *(code **)(*plVar6 + 0x340);
        uVar7 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
        plVar6 = (long *)(*pcVar14)(plVar6,uVar7);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x138))(0,0,0x43480000,0x42200000);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x110))(local_80 * 0.5,local_7c * 0.5);
        (**(code **)(*plVar6 + 0x130))(0,0x3f000000);
        DString::~DString((DString *)asStack_68);
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
        (**(code **)(*plVar6 + 0x30))(plVar6,uVar7);
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        (**(code **)(*plVar6 + 0x218))(asStack_68);
        iVar15 = iVar15 + (int)local_64;
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70)
        ;
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78)
        ;
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_90);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a0);
    }
    if (bVar1) {
      this_02 = (RiftShopMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
      uVar12 = RiftShopMgr::getRefreshShopTimes(this_02);
      this_03 = (XMLParser *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
      uVar13 = Sexy::XMLParser::GetCurrentLineNum(this_03);
      DRefPtr<DStringNode>::DRefPtr((DRefPtr<DStringNode> *)asStack_68);
      pDVar5 = (DTransformNode *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      std::string::string((string *)&local_38,"TipText");
      DTransformNode::setName(pDVar5,(string *)&local_38);
      std::string::~string((string *)&local_38);
      nop();
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      pcVar14 = *(code **)(*plVar6 + 0x338);
      DString::Format(&DAT_055f7c98,(string *)&local_38,uVar13 & 0xffffffff,uVar12 & 0xffffffff);
      pcVar8 = DString::operator_cast_to_char_((DString *)&local_38);
      plVar6 = (long *)(*pcVar14)(plVar6,pcVar8);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,1);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x358))(plVar6,1);
      pcVar14 = *(code **)(*plVar6 + 0x340);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
      plVar6 = (long *)(*pcVar14)(plVar6,uVar7);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x138))(0,0,0x43480000,0x42200000);
      (**(code **)(*plVar6 + 0x110))(local_a8 * 0.5 + -98.0,(float)(iVar15 + 1));
      DString::~DString((DString *)&local_38);
      plVar6 = *(long **)(this + 0xe0);
      uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      (**(code **)(*plVar6 + 0x370))(plVar6,uVar7);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::ButtonDepress(int) */

void __thiscall EndLevelUI::ButtonDepress(EndLevelUI *this,int param_1)

{
  char cVar1;
  long *plVar2;
  ProfileMgr *this_00;
  TGALogMgr *pTVar3;
  char *__s;
  UICustomLevelAppraise *pUVar4;
  CustomLevelMgr *this_01;
  code *pcVar5;
  PVZ2UIButton *this_02;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 100:
    if (((*(EffectAnimRig_EndLevel **)(this + 0x108) != (EffectAnimRig_EndLevel *)0x0) &&
        (cVar1 = EffectAnimRig_EndLevel::EndLevel(*(EffectAnimRig_EndLevel **)(this + 0x108)),
        cVar1 != '\0')) && (plVar2 = *(long **)(this + 0x100), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
    }
    plVar2 = (long *)EASquared::Instance();
    (**(code **)(*plVar2 + 0x40))(plVar2,3);
    break;
  case 0x65:
    this[0x151] = (EndLevelUI)0x1;
    plVar2 = (long *)EASquared::Instance();
    pcVar5 = *(code **)(*plVar2 + 0x28);
    std::string::string(asStack_58,"EA2Mission");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGetReward);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<EndLevelUI,void(EndLevelUI::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,aDStack_50);
    (*pcVar5)(plVar2,asStack_58,aDStack_38,1,3,0x39);
    std::string::~string(asStack_58);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::DString(aDStack_50,asStack_58);
    std::string::~string(asStack_58);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_70,"1");
    __s = (char *)DString::c_str(aDStack_50);
    std::string::string(asStack_68,__s);
    std::string::string(asStack_60,"");
    std::string::string(asStack_58,"");
    TGALogMgr::LogAD(pTVar3,asStack_70,asStack_68,0x39,asStack_60,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::~string(asStack_70);
    nop();
    plVar2 = (long *)EASquared::Instance();
    (**(code **)(*plVar2 + 0x40))(plVar2,3);
    DString::~DString(aDStack_50);
    break;
  case 0x66:
    pUVar4 = (UICustomLevelAppraise *)UISingletonDialog<UICustomLevelAppraise>::ShowDialog();
    UICustomLevelAppraise::Init(pUVar4,0);
    FUN_03cc4e10((function<bool(Sexy::Touch_const&)> *)aDStack_38,this);
    UICustomLevelAppraise::SetAfterReport(pUVar4,(function<bool(Sexy::Touch_const&)> *)aDStack_38);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
    break;
  case 0x67:
    this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RequestUpdateFavourite(this_01,true);
    this_02 = *(PVZ2UIButton **)(this + 0xf8);
    if (this_02 != (PVZ2UIButton *)0x0) {
      TodStringTranslate(L"[COLLECTED_LEVEL]");
      PVZ2UIButton::SetLabelText(this_02,(wstring *)aDStack_50);
      FUN_05476c50((wstring *)aDStack_50);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to EndLevelUI::ButtonDepress(int) */

void __thiscall EndLevelUI::ButtonDepress(EndLevelUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::ShowAds() */

void EndLevelUI::ShowAds(void)

{
  char cVar1;
  long *plVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  TGALogMgr *pTVar5;
  char *__s;
  code *pcVar6;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsAdChannel(gLawnApp,0);
  if ((cVar1 != '\0') && (cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x40), cVar1 != '\0')) {
    plVar2 = (long *)EASquared::Instance();
    cVar1 = (**(code **)(*plVar2 + 0x58))();
    if (cVar1 != '\0') {
      LawnApp::GetAdsMissionLimit();
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_48,false,pPVar4);
      std::string::~string(asStack_48);
      if (cVar1 != '\0') {
        plVar2 = (long *)EASquared::Instance();
        pcVar6 = *(code **)(*plVar2 + 0x28);
        std::string::string(asStack_48,"EA2Mission");
        Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38)
        ;
        (*pcVar6)(plVar2,asStack_48,aDStack_38,1,0,3);
        std::string::~string(asStack_48);
        nop();
        pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::GetCurrentProfile(pPVar3);
        PlantAnimRig_HoyaCordata::getIdleAnimationName();
        DString::DString((DString *)asStack_48,asStack_50);
        std::string::~string(asStack_50);
        pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        std::string::string(asStack_68,"1");
        __s = (char *)DString::c_str((DString *)asStack_48);
        std::string::string(asStack_60,__s);
        std::string::string(asStack_58,"");
        std::string::string(asStack_50,"");
        TGALogMgr::LogAD(pTVar5,asStack_68,asStack_60,2,asStack_58,asStack_50);
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
        std::string::~string(asStack_68);
        nop();
        DString::~DString((DString *)asStack_48);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndLevelUI::onGetReward(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall EndLevelUI::onGetReward(EndLevelUI *this,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  PlayerInfo *this_00;
  TGALogMgr *pTVar4;
  char *pcVar5;
  long *plVar6;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined4 local_58;
  int local_54;
  DString aDStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    iVar2 = FUN_03cc433c(*(undefined4 *)(this + 0x154));
    PlayerInfo::AddCoins(this_00,iVar2);
    iVar2 = CoinBank::GlobalFakeCurrency;
    if (CoinBank::GlobalFakeCurrency != -1) {
      iVar3 = FUN_03cc433c(*(undefined4 *)(this + 0x154));
      CoinBank::GlobalFakeCurrency = iVar2 + iVar3;
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_58);
    local_58 = 0xfad;
    local_54 = FUN_03cc433c(*(undefined4 *)(this + 0x154));
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_38,
               (S2C_BonusInfo *)&local_58);
    puVar1 = gMessageRouter;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              (avStack_20,(vector *)avStack_38);
    MessageRouter::
    Broadcast<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,char_const*,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
              ((MessageRouter *)puVar1,Message::EASquareReward,"EA2Mission",avStack_20);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_20);
    DoubleCoinIn(this);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::DString(aDStack_48,(string *)avStack_20);
    std::string::~string((string *)avStack_20);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_78,"3");
    pcVar5 = (char *)DString::c_str(aDStack_48);
    std::string::string(asStack_70,pcVar5);
    std::string::string(asStack_68,"1");
    DString::DString((DString *)avStack_20,local_54 << 1);
    pcVar5 = (char *)DString::c_str((DString *)avStack_20);
    std::string::string(asStack_60,pcVar5);
    TGALogMgr::LogAD(pTVar4,asStack_78,asStack_70,0x39,asStack_68,asStack_60);
    std::string::~string(asStack_60);
    nop();
    DString::~DString((DString *)avStack_20);
    std::string::~string(asStack_68);
    nop();
    std::string::~string(asStack_70);
    nop();
    std::string::~string(asStack_78);
    nop();
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_70,"2");
    pcVar5 = (char *)DString::c_str(aDStack_48);
    std::string::string(asStack_68,pcVar5);
    std::string::string(asStack_60,"");
    std::string::string((string *)avStack_20,"");
    TGALogMgr::LogAD(pTVar4,asStack_70,asStack_68,0x39,asStack_60,avStack_20);
    std::string::~string((string *)avStack_20);
    nop();
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::~string(asStack_70);
    nop();
    FinishEndlevelAdvertisement();
    DString::~DString(aDStack_48);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_38);
  }
  else {
    ProfileUtils::Profile();
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    DString::DString((DString *)avStack_20,(string *)avStack_38);
    std::string::~string((string *)avStack_38);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_60,"4");
    pcVar5 = (char *)DString::c_str((DString *)avStack_20);
    std::string::string((string *)&local_58,pcVar5);
    std::string::string((string *)aDStack_48,"");
    std::string::string((string *)avStack_38,"");
    TGALogMgr::LogAD(pTVar4,asStack_60,(string *)&local_58,0x39,(string *)aDStack_48,
                     (string *)avStack_38);
    std::string::~string((string *)avStack_38);
    nop();
    std::string::~string((string *)aDStack_48);
    nop();
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    DString::~DString((DString *)avStack_20);
  }
  plVar6 = *(long **)(this + 0x100);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
  }
  this[0x161] = (EndLevelUI)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndLevelUI::Resize(int, int, int, int) */

void __thiscall EndLevelUI::Resize(EndLevelUI *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PopAnimRig *pPVar5;
  long *plVar6;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  pPVar5 = *(PopAnimRig **)(this + 0x108);
  if (pPVar5 != (PopAnimRig *)0x0) {
    iVar1 = FUN_03cc5120(0x28);
    UIUtil::SetPopAnimTransform
              (pPVar5,*(int *)(this + 0x50) / 2,iVar1 + *(int *)(this + 0x54) / 2,1.28,0.5,0.5);
    EffectAnimRig_EndLevel::adjustParentSize
              (*(EffectAnimRig_EndLevel **)(this + 0x108),*(int *)(this + 0x50),
               *(int *)(this + 0x54));
  }
  plVar6 = *(long **)(this + 0xe8);
  if (plVar6 != (long *)0x0) {
    iVar2 = FUN_03cc5120(0x90);
    iVar3 = FUN_03cc5120(0x2d);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_03cc5120(0x1e);
    (**(code **)(*plVar6 + 0x198))
              (plVar6,(iVar1 - iVar2) - iVar4,(*(int *)(this + 0x54) - iVar3) - iVar4,iVar2,iVar3);
  }
  return;
}


/* EndLevelUI::Update() */

void __thiscall EndLevelUI::Update(EndLevelUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = *(PopAnimRig **)(this + 0x108);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  }
  if (*(StandaloneEffect **)(this + 0x118) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x118));
    return;
  }
  return;
}

