// Class: PVZ2UISeedChooserPreviewDisplay


/* PVZ2UISeedChooserPreviewDisplay::SetDescriptionText(std::wstring const&) */

void PVZ2UISeedChooserPreviewDisplay::SetDescriptionText(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xe8);
  return;
}


/* PVZ2UISeedChooserPreviewDisplay::CheckPlantPotButtonPress(int, int) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::CheckPlantPotButtonPress
          (PVZ2UISeedChooserPreviewDisplay *this,int param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x100);
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x6e) == '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x300))
                      (plVar2,param_1 - *(int *)(this + 0x48),param_2 - *(int *)(this + 0x4c));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x100) + 0x218))
                (*(long **)(this + 0x100),param_1 - *(int *)(this + 0x48),
                 param_2 - *(int *)(this + 0x4c),0,1);
    }
  }
  plVar2 = *(long **)(this + 0x130);
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x6e) == '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x300))
                      (plVar2,param_1 - *(int *)(this + 0x48),param_2 - *(int *)(this + 0x4c));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x130) + 0x218))
                (*(long **)(this + 0x130),param_1 - *(int *)(this + 0x48),
                 param_2 - *(int *)(this + 0x4c),0,1);
    }
  }
  plVar2 = *(long **)(this + 0x138);
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x6e) == '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x300))
                      (plVar2,param_1 - *(int *)(this + 0x48),param_2 - *(int *)(this + 0x4c));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x138) + 0x218))
                (*(long **)(this + 0x138),param_1 - *(int *)(this + 0x48),
                 param_2 - *(int *)(this + 0x4c),0,1);
      return;
    }
  }
  return;
}


/* PVZ2UISeedChooserPreviewDisplay::CheckPlantPotButtonDepress(int, int) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::CheckPlantPotButtonDepress
          (PVZ2UISeedChooserPreviewDisplay *this,int param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x100);
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x6e) == '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x300))
                      (plVar2,param_1 - *(int *)(this + 0x48),param_2 - *(int *)(this + 0x4c));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x100) + 0x230))
                (*(long **)(this + 0x100),param_1 - *(int *)(this + 0x48),
                 param_2 - *(int *)(this + 0x4c),0,1);
    }
  }
  plVar2 = *(long **)(this + 0x130);
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x6e) == '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x300))
                      (plVar2,param_1 - *(int *)(this + 0x48),param_2 - *(int *)(this + 0x4c));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x130) + 0x230))
                (*(long **)(this + 0x130),param_1 - *(int *)(this + 0x48),
                 param_2 - *(int *)(this + 0x4c),0,1);
    }
  }
  plVar2 = *(long **)(this + 0x138);
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x6e) == '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x300))
                      (plVar2,param_1 - *(int *)(this + 0x48),param_2 - *(int *)(this + 0x4c));
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x138) + 0x230))
                (*(long **)(this + 0x138),param_1 - *(int *)(this + 0x48),
                 param_2 - *(int *)(this + 0x4c),0,1);
      return;
    }
  }
  return;
}


/* PVZ2UISeedChooserPreviewDisplay::SetIsShowLevelIcon(bool) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::SetIsShowLevelIcon
          (PVZ2UISeedChooserPreviewDisplay *this,bool param_1)

{
  this[0x141] = (PVZ2UISeedChooserPreviewDisplay)param_1;
  if (*(PVZ2UIGameObjectCard **)(this + 0xf0) != (PVZ2UIGameObjectCard *)0x0) {
    PVZ2UIGameObjectCard::SetShowLevelRank(*(PVZ2UIGameObjectCard **)(this + 0xf0),param_1);
    return;
  }
  return;
}


/* PVZ2UISeedChooserPreviewDisplay::SetIsShowPlantPot(bool) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::SetIsShowPlantPot
          (PVZ2UISeedChooserPreviewDisplay *this,bool param_1)

{
  this[0x142] = (PVZ2UISeedChooserPreviewDisplay)param_1;
  if (*(FirstRechargeExtraDayWidget **)(this + 0xf0) != (FirstRechargeExtraDayWidget *)0x0) {
    FirstRechargeExtraDayWidget::SetFrameEnable
              (*(FirstRechargeExtraDayWidget **)(this + 0xf0),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::Resize(int, int, int, int) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::Resize
          (PVZ2UISeedChooserPreviewDisplay *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_043772fc(0x3d);
  iVar2 = FUN_043772fc(0xe);
  iVar3 = FUN_043772fc(0x9a);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1,iVar3,(*(int *)(this + 0x54) - iVar1) - iVar2);
  (**(code **)(**(long **)(this + 0xf0) + 0x1a0))(*(long **)(this + 0xf0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UISeedChooserPreviewDisplay::HideAvatar() */

