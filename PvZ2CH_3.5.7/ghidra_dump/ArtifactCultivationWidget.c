// Class: ArtifactCultivationWidget


/* ArtifactCultivationWidget::RequestLevelUp(UIMessageBox*, int) */

void __thiscall
ArtifactCultivationWidget::RequestLevelUp
          (ArtifactCultivationWidget *this,UIMessageBox *param_1,int param_2)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x200))(plVar1,*(undefined4 *)(this + 0xe0));
  return;
}


/* ArtifactCultivationWidget::RequestRankUp(UIMessageBox*, int) */

void __thiscall
ArtifactCultivationWidget::RequestRankUp
          (ArtifactCultivationWidget *this,UIMessageBox *param_1,int param_2)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined4 *)(this + 0xe0));
  return;
}


/* ArtifactCultivationWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ArtifactCultivationWidget::DrawAll
          (ArtifactCultivationWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar5;
  
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar1 = *(int *)(this + 0xe8);
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0520;
  if (((iVar1 != 1) && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab06f0, iVar1 != 2)) &&
     (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0620, iVar1 != 3)) {
    if (iVar1 != 4) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0888;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_037ad3c8(0xaf);
  iVar2 = FUN_037ad3c8(0x50);
  iVar3 = FUN_037ad3c8(0x28);
  iVar4 = FUN_037ad3c8(0x32);
  Sexy::Graphics::DrawImage(param_2,pIVar5,iVar1,iVar2,iVar3,iVar4);
  return;
}


/* ArtifactCultivationWidget::ArtifactCultivationWidget() */

void __thiscall
ArtifactCultivationWidget::ArtifactCultivationWidget(ArtifactCultivationWidget *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xec] = (ArtifactCultivationWidget)0x0;
  this[0xed] = (ArtifactCultivationWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_06697260;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06697588;
  FUN_05476574(this + 0xf0);
  this[0xf8] = (ArtifactCultivationWidget)0x0;
  FUN_05476574(this + 0x100);
  this[0x108] = (ArtifactCultivationWidget)0x0;
  FUN_05476574(this + 0x110);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnArtifactLevelUp);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::ArtifactLevelUp,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnArtifactRankUp);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::ArtifactRankUp,&local_50);
  return;
}


/* ArtifactCultivationWidget::ShowArtifactSkillPreview(int) */

void __thiscall
ArtifactCultivationWidget::ShowArtifactSkillPreview(ArtifactCultivationWidget *this,int param_1)

