// Class: PlantAvatarPackageView


/* PlantAvatarPackageView::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantAvatarPackageView::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAvatarPackageView::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantAvatarPackageView::ScrollTargetReached(PlantAvatarPackageView *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantAvatarPackageView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantAvatarPackageView::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAvatarPackageView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantAvatarPackageView::ScrollTargetInterrupted(PlantAvatarPackageView *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::SetButtonState(int) */

void __thiscall PlantAvatarPackageView::SetButtonState(PlantAvatarPackageView *this,int param_1)

{
  wchar_t *pwVar1;
  long *plVar2;
  PVZ2UIButton *pPVar3;
  wstring awStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x110) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
    pwVar1 = L"[NEW_AVATAR_WEAR]";
LAB_043a1d70:
    TodStringTranslate(pwVar1);
    PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
    FUN_05476c50(awStack_10);
    plVar2 = *(long **)(this + 0xf0);
  }
  else {
    if (param_1 == 2) {
      pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
      pwVar1 = L"[NEW_AVATAR_TAKE_OFF]";
      goto LAB_043a1d70;
    }
    if (param_1 != 3) goto LAB_043a1ce4;
    pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
    TodStringTranslate(L"[NEW_AVATAR_EXCHANGE]");
    PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
    FUN_05476c50(awStack_10);
    plVar2 = *(long **)(this + 0xf0);
    if (*(char *)(*(long *)(this + 0x108) + 0x113) == '\0') {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
      goto LAB_043a1ce4;
    }
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,0);
LAB_043a1ce4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarPackageView::onSelectAvatar(PlantAvatarPackageItem*) */

void __thiscall
PlantAvatarPackageView::onSelectAvatar(PlantAvatarPackageView *this,PlantAvatarPackageItem *param_1)

{
  PlantAvatarPackageItem PVar1;
  
  PVar1 = param_1[0x111];
  *(PlantAvatarPackageItem **)(this + 0x108) = param_1;
  if (PVar1 == (PlantAvatarPackageItem)0x0) {
    SetButtonState(this,3);
    thunk_FUN_05477b9c(this + 0x118,param_1 + 0x118);
    thunk_FUN_05477b9c(this + 0x120,param_1 + 0x120);
    return;
  }
  if (param_1[0x112] == (PlantAvatarPackageItem)0x0) {
    SetButtonState(this,1);
    thunk_FUN_05477b9c(this + 0x118,param_1 + 0x118);
    thunk_FUN_05477b9c(this + 0x120,param_1 + 0x120);
    return;
  }
  SetButtonState(this,2);
  thunk_FUN_05477b9c(this + 0x118,param_1 + 0x118);
  thunk_FUN_05477b9c(this + 0x120,param_1 + 0x120);
  return;
}


/* PlantAvatarPackageView::OnNarrationSystemFinish() */