void __thiscall PVZ2UISeedChooserPreviewDisplay::HideAvatar(PVZ2UISeedChooserPreviewDisplay *this)

{
  if (*(PVZ2UIGameObjectCard **)(this + 0xf0) != (PVZ2UIGameObjectCard *)0x0) {
    PVZ2UIGameObjectCard::SetAvatarIndex(*(PVZ2UIGameObjectCard **)(this + 0xf0),-1);
  }
  if (*(long *)(this + 0x138) != 0) {
    *(undefined1 *)(*(long *)(this + 0x138) + 0x6c) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::~PVZ2UISeedChooserPreviewDisplay() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::~PVZ2UISeedChooserPreviewDisplay
          (PVZ2UISeedChooserPreviewDisplay *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06839e58;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06839b30;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UISeedChooserPreviewDisplay::~PVZ2UISeedChooserPreviewDisplay() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::~PVZ2UISeedChooserPreviewDisplay
          (PVZ2UISeedChooserPreviewDisplay *this)

{
  ~PVZ2UISeedChooserPreviewDisplay(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::addBuyPlantButton(int, int, int, int) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::addBuyPlantButton
          (PVZ2UISeedChooserPreviewDisplay *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  RtObject *this_00;
  PVZ2UISeedChooserPlantPotButton *this_01;
  PVZ2UIButton *this_02;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x108));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
    bVar1 = Sexy::RtObject::IsA<PlantType>(this_00);
    if (bVar1) {
      TodStringTranslate(L"[PLANT_GIFT_BTN]");
      Sexy::Color::Color((Color *)aPStack_40,1);
      this_01 = ::operator_new(0x300);
      PVZ2UISeedChooserPlantPotButton::PVZ2UISeedChooserPlantPotButton
                (this_01,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
      *(PVZ2UISeedChooserPlantPotButton **)(this + 0x130) = this_01;
      FUN_05476c50(awStack_78);
      (**(code **)(**(long **)(this + 0x130) + 0x198))
                (*(long **)(this + 0x130),param_1,param_2,param_3,param_4);
      this_02 = *(PVZ2UIButton **)(this + 0x130);
      PVZ2UIImage::PVZ2UIImage
                ((PVZ2UIImage *)awStack_78,StoreItemConfig::IMAGE_UI_GENERIC_PURPLEBUTTON,5);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,StoreItemConfig::IMAGE_UI_GENERIC_PURPLEBUTTON_DOWN,5);
      PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)awStack_78,aPStack_40);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UISeedChooserPreviewDisplay::showBuyPlantUI() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::showBuyPlantUI(PVZ2UISeedChooserPreviewDisplay *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  RtObject *this_01;
  TGPieceTableUI *this_02;
  PlantType *extraout_x0;
  PlantNameMapperServerID *this_03;
  
  this_00 = (RtWeakPtr *)(this + 0x108);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<PlantType>(this_01);
    if (bVar1) {
      this_02 = (TGPieceTableUI *)UISingletonDialog<UISpringBuyPlant>::ShowDialog();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      this_03 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      iVar2 = PlantNameMapperServerID::GetIdForType(this_03,extraout_x0);
      TGPieceTableUI::SetMinChips(this_02,iVar2);
      UISpringBuyPlant::initUI((UISpringBuyPlant *)this_02);
      return;
    }
  }
  return;
}


/* PVZ2UISeedChooserPreviewDisplay::isCurPlantAlreadyBuy() */

undefined8 __thiscall
PVZ2UISeedChooserPreviewDisplay::isCurPlantAlreadyBuy(PVZ2UISeedChooserPreviewDisplay *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  uint uVar2;
  RtObject *this_01;
  PlantType *extraout_x0;
  PlantNameMapperServerID *this_02;
  SpringChargeManager *this_03;
  undefined8 uVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x108);
  Sexy::OutputDebugStrF((wchar_t *)"UISpringBuyPlant::OnNotifyBuyPlant isCurPlantAlreadyBuy");
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<PlantType>(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      this_02 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      uVar2 = PlantNameMapperServerID::GetIdForType(this_02,extraout_x0);
      Sexy::OutputDebugStrF
                ((wchar_t *)"UISpringBuyPlant::OnNotifyBuyPlant plantID = %d ",(ulong)uVar2);
      this_03 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
      uVar3 = SpringChargeManager::isPlantAlreadyBuy(this_03,uVar2);
      return uVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::InitializeButton() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::InitializeButton(PVZ2UISeedChooserPreviewDisplay *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  RtObject *this_00;
  PVZ2UISeedChooserPlantPotButton *this_01;
  SalesProgressBar *pSVar9;
  long *plVar10;
  PVZ2UIButton *this_02;
  code *pcVar11;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x108));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
    bVar2 = Sexy::RtObject::IsA<PlantType>(this_00);
    if (bVar2) {
      FUN_05478178(awStack_78,L"[BUTTON_SWITCH]",auStack_80);
      Sexy::Color::Color((Color *)aPStack_40,1);
      this_01 = ::operator_new(0x300);
      PVZ2UISeedChooserPlantPotButton::PVZ2UISeedChooserPlantPotButton
                (this_01,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
      *(PVZ2UISeedChooserPlantPotButton **)(this + 0x100) = this_01;
      FUN_05476c50(awStack_78);
      nop();
      this_02 = *(PVZ2UIButton **)(this + 0x100);
      PVZ2UIImage::PVZ2UIImage
                ((PVZ2UIImage *)awStack_78,StoreItemConfig::IMAGE_UI_GENERIC_PURPLEBUTTON,3);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,StoreItemConfig::IMAGE_UI_GENERIC_PURPLEBUTTON_DOWN,3);
      PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)awStack_78,aPStack_40);
      uVar3 = FUN_043772fc(0x168);
      iVar1 = *(int *)(this + 0x54);
      pSVar9 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          StoreItemConfig::IMAGE_UI_GENERIC_PURPLEBUTTON);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
      iVar5 = FUN_043772fc(5);
      plVar10 = *(long **)(this + 0x100);
      pcVar11 = *(code **)(*plVar10 + 0x198);
      uVar6 = FUN_043772fc(0x6e);
      pSVar9 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          StoreItemConfig::IMAGE_UI_GENERIC_PURPLEBUTTON);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar9);
      iVar8 = FUN_043772fc(10);
      (*pcVar11)(plVar10,uVar3,(iVar1 - iVar4) - iVar5,uVar6,iVar7 - iVar8);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::Draw(PVZ2UISeedChooserPreviewDisplay *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  Insets aIStack_68 [16];
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_68,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_68);
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
  iVar3 = FUN_043772fc(0xe);
  iVar4 = FUN_043772fc(5);
  iVar5 = FUN_043772fc(0x1c);
  iVar1 = *(int *)(this + 0x50);
  iVar6 = FUN_043772fc(0x2f);
  Sexy::Insets::Insets(aIStack_58,iVar3,iVar4,iVar1 - iVar5,iVar6);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_58,uVar8,aIStack_18,5,1);
  iVar1 = *(int *)(*(long *)(this + 0xf0) + 0x48);
  iVar3 = *(int *)(*(long *)(this + 0xf0) + 0x50);
  iVar4 = FUN_043772fc(0xe);
  iVar1 = iVar1 + iVar3 + iVar4;
  fVar10 = (float)FUN_04377390(0x42700000);
  iVar3 = *(int *)(this + 0x50);
  iVar9 = (int)fVar10;
  iVar5 = FUN_043772fc(7);
  Sexy::Insets::Insets
            (aIStack_48,iVar1,iVar9,(iVar3 - iVar1) - iVar5,(*(int *)(this + 0x54) - iVar9) - iVar4)
  ;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,this + 0xe8,aIStack_48,uVar8,aIStack_18,0,1);
  iVar5 = FUN_043772fc(0x37);
  iVar3 = *(int *)(this + 0x50);
  iVar6 = FUN_043772fc(7);
  iVar4 = *(int *)(this + 0x54);
  iVar7 = FUN_043772fc(0xe);
  Sexy::Insets::Insets
            (aIStack_38,iVar1,iVar5 + iVar9,(iVar3 - iVar1) - iVar6,(iVar4 - iVar9) - iVar7);
  if (this[0x140] != (PVZ2UISeedChooserPreviewDisplay)0x0) {
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,this + 0x110,aIStack_38,uVar8,aIStack_18,0,1);
  }
  cVar2 = PVZ2UIGameObjectCard::isExperiencePlant(*(PVZ2UIGameObjectCard **)(this + 0xf0));
  if (cVar2 != '\0') {
    iVar5 = FUN_043772fc(0x7d);
    iVar3 = *(int *)(this + 0x50);
    iVar6 = FUN_043772fc(7);
    iVar4 = *(int *)(this + 0x54);
    iVar7 = FUN_043772fc(0xe);
    Sexy::Insets::Insets
              (aIStack_28,iVar1,iVar5 + iVar9,(iVar3 - iVar1) - iVar6,(iVar4 - iVar9) - iVar7);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar8,aIStack_18,0,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UISeedChooserPreviewDisplay::updateButtonUI() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::updateButtonUI(PVZ2UISeedChooserPreviewDisplay *this)

{
  char cVar1;
  
  Sexy::OutputDebugStrF
            ((wchar_t *)"PVZ2UISeedChooserPreviewDisplay::updateButtonUI m_buyPlantButton = %d",
             (ulong)(*(long *)(this + 0x130) != 0));
  if (*(long *)(this + 0x130) != 0) {
    cVar1 = PVZ2UIGameObjectCard::isExperiencePlant(*(PVZ2UIGameObjectCard **)(this + 0xf0));
    if ((cVar1 != '\0') && (cVar1 = isCurPlantAlreadyBuy(this), cVar1 == '\0')) {
      (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),1);
      return;
    }
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
  }
  return;
}


