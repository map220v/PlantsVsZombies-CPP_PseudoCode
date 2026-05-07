// Class: AdaptorRiftZombossLevelSetup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::Update() */

void __thiscall AdaptorRiftZombossLevelSetup::Update(AdaptorRiftZombossLevelSetup *this)

{
  char cVar1;
  Toggles *this_00;
  StringHelper *this_01;
  long extraout_x1;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"RiftZombossAvailabiltyTimer");
  cVar1 = Toggles::IsEnabled(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    FUN_05476574(awStack_28);
    this_01 = (StringHelper *)RiftUtils::GetZombossUnlockedTimeRemaining();
    if (0 < (long)this_01) {
      TodStringTranslate(L"[JOUST_PLAY_ENTRY]");
      StringHelper::ConvertTimeToHMString(this_01,extraout_x1);
      TodReplaceString(awStack_20,L"{DURATION}",awStack_18);
      FUN_054766c8(awStack_28,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
    }
    std::string::string(asStack_10,"ZombossTimer");
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_28);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::StaticClassInit() */

void AdaptorRiftZombossLevelSetup::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftZombossLevelSetup");
    (*pcVar2)(plVar1,asStack_10,FUN_036e114c,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossLevelSetup::StaticGetClass() */

long * AdaptorRiftZombossLevelSetup::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftZombossLevelSetup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftZombossLevelSetup::GetClass() const */

long * AdaptorRiftZombossLevelSetup::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftZombossLevelSetup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::clearRewardLists() */

void __thiscall AdaptorRiftZombossLevelSetup::clearRewardLists(AdaptorRiftZombossLevelSetup *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_036e0e54(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"BaseRewardList");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"VictoryRewardList");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::clear
            ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)this_00)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::startLevel() */

void __thiscall AdaptorRiftZombossLevelSetup::startLevel(AdaptorRiftZombossLevelSetup *this)

