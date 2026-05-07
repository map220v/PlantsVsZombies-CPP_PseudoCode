// Class: AdaptorPerkLibraryWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryWidget::StaticClassInit() */

void AdaptorPerkLibraryWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPerkLibraryWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0366e278,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkLibraryWidget::StaticGetClass() */

long * AdaptorPerkLibraryWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkLibraryWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkLibraryWidget::GetClass() const */

long * AdaptorPerkLibraryWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkLibraryWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkLibraryWidget::AdaptorPerkLibraryWidget() */

void __thiscall AdaptorPerkLibraryWidget::AdaptorPerkLibraryWidget(AdaptorPerkLibraryWidget *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06677d80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066780e0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06678128;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  return;
}


/* AdaptorPerkLibraryWidget::StaticNew() */

AdaptorPerkLibraryWidget * AdaptorPerkLibraryWidget::StaticNew(void)

{
  AdaptorPerkLibraryWidget *this;
  
  this = ::operator_new(0x138);
  AdaptorPerkLibraryWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryWidget::~AdaptorPerkLibraryWidget() */

void __thiscall AdaptorPerkLibraryWidget::~AdaptorPerkLibraryWidget(AdaptorPerkLibraryWidget *this)

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
  *(undefined ***)this = &PTR_GetClass_06677d80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066780e0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06678128;
  this_01 = (HotUIFile *)FUN_0366e094(*(undefined8 *)(this + 0xf8));
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
  std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::clear
            ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)this_00);
  std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::~vector
            ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkLibraryWidget::~AdaptorPerkLibraryWidget() */

void __thiscall AdaptorPerkLibraryWidget::~AdaptorPerkLibraryWidget(AdaptorPerkLibraryWidget *this)

{
  ~AdaptorPerkLibraryWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryWidget::createPerkScrollList() */

void __thiscall AdaptorPerkLibraryWidget::createPerkScrollList(AdaptorPerkLibraryWidget *this)

{
  bool bVar1;
  undefined4 uVar2;
  GridItemPoolEntry *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  HotUIFile *this_00;
  HotUIWidget *extraout_x0;
  MiniGamePerkMgr *pMVar7;
  AdaptorPerkInfoWidget *pAVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_70;
  undefined8 local_68;
  AdaptorPerkInfoWidget *local_60;
  undefined8 local_58 [2];
  RtWeakPtr aRStack_48 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetUnlockedPerkList();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pGVar3 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_48,pGVar3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    local_60 = (AdaptorPerkInfoWidget *)
               std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 0x10);
    local_58[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_60,(__normal_iterator *)local_58);
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,
                 (string *)(lVar6 + 0x10));
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_48);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_70);
  }
  this_00 = (HotUIFile *)FUN_0366e094(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)aRStack_48,"InnerScroll");
  HotUIFile::GetWidgetByName(this_00,(string *)aRStack_48);
  std::string::~string((string *)aRStack_48);
  nop();
  nop();
  uVar10 = 0;
  while( true ) {
    uVar9 = FUN_0366e0a0(local_20,local_18);
    if (uVar9 <= uVar10) break;
    uVar4 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar5 = FUN_0366e0ac(local_20,uVar10);
    FUN_05475d88(aRStack_48,uVar5);
    pMVar7 = (MiniGamePerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar5 = FUN_0366e0ac(local_20,uVar10);
    FUN_05475d88((string *)&local_60,uVar5);
    uVar2 = MiniGamePerkMgr::GetCurrentPerkLevel(pMVar7,(string *)&local_60);
    PennyPerkMgr::CreatePerkData((RtWeakPtr *)local_58,uVar4,aRStack_48,uVar2);
    std::string::~string((string *)&local_60);
    std::string::~string((string *)aRStack_48);
    pAVar8 = ::operator_new(0x160);
    AdaptorPerkInfoWidget::AdaptorPerkInfoWidget(pAVar8);
    local_60 = pAVar8;
    std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::push_back
              ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)
               (this + 0x120),&local_60);
    pAVar8 = local_60;
    std::string::string((string *)aRStack_48,"PerkInfoWidgetLibrary");
    HotUIAdaptor::SetParentAndFile((HotUIAdaptor *)pAVar8,extraout_x0,(string *)aRStack_48);
    std::string::~string((string *)aRStack_48);
    nop();
    AdaptorPerkInfoWidget::SetInfoType(local_60,1);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_60);
    pAVar8 = local_60;
    GridItemPoolEntry::GridItemPoolEntry
              ((GridItemPoolEntry *)aRStack_48,(GridItemPoolEntry *)local_58);
    AdaptorPerkInfoWidget::SetPerk(pAVar8,aRStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_58);
    uVar10 = uVar10 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryWidget::onLinkToUIViewCreated() */