/* PVZ2UISeedChooserPreviewDisplay::OnChangeButton() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::OnChangeButton(PVZ2UISeedChooserPreviewDisplay *this)

{
  char cVar1;
  
  Sexy::OutputDebugStrF
            ((wchar_t *)"PVZ2UISeedChooserPreviewDisplay::updateButtonUI m_buyPlantButton = %d",
             (ulong)(*(long *)(this + 0x130) != 0));
  if (*(long *)(this + 0x130) != 0) {
    cVar1 = PVZ2UIGameObjectCard::isExperiencePlant(*(PVZ2UIGameObjectCard **)(this + 0xf0));
    if ((cVar1 != '\0') && (cVar1 = isCurPlantAlreadyBuy(this), cVar1 == '\0')) {
      (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),1);
      return;
    }
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::UpdateTimeLabel() */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::UpdateTimeLabel(PVZ2UISeedChooserPreviewDisplay *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  PVZ2UISeedChooserPreviewDisplay *pPVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  NameMapperBase *this_01;
  long lVar5;
  TrialCardManager *this_02;
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 == '\0') {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = FUN_0547419c(lVar4 + 8);
    if (cVar2 == '\0') {
      lVar4 = LawnApp::GetRealServerTime(gLawnApp);
      if (0 < lVar4) {
        cVar2 = LawnApp::IsChannelWithBigDeal();
        if (cVar2 != '\0') {
          this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
          pPVar1 = this + 0x128;
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar3 = NameMapperBase::GetIdForName(this_01,(string *)(lVar5 + 8));
          this_02 = (TrialCardManager *)Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
          TrialCardManager::GetBestTrialStatus(this_02,iVar3);
          lVar4 = local_10 - lVar4;
          TodStringTranslate(L"[BUYPLANT_LEFT_TIME]");
          FUN_054766c8(pPVar1,(Color *)&local_20);
          FUN_05476c50((Color *)&local_20);
          if (lVar4 < 1) {
            Sexy::Color::Color((Color *)&local_20,2);
            *(undefined8 *)(this + 0x118) = local_20;
            *(undefined8 *)(this + 0x120) = uStack_18;
            TodStringTranslate(L"00:00:00");
          }
          else {
            Sexy::Color::Color((Color *)&local_20,1);
            *(undefined8 *)(this + 0x118) = local_20;
            *(undefined8 *)(this + 0x120) = uStack_18;
            iVar3 = (int)(lVar4 / 0x15180);
            if (0 < iVar3) {
              TodStringTranslate(L"[REMAIN_DAYS]");
              TodReplaceNumberString(awStack_28,L"{DAYS}",iVar3);
              thunk_FUN_05477668(pPVar1,(Color *)&local_20);
              FUN_05476c50((Color *)&local_20);
              FUN_05476c50(awStack_28);
              goto LAB_0437e58c;
            }
            iVar3 = (int)(lVar4 / 0x3c);
            Sexy::StrFormat(L"%02d:%02d:%02d",(Color *)&local_20,lVar4 / 0xe10 & 0xffffffff,
                            (ulong)(uint)(iVar3 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                            (ulong)(uint)((int)lVar4 + iVar3 * -0x3c));
          }
          thunk_FUN_05477668(pPVar1,(Color *)&local_20);
          FUN_05476c50((Color *)&local_20);
          goto LAB_0437e58c;
        }
      }
      Sexy::Color::Color((Color *)&local_20,2);
      *(undefined8 *)(this + 0x118) = local_20;
      *(undefined8 *)(this + 0x120) = uStack_18;
      TodStringTranslate(L"[NETWORK_FAILED_UNCONNECTED]");
      FUN_054766c8(this + 0x128,(Color *)&local_20);
      FUN_05476c50((Color *)&local_20);
    }
  }
LAB_0437e58c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UISeedChooserPreviewDisplay::ManualUpdate() */

void __thiscall PVZ2UISeedChooserPreviewDisplay::ManualUpdate(PVZ2UISeedChooserPreviewDisplay *this)

{
  (**(code **)(**(long **)(this + 0xf0) + 0x108))(*(long **)(this + 0xf0));
  UpdateTimeLabel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::ButtonDepress(int) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::ButtonDepress(PVZ2UISeedChooserPreviewDisplay *this,int param_1)

{
  LawnApp *pLVar1;
  char *pcVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    showBuyPlantUI(this);
  }
  else if (param_1 == 0x6feeb8) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else if (param_1 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x108));
    LawnApp::ShowPlantAccessoryUI(pLVar1,1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Tab_Scroll");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ2UISeedChooserPreviewDisplay::ButtonDepress(int) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::ButtonDepress(PVZ2UISeedChooserPreviewDisplay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UISeedChooserPreviewDisplay::PVZ2UISeedChooserPreviewDisplay(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>) */

void __thiscall
PVZ2UISeedChooserPreviewDisplay::PVZ2UISeedChooserPreviewDisplay
          (PVZ2UISeedChooserPreviewDisplay *this,RtWeakPtr *param_2)

{
  PVZ2UISeedChooserPreviewDisplay *pPVar1;
  PVZ2UISeedChooserPreviewDisplay *pPVar2;
  PVZ2UISeedChooserPreviewDisplay *pPVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  undefined *this_01;
  LawnApp *this_02;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PVZ2UIGameObjectCard *pPVar9;
  undefined8 uVar10;
  long lVar11;
  RtObject *pRVar12;
  PVZ2UISeedChooserPlantPotButton *this_03;
  string *extraout_x1;
  string *extraout_x1_00;
  long *plVar13;
  PVZ2UIButton *this_04;
  undefined1 auVar14 [16];
  string asStack_b8 [8];
  undefined8 local_b0;
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40 [7];
  long local_8;
  
  pPVar1 = this + 0xe0;
  pPVar2 = this + 0x110;
  local_8 = ___stack_chk_guard;
  pPVar3 = this + 0xe8;
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06839b30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06839e58;
  FUN_05476574(pPVar1);
  FUN_05476574(pPVar3);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  FUN_05478178(pPVar2,&DAT_056f11a8,(RtWeakPtr<Sexy::SoundResource> *)local_40);
  nop();
  Sexy::Color::Color((Color *)(this + 0x118),1);
  FUN_05476574(this + 0x128);
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (PVZ2UISeedChooserPreviewDisplay)0x1;
  this[0x141] = (PVZ2UISeedChooserPreviewDisplay)0x1;
  this[0x142] = (PVZ2UISeedChooserPreviewDisplay)0x1;
  this_01 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnChangeButton);
  Sexy::Delegate0::
  Delegate0<PVZ2UISeedChooserPreviewDisplay,void(PVZ2UISeedChooserPreviewDisplay::*)()>
            (aDStack_a8,(RtWeakPtr<Sexy::SoundResource> *)local_40);
  MessageRouter::Subscribe((MessageRouter *)this_01,Message::updateBuyPlantButton,aDStack_a8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)param_2);
  pPVar9 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard
            (pPVar9,(RtWeakPtr<Sexy::SoundResource> *)local_40,1,0xfffffffe,1,0);
  *(PVZ2UIGameObjectCard **)(this + 0xf0) = pPVar9;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  if (*(PVZ2UIGameObjectCard **)(this + 0xf0) != (PVZ2UIGameObjectCard *)0x0) {
    PVZ2UIGameObjectCard::SetTutorialBackground(*(PVZ2UIGameObjectCard **)(this + 0xf0));
    PVZ2UIGameObjectCard::SetShowPlantPrice(*(PVZ2UIGameObjectCard **)(this + 0xf0),false);
    PVZ2UIGameObjectCard::SetItemOffset(*(PVZ2UIGameObjectCard **)(this + 0xf0),0.75);
    PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0xf0),false);
    PVZ2UIGameObjectCard::SetObjectExtendsOutOfRect(*(PVZ2UIGameObjectCard **)(this + 0xf0),true);
    PVZ2UIGameObjectCard::SetSmallLevelRank(*(PVZ2UIGameObjectCard **)(this + 0xf0));
    PVZ2UIGameObjectCard::setIsShowExpLevel(*(PVZ2UIGameObjectCard **)(this + 0xf0),true);
    cVar4 = PVZ2UIGameObjectCard::isExperiencePlant(*(PVZ2UIGameObjectCard **)(this + 0xf0));
    if (cVar4 != '\0') {
      NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0xf0),false);
    }
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  }
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)
                      ChooserSettings::IMAGE_UI_DIALOG_ASSET_BG_GREEN2);
  *(undefined8 *)(this + 0xf8) = uVar10;
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar5) {
    pRVar12 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar5 = Sexy::RtObject::IsA<PlantType>(pRVar12);
    if (bVar5) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedNameString((Plant *)aPStack_78,(RtWeakPtr<Sexy::SoundResource> *)local_40);
      FUN_054766c8(pPVar1,(wstring *)aPStack_78);
      FUN_05476c50((wstring *)aPStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      std::string::string((string *)local_40,"[PLANT_FAMILT_BOOST_TITLE]");
      Sexy::StringToWString((Sexy *)local_40,extraout_x1);
      TodStringTranslate((wstring *)aPStack_78);
      std::operator+(L"^oldclr^",(wstring *)&local_b0);
      FUN_054766c8(pPVar2,asStack_b8);
      FUN_05476c50(asStack_b8);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_b0);
      FUN_05476c50((wstring *)aPStack_78);
      std::string::~string((string *)local_40);
      nop();
      Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_b0,(RtWeakPtrBase *)param_2);
      PlantFamilyMgr::GetPlantBoostInFamily
                ((PlantFamilyMgr *)local_40,(RtWeakPtr<Sexy::SoundResource> *)&local_b0);
      std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
                ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                 aPStack_78,(vector *)local_40);
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
      cVar4 = std::vector<std::wstring,std::allocator<std::wstring>>::empty
                        ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_78);
      if (cVar4 == '\0') {
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aPStack_78);
        local_40[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)aPStack_78);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b0,(__normal_iterator *)local_40),
              bVar5) {
          uVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          FUN_05477888(pPVar2,&DAT_0570a740);
          thunk_FUN_05477668(pPVar2,uVar10);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
        }
      }
      else {
        FUN_05477888(pPVar2,&DAT_0570a740);
        std::string::string((string *)local_40,"[PLANT_FAMILT_BOOST_RESEARCH]");
        Sexy::StringToWString((Sexy *)local_40,extraout_x1_00);
        TodStringTranslate((wstring *)&local_b0);
        thunk_FUN_05477668(pPVar2,asStack_b8);
        FUN_05476c50(asStack_b8);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_b0);
        std::string::~string((string *)local_40);
        nop();
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedToolTip((Plant *)&local_b0,(RtWeakPtr<Sexy::SoundResource> *)local_40);
      FUN_054766c8(pPVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_b0);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_b0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_78);
      goto LAB_043801d4;
    }
  }
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar5) {
    pRVar12 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar5 = Sexy::RtObject::IsA<ZombieType>(pRVar12);
    if (bVar5) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)param_2);
      Zombie::GetFormattedNameString
                ((Zombie *)aPStack_78,(RtWeakPtr<Sexy::SoundResource> *)local_40);
      FUN_054766c8(pPVar1,(Zombie *)aPStack_78);
      FUN_05476c50((Zombie *)aPStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)param_2);
      Zombie::GetFormattedDescriptionHeader
                ((Zombie *)aPStack_78,(RtWeakPtr<Sexy::SoundResource> *)local_40);
      FUN_054766c8(pPVar3,(Zombie *)aPStack_78);
      FUN_05476c50((Zombie *)aPStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      PVZ2UIGameObjectCard::SetPopAnimScale(*(PVZ2UIGameObjectCard **)(this + 0xf0),0.5);
      PVZ2UIGameObjectCard::SetItemOffset(*(PVZ2UIGameObjectCard **)(this + 0xf0),1.2);
      goto LAB_043801d4;
    }
  }
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar5) {
    pRVar12 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar5 = Sexy::RtObject::IsA<ToolPacketProps>(pRVar12);
    if (bVar5) {
      auVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      Sexy::Upper((Sexy *)(auVar14._0_8_ + 8),auVar14._8_8_);
      uVar10 = FUN_0547429c((RtWeakPtr<Sexy::SoundResource> *)local_40);
      Sexy::StrFormat("[TOOL_PACKET_%s]",asStack_b8,uVar10);
      std::string::~string((string *)local_40);
      auVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      Sexy::Upper((Sexy *)(auVar14._0_8_ + 8),auVar14._8_8_);
      uVar10 = FUN_0547429c((RtWeakPtr<Sexy::SoundResource> *)local_40);
      Sexy::StrFormat("[TOOL_PACKET_DESC_%s]",(string *)&local_b0,uVar10);
      std::string::~string((string *)local_40);
      Sexy::ToWString(asStack_b8);
      TodStringTranslate((wstring *)local_40);
      FUN_054766c8(pPVar1,aPStack_78);
      FUN_05476c50(aPStack_78);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)local_40);
      Sexy::ToWString((string *)&local_b0);
      TodStringTranslate((wstring *)local_40);
      FUN_054766c8(pPVar3,aPStack_78);
      FUN_05476c50(aPStack_78);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)local_40);
      std::string::~string((string *)&local_b0);
      std::string::~string(asStack_b8);
    }
  }