{
  int iVar1;
  long lVar2;
  RtObject *this_00;
  WorldMap_EventBar *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this[0x15c] = (AdaptorRiftZombossLevelSetup)0x1;
  local_8 = ___stack_chk_guard;
  AdaptorJoustLeagueInfoScreen::onClose((AdaptorJoustLeagueInfoScreen *)this);
  iVar1 = FUN_036e0e3c(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140));
  if (iVar1 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),(SexyURL *)(this + 0x120));
  }
  std::string::string(asStack_18,"UIWorldMapEventBar");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
  if (lVar2 == 0) {
    std::string::~string(asStack_18);
    nop();
  }
  else {
    std::string::string(asStack_10,"UIWorldMapEventBar");
    this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
    this_01 = Sexy::RtObject::Cast<WorldMap_EventBar>(this_00);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (this_01 != (WorldMap_EventBar *)0x0) {
      WorldMap_EventBar::SetZPSPlaying(this_01,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossLevelSetup::doAccept() */

void __thiscall AdaptorRiftZombossLevelSetup::doAccept(AdaptorRiftZombossLevelSetup *this)

{
  char cVar1;
  
  cVar1 = RiftUtils::IsZombossUnlocked();
  if (cVar1 == '\0') {
    return;
  }
  startLevel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::AdaptorRiftZombossLevelSetup() */

void __thiscall
AdaptorRiftZombossLevelSetup::AdaptorRiftZombossLevelSetup(AdaptorRiftZombossLevelSetup *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066853f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06685750;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06685798;
  Set8BytesTo0(this + 0x120);
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  this[0x15c] = (AdaptorRiftZombossLevelSetup)0x0;
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


/* AdaptorRiftZombossLevelSetup::StaticNew() */

AdaptorRiftZombossLevelSetup * AdaptorRiftZombossLevelSetup::StaticNew(void)

{
  AdaptorRiftZombossLevelSetup *this;
  
  this = ::operator_new(0x188);
  AdaptorRiftZombossLevelSetup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::onDifficultySelected() */

void __thiscall
AdaptorRiftZombossLevelSetup::onDifficultySelected(AdaptorRiftZombossLevelSetup *this)

{
  RtWeakPtrBase *pRVar1;
  char cVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  HotUIHelpers aHStack_80 [8];
  HotUIHelpers aHStack_78 [8];
  HotUIHelpers aHStack_70 [8];
  HotUIHelpers aHStack_68 [8];
  HotUIHelpers aHStack_60 [8];
  HotUIHelpers aHStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtrBase aRStack_30 [8];
  RtWeakPtrBase aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = RiftUtils::IsSpecialBossEvent();
  RiftUtils::GetZombossResourceName(0,true);
  RiftUtils::GetZombossResourceName(0,false);
  RiftUtils::GetZombossResourceName(1,true);
  RiftUtils::GetZombossResourceName(1,false);
  RiftUtils::GetZombossResourceName(2,true);
  RiftUtils::GetZombossResourceName(2,false);
  HotUIHelpers::GetImageFromStringId(aHStack_80,extraout_x1);
  HotUIHelpers::GetImageFromStringId(aHStack_78,extraout_x1_00);
  HotUIHelpers::GetImageFromStringId(aHStack_70,extraout_x1_01);
  HotUIHelpers::GetImageFromStringId(aHStack_68,extraout_x1_02);
  HotUIHelpers::GetImageFromStringId(aHStack_60,extraout_x1_03);
  HotUIHelpers::GetImageFromStringId(aHStack_58,extraout_x1_04);
  std::string::string(asStack_20,"DifficultyBox1");
  pRVar1 = (RtWeakPtrBase *)aRStack_50;
  if (*(int *)(this + 0x158) != 0) {
    pRVar1 = (RtWeakPtrBase *)aRStack_48;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_50);
  HotUIAdaptor::setButtonWidgetImage((HotUIAdaptor *)this,asStack_20,aRStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"DifficultyBox2");
  pRVar1 = (RtWeakPtrBase *)aRStack_40;
  if (*(int *)(this + 0x158) != 1) {
    pRVar1 = (RtWeakPtrBase *)aRStack_38;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_40);
  HotUIAdaptor::setButtonWidgetImage((HotUIAdaptor *)this,asStack_20,aRStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string((string *)aRStack_10,"DifficultyBox3");
  if (*(int *)(this + 0x158) == 2) {
    if (cVar2 != '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae2e8);
      goto LAB_036e1d88;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,aRStack_30);
  }
  else {
    if (cVar2 != '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae418);
LAB_036e1d88:
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae2e8);
      goto LAB_036e1c94;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,aRStack_28);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,aRStack_30);
LAB_036e1c94:
  HotUIAdaptor::setButtonWidgetImage((HotUIAdaptor *)this,aRStack_10,asStack_20,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  std::string::~string((string *)aRStack_10);
  nop();
  this[0x15c] = (AdaptorRiftZombossLevelSetup)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string((string *)aHStack_58);
  std::string::~string((string *)aHStack_60);
  std::string::~string((string *)aHStack_68);
  std::string::~string((string *)aHStack_70);
  std::string::~string((string *)aHStack_78);
  std::string::~string((string *)aHStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::~AdaptorRiftZombossLevelSetup() */

void __thiscall
AdaptorRiftZombossLevelSetup::~AdaptorRiftZombossLevelSetup(AdaptorRiftZombossLevelSetup *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  HotUIFile *this_01;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066853f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06685750;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06685798;
  if (*(long *)(this + 0x168) != 0) {
    plVar4 = *(long **)(*(long *)(this + 0x168) + 0x20);
    (**(code **)(*plVar4 + 0x68))(plVar4);
    if (*(long **)(this + 0x168) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x168) + 0x18))();
      *(undefined8 *)(this + 0x168) = 0;
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x170);
  this_01 = (HotUIFile *)FUN_036e0e54(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"BonusContent");
  plVar4 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar4 + 0x80))(plVar4,1,1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::clear
            ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)this_00)
  ;
  clearRewardLists(this);
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
  std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::~vector
            ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)this_00)
  ;
  std::string::~string((string *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossLevelSetup::~AdaptorRiftZombossLevelSetup() */

void __thiscall
AdaptorRiftZombossLevelSetup::~AdaptorRiftZombossLevelSetup(AdaptorRiftZombossLevelSetup *this)

{
  ~AdaptorRiftZombossLevelSetup(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::RefreshBonusContent(int) */

void __thiscall
AdaptorRiftZombossLevelSetup::RefreshBonusContent(AdaptorRiftZombossLevelSetup *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  HotUIFile *this_00;
  long *plVar14;
  vector *pvVar15;
  Image *pIVar16;
  UIWidgetImage *this_01;
  long lVar17;
  int *piVar18;
  uint *puVar19;
  UIWidgetText *pUVar20;
  undefined8 uVar21;
  Widget *this_02;
  long *plVar22;
  ulong uVar23;
  code *pcVar24;
  float fVar25;
  bool bStack_7a;
  bool bStack_79;
  bool bStack_78;
  bool bStack_77;
  bool bStack_76;
  bool bStack_75;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  wstring awStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036e0e54(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_38,"BonusContent");
  plVar14 = (long *)HotUIFile::GetWidgetByName(this_00,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  plVar22 = *(long **)(this + 0x160);
  if (plVar22 == (long *)0x0) {
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    *(Widget **)(this + 0x160) = this_02;
    pcVar24 = *(code **)(*(long *)this_02 + 0x1a0);
    Sexy::Insets::Insets((Insets *)local_38,0,0,(int)plVar14[10],*(int *)((long)plVar14 + 0x54));
    (*pcVar24)(this_02,(string *)local_38);
    (**(code **)(*plVar14 + 0x60))(plVar14,*(undefined8 *)(this + 0x160));
  }
  else {
    (**(code **)(*plVar22 + 0x80))(plVar22,1,1);
  }
  RiftUtils::GetZombossWinLossData(0,&bStack_7a,&bStack_79,&iStack_74);
  RiftUtils::GetZombossWinLossData(1,&bStack_78,&bStack_77,&iStack_70);
  RiftUtils::GetZombossWinLossData(2,&bStack_76,&bStack_75,&iStack_6c);
  fVar25 = (float)RiftUtils::GetZombossRewardRatio();
  iVar13 = 2;
  if (fVar25 <= 1.0) {
    iVar13 = 1;
  }
  std::string::string((string *)local_38,"RiftDoubleRewardTips");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_38,1.0 < fVar25);
  std::string::~string((string *)local_38);
  nop();
  pvVar15 = (vector *)RiftUtils::GetBossReward(param_1);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_50,pvVar15);
  iVar1 = FUN_036e0f9c(0x32);
  uVar2 = FUN_036e0f9c(0x28);
  uVar3 = FUN_036e0f9c(0x168);
  uVar4 = FUN_036e0f9c(100);
  iVar5 = FUN_036e0f9c(0x3c);
  iVar6 = FUN_036e0f9c(0x12);
  iVar7 = FUN_036e0f9c(0x2d);
  iVar8 = FUN_036e0f9c(10);
  uVar21 = local_50;
  iVar9 = FUN_036e0e70(local_50,local_48);
  if (0 < iVar9) {
    uVar23 = 0;
    while( true ) {
      piVar18 = (int *)FUN_036e0e7c(uVar21,uVar23);
      GetGameItemInfo(*piVar18,0x7fffffff,0);
      if (local_38[0] == 0) {
        puVar19 = (uint *)FUN_036e0e7c(local_50,uVar23);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"AdaptorRiftZombossLevelSetup::RefreshBonusContent id = %d",
                   (ulong)*puVar19);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
        uVar21 = local_50;
      }
      else {
        pIVar16 = (Image *)StringHelper::ToImage(asStack_18,false);
        uVar21 = FUN_0547429c(asStack_18);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"AdaptorRiftZombossLevelSetup::RefreshBonusContent %s",uVar21);
        this_01 = ::operator_new(0x118);
        UIWidgetImage::UIWidgetImage(this_01,pIVar16);
        (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar5,iVar8,iVar1,iVar1);
        local_60 = 2;
        UIWidgetImage::SetImageType(this_01,(Color *)&local_60,0.0);
        (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),this_01);
        lVar17 = FUN_036e0e7c(local_50,uVar23);
        Sexy::StrFormat(L"+%d",awStack_68,(ulong)(uint)(iVar13 * *(int *)(lVar17 + 4)));
        pUVar20 = ::operator_new(0x108);
        UIWidgetText::UIWidgetText(pUVar20,awStack_68);
        iVar10 = FUN_036e0f9c(10);
        iVar11 = FUN_036e0f9c(3);
        iVar12 = FUN_036e0f9c(0x14);
        (**(code **)(*(long *)pUVar20 + 0x198))
                  (pUVar20,iVar5 - iVar10,(iVar1 + iVar8) - iVar11,iVar12 + iVar1,uVar2);
        uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        FUN_036e0e60(pUVar20 + 0xe8,uVar21);
        FUN_036e0e68(pUVar20 + 0xe0,5);
        Sexy::Color::Color((Color *)&local_60);
        local_60 = 0xec;
        local_58 = 0;
        local_5c = 0x6a;
        (**(code **)(*(long *)pUVar20 + 0x170))(pUVar20,0,(Color *)&local_60);
        (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),pUVar20);
        iVar5 = iVar5 + iVar1 + iVar7;
        FUN_05476c50(awStack_68);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
        uVar21 = local_50;
      }
      if (uVar23 == iVar9 - 1) break;
      uVar23 = uVar23 + 1;
      local_50 = uVar21;
    }
  }
  iVar13 = RiftUtils::GetMaxScore(3,param_1);
  iVar5 = RiftUtils::GetBossLevelMaxScore(param_1);
  TodStringTranslate(L"[RIFT_LEVEL_SETUP_MAX_SCORE]");
  TodReplaceNumberString((wstring *)&local_60,L"{NUMS}",iVar5);
  TodReplaceNumberString((wstring *)local_38,L"{NUMSMAX}",iVar13);
  FUN_05476c50((string *)local_38);
  FUN_05476c50((wstring *)&local_60);
  pUVar20 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar20,awStack_68);
  (**(code **)(*(long *)pUVar20 + 0x198))(pUVar20,0,iVar1 + iVar6 + iVar1 / 2,uVar3,uVar4);
  uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_036e0e60(pUVar20 + 0xe8,uVar21);
  FUN_036e0e68(pUVar20 + 0xe0,2);
  pcVar24 = *(code **)(*(long *)pUVar20 + 0x170);
  Sexy::Color::Color((Color *)local_38,1);
  (*pcVar24)(pUVar20,0,(string *)local_38);
  (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),pUVar20);
  FUN_05476c50(awStack_68);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::selectDifficulty(int) */

void __thiscall
AdaptorRiftZombossLevelSetup::selectDifficulty(AdaptorRiftZombossLevelSetup *this,int param_1)

{
  bool bVar1;
  bool local_22;
  bool bStack_21;
  bool local_20;
  bool bStack_1f;
  bool local_1e;
  bool bStack_1d;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x158) != param_1) {
    *(int *)(this + 0x158) = param_1;
    this[0x15c] = (AdaptorRiftZombossLevelSetup)0x1;
    RiftUtils::SetDifficultyForNextLevel(param_1);
    if (*(AdaptorRiftDifficultyList **)(this + 0x168) != (AdaptorRiftDifficultyList *)0x0) {
      AdaptorRiftDifficultyList::RefreshDifficultyView
                (*(AdaptorRiftDifficultyList **)(this + 0x168));
    }
    onDifficultySelected(this);
    RefreshBonusContent(this,param_1);
    RiftUtils::GetZombossWinLossData(0,&local_22,&bStack_21,&iStack_1c);
    RiftUtils::GetZombossWinLossData(1,&local_20,&bStack_1f,&iStack_18);
    RiftUtils::GetZombossWinLossData(2,&local_1e,&bStack_1d,&iStack_14);
    bVar1 = local_22;
    if (param_1 != 0) {
      if (param_1 == 1) {
        bVar1 = true;
        if (local_22 != false) {
          bVar1 = local_20;
        }
      }
      else {
        bVar1 = true;
        if ((param_1 == 2) && (local_20 != false)) {
          bVar1 = local_1e;
        }
      }
    }
    std::string::string(asStack_10,"AcceptButton");
    HotUIAdaptor::setWidgetDisabled((HotUIAdaptor *)this,asStack_10,bVar1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftZombossLevelSetup::onLinkToUIViewCreated(AdaptorRiftZombossLevelSetup *this)

{
  HotUIFile *this_00;
  Widget *pWVar1;
  CachedUIResourcePtr *pCVar2;
  undefined8 uVar3;
  AdaptorRiftDifficultyList *this_01;
  float fVar4;
  bool local_2e;
  bool local_2d;
  bool local_2c;
  bool local_2b;
  bool bStack_2a;
  bool local_29;
  int iStack_28;
  int iStack_24;
  int aiStack_20 [2];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036e0e54(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"RiftZombossLevelSetup");
  pWVar1 = (Widget *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),pWVar1);
  std::string::string(asStack_10,"AcceptButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,1,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BackButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,0,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox1");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,2,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox2");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,3,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox3");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,4,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyModifierInfoButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,5,false,false);
  std::string::~string(asStack_10);
  nop();
  fVar4 = (float)RiftUtils::GetZombossRewardRatio();
  std::string::string(asStack_10,"DialogTitle");
  if (fVar4 <= 1.0) {
    TodStringTranslate(L"[RIFT_ZOMBOSS_LEVEL_SETUP_TITLE]");
  }
  else {
    TodStringTranslate(L"[RIFT_ZOMBOSS_LEVEL_SETUP_DOUBLE_TITLE]");
  }
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,(wstring *)asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"AcceptButton");
  TodStringTranslate(L"[JOUST_PLAY]");
  HotUIAdaptor::setButtonWidgetText((HotUIAdaptor *)this,asStack_10,(wstring *)asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string(asStack_10);
  nop();
  RiftUtils::GetZombossWinLossData(0,&local_2e,&local_2d,&iStack_28);
  RiftUtils::GetZombossWinLossData(1,&local_2c,&local_2b,&iStack_24);
  RiftUtils::GetZombossWinLossData(2,&bStack_2a,&local_29,aiStack_20);
  std::string::string(asStack_18,"DifficultyBox1Pepper");
  if (local_2d == false) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aae4b0;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aae338;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"DifficultyBox2Pepper");
  if (local_2b == false) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aae4e0;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aae488;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"DifficultyBox3Pepper");
  if (local_29 == false) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aae460;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aae2b8;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_10,"DifficultyBox1LockBg");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox2LockBg");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(local_2e ^ 1));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox3LockBg");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(local_2c ^ 1));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyListHolder");
  uVar3 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = ::operator_new(0x160);
  AdaptorRiftDifficultyList::AdaptorRiftDifficultyList(this_01);
  *(AdaptorRiftDifficultyList **)(this + 0x168) = this_01;
  std::string::string(asStack_10,"RiftDifficultyList");
  AdaptorRiftDifficultyList::Configure(this_01,uVar3,this + 0x120,7,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x168));
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  selectDifficulty(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossLevelSetup::ButtonDepress(int) */

void __thiscall
AdaptorRiftZombossLevelSetup::ButtonDepress(AdaptorRiftZombossLevelSetup *this,int param_1)

{
  AdaptorDifficultyModifierFullScrollWidget *this_00;
  
  if (this[0x15c] == (AdaptorRiftZombossLevelSetup)0x0) {
    switch(param_1) {
    case 0:
      AdaptorJoustLeagueInfoScreen::onClose((AdaptorJoustLeagueInfoScreen *)this);
      return;
    case 1:
      doAccept(this);
      return;
    case 2:
      selectDifficulty(this,0);
      return;
    case 3:
      selectDifficulty(this,1);
      return;
    case 4:
      selectDifficulty(this,2);
      return;
    case 5:
      this_00 = ::operator_new(0x140);
      AdaptorDifficultyModifierFullScrollWidget::AdaptorDifficultyModifierFullScrollWidget(this_00);
      NetworkCacheQueue::setTencentUserID((string *)this_00);
      HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
      return;
    }
  }
  return;
}


/* non-virtual thunk to AdaptorRiftZombossLevelSetup::ButtonDepress(int) */

void __thiscall
AdaptorRiftZombossLevelSetup::ButtonDepress(AdaptorRiftZombossLevelSetup *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::onLoadUIView() */

void __thiscall AdaptorRiftZombossLevelSetup::onLoadUIView(AdaptorRiftZombossLevelSetup *this)

{
  undefined8 uVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  char *pcVar3;
  bool bStack_6a;
  bool local_69;
  bool bStack_68;
  bool local_67;
  bool bStack_66;
  bool local_65;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftUtils::GetZombossWinLossData(0,&bStack_6a,&local_69,&iStack_64);
  RiftUtils::GetZombossWinLossData(1,&bStack_68,&local_67,&iStack_60);
  RiftUtils::GetZombossWinLossData(2,&bStack_66,&local_65,&iStack_5c);
  if (local_69 == false) {
    pcVar3 = "POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_X_MARK_ANIM";
  }
  else {
    pcVar3 = "POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_CHECK_MARK_ANIM";
  }
  std::string::string(asStack_58,pcVar3);
  nop();
  if (local_67 == false) {
    std::string::string(asStack_50,"POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_X_MARK_ANIM");
    nop();
  }
  else {
    std::string::string(asStack_50,"POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_CHECK_MARK_ANIM");
    nop();
  }
  if (local_65 == false) {
    pcVar3 = "POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_X_MARK_ANIM";
  }
  else {
    pcVar3 = "POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_CHECK_MARK_ANIM";
  }
  std::string::string(asStack_48,pcVar3);
  nop();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"$PROGRESS_ANIM1");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,asStack_58);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"$PROGRESS_ANIM2");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,asStack_50);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"$PROGRESS_ANIM3");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,asStack_48);
  std::string::~string(asStack_40);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"RiftZombossLevelSetup");
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossLevelSetup::addRewardLists() */