void PlantAvatarPackageView::OnNarrationSystemFinish(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::CompleteTutorial(pPVar1,0x36);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::OnNotifyExchangeFinish() */

void __thiscall PlantAvatarPackageView::OnNotifyExchangeFinish(PlantAvatarPackageView *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_043a1318(*(undefined4 *)(lVar2 + 0x40));
  if ((iVar1 == 0x18) && (lVar2 = *(long *)(this + 0xf0), *(char *)(lVar2 + 0x6e) == '\0')) {
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar2,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::ShowGachaIntro2Mask() */

void __thiscall PlantAvatarPackageView::ShowGachaIntro2Mask(PlantAvatarPackageView *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_043a1318(*(undefined4 *)(lVar2 + 0x40));
  if ((iVar1 == 0x18) && (lVar2 = *(long *)(this + 0xf0), *(char *)(lVar2 + 0x6e) == '\0')) {
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar2,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::InitDialog() */

void __thiscall PlantAvatarPackageView::InitDialog(PlantAvatarPackageView *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  Widget *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  PlantAvatarPackageItem *this_03;
  PlantAvatarPackageItem *this_04;
  RtWeakPtrBase *pRVar12;
  ulong uVar13;
  PVZ2UIButton *pPVar14;
  undefined8 uVar15;
  ProfileMgr *this_05;
  PlayerInfo *pPVar16;
  WorldMap *this_06;
  GachaMgr *pGVar17;
  CrazyNPCManager *pCVar18;
  code *pcVar19;
  ulong uVar20;
  long *plVar21;
  string asStack_e8 [8];
  string asStack_e0 [8];
  Insets aIStack_d8 [8];
  int local_d0;
  int local_cc;
  Insets aIStack_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  Delegate0 aDStack_a8 [48];
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (PlantAvatarPackageView)0x0;
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_043a19d8(0x140);
  iVar10 = *(int *)(pLVar1 + 0xd4);
  iVar3 = FUN_043a19d8(0xdc);
  iVar8 = *(int *)(pLVar1 + 0xd8);
  iVar4 = FUN_043a19d8(0x280);
  iVar5 = FUN_043a19d8(0x1cc);
  Sexy::Insets::Insets(aIStack_d8,iVar10 / 2 - iVar2,iVar8 / 2 - iVar3,iVar4,iVar5);
  (**(code **)(*(long *)this + 0x1a0))(this,aIStack_d8);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  FUN_05475d88(asStack_e8,lVar11 + 0x80);
  NewAvatar::GetListByPlantName(asStack_e8,(vector *)(this + 0x128));
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  uVar6 = FUN_043a19d8(0x3c);
  uVar7 = FUN_043a19d8(0x5a);
  iVar8 = FUN_043a19d8(0x78);
  iVar10 = *(int *)(this + 0x50);
  uVar9 = FUN_043a19d8(0x82);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar6,uVar7,iVar10 - iVar8,uVar9);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  iVar10 = FUN_043a19d8(0);
  Sexy::Insets::Insets(aIStack_c8,iVar10,iVar10,*(int *)(this_00 + 0x50),*(int *)(this_00 + 0x54));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_c8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_c8);
  iVar10 = FUN_043a19d8(0);
  iVar8 = FUN_043a19d8(0x82);
  this_03 = ::operator_new(0x130);
  PlantAvatarPackageItem::PlantAvatarPackageItem(this_03);
  Sexy::Insets::Insets((Insets *)&local_b8,iVar10,iVar10,iVar8,iVar8);
  (**(code **)(*(long *)this_03 + 0x1a0))(this_03,(Insets *)&local_b8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(this + 0xe8));
  PlantAvatarPackageItem::setOldInfo(this_03,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  this_04 = this_03;
  uVar20 = 0;
  while( true ) {
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_04);
    uVar13 = FUN_043a1378(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130));
    if (uVar13 <= uVar20) break;
    this_04 = ::operator_new(0x130);
    PlantAvatarPackageItem::PlantAvatarPackageItem(this_04);
    iVar2 = FUN_043a19d8(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar10 + (iVar2 + iVar8) * (int)(uVar20 + 1),iVar10,iVar8,iVar8);
    local_b8 = local_40;
    uStack_b0 = uStack_38;
    (**(code **)(*(long *)this_04 + 0x1a0))(this_04,(Insets *)&local_b8);
    pRVar12 = (RtWeakPtrBase *)FUN_043a1384(*(undefined8 *)(this + 0x128),uVar20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar12);
    PlantAvatarPackageItem::setNewInfo(this_04,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    uVar20 = uVar20 + 1;
  }
  iVar2 = FUN_043a19d8(0x14);
  pcVar19 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_02 + 0x50) = iVar2 + iVar8 + (iVar2 + iVar8) * (int)uVar13 + iVar10;
  (*pcVar19)(this_00,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_e0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,7000,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar14;
  FUN_05476c50(asStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b00bc0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00d40,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  plVar21 = *(long **)(this + 0xf0);
  iVar8 = FUN_043a19d8(0x4b);
  iVar10 = local_d0 / 2;
  iVar2 = FUN_043a19d8(0x4d);
  uVar6 = FUN_043a19d8(0x96);
  uVar7 = FUN_043a19d8(0x3c);
  (**(code **)(*plVar21 + 0x198))(plVar21,iVar10 - iVar8,local_cc - iVar2,uVar6,uVar7);
  pPVar14 = *(PVZ2UIButton **)(this + 0xf0);
  TodStringTranslate(L"[PLANT_INFO_RETURN]");
  PVZ2UIButton::SetLabelText(pPVar14,(wstring *)&local_40);
  FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
  plVar21 = *(long **)(this + 0xf0);
  pcVar19 = *(code **)(*plVar21 + 800);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  (*pcVar19)(plVar21,uVar15);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_e0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0x1b59,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40
            );
  *(PVZ2UIButton **)(this + 0xf8) = pPVar14;
  FUN_05476c50(asStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b018e8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b00ce8,2);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  plVar21 = *(long **)(this + 0xf8);
  iVar10 = FUN_043a19d8(0x23);
  uVar6 = FUN_043a19d8(0x2d);
  (**(code **)(*plVar21 + 0x198))(plVar21,local_d0 - iVar10,iVar10,uVar6,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  this_05 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_05);
  iVar10 = FUN_043a1318(*(undefined4 *)(pPVar16 + 0x40));
  if (iVar10 == 0x36) {
    LawnApp::KillGameMaskUI(gLawnApp);
    pCVar18 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_e0,"NEWAVATAR_FINISH_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnNarrationSystemFinish);
    Sexy::Delegate0::Delegate0<PlantAvatarPackageView,void(PlantAvatarPackageView::*)()>
              (aDStack_a8,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
    std::string::string(asStack_78,"");
    CrazyNPCManager::StartNarrativeID(pCVar18,asStack_e0,aDStack_a8,asStack_78);
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_e0);
    nop();
  }
  PlantAvatarPackageItem::selectAvatar(this_03);
  iVar10 = FUN_043a1318(*(undefined4 *)(pPVar16 + 0x40));
  if ((iVar10 == 0x18) && (*(char *)(*(long *)(this + 0xf0) + 0x6e) != '\0')) {
    LawnApp::KillGameMaskUI(gLawnApp);
    this_06 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    if (this_06 != (WorldMap *)0x0) {
      WorldMap::ForceTutorialToFinish(this_06);
    }
    PlayerInfo::CompleteTutorial(pPVar16,0x18);
    pGVar17 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::SetTutorialStep(pGVar17,0);
    lVar11 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    FUN_043a1444(lVar11 + 0x10);
  }
  std::string::~string(asStack_e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::PlantAvatarPackageView(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
PlantAvatarPackageView::PlantAvatarPackageView(PlantAvatarPackageView *this,RtWeakPtr *param_2)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06840e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06841138;
  *(undefined ***)(this + 0xe0) = &PTR__PlantAvatarPackageView_06841180;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSelectAvatar);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<PlantAvatarPackageItem*,Sexy::CBMemberTranslatorX<PlantAvatarPackageView,void(PlantAvatarPackageView::*)(PlantAvatarPackageItem*)>>
            ((MessageRouter *)puVar1,Message::SelectAvatarItem,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyExchangeFinish);
  Sexy::Delegate0::Delegate0<PlantAvatarPackageView,void(PlantAvatarPackageView::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyExchangeFinish,aDStack_38);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_2);
  *(undefined8 *)(this + 0x108) = 0;
  InitDialog(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarPackageView::~PlantAvatarPackageView() */

void __thiscall PlantAvatarPackageView::~PlantAvatarPackageView(PlantAvatarPackageView *this)

{
  *(undefined ***)this = &PTR_GetClass_06840e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06841138;
  *(undefined ***)(this + 0xe0) = &PTR__PlantAvatarPackageView_06841180;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>> *
          )(this + 0x128));
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantAvatarPackageView::~PlantAvatarPackageView() */

void __thiscall PlantAvatarPackageView::~PlantAvatarPackageView(PlantAvatarPackageView *this)

{
  ~PlantAvatarPackageView(this + -0xe0);
  return;
}


/* PlantAvatarPackageView::~PlantAvatarPackageView() */

void __thiscall PlantAvatarPackageView::~PlantAvatarPackageView(PlantAvatarPackageView *this)

{
  ~PlantAvatarPackageView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAvatarPackageView::~PlantAvatarPackageView() */

void __thiscall PlantAvatarPackageView::~PlantAvatarPackageView(PlantAvatarPackageView *this)

{
  ~PlantAvatarPackageView(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::ButtonDepress(int) */

void __thiscall PlantAvatarPackageView::ButtonDepress(PlantAvatarPackageView *this,int param_1)

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
  if (param_1 == 7000) {
    iVar1 = *(int *)(this + 0x110);
    if (iVar1 == 1) {
      if (*(PlantAvatarPackageItem **)(this + 0x108) != (PlantAvatarPackageItem *)0x0) {
        PlantAvatarPackageItem::EquipAvatar(*(PlantAvatarPackageItem **)(this + 0x108));
        iVar1 = FUN_043a1318(*(undefined4 *)(lVar2 + 0x40));
        if (iVar1 == 0x18) {
          uVar3 = *(undefined8 *)(this + 0xf8);
          std::string::string(asStack_20,"");
          Sexy::Insets::Insets(aIStack_18);
          GameMaskUI::ShowMask(uVar3,1,asStack_20,aIStack_18);
          std::string::~string(asStack_20);
          nop();
        }
      }
    }
    else if (iVar1 == 2) {
      if (*(PlantAvatarPackageItem **)(this + 0x108) != (PlantAvatarPackageItem *)0x0) {
        PlantAvatarPackageItem::UnEquipAvatar(*(PlantAvatarPackageItem **)(this + 0x108));
      }
    }
    else if ((iVar1 == 3) &&
            (*(PlantAvatarPackageItem **)(this + 0x108) != (PlantAvatarPackageItem *)0x0)) {
      PlantAvatarPackageItem::ExchangeAvatar(*(PlantAvatarPackageItem **)(this + 0x108));
    }
  }
  else if (param_1 == 0x1b59) {
    LawnApp::KillPlantAvatarPackageView(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantAvatarPackageView::ButtonDepress(int) */

void __thiscall PlantAvatarPackageView::ButtonDepress(PlantAvatarPackageView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageView::Draw(Sexy::Graphics*) */

void __thiscall PlantAvatarPackageView::Draw(PlantAvatarPackageView *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  iVar1 = FUN_043a19d8(0x32);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar1);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00c60);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar2 = FUN_043a19d8(0x46);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_043a19d8(0x1e);
  iVar4 = FUN_043a19d8(0x8c);
  iVar5 = FUN_043a19d8(0x32);
  Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar2,iVar3,iVar4,iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01950);
  DrawAdaptiveImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01580);
  iVar2 = FUN_043a19d8(0x2d);
  iVar3 = FUN_043a19d8(0x4b);
  iVar4 = FUN_043a19d8(0x5a);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_043a19d8(0xa0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  iVar2 = FUN_043a19d8(0x2d);
  iVar3 = FUN_043a19d8(0xff);
  iVar4 = FUN_043a19d8(0x5a);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_043a19d8(0x6e);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01978);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar2 = FUN_043a19d8(0x3c);
  iVar3 = FUN_043a19d8(0x113);
  iVar4 = FUN_043a19d8(0x78);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_043a19d8(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x118,aIStack_28,uVar6,aIStack_18,0,1);
  iVar2 = FUN_043a19d8(0x3c);
  iVar3 = FUN_043a19d8(0x145);
  iVar4 = FUN_043a19d8(0x50);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_043a19d8(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x120,aIStack_28,uVar6,aIStack_18,0,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

