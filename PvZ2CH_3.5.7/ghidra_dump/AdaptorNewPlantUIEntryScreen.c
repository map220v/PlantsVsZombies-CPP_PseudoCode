// Class: AdaptorNewPlantUIEntryScreen


/* AdaptorNewPlantUIEntryScreen::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall
AdaptorNewPlantUIEntryScreen::RemovedFromManager
          (AdaptorNewPlantUIEntryScreen *this,WidgetManager *param_1)

{
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  if (*(AdaptorJoustWinStreakDialog **)(this + 0x128) != (AdaptorJoustWinStreakDialog *)0x0) {
    AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x128));
    *(undefined8 *)(this + 0x128) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::StaticClassInit() */

void AdaptorNewPlantUIEntryScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPlantUIEntryScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_033c09d4,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIEntryScreen::StaticGetClass() */

long * AdaptorNewPlantUIEntryScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPlantUIEntryScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::updateTabImages(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::updateTabImages(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  ulong uVar4;
  undefined8 uVar5;
  HotUIButton *pHVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x168);
    uVar1 = FUN_033bd404(uVar5,*(undefined8 *)(this + 0x170));
    if (uVar1 <= uVar4) break;
    if (param_1 == (int)uVar4) {
      puVar2 = (undefined8 *)FUN_033bd458(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_033bd460(*(undefined8 *)(this + 0x150),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_033bd458(*(undefined8 *)(this + 0x168),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x150);
    }
    else {
      puVar2 = (undefined8 *)FUN_033bd458(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_033bd460(*(undefined8 *)(this + 0x138),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_033bd458(*(undefined8 *)(this + 0x168),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x138);
    }
    pRVar3 = (RtWeakPtrBase *)FUN_033bd460(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
    HotUIButton::SetDownImage(pHVar6,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    puVar2 = (undefined8 *)FUN_033bd458(*(undefined8 *)(this + 0x168),uVar4);
    (**(code **)(*(long *)*puVar2 + 0xd8))((long *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onSetPlant(AdaptorSeedPacketEntryConfig const&) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onSetPlant
          (AdaptorNewPlantUIEntryScreen *this,AdaptorSeedPacketEntryConfig *param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  NetworkMgr *this_03;
  long *plVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  if (0 < *(int *)(param_1 + 0x2c)) {
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_18);
    if (cVar2 == '\0') {
      bVar3 = std::operator==(asStack_18,"gravebuster111");
      if (bVar3) {
        PlayerInfo::UnlockPlant(this_01,asStack_18,false);
        PlayerInfo::AddPlantStartLevel(this_01,asStack_18,0);
        pLVar1 = gLawnApp;
        std::string::string(asStack_10,"");
        LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,1,asStack_10,1);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        uVar5 = NameMapperBase::GetIdForName(this_02,asStack_18);
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
        (**(code **)(*plVar6 + 0x458))(plVar6,uVar5);
      }
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onNewPlantView_AvatarPackageClose() */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNewPlantView_AvatarPackageClose(AdaptorNewPlantUIEntryScreen *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_033bd358(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x18) {
    LawnApp::KillGameMaskUI(gLawnApp);
    this_01 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_18,"BackToMenu");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_18);
    std::string::~string(asStack_18);
    nop();
    uVar4 = FUN_033bd394(*(undefined8 *)(pHVar3 + 0x238));
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets((Insets *)asStack_18);
    GameMaskUI::ShowMask(uVar4,3,asStack_20,asStack_18);
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
/* AdaptorNewPlantUIEntryScreen::showTab(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::showTab(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  string *psVar1;
  RtMixedPtr<Sexy::Image> *this_00;
  LawnApp *this_01;
  char cVar2;
  int iVar3;
  TGALogMgr *this_02;
  ProfileMgr *this_03;
  long lVar4;
  HotUIFile *this_04;
  HotUISeedPacketList *pHVar5;
  undefined8 uVar6;
  char *__s;
  undefined4 local_60 [2];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 4) {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x188);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if ((cVar2 == '\0') &&
       (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
       this_01 = gLawnApp, *(int *)(lVar4 + 0x120) != -1)) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      LawnApp::ShowPlantFamilyUI(this_01,*(int *)(lVar4 + 0x120));
    }
    goto LAB_033c4278;
  }
  psVar1 = (string *)(this + 0x130);
  cVar2 = FUN_0547419c(psVar1);
  if (cVar2 == '\0') {
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar1,false);
  }
  Sexy::StrFormat("%d",asStack_48,(ulong)(uint)param_1);
  std::operator+((string *)&DAT_06a9da00,asStack_48);
  std::string::~string(asStack_48);
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_58,true);
  thunk_FUN_05475e00(psVar1,asStack_58);
  if (param_1 == 3) {
    TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
    local_60[0] = 1;
    FUN_033bd91c(asStack_50,local_60);
    FUN_05474278(asStack_48,asStack_50);
    std::string::~string(asStack_50);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogDecorateData(this_02,(TGALogPlantDecorate *)asStack_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
    updateTabImages(this,2);
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_03);
    this_04 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
    iVar3 = FUN_033bd358(*(undefined4 *)(lVar4 + 0x40));
    if (iVar3 == 0x18) {
      LawnApp::KillGameMaskUI(gLawnApp);
      __s = "AvatarButton";
    }
    else {
      if (iVar3 != 0x1e) goto LAB_033c4270;
      LawnApp::KillGameMaskUI(gLawnApp);
      __s = "AccessoryButton";
    }
    std::string::string(asStack_48,__s);
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_04,asStack_48);
    std::string::~string(asStack_48);
    nop();
    uVar6 = FUN_033bd394(*(undefined8 *)(pHVar5 + 0x238));
    std::string::string(asStack_50,"");
    Sexy::Insets::Insets((Insets *)asStack_48);
    GameMaskUI::ShowMask(uVar6,2,asStack_50,asStack_48);
    std::string::~string(asStack_50);
    nop();
  }
  else {
    updateTabImages(this,param_1 + -1);
  }
LAB_033c4270:
  std::string::~string(asStack_58);
LAB_033c4278:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::refreshPlantPedia() */

void __thiscall AdaptorNewPlantUIEntryScreen::refreshPlantPedia(AdaptorNewPlantUIEntryScreen *this)

{
  char cVar1;
  HotUISeedPacketList *pHVar2;
  HotUISeedPacketList *pHVar3;
  PlantPediaManager *pPVar4;
  long lVar5;
  CachedUIResourcePtr *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantPediaImg");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPediaButton");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pPVar4 = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  cVar1 = PlantPediaManager::IsPediaEnabled(pPVar4,(string *)(lVar5 + 8));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
    (**(code **)(*(long *)pHVar3 + 0x188))(pHVar3,1);
  }
  else {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,1);
    (**(code **)(*(long *)pHVar3 + 0x188))(pHVar3,0);
    pPVar4 = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
    cVar1 = PlantPediaManager::HasReceivedReward(pPVar4,(string *)(lVar5 + 8));
    if (cVar1 == '\0') {
      this_00 = (CachedUIResourcePtr *)&DAT_06a9e010;
    }
    else {
      this_00 = (CachedUIResourcePtr *)&DAT_06a9dea0;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_00);
    HotUIImage::SetImage((HotUIImage *)pHVar2,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIEntryScreen::GetEntryConfigById(int) */

undefined * __thiscall
AdaptorNewPlantUIEntryScreen::GetEntryConfigById(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  undefined *puVar1;
  
  if (*(AdaptorSeedPacketBoard **)(this + 0x120) != (AdaptorSeedPacketBoard *)0x0) {
    puVar1 = (undefined *)
             AdaptorSeedPacketBoard::GetEntryConfigById
                       (*(AdaptorSeedPacketBoard **)(this + 0x120),param_1);
    return puVar1;
  }
  return &DAT_06a9dbf0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onNotifyClickPlant(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNotifyClickPlant(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  AdaptorSeedPacketEntryConfig *pAVar1;
  AdaptorSeedPacketEntryConfig aAStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (AdaptorSeedPacketEntryConfig *)GetEntryConfigById(this,param_1);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig(aAStack_40,pAVar1);
  onSetPlant(this,aAStack_40);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig(aAStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIEntryScreen::ReplaceInnerEntryConfigById(int, AdaptorSeedPacketEntryConfig
   const&) */

void __thiscall
AdaptorNewPlantUIEntryScreen::ReplaceInnerEntryConfigById
          (AdaptorNewPlantUIEntryScreen *this,int param_1,AdaptorSeedPacketEntryConfig *param_2)

{
  if (*(AdaptorNewPlantUIAllPlantsScreen **)(this + 0x128) !=
      (AdaptorNewPlantUIAllPlantsScreen *)0x0) {
    AdaptorNewPlantUIAllPlantsScreen::ReplaceEntryConfigById
              (*(AdaptorNewPlantUIAllPlantsScreen **)(this + 0x128),param_1,param_2);
    return;
  }
  return;
}


/* AdaptorNewPlantUIEntryScreen::ReplaceEntryConfigById(int, AdaptorSeedPacketEntryConfig const&) */

void __thiscall
AdaptorNewPlantUIEntryScreen::ReplaceEntryConfigById
          (AdaptorNewPlantUIEntryScreen *this,int param_1,AdaptorSeedPacketEntryConfig *param_2)

{
  if (*(AdaptorSeedPacketBoard **)(this + 0x120) != (AdaptorSeedPacketBoard *)0x0) {
    AdaptorSeedPacketBoard::ReplaceEntryConfigById
              (*(AdaptorSeedPacketBoard **)(this + 0x120),param_1,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::createAllPlantsScreen() */

void __thiscall
AdaptorNewPlantUIEntryScreen::createAllPlantsScreen(AdaptorNewPlantUIEntryScreen *this)

{
  AdaptorNewPlantUIAllPlantsScreen *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x170);
  AdaptorNewPlantUIAllPlantsScreen::AdaptorNewPlantUIAllPlantsScreen(this_00);
  *(AdaptorNewPlantUIAllPlantsScreen **)(this + 0x128) = this_00;
  FUN_033be180(afStack_28,this);
  AdaptorNewPlantUIAllPlantsScreen::SetOnBackAction(this_00,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x128));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIEntryScreen::onEnterAllPlantsScreen() */

void __thiscall
AdaptorNewPlantUIEntryScreen::onEnterAllPlantsScreen(AdaptorNewPlantUIEntryScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x128);
  if (plVar1 == (long *)0x0) {
    createAllPlantsScreen(this);
  }
  else {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::AdaptorNewPlantUIEntryScreen() */

void __thiscall
AdaptorNewPlantUIEntryScreen::AdaptorNewPlantUIEntryScreen(AdaptorNewPlantUIEntryScreen *this)

{
  undefined *puVar1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  CBMemberTranslatorX aCStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_06618d00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06619060;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066190a8;
  *(undefined8 *)(this + 0x128) = 0;
  Set8BytesTo0(this + 0x130);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  *(undefined8 *)(this + 0x180) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPlantPacketSelected);
  local_120 = local_e0;
  uStack_118 = uStack_d8;
  local_110 = local_d0;
  MessageRouter::
  Subscribe<bool,int,bool,bool,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(bool,int,bool,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyPlantPacketSelected,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPlantView_PlantLevelUp);
  local_130 = local_b8;
  local_140 = local_c8;
  uStack_138 = uStack_c0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_PlantLevelUp,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPlantView_SwitchAvatar);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_SwitchAvatar,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPlantView_SwitchAccessory);
  local_130 = local_88;
  local_140 = local_98;
  uStack_138 = uStack_90;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_SwitchAccessory,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPlantView_UnlockAvatar);
  local_140 = local_80;
  uStack_138 = uStack_78;
  local_130 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_UnlockAvatar,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChangePlantSuccess);
  local_150 = local_58;
  local_160 = local_68;
  uStack_158 = uStack_60;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::ChangePlantSuccess,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyClickPlant);
  local_140 = local_50;
  uStack_138 = uStack_48;
  local_130 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyClickPlant,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPlantView_AvatarPackageClose);
  Sexy::Delegate0::Delegate0<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)()>
            (aDStack_38,aCStack_f8);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NewPlantView_NotifyAvatarPackageClose,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIEntryScreen::StaticNew() */

AdaptorNewPlantUIEntryScreen * AdaptorNewPlantUIEntryScreen::StaticNew(void)

{
  AdaptorNewPlantUIEntryScreen *this;
  
  this = ::operator_new(0x198);
  AdaptorNewPlantUIEntryScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onClickPlant() */

void __thiscall AdaptorNewPlantUIEntryScreen::onClickPlant(AdaptorNewPlantUIEntryScreen *this)

{
  char cVar1;
  int iVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"PlantAnim");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    iVar2 = Dice::getState((Dice *)this_01);
    if ((iVar2 != 1) && (cVar1 = HotUIPlant::IsWaterAnimAlive(), cVar1 != '\0')) {
      HotUIPlant::setState((HotUIPlant *)this_01,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::refreshFavourite() */

void __thiscall AdaptorNewPlantUIEntryScreen::refreshFavourite(AdaptorNewPlantUIEntryScreen *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  HotUISeedPacketList *pHVar4;
  CachedUIResourcePtr *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x188));
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
    FUN_05475d88(asStack_18,lVar3 + 8);
  }
  else {
    std::string::string(asStack_18,"");
    nop();
  }
  std::string::string(asStack_10,"PlantFavouriteButton");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantFavourite");
  pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar2 = NewPlantUIUtils::IsPlantFavourite(asStack_18);
  if (cVar2 == '\0') {
    this_00 = (CachedUIResourcePtr *)&DAT_06a9d980;
  }
  else {
    this_00 = (CachedUIResourcePtr *)&DAT_06a9d8a8;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_00);
  HotUIImage::SetImage((HotUIImage *)pHVar4,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onSwitchFavourite() */

void __thiscall AdaptorNewPlantUIEntryScreen::onSwitchFavourite(AdaptorNewPlantUIEntryScreen *this)

{
  undefined *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *pPVar4;
  long lVar5;
  NameMapperBase *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x188));
  if (bVar1) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
    FUN_05475d88(asStack_10,lVar5 + 8);
    bVar2 = NewPlantUIUtils::IsPlantFavourite(asStack_10);
  }
  else {
    std::string::string(asStack_10,"");
    nop();
    bVar2 = NewPlantUIUtils::IsPlantFavourite(asStack_10);
  }
  if (bVar2 == 0) {
    LocalProfileSaveData::AddSeedChooserFavorite(pPVar4,asStack_10);
  }
  else {
    LocalProfileSaveData::RemoveSeedChooserFavorite(pPVar4,asStack_10);
  }
  refreshFavourite(this);
  this_00 = gMessageRouter;
  this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar3 = NameMapperBase::GetIdForName(this_02,asStack_10);
  MessageRouter::Post<bool,int,bool,int>
            ((MessageRouter *)this_00,Message::NotifyPlantFavouriteChange,(bool)(bVar2 ^ 1),iVar3);
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::ButtonDepress(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  UINewPlantView_PlantDetails *this_00;
  string *psVar4;
  UINewPlantView_LevelUp *this_01;
  NewPlantUIMgr *pNVar5;
  ProfileMgr *this_02;
  PlayerInfo *pPVar6;
  UIPlantPedia *this_03;
  long lVar7;
  HotUISeedPacketList *pHVar8;
  WorldMap *this_04;
  GachaMgr *pGVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = AdaptorJoustScreen::canHandleInput();
  if (cVar1 != '\0') {
    switch(param_1) {
    case 0x3e9:
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      iVar2 = FUN_033bd358(*(undefined4 *)(pPVar6 + 0x40));
      if (iVar2 == 0x18) {
        LawnApp::KillGameMaskUI(gLawnApp);
        this_04 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
        if (this_04 != (WorldMap *)0x0) {
          WorldMap::ForceTutorialToFinish(this_04);
        }
        PlayerInfo::CompleteTutorial(pPVar6,0x18);
        pGVar9 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        GachaMgr::SetTutorialStep(pGVar9,0);
        lVar7 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
        FUN_033bd9c4(lVar7 + 0x10);
      }
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      break;
    case 0x3ea:
      onEnterAllPlantsScreen(this);
      break;
    case 0x3eb:
      onClickPlant(this);
      break;
    case 0x3ec:
      pNVar5 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
      NewPlantUIMgr::Switch(pNVar5,0);
      break;
    case 0x3ed:
      this_01 = (UINewPlantView_LevelUp *)UISingletonDialog<UINewPlantView_LevelUp>::ShowDialog();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
      UINewPlantView_LevelUp::InitView(this_01,(string *)(lVar7 + 8));
      break;
    case 0x3ee:
      psVar4 = (string *)UISingletonDialog<UINewPlantView_AvatarPackage>::ShowDialog();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
      UINewPlantView_AvatarPackage::InitView(psVar4);
      break;
    case 0x3ef:
      psVar4 = (string *)UISingletonDialog<UINewPlantView_AccessoryPackage>::ShowDialog();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
      UINewPlantView_AccessoryPackage::InitView(psVar4);
      break;
    case 0x3f0:
      this_00 = (UINewPlantView_PlantDetails *)
                UISingletonDialog<UINewPlantView_PlantDetails>::ShowDialog();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
      UINewPlantView_PlantDetails::InitView(this_00,(string *)(lVar7 + 8));
      break;
    case 0x3f1:
      UISingletonDialog<UINewPlantView_Classify>::ShowDialog();
      break;
    case 0x3f2:
      onSwitchFavourite(this);
      break;
    case 0x3f3:
      this_03 = (UIPlantPedia *)UISingletonDialog<UIPlantPedia>::ShowDialog();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
      UIPlantPedia::SetPlant(this_03,(string *)(lVar7 + 8));
      std::string::string(asStack_10,"PlantPediaImg");
      pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pHVar8 != (HotUISeedPacketList *)0x0) {
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06a9dea0);
        HotUIImage::SetImage((HotUIImage *)pHVar8,asStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
      break;
    default:
      uVar3 = FUN_033bd404(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
      if ((ulong)(long)param_1 < uVar3) {
        showTab(this,param_1 + 1);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to AdaptorNewPlantUIEntryScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::ButtonDepress(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorNewPlantUIEntryScreen::~AdaptorNewPlantUIEntryScreen() */

void __thiscall
AdaptorNewPlantUIEntryScreen::~AdaptorNewPlantUIEntryScreen(AdaptorNewPlantUIEntryScreen *this)

{
  long *plVar1;
  
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066190a8;
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_06618d00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06619060;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long *)(this + 0x120) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x120) + 0x20);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(long **)(this + 0x120) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x120) + 0x18))();
    }
    *(undefined8 *)(this + 0x120) = 0;
  }
  if (*(long *)(this + 0x180) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x180) + 0x20);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(long **)(this + 0x180) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x180) + 0x18))();
    }
    *(undefined8 *)(this + 0x180) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x168));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x150));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x138));
  std::string::~string((string *)(this + 0x130));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPlantUIEntryScreen::~AdaptorNewPlantUIEntryScreen() */

