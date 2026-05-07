// Class: AdaptorDifficultyModifierFullScrollWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorDifficultyModifierFullScrollWidget::StaticClassInit() */

void AdaptorDifficultyModifierFullScrollWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorDifficultyModifierFullScrollWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_036d6bd8,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorDifficultyModifierFullScrollWidget::StaticGetClass() */

long * AdaptorDifficultyModifierFullScrollWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorDifficultyModifierFullScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorDifficultyModifierFullScrollWidget::GetClass() const */

long * AdaptorDifficultyModifierFullScrollWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorDifficultyModifierFullScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorDifficultyModifierFullScrollWidget::ButtonDepress(int) */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::ButtonDepress
          (AdaptorDifficultyModifierFullScrollWidget *this,int param_1)

{
  if (param_1 != 1) {
    return;
  }
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  return;
}


/* non-virtual thunk to AdaptorDifficultyModifierFullScrollWidget::ButtonDepress(int) */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::ButtonDepress
          (AdaptorDifficultyModifierFullScrollWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorDifficultyModifierFullScrollWidget::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorDifficultyModifierFullScrollWidget::OnBackButtonPressed
          (AdaptorDifficultyModifierFullScrollWidget *this)

{
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorDifficultyModifierFullScrollWidget::onLoadUIView() */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::onLoadUIView
          (AdaptorDifficultyModifierFullScrollWidget *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"DifficultyModifierScrollWidget");
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


/* AdaptorDifficultyModifierFullScrollWidget::AdaptorDifficultyModifierFullScrollWidget() */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::AdaptorDifficultyModifierFullScrollWidget
          (AdaptorDifficultyModifierFullScrollWidget *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066834e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683840;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06683888;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  Set8BytesTo0(this + 0x138);
  return;
}


/* AdaptorDifficultyModifierFullScrollWidget::StaticNew() */

AdaptorDifficultyModifierFullScrollWidget *
AdaptorDifficultyModifierFullScrollWidget::StaticNew(void)

{
  AdaptorDifficultyModifierFullScrollWidget *this;
  
  this = ::operator_new(0x140);
  AdaptorDifficultyModifierFullScrollWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorDifficultyModifierFullScrollWidget::~AdaptorDifficultyModifierFullScrollWidget() */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::~AdaptorDifficultyModifierFullScrollWidget
          (AdaptorDifficultyModifierFullScrollWidget *this)

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
             *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066834e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683840;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06683888;
  this_01 = (HotUIFile *)FUN_036d6a08(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"InnerScroll");
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
  std::vector<AdaptorRiftDifficultyInfoWidget*,std::allocator<AdaptorRiftDifficultyInfoWidget*>>::
  clear((vector<AdaptorRiftDifficultyInfoWidget*,std::allocator<AdaptorRiftDifficultyInfoWidget*>> *
        )this_00);
  std::string::~string((string *)(this + 0x138));
  std::vector<AdaptorRiftDifficultyInfoWidget*,std::allocator<AdaptorRiftDifficultyInfoWidget*>>::
  ~vector((vector<AdaptorRiftDifficultyInfoWidget*,std::allocator<AdaptorRiftDifficultyInfoWidget*>>
           *)this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorDifficultyModifierFullScrollWidget::~AdaptorDifficultyModifierFullScrollWidget() */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::~AdaptorDifficultyModifierFullScrollWidget
          (AdaptorDifficultyModifierFullScrollWidget *this)

{
  ~AdaptorDifficultyModifierFullScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorDifficultyModifierFullScrollWidget::createScrollList() */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::createScrollList
          (AdaptorDifficultyModifierFullScrollWidget *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  HotUIFile *this_00;
  HotUIWidget *extraout_x0;
  SheepInfo *pSVar4;
  AdaptorRiftDifficultyInfoWidget *pAVar5;
  long lVar6;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  AdaptorRiftDifficultyInfoWidget *local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_60,this + 0x138);
  cVar1 = FUN_0547419c(asStack_60);
  if (cVar1 == '\0') {
LAB_036d7410:
    this_00 = (HotUIFile *)FUN_036d6a08(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"InnerScroll");
    HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    nop();
    FUN_05475d88(asStack_30,asStack_60);
    RiftUtils::GetLevelDifficultyDataForLevelNode((RiftUtils *)asStack_20,asStack_30);
    std::string::~string(asStack_30);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      pSVar4 = (SheepInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      SheepInfo::SheepInfo((SheepInfo *)asStack_30,pSVar4);
      pAVar5 = ::operator_new(0x150);
      AdaptorRiftDifficultyInfoWidget::AdaptorRiftDifficultyInfoWidget(pAVar5);
      local_48 = pAVar5;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_28);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      FUN_05477b24(asStack_38,lVar6 + 0x10);
      AdaptorRiftDifficultyInfoWidget::ConfigureDifficulty(pAVar5,extraout_x0,aRStack_40,asStack_38)
      ;
      FUN_05476c50(asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      pAVar5 = local_48;
      std::string::string(asStack_38,"DifficultyModifierInfoWidget");
      HotUIAdaptor::SetParentAndFile((HotUIAdaptor *)pAVar5,extraout_x0,asStack_38);
      std::string::~string(asStack_38);
      nop();
      std::vector<AdaptorRiftDifficultyInfoWidget*,std::allocator<AdaptorRiftDifficultyInfoWidget*>>
      ::push_back((vector<AdaptorRiftDifficultyInfoWidget*,std::allocator<AdaptorRiftDifficultyInfoWidget*>>
                   *)(this + 0x120),&local_48);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_48);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)asStack_30);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
    }
    RiftLevelDifficultyData::~RiftLevelDifficultyData((RiftLevelDifficultyData *)asStack_20);
    std::string::~string(asStack_60);
  }
  else {
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      thunk_FUN_05475e00(asStack_60,uVar3);
      cVar1 = FUN_0547419c(asStack_60);
      if (cVar1 == '\0') goto LAB_036d7410;
    }
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorDifficultyModifierFullScrollWidget::onLinkToUIViewCreated() */

void __thiscall
AdaptorDifficultyModifierFullScrollWidget::onLinkToUIViewCreated
          (AdaptorDifficultyModifierFullScrollWidget *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036d6a08(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"CloseButton");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)this_01,1,(ButtonListener *)(this + 0xd8));
    createScrollList(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

