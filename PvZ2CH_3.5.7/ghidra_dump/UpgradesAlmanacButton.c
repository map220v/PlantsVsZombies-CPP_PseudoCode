// Class: UpgradesAlmanacButton


/* UpgradesAlmanacButton::~UpgradesAlmanacButton() */

void __thiscall UpgradesAlmanacButton::~UpgradesAlmanacButton(UpgradesAlmanacButton *this)

{
  *(undefined ***)this = &PTR_GetClass_067312f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06731620;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UpgradesAlmanacButton::~UpgradesAlmanacButton() */

void __thiscall UpgradesAlmanacButton::~UpgradesAlmanacButton(UpgradesAlmanacButton *this)

{
  ~UpgradesAlmanacButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradesAlmanacButton::Resize(int, int, int, int) */

void __thiscall
UpgradesAlmanacButton::Resize
          (UpgradesAlmanacButton *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  SalesProgressBar *pSVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x50) == param_3) && (*(int *)(this + 0x54) == param_4)) {
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  }
  else {
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
    plVar6 = *(long **)(this + 0xe0);
    fVar11 = (float)FUN_03b46440(0x41200000);
    (**(code **)(*plVar6 + 0x198))(plVar6,0,0,param_3,(int)((float)param_4 - fVar11));
    if (*(long *)(this + 0xf8) != 0) {
      iVar1 = *(int *)(this + 0x54);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb260);
      iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
      plVar8 = *(long **)(this + 0xf8);
      plVar6 = (long *)plVar8[0x2b];
      if (plVar6 == (long *)0x0) {
        lVar10 = plVar8[0x2a];
        iVar3 = 0;
        if (lVar10 != 0) {
          FUN_05477b24(auStack_10,plVar8 + 0x1b);
          iVar3 = Sexy::PrimeTypeface::StringWidth(lVar10,auStack_10);
          iVar4 = FUN_03b4642c(0x28);
          iVar3 = iVar3 + iVar4;
          FUN_05476c50(auStack_10);
          plVar8 = *(long **)(this + 0xf8);
        }
      }
      else {
        iVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,plVar8 + 0x1b);
        iVar4 = FUN_03b4642c(0x28);
        plVar8 = *(long **)(this + 0xf8);
        iVar3 = iVar3 + iVar4;
      }
      iVar4 = *(int *)(this + 0x50);
      pcVar9 = *(code **)(*plVar8 + 0x198);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb260);
      uVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      (*pcVar9)(plVar8,(iVar4 - iVar3) / 2,iVar1 - iVar2,iVar3,uVar5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradesAlmanacButton::UpgradesAlmanacButton(Sexy::RtWeakPtr<ObjectTypeDescriptor const>,
   MagentoProductProps*) */

void __thiscall
UpgradesAlmanacButton::UpgradesAlmanacButton
          (UpgradesAlmanacButton *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 param_3)

{
  ButtonListener *this_00;
  undefined *puVar1;
  char cVar2;
  undefined8 extraout_x0;
  PVZ2UIAlmanacUpgradeDisplayer *pPVar3;
  undefined8 uVar4;
  PVZ2UIButton *pPVar5;
  WorldDataManager *this_01;
  char *__s;
  long lVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  wstring awStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_067312f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06731620;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  nop();
  *(undefined8 *)(this + 0xe8) = extraout_x0;
  *(undefined8 *)(this + 0xf0) = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)param_2);
  pPVar3 = ::operator_new(0x110);
  PVZ2UIAlmanacUpgradeDisplayer::PVZ2UIAlmanacUpgradeDisplayer
            (pPVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  *(PVZ2UIAlmanacUpgradeDisplayer **)(this + 0xe0) = pPVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  if (*(bool **)(this + 0xf0) == (bool *)0x0) {
    cVar2 = LawnApp::HasPlayerUnlockedFeature
                      (gLawnApp,*(undefined4 *)(*(long *)(this + 0xe8) + 0x30));
    if (cVar2 == '\0') {
      this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      __s = (char *)GameFeatureType::ToString(*(GameFeatureType **)(this + 0xe8));
      std::string::string((string *)&local_40,__s);
      lVar6 = WorldDataManager::FindEventByLevelName(this_01,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      if (lVar6 != 0) {
        TodStringTranslate(L"[ALMANAC_UPGRADE_VIEW_ON_MAP]");
        Sexy::Color::Color((Color *)&local_40,1);
        pPVar5 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton(pPVar5,6,this_00,awStack_80,(Color *)&local_40);
        *(PVZ2UIButton **)(this + 0xf8) = pPVar5;
        PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06acb690,3);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06acb308,3);
        PVZ2UIButton::SetDialogStates(pPVar5,aPStack_78,(PVZ2UIImage *)&local_40);
        Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
        FUN_05476c50(awStack_80);
      }
    }
  }
  else {
    MagentoProductProps::GetLocalizedPriceString(*(bool **)(this + 0xf0));
    uVar4 = FUN_054766ec((RtWeakPtr<Sexy::SoundResource> *)&local_40);
    FUN_05478178(awStack_80,uVar4,aPStack_78);
    nop();
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar5 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar5,5,this_00,awStack_80,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar5;
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06acb260,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06acb398,3);
    PVZ2UIButton::SetDialogStates(pPVar5,aPStack_78,(PVZ2UIImage *)&local_40);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onItemPurchasedFromStore);
    local_a0 = local_40;
    uStack_98 = uStack_38;
    local_90 = local_30;
    MessageRouter::
    Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<UpgradesAlmanacButton,void(UpgradesAlmanacButton::*)(MagentoProductProps*)>>
              ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,&local_a0);
    FUN_05476c50(awStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UpgradesAlmanacButton::ButtonPress(int) */

void UpgradesAlmanacButton::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Buy_Press");
  return;
}


/* non-virtual thunk to UpgradesAlmanacButton::ButtonPress(int) */

void __thiscall UpgradesAlmanacButton::ButtonPress(UpgradesAlmanacButton *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradesAlmanacButton::ButtonDepress(int) */

void __thiscall UpgradesAlmanacButton::ButtonDepress(UpgradesAlmanacButton *this,int param_1)

{
  char *pcVar1;
  WorldDataManager *this_00;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Buy_Release");
  if (param_1 == 6) {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    pcVar1 = (char *)GameFeatureType::ToString(*(GameFeatureType **)(this + 0xe8));
    std::string::string(asStack_10,pcVar1);
    lVar2 = WorldDataManager::FindEventByLevelName(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar2 != 0) {
      GameStateMgr::ShowWorldMapWithDestination(gGameStateMgr,lVar2,5,5);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_01);
      PurchaseBroker::EndCartInstance(this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UpgradesAlmanacButton::ButtonDepress(int) */

void __thiscall UpgradesAlmanacButton::ButtonDepress(UpgradesAlmanacButton *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UpgradesAlmanacButton::onItemPurchasedFromStore(MagentoProductProps*) */

void __thiscall
UpgradesAlmanacButton::onItemPurchasedFromStore
          (UpgradesAlmanacButton *this,MagentoProductProps *param_1)

{
  char *pcVar1;
  
  if (*(MagentoProductProps **)(this + 0xf0) != param_1) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Buy_Plant_Confirm");
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
  PVZ2UIAlmanacUpgradeDisplayer::OnBought(*(PVZ2UIAlmanacUpgradeDisplayer **)(this + 0xe0));
  return;
}