{
  ArtifactSkillPreview *this_00;
  
  if (*(long *)(this + 0x138) != 0) {
    return;
  }
  this_00 = ::operator_new(0xf8);
  ArtifactSkillPreview::ArtifactSkillPreview(this_00);
  *(ArtifactSkillPreview **)(this + 0x138) = this_00;
  ArtifactSkillPreview::InitView(this_00,param_1);
  PuzzleTip::SetBGImage(*(PuzzleTip **)(this + 0x138),(Image *)this);
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
/* ArtifactCultivationWidget::ButtonDepress(int) */

void __thiscall
ArtifactCultivationWidget::ButtonDepress(ArtifactCultivationWidget *this,int param_1)

{
  ArtifactCultivationListView *this_00;
  UIMessageBox *this_01;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6a) {
    this_00 = (ArtifactCultivationListView *)LawnApp::GetArtifactCultivationListView(gLawnApp);
    ArtifactCultivationListView::UpdateSkillButtons(this_00);
    ArtifactCultivationListView::UpdateArtifactButton(this_00);
    ArtifactCultivationListView::CloseCultivationWidget(this_00);
  }
  else if (param_1 == 0x69) {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_01,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      FUN_05476574(awStack_58);
      if (this[0xec] != (ArtifactCultivationWidget)0x0) {
        TodStringTranslate(L"[ARTIFACT_LEVEL_UP_CONFIRM]");
        FUN_054766c8(awStack_58,asStack_50);
        FUN_05476c50(asStack_50);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,RequestLevelUp);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(this_01,aDStack_38);
      }
      if (this[0xed] != (ArtifactCultivationWidget)0x0) {
        TodStringTranslate(L"[ARTIFACT_RANK_UP_CONFIRM]");
        FUN_054766c8(awStack_58,asStack_50);
        FUN_05476c50(asStack_50);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,RequestRankUp);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(this_01,aDStack_38);
      }
      UIMessageBox::SetMessage(this_01,awStack_58,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_01,pIVar1);
      std::string::~string(asStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonOK(this_01);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else if (param_1 == 0x6d) {
    ShowArtifactSkillPreview(this,*(int *)(this + 0xe0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArtifactCultivationWidget::ButtonDepress(int) */

void __thiscall
ArtifactCultivationWidget::ButtonDepress(ArtifactCultivationWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationWidget::RefreshInfo() */

void __thiscall ArtifactCultivationWidget::RefreshInfo(ArtifactCultivationWidget *this)

{
  ArtifactCultivationWidget AVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar11;
  int extraout_w1;
  int extraout_w1_00;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  PVZ2UIButton *pPVar16;
  int iVar17;
  float fVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  ArtifactInfo aAStack_48 [4];
  int local_44;
  int local_40;
  long local_8;
  
  uVar15 = *(undefined8 *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  uVar14 = 0;
  uVar8 = FUN_037ac59c(uVar15,*(undefined8 *)(this + 0x148));
  if (uVar8 != 0) {
    do {
      plVar9 = (long *)FUN_037ac5a8(uVar15,uVar14);
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x158))(plVar9,0);
        puVar10 = (undefined8 *)FUN_037ac5a8(*(undefined8 *)(this + 0x140),uVar14);
        ArtifactSkillButtonUI::DisableShowArtifactLevel((ArtifactSkillButtonUI *)*puVar10);
        uVar15 = *(undefined8 *)(this + 0x140);
        uVar8 = FUN_037ac59c(uVar15,*(undefined8 *)(this + 0x148));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar8);
  }
  AVar1 = (ArtifactCultivationWidget)ArtifactUtils::CanLevelUp(*(int *)(this + 0xe0));
  this[0xec] = AVar1;
  AVar1 = (ArtifactCultivationWidget)ArtifactUtils::CanRankUp(*(int *)(this + 0xe0));
  this[0xed] = AVar1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetArtifactInfoByID((int)this_01);
  ArtifactUtils::GetArtifactDisplayActionsPropertyPtr
            ((ArtifactUtils *)(ulong)*(uint *)(this + 0xe0),extraout_w1);
  ArtifactUtils::GetArtifactCultivationPropertyPtr
            ((ArtifactUtils *)(ulong)*(uint *)(this + 0xe0),extraout_w1_00);
  lVar12 = **(long **)(this + 0x130);
  *(int *)(this + 0xe4) = local_40;
  pcVar13 = *(code **)(lVar12 + 0x158);
  *(int *)(this + 0xe8) = local_44;
  (*pcVar13)(*(long **)(this + 0x130),0);
  AVar1 = this[0xed];
  if (AVar1 != (ArtifactCultivationWidget)0x0) {
    pPVar16 = *(PVZ2UIButton **)(this + 0x128);
    TodStringTranslate(L"[RANK_UP]");
    PVZ2UIButton::SetLabelText(pPVar16,awStack_50);
    FUN_05476c50(awStack_50);
    uVar15 = *(undefined8 *)(this + 0x140);
    uVar14 = FUN_037ac59c(uVar15,*(undefined8 *)(this + 0x148));
    if ((ulong)(long)local_44 < uVar14) {
      puVar10 = (undefined8 *)FUN_037ac5a8(uVar15);
      plVar9 = (long *)*puVar10;
      (**(code **)(*plVar9 + 0x158))(plVar9,1);
      uVar5 = FUN_037ad3c8(0x172);
      uVar6 = FUN_037ad3c8(0x82);
      (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar5,uVar6);
    }
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uVar14 = FUN_037ac57c(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18));
    if ((ulong)(long)local_44 < uVar14) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      lVar12 = FUN_037ac56c(*(undefined8 *)(lVar12 + 0x10),(long)local_44);
      Sexy::ToWString((string *)(lVar12 + 0x48));
      TodStringTranslate(awStack_58);
      FUN_054766c8(this + 0xf0,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05476c50(awStack_58);
    }
    uVar14 = 0;
    while( true ) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      uVar8 = FUN_037ac5b0(*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
      if (uVar8 <= uVar14) break;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      piVar11 = (int *)FUN_037ac5c4(*(undefined8 *)(lVar12 + 0x28),uVar14);
      if (*piVar11 == local_44) {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar12 = FUN_037ac5c4(*(undefined8 *)(lVar12 + 0x28),uVar14);
        uVar7 = PlayerInfo::GetMaterialNum(this_01,(string *)(lVar12 + 8));
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar12 = FUN_037ac5c4(*(undefined8 *)(lVar12 + 0x28),uVar14);
        Sexy::StrFormat("%d/%d",(string *)awStack_58,(ulong)*(uint *)(lVar12 + 0x10),(ulong)uVar7);
        Sexy::ToWString((string *)awStack_58);
        FUN_054766c8(this + 0x100,awStack_50);
        FUN_05476c50(awStack_50);
        std::string::~string((string *)awStack_58);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar12 = FUN_037ac5c4(*(undefined8 *)(lVar12 + 0x28),uVar14);
        this[0xf8] = (ArtifactCultivationWidget)(*(int *)(lVar12 + 0x10) <= (int)uVar7);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar12 = FUN_037ac5c4(*(undefined8 *)(lVar12 + 0x28),uVar14);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar12 + 0x14));
        Sexy::ToWString((string *)awStack_58);
        FUN_054766c8(this + 0x110,awStack_50);
        FUN_05476c50(awStack_50);
        std::string::~string((string *)awStack_58);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar12 = FUN_037ac5c4(*(undefined8 *)(lVar12 + 0x28),uVar14);
        iVar2 = *(int *)(lVar12 + 0x14);
        iVar3 = PlayerInfo::GetNumCoins(this_01,false);
        if (iVar3 < iVar2) {
          this[0x108] = (ArtifactCultivationWidget)0x0;
        }
        else {
          this[0x108] = (ArtifactCultivationWidget)0x1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
    }
    plVar9 = *(long **)(this + 0x128);
    if (this[0xf8] == (ArtifactCultivationWidget)0x0) {
      (**(code **)(*plVar9 + 0x188))(plVar9,AVar1);
    }
    else {
      (**(code **)(*plVar9 + 0x188))(plVar9,(byte)this[0x108] ^ 1);
    }
  }
  AVar1 = this[0xec];
  if (AVar1 != (ArtifactCultivationWidget)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),1);
    pPVar16 = *(PVZ2UIButton **)(this + 0x128);
    TodStringTranslate(L"[UPGRADE]");
    PVZ2UIButton::SetLabelText(pPVar16,awStack_50);
    FUN_05476c50(awStack_50);
    uVar15 = *(undefined8 *)(this + 0x140);
    uVar14 = FUN_037ac59c(uVar15,*(undefined8 *)(this + 0x148));
    if ((ulong)(long)local_44 < uVar14) {
      if (0 < local_44) {
        lVar12 = 0;
        while( true ) {
          fVar18 = (float)local_44;
          iVar17 = (int)lVar12;
          puVar10 = (undefined8 *)FUN_037ac5a8(uVar15,lVar12);
          plVar9 = (long *)*puVar10;
          (**(code **)(*plVar9 + 0x158))(plVar9,1);
          iVar2 = FUN_037ad3c8(0xf0);
          iVar3 = FUN_037ad3c8(0x1cc);
          iVar4 = FUN_037ad3c8(0x1e);
          uVar5 = FUN_037ad3c8(0x75);
          (**(code **)(*plVar9 + 0x1a8))
                    (plVar9,(int)(((float)iVar2 - (float)iVar4) +
                                 (float)iVar3 * (((float)iVar17 + 1.0) / (fVar18 + 1.0))),uVar5);
          ArtifactSkillButtonUI::ShowArtifactLevel((int)plVar9);
          lVar12 = lVar12 + 1;
          if (local_44 <= iVar17 + 1) break;
          uVar15 = *(undefined8 *)(this + 0x140);
        }
      }
      uVar14 = 0;
      while( true ) {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        uVar8 = FUN_037ac5d0(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18));
        if (uVar8 <= uVar14) break;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        piVar11 = (int *)FUN_037ac5e4(*(undefined8 *)(lVar12 + 0x10),uVar14);
        if (*piVar11 == local_40) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          lVar12 = FUN_037ac5e4(*(undefined8 *)(lVar12 + 0x10),uVar14);
          uVar7 = PlayerInfo::GetMaterialNum(this_01,(string *)(lVar12 + 8));
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          lVar12 = FUN_037ac5e4(*(undefined8 *)(lVar12 + 0x10),uVar14);
          Sexy::StrFormat("%d/%d",(string *)awStack_58,(ulong)*(uint *)(lVar12 + 0x10),(ulong)uVar7)
          ;
          Sexy::ToWString((string *)awStack_58);
          FUN_054766c8(this + 0x100,awStack_50);
          FUN_05476c50(awStack_50);
          std::string::~string((string *)awStack_58);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          lVar12 = FUN_037ac5e4(*(undefined8 *)(lVar12 + 0x10),uVar14);
          if ((int)uVar7 < *(int *)(lVar12 + 0x10)) {
            this[0xf8] = (ArtifactCultivationWidget)0x0;
          }
          else {
            this[0xf8] = (ArtifactCultivationWidget)0x1;
            AVar1 = (ArtifactCultivationWidget)0x0;
          }
          goto LAB_037b0f3c;
        }
        uVar14 = uVar14 + 1;
      }
      AVar1 = (ArtifactCultivationWidget)((byte)this[0xf8] ^ 1);
LAB_037b0f3c:
      (**(code **)(**(long **)(this + 0x128) + 0x188))(*(long **)(this + 0x128),AVar1);
    }
    if (this[0xec] != (ArtifactCultivationWidget)0x0) goto LAB_037b0d04;
  }
  if (this[0xed] == (ArtifactCultivationWidget)0x0) {
    pPVar16 = *(PVZ2UIButton **)(this + 0x128);
    TodStringTranslate(L"[RANK_UP_MAX]");
    PVZ2UIButton::SetLabelText(pPVar16,awStack_50);
    FUN_05476c50(awStack_50);
    (**(code **)(**(long **)(this + 0x128) + 0x188))(*(long **)(this + 0x128),1);
  }
