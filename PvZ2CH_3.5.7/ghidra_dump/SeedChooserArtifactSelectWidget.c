// Class: SeedChooserArtifactSelectWidget


/* SeedChooserArtifactSelectWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void SeedChooserArtifactSelectWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SeedChooserArtifactSelectWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
SeedChooserArtifactSelectWidget::ScrollTargetReached
          (SeedChooserArtifactSelectWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* SeedChooserArtifactSelectWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void SeedChooserArtifactSelectWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   SeedChooserArtifactSelectWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
SeedChooserArtifactSelectWidget::ScrollTargetInterrupted
          (SeedChooserArtifactSelectWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* SeedChooserArtifactSelectWidget::ButtonDepress(int) */

void __thiscall
SeedChooserArtifactSelectWidget::ButtonDepress(SeedChooserArtifactSelectWidget *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *pNVar2;
  long *plVar3;
  
  if (param_1 == 0x6f) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetCurrentArtifact(this_01);
    if (*(int *)(this + 0xe8) == iVar1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      (**(code **)(*plVar3 + 0x210))(plVar3,*(undefined4 *)(this + 0xe8),0);
    }
    else {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      (**(code **)(*plVar3 + 0x210))(plVar3,*(undefined4 *)(this + 0xe8),1);
    }
  }
  else if ((param_1 == 0x70) && (*(SeedChooser **)(this + 0xf0) != (SeedChooser *)0x0)) {
    SeedChooser::CloseSeedChooserArtifactSelectWidget(*(SeedChooser **)(this + 0xf0));
    return;
  }
  return;
}


/* non-virtual thunk to SeedChooserArtifactSelectWidget::ButtonDepress(int) */

