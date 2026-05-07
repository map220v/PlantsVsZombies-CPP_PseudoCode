// Class: ArtifactCultivationListView


/* ArtifactCultivationListView::ScrollTargetReached(Sexy::ScrollWidget*) */

void ArtifactCultivationListView::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArtifactCultivationListView::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ArtifactCultivationListView::ScrollTargetReached
          (ArtifactCultivationListView *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* ArtifactCultivationListView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ArtifactCultivationListView::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArtifactCultivationListView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ArtifactCultivationListView::ScrollTargetInterrupted
          (ArtifactCultivationListView *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* ArtifactCultivationListView::CloseCultivationWidget() */

void __thiscall
ArtifactCultivationListView::CloseCultivationWidget(ArtifactCultivationListView *this)

{
  if (*(long *)(this + 0x130) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x130))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x130));
    *(undefined8 *)(this + 0x130) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::onNarrationFinished() */

void __thiscall ArtifactCultivationListView::onNarrationFinished(ArtifactCultivationListView *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar1 = *(undefined8 *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  Sexy::Insets::Insets(aIStack_18);
  GameMaskUI::ShowMask(uVar1,1,asStack_20,aIStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::UpdateArtifactButton() */

void __thiscall ArtifactCultivationListView::UpdateArtifactButton(ArtifactCultivationListView *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this_00;
  wchar_t *pwVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  PVZ2UIButton *pPVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ArtifactUtils::IsMaxLevel(*(int *)(this + 0xe8));
  plVar7 = *(long **)(this + 0x118);
  if (cVar1 == '\0') {
    (**(code **)(*plVar7 + 0x158))(plVar7);
    (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),1);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this_00,*(int *)(this + 0xe8));
  }
  else {
    (**(code **)(*plVar7 + 0x158))(plVar7,1);
    (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),0);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this_00,*(int *)(this + 0xe8));
  }
  if (cVar1 == '\0') {
    ArtifactUtils::GetArtifactPropertyPtr(*(int *)(this + 0xe8));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    if (*(int *)(lVar5 + 0xf8) == 0) {
      (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
      pPVar8 = *(PVZ2UIButton **)(this + 0x110);
      *(undefined4 *)(pPVar8 + 0xd4) = 0x65;
      TodStringTranslate(L"[PREVIEW_BUTTON]");
      PVZ2UIButton::SetLabelText(pPVar8,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
    }
    else {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      if ((*(int *)(lVar5 + 0xf8) == 1) ||
         (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18), *(int *)(lVar5 + 0xf8) == 2)
         ) {
        (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
        pPVar8 = *(PVZ2UIButton **)(this + 0x110);
        *(undefined4 *)(pPVar8 + 0xd4) = 0x6e;
        TodStringTranslate(L"[DEMO_BUTTON]");
        PVZ2UIButton::SetLabelText(pPVar8,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    iVar2 = PlayerInfo::GetCurrentArtifact(this_00);
    pPVar8 = *(PVZ2UIButton **)(this + 0x108);
    if (iVar2 == *(int *)(this + 0xe8)) {
      uVar6 = 0x6c;
      pwVar4 = L"[UNEQUIP]";
    }
    else {
      uVar6 = 0x6b;
      pwVar4 = L"[EQUIP]";
    }
    *(undefined4 *)(pPVar8 + 0xd4) = uVar6;
    TodStringTranslate(pwVar4);
    PVZ2UIButton::SetLabelText(pPVar8,awStack_10);
    FUN_05476c50(awStack_10);
    (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),0);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),1);
    cVar1 = ArtifactUtils::CanLevelUp(*(int *)(this + 0xe8));
    if (cVar1 == '\0') {
      cVar1 = ArtifactUtils::CanRankUp(*(int *)(this + 0xe8));
      if (cVar1 == '\0') {
        pPVar8 = *(PVZ2UIButton **)(this + 0x110);
        *(undefined4 *)(pPVar8 + 0xd4) = 0x68;
        TodStringTranslate(L"[BLESS]");
        PVZ2UIButton::SetLabelText(pPVar8,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
      }
      else {
        pPVar8 = *(PVZ2UIButton **)(this + 0x110);
        *(undefined4 *)(pPVar8 + 0xd4) = 0x67;
        TodStringTranslate(L"[RANK_UP]");
        PVZ2UIButton::SetLabelText(pPVar8,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
      }
    }
    else {
      pPVar8 = *(PVZ2UIButton **)(this + 0x110);
      *(undefined4 *)(pPVar8 + 0xd4) = 0x66;
      TodStringTranslate(L"[UPGRADE]");
      PVZ2UIButton::SetLabelText(pPVar8,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::OnEquipArtifact(int) */

void ArtifactCultivationListView::OnEquipArtifact(int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  wchar_t *pwVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  PVZ2UIButton *pPVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  wstring awStack_10 [8];
  long lStack_8;
  
  uVar6 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  cVar1 = ArtifactUtils::IsMaxLevel(*(int *)(uVar6 + 0xe8));
  plVar8 = *(long **)(uVar6 + 0x118);
  if (cVar1 == '\0') {
    (**(code **)(*plVar8 + 0x158))(plVar8);
    (**(code **)(**(long **)(uVar6 + 0x118) + 0x188))(*(long **)(uVar6 + 0x118),1);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this,*(int *)(uVar6 + 0xe8));
  }
  else {
    (**(code **)(*plVar8 + 0x158))(plVar8,1);
    (**(code **)(**(long **)(uVar6 + 0x118) + 0x188))(*(long **)(uVar6 + 0x118),0);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this,*(int *)(uVar6 + 0xe8));
  }
  if (cVar1 == '\0') {
    ArtifactUtils::GetArtifactPropertyPtr(*(int *)(uVar6 + 0xe8));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    if (*(int *)(lVar5 + 0xf8) == 0) {
      (**(code **)(**(long **)(uVar6 + 0x108) + 0x158))(*(long **)(uVar6 + 0x108),0);
      pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
      *(undefined4 *)(pPVar9 + 0xd4) = 0x65;
      TodStringTranslate(L"[PREVIEW_BUTTON]");
      PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
    }
    else {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      if ((*(int *)(lVar5 + 0xf8) == 1) ||
         (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18), *(int *)(lVar5 + 0xf8) == 2)
         ) {
        (**(code **)(**(long **)(uVar6 + 0x108) + 0x158))(*(long **)(uVar6 + 0x108),0);
        pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
        *(undefined4 *)(pPVar9 + 0xd4) = 0x6e;
        TodStringTranslate(L"[DEMO_BUTTON]");
        PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    iVar2 = PlayerInfo::GetCurrentArtifact(this);
    pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x108);
    if (iVar2 == *(int *)(uVar6 + 0xe8)) {
      uVar7 = 0x6c;
      pwVar4 = L"[UNEQUIP]";
    }
    else {
      uVar7 = 0x6b;
      pwVar4 = L"[EQUIP]";
    }
    *(undefined4 *)(pPVar9 + 0xd4) = uVar7;
    TodStringTranslate(pwVar4);
    PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
    FUN_05476c50(awStack_10);
    (**(code **)(**(long **)(uVar6 + 0x108) + 0x188))(*(long **)(uVar6 + 0x108),0);
    (**(code **)(**(long **)(uVar6 + 0x108) + 0x158))(*(long **)(uVar6 + 0x108),1);
    cVar1 = ArtifactUtils::CanLevelUp(*(int *)(uVar6 + 0xe8));
    if (cVar1 == '\0') {
      cVar1 = ArtifactUtils::CanRankUp(*(int *)(uVar6 + 0xe8));
      if (cVar1 == '\0') {
        pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
        *(undefined4 *)(pPVar9 + 0xd4) = 0x68;
        TodStringTranslate(L"[BLESS]");
        PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
      }
      else {
        pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
        *(undefined4 *)(pPVar9 + 0xd4) = 0x67;
        TodStringTranslate(L"[RANK_UP]");
        PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
      }
    }
    else {
      pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
      *(undefined4 *)(pPVar9 + 0xd4) = 0x66;
      TodStringTranslate(L"[UPGRADE]");
      PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::OnUnEquipArtifact(int) */

void ArtifactCultivationListView::OnUnEquipArtifact(int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  wchar_t *pwVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  PVZ2UIButton *pPVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  wstring awStack_10 [8];
  long lStack_8;
  
  uVar6 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  cVar1 = ArtifactUtils::IsMaxLevel(*(int *)(uVar6 + 0xe8));
  plVar8 = *(long **)(uVar6 + 0x118);
  if (cVar1 == '\0') {
    (**(code **)(*plVar8 + 0x158))(plVar8);
    (**(code **)(**(long **)(uVar6 + 0x118) + 0x188))(*(long **)(uVar6 + 0x118),1);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this,*(int *)(uVar6 + 0xe8));
  }
  else {
    (**(code **)(*plVar8 + 0x158))(plVar8,1);
    (**(code **)(**(long **)(uVar6 + 0x118) + 0x188))(*(long **)(uVar6 + 0x118),0);
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this,*(int *)(uVar6 + 0xe8));
  }
  if (cVar1 == '\0') {
    ArtifactUtils::GetArtifactPropertyPtr(*(int *)(uVar6 + 0xe8));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    if (*(int *)(lVar5 + 0xf8) == 0) {
      (**(code **)(**(long **)(uVar6 + 0x108) + 0x158))(*(long **)(uVar6 + 0x108),0);
      pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
      *(undefined4 *)(pPVar9 + 0xd4) = 0x65;
      TodStringTranslate(L"[PREVIEW_BUTTON]");
      PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
    }
    else {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      if ((*(int *)(lVar5 + 0xf8) == 1) ||
         (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18), *(int *)(lVar5 + 0xf8) == 2)
         ) {
        (**(code **)(**(long **)(uVar6 + 0x108) + 0x158))(*(long **)(uVar6 + 0x108),0);
        pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
        *(undefined4 *)(pPVar9 + 0xd4) = 0x6e;
        TodStringTranslate(L"[DEMO_BUTTON]");
        PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    iVar2 = PlayerInfo::GetCurrentArtifact(this);
    pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x108);
    if (iVar2 == *(int *)(uVar6 + 0xe8)) {
      uVar7 = 0x6c;
      pwVar4 = L"[UNEQUIP]";
    }
    else {
      uVar7 = 0x6b;
      pwVar4 = L"[EQUIP]";
    }
    *(undefined4 *)(pPVar9 + 0xd4) = uVar7;
    TodStringTranslate(pwVar4);
    PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
    FUN_05476c50(awStack_10);
    (**(code **)(**(long **)(uVar6 + 0x108) + 0x188))(*(long **)(uVar6 + 0x108),0);
    (**(code **)(**(long **)(uVar6 + 0x108) + 0x158))(*(long **)(uVar6 + 0x108),1);
    cVar1 = ArtifactUtils::CanLevelUp(*(int *)(uVar6 + 0xe8));
    if (cVar1 == '\0') {
      cVar1 = ArtifactUtils::CanRankUp(*(int *)(uVar6 + 0xe8));
      if (cVar1 == '\0') {
        pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
        *(undefined4 *)(pPVar9 + 0xd4) = 0x68;
        TodStringTranslate(L"[BLESS]");
        PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
      }
      else {
        pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
        *(undefined4 *)(pPVar9 + 0xd4) = 0x67;
        TodStringTranslate(L"[RANK_UP]");
        PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
        FUN_05476c50(awStack_10);
        (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
      }
    }
    else {
      pPVar9 = *(PVZ2UIButton **)(uVar6 + 0x110);
      *(undefined4 *)(pPVar9 + 0xd4) = 0x66;
      TodStringTranslate(L"[UPGRADE]");
      PVZ2UIButton::SetLabelText(pPVar9,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(uVar6 + 0x110) + 0x188))(*(long **)(uVar6 + 0x110),0);
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ArtifactCultivationListView::DrawAll
          (ArtifactCultivationListView *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  Image *pIVar11;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  cVar1 = ArtifactUtils::IsMaxLevel(*(int *)(this + 0xe8));
  if (cVar1 != '\0') {
    iVar2 = FUN_037ad3c8(0xfffffffb);
    iVar3 = FUN_037ad3c8(0x104);
    iVar4 = FUN_037ad3c8(100);
    iVar5 = FUN_037ad3c8(0x46);
    iVar6 = FUN_037ad3c8(0x159);
    iVar7 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar2 + (iVar3 - iVar4) / 2,(iVar5 + iVar6) - iVar4,iVar4,iVar7)
    ;
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0470);
    Draw9SliceImage(param_2,aIStack_18,uVar10);
    TodStringTranslate(L"[ARTIFACT_PREVIEW]");
    iVar2 = FUN_037ad3c8(0xfffffffb);
    iVar3 = FUN_037ad3c8(0x104);
    iVar4 = FUN_037ad3c8(100);
    iVar5 = FUN_037ad3c8(0xf);
    iVar6 = FUN_037ad3c8(0x46);
    iVar7 = FUN_037ad3c8(0x159);
    iVar8 = FUN_037ad3c8(0x55);
    iVar9 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar2 + (iVar3 - iVar4) / 2 + iVar5,(iVar6 + iVar7) - iVar4,iVar8,iVar9);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_2,auStack_30,aIStack_28,uVar10,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0648);
    iVar2 = FUN_037ad3c8(0xfffffffb);
    iVar3 = FUN_037ad3c8(0x104);
    iVar4 = FUN_037ad3c8(100);
    iVar5 = FUN_037ad3c8(10);
    iVar6 = FUN_037ad3c8(0x46);
    iVar7 = FUN_037ad3c8(0x159);
    iVar8 = FUN_037ad3c8(0x1e);
    Sexy::Graphics::DrawImage
              (param_2,pIVar11,(iVar2 + (iVar3 - iVar4) / 2) - iVar5,(iVar6 + iVar7) - iVar4,iVar8,
               iVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCultivationListView::UpdateSkillButtons() */

void __thiscall ArtifactCultivationListView::UpdateSkillButtons(ArtifactCultivationListView *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x140);
    uVar2 = FUN_037ac59c(uVar5,*(undefined8 *)(this + 0x148));
    do {
      if (uVar2 <= uVar4) {
        return;
      }
      puVar1 = (undefined8 *)FUN_037ac5a8(uVar5,uVar4);
      iVar3 = (int)uVar4;
      uVar4 = uVar4 + 1;
    } while ((ArtifactSkillButtonUI *)*puVar1 == (ArtifactSkillButtonUI *)0x0);
    ArtifactSkillButtonUI::SetContent
              ((ArtifactSkillButtonUI *)*puVar1,*(int *)(this + 0xe8),iVar3 + 1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::~ArtifactCultivationListView() */

void __thiscall
ArtifactCultivationListView::~ArtifactCultivationListView(ArtifactCultivationListView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06698120;
  *(undefined ***)(this + 0xd8) = &PTR__ArtifactCultivationListView_06698458;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_066984a0;
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
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_ArtifactCult");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantFamily");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 400);
  FUN_05476c50(this + 0x188);
  std::vector<ArtifactCultivationItem*,std::allocator<ArtifactCultivationItem*>>::~vector
            ((vector<ArtifactCultivationItem*,std::allocator<ArtifactCultivationItem*>> *)
             (this + 0x158));
  std::vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>>::~vector
            ((vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>> *)(this + 0x140)
            );
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArtifactCultivationListView::~ArtifactCultivationListView() */

void __thiscall
ArtifactCultivationListView::~ArtifactCultivationListView(ArtifactCultivationListView *this)

{
  ~ArtifactCultivationListView(this + -0xd8);
  return;
}


/* ArtifactCultivationListView::~ArtifactCultivationListView() */

void __thiscall
ArtifactCultivationListView::~ArtifactCultivationListView(ArtifactCultivationListView *this)

{
  ~ArtifactCultivationListView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactCultivationListView::~ArtifactCultivationListView() */

void __thiscall
ArtifactCultivationListView::~ArtifactCultivationListView(ArtifactCultivationListView *this)

{
  ~ArtifactCultivationListView(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::SortArtifactList() */

void __thiscall ArtifactCultivationListView::SortArtifactList(ArtifactCultivationListView *this)

{
  bool bVar1;
  int iVar2;
  vector *pvVar3;
  ulong uVar4;
  NameMapperBase *this_00;
  string *psVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ulong uVar9;
  RtWeakPtr *pRVar10;
  undefined8 *puVar11;
  RtWeakPtrBase *pRVar12;
  ulong uVar13;
  ArtifactCultivationItem *pAVar14;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  ArtifactUtils::GetArtifactList((vector *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  pvVar3 = (vector *)LocalProfileSaveData::GetFavoriteArtifactList();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,pvVar3);
  for (uVar13 = 0; uVar4 = FUN_037ac624(local_20,local_18), uVar13 < uVar4; uVar13 = uVar13 + 1) {
    this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
    psVar5 = (string *)FUN_037ac630(local_20,uVar13);
    iVar2 = NameMapperBase::GetIdForName(this_00,psVar5);
    ArtifactUtils::GetArtifactPropertyPtr(iVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_58);
    if (bVar1) {
      std::
      vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
      ::push_back((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
                   *)&local_38,(RtWeakPtr *)&local_58);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  }
  uVar13 = 0;
  lVar6 = FUN_037ac638(local_50,local_48);
  if (lVar6 != 0) {
    do {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ac644(local_50,uVar13);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      local_60 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar7,uVar8,lVar6 + 0x10);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
      if (bVar1) {
        pRVar10 = (RtWeakPtr *)FUN_037ac644(local_50,uVar13);
        std::
        vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
        ::push_back((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
                     *)&local_38,pRVar10);
      }
      uVar13 = uVar13 + 1;
      uVar4 = FUN_037ac638(local_50,local_48);
    } while (uVar13 < uVar4);
  }
  uVar7 = *(undefined8 *)(this + 0x158);
  uVar4 = 0;
  uVar13 = FUN_037ac660(uVar7,*(undefined8 *)(this + 0x160));
  if (uVar13 != 0) {
    do {
      uVar8 = local_38;
      uVar9 = FUN_037ac638(local_38,local_30);
      if (uVar4 < uVar9) {
        puVar11 = (undefined8 *)FUN_037ac66c(uVar7,uVar4);
        pAVar14 = (ArtifactCultivationItem *)*puVar11;
        pRVar12 = (RtWeakPtrBase *)FUN_037ac644(uVar8,uVar4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_58,pRVar12);
        ArtifactCultivationItem::InitView(pAVar14,(RtWeakPtr<Sexy::SoundResource> *)&local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        uVar7 = *(undefined8 *)(this + 0x158);
        uVar13 = FUN_037ac660(uVar7,*(undefined8 *)(this + 0x160));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar13);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::
  vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>::
  ~vector((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
           *)&local_38);
  std::
  vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>::
  ~vector((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
           *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactCultivationListView::ShowCultivationWidget(int) */

void __thiscall
ArtifactCultivationListView::ShowCultivationWidget(ArtifactCultivationListView *this,int param_1)

{
  ArtifactCultivationWidget *this_00;
  
  if (*(long *)(this + 0x130) != 0) {
    return;
  }
  this_00 = ::operator_new(0x158);
  ArtifactCultivationWidget::ArtifactCultivationWidget(this_00);
  *(ArtifactCultivationWidget **)(this + 0x130) = this_00;
  ArtifactCultivationWidget::InitView(this_00,param_1);
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


/* ArtifactCultivationListView::ShowBlessWidget(int) */

void __thiscall
ArtifactCultivationListView::ShowBlessWidget(ArtifactCultivationListView *this,int param_1)

{
  ArtifactBlessWidget *this_00;
  
  if (*(long *)(this + 0x138) != 0) {
    return;
  }
  this_00 = ::operator_new(0x178);
  ArtifactBlessWidget::ArtifactBlessWidget(this_00);
  *(ArtifactBlessWidget **)(this + 0x138) = this_00;
  ArtifactBlessWidget::InitView(this_00,param_1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x138));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::ButtonDepress(int) */

void __thiscall
ArtifactCultivationListView::ButtonDepress(ArtifactCultivationListView *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  long lVar7;
  NetworkMgr *pNVar8;
  long *plVar9;
  UIArtifactBoostPreview *this_00;
  char *pcVar10;
  ProfileMgr *pPVar11;
  WorldMapCamera *pWVar12;
  undefined *puVar13;
  GameStateMgr *pGVar14;
  PVZ2UIButton *this_01;
  string asStack_90 [8];
  wstring awStack_88 [8];
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x58:
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_UI_Button_X_Close_Release");
    pWVar12 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(pWVar12,false);
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    break;
  case 0x65:
    ArtifactUtils::GetArtifactPropertyPtr(*(int *)(this + 0xe8));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
    cVar1 = FUN_0547419c(lVar7 + 0xe8);
    if (cVar1 != '\0') goto LAB_037b66bc;
    pPVar11 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(pPVar11);
    iVar2 = FUN_037ac528(*(undefined4 *)(lVar7 + 0x40));
    if (iVar2 == 0x39) {
      LawnApp::KillGameMaskUI(gLawnApp);
    }
    LawnApp::KillArtifactCultivationListView(gLawnApp);
    pWVar12 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(pWVar12,false);
    FUN_037ac7a8(gGameStateMgr + 0x1eb1);
    pGVar14 = gGameStateMgr;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
    lVar7 = lVar7 + 0xe8;
LAB_037b682c:
    GameStateMgr::StartLevel(pGVar14,&DAT_06ab0b80,lVar7,0xffffffff,1,1,0);
    goto LAB_037b678c;
  case 0x66:
  case 0x67:
    ShowCultivationWidget(this,*(int *)(this + 0xe8));
    break;
  case 0x68:
    ShowBlessWidget(this,*(int *)(this + 0xe8));
    break;
  case 0x6b:
    pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
    plVar9 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
    (**(code **)(*plVar9 + 0x210))(plVar9,*(undefined4 *)(this + 0xe8),1);
    break;
  case 0x6c:
    pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
    plVar9 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
    (**(code **)(*plVar9 + 0x210))(plVar9,*(undefined4 *)(this + 0xe8),0);
    break;
  case 0x6e:
    ArtifactUtils::GetArtifactPropertyPtr(*(int *)(this + 0xe8));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
    cVar1 = FUN_0547419c(lVar7 + 0xf0);
    if (cVar1 == '\0') {
      pPVar11 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar7 = ProfileMgr::GetCurrentProfile(pPVar11);
      iVar2 = FUN_037ac528(*(undefined4 *)(lVar7 + 0x40));
      if (iVar2 == 0x39) {
        LawnApp::KillGameMaskUI(gLawnApp);
      }
      LawnApp::KillArtifactCultivationListView(gLawnApp);
      pWVar12 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      WorldMapCamera::SetUseClipViewport(pWVar12,false);
      FUN_037ac7a8(gGameStateMgr + 0x1eb1);
      pGVar14 = gGameStateMgr;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
      lVar7 = lVar7 + 0xf0;
      goto LAB_037b682c;
    }
LAB_037b66bc:
    pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar5 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar5,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[ARTIFACT_WAY_TO_GET]");
      UIMessageBox::SetMessage(pUVar5,awStack_78,awStack_88);
      std::string::string(asStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar6 = (Image *)StringHelper::ToImage(asStack_40,false);
      UIMessageBox::SetBackground(pUVar5,pIVar6);
      std::string::~string(asStack_40);
      nop();
      lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
      thunk_FUN_05477b9c(lVar7 + 0xd8,auStack_80);
      FUN_05476c50(awStack_78);
      FUN_05476c50(auStack_80);
      FUN_05476c50(awStack_88);
    }
LAB_037b678c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
    break;
  case 0x75:
    this_00 = (UIArtifactBoostPreview *)UISingletonDialog<UIArtifactBoostPreview>::ShowDialog();
    UIArtifactBoostPreview::InitView(this_00,*(int *)(this + 0xe8));
    break;
  case 0x76:
    iVar2 = ArtifactMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    cVar1 = LocalProfileSaveData::IsFavoriteArtifact(asStack_90);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)LocalProfileSaveData::GetFavoriteArtifactList();
      uVar4 = FUN_037ac624(*puVar3,puVar3[1]);
      if (uVar4 < 0x14) {
        LocalProfileSaveData::AddFavoriteArtifact(asStack_90);
        this_01 = *(PVZ2UIButton **)(this + 0x120);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab06c8,9);
        puVar13 = &DAT_06ab0b30;
        goto LAB_037b68c0;
      }
      pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar5 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar5,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[FAVORITE_ARTIFACT_MAX]");
        UIMessageBox::SetMessage(pUVar5,awStack_78,awStack_88);
        std::string::string(asStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar6 = (Image *)StringHelper::ToImage(asStack_40,false);
        UIMessageBox::SetBackground(pUVar5,pIVar6);
        std::string::~string(asStack_40);
        nop();
        lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
        thunk_FUN_05477b9c(lVar7 + 0xd8,auStack_80);
        FUN_05476c50(awStack_78);
        FUN_05476c50(auStack_80);
        FUN_05476c50(awStack_88);
      }
    }
    else {
      LocalProfileSaveData::RemoveFavoriteArtifact(asStack_90);
      this_01 = *(PVZ2UIButton **)(this + 0x120);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab0b30,9);
      puVar13 = &DAT_06ab06c8;
LAB_037b68c0:
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,puVar13,9);
      PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      SortArtifactList(this);
    }
    std::string::~string(asStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArtifactCultivationListView::ButtonDepress(int) */

void __thiscall
ArtifactCultivationListView::ButtonDepress(ArtifactCultivationListView *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::OnSelectArtifact(int) */

void __thiscall
ArtifactCultivationListView::OnSelectArtifact(ArtifactCultivationListView *this,int param_1)

{
  ArtifactCultivationListView AVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  RtClass *pRVar5;
  PopAnimRig *pPVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  CurrentArtifactBoostInfo *pCVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined *puVar11;
  ulong uVar12;
  PVZ2UIButton *this_00;
  string *psVar13;
  undefined8 uVar14;
  Sexy aSStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe8) = param_1;
  iVar3 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  Sexy::StringToUpper(aSStack_98,extraout_x1);
  std::operator+("[",asStack_90);
  std::operator+(asStack_88,"]");
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0xf0,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  if (*(long *)(this + 0xf8) != 0) {
    iVar3 = ArtifactMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    Sexy::StringToUpper((Sexy *)asStack_80,extraout_x1_00);
    std::operator+("POPANIM_EFFECTS_ARTIFACTCULT_",(string *)awStack_78);
    GetPAMByName((string *)&local_40);
    std::string::~string((string *)&local_40);
    std::string::~string((string *)awStack_78);
    std::string::~string(asStack_80);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_88);
    pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
    pPVar6 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar4,pRVar5);
    UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0xf8),pPVar6);
    psVar13 = *(string **)(this + 0xf8);
    std::string::string((string *)&local_40,"idle");
    UIWidgetAnim::SetLabel(psVar13);
    std::string::~string((string *)&local_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  }
  if (*(long *)(this + 0x128) != 0) {
    ArtifactDisplayBoard::SetArtifactId((int)*(long *)(this + 0x128));
    ArtifactDisplayBoard::DisplayNexyAction(*(ArtifactDisplayBoard **)(this + 0x128));
  }
  uVar14 = *(undefined8 *)(this + 0x140);
  uVar12 = 0;
  uVar7 = FUN_037ac59c(uVar14,*(undefined8 *)(this + 0x148));
  if (uVar7 != 0) {
    do {
      puVar8 = (undefined8 *)FUN_037ac5a8(uVar14,uVar12);
      if ((ArtifactSkillButtonUI *)*puVar8 != (ArtifactSkillButtonUI *)0x0) {
        ArtifactSkillButtonUI::SetContent((ArtifactSkillButtonUI *)*puVar8,param_1,(int)uVar12 + 1);
        uVar14 = *(undefined8 *)(this + 0x140);
        uVar7 = FUN_037ac59c(uVar14,*(undefined8 *)(this + 0x148));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar7);
  }
  UpdateArtifactButton(this);
  AVar1 = (ArtifactCultivationListView)ArtifactUtils::IsMaxLevel(*(int *)(this + 0xe8));
  this[0x170] = AVar1;
  if (AVar1 != (ArtifactCultivationListView)0x0) {
    *(undefined8 *)(this + 0x178) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    FUN_05476574((string *)&local_40);
    FUN_054766c8(this + 0x188,(string *)&local_40);
    FUN_05476c50((string *)&local_40);
    FUN_05476574((string *)&local_40);
    FUN_054766c8(this + 400,(string *)&local_40);
    FUN_05476c50((string *)&local_40);
    iVar3 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetCurrentBoostInfo(iVar3,SUB41(*(undefined4 *)(this + 0xe8),0));
    uVar14 = local_40;
    lVar9 = FUN_037ac5f0(local_40,local_38);
    if (lVar9 != 0) {
      lVar9 = FUN_037ac5fc(uVar14,0);
      uVar14 = convertTypeToTypeIcon(*(int *)(lVar9 + 0x10));
      *(undefined8 *)(this + 0x178) = uVar14;
      pCVar10 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_40,0);
      convertStringValueByBoostInfo(pCVar10);
      FUN_054766c8(this + 0x188,awStack_78);
      FUN_05476c50(awStack_78);
      uVar14 = local_40;
      uVar12 = FUN_037ac5f0(local_40,local_38);
      if (1 < uVar12) {
        lVar9 = FUN_037ac5fc(uVar14,1);
        uVar14 = convertTypeToTypeIcon(*(int *)(lVar9 + 0x10));
        *(undefined8 *)(this + 0x180) = uVar14;
        pCVar10 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_40,1);
        convertStringValueByBoostInfo(pCVar10);
        FUN_054766c8(this + 400,awStack_78);
        FUN_05476c50(awStack_78);
      }
    }
    std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
              ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
               &local_40);
  }
  cVar2 = LocalProfileSaveData::IsFavoriteArtifact((string *)aSStack_98);
  if (cVar2 == '\0') {
    this_00 = *(PVZ2UIButton **)(this + 0x120);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab0b30,9);
    puVar11 = &DAT_06ab06c8;
  }
  else {
    this_00 = *(PVZ2UIButton **)(this + 0x120);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab06c8,9);
    puVar11 = &DAT_06ab0b30;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,puVar11,9);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  std::string::~string((string *)aSStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::InitView() */

void __thiscall ArtifactCultivationListView::InitView(ArtifactCultivationListView *this)

{
  ButtonListener *pBVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  PrimeText *this_00;
  PVZ2UIButton *pPVar14;
  long lVar15;
  vector *pvVar16;
  ulong uVar17;
  NameMapperBase *pNVar18;
  string *psVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar22;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  ArtifactCultivationItem *pAVar23;
  RtWeakPtrBase *pRVar24;
  UIWidgetAnim *this_03;
  ArtifactDisplayBoard *this_04;
  ArtifactSkillButtonUI *this_05;
  ProfileMgr *this_06;
  PlayerInfo *this_07;
  undefined4 *puVar25;
  TGALogMgr *this_08;
  RtWeakPtr *pRVar26;
  code *pcVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  undefined4 local_254;
  string asStack_250 [8];
  ArtifactCultivationItem *local_248;
  Insets aIStack_240 [16];
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this[0x59] = (ArtifactCultivationListView)0x0;
  lVar15 = gLawnApp;
  iVar4 = FUN_037ad3c8(0x2f8);
  iVar5 = FUN_037ad3c8(0x23a);
  iVar8 = *(int *)(lVar15 + 0xd8);
  iVar6 = FUN_037ad3c8(10);
  (**(code **)(*(long *)this + 0x198))
            (this,(int)(((float)*(int *)(lVar15 + 0xd4) - (float)iVar4) * 0.5),
             (int)((float)iVar6 + ((float)iVar8 - (float)iVar5) * 0.5),iVar4,iVar5);
  FUN_05478178((__normal_iterator *)&local_1e8,&DAT_056f11a8,
               (vector<std::string,std::allocator<std::string>> *)&local_200);
  Sexy::Color::Color((Color *)&local_1b0,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0x58,pBVar1,(wstring *)&local_1e8,(Color *)&local_1b0);
  *(PVZ2UIButton **)(this + 0x100) = pPVar14;
  FUN_05476c50((__normal_iterator *)&local_1e8);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1e8,&DAT_06ab04f8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1b0,&DAT_06ab08b0,2);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)&local_1e8,(PVZ2UIImage *)&local_1b0);
  plVar30 = *(long **)(this + 0x100);
  pcVar27 = *(code **)(*plVar30 + 0x198);
  iVar4 = FUN_037ad3c8(0x2f8);
  lVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab04f8);
  iVar8 = *(int *)(lVar15 + 0x38);
  iVar5 = FUN_037ad3c8(0x14);
  iVar6 = FUN_037ad3c8(10);
  uVar7 = FUN_037ad3c8(0x3e);
  (*pcVar27)(plVar30,(iVar4 - iVar8) + iVar5,-iVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_230);
  ArtifactUtils::GetArtifactList((vector *)&local_230);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_218);
  pvVar16 = (vector *)LocalProfileSaveData::GetFavoriteArtifactList();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_200,pvVar16);
  for (uVar28 = 0; uVar17 = FUN_037ac624(local_200,local_1f8), uVar28 < uVar17; uVar28 = uVar28 + 1)
  {
    pNVar18 = (NameMapperBase *)ArtifactMapper::GetInstance();
    psVar19 = (string *)FUN_037ac630(local_200,uVar28);
    iVar8 = NameMapperBase::GetIdForName(pNVar18,psVar19);
    ArtifactUtils::GetArtifactPropertyPtr(iVar8);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_1b0);
    if (bVar2) {
      std::
      vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
      ::push_back((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
                   *)&local_218,(RtWeakPtr *)&local_1b0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1b0);
  }
  uVar28 = 0;
  lVar15 = FUN_037ac638(local_230,local_228);
  if (lVar15 != 0) {
    do {
      uVar20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_200);
      uVar21 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_200);
      pRVar22 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ac644(local_230,uVar28);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar22);
      local_1e8 = std::
                  find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                            (uVar20,uVar21,lVar15 + 0x10);
      local_1b0 = (ArtifactSkillButtonUI *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_200);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_1e8,(__normal_iterator *)&local_1b0)
      ;
      if (bVar2) {
        pRVar26 = (RtWeakPtr *)FUN_037ac644(local_230,uVar28);
        std::
        vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
        ::push_back((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
                     *)&local_218,pRVar26);
      }
      uVar28 = uVar28 + 1;
      uVar17 = FUN_037ac638(local_230,local_228);
    } while (uVar28 < uVar17);
  }
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  iVar8 = FUN_037ad3c8(0x14);
  iVar4 = FUN_037ad3c8(0xf);
  iVar5 = FUN_037ad3c8(0x1ae);
  iVar6 = FUN_037ad3c8(10);
  iVar9 = FUN_037ad3c8(0x2d5);
  iVar10 = FUN_037ad3c8(0x1e);
  iVar11 = FUN_037ad3c8(0x78);
  Sexy::Insets::Insets(aIStack_240,iVar8 + iVar4,iVar5 + iVar6,iVar9 - iVar10,iVar11 - iVar8);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_240);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  uVar7 = FUN_037ad3c8(0xf);
  iVar8 = *(int *)(this_02 + 0x54);
  uVar28 = 0;
  while( true ) {
    uVar17 = FUN_037ac638(local_218,local_210);
    if (uVar17 <= uVar28) break;
    pAVar23 = ::operator_new(0xf8);
    ArtifactCultivationItem::ArtifactCultivationItem(pAVar23);
    local_248 = pAVar23;
    iVar4 = FUN_037ad3c8(uVar7);
    Sexy::Insets::Insets((Insets *)&local_1b0,(iVar4 + iVar8) * (int)uVar28,0,iVar8,iVar8);
    (**(code **)(*(long *)local_248 + 0x1a0))(local_248,(RtWeakPtr<Sexy::ResourceInfo> *)&local_1b0)
    ;
    (**(code **)(*(long *)this_02 + 0x60))(this_02,local_248);
    pAVar23 = local_248;
    pRVar24 = (RtWeakPtrBase *)FUN_037ac644(local_218,uVar28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_1e8,pRVar24);
    ArtifactCultivationItem::InitView(pAVar23,(__normal_iterator *)&local_1e8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1e8);
    std::vector<ArtifactCultivationItem*,std::allocator<ArtifactCultivationItem*>>::push_back
              ((vector<ArtifactCultivationItem*,std::allocator<ArtifactCultivationItem*>> *)
               (this + 0x158),&local_248);
    uVar28 = uVar28 + 1;
  }
  lVar15 = 4;
  iVar4 = FUN_037ad3c8(uVar7);
  pcVar27 = *(code **)(*(long *)this_01 + 0x60);
  *(int *)(this_02 + 0x50) = (iVar4 + iVar8) * (int)uVar17;
  (*pcVar27)(this_01,this_02);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  this_03 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this_03);
  *(UIWidgetAnim **)(this + 0xf8) = this_03;
  iVar8 = FUN_037ad3c8(0x19);
  uVar7 = FUN_037ad3c8(0xbe);
  uVar12 = FUN_037ad3c8(0x104);
  uVar13 = FUN_037ad3c8(0xd2);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,-iVar8,uVar7,uVar12,uVar13);
  lVar29 = *(long *)(this + 0xf8);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_1b0,0.8,0.8);
  FUN_037ac550(lVar29 + 0xe0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_1b0);
  lVar29 = *(long *)(this + 0xf8);
  pcVar27 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar29 + 0x59) = 0;
  (*pcVar27)(this,lVar29);
  FUN_05478178((__normal_iterator *)&local_1e8,&DAT_056f11a8,(string *)&local_248);
  Sexy::Color::Color((Color *)&local_1b0,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0x75,pBVar1,(wstring *)&local_1e8,(Color *)&local_1b0);
  *(PVZ2UIButton **)(this + 0x118) = pPVar14;
  FUN_05476c50((__normal_iterator *)&local_1e8);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1e8,&DAT_06ab0648,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1b0,&DAT_06ab0648,2);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)&local_1e8,(PVZ2UIImage *)&local_1b0);
  plVar30 = *(long **)(this + 0x118);
  iVar8 = FUN_037ad3c8(0xfffffffb);
  iVar4 = FUN_037ad3c8(0x104);
  iVar5 = FUN_037ad3c8(100);
  iVar6 = FUN_037ad3c8(10);
  iVar9 = FUN_037ad3c8(0x46);
  iVar10 = FUN_037ad3c8(0x159);
  uVar7 = FUN_037ad3c8(0x1e);
  (**(code **)(*plVar30 + 0x198))
            (plVar30,(iVar8 + (iVar4 - iVar5) / 2) - iVar6,(iVar9 + iVar10) - iVar5,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),1);
  (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),0);
  FUN_05478178((__normal_iterator *)&local_1e8,&DAT_056f11a8,(string *)&local_248);
  Sexy::Color::Color((Color *)&local_1b0,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0x6b,pBVar1,(wstring *)&local_1e8,(Color *)&local_1b0);
  *(PVZ2UIButton **)(this + 0x108) = pPVar14;
  FUN_05476c50((__normal_iterator *)&local_1e8);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1e8,&DAT_06ab0548,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1b0,&DAT_06ab0838,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)&local_1e8,(PVZ2UIImage *)&local_1b0);
  plVar30 = *(long **)(this + 0x108);
  iVar8 = FUN_037ad3c8(0xfffffffb);
  iVar4 = FUN_037ad3c8(0x104);
  iVar5 = FUN_037ad3c8(100);
  iVar6 = FUN_037ad3c8(0x46);
  iVar9 = FUN_037ad3c8(0x159);
  iVar10 = FUN_037ad3c8(0x3c);
  uVar7 = FUN_037ad3c8(0x32);
  (**(code **)(*plVar30 + 0x198))
            (plVar30,iVar8 + (iVar4 - iVar5) / 2,(iVar6 + iVar9) - iVar10,iVar5,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
  (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
  FUN_05478178((__normal_iterator *)&local_1e8,&DAT_056f11a8,(string *)&local_248);
  Sexy::Color::Color((Color *)&local_1b0,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,100,pBVar1,(wstring *)&local_1e8,(Color *)&local_1b0);
  *(PVZ2UIButton **)(this + 0x110) = pPVar14;
  FUN_05476c50((__normal_iterator *)&local_1e8);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1e8,&DAT_06ab05c8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1b0,&DAT_06ab05a0,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)&local_1e8,(PVZ2UIImage *)&local_1b0);
  plVar30 = *(long **)(this + 0x110);
  iVar8 = FUN_037ad3c8(0xfa);
  iVar4 = FUN_037ad3c8(0x1ea);
  iVar5 = FUN_037ad3c8(0x80);
  iVar6 = FUN_037ad3c8(0x46);
  iVar9 = FUN_037ad3c8(0x15e);
  iVar10 = FUN_037ad3c8(0x50);
  uVar7 = FUN_037ad3c8(0x6e);
  uVar12 = FUN_037ad3c8(0x3c);
  (**(code **)(*plVar30 + 0x198))
            (plVar30,(iVar8 + iVar4) - iVar5,(iVar6 + iVar9) - iVar10,uVar7,uVar12);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  this_04 = ::operator_new(0x168);
  ArtifactDisplayBoard::ArtifactDisplayBoard(this_04);
  *(ArtifactDisplayBoard **)(this + 0x128) = this_04;
  iVar8 = FUN_037ad3c8(0xfa);
  iVar4 = FUN_037ad3c8(0x37);
  iVar5 = FUN_037ad3b4(200);
  iVar6 = FUN_037ad3c8(0x46);
  iVar9 = FUN_037ad3c8(0x2d);
  iVar10 = FUN_037ad3b4(0xa0);
  uVar7 = FUN_037ad3c8(0x1ea);
  uVar12 = FUN_037ad3c8(0x15e);
  (**(code **)(*(long *)this_04 + 0x198))
            (this_04,(iVar8 + iVar4) - iVar5,(iVar6 + iVar9) - iVar10,uVar7,uVar12);
  uVar20 = *(undefined8 *)(this + 0x128);
  iVar8 = FUN_037ad3c8(0x23);
  iVar4 = FUN_037ad3c8(7);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_1b0,(float)-iVar8,(float)-iVar4);
  ArtifactDisplayBoard::SetDisplayLevelButtonPosOffset((undefined4)local_1b0,local_1b0._4_4_,uVar20)
  ;
  lVar29 = *(long *)(this + 0x128);
  iVar8 = FUN_037ad3c8(200);
  iVar4 = FUN_037ad3c8(0x9d);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_1b0,(float)-iVar8,(float)iVar4);
  FUN_037ac53c((undefined4)local_1b0,local_1b0._4_4_,lVar29 + 0x128);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  iVar8 = FUN_037ad3c8(0xfa);
  iVar4 = FUN_037ad3c8(0x14);
  iVar5 = FUN_037ad3c8(0x46);
  iVar6 = FUN_037ad3c8(0x15e);
  iVar9 = FUN_037ad3c8(0x55);
  iVar10 = FUN_037ad3c8(0xf);
  iVar8 = iVar8 + iVar4;
  do {
    this_05 = ::operator_new(0x118);
    ArtifactSkillButtonUI::ArtifactSkillButtonUI(this_05);
    local_1b0 = this_05;
    (**(code **)(*(long *)this_05 + 0x198))(this_05,iVar8,(iVar5 + iVar6) - iVar9,iVar5,iVar5);
    (**(code **)(*(long *)this + 0x60))(this,local_1b0);
    std::vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>>::push_back
              ((vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>> *)
               (this + 0x140),(ArtifactSkillButtonUI **)&local_1b0);
    lVar15 = lVar15 + -1;
    iVar8 = iVar8 + iVar5 + iVar10;
  } while (lVar15 != 0);
  FUN_05478178((__normal_iterator *)&local_1e8,&DAT_056f11a8,(string *)&local_248);
  Sexy::Color::Color((Color *)&local_1b0,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0x76,pBVar1,(wstring *)&local_1e8,(Color *)&local_1b0);
  *(PVZ2UIButton **)(this + 0x120) = pPVar14;
  FUN_05476c50((__normal_iterator *)&local_1e8);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1e8,&DAT_06ab06c8,9);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1b0,&DAT_06ab0b30,9);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)&local_1e8,(PVZ2UIImage *)&local_1b0);
  plVar30 = *(long **)(this + 0x120);
  iVar8 = FUN_037ad3c8(0xfffffffb);
  iVar4 = FUN_037ad3c8(0x1e);
  iVar5 = FUN_037ad3c8(0x46);
  iVar6 = FUN_037ad3c8(5);
  uVar7 = FUN_037ad3c8(0x28);
  (**(code **)(*plVar30 + 0x198))(plVar30,iVar8 + iVar4,iVar5 + iVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  cVar3 = std::
          vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
          ::empty((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
                   *)&local_230);
  if (cVar3 == '\0') {
    pNVar18 = (NameMapperBase *)ArtifactMapper::GetInstance();
    pRVar22 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ac644(local_230,0);
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar22);
    iVar8 = NameMapperBase::GetIdForName(pNVar18,(string *)(lVar15 + 0x10));
    OnSelectArtifact(this,iVar8);
  }
  this_06 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_07 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_06);
  pvVar16 = (vector *)PlayerInfo::GetUnlockedArtifactList(this_07);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::vector
            ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_1e8,pvVar16);
  uVar7 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar7);
  psVar19 = (string *)&local_248;
  std::string::string((string *)&local_1b0,"");
  FUN_05462980(auStack_178,(RtWeakPtr<Sexy::ResourceInfo> *)&local_1b0);
  std::string::~string((string *)&local_1b0);
  nop();
  for (uVar28 = 0; uVar20 = local_1e8, uVar17 = FUN_037ac64c(local_1e8,local_1e0), uVar28 < uVar17;
      uVar28 = uVar28 + 1) {
    puVar25 = (undefined4 *)FUN_037ac658(uVar20,uVar28);
    uVar20 = FUN_0546065c(auStack_168,*puVar25);
    uVar20 = FUN_054603b8(uVar20,&DAT_05593348);
    lVar15 = FUN_037ac658(local_1e8,uVar28);
    uVar20 = FUN_0546065c(uVar20,*(undefined4 *)(lVar15 + 8));
    uVar20 = FUN_054603b8(uVar20,&DAT_05593348);
    lVar15 = FUN_037ac658(local_1e8,uVar28);
    uVar20 = FUN_0546065c(uVar20,*(undefined4 *)(lVar15 + 4));
    FUN_054603b8(uVar20,&DAT_05594620);
  }
  TGASecretStore::TGASecretStore((TGASecretStore *)&local_1b0);
  std::string::append((string *)&local_1b0,"1",(size_t)psVar19);
  FUN_05462824((string *)&local_248,auStack_178);
  FUN_05474278(auStack_1a8,(string *)&local_248);
  std::string::~string((string *)&local_248);
  std::string::string(asStack_250,"mat_artifact_vial");
  local_254 = PlayerInfo::GetMaterialNum(this_07,asStack_250);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_254);
  FUN_05474278(auStack_1a0,(string *)&local_248);
  std::string::~string((string *)&local_248);
  std::string::~string(asStack_250);
  nop();
  std::string::string(asStack_250,"mat_artifact_cube");
  local_254 = PlayerInfo::GetMaterialNum(this_07,asStack_250);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_254);
  FUN_05474278(auStack_198,(string *)&local_248);
  std::string::~string((string *)&local_248);
  std::string::~string(asStack_250);
  nop();
  this_08 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogArtifactCultivation(this_08,(TGArtifactCultivation *)&local_1b0);
  DropGroupNode::~DropGroupNode((DropGroupNode *)&local_1b0);
  FUN_054617bc(auStack_178);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::~vector
            ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_1e8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_200);
  std::
  vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>::
  ~vector((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
           *)&local_218);
  std::
  vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>::
  ~vector((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
           *)&local_230);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::ArtifactCultivationListView() */

