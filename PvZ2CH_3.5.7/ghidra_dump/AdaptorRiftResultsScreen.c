// Class: AdaptorRiftResultsScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::StaticClassInit() */

void AdaptorRiftResultsScreen::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AdaptorRiftResultsScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_03699068,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftResultsScreen::StaticGetClass() */

long * AdaptorRiftResultsScreen::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRiftResultsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftResultsScreen::GetClass() const */

long * AdaptorRiftResultsScreen::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRiftResultsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftResultsScreen::awardPerkPoints() */

void AdaptorRiftResultsScreen::awardPerkPoints(void)

{
  long lVar1;
  ProfileMgr *this;
  int iVar2;
  
  iVar2 = RiftUtils::GetPennyTechRewardForCurrentLevel();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  if ((0 < iVar2) && (lVar1 != 0)) {
    nop();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::onLoadUIView() */

void __thiscall AdaptorRiftResultsScreen::onLoadUIView(AdaptorRiftResultsScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  awardPerkPoints();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"RiftResultsScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::setup() */

void __thiscall AdaptorRiftResultsScreen::setup(AdaptorRiftResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ContinueButton");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)this_01,0,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::onLinkToUIViewCreated() */

void __thiscall AdaptorRiftResultsScreen::onLinkToUIViewCreated(AdaptorRiftResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ContinueButton");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)this_01,0,(ButtonListener *)(this + 0xd8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::AdaptorRiftResultsScreen() */

void __thiscall AdaptorRiftResultsScreen::AdaptorRiftResultsScreen(AdaptorRiftResultsScreen *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0667e3a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667e700;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667e748;
  AdaptorRiftResultsScreenParams::AdaptorRiftResultsScreenParams
            ((AdaptorRiftResultsScreenParams *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_First_Clear");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftResultsScreen::StaticNew() */

AdaptorRiftResultsScreen * AdaptorRiftResultsScreen::StaticNew(void)

{
  AdaptorRiftResultsScreen *this;
  
  this = ::operator_new(0x188);
  AdaptorRiftResultsScreen(this);
  return this;
}


/* AdaptorRiftResultsScreen::ButtonDepress(int) */

void __thiscall AdaptorRiftResultsScreen::ButtonDepress(AdaptorRiftResultsScreen *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  AdaptorJoustResultsScreen::onContinueClick((AdaptorJoustResultsScreen *)this);
  return;
}


/* non-virtual thunk to AdaptorRiftResultsScreen::ButtonDepress(int) */

void __thiscall AdaptorRiftResultsScreen::ButtonDepress(AdaptorRiftResultsScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::~AdaptorRiftResultsScreen() */

void __thiscall AdaptorRiftResultsScreen::~AdaptorRiftResultsScreen(AdaptorRiftResultsScreen *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  HotUIFile *pHVar3;
  long *plVar4;
  undefined8 *puVar5;
  HotUISeedPacketList *pHVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0667e3a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667e700;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667e748;
  pHVar3 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ProgressBackground");
  plVar4 = (long *)HotUIFile::GetWidgetByName(pHVar3,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar4 + 0x80))(plVar4,0,0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar5);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  pHVar3 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"BonusContent");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*(long *)pHVar6 + 0x80))(pHVar6,1,1);
  std::string::string((string *)&local_10,"BonusLabelContent");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*(long *)pHVar6 + 0x80))(pHVar6,1,1);
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::clear
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)this_00);
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_First_Clear");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_HeadshotFrame");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::~vector
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)this_00);
  AdaptorRiftResultsScreenParams::~AdaptorRiftResultsScreenParams
            ((AdaptorRiftResultsScreenParams *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftResultsScreen::~AdaptorRiftResultsScreen() */

void __thiscall AdaptorRiftResultsScreen::~AdaptorRiftResultsScreen(AdaptorRiftResultsScreen *this)

{
  ~AdaptorRiftResultsScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::getWinLossAnimLabelSuffix() const */

void __thiscall AdaptorRiftResultsScreen::getWinLossAnimLabelSuffix(AdaptorRiftResultsScreen *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"");
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)&DAT_06aac560,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  Set8BytesTo0();
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)&DAT_06aac560);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    thunk_FUN_05475e00();
  }
  else {
    local_10 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                       *)&DAT_06aac560,(string *)&DAT_06aac4e0);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_10);
    thunk_FUN_05475e00();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::playWinLossText() */