void __thiscall
SeedChooserArtifactSelectWidget::ButtonDepress(SeedChooserArtifactSelectWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserArtifactSelectWidget::OnSelectSeedChooserArtifactSelectWidget(int) */

void __thiscall
SeedChooserArtifactSelectWidget::OnSelectSeedChooserArtifactSelectWidget
          (SeedChooserArtifactSelectWidget *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  wchar_t *pwVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  PVZ2UIButton *this_02;
  RtWeakPtr aRStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  lVar7 = 0;
  *(int *)(this + 0xe8) = param_1;
  lVar3 = FUN_0441b448(uVar8,*(undefined8 *)(this + 0x118));
  if (lVar3 != 0) {
    do {
      plVar4 = (long *)FUN_0441b454(uVar8,lVar7);
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        *(bool *)(lVar6 + 0xd8) = param_1 == *(int *)(lVar6 + 0xe0);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
  }
  ArtifactUtils::GetArtifactPropertyPtr(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::ToWString((string *)(lVar7 + 0x20));
    TodStringTranslate(awStack_18);
    FUN_054766c8(this + 0xf8,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
  }
  if (*(long *)(this + 0x100) != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = PlayerInfo::GetCurrentArtifact(this_01);
    this_02 = *(PVZ2UIButton **)(this + 0x100);
    if (*(int *)(this + 0xe8) == iVar2) {
      pwVar5 = L"[UNEQUIP]";
    }
    else {
      pwVar5 = L"[EQUIP]";
    }
    TodStringTranslate(pwVar5);
    PVZ2UIButton::SetLabelText(this_02,awStack_10);
    FUN_05476c50(awStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooserArtifactSelectWidget::SeedChooserArtifactSelectWidget() */

void __thiscall
SeedChooserArtifactSelectWidget::SeedChooserArtifactSelectWidget
          (SeedChooserArtifactSelectWidget *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_06848d60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06849098;
  *(undefined ***)(this + 0xe0) = &PTR__SeedChooserArtifactSelectWidget_068490e0;
  FUN_05476574(this + 0xf8);
  *(undefined8 *)(this + 0x100) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectSeedChooserArtifactSelectWidget);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SeedChooserArtifactSelectWidget,void(SeedChooserArtifactSelectWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectSeedChooserArtifactSelectWidget,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,EquipArtifactChange);
  local_70 = local_30;
  uStack_68 = uStack_28;
  local_60 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SeedChooserArtifactSelectWidget,void(SeedChooserArtifactSelectWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::UnEquipArtifact,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,EquipArtifactChange);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SeedChooserArtifactSelectWidget,void(SeedChooserArtifactSelectWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::EquipArtifact,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserArtifactSelectWidget::EquipArtifactChange(int) */

void SeedChooserArtifactSelectWidget::EquipArtifactChange(int param_1)

{
  int iVar1;
  ulong uVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  wchar_t *pwVar3;
  PVZ2UIButton *this_01;
  wstring awStack_10 [8];
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(SeedChooser **)(uVar2 + 0xf0) != (SeedChooser *)0x0) {
    SeedChooser::refreshCurrentArtifact(*(SeedChooser **)(uVar2 + 0xf0));
  }
  if (*(long *)(uVar2 + 0x100) != 0) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    iVar1 = PlayerInfo::GetCurrentArtifact(this_00);
    this_01 = *(PVZ2UIButton **)(uVar2 + 0x100);
    if (*(int *)(uVar2 + 0xe8) == iVar1) {
      pwVar3 = L"[UNEQUIP]";
    }
    else {
      pwVar3 = L"[EQUIP]";
    }
    TodStringTranslate(pwVar3);
    PVZ2UIButton::SetLabelText(this_01,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget() */

void __thiscall
SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget
          (SeedChooserArtifactSelectWidget *this)

{
  *(undefined ***)(this + 0xe0) = &PTR__SeedChooserArtifactSelectWidget_068490e0;
  *(undefined ***)this = &PTR_GetClass_06848d60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06849098;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  vector<SeedChooserArtifactSelectWidgetItem*,std::allocator<SeedChooserArtifactSelectWidgetItem*>>
  ::~vector((vector<SeedChooserArtifactSelectWidgetItem*,std::allocator<SeedChooserArtifactSelectWidgetItem*>>
             *)(this + 0x110));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget() */

void __thiscall
SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget
          (SeedChooserArtifactSelectWidget *this)

{
  ~SeedChooserArtifactSelectWidget(this + -0xe0);
  return;
}


/* SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget() */

void __thiscall
SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget
          (SeedChooserArtifactSelectWidget *this)

{
  ~SeedChooserArtifactSelectWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget() */

void __thiscall
SeedChooserArtifactSelectWidget::~SeedChooserArtifactSelectWidget
          (SeedChooserArtifactSelectWidget *this)

{
  ~SeedChooserArtifactSelectWidget(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserArtifactSelectWidget::InitView() */

void __thiscall SeedChooserArtifactSelectWidget::InitView(SeedChooserArtifactSelectWidget *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  vector *pvVar8;
  long lVar9;
  NameMapperBase *this_04;
  string *psVar10;
  long lVar11;
  ulong uVar12;
  ArtifactInfo *pAVar13;
  SeedChooserArtifactSelectWidgetItem *pSVar14;
  PVZ2UIButton *pPVar15;
  undefined8 uVar16;
  int *piVar17;
  code *pcVar18;
  long *plVar19;
  ulong uVar20;
  SeedChooserArtifactSelectWidgetItem *local_f8;
  Insets aIStack_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  Insets aIStack_80 [56];
  ArtifactInfo aAStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (SeedChooserArtifactSelectWidget)0x0;
  uVar20 = 0;
  iVar3 = FUN_0441bf40(0x294);
  iVar4 = FUN_0441bf40(0x1c2);
  (**(code **)(*(long *)this + 0x198))
            (this,*(int *)(gLawnApp + 0xd4) / 2 - iVar3 / 2,
             *(int *)(gLawnApp + 0xd8) / 2 - iVar4 / 2);
  std::
  vector<SeedChooserArtifactSelectWidgetItem*,std::allocator<SeedChooserArtifactSelectWidgetItem*>>
  ::clear((vector<SeedChooserArtifactSelectWidgetItem*,std::allocator<SeedChooserArtifactSelectWidgetItem*>>
           *)(this + 0x110));
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  iVar3 = FUN_0441bf40(0x23);
  iVar4 = FUN_0441bf40(0x50);
  iVar5 = FUN_0441bf40(0x24e);
  iVar6 = FUN_0441bf40(100);
  Sexy::Insets::Insets(aIStack_f0,iVar3,iVar4,iVar5,iVar6);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_f0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  uVar7 = FUN_0441bf40(10);
  iVar3 = FUN_0441bf40(100);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  pvVar8 = (vector *)PlayerInfo::GetUnlockedArtifactList(this_03);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::vector
            ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_e0,pvVar8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0);
  pvVar8 = (vector *)LocalProfileSaveData::GetFavoriteArtifactList();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_98,pvVar8);
  lVar9 = FUN_0441b344(local_98,local_90);
  if (lVar9 != 0) {
    do {
      this_04 = (NameMapperBase *)ArtifactMapper::GetInstance();
      psVar10 = (string *)FUN_0441b3dc(local_98,uVar20);
      iVar4 = NameMapperBase::GetIdForName(this_04,psVar10);
      uVar16 = local_e0;
      lVar11 = FUN_0441b42c(local_e0,local_d8);
      for (lVar9 = 0; lVar9 != lVar11; lVar9 = lVar9 + 1) {
        pAVar13 = (ArtifactInfo *)FUN_0441b438(uVar16,lVar9);
        if (iVar4 == *(int *)pAVar13) {
          std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::push_back
                    ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_c8,pAVar13);
          break;
        }
      }
      uVar20 = uVar20 + 1;
      uVar12 = FUN_0441b344(local_98,local_90);
    } while (uVar20 < uVar12);
  }
  uVar16 = local_e0;
  uVar20 = 0;
  uVar12 = FUN_0441b42c(local_e0,local_d8);
  if (uVar12 != 0) {
    do {
      uVar1 = local_c8;
      lVar11 = FUN_0441b42c(local_c8,local_c0);
      pAVar13 = (ArtifactInfo *)FUN_0441b438(uVar16,uVar20);
      for (lVar9 = 0; lVar9 != lVar11; lVar9 = lVar9 + 1) {
        piVar17 = (int *)FUN_0441b440(uVar1,lVar9);
        if (*piVar17 == *(int *)pAVar13) goto LAB_04429760;
      }
      std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::push_back
                ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_b0,pAVar13);
      uVar16 = local_e0;
      uVar12 = FUN_0441b42c(local_e0,local_d8);
LAB_04429760:
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar12);
  }
  for (uVar20 = 0; uVar16 = local_b0, uVar12 = FUN_0441b42c(local_b0,local_a8), uVar20 < uVar12;
      uVar20 = uVar20 + 1) {
    pAVar13 = (ArtifactInfo *)FUN_0441b440(uVar16,uVar20);
    std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::push_back
              ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_c8,pAVar13);
  }
  uVar20 = 0;
  while( true ) {
    uVar12 = FUN_0441b42c(local_c8,local_c0);
    if (uVar12 <= uVar20) break;
    pSVar14 = ::operator_new(0xf8);
    SeedChooserArtifactSelectWidgetItem::SeedChooserArtifactSelectWidgetItem(pSVar14);
    local_f8 = pSVar14;
    iVar4 = FUN_0441bf40(uVar7);
    Sexy::Insets::Insets(aIStack_80,(iVar4 + iVar3) * (int)uVar20,0,iVar3,iVar3);
    (**(code **)(*(long *)local_f8 + 0x1a0))(local_f8,aIStack_80);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_f8);
    pSVar14 = local_f8;
    pAVar13 = (ArtifactInfo *)FUN_0441b440(local_c8,uVar20);
    ArtifactInfo::ArtifactInfo(aAStack_48,pAVar13);
    SeedChooserArtifactSelectWidgetItem::InitView(pSVar14,aAStack_48);
    ArtifactInfo::~ArtifactInfo(aAStack_48);
    std::
    vector<SeedChooserArtifactSelectWidgetItem*,std::allocator<SeedChooserArtifactSelectWidgetItem*>>
    ::push_back((vector<SeedChooserArtifactSelectWidgetItem*,std::allocator<SeedChooserArtifactSelectWidgetItem*>>
                 *)(this + 0x110),&local_f8);
    uVar20 = uVar20 + 1;
  }
  iVar4 = FUN_0441bf40(uVar7);
  pcVar18 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (iVar4 + iVar3) * (int)uVar12 - iVar4;
  (*pcVar18)(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aAStack_48,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,0x6f,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_80,(Color *)aAStack_48)
  ;
  *(PVZ2UIButton **)(this + 0x100) = pPVar15;
  FUN_05476c50(aIStack_80);
  pPVar15 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_80,&DAT_06b07260,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aAStack_48,&DAT_06b07310,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)aIStack_80,(PVZ2UIImage *)aAStack_48);
  plVar19 = *(long **)(this + 0x100);
  pcVar18 = *(code **)(*plVar19 + 0x1a0);
  iVar3 = FUN_0441bf40(0xdc);
  iVar4 = FUN_0441bf40(0x15e);
  iVar5 = FUN_0441bf40(0x50);
  Sexy::Insets::Insets((Insets *)aAStack_48,iVar3,iVar4,iVar3,iVar5);
  (*pcVar18)(plVar19,aAStack_48);
  plVar19 = *(long **)(this + 0x100);
  pcVar18 = *(code **)(*plVar19 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar18)(plVar19,uVar16);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(aIStack_80,&DAT_056f11a8,&local_f8);
  Sexy::Color::Color((Color *)aAStack_48,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,0x70,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_80,(Color *)aAStack_48)
  ;
  *(PVZ2UIButton **)(this + 0x108) = pPVar15;
  FUN_05476c50(aIStack_80);
  nop();
  pPVar15 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_80,&DAT_06b07740,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aAStack_48,&DAT_06b07388,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)aIStack_80,(PVZ2UIImage *)aAStack_48);
  plVar19 = *(long **)(this + 0x108);
  pcVar18 = *(code **)(*plVar19 + 0x1a0);
  iVar3 = FUN_0441bf40(0x26c);
  iVar4 = FUN_0441bf40(0xfffffff1);
  iVar5 = FUN_0441bf40(0x3c);
  Sexy::Insets::Insets((Insets *)aAStack_48,iVar3,iVar4,iVar5,iVar5);
  (*pcVar18)(plVar19,aAStack_48);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  cVar2 = std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::empty
                    ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_c8);
  if (cVar2 == '\0') {
    piVar17 = (int *)FUN_0441b440(local_c8,0);
    OnSelectSeedChooserArtifactSelectWidget(this,*piVar17);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_98);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::~vector
            ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_b0);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::~vector
            ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_c8);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::~vector
            ((vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)&local_e0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserArtifactSelectWidget::Draw(Sexy::Graphics*) */

void __thiscall
SeedChooserArtifactSelectWidget::Draw(SeedChooserArtifactSelectWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b076a8);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[ARTIFACT_SELECT]");
  iVar1 = FUN_0441bf40(0);
  iVar2 = FUN_0441bf40(0x294);
  iVar3 = FUN_0441bf40(0x41);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,iVar2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_0441bf40(0x19);
  iVar2 = FUN_0441bf40(0x46);
  iVar3 = FUN_0441bf40(0x262);
  iVar4 = FUN_0441bf40(0x78);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b075b0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_0441bf40(0x14);
  iVar2 = FUN_0441bf40(200);
  iVar3 = FUN_0441bf40(0x26c);
  iVar4 = FUN_0441bf40(0x8c);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar5,aIStack_18,5,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