LAB_037b0d04:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  ArtifactInfo::~ArtifactInfo(aAStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationWidget::OnArtifactLevelUp(bool, int) */

void ArtifactCultivationWidget::OnArtifactLevelUp(bool param_1,int param_2)

{
  ArtifactCultivationWidget *this;
  UIWidgetAnim *pUVar1;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this = (ArtifactCultivationWidget *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  RefreshInfo(this);
  pUVar1 = *(UIWidgetAnim **)(this + 0x118);
  std::string::string(asStack_30,"levelup");
  FUN_037ad244(afStack_28,this);
  UIWidgetAnim::SetLabel(pUVar1,asStack_30,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationWidget::OnArtifactRankUp(bool, int) */

void ArtifactCultivationWidget::OnArtifactRankUp(bool param_1,int param_2)

{
  ArtifactCultivationWidget *this;
  UIWidgetAnim *pUVar1;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this = (ArtifactCultivationWidget *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  RefreshInfo(this);
  pUVar1 = *(UIWidgetAnim **)(this + 0x118);
  std::string::string(asStack_30,"levelup");
  FUN_037ad2a0(afStack_28,this);
  UIWidgetAnim::SetLabel(pUVar1,asStack_30,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCultivationWidget::~ArtifactCultivationWidget() */

void __thiscall
ArtifactCultivationWidget::~ArtifactCultivationWidget(ArtifactCultivationWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06697588;
  *(undefined ***)this = &PTR_GetClass_06697260;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>>::~vector
            ((vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>> *)(this + 0x140)
            );
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArtifactCultivationWidget::~ArtifactCultivationWidget() */

void __thiscall
ArtifactCultivationWidget::~ArtifactCultivationWidget(ArtifactCultivationWidget *this)

{
  ~ArtifactCultivationWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationWidget::InitView(int) */

void __thiscall ArtifactCultivationWidget::InitView(ArtifactCultivationWidget *this,int param_1)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UIWidgetAnim *this_00;
  ResourceInfo *pRVar9;
  RtClass *pRVar10;
  PopAnimRig *pPVar11;
  PVZ2UIButton *pPVar12;
  ArtifactSkillButtonUI *this_01;
  long lVar13;
  ulong uVar14;
  int extraout_w1;
  string *extraout_x1;
  long *plVar15;
  ulong uVar16;
  string *psVar17;
  RtWeakPtr aRStack_88 [8];
  Sexy aSStack_80 [8];
  string asStack_78 [56];
  ArtifactSkillButtonUI *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  this[0x59] = (ArtifactCultivationWidget)0x0;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar2 = FUN_037ad3c8(0x2d0);
  iVar3 = FUN_037ad3c8(400);
  lVar13 = gLawnApp;
  iVar4 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(lVar13 + 0xd4) - iVar2) / 2,
             (*(int *)(lVar13 + 0xd8) - iVar3) / 2 - iVar4,iVar2,iVar3);
  this_00 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this_00);
  *(UIWidgetAnim **)(this + 0x118) = this_00;
  iVar2 = FUN_037ad3c8(0x50);
  uVar5 = FUN_037ad3c8(0x32);
  uVar6 = FUN_037ad3c8(0x15e);
  uVar7 = FUN_037ad3c8(300);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,-iVar2,uVar5,uVar6,uVar7);
  *(undefined1 *)(*(long *)(this + 0x118) + 0x59) = 0;
  iVar2 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  Sexy::StringToUpper(aSStack_80,extraout_x1);
  std::operator+("POPANIM_EFFECTS_ARTIFACTCULT_",asStack_78);
  GetPAMByName((string *)local_40);
  std::string::~string((string *)local_40);
  std::string::~string(asStack_78);
  std::string::~string((string *)aSStack_80);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_88);
  pRVar10 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar11 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar9,pRVar10);
  UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0x118),pPVar11);
  psVar17 = *(string **)(this + 0x118);
  std::string::string((string *)local_40,"idle");
  UIWidgetAnim::SetLabel(psVar17);
  std::string::~string((string *)local_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x69,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar12;
  FUN_05476c50(asStack_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab0548,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab0838,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar15 = *(long **)(this + 0x128);
  uVar5 = FUN_037ad3c8(0x11d);
  uVar6 = FUN_037ad3c8(0x13e);
  uVar7 = FUN_037ad3c8(0x96);
  uVar8 = FUN_037ad3c8(0x3c);
  (**(code **)(*plVar15 + 0x198))(plVar15,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x6a,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar12;
  FUN_05476c50(asStack_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab04f8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab08b0,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar15 = *(long **)(this + 0x120);
  uVar5 = FUN_037ad3c8(0x2a6);
  uVar6 = FUN_037ad3c8(0xffffffec);
  uVar7 = FUN_037ad3c8(0x42);
  (**(code **)(*plVar15 + 0x198))(plVar15,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x6d,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar12;
  FUN_05476c50(asStack_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab0648,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab0648,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar15 = *(long **)(this + 0x130);
  uVar5 = FUN_037ad3c8(0x280);
  uVar6 = FUN_037ad3c8(100);
  uVar7 = FUN_037ad3c8(0x23);
  (**(code **)(*plVar15 + 0x198))(plVar15,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  ArtifactUtils::GetArtifactDisplayActionsPropertyPtr
            ((ArtifactUtils *)(ulong)(uint)param_1,extraout_w1);
  uVar16 = 0;
  while( true ) {
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    uVar14 = FUN_037ac57c(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18));
    if (uVar14 <= uVar16) break;
    this_01 = ::operator_new(0x118);
    ArtifactSkillButtonUI::ArtifactSkillButtonUI(this_01);
    local_40[0] = this_01;
    uVar5 = FUN_037ad3c8(0x3c);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,uVar5,uVar5);
    ArtifactSkillButtonUI::SetContent(local_40[0],param_1,(int)(uVar16 + 1));
    AccessoryContent::SetSelected((AccessoryContent *)local_40[0],false);
    (**(code **)(*(long *)this + 0x60))(this,local_40[0]);
    (**(code **)(*(long *)local_40[0] + 0x158))(local_40[0],0);
    std::vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>>::push_back
              ((vector<ArtifactSkillButtonUI*,std::allocator<ArtifactSkillButtonUI*>> *)
               (this + 0x140),local_40);
    uVar16 = uVar16 + 1;
  }
  RefreshInfo(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationWidget::Draw(Sexy::Graphics*) */

void __thiscall ArtifactCultivationWidget::Draw(ArtifactCultivationWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab05f8);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[ARTIFACT_CULTIVATION]");
  iVar1 = FUN_037ad3c8(10);
  iVar2 = FUN_037ad3c8(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab06a0);
  iVar1 = FUN_037ad3c8(0x19);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(200);
  iVar4 = FUN_037ad3c8(0xf0);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_037ad3c8(0xaa);
  iVar2 = FUN_037ad3c8(0x109);
  iVar3 = FUN_037ad3c8(0x32);
  iVar4 = FUN_037ad3c8(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  iVar1 = FUN_037ad3c8(0xf0);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(0x1cc);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar1);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0968);
  iVar1 = FUN_037ad3c8(0xff);
  iVar2 = FUN_037ad3c8(0x5a);
  iVar3 = FUN_037ad3c8(0x1b0);
  iVar4 = FUN_037ad3c8(9);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  if (this[0xed] != (ArtifactCultivationWidget)0x0) {
    TodStringTranslate(L"[ARTIFACT_SKILL_GET]");
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(0x46);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_28,0x26,0x65,7);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,5,1);
    FUN_05476c50(auStack_30);
    iVar1 = FUN_037ad3c8(0x1bc);
    iVar2 = FUN_037ad3c8(0x91);
    iVar3 = FUN_037ad3c8(0x78);
    iVar4 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    WriteWordInRect(param_1,this + 0xf0,aIStack_18,uVar5,aIStack_28,5,1);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0968);
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(0xd7);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(9);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
    TodStringTranslate(L"[ARTIFACT_SKILL_RANK_UP_CONSUME]");
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(0xc3);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_28,0x26,0x65,7);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,5,1);
    FUN_05476c50(auStack_30);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0930);
    iVar1 = FUN_037ad3c8(0x11d);
    iVar2 = FUN_037ad3c8(0xf4);
    iVar3 = FUN_037ad3c8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
    iVar1 = FUN_037ad3c8(0x15e);
    iVar2 = FUN_037ad3c8(0xff);
    iVar3 = FUN_037ad3c8(0x73);
    iVar4 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    if (this[0xf8] == (ArtifactCultivationWidget)0x0) {
      Sexy::Color::Color((Color *)aIStack_28,2);
    }
    else {
      Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    }
    WriteWordInRect(param_1,this + 0x100,aIStack_18,uVar5,aIStack_28,3,1);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0b00);
    iVar1 = FUN_037ad3c8(0x1ef);
    iVar2 = FUN_037ad3c8(0xf4);
    iVar3 = FUN_037ad3c8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
    iVar1 = FUN_037ad3c8(0x230);
    iVar2 = FUN_037ad3c8(0xff);
    iVar3 = FUN_037ad3c8(0x73);
    iVar4 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    if (this[0x108] == (ArtifactCultivationWidget)0x0) {
      Sexy::Color::Color((Color *)aIStack_28,2);
    }
    else {
      Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    }
    WriteWordInRect(param_1,this + 0x110,aIStack_18,uVar5,aIStack_28,3,1);
  }
  if (this[0xec] != (ArtifactCultivationWidget)0x0) {
    TodStringTranslate(L"[ARTIFACT_SKILL_LEVEL_UP]");
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(0x46);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_28,0x26,0x65,7);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,5,1);
    FUN_05476c50(auStack_30);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0968);
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(0xdc);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(9);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
    TodStringTranslate(L"[ARTIFACT_SKILL_LEVEL_UP_CONSUME]");
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(200);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_28,0x26,0x65,7);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,5,1);
    FUN_05476c50(auStack_30);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab03c0);
    iVar1 = FUN_037ad3c8(0x18b);
    iVar2 = FUN_037ad3c8(0xf8);
    iVar3 = FUN_037ad3c8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
    iVar1 = FUN_037ad3c8(0x1cc);
    iVar2 = FUN_037ad3c8(0x106);
    iVar3 = FUN_037ad3c8(0x73);
    iVar4 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    if (this[0xf8] == (ArtifactCultivationWidget)0x0) {
      Sexy::Color::Color((Color *)aIStack_28,2);
    }
    else {
      Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    }
    WriteWordInRect(param_1,this + 0x100,aIStack_18,uVar5,aIStack_28,3,1);
    if (this[0xec] != (ArtifactCultivationWidget)0x0) goto LAB_037b8564;
  }
  if (this[0xed] == (ArtifactCultivationWidget)0x0) {
    TodStringTranslate(L"[RANK_UP_MAX]");
    iVar1 = FUN_037ad3c8(0xff);
    iVar2 = FUN_037ad3c8(0x46);
    iVar3 = FUN_037ad3c8(0x1b0);
    iVar4 = FUN_037ad3c8(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_28,0x26,0x65,7);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aIStack_28,5,1);
    FUN_05476c50(auStack_30);
  }
LAB_037b8564:
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