LAB_043801d4:
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_2);
  if ((*(PVZ2UIGameObjectCard **)(this + 0xf0) != (PVZ2UIGameObjectCard *)0x0) &&
     (cVar4 = PVZ2UIGameObjectCard::isExperiencePlant(*(PVZ2UIGameObjectCard **)(this + 0xf0)),
     cVar4 != '\0')) {
    isCurPlantAlreadyBuy(this);
  }
  this_02 = gLawnApp;
  std::string::string((string *)local_40,"UI_NewAvatar");
  LawnApp::LoadGroup(this_02,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if ((*(long *)(this + 0xf0) != 0) &&
     (bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar5)) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar4 = FUN_0547419c(lVar11 + 8);
    if ((cVar4 == '\0') && (bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2), bVar5)) {
      pRVar12 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar5 = Sexy::RtObject::IsA<PlantType>(pRVar12);
      if (bVar5) {
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar4 = NewAvatar::HasAnyUnlockedAvatar((string *)(lVar11 + 8));
        if (cVar4 != '\0') {
          FUN_05478178(aPStack_78,&DAT_056f11a8,&local_b0);
          Sexy::Color::Color((Color *)local_40,1);
          this_03 = ::operator_new(0x300);
          PVZ2UISeedChooserPlantPotButton::PVZ2UISeedChooserPlantPotButton
                    (this_03,0x6feeb8,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
                     (Color *)local_40);
          *(PVZ2UISeedChooserPlantPotButton **)(this + 0x138) = this_03;
          FUN_05476c50(aPStack_78);
          nop();
          this_04 = *(PVZ2UIButton **)(this + 0x138);
          PVZ2UIImage::PVZ2UIImage
                    (aPStack_78,StoreItemConfig::IMAGE_UI_NEWAVATAR_IMAGES_SWITCH_CARD,2);
          PVZ2UIImage::PVZ2UIImage
                    ((PVZ2UIImage *)local_40,
                     StoreItemConfig::IMAGE_UI_NEWAVATAR_IMAGES_SWITCH_CARD_DARK,2);
          PVZ2UIButton::SetDialogStates(this_04,aPStack_78,(PVZ2UIImage *)local_40);
          plVar13 = *(long **)(this + 0x138);
          uVar6 = FUN_043772fc(0x14);
          uVar7 = FUN_043772fc(0x46);
          uVar8 = FUN_043772fc(0x2d);
          (**(code **)(*plVar13 + 0x198))(plVar13,uVar6,uVar7,uVar8,uVar8);
          Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x138));
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