void __thiscall
AdaptorNewPlantUIEntryScreen::~AdaptorNewPlantUIEntryScreen(AdaptorNewPlantUIEntryScreen *this)

{
  ~AdaptorNewPlantUIEntryScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorNewPlantUIEntryScreen::onAllPlantsScreenBack(std::vector<NewPlantUISortType,
   std::allocator<NewPlantUISortType> > const&, NewPlantUISortValue, bool) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onAllPlantsScreenBack
          (AdaptorNewPlantUIEntryScreen *this,
          vector<NewPlantUISortType,std::allocator<NewPlantUISortType>> *param_1,int param_3,
          undefined1 param_4)

{
  char cVar1;
  HotUIFile *this_00;
  long *plVar2;
  
  if ((0 < *(int *)(this + 400)) &&
     (*(AdaptorSeedPacketBoard **)(this + 0x120) != (AdaptorSeedPacketBoard *)0x0)) {
    AdaptorSeedPacketBoard::SelectEntryById
              (*(AdaptorSeedPacketBoard **)(this + 0x120),*(int *)(this + 400),true,true);
  }
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  plVar2 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar2 + 0x158))(plVar2,1);
  cVar1 = std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>::empty(param_1);
  if (cVar1 == '\0') {
    AdaptorSeedPacketBoard::Filter(*(AdaptorSeedPacketBoard **)(this + 0x120),(vector *)param_1);
  }
  if (param_3 != -1) {
    AdaptorSeedPacketBoard::Sort(*(AdaptorSeedPacketBoard **)(this + 0x120),param_3,param_4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::initStats(std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > > >&) */

void __thiscall
AdaptorNewPlantUIEntryScreen::initStats(AdaptorNewPlantUIEntryScreen *this,map *param_1)

{
  int iVar1;
  string *psVar2;
  undefined8 uVar3;
  bool *pbVar4;
  bool abStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pbVar4 = abStack_30;
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_28);
  Plant::GetFormattedNameString((Plant *)aSStack_20,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_18,"$NAMEVALUE");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_18);
  Sexy::WStringToString(aSStack_20,(wstring *)0x0,pbVar4);
  FUN_05474278(uVar3,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  FUN_05476c50(aSStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onLoadUIView() */

void __thiscall AdaptorNewPlantUIEntryScreen::onLoadUIView(AdaptorNewPlantUIEntryScreen *this)

{
  SecretGachaMgr *this_00;
  undefined8 uVar1;
  HotUIManager *this_01;
  HotUIFile *pHVar2;
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (SecretGachaMgr *)initStats(this,(map *)amStack_38);
  SecretGachaMgr::GetScreenType(this_00);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("NewPlantUIEntryScreen_%s",asStack_40,uVar1);
  this_01 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_01,asStack_40,(map *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::SetPlant(AdaptorSeedPacketEntryConfig const&) */

void __thiscall
AdaptorNewPlantUIEntryScreen::SetPlant
          (AdaptorNewPlantUIEntryScreen *this,AdaptorSeedPacketEntryConfig *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  HotUIFile *pHVar11;
  HotUISeedPacketList *pHVar12;
  string *psVar13;
  uint *puVar14;
  long lVar15;
  HotUISeedPacketList *pHVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar20;
  PlantAccessoryMgr *pPVar21;
  long lVar22;
  CachedUIResourcePtr *this_02;
  int *piVar23;
  PlantType *this_03;
  MagentoProductProps *this_04;
  int extraout_w1;
  string *extraout_x1;
  ulong uVar24;
  UINewPlantView_SkillTab *this_05;
  code *pcVar25;
  string asStack_d0 [8];
  RtWeakPtrBase aRStack_c8 [8];
  Plant aPStack_c0 [8];
  string asStack_b8 [8];
  RtWeakPtrBase aRStack_b0 [8];
  RtWeakPtr aRStack_a8 [8];
  undefined1 auStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [12];
  int local_7c;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_40 [4];
  string asStack_30 [8];
  string asStack_28 [8];
  uint local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar11 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  std::string::string((string *)local_40,"PlantAnim");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  HotUIPlant::SetPlantAndPlay((int)pHVar12);
  std::string::string((string *)local_40,"PlantNameLabel");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x188),(RtWeakPtr *)aRStack_c8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_40,aRStack_c8);
  Plant::GetFormattedNameString(aPStack_c0,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  (**(code **)(*(long *)pHVar12 + 0x360))(pHVar12,aPStack_c0);
  std::string::string((string *)local_40,"PlantLevelIcon");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  local_40[0] = 1;
  puVar14 = (uint *)eastl::max_alt<int>((int *)(param_1 + 8),(int *)local_40);
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_SKILL_%d",asStack_b8,(ulong)*puVar14);
  GetUIResource<Sexy::Image>(asStack_b8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_40,aRStack_b0);
  HotUIImage::SetImage((HotUIImage *)pHVar12,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,param_1[0x14]);
  std::string::string((string *)local_40,"ProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  HotUIWidgetSeedPacketProgressBar::SetInfo((HotUIWidgetSeedPacketProgressBar *)pHVar12,param_1);
  lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  uVar1 = *(undefined4 *)(lVar15 + 0xd4);
  std::string::string((string *)local_40,"PlantProfession");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  local_58 = 0;
  local_70 = uVar1;
  puVar14 = (uint *)eastl::max_alt<int>((int *)&local_70,(int *)&local_58);
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_P_%d",(string *)local_40,(ulong)*puVar14);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aRStack_b0,(RtWeakPtr *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_40,aRStack_b0);
  HotUIImage::SetImage((HotUIImage *)pHVar12,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  uVar5 = NewPlantUIUtils::GetPlantTargetValueRank(*(int *)param_1,0);
  uVar6 = NewPlantUIUtils::GetPlantTargetValueRank(*(int *)param_1,1);
  uVar7 = NewPlantUIUtils::GetPlantTargetValueRank(*(int *)param_1,2);
  uVar8 = NewPlantUIUtils::GetPlantTargetValueRank(*(int *)param_1,3);
  uVar9 = NewPlantUIUtils::GetPlantTargetValueRank(*(int *)param_1,4);
  uVar10 = NewPlantUIUtils::GetPlantTargetValueRank(*(int *)param_1,5);
  std::string::string((string *)local_40,"HPProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"HPRank");
  pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_%d",(string *)local_40,(ulong)uVar5);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  HotUIImage::SetImage((HotUIImage *)pHVar16,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  HotUIWidgetValueProgressBar::SetRank((HotUIWidgetValueProgressBar *)pHVar12,uVar5,5);
  std::string::string((string *)local_40,"AttackProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"AttackRank");
  pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_%d",(string *)local_40,(ulong)uVar6);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  HotUIImage::SetImage((HotUIImage *)pHVar16,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  HotUIWidgetValueProgressBar::SetRank((HotUIWidgetValueProgressBar *)pHVar12,uVar6,5);
  std::string::string((string *)local_40,"RangeProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"RangeRank");
  pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_%d",(string *)local_40,(ulong)uVar7);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  HotUIImage::SetImage((HotUIImage *)pHVar16,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  HotUIWidgetValueProgressBar::SetRank((HotUIWidgetValueProgressBar *)pHVar12,uVar7,5);
  std::string::string((string *)local_40,"PlantingProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"PlantingRank");
  pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_%d",(string *)local_40,(ulong)uVar8);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  HotUIImage::SetImage((HotUIImage *)pHVar16,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  HotUIWidgetValueProgressBar::SetRank((HotUIWidgetValueProgressBar *)pHVar12,uVar8,5);
  std::string::string((string *)local_40,"SupportProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"SupportRank");
  pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_%d",(string *)local_40,(ulong)uVar9);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  HotUIImage::SetImage((HotUIImage *)pHVar16,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  HotUIWidgetValueProgressBar::SetRank((HotUIWidgetValueProgressBar *)pHVar12,uVar9,5);
  std::string::string((string *)local_40,"ControlProgressBar");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"ControlRank");
  pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_%d",(string *)local_40,(ulong)uVar10);
  FUN_05474278(asStack_b8,(string *)local_40);
  std::string::~string((string *)local_40);
  GetUIResource<Sexy::Image>(asStack_b8);
  HotUIImage::SetImage((HotUIImage *)pHVar16,(string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  HotUIWidgetValueProgressBar::SetRank((HotUIWidgetValueProgressBar *)pHVar12,uVar10,5);
  lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  std::vector<PlantTag,std::allocator<PlantTag>>::vector
            ((vector<PlantTag,std::allocator<PlantTag>> *)&local_70,(vector *)(lVar15 + 0xf0));
  for (uVar24 = 0; uVar17 = FUN_033bd410(CONCAT44(uStack_6c,local_70),local_68), uVar24 < uVar17;
      uVar24 = uVar24 + 1) {
    uVar5 = (int)uVar24 + 1;
    Sexy::StrFormat("Tag%d",asStack_90,(ulong)uVar5);
    Sexy::StrFormat("Tag%dText",asStack_88,(ulong)uVar5);
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_90);
    pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    if (pHVar12 != (HotUISeedPacketList *)0x0) {
      piVar23 = (int *)FUN_033bd41c(CONCAT44(uStack_6c,local_70),uVar24);
      uVar17 = NewPlantUIUtils::GetTagColorByPlant(*piVar23);
      Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_TAG_%d",(string *)local_40,uVar17 & 0xffffffff);
      FUN_05474278(asStack_b8,(string *)local_40);
      std::string::~string((string *)local_40);
      GetUIResource<Sexy::Image>(asStack_b8);
      HotUIImage::SetImage((HotUIImage *)pHVar12,(string *)local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      puVar14 = (uint *)FUN_033bd41c(CONCAT44(uStack_6c,local_70),uVar24);
      Sexy::StrFormat(L"[PLANT_TAG_%d]",(string *)local_40,(ulong)*puVar14);
      TodStringTranslate((wstring *)local_40);
      FUN_05476c50((string *)local_40);
      (**(code **)(*(long *)pHVar16 + 0x360))
                (pHVar16,(vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)
                         &local_58);
      (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
      FUN_05476c50((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_58);
    }
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
  }
  uVar17 = 0;
  uVar5 = 0;
  lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_58,
             (vector *)(lVar15 + 0x108));
  uVar20 = CONCAT44(uStack_54,local_58);
  uVar24 = FUN_033bd424(uVar20,local_50);
  if (uVar24 != 0) {
    do {
      lVar15 = FUN_033bd430(uVar20,uVar17);
      if (*(int *)(lVar15 + 4) <= *(int *)(param_1 + 8)) {
        uVar6 = (int)uVar17 + 1;
        Sexy::StrFormat("SpecialTag%d",aRStack_98,(ulong)uVar6);
        Sexy::StrFormat("SpecialTag%dText",asStack_90,(ulong)uVar6);
        pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                            (*(HotUIFile **)(this + 0xf8),(string *)aRStack_98);
        pHVar16 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                            (*(HotUIFile **)(this + 0xf8),asStack_90);
        if (pHVar12 != (HotUISeedPacketList *)0x0) {
          uVar5 = uVar5 + 1;
          piVar23 = (int *)FUN_033bd430(CONCAT44(uStack_54,local_58),uVar17);
          uVar24 = NewPlantUIUtils::GetSpecialTagColorByPlant(*piVar23);
          Sexy::StrFormat("IMAGE_UI_NEW_PLANT_VALUE_SPECIAL_TAG_%d",(string *)local_40,
                          uVar24 & 0xffffffff);
          FUN_05474278(asStack_b8,(string *)local_40);
          std::string::~string((string *)local_40);
          GetUIResource<Sexy::Image>(asStack_b8);
          HotUIImage::SetImage((HotUIImage *)pHVar12,(string *)local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
          ;
          puVar14 = (uint *)FUN_033bd430(CONCAT44(uStack_54,local_58),uVar17);
          Sexy::StrFormat(L"[PLANT_SPECIAL_TAG_%d]",(string *)local_40,(ulong)*puVar14);
          TodStringTranslate((wstring *)local_40);
          FUN_05476c50((string *)local_40);
          (**(code **)(*(long *)pHVar16 + 0x360))(pHVar16,asStack_88);
          (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
          FUN_05476c50(asStack_88);
        }
        std::string::~string(asStack_90);
        std::string::~string((string *)aRStack_98);
        uVar20 = CONCAT44(uStack_54,local_58);
        uVar24 = FUN_033bd424(uVar20,local_50);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar24);
  }
  pHVar11 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_40,"PlantDescriptionText");
  plVar18 = (long *)HotUIFile::GetWidgetByName(pHVar11,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  cVar2 = std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::empty
                    ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_58);
  if (cVar2 == '\0') {
    (**(code **)(*plVar18 + 0x1a8))(plVar18,(int)plVar18[9],*(undefined4 *)(this + 0x194));
  }
  else {
    iVar4 = FUN_033be204(0x1e);
    (**(code **)(*plVar18 + 0x1a8))(plVar18,(int)plVar18[9],*(int *)(this + 0x194) - iVar4);
  }
  std::string::string((string *)local_40,"TagList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),(string *)local_40);
  lVar15 = HotUIWidget::GetProps();
  std::string::~string((string *)local_40);
  nop();
  uVar24 = FUN_033bd410(CONCAT44(uStack_6c,local_70),local_68);
  uVar17 = uVar24 & 0xffffffff;
  uVar24 = (long)(int)uVar24;
  while( true ) {
    uVar19 = FUN_033bd3b0(*(undefined8 *)(lVar15 + 0xb8),*(undefined8 *)(lVar15 + 0xc0));
    if (uVar19 <= uVar24) break;
    uVar17 = (ulong)((int)uVar17 + 1);
    Sexy::StrFormat("Tag%d",(string *)local_40,uVar17);
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),(string *)local_40);
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    std::string::~string((string *)local_40);
    uVar24 = uVar24 + 1;
  }
  std::string::string((string *)local_40,"TagList");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  HotUIHorizontalList::RepositionChildrenAndResize((HotUIHorizontalList *)pHVar12);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"SpecialTagList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),(string *)local_40);
  lVar15 = HotUIWidget::GetProps();
  std::string::~string((string *)local_40);
  nop();
  uVar24 = (long)(int)uVar5;
  while( true ) {
    uVar17 = FUN_033bd3b0(*(undefined8 *)(lVar15 + 0xb8),*(undefined8 *)(lVar15 + 0xc0));
    if (uVar17 <= uVar24) break;
    uVar5 = uVar5 + 1;
    Sexy::StrFormat("SpecialTag%d",(string *)local_40,(ulong)uVar5);
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),(string *)local_40);
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    std::string::~string((string *)local_40);
    uVar24 = uVar24 + 1;
  }
  std::string::string((string *)local_40,"SpecialTagList");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  HotUIHorizontalList::RepositionChildrenAndResize((HotUIHorizontalList *)pHVar12);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"PlantDescriptionText");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                      (*(HotUIFile **)(this + 0xf8),(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  pcVar25 = *(code **)(*(long *)pHVar12 + 0x360);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,aRStack_c8);
  Plant::GetFormattedDescriptionHeader((Plant *)local_40,asStack_88);
  (*pcVar25)(pHVar12,(string *)local_40);
  FUN_05476c50((string *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = PlayerInfo::GetEquipAvatarID(this_01,asStack_d0);
  if (uVar5 == 0xffffffff) {
    std::string::string((string *)local_40,"AvatarContent");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),(string *)local_40);
    std::string::~string((string *)local_40);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    std::string::string((string *)local_40,"AvatarDescriptionText");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),(string *)local_40);
    std::string::~string((string *)local_40);
    nop();
    pcVar25 = *(code **)(*(long *)pHVar12 + 0x360);
    TodStringTranslate(L"[NEW_PLANT_UI_VALUE_AVATAR_DES_TEXT_DEFAULT]");
    (*pcVar25)(pHVar12,(string *)local_40);
    FUN_05476c50((string *)local_40);
  }
  else {
    lVar15 = NewAvatar::GetAvatarTinyImage(uVar5);
    if (lVar15 != 0) {
      std::string::string((string *)local_40,"AvatarContent");
      pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                          (*(HotUIFile **)(this + 0xf8),(string *)local_40);
      std::string::~string((string *)local_40);
      nop();
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)asStack_88);
      HotUIImage::SetImage((HotUIImage *)pHVar12,(string *)local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      Sexy::RtId::~RtId((RtId *)asStack_88);
      (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
      std::string::string((string *)local_40,"AvatarDescriptionText");
      pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                          (*(HotUIFile **)(this + 0xf8),(string *)local_40);
      std::string::~string((string *)local_40);
      nop();
      pcVar25 = *(code **)(*(long *)pHVar12 + 0x360);
      NewPlantUIUtils::GetAvatarDescription((NewPlantUIUtils *)(ulong)uVar5,(int)*(long *)pHVar12);
      (*pcVar25)(pHVar12,(string *)local_40);
      FUN_05476c50((string *)local_40);
    }
  }
  this_05 = *(UINewPlantView_SkillTab **)(this + 0x180);
  if (this_05 != (UINewPlantView_SkillTab *)0x0) {
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
    UINewPlantView_SkillTab::InitView(this_05,(string *)(lVar15 + 8));
  }
  uVar20 = Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,aRStack_c8);
  PlantAccessoryMgr::GetAccessoryInfoForPlantType((string *)local_40,uVar20,asStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  bVar3 = std::operator!=((string *)local_40,"");
  if (bVar3) {
    NewPlantUIUtils::GetAccessoryContentImage((NewPlantUIUtils *)(ulong)local_20,extraout_w1);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_a8);
    if (bVar3) {
      std::string::string(asStack_88,"AccessoryBg");
      pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                          (*(HotUIFile **)(this + 0xf8),asStack_88);
      std::string::~string(asStack_88);
      nop();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,(RtWeakPtrBase *)aRStack_a8);
      HotUIImage::SetImage((HotUIImage *)pHVar12,asStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    }
    std::string::string(asStack_88,"AccessoryContent");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    GetUIResource<Sexy::Image>(asStack_28);
    HotUIImage::SetImage((HotUIImage *)pHVar12,asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
    std::string::string(asStack_88,"AccessoryLevel");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    Sexy::ToWString(asStack_30);
    TodStringTranslate((wstring *)asStack_88);
    FUN_05476c50(asStack_88);
    pPVar21 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,aRStack_c8);
    lVar15 = PlantAccessoryMgr::GetAccessoryForPlant(pPVar21,asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    if (lVar15 != 0) {
      if (0 < *(int *)(lVar15 + 0x18)) {
        Sexy::StrFormat("IMAGE_UI_PACKETS_LEVEL_%d",asStack_90);
        GetUIResource<Sexy::Image>(asStack_90);
        HotUIImage::SetImage((HotUIImage *)pHVar12,asStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88)
        ;
        std::string::~string(asStack_90);
        (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
      }
      psVar13 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryByType(psVar13);
      iVar4 = *(int *)(lVar15 + 0x18);
      if (0 < iVar4) {
        lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        uVar24 = FUN_033bd438(*(undefined8 *)(lVar22 + 0x90),*(undefined8 *)(lVar22 + 0x98));
        if ((ulong)(long)iVar4 <= uVar24) {
          lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          lVar15 = FUN_033bd44c(*(undefined8 *)(lVar22 + 0x90),(long)(*(int *)(lVar15 + 0x18) + -1))
          ;
          Sexy::ToWString((string *)(lVar15 + 0x20));
          TodStringTranslate((wstring *)asStack_90);
          FUN_054766c8(auStack_a0,asStack_88);
          FUN_05476c50(asStack_88);
          FUN_05476c50(asStack_90);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    }
    std::string::string(asStack_88,"AccessoryDescriptionText");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x360))(pHVar12,auStack_a0);
    FUN_05476c50(auStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  }
  else {
    std::string::string(asStack_88,"AccessoryBg");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06a9d660);
    HotUIImage::SetImage((HotUIImage *)pHVar12,asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    std::string::string(asStack_88,"AccessoryContent");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
    std::string::string(asStack_88,"AccessoryLevel");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,bVar3);
    std::string::string(asStack_88,"AccessoryDescriptionText");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    std::string::~string(asStack_88);
    nop();
    pcVar25 = *(code **)(*(long *)pHVar12 + 0x360);
    TodStringTranslate(L"[NEW_PLANT_UI_VALUE_ACCESSORY_DES_TEXT_DEFAULT]");
    (*pcVar25)(pHVar12,asStack_88);
    FUN_05476c50(asStack_88);
  }
  std::string::string(asStack_88,"PlantPot");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_88)
  ;
  std::string::~string(asStack_88);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,aRStack_c8);
  cVar2 = NewPlantUIUtils::IsWaterPlant(asStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  if (cVar2 == '\0') {
    this_02 = (CachedUIResourcePtr *)&DAT_06a9d920;
  }
  else {
    this_02 = (CachedUIResourcePtr *)&DAT_06a9da08;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_02);
  HotUIImage::SetImage((HotUIImage *)pHVar12,asStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  bVar3 = *(int *)(lVar15 + 0x120) == -1;
  if (bVar3) {
    std::string::string(asStack_88,"TabBtn4");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    lVar15 = *(long *)pHVar12;
  }
  else {
    std::string::string(asStack_88,"TabBtn4");
    pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                        (*(HotUIFile **)(this + 0xf8),asStack_88);
    lVar15 = *(long *)pHVar12;
  }
  (**(code **)(lVar15 + 0x158))(pHVar12,!bVar3);
  std::string::~string(asStack_88);
  nop();
  std::string::string(asStack_88,"LevelUpHint");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_88)
  ;
  (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0 < *(int *)(param_1 + 0x28));
  std::string::~string(asStack_88);
  nop();
  std::string::string(asStack_88,"AvatarHint");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_88)
  ;
  (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0 < *(int *)(param_1 + 0x30));
  std::string::~string(asStack_88);
  nop();
  NewPlantUIUtils::GetProductByName((NewPlantUIUtils *)asStack_d0,extraout_x1);
  std::string::string(asStack_88,"LevelUpButton");
  pHVar12 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_88)
  ;
  std::string::~string(asStack_88);
  nop();
  cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_d0);
  if (cVar2 != '\0') {
    iVar4 = *(int *)(param_1 + 8);
    this_03 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
    lVar15 = PlantType::GetProps(this_03);
    if (iVar4 < *(int *)(lVar15 + 0x2c)) {
      (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,1);
      GachaItemInfo::GachaItemInfo((GachaItemInfo *)asStack_88);
      this_04 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
      cVar2 = MagentoProductProps::GetCurrentLevelPriceData
                        (this_04,*(int *)(param_1 + 8),(LevelUpPriceData *)asStack_88);
      if (cVar2 == '\0') {
        (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12);
      }
      else if ((local_78 == 2) &&
              (iVar4 = PlayerInfo::GetNumCoins(this_01,false), local_7c <= iVar4)) {
        PlayerInfo::GetPlantPieceCount(this_01,asStack_d0,false);
      }
      goto LAB_033d0954;
    }
  }
  (**(code **)(*(long *)pHVar12 + 0x158))(pHVar12,0);
LAB_033d0954:
  refreshFavourite(this);
  refreshPlantPedia(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_40);
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::~vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_58);
  std::vector<PlantTag,std::allocator<PlantTag>>::~vector
            ((vector<PlantTag,std::allocator<PlantTag>> *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  std::string::~string(asStack_b8);
  FUN_05476c50(aPStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  std::string::~string(asStack_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::changePlant(int, bool) */

void __thiscall
AdaptorNewPlantUIEntryScreen::changePlant
          (AdaptorNewPlantUIEntryScreen *this,int param_1,bool param_2)

{
  AdaptorSeedPacketEntryConfig *pAVar1;
  AdaptorSeedPacketEntryConfig aAStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (AdaptorSeedPacketEntryConfig *)GetEntryConfigById(this,param_1);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig(aAStack_40,pAVar1);
  SetPlant(this,aAStack_40);
  if ((param_2) && (*(AdaptorSeedPacketBoard **)(this + 0x120) != (AdaptorSeedPacketBoard *)0x0)) {
    AdaptorSeedPacketBoard::LocateSelectedEntry(*(AdaptorSeedPacketBoard **)(this + 0x120));
  }
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig(aAStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIEntryScreen::onNotifyPlantPacketSelected(bool, int, bool, bool) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNotifyPlantPacketSelected
          (AdaptorNewPlantUIEntryScreen *this,bool param_1,int param_2,bool param_3,bool param_4)

{
  if (param_3) {
    if (!param_1) {
      changePlant(this,param_2,param_4);
      return;
    }
    *(int *)(this + 400) = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::RefreshPlant(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::RefreshPlant(AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar5;
  MagentoProductProps *this_02;
  long lVar6;
  PlantType *this_03;
  string *extraout_x1;
  uint uVar7;
  NewPlantUIUtils aNStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  GachaItemInfo aGStack_58 [4];
  undefined4 local_54;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  uint local_28;
  uint local_24;
  string asStack_20 [8];
  uint local_18;
  uint local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&local_40);
  local_40 = param_1;
  local_38 = PlayerInfo::GetPlantStarLevel(this_01,(string *)aNStack_78,false);
  NewPlantUIUtils::GetProductByName(aNStack_78,extraout_x1);
  GachaItemInfo::GachaItemInfo(aGStack_58);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,local_38,(LevelUpPriceData *)aGStack_58);
  iVar4 = local_38;
  if (cVar1 != '\0') {
    this_03 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    lVar6 = PlantType::GetProps(this_03);
    if (iVar4 < *(int *)(lVar6 + 0x2c)) {
      local_30 = local_54;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  local_3c = 0;
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    local_3c = *(undefined4 *)(lVar6 + 0xd0);
  }
  uVar7 = 0;
  local_34 = PlayerInfo::GetPlantPieceCount(this_01,(string *)aNStack_78,false);
  local_2c = 0 < local_38;
  thunk_FUN_05475e00(asStack_20,aNStack_78);
  local_28 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  local_28 = local_28 & 0xff;
  local_24 = LocalProfileSaveData::IsSeedChooserFavorite(this_01,asStack_20);
  local_24 = local_24 & 0xff;
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    iVar4 = PlayerInfo::GetPlantPieceCount(this_01,asStack_20,false);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uVar7 = (uint)(*(int *)(lVar6 + 0x90) <= iVar4);
  }
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    local_30 = *(undefined4 *)(lVar6 + 0x90);
  }
  local_14 = uVar7;
  cVar1 = canPlantLevelUp((RtWeakPtr *)aRStack_68,false,true);
  local_18 = 0;
  if (cVar1 != '\0') {
    bVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
    local_18 = (uint)bVar3;
  }
  FUN_05475d88(asStack_60,aNStack_78);
  local_10 = NewPlantUIUtils::canPlantUnlockAvatar(asStack_60);
  local_10 = local_10 & 0xff;
  std::string::~string(asStack_60);
  ReplaceEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&local_40);
  ReplaceInnerEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&local_40);
  SetPlant(this,(AdaptorSeedPacketEntryConfig *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aNStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onNewPlantView_PlantLevelUp(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNewPlantView_PlantLevelUp
          (AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar5;
  MagentoProductProps *this_02;
  long lVar6;
  PlantType *this_03;
  string *extraout_x1;
  uint uVar7;
  NewPlantUIUtils aNStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  GachaItemInfo aGStack_58 [4];
  undefined4 uStack_54;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  string asStack_20 [8];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  iStack_40 = param_1;
  iStack_38 = PlayerInfo::GetPlantStarLevel(this_01,(string *)aNStack_78,false);
  NewPlantUIUtils::GetProductByName(aNStack_78,extraout_x1);
  GachaItemInfo::GachaItemInfo(aGStack_58);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,iStack_38,(LevelUpPriceData *)aGStack_58);
  iVar4 = iStack_38;
  if (cVar1 != '\0') {
    this_03 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    lVar6 = PlantType::GetProps(this_03);
    if (iVar4 < *(int *)(lVar6 + 0x2c)) {
      uStack_30 = uStack_54;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  uStack_3c = 0;
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    uStack_3c = *(undefined4 *)(lVar6 + 0xd0);
  }
  uVar7 = 0;
  uStack_34 = PlayerInfo::GetPlantPieceCount(this_01,(string *)aNStack_78,false);
  uStack_2c = 0 < iStack_38;
  thunk_FUN_05475e00(asStack_20,aNStack_78);
  uStack_28 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  uStack_28 = uStack_28 & 0xff;
  uStack_24 = LocalProfileSaveData::IsSeedChooserFavorite(this_01,asStack_20);
  uStack_24 = uStack_24 & 0xff;
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    iVar4 = PlayerInfo::GetPlantPieceCount(this_01,asStack_20,false);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uVar7 = (uint)(*(int *)(lVar6 + 0x90) <= iVar4);
  }
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uStack_30 = *(undefined4 *)(lVar6 + 0x90);
  }
  uStack_14 = uVar7;
  cVar1 = canPlantLevelUp((RtWeakPtr *)aRStack_68,false,true);
  uStack_18 = 0;
  if (cVar1 != '\0') {
    bVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
    uStack_18 = (uint)bVar3;
  }
  FUN_05475d88(asStack_60,aNStack_78);
  uStack_10 = NewPlantUIUtils::canPlantUnlockAvatar(asStack_60);
  uStack_10 = uStack_10 & 0xff;
  std::string::~string(asStack_60);
  ReplaceEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  ReplaceInnerEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  SetPlant(this,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aNStack_78);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onNewPlantView_SwitchAvatar(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNewPlantView_SwitchAvatar
          (AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar5;
  MagentoProductProps *this_02;
  long lVar6;
  PlantType *this_03;
  string *extraout_x1;
  uint uVar7;
  NewPlantUIUtils aNStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  GachaItemInfo aGStack_58 [4];
  undefined4 uStack_54;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  string asStack_20 [8];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  iStack_40 = param_1;
  iStack_38 = PlayerInfo::GetPlantStarLevel(this_01,(string *)aNStack_78,false);
  NewPlantUIUtils::GetProductByName(aNStack_78,extraout_x1);
  GachaItemInfo::GachaItemInfo(aGStack_58);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,iStack_38,(LevelUpPriceData *)aGStack_58);
  iVar4 = iStack_38;
  if (cVar1 != '\0') {
    this_03 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    lVar6 = PlantType::GetProps(this_03);
    if (iVar4 < *(int *)(lVar6 + 0x2c)) {
      uStack_30 = uStack_54;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  uStack_3c = 0;
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    uStack_3c = *(undefined4 *)(lVar6 + 0xd0);
  }
  uVar7 = 0;
  uStack_34 = PlayerInfo::GetPlantPieceCount(this_01,(string *)aNStack_78,false);
  uStack_2c = 0 < iStack_38;
  thunk_FUN_05475e00(asStack_20,aNStack_78);
  uStack_28 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  uStack_28 = uStack_28 & 0xff;
  uStack_24 = LocalProfileSaveData::IsSeedChooserFavorite(this_01,asStack_20);
  uStack_24 = uStack_24 & 0xff;
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    iVar4 = PlayerInfo::GetPlantPieceCount(this_01,asStack_20,false);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uVar7 = (uint)(*(int *)(lVar6 + 0x90) <= iVar4);
  }
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uStack_30 = *(undefined4 *)(lVar6 + 0x90);
  }
  uStack_14 = uVar7;
  cVar1 = canPlantLevelUp((RtWeakPtr *)aRStack_68,false,true);
  uStack_18 = 0;
  if (cVar1 != '\0') {
    bVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
    uStack_18 = (uint)bVar3;
  }
  FUN_05475d88(asStack_60,aNStack_78);
  uStack_10 = NewPlantUIUtils::canPlantUnlockAvatar(asStack_60);
  uStack_10 = uStack_10 & 0xff;
  std::string::~string(asStack_60);
  ReplaceEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  ReplaceInnerEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  SetPlant(this,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aNStack_78);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onNewPlantView_SwitchAccessory(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNewPlantView_SwitchAccessory
          (AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar5;
  MagentoProductProps *this_02;
  long lVar6;
  PlantType *this_03;
  string *extraout_x1;
  uint uVar7;
  NewPlantUIUtils aNStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  GachaItemInfo aGStack_58 [4];
  undefined4 uStack_54;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  string asStack_20 [8];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  iStack_40 = param_1;
  iStack_38 = PlayerInfo::GetPlantStarLevel(this_01,(string *)aNStack_78,false);
  NewPlantUIUtils::GetProductByName(aNStack_78,extraout_x1);
  GachaItemInfo::GachaItemInfo(aGStack_58);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,iStack_38,(LevelUpPriceData *)aGStack_58);
  iVar4 = iStack_38;
  if (cVar1 != '\0') {
    this_03 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    lVar6 = PlantType::GetProps(this_03);
    if (iVar4 < *(int *)(lVar6 + 0x2c)) {
      uStack_30 = uStack_54;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  uStack_3c = 0;
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    uStack_3c = *(undefined4 *)(lVar6 + 0xd0);
  }
  uVar7 = 0;
  uStack_34 = PlayerInfo::GetPlantPieceCount(this_01,(string *)aNStack_78,false);
  uStack_2c = 0 < iStack_38;
  thunk_FUN_05475e00(asStack_20,aNStack_78);
  uStack_28 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  uStack_28 = uStack_28 & 0xff;
  uStack_24 = LocalProfileSaveData::IsSeedChooserFavorite(this_01,asStack_20);
  uStack_24 = uStack_24 & 0xff;
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    iVar4 = PlayerInfo::GetPlantPieceCount(this_01,asStack_20,false);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uVar7 = (uint)(*(int *)(lVar6 + 0x90) <= iVar4);
  }
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uStack_30 = *(undefined4 *)(lVar6 + 0x90);
  }
  uStack_14 = uVar7;
  cVar1 = canPlantLevelUp((RtWeakPtr *)aRStack_68,false,true);
  uStack_18 = 0;
  if (cVar1 != '\0') {
    bVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
    uStack_18 = (uint)bVar3;
  }
  FUN_05475d88(asStack_60,aNStack_78);
  uStack_10 = NewPlantUIUtils::canPlantUnlockAvatar(asStack_60);
  uStack_10 = uStack_10 & 0xff;
  std::string::~string(asStack_60);
  ReplaceEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  ReplaceInnerEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  SetPlant(this,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aNStack_78);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onNewPlantView_UnlockAvatar(int) */

void __thiscall
AdaptorNewPlantUIEntryScreen::onNewPlantView_UnlockAvatar
          (AdaptorNewPlantUIEntryScreen *this,int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar5;
  MagentoProductProps *this_02;
  long lVar6;
  PlantType *this_03;
  string *extraout_x1;
  uint uVar7;
  NewPlantUIUtils aNStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  GachaItemInfo aGStack_58 [4];
  undefined4 uStack_54;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  string asStack_20 [8];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  iStack_40 = param_1;
  iStack_38 = PlayerInfo::GetPlantStarLevel(this_01,(string *)aNStack_78,false);
  NewPlantUIUtils::GetProductByName(aNStack_78,extraout_x1);
  GachaItemInfo::GachaItemInfo(aGStack_58);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,iStack_38,(LevelUpPriceData *)aGStack_58);
  iVar4 = iStack_38;
  if (cVar1 != '\0') {
    this_03 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    lVar6 = PlantType::GetProps(this_03);
    if (iVar4 < *(int *)(lVar6 + 0x2c)) {
      uStack_30 = uStack_54;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  uStack_3c = 0;
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    uStack_3c = *(undefined4 *)(lVar6 + 0xd0);
  }
  uVar7 = 0;
  uStack_34 = PlayerInfo::GetPlantPieceCount(this_01,(string *)aNStack_78,false);
  uStack_2c = 0 < iStack_38;
  thunk_FUN_05475e00(asStack_20,aNStack_78);
  uStack_28 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  uStack_28 = uStack_28 & 0xff;
  uStack_24 = LocalProfileSaveData::IsSeedChooserFavorite(this_01,asStack_20);
  uStack_24 = uStack_24 & 0xff;
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    iVar4 = PlayerInfo::GetPlantPieceCount(this_01,asStack_20,false);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uVar7 = (uint)(*(int *)(lVar6 + 0x90) <= iVar4);
  }
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    uStack_30 = *(undefined4 *)(lVar6 + 0x90);
  }
  uStack_14 = uVar7;
  cVar1 = canPlantLevelUp((RtWeakPtr *)aRStack_68,false,true);
  uStack_18 = 0;
  if (cVar1 != '\0') {
    bVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_20);
    uStack_18 = (uint)bVar3;
  }
  FUN_05475d88(asStack_60,aNStack_78);
  uStack_10 = NewPlantUIUtils::canPlantUnlockAvatar(asStack_60);
  uStack_10 = uStack_10 & 0xff;
  std::string::~string(asStack_60);
  ReplaceEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  ReplaceInnerEntryConfigById(this,param_1,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  SetPlant(this,(AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)&iStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aNStack_78);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onChangePlantSuccess(std::string const&) */

void AdaptorNewPlantUIEntryScreen::onChangePlantSuccess(string *param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  wchar16 *pwVar4;
  NameMapperBase *this_01;
  string *in_x1;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar5 = aLStack_18;
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::UnlockPlant(this_00,in_x1,false);
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoTestPlantLevelUp");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    std::string::string(asStack_10,"");
    LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,1,asStack_10,1);
    std::string::~string(asStack_10);
    nop();
  }
  this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar3 = NameMapperBase::GetIdForName(this_01,in_x1);
  RefreshPlant((AdaptorNewPlantUIEntryScreen *)param_1,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::setup() */

void __thiscall AdaptorNewPlantUIEntryScreen::setup(AdaptorNewPlantUIEntryScreen *this)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  HotUIFile *pHVar6;
  HotUISeedPacketList *pHVar7;
  HotUISeedPacketList *pHVar8;
  HotUIFile *pHVar9;
  long *plVar10;
  UINewPlantView_SkillTab *this_00;
  long lVar11;
  WidgetContainer *pWVar12;
  AdaptorSeedPacketBoard *this_01;
  NewPlantUIUtils *this_02;
  undefined8 *puVar13;
  ulong uVar14;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  TGALogMgr *pTVar15;
  string *__n;
  ulong uVar16;
  undefined8 uVar17;
  string asStack_218 [8];
  AdaptorSeedPacketConfig aAStack_210 [24];
  string asStack_1f8 [56];
  undefined1 auStack_1c0 [8];
  string asStack_1b8 [64];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar6 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  if (pHVar6 == (HotUIFile *)0x0) goto LAB_033d2bd4;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  std::string::string(asStack_1b8,"BackToMenu");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3e9,pBVar1);
  std::string::string(asStack_1b8,"SwitchToOld");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3ec,pBVar1);
  std::string::string(asStack_1b8,"AllPlantsBtn");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3ea,pBVar1);
  std::string::string(asStack_1b8,"LevelUpButton");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3ed,pBVar1);
  std::string::string(asStack_1b8,"AvatarButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3ee,pBVar1);
  std::string::string(asStack_1b8,"AccessoryButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3ef,pBVar1);
  std::string::string(asStack_1b8,"ValueDetailButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f0,pBVar1);
  std::string::string(asStack_1b8,"ValueInfoBtn");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f1,pBVar1);
  std::string::string(asStack_1b8,"PlantFavouriteButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f2,pBVar1);
  std::string::string(asStack_1b8,"PlantPediaButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f3,pBVar1);
  std::string::string(asStack_1b8,"PlantProfessionButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f1,pBVar1);
  pHVar9 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1b8,"TabWidget2");
  plVar10 = (long *)HotUIFile::GetWidgetByName(pHVar9,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  this_00 = ::operator_new(0x108);
  UINewPlantView_SkillTab::UINewPlantView_SkillTab(this_00);
  *(UINewPlantView_SkillTab **)(this + 0x180) = this_00;
  uVar2 = FUN_033bd2d8((int)plVar10[10]);
  uVar3 = FUN_033bd2dc(*(undefined4 *)((long)plVar10 + 0x54));
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,uVar2,uVar3);
  (**(code **)(*plVar10 + 0x60))(plVar10,*(undefined8 *)(this + 0x180));
  pHVar9 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1b8,"PlantDescriptionText");
  lVar11 = HotUIFile::GetWidgetByName(pHVar9,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(lVar11 + 0x4c);
  std::string::string(asStack_1b8,"SeedPacketBoardHolder");
  pWVar12 = (WidgetContainer *)HotUIFile::GetWidgetByName(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  this_01 = ::operator_new(0x160);
  this_02 = (NewPlantUIUtils *)AdaptorSeedPacketBoard::AdaptorSeedPacketBoard(this_01);
  *(AdaptorSeedPacketBoard **)(this + 0x120) = this_01;
  NewPlantUIUtils::buildSeedPacketInfo(this_02);
  AdaptorSeedPacketBoard::Configure
            (*(AdaptorSeedPacketBoard **)(this + 0x120),pWVar12,aAStack_210,false);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
  AdaptorSeedPacketBoard::SelectEntry(*(AdaptorSeedPacketBoard **)(this + 0x120),0);
  std::string::string(asStack_1b8,"PlantAnimButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3eb,pBVar1);
  pHVar6 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1b8,"RightButtonList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIVerticalButtonList::GetButtons();
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x168),
             (vector *)asStack_1b8);
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_1b8);
  uVar16 = 0;
  while( true ) {
    uVar17 = *(undefined8 *)(this + 0x168);
    uVar14 = FUN_033bd404(uVar17,*(undefined8 *)(this + 0x170));
    if (uVar14 <= uVar16) break;
    puVar13 = (undefined8 *)FUN_033bd458(uVar17,uVar16);
    HotUIButton::SetListener((HotUIButton *)*puVar13,(int)uVar16,pBVar1);
    FUN_033bd458(*(undefined8 *)(this + 0x168),uVar16);
    HotUIButton::GetUpImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x138),(RtWeakPtr *)asStack_1b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_1b8);
    FUN_033bd458(*(undefined8 *)(this + 0x168),uVar16);
    HotUIButton::GetDownImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x150),(RtWeakPtr *)asStack_1b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_1b8);
    Sexy::StrFormat("%d",asStack_1b8,uVar16 + 1 & 0xffffffff);
    std::operator+((string *)&DAT_06a9da00,asStack_1b8);
    std::string::~string(asStack_1b8);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_1f8,false);
    std::string::~string(asStack_1f8);
    uVar16 = uVar16 + 1;
  }
  showTab(this,1);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  std::string::string(asStack_1b8,"mat_universal_plant_chips");
  uVar2 = PlayerInfo::GetMaterialNum(this_04,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  __n = asStack_1f8;
  std::string::string(asStack_1b8,"mat_general_plant_chips");
  uVar3 = PlayerInfo::GetMaterialNum(this_04,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  uVar17 = FUN_0546065c(auStack_168,uVar2);
  uVar17 = FUN_054603b8(uVar17,&DAT_05593348);
  uVar17 = FUN_0546065c(uVar17,uVar3);
  FUN_054603b8(uVar17,&DAT_05594620);
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_1f8);
  std::string::append(asStack_1f8,"new",(size_t)__n);
  FUN_05462824(asStack_1b8,auStack_178);
  FUN_05474278(auStack_1c0,asStack_1b8);
  std::string::~string(asStack_1b8);
  pTVar15 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_1b8,(TGALogPurchaseData *)asStack_1f8);
  TGALogMgr::LogPlantLevelup(pTVar15,1,asStack_1b8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  iVar5 = FUN_033bd358(*(undefined4 *)(this_04 + 0x40));
  if (iVar5 == 0x1d) {
    lVar11 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar5 = FUN_033bd3a8(*(undefined4 *)(lVar11 + 0x10));
    if (iVar5 == 0x1d) {
      iVar5 = FUN_033bd358(*(undefined4 *)(this_04 + 0x40));
      goto LAB_033d2bac;
    }
    uVar17 = FUN_033bd394(*(undefined8 *)(pHVar7 + 0x238));
    std::string::string(asStack_218,"");
    Sexy::Insets::Insets((Insets *)asStack_1b8);
    GameMaskUI::ShowMask(uVar17,2,asStack_218,asStack_1b8);
    std::string::~string(asStack_218);
    nop();
  }
  else {
LAB_033d2bac:
    if (iVar5 == 0x18) {
LAB_033d2c28:
      std::string::string(asStack_1b8,"TabBtn3");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_1b8);
      std::string::~string(asStack_1b8);
      nop();
      uVar17 = FUN_033bd394(*(undefined8 *)(pHVar7 + 0x238));
      std::string::string(asStack_218,"");
      Sexy::Insets::Insets((Insets *)asStack_1b8);
      GameMaskUI::ShowMask(uVar17,4,asStack_218,asStack_1b8);
      std::string::~string(asStack_218);
      nop();
    }
    else if (iVar5 == 0x1e) {
      lVar11 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      iVar5 = FUN_033bd3a8(*(undefined4 *)(lVar11 + 0x10));
      if (iVar5 != 0x1e) goto LAB_033d2c28;
    }
  }
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1f8);
  FUN_054617bc(auStack_178);
  AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig(aAStack_210);
LAB_033d2bd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIEntryScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPlantUIEntryScreen::onLinkToUIViewCreated(AdaptorNewPlantUIEntryScreen *this)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  HotUIFile *pHVar6;
  HotUISeedPacketList *pHVar7;
  HotUISeedPacketList *pHVar8;
  HotUIFile *pHVar9;
  long *plVar10;
  UINewPlantView_SkillTab *this_00;
  long lVar11;
  WidgetContainer *pWVar12;
  AdaptorSeedPacketBoard *this_01;
  NewPlantUIUtils *this_02;
  undefined8 *puVar13;
  ulong uVar14;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  TGALogMgr *pTVar15;
  string *__n;
  ulong uVar16;
  undefined8 uVar17;
  string asStack_218 [8];
  AdaptorSeedPacketConfig aAStack_210 [24];
  string asStack_1f8 [56];
  undefined1 auStack_1c0 [8];
  string asStack_1b8 [64];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pHVar6 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  if (pHVar6 == (HotUIFile *)0x0) goto LAB_033d2bd4;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  std::string::string(asStack_1b8,"BackToMenu");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3e9,pBVar1);
  std::string::string(asStack_1b8,"SwitchToOld");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3ec,pBVar1);
  std::string::string(asStack_1b8,"AllPlantsBtn");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3ea,pBVar1);
  std::string::string(asStack_1b8,"LevelUpButton");
  pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar7,0x3ed,pBVar1);
  std::string::string(asStack_1b8,"AvatarButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3ee,pBVar1);
  std::string::string(asStack_1b8,"AccessoryButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3ef,pBVar1);
  std::string::string(asStack_1b8,"ValueDetailButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f0,pBVar1);
  std::string::string(asStack_1b8,"ValueInfoBtn");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f1,pBVar1);
  std::string::string(asStack_1b8,"PlantFavouriteButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f2,pBVar1);
  std::string::string(asStack_1b8,"PlantPediaButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f3,pBVar1);
  std::string::string(asStack_1b8,"PlantProfessionButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3f1,pBVar1);
  pHVar9 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1b8,"TabWidget2");
  plVar10 = (long *)HotUIFile::GetWidgetByName(pHVar9,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  this_00 = ::operator_new(0x108);
  UINewPlantView_SkillTab::UINewPlantView_SkillTab(this_00);
  *(UINewPlantView_SkillTab **)(this + 0x180) = this_00;
  uVar2 = FUN_033bd2d8((int)plVar10[10]);
  uVar3 = FUN_033bd2dc(*(undefined4 *)((long)plVar10 + 0x54));
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,uVar2,uVar3);
  (**(code **)(*plVar10 + 0x60))(plVar10,*(undefined8 *)(this + 0x180));
  pHVar9 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1b8,"PlantDescriptionText");
  lVar11 = HotUIFile::GetWidgetByName(pHVar9,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(lVar11 + 0x4c);
  std::string::string(asStack_1b8,"SeedPacketBoardHolder");
  pWVar12 = (WidgetContainer *)HotUIFile::GetWidgetByName(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  this_01 = ::operator_new(0x160);
  this_02 = (NewPlantUIUtils *)AdaptorSeedPacketBoard::AdaptorSeedPacketBoard(this_01);
  *(AdaptorSeedPacketBoard **)(this + 0x120) = this_01;
  NewPlantUIUtils::buildSeedPacketInfo(this_02);
  AdaptorSeedPacketBoard::Configure
            (*(AdaptorSeedPacketBoard **)(this + 0x120),pWVar12,aAStack_210,false);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
  AdaptorSeedPacketBoard::SelectEntry(*(AdaptorSeedPacketBoard **)(this + 0x120),0);
  std::string::string(asStack_1b8,"PlantAnimButton");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar8,0x3eb,pBVar1);
  pHVar6 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_1b8,"RightButtonList");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar6,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  HotUIVerticalButtonList::GetButtons();
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x168),
             (vector *)asStack_1b8);
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_1b8);
  uVar16 = 0;
  while( true ) {
    uVar17 = *(undefined8 *)(this + 0x168);
    uVar14 = FUN_033bd404(uVar17,*(undefined8 *)(this + 0x170));
    if (uVar14 <= uVar16) break;
    puVar13 = (undefined8 *)FUN_033bd458(uVar17,uVar16);
    HotUIButton::SetListener((HotUIButton *)*puVar13,(int)uVar16,pBVar1);
    FUN_033bd458(*(undefined8 *)(this + 0x168),uVar16);
    HotUIButton::GetUpImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x138),(RtWeakPtr *)asStack_1b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_1b8);
    FUN_033bd458(*(undefined8 *)(this + 0x168),uVar16);
    HotUIButton::GetDownImage();
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x150),(RtWeakPtr *)asStack_1b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_1b8);
    Sexy::StrFormat("%d",asStack_1b8,uVar16 + 1 & 0xffffffff);
    std::operator+((string *)&DAT_06a9da00,asStack_1b8);
    std::string::~string(asStack_1b8);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_1f8,false);
    std::string::~string(asStack_1f8);
    uVar16 = uVar16 + 1;
  }
  showTab(this,1);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  std::string::string(asStack_1b8,"mat_universal_plant_chips");
  uVar2 = PlayerInfo::GetMaterialNum(this_04,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  __n = asStack_1f8;
  std::string::string(asStack_1b8,"mat_general_plant_chips");
  uVar3 = PlayerInfo::GetMaterialNum(this_04,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  uVar17 = FUN_0546065c(auStack_168,uVar2);
  uVar17 = FUN_054603b8(uVar17,&DAT_05593348);
  uVar17 = FUN_0546065c(uVar17,uVar3);
  FUN_054603b8(uVar17,&DAT_05594620);
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_1f8);
  std::string::append(asStack_1f8,"new",(size_t)__n);
  FUN_05462824(asStack_1b8,auStack_178);
  FUN_05474278(auStack_1c0,asStack_1b8);
  std::string::~string(asStack_1b8);
  pTVar15 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_1b8,(TGALogPurchaseData *)asStack_1f8);
  TGALogMgr::LogPlantLevelup(pTVar15,1,asStack_1b8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  iVar5 = FUN_033bd358(*(undefined4 *)(this_04 + 0x40));
  if (iVar5 == 0x1d) {
    lVar11 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar5 = FUN_033bd3a8(*(undefined4 *)(lVar11 + 0x10));
    if (iVar5 == 0x1d) {
      iVar5 = FUN_033bd358(*(undefined4 *)(this_04 + 0x40));
      goto LAB_033d2bac;
    }
    uVar17 = FUN_033bd394(*(undefined8 *)(pHVar7 + 0x238));
    std::string::string(asStack_218,"");
    Sexy::Insets::Insets((Insets *)asStack_1b8);
    GameMaskUI::ShowMask(uVar17,2,asStack_218,asStack_1b8);
    std::string::~string(asStack_218);
    nop();
  }
  else {
LAB_033d2bac:
    if (iVar5 == 0x18) {
LAB_033d2c28:
      std::string::string(asStack_1b8,"TabBtn3");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_1b8);
      std::string::~string(asStack_1b8);
      nop();
      uVar17 = FUN_033bd394(*(undefined8 *)(pHVar7 + 0x238));
      std::string::string(asStack_218,"");
      Sexy::Insets::Insets((Insets *)asStack_1b8);
      GameMaskUI::ShowMask(uVar17,4,asStack_218,asStack_1b8);
      std::string::~string(asStack_218);
      nop();
    }
    else if (iVar5 == 0x1e) {
      lVar11 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      iVar5 = FUN_033bd3a8(*(undefined4 *)(lVar11 + 0x10));
      if (iVar5 != 0x1e) goto LAB_033d2c28;
    }
  }
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1f8);
  FUN_054617bc(auStack_178);
  AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig(aAStack_210);
LAB_033d2bd4:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

