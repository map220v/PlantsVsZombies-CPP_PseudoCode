// Class: PlantAvatarListView


/* PlantAvatarListView::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantAvatarListView::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAvatarListView::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantAvatarListView::ScrollTargetReached(PlantAvatarListView *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantAvatarListView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantAvatarListView::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAvatarListView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantAvatarListView::ScrollTargetInterrupted(PlantAvatarListView *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantAvatarListView::PatchRefresh() */

void __thiscall PlantAvatarListView::PatchRefresh(PlantAvatarListView *this)

{
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 400));
  return;
}


/* PlantAvatarListView::DrawOverlay(Sexy::Graphics*) */

void __thiscall PlantAvatarListView::DrawOverlay(PlantAvatarListView *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0x1b8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1b8),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::~PlantAvatarListView() */

void __thiscall PlantAvatarListView::~PlantAvatarListView(PlantAvatarListView *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06840390;
  *(undefined ***)(this + 0xd8) = &PTR__PlantAvatarListView_068406d0;
  *(undefined **)(this + 0xe0) = &DAT_06840718;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 0x18))();
    *(undefined8 *)(this + 0x138) = 0;
  }
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 0x18))();
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AvatarView_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Accessory_Button");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  FUN_05476c50(this + 0x178);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantAvatarListView::~PlantAvatarListView() */

void __thiscall PlantAvatarListView::~PlantAvatarListView(PlantAvatarListView *this)

{
  ~PlantAvatarListView(this + -0xd8);
  return;
}


/* PlantAvatarListView::~PlantAvatarListView() */

void __thiscall PlantAvatarListView::~PlantAvatarListView(PlantAvatarListView *this)