void __thiscall AdaptorRiftZombossLevelSetup::addRewardLists(AdaptorRiftZombossLevelSetup *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  HotUISeedPacketList *pHVar5;
  HotUISeedPacketList *pHVar6;
  AdaptorMultiPurchaseItem *pAVar7;
  LevelOfTheDay_RewardItemType *pLVar8;
  undefined8 local_80;
  undefined8 local_78;
  AdaptorMultiPurchaseItem *local_70;
  PakRecord aPStack_68 [32];
  string asStack_48 [16];
  undefined4 local_38;
  undefined1 auStack_30 [16];
  int local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RiftUtils::GetZombossAttemptsMade();
  puVar3 = (undefined8 *)RiftUtils::GetZombossPrizeDefaultReward(iVar2);
  iVar2 = RiftUtils::GetZombossAttemptsMade();
  puVar4 = (undefined8 *)RiftUtils::GetZombossPrizeWinReward(iVar2,*(int *)(this + 0x158));
  std::string::string(asStack_48,"BaseRewardList");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_48);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"VictoryRewardList");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_48);
  std::string::~string(asStack_48);
  nop();
  local_80 = FUN_036e15b8(*puVar3);
  local_78 = FUN_036e1608(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    pLVar8 = (LevelOfTheDay_RewardItemType *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
              ((LevelOfTheDay_RewardItemType *)asStack_48,pLVar8);
    if (local_20 == 0) {
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48);
    }
    else {
      AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
                ((AdaptorMultiPurchaseItemConfig *)aPStack_68,local_38,auStack_30,local_20,0,0,0,0,6
                );
      pAVar7 = ::operator_new(0x168);
      AdaptorMultiPurchaseItem::AdaptorMultiPurchaseItem(pAVar7);
      local_70 = pAVar7;
      AdaptorMultiPurchaseItem::Configure
                (pAVar7,(WidgetContainer *)pHVar5,(AdaptorMultiPurchaseItemConfig *)aPStack_68);
      std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::push_back
                ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)
                 (this + 0x170),&local_70);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_70);
      PakRecord::~PakRecord(aPStack_68);
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48);
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_80);
  }
  local_80 = FUN_036e15b8(*puVar4);
  local_78 = FUN_036e1608(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    pLVar8 = (LevelOfTheDay_RewardItemType *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
              ((LevelOfTheDay_RewardItemType *)asStack_48,pLVar8);
    if (local_20 == 0) {
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48);
    }
    else {
      AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
                ((AdaptorMultiPurchaseItemConfig *)aPStack_68,local_38,auStack_30,local_20,0,0,0,0,6
                );
      pAVar7 = ::operator_new(0x168);
      AdaptorMultiPurchaseItem::AdaptorMultiPurchaseItem(pAVar7);
      local_70 = pAVar7;
      AdaptorMultiPurchaseItem::Configure
                (pAVar7,(WidgetContainer *)pHVar6,(AdaptorMultiPurchaseItemConfig *)aPStack_68);
      std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::push_back
                ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)
                 (this + 0x170),&local_70);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_70);
      PakRecord::~PakRecord(aPStack_68);
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48);
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