void __thiscall AdaptorPerkLibraryWidget::onLinkToUIViewCreated(AdaptorPerkLibraryWidget *this)

{
  bool bVar1;
  undefined4 uVar2;
  GridItemPoolEntry *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  HotUIFile *this_00;
  HotUIWidget *extraout_x0;
  MiniGamePerkMgr *pMVar7;
  AdaptorPerkInfoWidget *pAVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  AdaptorPerkInfoWidget *pAStack_60;
  undefined8 auStack_58 [2];
  RtWeakPtr aRStack_48 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetUnlockedPerkList();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
  uStack_70 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_38);
  uStack_68 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_70,(__normal_iterator *)&uStack_68), bVar1)
  {
    pGVar3 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_70);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_48,pGVar3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&uStack_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&uStack_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    pAStack_60 = (AdaptorPerkInfoWidget *)
                 std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar4,uVar5,lVar6 + 0x10);
    auStack_58[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)&uStack_20);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&pAStack_60,(__normal_iterator *)auStack_58);
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&uStack_20,
                 (string *)(lVar6 + 0x10));
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_48);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&uStack_70);
  }
  this_00 = (HotUIFile *)FUN_0366e094(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)aRStack_48,"InnerScroll");
  HotUIFile::GetWidgetByName(this_00,(string *)aRStack_48);
  std::string::~string((string *)aRStack_48);
  nop();
  nop();
  uVar10 = 0;
  while( true ) {
    uVar9 = FUN_0366e0a0(uStack_20,uStack_18);
    if (uVar9 <= uVar10) break;
    uVar4 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar5 = FUN_0366e0ac(uStack_20,uVar10);
    FUN_05475d88(aRStack_48,uVar5);
    pMVar7 = (MiniGamePerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar5 = FUN_0366e0ac(uStack_20,uVar10);
    FUN_05475d88((string *)&pAStack_60,uVar5);
    uVar2 = MiniGamePerkMgr::GetCurrentPerkLevel(pMVar7,(string *)&pAStack_60);
    PennyPerkMgr::CreatePerkData((RtWeakPtr *)auStack_58,uVar4,aRStack_48,uVar2);
    std::string::~string((string *)&pAStack_60);
    std::string::~string((string *)aRStack_48);
    pAVar8 = ::operator_new(0x160);
    AdaptorPerkInfoWidget::AdaptorPerkInfoWidget(pAVar8);
    pAStack_60 = pAVar8;
    std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::push_back
              ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)
               (this + 0x120),&pAStack_60);
    pAVar8 = pAStack_60;
    std::string::string((string *)aRStack_48,"PerkInfoWidgetLibrary");
    HotUIAdaptor::SetParentAndFile((HotUIAdaptor *)pAVar8,extraout_x0,(string *)aRStack_48);
    std::string::~string((string *)aRStack_48);
    nop();
    AdaptorPerkInfoWidget::SetInfoType(pAStack_60,1);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)pAStack_60);
    pAVar8 = pAStack_60;
    GridItemPoolEntry::GridItemPoolEntry
              ((GridItemPoolEntry *)aRStack_48,(GridItemPoolEntry *)auStack_58);
    AdaptorPerkInfoWidget::SetPerk(pAVar8,aRStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)auStack_58);
    uVar10 = uVar10 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&uStack_20);
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)avStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