{
  ~PlantAvatarListView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAvatarListView::~PlantAvatarListView() */

void __thiscall PlantAvatarListView::~PlantAvatarListView(PlantAvatarListView *this)

{
  ~PlantAvatarListView(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::RefreshCurrentData() */

void __thiscall PlantAvatarListView::RefreshCurrentData(PlantAvatarListView *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  ProfileMgr *this_01;
  PlayerInfo *pPVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = PlayerInfo::GetAvatarPiecesCount(pPVar2,lVar3 + 0x80,0,0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar5 = NEON_fminnm((float)iVar1 / (float)*(int *)(lVar3 + 0x90),0x3f800000);
  *(undefined4 *)(this + 0x198) = uVar5;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = PlayerInfo::GetAvatarPiecesCount(pPVar2,lVar3 + 0x80,0,0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (iVar1 < *(int *)(lVar3 + 0x90)) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar4 = PlayerInfo::GetAvatarPiecesCount(pPVar2,lVar3 + 0x80,0,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar4 = (ulong)*(uint *)(lVar3 + 0x90);
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::StrFormat(L"%d/%d",auStack_10,uVar4,(ulong)*(uint *)(lVar3 + 0x90));
  FUN_054766c8(this + 0x178,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::TriggerTutorial() */

void __thiscall PlantAvatarListView::TriggerTutorial(PlantAvatarListView *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_043a1318(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x18) {
    uVar3 = *(undefined8 *)(this + 0x110);
  }
  else {
    if (iVar1 != 0x1e) goto LAB_043a2be8;
    uVar3 = *(undefined8 *)(this + 0x130);
  }
  std::string::string(asStack_20,"");
  Sexy::Insets::Insets(aIStack_18);
  GameMaskUI::ShowMask(uVar3,1,asStack_20,aIStack_18);
  std::string::~string(asStack_20);
  nop();
LAB_043a2be8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::OnNotifyPackageViewClose() */

void __thiscall PlantAvatarListView::OnNotifyPackageViewClose(PlantAvatarListView *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_043a1318(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x18) {
    uVar3 = *(undefined8 *)(this + 0x108);
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar3,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarListView::GetAccessoryQuality(AccessoryQuality) */

void __thiscall PlantAvatarListView::GetAccessoryQuality(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  default:
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01648);
    return;
  case 1:
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00e08);
    return;
  case 2:
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b015d0);
    return;
  case 3:
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01670);
    return;
  case 5:
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b010e8);
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::UpdateAccessoryButton(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantAvatarListView::UpdateAccessoryButton(PlantAvatarListView *this,RtWeakPtrBase *param_2)

{
  PlantAvatarListView *pPVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  StandaloneEffect *this_00;
  ResourceInfo *this_01;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *this_02;
  PlantAccessoryMgr *pPVar10;
  long lVar11;
  string *psVar12;
  long lVar13;
  PVZ2UIButton *pPVar14;
  Effect_PopAnim *pEVar15;
  string asStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  Insets aIStack_88 [16];
  string asStack_78 [16];
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  pPVar1 = this + 0x1a0;
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x130));
  FUN_05476f98(pPVar1);
  *(undefined8 *)(this + 0x1b0) = 0;
  uVar8 = Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_2);
  PlantAccessoryMgr::GetAccessoryInfoForPlantType(asStack_78,uVar8,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  bVar3 = std::operator!=(asStack_78,"");
  this_00 = *(StandaloneEffect **)(this + 0x1b8);
  if (bVar3) {
    if (this_00 != (StandaloneEffect *)0x0) {
      StandaloneEffect::SetVisibility(this_00,false);
    }
    uVar8 = GetAccessoryQuality(this,local_58);
    *(undefined8 *)(this + 0x1a8) = uVar8;
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,uVar8,2);
    pPVar14 = *(PVZ2UIButton **)(this + 0x130);
    Sexy::Insets::Insets(aIStack_88,0,0,*(int *)(pPVar14 + 0x50),*(int *)(pPVar14 + 0x54));
    PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)aRStack_40,(TRect *)aIStack_88);
    FUN_05475d88(asStack_98,auStack_60);
    Sexy::ToWString(asStack_68);
    TodStringTranslate((wstring *)aIStack_88);
    FUN_054766c8(pPVar1,aRStack_40);
    FUN_05476c50(aRStack_40);
    FUN_05476c50(aIStack_88);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_01);
    iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    pPVar14 = *(PVZ2UIButton **)(this + 0x130);
    iVar2 = *(int *)(pPVar14 + 0x50);
    iVar6 = *(int *)(pPVar14 + 0x54);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,this_01,2);
    Sexy::Insets::Insets
              (aIStack_88,(iVar2 - (int)((float)iVar4 * 0.5)) / 2,
               (iVar6 - (int)((float)iVar5 * 0.5)) / 2,(int)((float)iVar4 * 0.5),
               (int)((float)iVar5 * 0.5));
    PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)aRStack_40,(TRect *)aIStack_88);
    iVar2 = *(int *)(*(long *)(this + 0x130) + 0x50);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00af8);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar4 = FUN_043a19d8(5);
    pPVar14 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06b00af8,1);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00af8);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00af8);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_02);
    Sexy::Insets::Insets(aIStack_88,(iVar2 - iVar6) - iVar4,iVar4,iVar5,iVar7);
    PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)aRStack_40,(TRect *)aIStack_88);
    pPVar10 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_2);
    lVar11 = PlantAccessoryMgr::GetAccessoryForPlant(pPVar10,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    if (lVar11 != 0) {
      iVar2 = *(int *)(lVar11 + 0x18);
      if (iVar2 == 1) {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00de0);
        *(long *)(this + 0x1b0) = lVar13;
      }
      else if (iVar2 == 2) {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01160);
        *(long *)(this + 0x1b0) = lVar13;
      }
      else if (iVar2 == 3) {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b014b8);
        *(long *)(this + 0x1b0) = lVar13;
      }
      else if (iVar2 == 4) {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01a68);
        *(long *)(this + 0x1b0) = lVar13;
      }
      else if (iVar2 == 5) {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00eb8);
        *(long *)(this + 0x1b0) = lVar13;
      }
      else {
        lVar13 = *(long *)(this + 0x1b0);
      }
      if (lVar13 != 0) {
        pPVar14 = *(PVZ2UIButton **)(this + 0x130);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,lVar13,2);
        iVar6 = FUN_043a19d8(5);
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00eb8);
        iVar2 = *(int *)(lVar13 + 0x38);
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00eb8);
        Sexy::Insets::Insets
                  (aIStack_88,iVar6,iVar6,(int)((double)iVar2 * 0.8),
                   (int)((double)*(int *)(lVar13 + 0x3c) * 0.8));
        PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)aRStack_40,(TRect *)aIStack_88);
      }
      psVar12 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryByType(psVar12);
      iVar2 = *(int *)(lVar11 + 0x18);
      if (0 < iVar2) {
        lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        lVar13 = FUN_043a138c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98));
        if ((ulong)(long)iVar2 < lVar13 + 1U) {
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
          lVar11 = FUN_043a13a0(*(undefined8 *)(lVar13 + 0x90),(long)(*(int *)(lVar11 + 0x18) + -1))
          ;
          Sexy::ToWString((string *)(lVar11 + 0x20));
          TodStringTranslate((wstring *)aIStack_88);
          FUN_054766c8(pPVar1,aRStack_40);
          FUN_05476c50(aRStack_40);
          FUN_05476c50(aIStack_88);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    }
    std::string::~string(asStack_98);
  }
  else {
    if (this_00 != (StandaloneEffect *)0x0) {
      StandaloneEffect::SetVisibility(this_00,true);
      pEVar15 = *(Effect_PopAnim **)(this + 0x1b8);
      std::string::string((string *)aRStack_40,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar15,aRStack_40,0);
      std::string::~string((string *)aRStack_40);
      nop();
    }
    TodStringTranslate(L"[NOT_BIND_ACCESSORY]");
    FUN_054766c8(pPVar1,aRStack_40);
    FUN_05476c50(aRStack_40);
  }
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarListView::ButtonPress(int) */

void PlantAvatarListView::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantAvatarListView::ButtonPress(int) */

void __thiscall PlantAvatarListView::ButtonPress(PlantAvatarListView *this,int param_1)