void __thiscall
ArtifactCultivationListView::ArtifactCultivationListView(ArtifactCultivationListView *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06698120;
  *(undefined ***)(this + 0xd8) = &PTR__ArtifactCultivationListView_06698458;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_066984a0;
  FUN_05476574(this + 0xf0);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  FUN_05476574(this + 0x188);
  FUN_05476574(this + 400);
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"LevelCommon");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"LevelCommon2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"AudioCommon");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Artifact");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"Effects_ArtifactCult");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PlantFamily");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectArtifact);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactCultivationListView,void(ArtifactCultivationListView::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectArtifact,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEquipArtifact);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactCultivationListView,void(ArtifactCultivationListView::*)(int)>>
            ((MessageRouter *)puVar1,Message::EquipArtifact,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUnEquipArtifact);
  local_70 = local_20;
  uStack_68 = uStack_18;
  local_60 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactCultivationListView,void(ArtifactCultivationListView::*)(int)>>
            ((MessageRouter *)puVar1,Message::UnEquipArtifact,&local_70);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationListView::TriggerTutorial() */

void __thiscall ArtifactCultivationListView::TriggerTutorial(ArtifactCultivationListView *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_037ac528(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x39) {
    OnSelectArtifact(this,0xea64);
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar3 != (CrazyNPCManager *)0x0) {
      std::string::string(asStack_60,"TUTORIAL_ARTIFACT_THIRD_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<ArtifactCultivationListView,void(ArtifactCultivationListView::*)()>
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
/* ArtifactCultivationListView::Draw(Sexy::Graphics*) */

void __thiscall
ArtifactCultivationListView::Draw(ArtifactCultivationListView *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 local_40;
  undefined4 local_3c;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab05f8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  iVar1 = FUN_037ad3c8(0x14);
  iVar2 = FUN_037ad3c8(0x1ae);
  iVar3 = FUN_037ad3c8(0x2d5);
  iVar4 = FUN_037ad3c8(0x78);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0860);
  iVar1 = FUN_037ad3c8(0xfa);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(0x1ea);
  iVar4 = FUN_037ad3c8(0x15e);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar4);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ad8);
  iVar1 = FUN_037ad3c8(0xfffffffb);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(0x104);
  iVar4 = FUN_037ad3c8(0x159);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar4);
  iVar1 = FUN_037ad3c8(0xfffffffb);
  iVar2 = FUN_037ad3c8(0x28);
  iVar3 = FUN_037ad3c8(0x46);
  iVar4 = FUN_037ad3c8(4);
  iVar5 = FUN_037ad3c8(0x104);
  iVar6 = FUN_037ad3c8(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar2,iVar3 - iVar4,iVar5 - iVar2,iVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar7,aIStack_18,5,1);
  if (this[0x170] == (ArtifactCultivationListView)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0470);
    iVar1 = FUN_037ad3c8(0x26);
    iVar2 = FUN_037ad3c8(0x8d);
    iVar3 = FUN_037ad3c8(0x4b);
    iVar4 = FUN_037ad3c8(0x19);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar4);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0470);
    iVar1 = FUN_037ad3c8(0x8e);
    iVar2 = FUN_037ad3c8(0x8d);
    iVar3 = FUN_037ad3c8(0x4b);
    iVar4 = FUN_037ad3c8(0x19);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar4);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0930);
    iVar1 = FUN_037ad3c8(0x1f);
    iVar2 = FUN_037ad3c8(0x8b);
    iVar3 = FUN_037ad3c8(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar3);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab03c0);
    iVar1 = FUN_037ad3c8(0x84);
    iVar2 = FUN_037ad3c8(0x8b);
    iVar3 = FUN_037ad3c8(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar3);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string((string *)aIStack_18,"mat_artifact_vial");
    local_40 = PlayerInfo::GetMaterialNum(this_01,(string *)aIStack_18);
    std::string::~string((string *)aIStack_18);
    nop();
    std::string::string((string *)aIStack_18,"mat_artifact_cube");
    local_3c = PlayerInfo::GetMaterialNum(this_01,(string *)aIStack_18);
    std::string::~string((string *)aIStack_18);
    nop();
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
    Sexy::ToWString(asStack_38);
    iVar1 = FUN_037ad3c8(0x3f);
    iVar2 = FUN_037ad3c8(0x8e);
    iVar3 = FUN_037ad3c8(0x32);
    iVar4 = FUN_037ad3c8(0x18);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_40);
    Sexy::ToWString(asStack_38);
    iVar1 = FUN_037ad3c8(0xa3);
    iVar2 = FUN_037ad3c8(0x8e);
    iVar3 = FUN_037ad3c8(0x32);
    iVar4 = FUN_037ad3c8(0x18);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
  }
  else {
    if (*(long *)(this + 0x178) != 0) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0470);
      iVar1 = FUN_037ad3c8(0x26);
      iVar2 = FUN_037ad3c8(0x8a);
      iVar3 = FUN_037ad3c8(0xbb);
      iVar4 = FUN_037ad3c8(0x19);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar4);
      iVar1 = FUN_037ad3c8(0x1f);
      iVar2 = FUN_037ad3c8(0x88);
      iVar3 = FUN_037ad3c8(0x1e);
      Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x178),iVar1,iVar2,iVar3,iVar3);
      iVar1 = FUN_037ad3c8(0x3c);
      iVar2 = FUN_037ad3c8(0x8b);
      iVar3 = FUN_037ad3c8(0xa0);
      iVar4 = FUN_037ad3c8(0x18);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,this + 0x188,aIStack_28,uVar7,aIStack_18,5,1);
    }
    if (*(long *)(this + 0x180) != 0) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0470);
      iVar1 = FUN_037ad3c8(0x26);
      iVar2 = FUN_037ad3c8(0xad);
      iVar3 = FUN_037ad3c8(0xbb);
      iVar4 = FUN_037ad3c8(0x19);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2,iVar3,iVar4);
      iVar1 = FUN_037ad3c8(0x1f);
      iVar2 = FUN_037ad3c8(0xab);
      iVar3 = FUN_037ad3c8(0x1e);
      Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x180),iVar1,iVar2,iVar3,iVar3);
      iVar1 = FUN_037ad3c8(0x3c);
      iVar2 = FUN_037ad3c8(0xae);
      iVar3 = FUN_037ad3c8(0xa5);
      iVar4 = FUN_037ad3c8(0x18);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,this + 400,aIStack_28,uVar7,aIStack_18,5,1);
    }
  }
  TodStringTranslate(L"[ARTIFACT_CULTIVATION]");
  iVar1 = FUN_037ad3c8(0x46);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

