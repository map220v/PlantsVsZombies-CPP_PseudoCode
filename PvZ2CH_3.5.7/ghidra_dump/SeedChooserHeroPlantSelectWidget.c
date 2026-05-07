// Class: SeedChooserHeroPlantSelectWidget


/* SeedChooserHeroPlantSelectWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void SeedChooserHeroPlantSelectWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SeedChooserHeroPlantSelectWidget::ScrollTargetReached(Sexy::ScrollWidget*)
    */

void __thiscall
SeedChooserHeroPlantSelectWidget::ScrollTargetReached
          (SeedChooserHeroPlantSelectWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* SeedChooserHeroPlantSelectWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void SeedChooserHeroPlantSelectWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   SeedChooserHeroPlantSelectWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
SeedChooserHeroPlantSelectWidget::ScrollTargetInterrupted
          (SeedChooserHeroPlantSelectWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserHeroPlantSelectWidget::OnSelectSeedChooserHeroPlantSelectWidget(int) */

void __thiscall
SeedChooserHeroPlantSelectWidget::OnSelectSeedChooserHeroPlantSelectWidget
          (SeedChooserHeroPlantSelectWidget *this,int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  wchar_t *pwVar4;
  long lVar5;
  long lVar6;
  PVZ2UIButton *this_00;
  undefined8 uVar7;
  wstring awStack_10 [8];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  lVar6 = 0;
  *(int *)(this + 0xe8) = param_1;
  lVar2 = FUN_0441b45c(uVar7,*(undefined8 *)(this + 0x118));
  if (lVar2 != 0) {
    do {
      plVar3 = (long *)FUN_0441b468(uVar7,lVar6);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        *(bool *)(lVar5 + 0xd8) = param_1 == *(int *)(lVar5 + 0xe0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar2);
  }
  if (*(long *)(this + 0x100) != 0) {
    iVar1 = HeroPlantUtils::GetCurrentHeroPlant();
    this_00 = *(PVZ2UIButton **)(this + 0x100);
    if (*(int *)(this + 0xe8) == iVar1) {
      pwVar4 = L"[UNEQUIP]";
    }
    else {
      pwVar4 = L"[EQUIP]";
    }
    TodStringTranslate(pwVar4);
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooserHeroPlantSelectWidget::ButtonDepress(int) */

void __thiscall
SeedChooserHeroPlantSelectWidget::ButtonDepress(SeedChooserHeroPlantSelectWidget *this,int param_1)

{
  if (param_1 == 0x73) {
    HeroPlantUtils::GetCurrentHeroPlant();
    return;
  }
  if ((param_1 == 0x74) && (*(SeedChooser **)(this + 0xf0) != (SeedChooser *)0x0)) {
    SeedChooser::CloseSeedChooserHeroPlantSelectWidget(*(SeedChooser **)(this + 0xf0));
    return;
  }
  return;
}


/* non-virtual thunk to SeedChooserHeroPlantSelectWidget::ButtonDepress(int) */

void __thiscall
SeedChooserHeroPlantSelectWidget::ButtonDepress(SeedChooserHeroPlantSelectWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserHeroPlantSelectWidget::EquipHeroPlantChange(int) */

void SeedChooserHeroPlantSelectWidget::EquipHeroPlantChange(int param_1)

{
  int iVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  PVZ2UIButton *this;
  wstring awStack_10 [8];
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(SeedChooser **)(uVar2 + 0xf0) != (SeedChooser *)0x0) {
    SeedChooser::refreshCurrentHeroPlant(*(SeedChooser **)(uVar2 + 0xf0));
  }
  if (*(long *)(uVar2 + 0x100) != 0) {
    iVar1 = HeroPlantUtils::GetCurrentHeroPlant();
    this = *(PVZ2UIButton **)(uVar2 + 0x100);
    if (*(int *)(uVar2 + 0xe8) == iVar1) {
      pwVar3 = L"[UNEQUIP]";
    }
    else {
      pwVar3 = L"[EQUIP]";
    }
    TodStringTranslate(pwVar3);
    PVZ2UIButton::SetLabelText(this,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserHeroPlantSelectWidget::Draw(Sexy::Graphics*) */

void __thiscall
SeedChooserHeroPlantSelectWidget::Draw(SeedChooserHeroPlantSelectWidget *this,Graphics *param_1)

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
  TodStringTranslate(L"[HEROPLANT_SELECT]");
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooserHeroPlantSelectWidget::SeedChooserHeroPlantSelectWidget() */

void __thiscall
SeedChooserHeroPlantSelectWidget::SeedChooserHeroPlantSelectWidget
          (SeedChooserHeroPlantSelectWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_06849450;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06849788;
  *(undefined ***)(this + 0xe0) = &PTR__SeedChooserHeroPlantSelectWidget_068497d0;
  FUN_05476574(this + 0xf8);
  *(undefined8 *)(this + 0x100) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectSeedChooserHeroPlantSelectWidget);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SeedChooserHeroPlantSelectWidget,void(SeedChooserHeroPlantSelectWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectSeedChooserHeroPlantSelectWidget,&local_40);
  return;
}


/* SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget() */

void __thiscall
SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget
          (SeedChooserHeroPlantSelectWidget *this)

{
  *(undefined ***)(this + 0xe0) = &PTR__SeedChooserHeroPlantSelectWidget_068497d0;
  *(undefined ***)this = &PTR_GetClass_06849450;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06849788;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  vector<SeedChooserHeroPlantSelectWidgetItem*,std::allocator<SeedChooserHeroPlantSelectWidgetItem*>>
  ::~vector((vector<SeedChooserHeroPlantSelectWidgetItem*,std::allocator<SeedChooserHeroPlantSelectWidgetItem*>>
             *)(this + 0x110));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget() */

void __thiscall
SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget
          (SeedChooserHeroPlantSelectWidget *this)

{
  ~SeedChooserHeroPlantSelectWidget(this + -0xe0);
  return;
}


/* SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget() */

void __thiscall
SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget
          (SeedChooserHeroPlantSelectWidget *this)

{
  ~SeedChooserHeroPlantSelectWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget() */

void __thiscall
SeedChooserHeroPlantSelectWidget::~SeedChooserHeroPlantSelectWidget
          (SeedChooserHeroPlantSelectWidget *this)

{
  ~SeedChooserHeroPlantSelectWidget(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooserHeroPlantSelectWidget::InitView() */

void __thiscall SeedChooserHeroPlantSelectWidget::InitView(SeedChooserHeroPlantSelectWidget *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ProfileMgr *this_02;
  HeroPlantUtils *this_03;
  SeedChooserHeroPlantSelectWidgetItem *pSVar7;
  ulong uVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  int *piVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auStack_a8 [8];
  Insets aIStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  SeedChooserHeroPlantSelectWidgetItem *local_78 [7];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x59] = (SeedChooserHeroPlantSelectWidget)0x0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0441bf40(0x294);
  iVar3 = FUN_0441bf40(0x1c2);
  (**(code **)(*(long *)this + 0x198))
            (this,*(int *)(gLawnApp + 0xd4) / 2 - iVar2 / 2,
             *(int *)(gLawnApp + 0xd8) / 2 - iVar3 / 2);
  std::
  vector<SeedChooserHeroPlantSelectWidgetItem*,std::allocator<SeedChooserHeroPlantSelectWidgetItem*>>
  ::clear((vector<SeedChooserHeroPlantSelectWidgetItem*,std::allocator<SeedChooserHeroPlantSelectWidgetItem*>>
           *)(this + 0x110));
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  iVar2 = FUN_0441bf40(0x23);
  iVar3 = FUN_0441bf40(0x50);
  iVar4 = FUN_0441bf40(0x24e);
  iVar5 = FUN_0441bf40(100);
  Sexy::Insets::Insets(aIStack_a0,iVar2,iVar3,iVar4,iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_a0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  uVar6 = FUN_0441bf40(10);
  iVar2 = FUN_0441bf40(100);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (HeroPlantUtils *)ProfileMgr::GetCurrentProfile(this_02);
  HeroPlantUtils::GetPlayerHeroPlantList(this_03);
  uVar13 = 0;
  while( true ) {
    uVar8 = FUN_0441b318(local_90,local_88);
    if (uVar8 <= uVar13) break;
    pSVar7 = ::operator_new(0xf0);
    SeedChooserHeroPlantSelectWidgetItem::SeedChooserHeroPlantSelectWidgetItem(pSVar7);
    local_78[0] = pSVar7;
    iVar3 = FUN_0441bf40(uVar6);
    Sexy::Insets::Insets(aIStack_40,(iVar3 + iVar2) * (int)uVar13,0,iVar2,iVar2);
    (**(code **)(*(long *)local_78[0] + 0x1a0))(local_78[0],aIStack_40);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_78[0]);
    pSVar7 = local_78[0];
    piVar11 = (int *)FUN_0441b324(local_90,uVar13);
    SeedChooserHeroPlantSelectWidgetItem::InitView(pSVar7,*piVar11);
    std::
    vector<SeedChooserHeroPlantSelectWidgetItem*,std::allocator<SeedChooserHeroPlantSelectWidgetItem*>>
    ::push_back((vector<SeedChooserHeroPlantSelectWidgetItem*,std::allocator<SeedChooserHeroPlantSelectWidgetItem*>>
                 *)(this + 0x110),local_78);
    uVar13 = uVar13 + 1;
  }
  iVar3 = FUN_0441bf40(uVar6);
  pcVar12 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (iVar3 + iVar2) * (int)uVar8 - iVar3;
  (*pcVar12)(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x73,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar9;
  FUN_05476c50((wstring *)local_78);
  pPVar9 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b07260,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b07310,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)local_78,(PVZ2UIImage *)aIStack_40);
  plVar14 = *(long **)(this + 0x100);
  pcVar12 = *(code **)(*plVar14 + 0x1a0);
  iVar2 = FUN_0441bf40(0xdc);
  iVar3 = FUN_0441bf40(0x15e);
  iVar4 = FUN_0441bf40(0x50);
  Sexy::Insets::Insets(aIStack_40,iVar2,iVar3,iVar2,iVar4);
  (*pcVar12)(plVar14,aIStack_40);
  plVar14 = *(long **)(this + 0x100);
  pcVar12 = *(code **)(*plVar14 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar12)(plVar14,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178((wstring *)local_78,&DAT_056f11a8,auStack_a8);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x74,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar9;
  FUN_05476c50((wstring *)local_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b07740,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b07388,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)local_78,(PVZ2UIImage *)aIStack_40);
  plVar14 = *(long **)(this + 0x108);
  pcVar12 = *(code **)(*plVar14 + 0x1a0);
  iVar2 = FUN_0441bf40(0x26c);
  iVar3 = FUN_0441bf40(0xfffffff1);
  iVar4 = FUN_0441bf40(0x3c);
  Sexy::Insets::Insets(aIStack_40,iVar2,iVar3,iVar4,iVar4);
  (*pcVar12)(plVar14,aIStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  cVar1 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_90);
  if (cVar1 == '\0') {
    piVar11 = (int *)FUN_0441b324(local_90,0);
    OnSelectSeedChooserHeroPlantSelectWidget(this,*piVar11);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