{
  ButtonPress((int)this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::OnNoticeAccessoryUIClose() */

void __thiscall PlantAvatarListView::OnNoticeAccessoryUIClose(PlantAvatarListView *this)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  UpdateAccessoryButton(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::refreshPlantAvatar(int) */

void __thiscall PlantAvatarListView::refreshPlantAvatar(PlantAvatarListView *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  ProfileMgr *this_00;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  ulong uVar7;
  NameMapperBase *this_01;
  Magento *this_02;
  long lVar8;
  string *extraout_x1;
  string *extraout_x1_00;
  ulong uVar9;
  undefined8 uVar10;
  PlantAnimRig *this_03;
  undefined1 auVar11 [16];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  wstring awStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x138) != 0) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    this_03 = *(PlantAnimRig **)(this + 0x138);
    PlantAnimRig::SetAvatarIndex(this_03,param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28);
    PlantAnimRig::ShowAvatarLayers(this_03,(RtWeakPtr<Sexy::SoundResource> *)&local_20,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  }
  FUN_043a1334(*(long *)(this + 400) + 0xd4,param_1);
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 400));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 == 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString((Sexy *)awStack_30,extraout_x1_00);
    TodStringTranslate((wstring *)&local_28);
    FUN_054766c8(this + 0x188,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    FUN_05476c50((wstring *)&local_28);
    std::string::~string((string *)awStack_30);
  }
  else if (param_1 < 1) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_40);
    this_02 = (Magento *)
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                         aRStack_38);
    Magento::GetPlantLevelUp(this_02);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_38,(RtWeakPtr *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x60));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar5 + 0x60));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
      cVar2 = std::operator==((string *)(lVar5 + 0x80),(string *)(lVar8 + 0x80));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)pRVar6);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString((Sexy *)awStack_30,extraout_x1);
    TodStringTranslate((wstring *)&local_28);
    FUN_054766c8(this + 0x188,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    FUN_05476c50((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    std::string::~string((string *)awStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  }
  else {
    uVar9 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    NewAvatar::GetListByPlantName((string *)(lVar5 + 0x80),(vector *)&local_20);
    uVar10 = local_20;
    lVar5 = FUN_043a1378(local_20,local_18);
    if (lVar5 != 0) {
      do {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043a1384(uVar10,uVar9);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        if (param_1 == *(int *)(lVar5 + 0x10)) {
          this_01 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043a1384(local_20,uVar9);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          iVar3 = NameMapperBase::GetIdForName(this_01,(string *)(lVar5 + 0x20));
          NewAvatar::GetAvatarInfoByAvatarId(iVar3);
          auVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          Sexy::UTF8StringToWString((Sexy *)(auVar11._0_8_ + 0x48),auVar11._8_8_);
          TodStringTranslate(awStack_30);
          FUN_054766c8(this + 0x188,&local_28);
          FUN_05476c50(&local_28);
          FUN_05476c50(awStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        }
        uVar10 = local_20;
        uVar9 = uVar9 + 1;
        uVar7 = FUN_043a1378(local_20,local_18);
      } while (uVar9 < uVar7);
    }
    std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
             *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::Update() */

void __thiscall PlantAvatarListView::Update(PlantAvatarListView *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PopAnimRig *this_01;
  ProfileMgr *pPVar10;
  long lVar11;
  RtWeakPtr *pRVar12;
  PlayerInfo *this_02;
  string *psVar13;
  Magento *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  long lVar14;
  PlantAvatarSwitchButtonScrollWidget *pPVar15;
  PlantAnimRig *this_05;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  bool local_39;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  Sexy aSStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_39 = false;
  PlantAvatarScrollListUI::CurrentPlantChange(*(PlantAvatarScrollListUI **)(this + 0xf8),&local_39);
  if ((local_39 != false) || (this[0x19c] != (PlantAvatarListView)0x0)) {
    this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe8);
    this[0x19e] = (PlantAvatarListView)0x0;
    pRVar12 = (RtWeakPtr *)
              PlantAvatarScrollListUI::GetCurrentPlantProps
                        (*(PlantAvatarScrollListUI **)(this + 0xf8));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,pRVar12);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
    psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_38);
    UpdateAccessoryButton(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = PlayerInfo::GetEquipAvatarID(this_02,(string *)(lVar11 + 0x80));
    iVar5 = PlayerInfo::GetWhichAvatarType((int)this_02);
    if (iVar5 == 2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar4);
      auVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_20);
      Sexy::UTF8StringToWString((Sexy *)(auVar19._0_8_ + 0x48),auVar19._8_8_);
      TodStringTranslate((wstring *)&local_18);
      FUN_054766c8(this + 0x188,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
      FUN_05476c50((wstring *)&local_18);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_20)
      ;
      iVar4 = *(int *)(lVar11 + 0x10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_20);
    }
    else {
      iVar4 = PlayerInfo::GetWhichAvatarType((int)this_02);
      if (iVar4 == 1) {
        iVar4 = 0;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::UTF8StringToWString(aSStack_20,extraout_x1_00);
        TodStringTranslate((wstring *)&local_18);
        FUN_054766c8(this + 0x188,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
        FUN_05476c50((wstring *)&local_18);
        std::string::~string((string *)aSStack_20);
      }
      else {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_30);
        this_03 = (Magento *)
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node(a_Stack_28);
        Magento::GetPlantLevelUp(this_03);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_28,(RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar11 + 0x60));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar11 + 0x60));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          cVar3 = std::operator==((string *)(lVar11 + 0x80),(string *)(lVar14 + 0x80));
          if (cVar3 != '\0') {
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_30,(RtWeakPtr *)this_04);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        iVar4 = -1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
        TodStringTranslate((wstring *)&local_18);
        FUN_054766c8(this + 0x188,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_10);
        FUN_05476c50((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        std::string::~string((string *)aSStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30)
        ;
      }
    }
    cVar3 = LawnApp::IsServiceAvailable(gLawnApp,0x10000);
    if (cVar3 != '\0') {
      if (*(long *)(this + 0x100) != 0) {
        (**(code **)(*(long *)this + 0x68))(this);
        if (*(long **)(this + 0x100) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x100) + 0x18))();
          *(undefined8 *)(this + 0x100) = 0;
        }
      }
      pPVar15 = ::operator_new(0xf8);
      PlantAvatarSwitchButtonScrollWidget::PlantAvatarSwitchButtonScrollWidget(pPVar15);
      *(PlantAvatarSwitchButtonScrollWidget **)(this + 0x100) = pPVar15;
      uVar8 = FUN_043a19d8(0x50);
      uVar9 = FUN_043a19d8(0x140);
      uVar6 = FUN_043a19d8(0xb4);
      uVar7 = FUN_043a19d8(0x32);
      (**(code **)(*(long *)pPVar15 + 0x198))(pPVar15,uVar8,uVar9,uVar6,uVar7);
      pPVar15 = *(PlantAvatarSwitchButtonScrollWidget **)(this + 0x100);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)this_00);
      PlantAvatarSwitchButtonScrollWidget::SetData
                (pPVar15,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
    }
    if (*(long **)(this + 0x138) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x138) + 0x18))();
      *(undefined8 *)(this + 0x138) = 0;
    }
    psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    this_05 = (PlantAnimRig *)
              CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::SoundResource> *)&local_10,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    PlantAnimRig::SetAvatarIndex(this_05,iVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_38);
    PlantAnimRig::ShowAvatarLayers(this_05,(RtWeakPtr<Sexy::SoundResource> *)&local_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    (**(code **)(*(long *)this_05 + 0x1a0))(this_05,0);
    *(PlantAnimRig **)(this + 0x138) = this_05;
    this[0x19c] = (PlantAvatarListView)0x0;
    RefreshCurrentData(this);
    psVar13 = *(string **)(this + 400);
    if (psVar13 != (string *)0x0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PlantDisplayBoard::SetPlantName(psVar13);
      FUN_043a1334(*(long *)(this + 400) + 0xd4,iVar4);
      PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 400));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  this_01 = *(PopAnimRig **)(this + 0x138);
  if (this_01 != (PopAnimRig *)0x0) {
    fVar17 = (float)PVZ_RealT();
    fVar18 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_01,fVar17,fVar18);
  }
  if (*(StandaloneEffect **)(this + 0x1b8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1b8));
  }
  pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(pPVar10);
  iVar4 = FUN_043a1318(*(undefined4 *)(lVar11 + 0x40));
  pLVar1 = gLawnApp;
  if ((iVar4 == 0x36) && (this[0x19d] != (PlantAvatarListView)0x0)) {
    lVar11 = *(long *)(this + 0x110);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,
               (float)*(int *)(this + 0x48) + (float)*(int *)(lVar11 + 0x48) +
               (float)(*(int *)(lVar11 + 0x50) / 2),
               (float)*(int *)(this + 0x4c) + (float)*(int *)(lVar11 + 0x4c) +
               (float)(*(int *)(lVar11 + 0x54) / 2));
    uVar8 = FUN_043a19d8(0x3c);
    uVar16 = *(undefined8 *)(this + 0x110);
    std::string::string((string *)&local_10,"");
    LawnApp::ShowGameMaskUI
              ((undefined4)local_18,local_18._4_4_,pLVar1,uVar8,uVar16,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    lVar11 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar8 = FUN_043a19d8(0xb4);
    uVar9 = FUN_043a19d8(0x23);
    FUN_043a14a8(lVar11 + 0xf8,lVar11 + 0x100,uVar8,uVar9);
    lVar11 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar4 = FUN_043a19d8(0x14a);
    uVar8 = FUN_043a19d8(0xbe);
    FUN_043a1450(lVar11 + 0x114,-iVar4,uVar8);
    this[0x19d] = (PlantAvatarListView)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::ButtonDepress(int) */

void PlantAvatarListView::ButtonDepress(int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  string *psVar10;
  char *pcVar11;
  WorldMap *this_00;
  GachaMgr *pGVar12;
  undefined4 in_w1;
  string *in_x4;
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  int local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  pLVar1 = gLawnApp;
  uVar4 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  switch(in_w1) {
  case 0:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    iVar3 = FUN_043a1318(*(undefined4 *)(pPVar6 + 0x40));
    if (iVar3 == 0x18) {
      LawnApp::KillGameMaskUI(gLawnApp);
      this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      if (this_00 != (WorldMap *)0x0) {
        WorldMap::ForceTutorialToFinish(this_00);
      }
      PlayerInfo::CompleteTutorial(pPVar6,0x18);
      pGVar12 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      GachaMgr::SetTutorialStep(pGVar12,0);
      lVar7 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      FUN_043a1444(lVar7 + 0x10);
    }
    LawnApp::KillPlantSkillTipsUI(gLawnApp);
    pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar11,"Play_UI_Button_X_Close_Release");
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    break;
  case 1:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(uVar4 + 0xe8));
    LawnApp::ShowPlantAvatarPackageView(pLVar1,(RtWeakPtr<Sexy::SoundResource> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    break;
  case 2:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (RtWeakPtr<Sexy::ResourceInfo> *)(uVar4 + 0xe8);
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar3 = PlayerInfo::GetAvatarPiecesCount(pPVar6,lVar7 + 0x80,0,0);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    pLVar1 = gLawnApp;
    if (iVar3 < *(int *)(lVar7 + 0x90)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)this);
      LawnApp::ShowPlantAvatarInfoDialog(pLVar1,(RtWeakPtr<Sexy::SoundResource> *)local_10,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
    else {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PlayerInfo::UnlockPlantAvatar(pPVar6,lVar7 + 0x80,0);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PlayerInfo::SetPlantAvatar(pPVar6,lVar7 + 0x80,0);
      std::string::string(asStack_20,"iOS PvZ2 Avatar Store");
      std::string::string((string *)local_18,"Avatars");
      std::string::string((string *)local_10,"avatar");
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      Magento::FindStoreProduct
                ((Magento *)asStack_20,(string *)local_18,(string *)local_10,
                 (string *)(lVar7 + 0x80),in_x4);
      std::string::~string((string *)local_10);
      nop();
      std::string::~string((string *)local_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar2 != '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        iVar3 = PlayerInfo::GetAvatarPiecesCount(pPVar6,lVar8 + 0x80,0,0);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        local_18[0] = iVar3 - *(int *)(lVar8 + 0x90);
        local_10[0] = 0;
        piVar9 = eastl::max_alt<int>(local_18,(int *)local_10);
        PlayerInfo::SetAvatarPieces(pPVar6,lVar7 + 0x80,0,*piVar9,1,1);
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
      *(undefined1 *)(uVar4 + 0x19c) = 1;
      pLVar1 = gLawnApp;
      psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      MagentoProductProps::GetLocalizedDescription();
      LawnApp::ShowAvatarRewardDialog
                (pLVar1,asStack_20,(string *)local_18,(string *)local_10,0,0,0,0xffffffff);
      std::string::~string((string *)local_10);
      std::string::~string((string *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    break;
  case 3:
  case 4:
    LawnApp::KillPlantSkillTipsUI(gLawnApp);
    break;
  case 5:
    psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar4 + 0xe8));
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
    LawnApp::ShowPlantAccessoryUI(pLVar1,1,(RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantAvatarListView::ButtonDepress(int) */

void __thiscall PlantAvatarListView::ButtonDepress(PlantAvatarListView *this,int param_1)

{
  ButtonDepress((int)this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::Draw(Sexy::Graphics*) */

void __thiscall PlantAvatarListView::Draw(PlantAvatarListView *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  Image *pIVar13;
  string *psVar14;
  PlantType *this_00;
  long lVar15;
  LotteryResultProgressBar *pLVar16;
  float fVar17;
  float fVar18;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar3 = FUN_043a19d8(0xd);
  iVar7 = *(int *)(this + 0x154);
  iVar4 = FUN_043a19d8(0x19);
  iVar8 = *(int *)(this + 0x158);
  iVar5 = FUN_043a19d8(0x1a);
  iVar9 = *(int *)(this + 0x15c);
  iVar6 = FUN_043a19d8(0x27);
  Sexy::Insets::Insets
            ((Insets *)&local_48,iVar3 + iVar7,iVar4 + iVar8,iVar9 - iVar5,
             *(int *)(this + 0x160) - iVar6);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01200);
  Draw9SliceImage(param_1,aIStack_18,uVar12);
  TodStringTranslate(L"[PIECE_AVATAR_NOTICE_TITLE]");
  iVar7 = FUN_043a19d8(0xf);
  iVar8 = FUN_043a19d8(0x28);
  Sexy::Insets::Insets(aIStack_28,0,iVar7,*(int *)(this + 0x50),iVar8);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,(Insets *)&local_38,aIStack_28,uVar12,aIStack_18,2,1);
  FUN_05476c50((Insets *)&local_38);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01530);
  iVar8 = local_44;
  iVar7 = local_48;
  iVar9 = FUN_043a19d8(0x10e);
  iVar3 = FUN_043a19d8(0x127);
  Sexy::Graphics::DrawImage(param_1,pIVar13,iVar7,iVar8,iVar9,iVar3);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00be8);
  iVar7 = local_48;
  iVar9 = FUN_043a19d8(0x113);
  iVar8 = local_44;
  iVar3 = FUN_043a19d8(0x1ca);
  iVar4 = FUN_043a19d8(0x127);
  Sexy::Graphics::DrawImage(param_1,pIVar13,iVar7 + iVar9,iVar8,iVar3,iVar4);
  iVar8 = FUN_043a19d8(10);
  iVar7 = *(int *)(this + 0x164);
  iVar9 = FUN_043a19d8(0xf);
  Sexy::Insets::Insets
            (aIStack_18,iVar7 - iVar8,*(int *)(this + 0x168),iVar9 + *(int *)(this + 0x16c),
             *(int *)(this + 0x170));
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b016c0);
  Draw9SliceImage(param_1,aIStack_18,uVar12);
  iVar7 = FUN_043a19d8(0x3c);
  iVar8 = FUN_043a19d8(9);
  iVar9 = FUN_043a19d8(0x96);
  iVar3 = FUN_043a19d8(0x28);
  Sexy::Insets::Insets((Insets *)&local_38,local_48 + iVar7,local_44 + iVar8,iVar9,iVar3);
  iVar7 = FUN_043a19d8(0x32);
  iVar8 = FUN_043a19d8(100);
  Sexy::Insets::Insets(aIStack_28,local_38 - iVar7,local_34,local_30 + iVar8,local_2c);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x188,aIStack_28,uVar12,aIStack_18,2,1);
  cVar1 = FUN_054765e8(this + 0x1a0);
  if (cVar1 == '\0') {
    iVar9 = FUN_043a19d8(0xf);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00e08);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00f10);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    lVar15 = *(long *)(this + 0x130);
    iVar5 = FUN_043a19d8(5);
    iVar7 = *(int *)(lVar15 + 0x4c);
    iVar6 = FUN_043a19d8(0x3c);
    iVar8 = *(int *)(lVar15 + 0x48);
    iVar10 = FUN_043a19d8(0x14);
    iVar11 = FUN_043a19d8(10);
    Sexy::Insets::Insets
              (aIStack_28,(iVar9 + iVar3 + iVar8) - iVar10,(iVar5 + iVar7) - iVar11,
               iVar4 - (iVar9 + iVar3),iVar5 + iVar6);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1a0,aIStack_28,uVar12,aIStack_18,5,1);
  }
  if (*(long *)(this + 0x138) == 0) goto LAB_043a7f0c;
  iVar7 = FUN_043a19d8(0x14);
  iVar7 = -iVar7;
  iVar8 = FUN_043a19d8(0x5a);
  psVar14 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar14);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aIStack_18);
  if (bVar2) {
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    lVar15 = PlantType::GetProps(this_00);
    if (lVar15 == 0) goto LAB_043a7ee4;
    fVar17 = (float)FUN_043a19ec(*(undefined4 *)(lVar15 + 0x2a8));
    iVar7 = (int)(fVar17 + (float)iVar7);
    fVar18 = (float)FUN_043a19ec(*(undefined4 *)(lVar15 + 0x2ac));
    fVar17 = *(float *)(lVar15 + 0x2a4) * 1.7;
    iVar8 = (int)(fVar18 + (float)iVar8);
  }
  else {
LAB_043a7ee4:
    fVar17 = 1.7;
  }
  UIUtil::DrawPopAnim(param_1,*(PopAnimRig **)(this + 0x138),iVar7,iVar8,fVar17,0.0,0.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
LAB_043a7f0c:
  if ((*(long *)(this + 0x1b8) != 0) && (this[0x6f] != (PlantAvatarListView)0x0)) {
    Sexy::Widget::DeferOverlay((Widget *)this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::InitView() */

void __thiscall PlantAvatarListView::InitView(PlantAvatarListView *this)

{
  ButtonListener *pBVar1;
  RtWeakPtr<PowerPropertySheet> *this_00;
  TRect *pTVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  PrimeText *this_01;
  PVZ2UIButton *pPVar17;
  long lVar18;
  LotteryResultProgressBar *pLVar19;
  SalesProgressBar *pSVar20;
  PVZ2UIScrollingWidget *this_02;
  RareFilterPanel *this_03;
  PlantAvatarScrollListUI *this_04;
  ProfileMgr *this_05;
  RtWeakPtr *pRVar21;
  string *psVar22;
  Effect_PopAnim *this_06;
  ResourceInfo *pRVar23;
  PlantAnimRig *pPVar24;
  TGALogMgr *this_07;
  long *plVar25;
  code *pcVar26;
  StandaloneEffect *this_08;
  undefined8 uVar27;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_cc;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_c0 [8];
  string asStack_b8 [8];
  Delegate0 aDStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xe0);
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  pTVar2 = (TRect *)(this + 0x164);
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  this[0x59] = (PlantAvatarListView)0x0;
  lVar18 = gLawnApp;
  iVar4 = FUN_043a19d8(0x2f8);
  iVar5 = FUN_043a19d8(0x23a);
  iVar15 = *(int *)(lVar18 + 0xd8);
  iVar6 = FUN_043a19d8(10);
  (**(code **)(*(long *)this + 0x198))
            (this,(int)(((float)*(int *)(lVar18 + 0xd4) - (float)iVar4) * 0.5),
             (int)((float)iVar6 + ((float)iVar15 - (float)iVar5) * 0.5),iVar4,iVar5);
  FUN_05478178((string *)&local_80,&DAT_056f11a8,asStack_b8);
  Sexy::Color::Color((Color *)&local_48,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0,pBVar1,(wstring *)&local_80,(Color *)&local_48);
  *(PVZ2UIButton **)(this + 0x108) = pPVar17;
  FUN_05476c50((string *)&local_80);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_80,&DAT_06b018e8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_48,&DAT_06b00ce8,1);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)&local_80,(PVZ2UIImage *)&local_48);
  plVar25 = *(long **)(this + 0x108);
  pcVar26 = *(code **)(*plVar25 + 0x198);
  iVar4 = FUN_043a19d8(0x2f8);
  lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b014e0);
  iVar15 = *(int *)(lVar18 + 0x38);
  iVar5 = FUN_043a19d8(0x14);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b018e8);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar26)(plVar25,(iVar4 - iVar15) + iVar5,-iVar5,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178((string *)&local_80,&DAT_056f11a8,asStack_b8);
  Sexy::Color::Color((Color *)&local_48,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,1,pBVar1,(wstring *)&local_80,(Color *)&local_48);
  *(PVZ2UIButton **)(this + 0x110) = pPVar17;
  FUN_05476c50((string *)&local_80);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_80,&DAT_06b01070,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_48,&DAT_06b01098,2);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)&local_80,(PVZ2UIImage *)&local_48);
  plVar25 = *(long **)(this + 0x110);
  uVar7 = FUN_043a19d8(200);
  uVar8 = FUN_043a19d8(0x7d);
  uVar9 = FUN_043a19d8(0x32);
  (**(code **)(*plVar25 + 0x198))(plVar25,uVar7,uVar8,uVar9,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  FUN_05478178((string *)&local_80,&DAT_056f11a8,asStack_b8);
  Sexy::Color::Color((Color *)&local_48,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,3,pBVar1,(wstring *)&local_80,(Color *)&local_48);
  *(PVZ2UIButton **)(this + 0x120) = pPVar17;
  FUN_05476c50((string *)&local_80);
  nop();
  plVar25 = *(long **)(this + 0x120);
  pcVar26 = *(code **)(*plVar25 + 0x198);
  iVar4 = FUN_043a19d8(0x145);
  lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00e30);
  iVar15 = *(int *)(lVar18 + 0x38);
  iVar5 = FUN_043a19d8(7);
  uVar7 = FUN_043a19d8(0x130);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01278);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01278);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar26)(plVar25,iVar4 + iVar15 + iVar5,uVar7,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  FUN_05478178((string *)&local_80,&DAT_056f11a8,asStack_b8);
  Sexy::Color::Color((Color *)&local_48,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,4,pBVar1,(wstring *)&local_80,(Color *)&local_48);
  *(PVZ2UIButton **)(this + 0x128) = pPVar17;
  FUN_05476c50((string *)&local_80);
  nop();
  plVar25 = *(long **)(this + 0x128);
  pcVar26 = *(code **)(*plVar25 + 0x198);
  iVar4 = FUN_043a19d8(0x145);
  lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00e30);
  iVar5 = FUN_043a19d8(7);
  iVar15 = *(int *)(lVar18 + 0x38);
  uVar7 = FUN_043a19d8(0x130);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01278);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01278);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar26)(plVar25,iVar4 + (iVar5 + iVar15) * 2,uVar7,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  iVar15 = *(int *)(*(long *)(this + 0x108) + 0x54);
  iVar4 = *(int *)(*(long *)(this + 0x108) + 0x4c);
  iVar5 = FUN_043a19d8(0x14);
  iVar6 = FUN_043a19d8(0x23a);
  iVar10 = FUN_043a19d8(0);
  iVar11 = FUN_043a19d8(0x28);
  iVar12 = FUN_043a19d8(0x2f8);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b014e0);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar20);
  iVar14 = FUN_043a19d8(9);
  Sexy::Insets::Insets
            ((Insets *)&local_48,iVar10,iVar11,iVar12,
             ((iVar4 + iVar15 + iVar5 + iVar6) - iVar13) + iVar14);
  *(ulong *)(this + 0x154) = CONCAT44(uStack_44,local_48);
  *(undefined8 *)(this + 0x15c) = uStack_40;
  iVar5 = FUN_043a19d8(0x3c);
  iVar6 = FUN_043a19d8(0x19);
  iVar10 = FUN_043a19d8(0x28);
  iVar15 = *(int *)(this + 0x158);
  iVar11 = FUN_043a19d8(0x122);
  iVar12 = FUN_043a19d8(0x1e);
  iVar4 = *(int *)(this + 0x50);
  iVar13 = FUN_043a19d8(0x14);
  iVar14 = FUN_043a19d8(0xb7);
  Sexy::Insets::Insets
            ((Insets *)&local_48,iVar6 + iVar5,iVar10 + iVar15 + iVar11,
             ((iVar4 - iVar12) - iVar5) - iVar13,iVar14);
  *(ulong *)pTVar2 = CONCAT44(uStack_44,local_48);
  *(undefined8 *)(this + 0x16c) = uStack_40;
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  lVar18 = *(long *)this_02;
  *(PVZ2UIScrollingWidget **)(this + 0xf0) = this_02;
  (**(code **)(lVar18 + 0x1a0))(this_02,pTVar2);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf0),1);
  this_03 = ::operator_new(0xd8);
  RareFilterPanel::RareFilterPanel(this_03);
  pcVar26 = *(code **)(*(long *)this_03 + 0x1a0);
  iVar15 = FUN_043a19d8(0x14);
  iVar4 = FUN_043a19d8(5);
  Sexy::Insets::Insets
            ((Insets *)&local_48,iVar15,*(int *)(this + 0x168),iVar4 + iVar5,*(int *)(this + 0x170))
  ;
  (*pcVar26)(this_03,(Insets *)&local_48);
  RareFilterPanel::initView(this_03);
  (**(code **)(*(long *)this + 0x60))(this,this_03);
  this_04 = ::operator_new(0x108);
  PlantAvatarScrollListUI::PlantAvatarScrollListUI(this_04,pTVar2);
  *(PlantAvatarScrollListUI **)(this + 0xf8) = this_04;
  (**(code **)(**(long **)(this + 0xf0) + 0x60))(*(long **)(this + 0xf0),this_04);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  this_05 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_05);
  pRVar21 = (RtWeakPtr *)
            PlantAvatarScrollListUI::GetCurrentPlantProps
                      (*(PlantAvatarScrollListUI **)(this + 0xf8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,pRVar21);
  psVar22 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar22);
  FUN_05478178((string *)&local_80,&DAT_056f11a8,asStack_b8);
  Sexy::Color::Color((Color *)&local_48,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,5,pBVar1,(wstring *)&local_80,(Color *)&local_48);
  *(PVZ2UIButton **)(this + 0x130) = pPVar17;
  FUN_05476c50((string *)&local_80);
  nop();
  pPVar17 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_80,&DAT_06b01910,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_48,&DAT_06b01910,2);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)&local_80,(PVZ2UIImage *)&local_48);
  iVar4 = FUN_043a19d8(0x129);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00f10);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar20);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01910);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar20);
  plVar25 = *(long **)(this + 0x130);
  pcVar26 = *(code **)(*plVar25 + 0x198);
  iVar10 = FUN_043a19d8(0xd2);
  lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01910);
  iVar15 = *(int *)(lVar18 + 0x38);
  iVar11 = FUN_043a19d8(7);
  iVar12 = FUN_043a19d8(0x1e);
  iVar13 = FUN_043a19d8(0x1a);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01910);
  iVar14 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar20 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01910);
  iVar16 = SalesProgressBar::GetCurrentLevel(pSVar20);
  (*pcVar26)(plVar25,(iVar10 + iVar15 + iVar11) - iVar12,(iVar4 + (iVar5 - iVar6) / 2) - iVar13,
             (int)((double)iVar14 * 0.8),(int)((double)iVar16 * 0.8));
  this_06 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x1b8) = this_06;
  std::string::string((string *)&local_80,"POPANIM_EFFECTS_ACCESSORY_BUTTON");
  GetPAMByName((string *)&local_80);
  pRVar23 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_48);
  Effect_PopAnim::CreatePopAnimRig(this_06,(PopAnim *)pRVar23,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  std::string::~string((string *)&local_80);
  nop();
  if (*(Effect_PopAnim **)(this + 0x1b8) != (Effect_PopAnim *)0x0) {
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1b8),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1b8),false);
    this_08 = *(StandaloneEffect **)(this + 0x1b8);
    lVar18 = *(long *)(this + 0x130);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_48,(float)(*(int *)(lVar18 + 0x48) + *(int *)(lVar18 + 0x50) / 2)
               ,(float)(*(int *)(lVar18 + 0x4c) + *(int *)(lVar18 + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_08,(SexyVector2 *)&local_48,900000);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_c8);
  UpdateAccessoryButton(this,(Insets *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  psVar22 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar22);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c0,(RtWeakPtrBase *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_c0);
  pPVar24 = (PlantAnimRig *)CreateStandalonePlantAnimRig((Insets *)&local_48,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_c8);
  PlantAnimRig::ShowAvatarLayers(pPVar24,(Insets *)&local_48,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  (**(code **)(*(long *)pPVar24 + 0x1a0))(pPVar24,0);
  *(PlantAnimRig **)(this + 0x138) = pPVar24;
  psVar22 = ::operator_new(0x178);
  PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar22,3,0);
  *(string **)(this + 400) = psVar22;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PlantDisplayBoard::SetPlantName(psVar22);
  plVar25 = *(long **)(this + 400);
  iVar5 = FUN_043a19d8(0xd);
  iVar15 = *(int *)(this + 0x154);
  iVar6 = FUN_043a19d8(0x13a);
  iVar10 = FUN_043a19c4(200);
  iVar11 = FUN_043a19d8(0x18);
  iVar4 = *(int *)(this + 0x158);
  iVar12 = FUN_043a19d8(0x1c);
  iVar13 = FUN_043a19c4(0xa0);
  uVar7 = FUN_043a19d8(0x1aa);
  uVar8 = FUN_043a19d8(0xcd);
  (**(code **)(*plVar25 + 0x198))
            (plVar25,(iVar5 + iVar15 + iVar6) - iVar10,(iVar11 + iVar4 + iVar12) - iVar13,uVar7,
             uVar8);
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 400));
  uVar27 = *(undefined8 *)(this + 400);
  iVar15 = FUN_043a19d8(0x14);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)-iVar15,(float)-iVar15);
  PlantDisplayBoard::SetDisplayLevelButtonPosOffset(local_48,uStack_44,uVar27);
  lVar18 = *(long *)(this + 400);
  iVar15 = FUN_043a19d8(0xb9);
  iVar4 = FUN_043a19d8(0x90);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)-iVar15,(float)iVar4);
  FUN_043a1320(local_48,uStack_44,lVar18 + 0x124);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 400));
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNoticeAccessoryUIClose);
  Sexy::Delegate0::Delegate0<PlantAvatarListView,void(PlantAvatarListView::*)()>
            (aDStack_b0,(Insets *)&local_48);
  MessageRouter::Subscribe((MessageRouter *)puVar3,Message::NoticeAccessoryUIClose,aDStack_b0);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,refreshPlantAvatar);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantAvatarListView,void(PlantAvatarListView::*)(int)>>
            ((MessageRouter *)puVar3,Message::EquipAvatar,&local_f0);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PatchRefresh);
  Sexy::Delegate0::Delegate0<PlantAvatarListView,void(PlantAvatarListView::*)()>
            (aDStack_b0,(Insets *)&local_48);
  MessageRouter::Subscribe((MessageRouter *)puVar3,Message::PatchRefresh,aDStack_b0);
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)&local_48);
  local_cc = 1;
  FUN_043a125c(asStack_b8);
  FUN_05474278((Insets *)&local_48,asStack_b8);
  std::string::~string(asStack_b8);
  this_07 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogDecorateData(this_07,(TGALogPlantDecorate *)&local_48);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarListView::PlantAvatarListView() */

void __thiscall PlantAvatarListView::PlantAvatarListView(PlantAvatarListView *this)

{
  undefined *this_00;
  LawnApp *pLVar1;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06840390;
  *(undefined ***)(this + 0xd8) = &PTR__PlantAvatarListView_068406d0;
  *(undefined **)(this + 0xe0) = &DAT_06840718;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x154));
  Sexy::Insets::Insets((Insets *)(this + 0x164));
  FUN_05476574(this + 0x178);
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  FUN_05476574(this + 0x1a0);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x19d] = (PlantAvatarListView)0x1;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  this[0x19c] = (PlantAvatarListView)0x0;
  this[0x19e] = (PlantAvatarListView)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_AvatarView_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"AudioCommon");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"Accessory_Button");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_50,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_50);
  std::string::~string(asStack_50);
  nop();
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyPackageViewClose);
  Sexy::Delegate0::Delegate0<PlantAvatarListView,void(PlantAvatarListView::*)()>
            (aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyPackageViewClose,aDStack_38);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