void __thiscall AdaptorRiftResultsScreen::playWinLossText(AdaptorRiftResultsScreen *this)

{
  bool bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  PopAnimRig *this_01;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  string *psVar6;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    if (this[0x120] == (AdaptorRiftResultsScreen)0x0) {
      psVar5 = (string *)&DAT_06aac4a8;
      psVar6 = (string *)&DAT_06aac4d8;
    }
    else {
      psVar5 = (string *)&DAT_06aac4d8;
      psVar6 = (string *)&DAT_06aac4a8;
    }
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar5,true);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar6,false);
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,psVar5);
    this_01 = (PopAnimRig *)FUN_03698c10(*(undefined8 *)(pHVar2 + 0x238));
    if (this[0x120] == (AdaptorRiftResultsScreen)0x0) {
      puVar4 = &DAT_06aac5e0;
    }
    else {
      puVar4 = &DAT_06aac4f0;
    }
    FUN_05475d88(asStack_68,puVar4);
    getWinLossAnimLabelSuffix(this);
    FUN_031dcc6c(asStack_58,asStack_68,asStack_60);
    local_50 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)&DAT_06aac560);
    local_48 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06aac560);
    while( true ) {
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48);
      if (!bVar1) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      FUN_031dcc6c(asStack_40,asStack_68,lVar3 + 8);
      PopAnimRig::SetLayerVisibility(this_01,asStack_40,false);
      std::string::~string(asStack_40);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_50);
    }
    PopAnimRig::SetLayerVisibility(this_01,asStack_58,true);
    HotUIAnim::GetDefaultAnimation();
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    HotUIAnim::PlayAndStop((HotUIAnim *)pHVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::setupFirstClearReward(MapEventItem*, int) */

void __thiscall
AdaptorRiftResultsScreen::setupFirstClearReward
          (AdaptorRiftResultsScreen *this,MapEventItem *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  HotUIFile *this_00;
  HotUIWidget *pHVar4;
  AdaptorRiftFirstClearRewardEntry *this_01;
  LevelOfTheDay_RewardItemType *pLVar5;
  bool bVar6;
  AdaptorRiftFirstClearRewardEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ProgressBackground");
  pHVar4 = (HotUIWidget *)HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  this_01 = ::operator_new(0x138);
  AdaptorRiftFirstClearRewardEntry::AdaptorRiftFirstClearRewardEntry(this_01);
  std::string::string((string *)&local_10,"RiftFirstClearRewardEntry");
  HotUIAdaptor::SetParentAndFile((HotUIAdaptor *)this_01,pHVar4,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_01);
  cVar1 = RiftUtils::ShouldGiveFirstClearRewards();
  if ((cVar1 == '\0') || (iVar3 = RiftUtils::GetDifficultyForNextLevel(), iVar3 != param_2)) {
    uVar2 = RiftUtils::HasEarnedFirstClearReward(param_1,param_2);
    bVar6 = false;
  }
  else {
    uVar2 = true;
    RiftUtils::HasEarnedFirstClearReward(param_1,param_2);
    bVar6 = (bool)uVar2;
  }
  pLVar5 = (LevelOfTheDay_RewardItemType *)
           RiftUtils::GetFirstClearReward((uint)*(ushort *)(param_1 + 0x8e),param_2);
  AdaptorRiftFirstClearRewardEntry::SetReward(this_01,pLVar5,(bool)uVar2,param_2,bVar6);
  local_10 = this_01;
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::push_back
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)(this + 0x170),
             (HotUIAdaptor **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftResultsScreen::refresh() */

void __thiscall AdaptorRiftResultsScreen::refresh(AdaptorRiftResultsScreen *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  HotUIFile *this_00;
  AdaptorZPSMeter *extraout_x0;
  HotUISeedPacketList *pHVar10;
  HotUISeedPacketList *pHVar11;
  vector *pvVar12;
  int *piVar13;
  long *plVar14;
  ProfileMgr *pPVar15;
  PlayerInfo *pPVar16;
  long lVar17;
  TGALogMgr *pTVar18;
  UIWidgetText *pUVar19;
  undefined8 uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined4 *puVar23;
  size_t sVar24;
  code *pcVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  undefined1 auStack_2b8 [8];
  wstring awStack_2b0 [8];
  wstring awStack_2a8 [8];
  wstring awStack_2a0 [8];
  undefined4 local_298 [2];
  undefined4 local_290 [2];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  TGAPlantWarsData aTStack_258 [8];
  undefined1 auStack_250 [8];
  string asStack_248 [8];
  string asStack_240 [8];
  undefined1 auStack_238 [8];
  string asStack_230 [48];
  string asStack_200 [8];
  undefined1 auStack_1f8 [16];
  string asStack_1e8 [8];
  int local_1e0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03698c04(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1e8,"ZombossMeter");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  nop();
  std::string::string(asStack_1e8,"BackupRewardImage");
  pHVar10 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  std::string::string(asStack_1e8,"BackupRewardSeedPacket");
  pHVar11 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  (**(code **)(*(long *)pHVar10 + 0x158))(pHVar10,0);
  (**(code **)(*(long *)pHVar11 + 0x158))(pHVar11,0);
  if (this[0x121] == (AdaptorRiftResultsScreen)0x0) {
    RiftUtils::ShouldUseZPSBackupReward();
    cVar2 = RiftUtils::IsPlayingZombossLevel();
  }
  else {
    cVar2 = RiftUtils::IsPlayingZombossLevel();
  }
  if (cVar2 != '\0') {
    (**(code **)(*(long *)extraout_x0 + 0x158))(extraout_x0,0);
    std::string::string(asStack_1e8,"ZPSText");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_1e8,false);
    std::string::~string(asStack_1e8);
    nop();
  }
  pvVar12 = (vector *)RiftUtils::GetLevelEndBonusRewards();
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_288,pvVar12);
  iVar3 = FUN_03698c24(local_288,local_280);
  pvVar12 = (vector *)RiftUtils::GetLevelEndRewards();
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_270,pvVar12);
  iVar4 = FUN_03698c24(local_270,local_268);
  std::string::string(asStack_1e8,"BonusContent");
  pHVar10 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  iVar5 = FUN_03698c00(*(undefined4 *)(pHVar10 + 0x50));
  iVar6 = FUN_03698c7c(100);
  iVar7 = FUN_03698c7c(0x32);
  iVar5 = iVar7 + (iVar5 + (1 - iVar4) * iVar6 * 2) / 2;
  if (0 < iVar4) {
    lVar26 = 0;
    do {
      piVar13 = (int *)FUN_03698c30(local_270,lVar26);
      plVar14 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar13,piVar13[1],true);
      (**(code **)(*plVar14 + 0x198))(plVar14,iVar5,iVar7,iVar6,iVar6);
      (**(code **)(*(long *)pHVar10 + 0x60))(pHVar10,plVar14);
      piVar13 = (int *)FUN_03698c30(local_270,lVar26);
      iVar1 = *piVar13;
      if (iVar1 == 0x5a3f) {
        pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
        std::string::string(asStack_1e8,"mat_fireworks");
        local_298[0] = PlayerInfo::GetMaterialNum(pPVar16,asStack_1e8);
        std::string::~string(asStack_1e8);
        nop();
        TGAPlantWarsData::TGAPlantWarsData(aTStack_258);
        local_290[0] = 3;
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_290);
        FUN_05474278(aTStack_258,asStack_1e8);
        std::string::~string(asStack_1e8);
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_298);
        FUN_05474278(auStack_250,asStack_1e8);
        std::string::~string(asStack_1e8);
        lVar17 = FUN_03698c30(local_270,lVar26);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar17 + 4));
        FUN_05474278(asStack_248,asStack_1e8);
        std::string::~string(asStack_1e8);
        local_290[0] = 2;
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_290);
        FUN_05474278(asStack_240,asStack_1e8);
        std::string::~string(asStack_1e8);
        pTVar18 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogPurchaseData::TGALogPurchaseData
                  ((TGALogPurchaseData *)asStack_1e8,(TGALogPurchaseData *)aTStack_258);
        TGALogMgr::LogFightZodiac(pTVar18,asStack_1e8);
        TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1e8);
        TGAPlantWarsData::~TGAPlantWarsData(aTStack_258);
        piVar13 = (int *)FUN_03698c30(local_270,lVar26);
        iVar1 = *piVar13;
      }
      lVar26 = lVar26 + 1;
      iVar5 = iVar5 + iVar6 * 2;
      ProfileChangeItemAmount(iVar1,piVar13[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_1e8);
    } while ((int)lVar26 < iVar4);
  }
  std::string::string(asStack_1e8,"BonusLabelContent");
  pHVar10 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  iVar5 = FUN_03698c7c(0x1e);
  uVar8 = FUN_03698c00(*(undefined4 *)(pHVar10 + 0x50));
  cVar2 = RiftUtils::IsPlayingZombossLevel();
  if (cVar2 == '\0') {
    fVar28 = (float)RiftUtils::GetLevelTime();
  }
  else {
    fVar28 = (float)RiftUtils::GetBossLevelTime();
  }
  FUN_05478178(asStack_1e8,L"[RIFT_RESULT_SCREEN_LABEL_COST_TIME]",aTStack_258);
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_1e8,(wstring *)&DAT_056fbd78,
             (wchar_t *)(ulong)(uint)(int)fVar28,(int)auStack_178);
  uVar27 = 0;
  FUN_05476c50(asStack_1e8);
  nop();
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,awStack_2b0);
  (**(code **)(*(long *)pUVar19 + 0x198))(pUVar19,0,0,uVar8,iVar5);
  uVar20 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_03698c14(pUVar19 + 0xe8,uVar20);
  FUN_03698c70(pUVar19 + 0xe0);
  pcVar25 = *(code **)(*(long *)pUVar19 + 0x170);
  Sexy::Color::Color((Color *)asStack_1e8,1);
  (*pcVar25)(pUVar19,0,asStack_1e8);
  iVar4 = (int)pcVar25;
  (**(code **)(*(long *)pHVar10 + 0x60))(pHVar10,pUVar19);
  uVar21 = RiftUtils::GetEndLevelScore();
  FUN_05478178(asStack_1e8,L"[RIFT_RESULT_SCREEN_LABEL_GET_SCORE]",aTStack_258);
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_1e8,(wstring *)&DAT_056fbd78,(wchar_t *)(uVar21 & 0xffffffff),
             iVar4);
  FUN_05476c50(asStack_1e8);
  nop();
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,awStack_2a8);
  (**(code **)(*(long *)pUVar19 + 0x198))(pUVar19,0,iVar5,uVar8,iVar5);
  uVar20 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_03698c14(pUVar19 + 0xe8,uVar20);
  FUN_03698c70(pUVar19 + 0xe0);
  pcVar25 = *(code **)(*(long *)pUVar19 + 0x170);
  Sexy::Color::Color((Color *)asStack_1e8,1);
  (*pcVar25)(pUVar19,0,asStack_1e8);
  (**(code **)(*(long *)pHVar10 + 0x60))(pHVar10,pUVar19);
  uVar9 = RiftUtils::GetCurrentTotalScore();
  FUN_05478178(asStack_1e8,L"[RIFT_RESULT_SCREEN_LABEL_CURRENT_SCORE]",aTStack_258);
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_1e8,(wstring *)&DAT_056fbd78,(wchar_t *)(ulong)uVar9,uVar9);
  FUN_05476c50(asStack_1e8);
  nop();
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,awStack_2a0);
  (**(code **)(*(long *)pUVar19 + 0x198))(pUVar19,0,iVar5 << 1,uVar8);
  uVar20 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_03698c14(pUVar19 + 0xe8,uVar20);
  FUN_03698c70(pUVar19 + 0xe0);
  pcVar25 = *(code **)(*(long *)pUVar19 + 0x170);
  Sexy::Color::Color((Color *)asStack_1e8,1);
  (*pcVar25)(pUVar19,0,asStack_1e8);
  (**(code **)(*(long *)pHVar10 + 0x60))(pHVar10,pUVar19);
  iVar5 = RiftUtils::GetLevelEndZPS();
  iVar4 = RiftUtils::GetCurrentZPS();
  iVar5 = iVar5 - iVar4;
  std::string::string(asStack_1e8,"ZPSText");
  FUN_05478178((wstring *)local_290,L"[RIFT_OUTRO_ZPS_TEXT]",auStack_2b8);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  TodReplaceNumberString((wstring *)local_290,L"{ZPS_AMT}",iVar5);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_1e8,(wstring *)aTStack_258);
  FUN_05476c50(aTStack_258);
  FUN_05476c50((wstring *)local_290);
  nop();
  std::string::~string(asStack_1e8);
  nop();
  pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar15);
  uVar8 = RiftUtils::GetCurrentZPS();
  uVar21 = RiftUtils::GetLevelEndZPS();
  sVar24 = uVar21 & 0xffffffff;
  AdaptorZPSMeter::AnimateZPSChange(extraout_x0,uVar8,sVar24,0);
  playWinLossText(this);
  cVar2 = RiftUtils::IsPlayingZombossLevel();
  TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)aTStack_258);
  iVar5 = 3;
  if (cVar2 == '\0') {
    iVar5 = 2;
  }
  DString::DString((DString *)asStack_1e8,iVar5);
  pcVar22 = (char *)DString::c_str((DString *)asStack_1e8);
  std::string::append((string *)aTStack_258,pcVar22,sVar24);
  DString::~DString((DString *)asStack_1e8);
  uVar20 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88((string *)local_298,uVar20);
  thunk_FUN_05475e00(auStack_250,(string *)local_298);
  iVar5 = RiftUtils::GetDifficultyForNextLevel();
  DString::DString((DString *)asStack_1e8,iVar5);
  pcVar22 = (char *)DString::c_str((DString *)asStack_1e8);
  std::string::append(asStack_248,pcVar22,sVar24);
  DString::~DString((DString *)asStack_1e8);
  DString::DString((DString *)asStack_1e8,(uint)(byte)this[0x120]);
  pcVar22 = (char *)DString::c_str((DString *)asStack_1e8);
  std::string::append(asStack_240,pcVar22,sVar24);
  DString::~DString((DString *)asStack_1e8);
  std::string::string(asStack_1e8,"");
  uVar21 = operator|(0x10,8);
  sVar24 = uVar21 & 0xffffffff;
  FUN_05462618(auStack_178,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  uVar20 = local_270;
  lVar26 = FUN_03698c24(local_270,local_268);
  if (lVar26 != 0) {
    do {
      puVar23 = (undefined4 *)FUN_03698c30(uVar20,uVar27);
      uVar20 = FUN_0546065c(auStack_168,*puVar23);
      uVar20 = FUN_054603b8(uVar20,&DAT_05593348);
      lVar26 = FUN_03698c30(local_270,uVar27);
      uVar20 = FUN_0546065c(uVar20,*(undefined4 *)(lVar26 + 4));
      FUN_054603b8(uVar20,&DAT_05594620);
      uVar20 = local_270;
      piVar13 = (int *)FUN_03698c30(local_270,uVar27);
      if (*piVar13 == 0xbc0) {
        DString::DString((DString *)asStack_1e8,piVar13[1]);
        pcVar22 = (char *)DString::c_str((DString *)asStack_1e8);
        std::string::append(asStack_230,pcVar22,sVar24);
        DString::~DString((DString *)asStack_1e8);
        uVar20 = local_270;
      }
      uVar27 = uVar27 + 1;
      uVar21 = FUN_03698c24(uVar20,local_268);
    } while (uVar27 < uVar21);
  }
  if (0 < iVar3) {
    lVar26 = 0;
    do {
      puVar23 = (undefined4 *)FUN_03698c30(local_288,lVar26);
      uVar20 = FUN_0546065c(auStack_168,*puVar23);
      uVar20 = FUN_054603b8(uVar20,&DAT_05593348);
      lVar17 = lVar26 + 1;
      lVar26 = FUN_03698c30(local_288,lVar26);
      uVar20 = FUN_0546065c(uVar20,*(undefined4 *)(lVar26 + 4));
      FUN_054603b8(uVar20,&DAT_05594620);
      lVar26 = lVar17;
    } while ((int)lVar17 < iVar3);
  }
  FUN_05462824(asStack_1e8,auStack_178);
  FUN_05474278(auStack_238,asStack_1e8);
  std::string::~string(asStack_1e8);
  DString::DString((DString *)asStack_1e8,(int)fVar28);
  pcVar22 = (char *)DString::c_str((DString *)asStack_1e8);
  std::string::append(asStack_200,pcVar22,sVar24);
  DString::~DString((DString *)asStack_1e8);
  pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
  iVar5 = PlayerInfo::GetCurrentArtifact(pPVar16);
  DString::DString((DString *)asStack_1e8,iVar5);
  pcVar22 = (char *)DString::c_str((DString *)asStack_1e8);
  std::string::string((string *)local_290,pcVar22);
  nop();
  DString::~DString((DString *)asStack_1e8);
  PlayerInfo::GetArtifactInfoByID((int)pPVar16);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)asStack_1e8);
  FUN_05475ad8((wstring *)local_290,&DAT_05593348);
  DString::DString((DString *)asStack_1e8,local_1e0);
  uVar20 = DString::c_str((DString *)asStack_1e8);
  FUN_05475ad8((wstring *)local_290,uVar20);
  DString::~DString((DString *)asStack_1e8);
  thunk_FUN_05475e00(auStack_1f8,(wstring *)local_290);
  pTVar18 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPennyPursuitData::TGAPennyPursuitData
            ((TGAPennyPursuitData *)asStack_1e8,(TGAPennyPursuitData *)aTStack_258);
  TGALogMgr::LogPennyPursuit(pTVar18,asStack_1e8);
  TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)asStack_1e8);
  std::string::~string((string *)local_290);
  FUN_054617bc(auStack_178);
  std::string::~string((string *)local_298);
  TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)aTStack_258);
  FUN_05476c50(awStack_2a0);
  FUN_05476c50(awStack_2a8);
  FUN_05476c50(awStack_2b0);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_270);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_288);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftResultsScreen::SetParams(AdaptorRiftResultsScreenParams const&) */

void __thiscall
AdaptorRiftResultsScreen::SetParams
          (AdaptorRiftResultsScreen *this,AdaptorRiftResultsScreenParams *param_1)

{
  AdaptorRiftResultsScreenParams::operator=
            ((AdaptorRiftResultsScreenParams *)(this + 0x120),param_1);
  refresh(this);
  return;
}

